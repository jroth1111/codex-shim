
undefined1  [16] FUN_103d3b71c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong *extraout_x1;
  ulong *extraout_x1_00;
  ulong *puVar6;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  undefined1 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  long *unaff_x22;
  long **unaff_x23;
  ulong uVar16;
  long **pplVar17;
  ulong *unaff_x24;
  long *plVar18;
  undefined2 *puVar19;
  ulong *unaff_x25;
  long **pplVar20;
  ulong unaff_x26;
  ulong unaff_x27;
  long *unaff_x28;
  long lVar21;
  long lVar22;
  ulong uVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long **pplStack_468;
  long **pplStack_460;
  ulong uStack_458;
  ulong uStack_450;
  long *plStack_448;
  ulong uStack_440;
  long *plStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  ulong uStack_418;
  ulong uStack_410;
  char cStack_408;
  undefined7 uStack_407;
  ulong uStack_400;
  undefined8 uStack_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined2 uStack_108;
  long **pplStack_100;
  undefined2 uStack_f8;
  long **pplStack_f0;
  undefined8 uStack_e0;
  long **pplStack_d8;
  long **pplStack_98;
  ulong *puStack_90;
  undefined2 uStack_88;
  long **pplStack_80;
  
  bVar24 = *(byte *)(param_1 + 0x358);
  if (bVar24 < 3) {
    if (bVar24 == 0) {
      *(undefined1 *)(param_1 + 0x359) = 1;
      *(long *)(param_1 + 0x360) = *(long *)(param_1 + 0x348) + 0x10;
      *(undefined1 *)(param_1 + 0x3d0) = 0;
      goto LAB_103d3b78c;
    }
    if (bVar24 == 1) {
      func_0x000108a07af4();
LAB_103d3d320:
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x28,&UNK_108dc14f3);
      if (unaff_x24 != (ulong *)0x7fffffffffffffff) {
        puVar5 = (undefined *)func_0x000103d37b6c(unaff_x28,&UNK_108dc1e1f,6);
        if (puVar5 == (undefined *)0x0) {
          lVar9 = unaff_x28[1];
          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                    (unaff_x28,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
          goto LAB_103d3d3cc;
        }
        goto LAB_103d3cb44;
      }
      goto LAB_103d3cb3c;
    }
    func_0x000108a07b10(&UNK_10b2f9380);
LAB_103d3d3e8:
    uVar16 = unaff_x24[1];
    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
              (unaff_x24,&UNK_108dc14fd,uVar16 != 0x7fffffffffffffff);
    if (uVar16 == 0x7fffffffffffffff) goto LAB_103d3cb8c;
LAB_103d3d410:
    if ((uStack_88._1_1_ != '\0') &&
       (lVar9 = (*pplStack_460)[1],
       __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                 (*pplStack_460,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
       lVar9 == 0x7fffffffffffffff)) goto LAB_103d3cb8c;
LAB_103d3d55c:
    unaff_x24 = (ulong *)0x0;
    goto LAB_103d3cb9c;
  }
  if (bVar24 == 3) {
LAB_103d3b78c:
    lVar9 = func_0x000103e35098(param_1 + 0x360,param_2);
    if (lVar9 == 0) {
      uVar7 = 3;
LAB_103d3bb48:
      *(undefined1 *)(param_1 + 0x358) = uVar7;
      uVar4 = 1;
      goto LAB_103d3bc20;
    }
    *(long *)(param_1 + 0x350) = lVar9;
    if (((*(char *)(param_1 + 0x3d0) == '\x03') && (*(char *)(param_1 + 0x3c8) == '\x03')) &&
       (*(char *)(param_1 + 0x380) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x388);
      if (*(long *)(param_1 + 0x390) != 0) {
        (**(code **)(*(long *)(param_1 + 0x390) + 0x18))(*(undefined8 *)(param_1 + 0x398));
      }
    }
    lVar9 = *(long *)(param_1 + 0x350);
    if (*(char *)(lVar9 + 0x68) != '\x02') {
      *(undefined1 *)(param_1 + 0x359) = 0;
      _memcpy(param_1 + 0x360,param_1,0x348);
      *(long *)(param_1 + 0x6a8) = lVar9 + 0x28;
      uVar16 = *(ulong *)(param_1 + 0x360);
      goto joined_r0x000103d3b83c;
    }
    auVar25 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(7,&UNK_108dc1586,0x13);
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x360);
joined_r0x000103d3b83c:
    unaff_x20 = (long *)(param_1 + 0x360);
    if (uVar16 == 0x17) {
LAB_103d3bb28:
      auVar25 = func_0x000103d225d4(*(undefined8 *)(param_1 + 0x6a8),param_2);
      puVar6 = auVar25._8_8_;
      if (auVar25._0_8_ == 3) {
        bVar14 = false;
        bVar15 = true;
        lVar9 = *unaff_x20;
      }
      else {
LAB_103d3bb3c:
        puVar6 = auVar25._8_8_;
        if (auVar25._0_8_ == 4) {
          uVar7 = 4;
          goto LAB_103d3bb48;
        }
        bVar15 = false;
        bVar14 = true;
        lVar9 = *unaff_x20;
        unaff_x24 = puVar6;
      }
    }
    else {
      unaff_x20 = (long *)(param_1 + 0x360);
      unaff_x22 = *(long **)(param_1 + 0x6a8);
      if (((ulong)unaff_x22[4] <= (ulong)unaff_x22[1]) &&
         (auVar25 = func_0x000103d225d4(unaff_x22,param_2), auVar25._0_8_ != 3)) goto LAB_103d3bb3c;
      *(undefined8 *)(param_1 + 0x360) = 0x17;
      unaff_x25 = &uStack_450;
      _memcpy(unaff_x25,param_1 + 0x368,0x340);
      lVar9 = 0;
      if (0x12 < uVar16) {
        lVar9 = uVar16 - 0x13;
      }
      uStack_458 = uVar16;
      plStack_110 = unaff_x22;
      if (lVar9 < 2) {
        if (lVar9 == 0) {
          lVar9 = unaff_x22[1];
          pplVar17 = (long **)(ulong)(lVar9 != 0x7fffffffffffffff);
          pplVar20 = (long **)(unaff_x22[2] - lVar9);
          lVar10 = lVar9;
          if (pplVar20 < pplVar17) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x22,pplVar17,1);
            pplVar20 = (long **)(unaff_x22[2] - unaff_x22[1]);
            lVar10 = unaff_x22[1];
          }
          _memset(*unaff_x22 + lVar10,0x7b,pplVar17);
          if (pplVar20 < pplVar17) {
            uStack_e0 = pplVar17;
            pplStack_d8 = pplVar20;
            __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_e0);
            goto LAB_103d3d988;
          }
          unaff_x22[1] = lVar10 + (long)pplVar17;
          if (lVar9 == 0x7fffffffffffffff) {
LAB_103d3b9c0:
            unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
            goto LAB_103d3ba9c;
          }
          uStack_e0 = (long **)CONCAT62(uStack_e0._2_6_,0x100);
          pplStack_d8 = &plStack_110;
          unaff_x24 = (ulong *)func_0x000103d34480(&uStack_e0);
          if ((unaff_x24 != (ulong *)0x0) ||
             (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_e0,&UNK_108dc13fe,2),
             pplVar17 = pplStack_d8, unaff_x24 != (ulong *)0x0)) goto LAB_103d3ba9c;
          if ((char)uStack_e0 == '\x01') goto LAB_103d3d7d4;
          lVar9 = (*pplStack_d8)[1];
          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                    (*pplStack_d8,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
          if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3b9c0;
          unaff_x24 = (ulong *)func_0x000103e70204(uStack_120,uStack_118,*pplVar17);
          if ((unaff_x24 != (ulong *)0x0) ||
             (unaff_x24 = (ulong *)func_0x000103dd0f70(&uStack_458,&uStack_e0),
             unaff_x24 != (ulong *)0x0)) goto LAB_103d3ba9c;
          if (((ulong)uStack_e0 & 1) != 0) goto LAB_103d3d95c;
          if ((uStack_e0._1_1_ != '\0') &&
             (lVar9 = (*pplStack_d8)[1],
             __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                       (*pplStack_d8,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
             lVar9 == 0x7fffffffffffffff)) goto LAB_103d3b9c0;
LAB_103d3c87c:
          unaff_x24 = (ulong *)0x0;
        }
        else {
          lVar9 = unaff_x22[1];
          pplVar17 = (long **)(ulong)(lVar9 != 0x7fffffffffffffff);
          pplVar20 = (long **)(unaff_x22[2] - lVar9);
          lVar10 = lVar9;
          if (pplVar20 < pplVar17) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x22,pplVar17,1);
            pplVar20 = (long **)(unaff_x22[2] - unaff_x22[1]);
            lVar10 = unaff_x22[1];
          }
          _memset(*unaff_x22 + lVar10,0x7b,pplVar17);
          if (pplVar20 < pplVar17) {
            uStack_e0 = pplVar17;
            pplStack_d8 = pplVar20;
            __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_e0);
            goto LAB_103d3d988;
          }
          unaff_x22[1] = lVar10 + (long)pplVar17;
          if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba48;
          uStack_108 = 0x100;
          pplStack_100 = &plStack_110;
          unaff_x24 = (ulong *)func_0x000103d34480(&uStack_108);
          if (unaff_x24 == (ulong *)0x0) {
            if ((uStack_108 & 1) == 0) {
              unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc13fe,2);
              pplVar17 = pplStack_100;
              if (unaff_x24 == (ulong *)0x0) {
                if ((uStack_108 & 1) != 0) {
LAB_103d3d7d4:
                  puVar5 = &UNK_10b2fff50;
LAB_103d3d964:
                  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,puVar5);
                  goto LAB_103d3d988;
                }
                lVar9 = (*pplStack_100)[1];
                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                          (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                if (lVar9 != 0x7fffffffffffffff) {
                  unaff_x24 = (ulong *)func_0x000103e70204(uStack_400,uStack_3f8,*pplVar17);
                  if ((unaff_x24 != (ulong *)0x0) ||
                     (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc1400,6),
                     unaff_x23 = pplStack_100, unaff_x24 != (ulong *)0x0)) goto LAB_103d3ba9c;
                  if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
                  lVar9 = (*pplStack_100)[1];
                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                            (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                  if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba48;
                  unaff_x27 = 0x8000000000000005;
                  lVar9 = uStack_450 + 0x7ffffffffffffffa;
                  if (uStack_450 < 0x8000000000000006) {
                    lVar9 = 2;
                  }
                  if (lVar9 < 2) {
                    if (lVar9 == 0) {
                      lVar9 = (*unaff_x23)[1];
                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                (*unaff_x23,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                      if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3cb08;
                      uStack_e0 = (long **)CONCAT62(uStack_e0._2_6_,0x100);
                      pplStack_d8 = unaff_x23;
                      unaff_x24 = (ulong *)func_0x000103d31118(&uStack_e0,&UNK_108dc3439,5,
                                                               plStack_448[1],plStack_448[2]);
                      if ((unaff_x24 == (ulong *)0x0) &&
                         ((plStack_448[3] == -0x8000000000000000 ||
                          (unaff_x24 = (ulong *)func_0x000103d32c1c(&uStack_e0,&UNK_108dc343e,10),
                          unaff_x24 == (ulong *)0x0)))) {
                        lVar10 = plStack_448[6];
                        lVar9 = plStack_448[0x28];
                        unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_e0,&UNK_108cde374,4);
                        pplVar17 = pplStack_d8;
                        if (unaff_x24 == (ulong *)0x0) {
                          if (((ulong)uStack_e0 & 1) != 0) goto LAB_103d3d7d4;
                          lVar21 = (*pplStack_d8)[1];
                          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                    (*pplStack_d8,&UNK_108dc14fc,lVar21 != 0x7fffffffffffffff);
                          if (lVar21 == 0x7fffffffffffffff) goto LAB_103d3cb08;
                          unaff_x24 = (ulong *)func_0x000103dd0d18((char)lVar9,*pplVar17);
                          if ((unaff_x24 != (ulong *)0x0) ||
                             (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_e0,&UNK_108dc1a7f,7),
                             pplVar17 = pplStack_d8, unaff_x24 != (ulong *)0x0)) goto LAB_103d3cb9c;
                          if (((ulong)uStack_e0 & 1) != 0) goto LAB_103d3d7d4;
                          lVar9 = (*pplStack_d8)[1];
                          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                    (*pplStack_d8,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                          if (lVar9 != 0x7fffffffffffffff) {
                            if (plStack_448[0xf] == -0x7ffffffffffffffc) {
                              lVar9 = plStack_448[0x11];
                              lVar21 = plStack_448[0x12];
                              plVar18 = *pplVar17;
                              lVar22 = plVar18[1];
                              __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                        (plVar18,&UNK_108dc14f9,lVar22 != 0x7fffffffffffffff);
                              if (lVar22 != 0x7fffffffffffffff) {
                                if (lVar21 == 0) {
                                  lVar9 = plVar18[1];
                                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                            (plVar18,&UNK_108dc14fd,lVar9 != 0x7fffffffffffffff);
                                }
                                else {
                                  unaff_x24 = (ulong *)func_0x000103ddd294(lVar9,pplVar17);
                                  if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                                  if (lVar21 != 1) {
                                    lVar21 = lVar21 * 200 + -200;
                                    do {
                                      lVar9 = lVar9 + 200;
                                      lVar22 = (*pplVar17)[1];
                                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                                (*pplVar17,&UNK_108dc14fb,
                                                 lVar22 != 0x7fffffffffffffff);
                                      if (lVar22 == 0x7fffffffffffffff) goto LAB_103d3cb08;
                                      unaff_x24 = (ulong *)func_0x000103ddd294(lVar9,pplVar17);
                                      if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                                      lVar21 = lVar21 + -200;
                                    } while (lVar21 != 0);
                                  }
                                  lVar9 = (*pplVar17)[1];
                                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                            (*pplVar17,&UNK_108dc14fd,lVar9 != 0x7fffffffffffffff);
                                }
                                if (lVar9 != 0x7fffffffffffffff) {
                                  if (lVar10 != -0x8000000000000000) goto LAB_103d3d804;
                                  goto LAB_103d3d824;
                                }
                              }
                            }
                            else {
                              unaff_x24 = (ulong *)func_0x000103ddd294(plStack_448 + 0xf,pplVar17);
                              if ((lVar10 != -0x8000000000000000) && (unaff_x24 == (ulong *)0x0)) {
LAB_103d3d804:
                                unaff_x24 = (ulong *)func_0x000103d3468c(&uStack_e0,plStack_448 + 6)
                                ;
                              }
                              if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                              pplVar17 = pplStack_d8;
                              if (((ulong)uStack_e0 & 1) != 0) goto LAB_103d3d95c;
LAB_103d3d824:
                              if ((uStack_e0._1_1_ == '\0') ||
                                 (lVar9 = (*pplVar17)[1],
                                 __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                           (*pplVar17,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                                 lVar9 != 0x7fffffffffffffff)) goto LAB_103d3d55c;
                            }
                          }
LAB_103d3cb08:
                          unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
                        }
                      }
                      goto LAB_103d3cb9c;
                    }
                    lVar9 = (*unaff_x23)[1];
                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                              (*unaff_x23,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                    if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3cb8c;
                    uStack_88 = 0x100;
                    pplStack_80 = unaff_x23;
                    unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_88,&UNK_108dc2e3e,5);
                    pplVar17 = pplStack_80;
                    if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                    if ((uStack_88 & 1) != 0) goto LAB_103d3d7d4;
                    pplStack_460 = pplStack_80;
                    lVar9 = (*pplStack_80)[1];
                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                              (*pplStack_80,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                    if (lVar9 != 0x7fffffffffffffff) {
                      unaff_x24 = (ulong *)*pplVar17;
                      uVar16 = unaff_x24[1];
                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                (unaff_x24,&UNK_108dc14f9,uVar16 != 0x7fffffffffffffff);
                      if (uVar16 != 0x7fffffffffffffff) {
                        if (plStack_438 == (long *)0x0) goto LAB_103d3d3e8;
                        lVar10 = (*pplVar17)[1];
                        lVar9 = *(long *)(uStack_440 + 0x18);
                        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                  (*pplVar17,&UNK_108dc14fa,lVar10 != 0x7fffffffffffffff);
                        if (lVar10 == 0x7fffffffffffffff) {
LAB_103d3cf90:
                          unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
                        }
                        else {
                          uStack_f8 = 0x100;
                          pplStack_f0 = pplVar17;
                          unaff_x24 = (ulong *)func_0x000103d31118(&uStack_f8,&UNK_108dc22b5,3,
                                                                   *(undefined8 *)(uStack_440 + 8),
                                                                   *(undefined8 *)
                                                                    (uStack_440 + 0x10));
                          if (unaff_x24 == (ulong *)0x0) {
                            if (lVar9 == -0x8000000000000000) {
LAB_103d3d488:
                              if ((((uStack_f8 & 1) != 0) || (uStack_f8._1_1_ == '\0')) ||
                                 (lVar9 = (*pplStack_f0)[1],
                                 __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                           (*pplStack_f0,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff)
                                 , lVar9 != 0x7fffffffffffffff)) {
                                if (plStack_438 != (long *)0x1) {
                                  plVar18 = (long *)(uStack_440 + 0x48);
                                  lVar9 = (long)plStack_438 * 0x30 + -0x30;
                                  do {
                                    lVar10 = (*pplVar17)[1];
                                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                              (*pplVar17,&UNK_108dc14fb,lVar10 != 0x7fffffffffffffff
                                              );
                                    if (lVar10 == 0x7fffffffffffffff) goto LAB_103d3cb8c;
                                    lVar21 = *plVar18;
                                    lVar10 = (*pplVar17)[1];
                                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                              (*pplVar17,&UNK_108dc14fa,lVar10 != 0x7fffffffffffffff
                                              );
                                    if (lVar10 == 0x7fffffffffffffff) goto LAB_103d3cf90;
                                    uStack_f8 = 0x100;
                                    pplStack_f0 = pplVar17;
                                    unaff_x24 = (ulong *)func_0x000103d31118(&uStack_f8,
                                                                             &UNK_108dc22b5,3,
                                                                             plVar18[-2],plVar18[-1]
                                                                            );
                                    if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                                    if (lVar21 != -0x8000000000000000) {
                                      if ((char)uStack_f8 == '\x01') goto LAB_103d3d56c;
                                      unaff_x24 = (ulong *)func_0x000103d32c1c(&uStack_f8,
                                                                               &UNK_108c61018,4,
                                                                               plVar18);
                                      if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                                    }
                                    if ((((uStack_f8 & 1) == 0) && (uStack_f8._1_1_ != '\0')) &&
                                       (lVar10 = (*pplStack_f0)[1],
                                       __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                                 (*pplStack_f0,&UNK_108dc14f2,
                                                  lVar10 != 0x7fffffffffffffff),
                                       lVar10 == 0x7fffffffffffffff)) goto LAB_103d3cf90;
                                    plVar18 = plVar18 + 6;
                                    lVar9 = lVar9 + -0x30;
                                  } while (lVar9 != 0);
                                }
                                lVar9 = (*pplVar17)[1];
                                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                          (*pplVar17,&UNK_108dc14fd,lVar9 != 0x7fffffffffffffff);
                                if (lVar9 != 0x7fffffffffffffff) goto LAB_103d3d410;
                                goto LAB_103d3cb8c;
                              }
                              goto LAB_103d3cf90;
                            }
                            if ((uStack_f8 & 1) == 0) {
                              unaff_x24 = (ulong *)func_0x000103d32c1c(&uStack_f8,&UNK_108c61018,4,
                                                                       (long *)(uStack_440 + 0x18));
                              if (unaff_x24 == (ulong *)0x0) goto LAB_103d3d488;
                            }
                            else {
LAB_103d3d56c:
                              uStack_e0 = (long **)0xa;
                              unaff_x24 = (ulong *)func_0x000108a4a0f8(&uStack_e0,0,0);
                            }
                          }
                        }
                        goto LAB_103d3cb9c;
                      }
                    }
LAB_103d3cb8c:
                    unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
LAB_103d3cb9c:
                    if (unaff_x24 != (ulong *)0x0) goto LAB_103d3ba9c;
                  }
                  else {
                    if (lVar9 == 2) {
                      lVar9 = (*unaff_x23)[1];
                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                (*unaff_x23,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                      if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3cb3c;
                      uStack_e0 = (long **)CONCAT62(uStack_e0._2_6_,0x100);
                      pplStack_d8 = unaff_x23;
                      unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_e0,&UNK_108dc1ec2,6);
                      pplVar17 = pplStack_d8;
                      if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                      if (((ulong)uStack_e0 & 1) != 0) goto LAB_103d3d7d4;
                      lVar9 = (*pplStack_d8)[1];
                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                (*pplStack_d8,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                      if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3cb3c;
                      unaff_x28 = *pplVar17;
                      unaff_x24 = (ulong *)unaff_x28[1];
                      unaff_x26 = uStack_450;
                      if (cStack_408 == '\0') goto LAB_103d3d320;
                      if (cStack_408 == '\x01') {
                        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                  (unaff_x28,&UNK_108dc14f3,unaff_x24 != (ulong *)0x7fffffffffffffff
                                  );
                        if (unaff_x24 != (ulong *)0x7fffffffffffffff) {
                          puVar5 = (undefined *)func_0x000103d37b6c(unaff_x28,&UNK_108dc1e25,7);
                          if (puVar5 != (undefined *)0x0) goto LAB_103d3cb44;
                          lVar9 = unaff_x28[1];
                          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                    (unaff_x28,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
LAB_103d3d3cc:
                          if (lVar9 != 0x7fffffffffffffff) {
                            if (unaff_x26 == unaff_x27) {
                              uVar16 = 0;
                            }
                            else {
                              unaff_x24 = (ulong *)func_0x000103ebebc4(&uStack_e0,&UNK_108dc1a7f,7,
                                                                       unaff_x25);
                              if (unaff_x24 != (ulong *)0x0) goto LAB_103d3cb9c;
                              uVar16 = (ulong)uStack_e0 & 0xff;
                            }
                            unaff_x24 = (ulong *)0x0;
                            if (((uVar16 & 1) != 0) || (uStack_e0._1_1_ == '\0'))
                            goto LAB_103d3cb9c;
                            lVar9 = (*pplStack_d8)[1];
                            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                      (*pplStack_d8,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff);
                            if (lVar9 != 0x7fffffffffffffff) goto LAB_103d3d55c;
                          }
                        }
LAB_103d3cb3c:
                        puVar5 = &UNK_10b2fa388;
                      }
                      else {
                        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                  (unaff_x28,&UNK_108dc14f3,unaff_x24 != (ulong *)0x7fffffffffffffff
                                  );
                        if (unaff_x24 == (ulong *)0x7fffffffffffffff) goto LAB_103d3cb3c;
                        puVar5 = (undefined *)func_0x000103d37b6c(unaff_x28,&UNK_108dc1e2c,6);
                        if (puVar5 == (undefined *)0x0) {
                          lVar9 = unaff_x28[1];
                          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                    (unaff_x28,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
                          goto LAB_103d3d3cc;
                        }
                      }
LAB_103d3cb44:
                      unaff_x24 = (ulong *)func_0x000108a4a084(puVar5);
                      goto LAB_103d3cb9c;
                    }
                    if (lVar9 != 3) {
                      unaff_x24 = (ulong *)func_0x000103d392c8(&plStack_448,unaff_x23);
                      goto LAB_103d3cb9c;
                    }
                    plVar18 = *unaff_x23;
                    lVar9 = plVar18[1];
                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                              (plVar18,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                    if ((lVar9 == 0x7fffffffffffffff) ||
                       (lVar9 = plVar18[1],
                       __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                 (plVar18,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                       lVar9 == 0x7fffffffffffffff)) goto LAB_103d3ba48;
                  }
                  if ((uStack_108._1_1_ == '\0') ||
                     (lVar9 = (*unaff_x23)[1],
                     __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                               (*unaff_x23,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                     lVar9 != 0x7fffffffffffffff)) goto LAB_103d3c87c;
                }
LAB_103d3ba48:
                unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
              }
            }
            else {
              uStack_e0 = (long **)0xa;
              unaff_x24 = (ulong *)func_0x000108a4a0f8(&uStack_e0,0,0);
            }
          }
        }
      }
      else {
        if (lVar9 != 2) {
          lVar9 = unaff_x22[1];
          pplVar17 = (long **)(ulong)(lVar9 != 0x7fffffffffffffff);
          pplVar20 = (long **)(unaff_x22[2] - lVar9);
          lVar10 = lVar9;
          if (pplVar20 < pplVar17) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x22,pplVar17,1);
            pplVar20 = (long **)(unaff_x22[2] - unaff_x22[1]);
            lVar10 = unaff_x22[1];
          }
          _memset(*unaff_x22 + lVar10,0x7b,pplVar17);
          if (pplVar20 < pplVar17) {
            uStack_e0 = pplVar17;
            pplStack_d8 = pplVar20;
            __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_e0);
            goto LAB_103d3d988;
          }
          unaff_x22[1] = lVar10 + (long)pplVar17;
          if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba8c;
          uStack_88 = 0x100;
          pplStack_80 = &plStack_110;
          unaff_x24 = (ulong *)func_0x000103d34480(&uStack_88);
          if (unaff_x24 == (ulong *)0x0) {
            if ((uStack_88 & 1) == 0) {
              unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_88,&UNK_108dc13fe,2);
              pplVar17 = pplStack_80;
              if (unaff_x24 == (ulong *)0x0) {
                if ((uStack_88 & 1) != 0) goto LAB_103d3d7d4;
                lVar9 = (*pplStack_80)[1];
                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                          (*pplStack_80,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                if (lVar9 == 0x7fffffffffffffff) {
LAB_103d3ba8c:
                  unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
                }
                else {
                  unaff_x24 = (ulong *)func_0x000103e70204(uStack_3e8,uStack_3e0,*pplVar17);
                  if ((unaff_x24 != (ulong *)0x0) ||
                     (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_88,&UNK_108dc192c,5),
                     pplVar17 = pplStack_80, unaff_x24 != (ulong *)0x0)) goto LAB_103d3ba9c;
                  if ((uStack_88 & 1) != 0) goto LAB_103d3d7d4;
                  lVar9 = (*pplStack_80)[1];
                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                            (*pplStack_80,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                  if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba8c;
                  lVar9 = (*pplVar17)[1];
                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                            (*pplVar17,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                  if (lVar9 != 0x7fffffffffffffff) {
                    uStack_f8 = 0x100;
                    pplStack_f0 = pplVar17;
                    unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_f8,&UNK_108c520a8,4);
                    pplVar20 = pplStack_f0;
                    if (unaff_x24 != (ulong *)0x0) goto LAB_103d3ba9c;
                    if ((uStack_f8 & 1) != 0) goto LAB_103d3d7d4;
                    lVar9 = (*pplStack_f0)[1];
                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                              (*pplStack_f0,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                    if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3c11c;
                    plVar18 = *pplVar20;
                    iVar1 = -iStack_3f0;
                    if (-1 < iStack_3f0) {
                      iVar1 = iStack_3f0;
                    }
                    uVar16 = __ZN38__LT_u32_u20_as_u20_itoa__Unsigned_GT_3fmt17h06c25dc7700f2aa5E
                                       (iVar1,(long)&uStack_e0 + 1);
                    if (iStack_3f0 < 0) {
                      if (10 < uVar16) {
                        func_0x000108a07bdc(uVar16,0xb,&UNK_10b2faa50);
                        goto LAB_103d3d988;
                      }
                      *(undefined1 *)((long)&uStack_e0 + uVar16) = 0x2d;
LAB_103d3d1fc:
                      uVar23 = 0xb - uVar16;
                      lVar9 = (long)&uStack_e0 + uVar16;
                      do {
                        uVar12 = plVar18[1];
                        uVar11 = uVar12 ^ 0x7fffffffffffffff;
                        uVar16 = uVar23;
                        if (uVar11 <= uVar23) {
                          uVar16 = uVar11;
                        }
                        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                  (plVar18,lVar9,uVar16);
                        if (uVar12 == 0x7fffffffffffffff) goto LAB_103d3c11c;
                        lVar9 = lVar9 + uVar16;
                        uVar23 = uVar23 - uVar16;
                      } while (uVar23 != 0);
                    }
                    else {
                      uVar16 = uVar16 + 1;
                      if (uVar16 != 0xb) goto LAB_103d3d1fc;
                    }
                    unaff_x24 = (ulong *)func_0x000103d32308(&uStack_f8,&UNK_108dc15ae,7,plStack_448
                                                             ,uStack_440);
                    if ((unaff_x24 != (ulong *)0x0) ||
                       ((plStack_438 != (long *)0x8000000000000005 &&
                        (unaff_x24 = (ulong *)func_0x000103ebebc4(&uStack_f8,&UNK_108c61024,4,
                                                                  &plStack_438),
                        unaff_x24 != (ulong *)0x0)))) goto LAB_103d3ba9c;
                    if (((uStack_f8 & 1) != 0) ||
                       ((uStack_f8._1_1_ == '\0' ||
                        (lVar9 = (*pplStack_f0)[1],
                        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                  (*pplStack_f0,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                        lVar9 != 0x7fffffffffffffff)))) {
                      if ((uStack_88._1_1_ == '\0') ||
                         (lVar9 = (*pplVar17)[1],
                         __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                   (*pplVar17,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                         lVar9 != 0x7fffffffffffffff)) goto LAB_103d3c87c;
                      goto LAB_103d3ba8c;
                    }
                  }
LAB_103d3c11c:
                  unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
                }
              }
            }
            else {
              uStack_e0 = (long **)0xa;
              unaff_x24 = (ulong *)func_0x000108a4a0f8(&uStack_e0,0,0);
            }
          }
          goto LAB_103d3ba9c;
        }
        lVar9 = unaff_x22[1];
        pplVar17 = (long **)(ulong)(lVar9 != 0x7fffffffffffffff);
        pplVar20 = (long **)(unaff_x22[2] - lVar9);
        lVar10 = lVar9;
        if (pplVar20 < pplVar17) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x22,pplVar17,1);
          pplVar20 = (long **)(unaff_x22[2] - unaff_x22[1]);
          lVar10 = unaff_x22[1];
        }
        _memset(*unaff_x22 + lVar10,0x7b,pplVar17);
        if (pplVar20 < pplVar17) {
          uStack_e0 = pplVar17;
          pplStack_d8 = pplVar20;
          __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_e0);
          goto LAB_103d3d988;
        }
        unaff_x22[1] = lVar10 + (long)pplVar17;
        if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba04;
        uStack_108 = 0x100;
        pplStack_100 = &plStack_110;
        unaff_x24 = (ulong *)func_0x000103d34480(&uStack_108);
        if (unaff_x24 != (ulong *)0x0) goto LAB_103d3ba9c;
        uVar16 = uStack_450 ^ 0x8000000000000000;
        if (-1 < (long)uStack_450) {
          uVar16 = 4;
        }
        if ((long)uVar16 < 2) {
          if (uVar16 == 0) {
            if ((plStack_420 != (long *)0x0) && (plStack_420[3] != 0)) {
              lVar9 = 0;
              lVar10 = *plStack_420;
              uVar23 = plStack_420[1];
              uVar11 = uVar23 & 0x2bfeacfba9176138;
              uVar4 = *(undefined8 *)(lVar10 + uVar11);
              uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                         CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                  CONCAT14(-((char)((ulong)uVar4 >> 0x20) == '\x15')
                                                           ,CONCAT13(-((char)((ulong)uVar4 >> 0x18)
                                                                      == '\x15'),
                                                                     CONCAT12(-((char)((ulong)uVar4
                                                                                      >> 0x10) ==
                                                                               '\x15'),CONCAT11(-((
                                                  char)((ulong)uVar4 >> 8) == '\x15'),
                                                  -((char)uVar4 == '\x15')))))))) &
                       0x8080808080808080;
              while( true ) {
                for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                  uVar12 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar12 = uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar23;
                  plVar18 = (long *)(lVar10 + -0x20 + uVar12 * -0x20);
                  if (plVar18[1] == 0x2bfeacfba9176138 && *plVar18 == 0x742dbc0e7b7ca316) {
                    lVar10 = lVar10 + uVar12 * -0x20;
                    auVar25 = (**(code **)(*(long *)(lVar10 + -8) + 0x28))
                                        (*(undefined8 *)(lVar10 + -0x10));
                    pplVar17 = auVar25._0_8_;
                    (**(code **)(auVar25._8_8_ + 0x18))(&uStack_e0);
                    if (uStack_e0 != (long **)0x742dbc0e7b7ca316 ||
                        pplStack_d8 != (long **)0x2bfeacfba9176138) {
                      pplVar17 = (long **)0x0;
                    }
                    goto LAB_103d3c6b0;
                  }
                }
                bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar4 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar4 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar4 >> 0x28) == -1)
                                                               ,CONCAT14(-((char)((ulong)uVar4 >>
                                                                                 0x20) == -1),
                                                                         CONCAT13(-((char)((ulong)
                                                  uVar4 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                     -1),-((char)uVar4 == -1))))))))
                                    ,1);
                if ((bVar24 & 1) != 0) break;
                lVar9 = lVar9 + 8;
                uVar11 = uVar11 + lVar9 & uVar23;
                uVar4 = *(undefined8 *)(lVar10 + uVar11);
                uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                  CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                           CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                    CONCAT14(-((char)((ulong)uVar4 >> 0x20) ==
                                                              '\x15'),CONCAT13(-((char)((ulong)uVar4
                                                                                       >> 0x18) ==
                                                                                '\x15'),CONCAT12(-((
                                                  char)((ulong)uVar4 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar4 >> 8) == '\x15'),
                                                           -((char)uVar4 == '\x15')))))))) &
                         0x8080808080808080;
              }
            }
            pplVar17 = (long **)0x0;
