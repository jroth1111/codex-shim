
void FUN_102161444(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long unaff_x25;
  long lVar25;
  long *plVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  long lStack_630;
  undefined8 *puStack_628;
  long lStack_618;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined *puStack_588;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  long *plStack_540;
  undefined *puStack_538;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 uStack_4f8;
  long *plStack_4f0;
  undefined *puStack_4e8;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined *puStack_498;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  undefined *puStack_448;
  long lStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined *puStack_3f8;
  long lStack_3c8;
  undefined4 *puStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined *puStack_3a8;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  undefined *puStack_358;
  long lStack_330;
  undefined8 uStack_328;
  undefined1 *puStack_318;
  undefined4 *puStack_310;
  undefined8 uStack_308;
  undefined1 **ppuStack_300;
  undefined *puStack_2f8;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined *puStack_298;
  long lStack_270;
  undefined8 uStack_268;
  undefined1 *puStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined1 **ppuStack_240;
  undefined *puStack_238;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined *puStack_1d8;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined *puStack_188;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined *puStack_138;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined *puStack_78;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined *puStack_28;
  
  puVar10 = (undefined8 *)_malloc(0x1a);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = 0x6f63736944657261;
    *puVar10 = 0x68536e6967756c50;
    *(undefined8 *)((long)puVar10 + 0x12) = 0x7974696c69626172;
    *(undefined8 *)((long)puVar10 + 10) = 0x65766f6373694465;
    lStack_48 = 0x1a;
    uStack_38 = 0x1a;
    plStack_30 = &lStack_48;
    puStack_28 = &DAT_1023201f4;
    puStack_40 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s___null_108ae5e02,&plStack_30);
    if (lStack_48 != 0) {
      _free(puStack_40);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0x1a);
  if (lStack_48 != 0) {
    _free(puStack_40);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xb);
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar10 + 7) = 0x65646f4d;
    *puVar10 = 0x4d786f62646e6153;
    lStack_98 = 0xb;
    uStack_88 = 0xb;
    plStack_80 = &lStack_98;
    puStack_78 = &DAT_1023201f4;
    puStack_90 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_80);
    if (lStack_98 != 0) {
      _free(puStack_90);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xb);
  if (lStack_98 != 0) {
    _free(puStack_90);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puStack_f0 = (undefined4 *)_malloc(6);
  if (puStack_f0 != (undefined4 *)0x0) {
    ppuStack_e0 = &puStack_f8;
    *puStack_f0 = 0x69727473;
    *(undefined2 *)(puStack_f0 + 1) = 0x676e;
    puStack_f8 = (undefined1 *)0x6;
    uStack_e8 = 6;
    puStack_d8 = &DAT_1023201f4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_110,s___null_108ae5e02,&ppuStack_e0);
    if (puStack_f8 != (undefined1 *)0x0) {
      _free(puStack_f0);
    }
    puStack_f0 = (undefined4 *)&DAT_1023201f4;
    puStack_f8 = (undefined1 *)&lStack_110;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&puStack_f8);
    if (lStack_110 != 0) {
      _free(uStack_108);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,6);
  if (lStack_110 != 0) {
    _free(*unaff_x20);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0x11);
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar10 + 2) = 0x72;
    puVar10[1] = 0x6577656976655273;
    *puVar10 = 0x6c61766f72707041;
    lStack_158 = 0x11;
    uStack_148 = 0x11;
    plStack_140 = &lStack_158;
    puStack_138 = &DAT_1023201f4;
    puStack_150 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_140);
    if (lStack_158 != 0) {
      _free(puStack_150);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0x11);
  if (lStack_158 != 0) {
    _free(puStack_150);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xd);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0x6572694474726f53;
    *(undefined8 *)((long)puVar10 + 5) = 0x6e6f697463657269;
    lStack_1a8 = 0xd;
    uStack_198 = 0xd;
    plStack_190 = &lStack_1a8;
    puStack_188 = &DAT_1023201f4;
    puStack_1a0 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_190);
    if (lStack_1a8 != 0) {
      _free(puStack_1a0);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xd);
  if (lStack_1a8 != 0) {
    _free(puStack_1a0);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xf);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0x696d694c65746152;
    *(undefined8 *)((long)puVar10 + 7) = 0x776f646e69577469;
    lStack_1f8 = 0xf;
    uStack_1e8 = 0xf;
    plStack_1e0 = &lStack_1f8;
    puStack_1d8 = &DAT_1023201f4;
    puStack_1f0 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_1e0);
    if (lStack_1f8 != 0) {
      _free(puStack_1f0);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xf);
  if (lStack_1f8 != 0) {
    _free(puStack_1f0);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puStack_250 = (undefined8 *)_malloc(0xf);
  if (puStack_250 != (undefined8 *)0x0) {
    ppuStack_240 = &puStack_258;
    *puStack_250 = 0x6574756c6f736241;
    *(undefined8 *)((long)puStack_250 + 7) = 0x6675426874615065;
    puStack_258 = (undefined1 *)0xf;
    uStack_248 = 0xf;
    puStack_238 = &DAT_1023201f4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_270,s_Array<_>_108ae5df7,&ppuStack_240);
    if (puStack_258 != (undefined1 *)0x0) {
      _free(puStack_250);
    }
    puStack_250 = (undefined8 *)&DAT_1023201f4;
    puStack_258 = (undefined1 *)&lStack_270;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&puStack_258);
    if (lStack_270 != 0) {
      _free(uStack_268);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xf);
  if (lStack_270 != 0) {
    _free(*unaff_x20);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0x17);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = 0x6e6f697373696d72;
    *puVar10 = 0x6550657669746341;
    *(undefined8 *)((long)puVar10 + 0xf) = 0x656c69666f72506e;
    lStack_2b8 = 0x17;
    uStack_2a8 = 0x17;
    plStack_2a0 = &lStack_2b8;
    puStack_298 = &DAT_1023201f4;
    puStack_2b0 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_2a0);
    if (lStack_2b8 != 0) {
      _free(puStack_2b0);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0x17);
  if (lStack_2b8 != 0) {
    _free(puStack_2b0);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puStack_310 = (undefined4 *)_malloc(6);
  if (puStack_310 != (undefined4 *)0x0) {
    ppuStack_300 = &puStack_318;
    *puStack_310 = 0x69727473;
    *(undefined2 *)(puStack_310 + 1) = 0x676e;
    puStack_318 = (undefined1 *)0x6;
    uStack_308 = 6;
    puStack_2f8 = &DAT_1023201f4;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_330,s_Array<_>_108ae5df7,&ppuStack_300);
    if (puStack_318 != (undefined1 *)0x0) {
      _free(puStack_310);
    }
    puStack_310 = (undefined4 *)&DAT_1023201f4;
    puStack_318 = (undefined1 *)&lStack_330;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&puStack_318);
    if (lStack_330 != 0) {
      _free(uStack_328);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,6);
  if (lStack_330 != 0) {
    _free(*unaff_x20);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0x65646f4d68747541;
    lStack_378 = 8;
    uStack_368 = 8;
    plStack_360 = &lStack_378;
    puStack_358 = &DAT_1023201f4;
    puStack_370 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_360);
    if (lStack_378 != 0) {
      _free(puStack_370);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,8);
  if (lStack_378 != 0) {
    _free(puStack_370);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar12 = (undefined4 *)_malloc(7);
  if (puVar12 != (undefined4 *)0x0) {
    *(undefined4 *)((long)puVar12 + 3) = 0x3256736c;
    *puVar12 = 0x6c6f6f54;
    lStack_3c8 = 7;
    uStack_3b8 = 7;
    plStack_3b0 = &lStack_3c8;
    puStack_3a8 = &DAT_1023201f4;
    puStack_3c0 = puVar12;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_3b0);
    if (lStack_3c8 != 0) {
      _free(puStack_3c0);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,7);
  if (lStack_3c8 != 0) {
    _free(puStack_3c0);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xe);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0x7041726f466b7341;
    *(undefined8 *)((long)puVar10 + 6) = 0x6c61766f72707041;
    lStack_418 = 0xe;
    uStack_408 = 0xe;
    plStack_400 = &lStack_418;
    puStack_3f8 = &DAT_1023201f4;
    puStack_410 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_400);
    if (lStack_418 != 0) {
      _free(puStack_410);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xe);
  if (lStack_418 != 0) {
    _free(puStack_410);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xd);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0x50786f62646e6153;
    *(undefined8 *)((long)puVar10 + 5) = 0x7963696c6f50786f;
    lStack_468 = 0xd;
    uStack_458 = 0xd;
    plStack_450 = &lStack_468;
    puStack_448 = &DAT_1023201f4;
    puStack_460 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_450);
    if (lStack_468 != 0) {
      _free(puStack_460);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xd);
  if (lStack_468 != 0) {
    _free(puStack_460);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xf);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0x416c6f6f54707041;
    *(undefined8 *)((long)puVar10 + 7) = 0x6c61766f72707041;
    lStack_4b8 = 0xf;
    uStack_4a8 = 0xf;
    plStack_4a0 = &lStack_4b8;
    puStack_498 = &DAT_1023201f4;
    puStack_4b0 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_4a0);
    if (lStack_4b8 != 0) {
      _free(puStack_4b0);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xf);
  if (lStack_4b8 != 0) {
    _free(puStack_4b0);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0x1f);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = 0x7953656c69466c61;
    *puVar10 = 0x6e6f697469646441;
    *(undefined8 *)((long)puVar10 + 0x17) = 0x736e6f697373696d;
    *(undefined8 *)((long)puVar10 + 0xf) = 0x7265506d65747379;
    lStack_508 = 0x1f;
    uStack_4f8 = 0x1f;
    plStack_4f0 = &lStack_508;
    puStack_4e8 = &DAT_1023201f4;
    puStack_500 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_4f0);
    if (lStack_508 != 0) {
      _free(puStack_500);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0x1f);
  if (lStack_508 != 0) {
    _free(puStack_500);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0x1c);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = 0x726f7774654e6c61;
    *puVar10 = 0x6e6f697469646441;
    *(undefined8 *)((long)puVar10 + 0x14) = 0x736e6f697373696d;
    *(undefined8 *)((long)puVar10 + 0xc) = 0x7265506b726f7774;
    lStack_558 = 0x1c;
    uStack_548 = 0x1c;
    plStack_540 = &lStack_558;
    puStack_538 = &DAT_1023201f4;
    puStack_550 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_540);
    if (lStack_558 != 0) {
      _free(puStack_550);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0x1c);
  if (lStack_558 != 0) {
    _free(puStack_550);
  }
  uVar11 = __Unwind_Resume(uVar11);
  puVar10 = (undefined8 *)_malloc(0xc);
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0x65637275;
    *puVar10 = 0x6f53646165726854;
    lStack_5a8 = 0xc;
    uStack_598 = 0xc;
    plStack_590 = &lStack_5a8;
    puStack_588 = &DAT_1023201f4;
    puStack_5a0 = puVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(uVar11,s___null_108ae5e02,&plStack_590);
    if (lStack_5a8 != 0) {
      _free(puStack_5a0);
    }
    return;
  }
  uVar11 = func_0x0001087c9084(1,0xc);
  if (lStack_5a8 != 0) {
    _free(puStack_5a0);
  }
  auVar28 = __Unwind_Resume(uVar11);
  plVar27 = auVar28._8_8_;
  puVar13 = auVar28._0_8_;
  puVar10 = (undefined8 *)_malloc(0xc0);
  if (puVar10 != (undefined8 *)0x0) {
    bVar16 = false;
    *puVar10 = 0;
    *(undefined2 *)((long)puVar10 + 0xba) = 0;
    lVar3 = *plVar27;
    plVar4 = (long *)plVar27[1];
    lStack_630 = 0;
    plVar2 = plVar4 + plVar27[2] * 2;
    lStack_618 = 0;
    plVar27 = plVar4;
    puStack_628 = puVar10;
    do {
      if (bVar16) {
        if (unaff_x21 == 0) {
LAB_1021623b8:
          lVar25 = lStack_630;
          puVar10 = puStack_628;
          if (lVar3 != 0) {
            _free(plVar4);
          }
          goto joined_r0x0001021623cc;
        }
        lVar18 = unaff_x25;
        lVar25 = unaff_x21;
        plVar26 = plVar27;
        if (plVar27 == plVar2) goto LAB_1021621e4;
LAB_10216218c:
        plVar27 = plVar26 + 2;
        lVar24 = *plVar26;
        unaff_x25 = plVar26[1];
        lVar23 = *(long *)(lVar25 + 0x10);
        unaff_x21 = lVar24;
        if (lVar23 == *(long *)(lVar24 + 0x10)) {
          uVar11 = *(undefined8 *)(lVar24 + 8);
          iVar9 = _memcmp(*(undefined8 *)(lVar25 + 8),uVar11,lVar23);
          if (iVar9 == 0) {
            lVar18 = unaff_x25;
            if (plVar27 == plVar2) {
              unaff_x21 = 0;
              lVar25 = lVar24;
              plVar27 = plVar2;
            }
            else {
              do {
                plVar27 = plVar26 + 4;
                lVar17 = plVar26[2];
                unaff_x25 = plVar26[3];
                unaff_x21 = lVar17;
                lVar25 = lVar24;
                if (lVar23 != *(long *)(lVar17 + 0x10)) goto LAB_1021621fc;
                uVar22 = *(undefined8 *)(lVar17 + 8);
                iVar9 = _memcmp(uVar11,uVar22,lVar23);
                if (iVar9 != 0) goto LAB_1021621fc;
                plVar27 = plVar26 + 4;
                uVar11 = uVar22;
                lVar24 = lVar17;
                lVar18 = unaff_x25;
                plVar26 = plVar26 + 2;
              } while (plVar27 != plVar2);
              unaff_x21 = 0;
              lVar25 = lVar17;
              plVar27 = plVar2;
            }
          }
        }
      }
      else {
        if (plVar27 == plVar2) goto LAB_1021623b8;
        plVar26 = plVar27 + 2;
        lVar25 = *plVar27;
        lVar18 = plVar27[1];
        if (plVar26 != plVar2) goto LAB_10216218c;
LAB_1021621e4:
        unaff_x21 = 0;
        plVar27 = plVar2;
      }
LAB_1021621fc:
      uVar5 = *(ushort *)((long)puVar10 + 0xba);
      if (uVar5 < 0xb) {
        *(ushort *)((long)puVar10 + 0xba) = uVar5 + 1;
        puVar10[(ulong)uVar5 + 1] = lVar25;
        puVar10[(ulong)uVar5 + 0xc] = lVar18;
      }
      else {
        lVar24 = 0;
        do {
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)_malloc(0x120);
            if (puVar10 == (undefined8 *)0x0) goto LAB_102162630;
            *puVar10 = 0;
            *(undefined2 *)((long)puVar10 + 0xba) = 0;
            puVar10[0x18] = puStack_628;
            lVar24 = lStack_630 + 1;
            if (lStack_630 == -1) {
              func_0x000108a07a20(&UNK_10b276b90);
              goto LAB_10216265c;
            }
            *puStack_628 = puVar10;
            *(undefined2 *)(puStack_628 + 0x17) = 0;
            puStack_628 = puVar10;
            lStack_630 = lVar24;
            break;
          }
          lVar24 = lVar24 + 1;
        } while (10 < *(ushort *)((long)puVar10 + 0xba));
        puVar14 = (undefined8 *)_malloc(0xc0);
        if (puVar14 == (undefined8 *)0x0) goto LAB_1021625d4;
        *puVar14 = 0;
        *(undefined2 *)((long)puVar14 + 0xba) = 0;
        lVar23 = lVar24;
        while (lVar23 = lVar23 + -1, lVar23 != 0) {
          puVar15 = (undefined8 *)_malloc(0x120);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x120);
            goto LAB_10216265c;
          }
          *puVar15 = 0;
          *(undefined2 *)((long)puVar15 + 0xba) = 0;
          puVar15[0x18] = puVar14;
          *puVar14 = puVar15;
          *(undefined2 *)(puVar14 + 0x17) = 0;
          puVar14 = puVar15;
        }
        uVar5 = *(ushort *)((long)puVar10 + 0xba);
        if (10 < uVar5) goto LAB_1021625e4;
        *(ushort *)((long)puVar10 + 0xba) = uVar5 + 1;
        puVar10[(ulong)uVar5 + 1] = lVar25;
        puVar10[(ulong)uVar5 + 0xc] = lVar18;
        puVar10[(ulong)uVar5 + 0x19] = puVar14;
        *puVar14 = puVar10;
        *(ushort *)(puVar14 + 0x17) = uVar5 + 1;
        for (; lVar24 != 0; lVar24 = lVar24 + -1) {
          puVar10 = (undefined8 *)puVar10[(ulong)*(ushort *)((long)puVar10 + 0xba) + 0x18];
        }
      }
      lStack_618 = lStack_618 + 1;
      bVar16 = true;
    } while( true );
  }
  func_0x0001087c906c(8,0xc0);