LAB_103d3c6b0:
            uStack_e0 = (long **)0x8000000000000000;
            if (pplVar17 == (long **)0x0) {
              uStack_e0 = (long **)0x8000000000000001;
            }
            puStack_90 = &uStack_418;
            pplStack_d8 = pplVar17;
            pplStack_98 = &plStack_448;
            unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc27c1,6);
            pplVar20 = pplStack_100;
            if (unaff_x24 == (ulong *)0x0) {
              if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
              lVar9 = (*pplStack_100)[1];
              __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                        (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
              if (lVar9 == 0x7fffffffffffffff) {
LAB_103d3c748:
                puVar5 = &UNK_10b2fa388;
              }
              else {
                plVar18 = *pplVar20;
                lVar9 = plVar18[1];
                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                          (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
                if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3c748;
                puVar5 = (undefined *)func_0x000103d37b6c(plVar18,&UNK_108dc6a36,0x17);
                if (puVar5 == (undefined *)0x0) {
                  lVar9 = plVar18[1];
                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                            (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
                  if (lVar9 != 0x7fffffffffffffff) {
                    unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc27c7,6);
                    pplVar20 = pplStack_100;
                    if (unaff_x24 != (ulong *)0x0) goto LAB_103d3c83c;
                    if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
                    lVar9 = (*pplStack_100)[1];
                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                              (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                    if (lVar9 != 0x7fffffffffffffff) {
                      plVar18 = *pplVar20;
                      lVar9 = plVar18[1];
                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                (plVar18,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                      if (lVar9 == 0x7fffffffffffffff) {
LAB_103d3c944:
                        unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
                      }
                      else {
                        uStack_f8 = 0x100;
                        pplStack_f0 = pplVar20;
                        if (((pplVar17 == (long **)0x0) ||
                            (unaff_x24 = (ulong *)func_0x000103d31f9c(&uStack_f8,&uStack_e0),
                            unaff_x24 == (ulong *)0x0)) &&
                           (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_f8,&UNK_108dc20e4,9),
                           pplVar17 = pplStack_f0, unaff_x24 == (ulong *)0x0)) {
                          if ((uStack_f8 & 1) != 0) goto LAB_103d3d7d4;
                          lVar9 = (*pplStack_f0)[1];
                          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                    (*pplStack_f0,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                          if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3c944;
                          unaff_x24 = (ulong *)func_0x000103e70204(uStack_430,uStack_428,*pplVar17);
                          if ((unaff_x24 == (ulong *)0x0) &&
                             (unaff_x24 = (ulong *)func_0x000103d32c1c(&uStack_f8,&UNK_108dc20ed,6,
                                                                       &plStack_448),
                             unaff_x24 == (ulong *)0x0)) {
                            if ((uStack_f8 & 1) != 0) goto LAB_103d3d95c;
                            if ((uStack_f8._1_1_ != '\0') &&
                               (lVar9 = (*pplStack_f0)[1],
                               __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                         (*pplStack_f0,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                               lVar9 == 0x7fffffffffffffff)) goto LAB_103d3c944;
LAB_103d3d08c:
                            unaff_x24 = (ulong *)0x0;
                          }
                        }
                      }
                      goto LAB_103d3c83c;
                    }
                  }
                  goto LAB_103d3c748;
                }
              }
              unaff_x24 = (ulong *)func_0x000108a4a084(puVar5);
            }
          }
          else {
            plVar18 = (long *)CONCAT71(uStack_407,cStack_408);
            if ((plVar18 != (long *)0x0) && (plVar18[3] != 0)) {
              lVar9 = 0;
              lVar10 = *plVar18;
              uVar23 = plVar18[1];
              uVar11 = uVar23 & 0x2bfeacfba9176138;
              uVar4 = *(undefined8 *)(lVar10 + uVar11);
              uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                         CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                  CONCAT14(-((char)((ulong)uVar4 >> 0x20) == '\x15')
                                                           ,CONCAT13(-((char)((ulong)uVar4 >> 0x18)
                                                                      == '\x15'),
                                                                     CONCAT12(-((char)((ulong)uVar4
                                                                                      >> 0x10) ==
                                                                               '\x15'),CONCAT11(-((
                                                  char)((ulong)uVar4 >> 8) == '\x15'),
                                                  -((char)uVar4 == '\x15')))))))) &
                       0x8080808080808080;
              while( true ) {
                for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                  uVar12 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar12 = uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar23;
                  plVar18 = (long *)(lVar10 + -0x20 + uVar12 * -0x20);
                  if (plVar18[1] == 0x2bfeacfba9176138 && *plVar18 == 0x742dbc0e7b7ca316) {
                    lVar10 = lVar10 + uVar12 * -0x20;
                    auVar25 = (**(code **)(*(long *)(lVar10 + -8) + 0x28))
                                        (*(undefined8 *)(lVar10 + -0x10));
                    pplVar17 = auVar25._0_8_;
                    (**(code **)(auVar25._8_8_ + 0x18))(&uStack_e0);
                    if (uStack_e0 != (long **)0x742dbc0e7b7ca316 ||
                        pplStack_d8 != (long **)0x2bfeacfba9176138) {
                      pplVar17 = (long **)0x0;
                    }
                    goto LAB_103d3c794;
                  }
                }
                bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar4 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar4 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar4 >> 0x28) == -1)
                                                               ,CONCAT14(-((char)((ulong)uVar4 >>
                                                                                 0x20) == -1),
                                                                         CONCAT13(-((char)((ulong)
                                                  uVar4 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                     -1),-((char)uVar4 == -1))))))))
                                    ,1);
                if ((bVar24 & 1) != 0) break;
                lVar9 = lVar9 + 8;
                uVar11 = uVar11 + lVar9 & uVar23;
                uVar4 = *(undefined8 *)(lVar10 + uVar11);
                uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                  CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                           CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                    CONCAT14(-((char)((ulong)uVar4 >> 0x20) ==
                                                              '\x15'),CONCAT13(-((char)((ulong)uVar4
                                                                                       >> 0x18) ==
                                                                                '\x15'),CONCAT12(-((
                                                  char)((ulong)uVar4 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar4 >> 8) == '\x15'),
                                                           -((char)uVar4 == '\x15')))))))) &
                         0x8080808080808080;
              }
            }
            pplVar17 = (long **)0x0;
LAB_103d3c794:
            pplStack_98 = &plStack_448;
            uStack_e0 = (long **)0x8000000000000000;
            if (pplVar17 == (long **)0x0) {
              uStack_e0 = (long **)0x8000000000000001;
            }
            puStack_90 = &uStack_400;
            pplStack_d8 = pplVar17;
            unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc27c1,6);
            pplVar20 = pplStack_100;
            if (unaff_x24 != (ulong *)0x0) goto LAB_103d3c83c;
            if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
            lVar9 = (*pplStack_100)[1];
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
            if (lVar9 == 0x7fffffffffffffff) {
LAB_103d3c82c:
              puVar5 = &UNK_10b2fa388;
            }
            else {
              plVar18 = *pplVar20;
              lVar9 = plVar18[1];
              __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                        (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
              if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3c82c;
              puVar5 = (undefined *)func_0x000103d37b6c(plVar18,&UNK_108dc69b8,0x16);
              if (puVar5 == (undefined *)0x0) {
                lVar9 = plVar18[1];
                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                          (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
                if (lVar9 != 0x7fffffffffffffff) {
                  unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc27c7,6);
                  pplVar20 = pplStack_100;
                  if (unaff_x24 != (ulong *)0x0) goto LAB_103d3c83c;
                  if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
                  lVar9 = (*pplStack_100)[1];
                  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                            (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                  if (lVar9 != 0x7fffffffffffffff) {
                    plVar18 = *pplVar20;
                    lVar9 = plVar18[1];
                    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                              (plVar18,&UNK_108dc14fa,lVar9 != 0x7fffffffffffffff);
                    if (lVar9 != 0x7fffffffffffffff) {
                      uStack_88 = 0x100;
                      pplStack_80 = pplVar20;
                      if (((pplVar17 != (long **)0x0) &&
                          (unaff_x24 = (ulong *)func_0x000103d31f9c(&uStack_88,&uStack_e0),
                          unaff_x24 != (ulong *)0x0)) ||
                         (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_88,&UNK_108dc1ef6,0xd),
                         pplVar17 = pplStack_80, unaff_x24 != (ulong *)0x0)) goto LAB_103d3c83c;
                      if ((uStack_88 & 1) != 0) goto LAB_103d3d7d4;
                      lVar9 = (*pplStack_80)[1];
                      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                (*pplStack_80,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                      if (lVar9 != 0x7fffffffffffffff) {
                        unaff_x24 = (ulong *)func_0x000103e70204(plStack_420,uStack_418,*pplVar17);
                        if ((unaff_x24 != (ulong *)0x0) ||
                           (unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_88,&UNK_108c983b8,8),
                           pplVar17 = pplStack_80, unaff_x24 != (ulong *)0x0)) goto LAB_103d3c83c;
                        if ((uStack_88 & 1) != 0) goto LAB_103d3d7d4;
                        pplStack_468 = pplStack_80;
                        lVar9 = (*pplStack_80)[1];
                        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                  (*pplStack_80,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                        if (lVar9 != 0x7fffffffffffffff) {
                          plVar18 = *pplVar17;
                          if ((uStack_410 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                            puVar19 = &uStack_f8;
                            lVar9 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                                              (uStack_410,&uStack_f8);
                            for (uVar16 = lVar9 - (long)puVar19; uVar16 != 0;
                                uVar16 = uVar16 - uVar23) {
                              uVar12 = plVar18[1];
                              uVar11 = uVar12 ^ 0x7fffffffffffffff;
                              uVar23 = uVar16;
                              if (uVar11 <= uVar16) {
                                uVar23 = uVar11;
                              }
                              __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                        (plVar18,puVar19,uVar23);
                              if (uVar12 == 0x7fffffffffffffff) goto LAB_103d3ca00;
                              puVar19 = (undefined2 *)((long)puVar19 + uVar23);
                            }
                          }
                          else {
                            puVar5 = &UNK_108c78dd4;
                            uVar16 = 4;
                            do {
                              uVar12 = plVar18[1];
                              uVar11 = uVar12 ^ 0x7fffffffffffffff;
                              uVar23 = uVar16;
                              if (uVar11 <= uVar16) {
                                uVar23 = uVar11;
                              }
                              __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                        (plVar18,puVar5,uVar23);
                              if (uVar12 == 0x7fffffffffffffff) goto LAB_103d3ca00;
                              puVar5 = puVar5 + uVar23;
                              uVar16 = uVar16 - uVar23;
                            } while (uVar16 != 0);
                          }
                          if (plStack_448 != (long *)0x0) {
                            unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_88,&UNK_108dc1988,5);
                            pplVar17 = pplStack_80;
                            if (unaff_x24 != (ulong *)0x0) goto LAB_103d3c83c;
                            if ((uStack_88 & 1) != 0) goto LAB_103d3d7d4;
                            pplStack_468 = pplStack_80;
                            lVar9 = (*pplStack_80)[1];
                            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                      (*pplStack_80,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
                            if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ca00;
                            plVar18 = *pplVar17;
                            if ((uStack_440 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                              puVar19 = &uStack_f8;
                              lVar9 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                                                (uStack_440,&uStack_f8);
                              for (uVar16 = lVar9 - (long)puVar19; uVar16 != 0;
                                  uVar16 = uVar16 - uVar23) {
                                uVar12 = plVar18[1];
                                uVar11 = uVar12 ^ 0x7fffffffffffffff;
                                uVar23 = uVar16;
                                if (uVar11 <= uVar16) {
                                  uVar23 = uVar11;
                                }
                                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                          (plVar18,puVar19,uVar23);
                                if (uVar12 == 0x7fffffffffffffff) goto LAB_103d3ca00;
                                puVar19 = (undefined2 *)((long)puVar19 + uVar23);
                              }
                            }
                            else {
                              puVar5 = &UNK_108c78dd4;
                              uVar16 = 4;
                              do {
                                uVar12 = plVar18[1];
                                uVar11 = uVar12 ^ 0x7fffffffffffffff;
                                uVar23 = uVar16;
                                if (uVar11 <= uVar16) {
                                  uVar23 = uVar11;
                                }
                                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                          (plVar18,puVar5,uVar23);
                                if (uVar12 == 0x7fffffffffffffff) goto LAB_103d3ca00;
                                puVar5 = puVar5 + uVar23;
                                uVar16 = uVar16 - uVar23;
                              } while (uVar16 != 0);
                            }
                          }
                          if (plStack_438 != (long *)0x8000000000000000) {
                            unaff_x24 = (ulong *)func_0x000103d32c1c(&uStack_88,&UNK_108dc15ae,7,
                                                                     &plStack_438);
                            if (unaff_x24 != (ulong *)0x0) goto LAB_103d3c83c;
                            if ((uStack_88 & 1) != 0) goto LAB_103d3d95c;
                            pplStack_468 = pplStack_80;
                          }
                          if ((uStack_88._1_1_ == '\0') ||
                             (lVar9 = (*pplStack_468)[1],
                             __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                                       (*pplStack_468,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
                             lVar9 != 0x7fffffffffffffff)) goto LAB_103d3d08c;
                        }
                      }
                    }
LAB_103d3ca00:
                    unaff_x24 = (ulong *)func_0x000108a4a084(&UNK_10b2fa388);
                    goto LAB_103d3c83c;
                  }
                }
                goto LAB_103d3c82c;
              }
            }
            unaff_x24 = (ulong *)func_0x000108a4a084(puVar5);
          }
LAB_103d3c83c:
          if (unaff_x24 != (ulong *)0x0) goto LAB_103d3ba9c;
          pplVar17 = pplStack_100;
          if ((uStack_108 & 1) != 0) {
LAB_103d3d95c:
            puVar5 = &UNK_10b2fff68;
            goto LAB_103d3d964;
          }
LAB_103d3c84c:
          if ((uStack_108._1_1_ == '\0') ||
             (lVar9 = (*pplVar17)[1],
             __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                       (*pplVar17,&UNK_108dc14f2,lVar9 != 0x7fffffffffffffff),
             lVar9 != 0x7fffffffffffffff)) goto LAB_103d3c87c;
LAB_103d3ba04:
          puVar5 = &UNK_10b2fa388;
        }
        else {
          if (uVar16 == 2) {
            if ((plStack_448 != (long *)0x0) && (plStack_448[3] != 0)) {
              lVar9 = 0;
              lVar10 = *plStack_448;
              uVar23 = plStack_448[1];
              uVar11 = uVar23 & 0x2bfeacfba9176138;
              uVar4 = *(undefined8 *)(lVar10 + uVar11);
              uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                         CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                  CONCAT14(-((char)((ulong)uVar4 >> 0x20) == '\x15')
                                                           ,CONCAT13(-((char)((ulong)uVar4 >> 0x18)
                                                                      == '\x15'),
                                                                     CONCAT12(-((char)((ulong)uVar4
                                                                                      >> 0x10) ==
                                                                               '\x15'),CONCAT11(-((
                                                  char)((ulong)uVar4 >> 8) == '\x15'),
                                                  -((char)uVar4 == '\x15')))))))) &
                       0x8080808080808080;
              while( true ) {
                while (uVar16 == 0) {
                  bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar4 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar4 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar4 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)uVar4
                                                                                       >> 0x20) ==
                                                                                -1),CONCAT13(-((char
                                                  )((ulong)uVar4 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                     -1),-((char)uVar4 == -1))))))))
                                      ,1);
                  if ((bVar24 & 1) != 0) goto LAB_103d3c460;
                  lVar9 = lVar9 + 8;
                  uVar11 = uVar11 + lVar9 & uVar23;
                  uVar4 = *(undefined8 *)(lVar10 + uVar11);
                  uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                    CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                             CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                      CONCAT14(-((char)((ulong)uVar4 >> 0x20) ==
                                                                '\x15'),CONCAT13(-((char)((ulong)
                                                  uVar4 >> 0x18) == '\x15'),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == '\x15')
                                                           ,CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                      '\x15'),-((char)uVar4 ==
                                                                               '\x15')))))))) &
                           0x8080808080808080;
                }
                uVar12 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar12 = uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar23;
                plVar18 = (long *)(lVar10 + -0x20 + uVar12 * -0x20);
                if (plVar18[1] == 0x2bfeacfba9176138 && *plVar18 == 0x742dbc0e7b7ca316) break;
                uVar16 = uVar16 - 1 & uVar16;
              }
              lVar10 = lVar10 + uVar12 * -0x20;
              (**(code **)(*(long *)(lVar10 + -8) + 0x28))(*(undefined8 *)(lVar10 + -0x10));
              (**(code **)(extraout_x1_02 + 0x18))(&uStack_e0);
            }