LAB_10216265c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x102162660);
  (*pcVar8)();
joined_r0x0001021623cc:
  if (lVar25 == 0) {
LAB_102162578:
    *puVar13 = puStack_628;
    puVar13[1] = lStack_630;
    puVar13[2] = lStack_618;
    return;
  }
  uVar5 = *(ushort *)((long)puVar10 + 0xba);
  if (uVar5 == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d238a2,0x19,&UNK_10b276b30);
LAB_1021625d4:
    func_0x0001087c906c(8,0xc0);
    goto LAB_10216265c;
  }
  puVar14 = (undefined8 *)puVar10[(ulong)uVar5 + 0x18];
  uVar6 = *(ushort *)((long)puVar14 + 0xba);
  if (uVar6 < 5) {
    lVar18 = puVar10[(ulong)uVar5 + 0x17];
    uVar7 = *(ushort *)(lVar18 + 0xba);
    lVar3 = -(ulong)uVar6;
    lVar24 = lVar3 + 5;
    if ((uint)uVar7 < (uint)lVar24) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d23968,0x27,&UNK_10b276c08);
    }
    else {
      lVar20 = (ulong)uVar7 - lVar24;
      *(short *)(lVar18 + 0xba) = (short)lVar20;
      *(undefined2 *)((long)puVar14 + 0xba) = 5;
      puVar15 = puVar14 + 1;
      lVar21 = (ulong)uVar6 * 8;
      _memmove(puVar15 + lVar24,puVar15,lVar21);
      puVar1 = puVar14 + 0xc;
      _memmove(puVar1 + lVar24,puVar1,lVar21);
      lVar23 = lVar20 + 1;
      lVar17 = (ulong)uVar7 - lVar23;
      if (lVar17 == lVar3 + 4) {
        _memcpy(puVar15,lVar18 + 8 + lVar23 * 8,lVar17 * 8);
        _memcpy(puVar1,lVar18 + 0x60 + lVar23 * 8,lVar17 * 8);
        uVar22 = *(undefined8 *)(lVar18 + 0x60 + lVar20 * 8);
        uVar19 = puVar10[uVar5];
        puVar10[uVar5] = *(undefined8 *)(lVar18 + 8 + lVar20 * 8);
        uVar11 = puVar10[(ulong)uVar5 + 0xb];
        puVar10[(ulong)uVar5 + 0xb] = uVar22;
        puVar14[lVar24] = uVar19;
        puVar1[lVar17] = uVar11;
        if (lVar25 != 1) {
          puVar10 = puVar14 + 0x18;
          _memmove(puVar10 + lVar24,puVar10,lVar21 + 8);
          _memcpy(puVar10,lVar18 + lVar23 * 8 + 0xc0,lVar24 * 8);
          puVar10 = (undefined8 *)puVar14[0x18];
          *puVar10 = puVar14;
          *(undefined2 *)(puVar10 + 0x17) = 0;
          puVar10 = (undefined8 *)puVar14[0x19];
          *puVar10 = puVar14;
          *(undefined2 *)(puVar10 + 0x17) = 1;
          puVar10 = (undefined8 *)puVar14[0x1a];
          *puVar10 = puVar14;
          *(undefined2 *)(puVar10 + 0x17) = 2;
          puVar10 = (undefined8 *)puVar14[0x1b];
          *puVar10 = puVar14;
          *(undefined2 *)(puVar10 + 0x17) = 3;
          puVar10 = (undefined8 *)puVar14[0x1c];
          *puVar10 = puVar14;
          *(undefined2 *)(puVar10 + 0x17) = 4;
          puVar10 = (undefined8 *)puVar14[0x1d];
          *puVar10 = puVar14;
          *(undefined2 *)(puVar10 + 0x17) = 5;
          goto LAB_102162468;
        }
        goto LAB_102162578;
      }
    }
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d2390b,0x28,&UNK_10b276ba8);
LAB_102162630:
    func_0x0001087c906c(8,0x120);
    goto LAB_10216265c;
  }
LAB_102162468:
  lVar25 = lVar25 + -1;
  puVar10 = puVar14;
  goto joined_r0x0001021623cc;
LAB_1021625e4:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d238bb,0x20,&UNK_10b276b78);
  goto LAB_10216265c;
}