LAB_103d3c460:
            unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc27c1,6);
            pplVar17 = pplStack_100;
            if (unaff_x24 != (ulong *)0x0) goto LAB_103d3ba9c;
            if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
            lVar9 = (*pplStack_100)[1];
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
            if (lVar9 != 0x7fffffffffffffff) {
              plVar18 = *pplVar17;
              lVar9 = plVar18[1];
              __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                        (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
              if (lVar9 != 0x7fffffffffffffff) {
                puVar5 = (undefined *)func_0x000103d37b6c(plVar18,&UNK_108dc6bfc,0x19);
                if (puVar5 != (undefined *)0x0) goto LAB_103d3ba0c;
                lVar9 = plVar18[1];
                __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                          (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
LAB_103d3c5e4:
                if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba04;
                goto LAB_103d3c84c;
              }
            }
            goto LAB_103d3ba04;
          }
          if (uVar16 != 3) {
            plVar18 = (long *)CONCAT44(uStack_3ec,iStack_3f0);
            if ((plVar18 != (long *)0x0) && (plVar18[3] != 0)) {
              lVar9 = 0;
              lVar10 = *plVar18;
              uVar23 = plVar18[1];
              uVar11 = uVar23 & 0x2bfeacfba9176138;
              uVar4 = *(undefined8 *)(lVar10 + uVar11);
              uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                         CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                  CONCAT14(-((char)((ulong)uVar4 >> 0x20) == '\x15')
                                                           ,CONCAT13(-((char)((ulong)uVar4 >> 0x18)
                                                                      == '\x15'),
                                                                     CONCAT12(-((char)((ulong)uVar4
                                                                                      >> 0x10) ==
                                                                               '\x15'),CONCAT11(-((
                                                  char)((ulong)uVar4 >> 8) == '\x15'),
                                                  -((char)uVar4 == '\x15')))))))) &
                       0x8080808080808080;
              while( true ) {
                while (uVar16 == 0) {
                  bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar4 >> 0x38) == -1),
                                               CONCAT16(-((char)((ulong)uVar4 >> 0x30) == -1),
                                                        CONCAT15(-((char)((ulong)uVar4 >> 0x28) ==
                                                                  -1),CONCAT14(-((char)((ulong)uVar4
                                                                                       >> 0x20) ==
                                                                                -1),CONCAT13(-((char
                                                  )((ulong)uVar4 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                     -1),-((char)uVar4 == -1))))))))
                                      ,1);
                  if ((bVar24 & 1) != 0) goto LAB_103d3c638;
                  lVar9 = lVar9 + 8;
                  uVar11 = uVar11 + lVar9 & uVar23;
                  uVar4 = *(undefined8 *)(lVar10 + uVar11);
                  uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                    CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                             CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                      CONCAT14(-((char)((ulong)uVar4 >> 0x20) ==
                                                                '\x15'),CONCAT13(-((char)((ulong)
                                                  uVar4 >> 0x18) == '\x15'),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == '\x15')
                                                           ,CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                      '\x15'),-((char)uVar4 ==
                                                                               '\x15')))))))) &
                           0x8080808080808080;
                }
                uVar12 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar12 = uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar23;
                plVar18 = (long *)(lVar10 + -0x20 + uVar12 * -0x20);
                if (plVar18[1] == 0x2bfeacfba9176138 && *plVar18 == 0x742dbc0e7b7ca316) break;
                uVar16 = uVar16 - 1 & uVar16;
              }
              lVar10 = lVar10 + uVar12 * -0x20;
              auVar25 = (**(code **)(*(long *)(lVar10 + -8) + 0x28))
                                  (*(undefined8 *)(lVar10 + -0x10));
              pplVar17 = auVar25._0_8_;
              (**(code **)(auVar25._8_8_ + 0x18))(&uStack_e0);
              if ((pplVar17 != (long **)0x0) &&
                 (pplStack_d8 == (long **)0x2bfeacfba9176138 &&
                  uStack_e0 == (long **)0x742dbc0e7b7ca316)) {
                uStack_e0 = (long **)0x8000000000000000;
                goto LAB_103d3c65c;
              }
            }
LAB_103d3c638:
            uStack_e0 = (long **)0x8000000000000002;
            if (plStack_438 != (long *)0x8000000000000005) {
              uStack_e0 = (long **)0x8000000000000001;
            }
LAB_103d3c65c:
            pplStack_98 = &plStack_438;
            pplStack_d8 = pplVar17;
            puStack_90 = unaff_x25;
            unaff_x24 = (ulong *)func_0x000103dc54b0(&uStack_e0,&uStack_108);
            goto LAB_103d3c83c;
          }
          if ((plStack_448 != (long *)0x0) && (plStack_448[3] != 0)) {
            lVar9 = 0;
            lVar10 = *plStack_448;
            uVar23 = plStack_448[1];
            uVar11 = uVar23 & 0x2bfeacfba9176138;
            uVar4 = *(undefined8 *)(lVar10 + uVar11);
            uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                              CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                       CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                CONCAT14(-((char)((ulong)uVar4 >> 0x20) == '\x15'),
                                                         CONCAT13(-((char)((ulong)uVar4 >> 0x18) ==
                                                                   '\x15'),CONCAT12(-((char)((ulong)
                                                  uVar4 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar4 >> 8) == '\x15'),
                                                           -((char)uVar4 == '\x15')))))))) &
                     0x8080808080808080;
            while( true ) {
              while (uVar16 == 0) {
                bVar24 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar4 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar4 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar4 >> 0x28) == -1)
                                                               ,CONCAT14(-((char)((ulong)uVar4 >>
                                                                                 0x20) == -1),
                                                                         CONCAT13(-((char)((ulong)
                                                  uVar4 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar4 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar4 >> 8) ==
                                                                     -1),-((char)uVar4 == -1))))))))
                                    ,1);
                if ((bVar24 & 1) != 0) goto LAB_103d3c534;
                lVar9 = lVar9 + 8;
                uVar11 = uVar11 + lVar9 & uVar23;
                uVar4 = *(undefined8 *)(lVar10 + uVar11);
                uVar16 = CONCAT17(-((char)((ulong)uVar4 >> 0x38) == '\x15'),
                                  CONCAT16(-((char)((ulong)uVar4 >> 0x30) == '\x15'),
                                           CONCAT15(-((char)((ulong)uVar4 >> 0x28) == '\x15'),
                                                    CONCAT14(-((char)((ulong)uVar4 >> 0x20) ==
                                                              '\x15'),CONCAT13(-((char)((ulong)uVar4
                                                                                       >> 0x18) ==
                                                                                '\x15'),CONCAT12(-((
                                                  char)((ulong)uVar4 >> 0x10) == '\x15'),
                                                  CONCAT11(-((char)((ulong)uVar4 >> 8) == '\x15'),
                                                           -((char)uVar4 == '\x15')))))))) &
                         0x8080808080808080;
              }
              uVar12 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar23;
              plVar18 = (long *)(lVar10 + -0x20 + uVar12 * -0x20);
              if (plVar18[1] == 0x2bfeacfba9176138 && *plVar18 == 0x742dbc0e7b7ca316) break;
              uVar16 = uVar16 - 1 & uVar16;
            }
            lVar10 = lVar10 + uVar12 * -0x20;
            (**(code **)(*(long *)(lVar10 + -8) + 0x28))(*(undefined8 *)(lVar10 + -0x10));
            (**(code **)(extraout_x1_03 + 0x18))(&uStack_e0);
          }
LAB_103d3c534:
          unaff_x24 = (ulong *)func_0x000103ea7678(&uStack_108,&UNK_108dc27c1,6);
          pplVar17 = pplStack_100;
          if (unaff_x24 != (ulong *)0x0) goto LAB_103d3ba9c;
          if ((uStack_108 & 1) != 0) goto LAB_103d3d7d4;
          lVar9 = (*pplStack_100)[1];
          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                    (*pplStack_100,&UNK_108dc14fc,lVar9 != 0x7fffffffffffffff);
          if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba04;
          plVar18 = *pplVar17;
          lVar9 = plVar18[1];
          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                    (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
          if (lVar9 == 0x7fffffffffffffff) goto LAB_103d3ba04;
          puVar5 = (undefined *)func_0x000103d37b6c(plVar18,&UNK_108dc6d68,0x20);
          if (puVar5 == (undefined *)0x0) {
            lVar9 = plVar18[1];
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (plVar18,&UNK_108dc14f3,lVar9 != 0x7fffffffffffffff);
            goto LAB_103d3c5e4;
          }
        }
LAB_103d3ba0c:
        unaff_x24 = (ulong *)func_0x000108a4a084(puVar5);
      }
LAB_103d3ba9c:
      if (unaff_x24 == (ulong *)0x0) {
        lVar9 = unaff_x22[1];
        if (unaff_x22[2] == lVar9) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x22,1,1);
          lVar9 = unaff_x22[1];
          lVar10 = unaff_x22[2];
          *(undefined1 *)(*unaff_x22 + lVar9) = 10;
          if (lVar10 == lVar9) {
            pplStack_d8 = (long **)0x0;
            uStack_e0 = (long **)0x1;
            __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_e0);
LAB_103d3d988:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103d3d98c);
            (*pcVar3)();
          }
        }
        else {
          *(undefined1 *)(*unaff_x22 + lVar9) = 10;
        }
        unaff_x22[1] = lVar9 + 1;
        FUN_103d985c8(&uStack_458);
        goto LAB_103d3bb28;
      }
      FUN_103d985c8(&uStack_458);
      bVar15 = false;
      bVar14 = false;
      lVar9 = *unaff_x20;
      puVar6 = extraout_x1;
    }
    if (lVar9 != 0x17) {
      FUN_103d985c8(unaff_x20);
      puVar6 = extraout_x1_00;
    }
    auVar25._8_8_ = puVar6;
    auVar25._0_8_ = unaff_x24;
    if (bVar15) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puVar6;
      auVar25 = auVar2 << 0x40;
    }
    else if (!bVar14) {
      if (*unaff_x24 == 1) {
        uVar16 = unaff_x24[1];
        _free(unaff_x24);
        auVar25._8_8_ = extraout_x1_01;
        auVar25._0_8_ = uVar16;
      }
      else {
        uVar8 = 0x15;
        if ((1L << (*unaff_x24 & 0x3f) & 0x1ffffc1U) == 0) {
          uVar8 = 0x25;
        }
        auVar25 = func_0x000105dc65cc(uVar8,unaff_x24);
      }
    }
  }
  unaff_x24 = auVar25._0_8_;
  pcVar13 = *(char **)(param_1 + 0x350);
  if (*pcVar13 == '\0') {
    *pcVar13 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar13,auVar25._8_8_,1000000000);
  }
  FUN_1060fa678(pcVar13,1,pcVar13);
  lVar9 = **(long **)(param_1 + 0x348);
  **(long **)(param_1 + 0x348) = lVar9 + -1;
  LORelease();
  if (lVar9 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103e319ec(param_1 + 0x348);
  }
  if ((*(byte *)(param_1 + 0x359) & 1) != 0) {
    FUN_103d985c8(param_1);
  }
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x358) = 1;
LAB_103d3bc20:
  auVar26._8_8_ = unaff_x24;
  auVar26._0_8_ = uVar4;
  return auVar26;
}

