
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
__ZN12codex_config6loader29validate_config_toml_strictly17hb8bda8be7f004108E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_51c0 [20400];
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [11];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  __ZN25codex_utils_absolute_path20AbsolutePathBufGuard3new17h7de3fa69cf09380cE(param_6,param_7);
  FUN_102a2f118(auStack_f0,param_5);
  uStack_108 = 0;
  uStack_100 = param_1;
  uStack_f8 = param_2;
  FUN_10293a7c4(&lStack_158,&uStack_108,param_3,param_4,auStack_f0);
  if (lStack_158 == -0x8000000000000000) {
    uVar7 = 0;
  }
  else {
    uStack_80 = uStack_140;
    uStack_88 = uStack_148;
    uStack_70 = uStack_130;
    uStack_78 = uStack_138;
    uStack_60 = uStack_120;
    uStack_68 = uStack_128;
    uStack_50 = uStack_110;
    uStack_58 = uStack_118;
    uStack_90 = uStack_150;
    lStack_98 = lStack_158;
    auStack_f0[0] = 2;
    uVar7 = __ZN3std2io5error5Error3new17h9ad1273ad3f36ec3E(0x15,auStack_f0);
  }
  plVar4 = (long *)(*
                   ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                   )();
  if ((char)plVar4[4] != '\x01') {
    if ((char)plVar4[4] == '\x02') {
      plVar4 = (long *)func_0x000108a82a50(&UNK_10b38f438);
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar4,&DAT_1055621b8)
    ;
    *(undefined1 *)(plVar4 + 4) = 1;
  }
  if (*plVar4 == 0) {
    *plVar4 = -1;
    if ((plVar4[1] & 0x7fffffffffffffffU) == 0) {
      lVar5 = 0;
    }
    else {
      _free(plVar4[2]);
      lVar5 = *plVar4 + 1;
    }
    *plVar4 = lVar5;
    plVar4[1] = -0x8000000000000000;
    return uVar7;
  }
  uVar7 = __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38f568);
  __ZN89__LT_codex_utils_absolute_path__AbsolutePathBufGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h327d108261752884E
            (&uStack_41);
  __Unwind_Resume(uVar7);
  auVar19 = func_0x000108a07bc4();
  uVar7 = auVar19._0_8_;
  puVar14 = &stack0xfffffffffffffe40;
  do {
    puVar2 = puVar14;
    *(undefined8 *)(puVar2 + -0x1000) = 0;
    puVar14 = puVar2 + -0x1000;
  } while (puVar2 + -0x1000 != auStack_51c0);
  __ZN25codex_utils_absolute_path20AbsolutePathBufGuard3new17h7de3fa69cf09380cE
            (auVar19._8_8_,param_3);
  FUN_102a2f118(puVar2 + -0x1108,uVar7);
  *(undefined8 *)(puVar2 + 0x9f8) = *(undefined8 *)(puVar2 + -0x10f0);
  *(undefined8 *)(puVar2 + 0x9f0) = *(undefined8 *)(puVar2 + -0x10f8);
  *(undefined8 *)(puVar2 + 0xa08) = *(undefined8 *)(puVar2 + -0x10e0);
  *(undefined8 *)(puVar2 + 0xa00) = *(undefined8 *)(puVar2 + -0x10e8);
  *(undefined8 *)(puVar2 + 0xa18) = *(undefined8 *)(puVar2 + -0x10d0);
  *(undefined8 *)(puVar2 + 0xa10) = *(undefined8 *)(puVar2 + -0x10d8);
  puVar14 = puVar2 + 0x2580;
  *(undefined8 *)(puVar2 + -0x1088) = 0;
  *(undefined8 *)(puVar2 + -0x1080) = 8;
  *(undefined8 *)(puVar2 + -0x1078) = 0;
  *(undefined1 **)(puVar2 + 0x9d8) = puVar2 + -0x1088;
  *(undefined8 *)(puVar2 + 0xa28) = *(undefined8 *)(puVar2 + -0x10c0);
  *(undefined8 *)(puVar2 + 0xa20) = *(undefined8 *)(puVar2 + -0x10c8);
  uVar13 = *(ulong *)(puVar2 + -0x1108);
  uVar6 = uVar13 ^ 0x8000000000000000;
  *(undefined8 *)(puVar2 + 0x9e8) = *(undefined8 *)(puVar2 + -0x1100);
  *(undefined8 *)(puVar2 + 0x9e0) = *(undefined8 *)(puVar2 + -0x1108);
  if (-1 < (long)uVar13) {
    uVar6 = 6;
  }
  *(undefined1 **)(puVar2 + 0xa50) = puVar2 + 0x9d8;
  *(undefined8 *)(puVar2 + 0xa30) = 0x8000000000000000;
  if ((long)uVar6 < 3) {
    if (uVar6 == 0) {
      FUN_108904d20(puVar2 + -0x1070,puVar2 + -0x1100);
    }
    else {
      if (uVar6 == 1) {
        *(undefined8 *)(puVar2 + 0x2588) = *(undefined8 *)(puVar2 + -0x1100);
        *puVar14 = 2;
        FUN_1088fdb70(puVar2 + -0x1068,puVar2 + 0x2580,puVar2 + 0xa60,&UNK_10b2931b0);
      }
      else {
        *(undefined8 *)(puVar2 + 0x2588) = *(undefined8 *)(puVar2 + -0x1100);
        *puVar14 = 3;
        FUN_1088fdb70(puVar2 + -0x1068,puVar2 + 0x2580,puVar2 + 0xa60,&UNK_10b2931b0);
      }
LAB_102952d34:
      *(undefined8 *)(puVar2 + -0x1070) = 2;
    }
  }
  else if ((long)uVar6 < 5) {
    if (uVar6 == 3) {
      puVar2[0x2581] = puVar2[-0x1100];
      *puVar14 = 0;
      FUN_1088fdb70(puVar2 + -0x1068,puVar2 + 0x2580,puVar2 + 0xa60,&UNK_10b2931b0);
      goto LAB_102952d34;
    }
    *(undefined8 *)(puVar2 + 0x2528) = *(undefined8 *)(puVar2 + -0x10f8);
    *(undefined8 *)(puVar2 + 0x2520) = *(undefined8 *)(puVar2 + -0x1100);
    *(undefined8 *)(puVar2 + 0x2530) = *(undefined8 *)(puVar2 + -0x10f0);
    *(undefined8 *)(puVar2 + 0xaf0) = 0;
    *(undefined8 *)(puVar2 + 0xaf8) = 1;
    *(undefined8 *)(puVar2 + 0xb00) = 0;
    *(undefined8 *)(puVar2 + 0x2590) = 0x60000020;
    *(undefined1 **)(puVar2 + 0x2580) = puVar2 + 0xaf0;
    *(undefined **)(puVar2 + 0x2588) = &UNK_10b294750;
    iVar3 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (puVar2 + 0x2520,puVar2 + 0x2580);
    if (iVar3 != 0) goto LAB_102953574;
    *(undefined8 *)(puVar2 + 0xa68) = *(undefined8 *)(puVar2 + 0xaf8);
    *(undefined8 *)(puVar2 + 0xa60) = *(undefined8 *)(puVar2 + 0xaf0);
    *(undefined8 *)(puVar2 + 0xa70) = *(undefined8 *)(puVar2 + 0xb00);
    FUN_108904d20(puVar2 + -0x1070,puVar2 + 0xa60);
  }
  else if (uVar6 == 5) {
    lStack_200 = *(long *)(puVar2 + -0x1100);
    puStack_210 = *(undefined1 **)(puVar2 + -0x10f8);
    lVar18 = *(long *)(puVar2 + -0x10f0);
    puStack_1f8 = puStack_210 + lVar18 * 0x50;
    *(undefined1 ***)(puVar2 + 0x2520) = &puStack_210;
    *(undefined1 **)(puVar2 + 0x2528) = puVar2 + 0x9d8;
    *(undefined1 **)(puVar2 + 0x2530) = puVar2 + 0xa30;
    *(undefined8 *)(puVar2 + 0x2538) = 0;
    puStack_208 = puStack_210;
    FUN_1029b7088(puVar2 + 0x2580,puVar2 + 0x2520);
    *(undefined8 *)(puVar2 + 0xa88) = *(undefined8 *)(puVar2 + 0x25b0);
    *(undefined8 *)(puVar2 + 0xa80) = *(undefined8 *)(puVar2 + 0x25a8);
    *(undefined8 *)(puVar2 + 0xa98) = *(undefined8 *)(puVar2 + 0x25c0);
    *(undefined8 *)(puVar2 + 0xa90) = *(undefined8 *)(puVar2 + 0x25b8);
    *(undefined8 *)(puVar2 + 0xaa8) = *(undefined8 *)(puVar2 + 0x25d0);
    *(undefined8 *)(puVar2 + 0xaa0) = *(undefined8 *)(puVar2 + 0x25c8);
    lVar5 = *(long *)(puVar2 + 0x2580);
    *(undefined8 *)(puVar2 + 0xab0) = *(undefined8 *)(puVar2 + 0x25d8);
    *(undefined8 *)(puVar2 + 0xa68) = *(undefined8 *)(puVar2 + 0x2590);
    *(undefined8 *)(puVar2 + 0xa60) = *(undefined8 *)(puVar2 + 0x2588);
    *(undefined8 *)(puVar2 + 0xa78) = *(undefined8 *)(puVar2 + 0x25a0);
    *(undefined8 *)(puVar2 + 0xa70) = *(undefined8 *)(puVar2 + 0x2598);
    if (lVar5 == 2) {
      *(undefined8 *)(puVar2 + -0x1040) = *(undefined8 *)(puVar2 + 0xa88);
      *(undefined8 *)(puVar2 + -0x1048) = *(undefined8 *)(puVar2 + 0xa80);
      *(undefined8 *)(puVar2 + -0x1030) = *(undefined8 *)(puVar2 + 0xa98);
      *(undefined8 *)(puVar2 + -0x1038) = *(undefined8 *)(puVar2 + 0xa90);
      *(undefined8 *)(puVar2 + -0x1020) = *(undefined8 *)(puVar2 + 0xaa8);
      *(undefined8 *)(puVar2 + -0x1028) = *(undefined8 *)(puVar2 + 0xaa0);
      puVar14 = puStack_208;
      *(undefined8 *)(puVar2 + -0x1060) = *(undefined8 *)(puVar2 + 0xa68);
      *(undefined8 *)(puVar2 + -0x1068) = *(undefined8 *)(puVar2 + 0xa60);
      *(undefined8 *)(puVar2 + -0x1050) = *(undefined8 *)(puVar2 + 0xa78);
      *(undefined8 *)(puVar2 + -0x1058) = *(undefined8 *)(puVar2 + 0xa70);
      uVar6 = (long)puStack_1f8 - (long)puStack_208;
      *(undefined8 *)(puVar2 + -0x1018) = *(undefined8 *)(puVar2 + 0xab0);
      *(undefined8 *)(puVar2 + -0x1070) = 2;
      FUN_102a146f0(puVar14,(uVar6 >> 4) * -0x3333333333333333);
    }
    else {
      _memcpy(puVar2 + 0xb50,puVar2 + 0x25e0,0x19d0);
      puVar8 = puStack_1f8;
      puVar14 = puStack_208;
      *(undefined8 *)(puVar2 + 0xb20) = *(undefined8 *)(puVar2 + 0xa88);
      *(undefined8 *)(puVar2 + 0xb18) = *(undefined8 *)(puVar2 + 0xa80);
      *(undefined8 *)(puVar2 + 0xb30) = *(undefined8 *)(puVar2 + 0xa98);
      *(undefined8 *)(puVar2 + 0xb28) = *(undefined8 *)(puVar2 + 0xa90);
      *(undefined8 *)(puVar2 + 0xb40) = *(undefined8 *)(puVar2 + 0xaa8);
      *(undefined8 *)(puVar2 + 0xb38) = *(undefined8 *)(puVar2 + 0xaa0);
      *(undefined8 *)(puVar2 + 0xb00) = *(undefined8 *)(puVar2 + 0xa68);
      *(undefined8 *)(puVar2 + 0xaf8) = *(undefined8 *)(puVar2 + 0xa60);
      *(undefined8 *)(puVar2 + 0xb10) = *(undefined8 *)(puVar2 + 0xa78);
      *(undefined8 *)(puVar2 + 0xb08) = *(undefined8 *)(puVar2 + 0xa70);
      *(undefined8 *)(puVar2 + 0xb48) = *(undefined8 *)(puVar2 + 0xab0);
      *(long *)(puVar2 + 0xaf0) = lVar5;
      if (puStack_1f8 == puStack_208) {
        _memcpy(puVar2 + -0x1070,puVar2 + 0xaf0,0x1a30);
      }
      else {
        FUN_1088fdeec(puVar2 + 0x2580,lVar18,&UNK_10b298cd8,&UNK_10b2921f8);
        *(undefined8 *)(puVar2 + -0x1040) = *(undefined8 *)(puVar2 + 0x25a8);
        *(undefined8 *)(puVar2 + -0x1048) = *(undefined8 *)(puVar2 + 0x25a0);
        *(undefined8 *)(puVar2 + -0x1030) = *(undefined8 *)(puVar2 + 0x25b8);
        *(undefined8 *)(puVar2 + -0x1038) = *(undefined8 *)(puVar2 + 0x25b0);
        *(undefined8 *)(puVar2 + -0x1020) = *(undefined8 *)(puVar2 + 0x25c8);
        *(undefined8 *)(puVar2 + -0x1028) = *(undefined8 *)(puVar2 + 0x25c0);
        *(undefined8 *)(puVar2 + -0x1060) = *(undefined8 *)(puVar2 + 0x2588);
        *(undefined8 *)(puVar2 + -0x1068) = *(undefined8 *)(puVar2 + 0x2580);
        *(undefined8 *)(puVar2 + -0x1050) = *(undefined8 *)(puVar2 + 0x2598);
        *(undefined8 *)(puVar2 + -0x1058) = *(undefined8 *)(puVar2 + 0x2590);
        *(undefined8 *)(puVar2 + -0x1018) = *(undefined8 *)(puVar2 + 0x25d0);
        *(undefined8 *)(puVar2 + -0x1070) = 2;
        FUN_102a17550(puVar2 + 0xaf0);
        puVar8 = puStack_1f8;
        puVar14 = puStack_208;
      }
      FUN_102a146f0(puVar14,((ulong)((long)puVar8 - (long)puVar14) >> 4) * -0x3333333333333333);
    }
    if (lStack_200 != 0) {
      _free(puStack_210);
    }
  }
  else {
    lVar5 = *(long *)(puVar2 + -0x1100);
    lVar18 = *(long *)(puVar2 + -0x10f8);
    uVar12 = *(undefined8 *)(puVar2 + -0x10d8);
    lVar17 = *(long *)(puVar2 + -0x10e8);
    if ((lVar17 != 0) && (lVar17 * 9 != -0x11)) {
      _free(*(long *)(puVar2 + -0x10f0) + lVar17 * -8 + -8);
    }
    *(long *)(puVar2 + 0xad0) = lVar5;
    *(ulong *)(puVar2 + 0xad8) = uVar13;
    puStack_1f8 = puVar2 + 0xa60;
    *(long *)(puVar2 + 0xae0) = lVar5 + lVar18 * 0x70;
    *(long *)(puVar2 + 0xac8) = lVar5;
    *(undefined8 *)(puVar2 + 0xa60) = 0x8000000000000000;
    puStack_1f0 = puVar2 + 0x9d8;
    puStack_210 = (undefined1 *)0x8000000000000000;
    puStack_1e8 = puVar2 + 0xa30;
    FUN_1029a4418(puVar2 + 0x2580,&puStack_210);
    *(undefined8 *)(puVar2 + 0x2548) = *(undefined8 *)(puVar2 + 0x25b0);
    *(undefined8 *)(puVar2 + 0x2540) = *(undefined8 *)(puVar2 + 0x25a8);
    *(undefined8 *)(puVar2 + 0x2558) = *(undefined8 *)(puVar2 + 0x25c0);
    *(undefined8 *)(puVar2 + 0x2550) = *(undefined8 *)(puVar2 + 0x25b8);
    *(undefined8 *)(puVar2 + 0x2568) = *(undefined8 *)(puVar2 + 0x25d0);
    *(undefined8 *)(puVar2 + 0x2560) = *(undefined8 *)(puVar2 + 0x25c8);
    lVar5 = *(long *)(puVar2 + 0x2580);
    *(undefined8 *)(puVar2 + 0x2570) = *(undefined8 *)(puVar2 + 0x25d8);
    *(undefined8 *)(puVar2 + 0x2528) = *(undefined8 *)(puVar2 + 0x2590);
    *(undefined8 *)(puVar2 + 0x2520) = *(undefined8 *)(puVar2 + 0x2588);
    *(undefined8 *)(puVar2 + 0x2538) = *(undefined8 *)(puVar2 + 0x25a0);
    *(undefined8 *)(puVar2 + 0x2530) = *(undefined8 *)(puVar2 + 0x2598);
    if (lVar5 == 2) {
      *(undefined8 *)(puVar2 + -0x1040) = *(undefined8 *)(puVar2 + 0x2548);
      *(undefined8 *)(puVar2 + -0x1048) = *(undefined8 *)(puVar2 + 0x2540);
      *(undefined8 *)(puVar2 + -0x1030) = *(undefined8 *)(puVar2 + 0x2558);
      *(undefined8 *)(puVar2 + -0x1038) = *(undefined8 *)(puVar2 + 0x2550);
      *(undefined8 *)(puVar2 + -0x1020) = *(undefined8 *)(puVar2 + 0x2568);
      *(undefined8 *)(puVar2 + -0x1028) = *(undefined8 *)(puVar2 + 0x2560);
      *(undefined8 *)(puVar2 + -0x1060) = *(undefined8 *)(puVar2 + 0x2528);
      *(undefined8 *)(puVar2 + -0x1068) = *(undefined8 *)(puVar2 + 0x2520);
      *(undefined8 *)(puVar2 + -0x1050) = *(undefined8 *)(puVar2 + 0x2538);
      *(undefined8 *)(puVar2 + -0x1058) = *(undefined8 *)(puVar2 + 0x2530);
      *(undefined8 *)(puVar2 + -0x1018) = *(undefined8 *)(puVar2 + 0x2570);
      *(undefined8 *)(puVar2 + -0x1070) = 2;
      FUN_102a223d0(puVar2 + 0xac8);
      if (*(long *)(puVar2 + 0xa60) != -0x8000000000000000) {
        if (*(long *)(puVar2 + 0xa60) != 0) {
          _free(*(undefined8 *)(puVar2 + 0xa68));
        }
        FUN_102a116b0(puVar2 + 0xa78);
      }
    }
    else {
      _memcpy(puVar2 + 0xb50,puVar2 + 0x25e0,0x19d0);
      *(undefined8 *)(puVar2 + 0xb20) = *(undefined8 *)(puVar2 + 0x2548);
      *(undefined8 *)(puVar2 + 0xb18) = *(undefined8 *)(puVar2 + 0x2540);
      *(undefined8 *)(puVar2 + 0xb30) = *(undefined8 *)(puVar2 + 0x2558);
      *(undefined8 *)(puVar2 + 0xb28) = *(undefined8 *)(puVar2 + 0x2550);
      *(undefined8 *)(puVar2 + 0xb40) = *(undefined8 *)(puVar2 + 0x2568);
      *(undefined8 *)(puVar2 + 0xb38) = *(undefined8 *)(puVar2 + 0x2560);
      *(undefined8 *)(puVar2 + 0xb00) = *(undefined8 *)(puVar2 + 0x2528);
      *(undefined8 *)(puVar2 + 0xaf8) = *(undefined8 *)(puVar2 + 0x2520);
      *(undefined8 *)(puVar2 + 0xb10) = *(undefined8 *)(puVar2 + 0x2538);
      *(undefined8 *)(puVar2 + 0xb08) = *(undefined8 *)(puVar2 + 0x2530);
      *(undefined8 *)(puVar2 + 0xb48) = *(undefined8 *)(puVar2 + 0x2570);
      *(long *)(puVar2 + 0xaf0) = lVar5;
      if (*(long *)(puVar2 + 0xae0) == *(long *)(puVar2 + 0xad0)) {
        _memcpy(puVar2 + -0x1070,puVar2 + 0xaf0,0x1a30);
      }
      else {
        FUN_1088fdeec(puVar2 + 0x2580,uVar12,&UNK_10b298ce8,&UNK_10b2921f8);
        *(undefined8 *)(puVar2 + -0x1040) = *(undefined8 *)(puVar2 + 0x25a8);
        *(undefined8 *)(puVar2 + -0x1048) = *(undefined8 *)(puVar2 + 0x25a0);
        *(undefined8 *)(puVar2 + -0x1030) = *(undefined8 *)(puVar2 + 0x25b8);
        *(undefined8 *)(puVar2 + -0x1038) = *(undefined8 *)(puVar2 + 0x25b0);
        *(undefined8 *)(puVar2 + -0x1020) = *(undefined8 *)(puVar2 + 0x25c8);
        *(undefined8 *)(puVar2 + -0x1028) = *(undefined8 *)(puVar2 + 0x25c0);
        *(undefined8 *)(puVar2 + -0x1060) = *(undefined8 *)(puVar2 + 0x2588);
        *(undefined8 *)(puVar2 + -0x1068) = *(undefined8 *)(puVar2 + 0x2580);
        *(undefined8 *)(puVar2 + -0x1050) = *(undefined8 *)(puVar2 + 0x2598);
        *(undefined8 *)(puVar2 + -0x1058) = *(undefined8 *)(puVar2 + 0x2590);
        *(undefined8 *)(puVar2 + -0x1018) = *(undefined8 *)(puVar2 + 0x25d0);
        *(undefined8 *)(puVar2 + -0x1070) = 2;
        FUN_102a17550(puVar2 + 0xaf0);
      }
      FUN_102a223d0(puVar2 + 0xac8);
      if (*(long *)(puVar2 + 0xa60) != -0x8000000000000000) {
        if (*(long *)(puVar2 + 0xa60) != 0) {
          _free(*(undefined8 *)(puVar2 + 0xa68));
        }
        FUN_102a116b0(puVar2 + 0xa78);
      }
    }
  }
  if (0 < *(long *)(puVar2 + 0xa30)) {
    _free(*(undefined8 *)(puVar2 + 0xa38));
  }
  if (*(long *)(puVar2 + -0x1070) == 2) {
    func_0x000102a12c08(puVar2 + -0x1068);
    lVar5 = *(long *)(puVar2 + -0x1080);
    lVar18 = *(long *)(puVar2 + -0x1078);
    if (lVar18 != 0) {
      lVar17 = 0;
      do {
        plVar4 = (long *)(lVar5 + lVar17 * 0x18);
        lVar16 = plVar4[1];
        lVar15 = plVar4[2];
        if (lVar15 != 0) {
          puVar9 = (undefined8 *)(lVar16 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (*plVar4 != 0) {
          _free(lVar16);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar18);
    }
    if (*(long *)(puVar2 + -0x1088) != 0) {
      _free(lVar5);
    }
LAB_102953284:
    __ZN12codex_config13strict_config31unknown_feature_toml_value_path17h27bfc75e430ed781E
              (puVar2 + 0xaf0,uVar7);
    plVar11 = *(long **)(puVar2 + 0xaf8);
    lVar5 = *(long *)(puVar2 + 0xb00);
    *(long **)(puVar2 + 0x2580) = plVar11;
    *(undefined8 *)(puVar2 + 0x2590) = *(undefined8 *)(puVar2 + 0xaf0);
    *(long **)(puVar2 + 0x2598) = plVar11 + lVar5 * 3;
    lVar18 = -0x8000000000000000;
    *(undefined8 *)(puVar2 + -0x1110) = *(undefined8 *)(puVar2 + 0xaf0);
    plVar4 = plVar11;
    if (lVar5 != 0) {
      plVar4 = plVar11 + 3;
      lVar17 = *plVar11;
      *(long **)(puVar2 + 0x2588) = plVar4;
      if (lVar17 != -0x8000000000000000) {
        lVar18 = plVar11[1];
        *(long *)(puVar2 + -0x1060) = plVar11[2];
        *(long *)(puVar2 + -0x1068) = lVar18;
        *(long *)(puVar2 + -0x1070) = lVar17;
        lVar16 = *(long *)(puVar2 + -0x1068);
        lVar15 = *(long *)(puVar2 + -0x1060);
        FUN_102a3f6c0(puVar2 + 0xaf0,lVar16,lVar15,&UNK_108d48b5d,1);
        lVar18 = *(long *)(puVar2 + 0xaf0);
        *(undefined8 *)(puVar2 + 0x3fe8) = *(undefined8 *)(puVar2 + 0xb00);
        *(undefined8 *)(puVar2 + 0x3fe0) = *(undefined8 *)(puVar2 + 0xaf8);
        if (lVar15 != 0) {
          puVar9 = (undefined8 *)(lVar16 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (lVar17 != 0) {
          _free(lVar16);
        }
      }
    }
    uVar6 = (long)(plVar11 + lVar5 * 3) - (long)plVar4;
    if (uVar6 != 0) {
      lVar5 = 0;
      do {
        plVar10 = plVar4 + lVar5 * 3;
        lVar17 = plVar10[1];
        lVar16 = plVar10[2];
        if (lVar16 != 0) {
          puVar9 = (undefined8 *)(lVar17 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (*plVar10 != 0) {
          _free(lVar17);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != (uVar6 >> 3) * -0x5555555555555555);
    }
    if (*(long *)(puVar2 + -0x1110) != 0) {
      _free(plVar11);
    }
    if (lVar18 != -0x8000000000000000) {
      *(long *)(puVar2 + 0x2580) = lVar18;
      *(undefined8 *)(puVar2 + 0x2590) = *(undefined8 *)(puVar2 + 0x3fe8);
      *(undefined8 *)(puVar2 + 0x2588) = *(undefined8 *)(puVar2 + 0x3fe0);
      *(undefined1 **)(puVar2 + 0xaf0) = puVar2 + 0x2580;
      *(undefined **)(puVar2 + 0xaf8) = &DAT_102a46b50;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (puVar2 + -0x10a0,s_unknown_configuration_field_____i_108aefa99,puVar2 + 0xaf0);
      uVar7 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,puVar2 + -0x10a0);
      goto LAB_102953498;
    }
    uVar7 = 0;
  }
  else {
    lVar5 = *(long *)(puVar2 + -0x1088);
    plVar4 = *(long **)(puVar2 + -0x1080);
    lVar18 = *(long *)(puVar2 + -0x1078);
    *(long **)(puVar2 + 0x2580) = plVar4;
    *(long *)(puVar2 + 0x2590) = lVar5;
    *(long **)(puVar2 + 0x2598) = plVar4 + lVar18 * 3;
    *(undefined8 *)(puVar2 + -0x1110) = uVar7;
    if (lVar18 == 0) {
      *(undefined8 *)(puVar2 + -0x1118) = 0x8000000000000000;
      plVar11 = plVar4;
    }
    else {
      plVar11 = plVar4 + 3;
      lVar17 = *plVar4;
      *(long **)(puVar2 + 0x2588) = plVar11;
      if (lVar17 == -0x8000000000000000) {
        *(undefined8 *)(puVar2 + -0x1118) = 0x8000000000000000;
      }
      else {
        lVar16 = plVar4[1];
        *(long *)(puVar2 + 0xa70) = plVar4[2];
        *(long *)(puVar2 + 0xa68) = lVar16;
        *(long *)(puVar2 + 0xa60) = lVar17;
        lVar15 = *(long *)(puVar2 + 0xa68);
        lVar16 = *(long *)(puVar2 + 0xa70);
        FUN_102a3f6c0(puVar2 + 0xaf0,lVar15,lVar16,&UNK_108d48b5d,1);
        *(undefined8 *)(puVar2 + -0x1118) = *(undefined8 *)(puVar2 + 0xaf0);
        *(undefined8 *)(puVar2 + 0x9c8) = *(undefined8 *)(puVar2 + 0xb00);
        *(undefined8 *)(puVar2 + 0x9c0) = *(undefined8 *)(puVar2 + 0xaf8);
        if (lVar16 != 0) {
          puVar9 = (undefined8 *)(lVar15 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (lVar17 != 0) {
          _free(lVar15);
        }
      }
    }
    uVar6 = (long)(plVar4 + lVar18 * 3) - (long)plVar11;
    if (uVar6 != 0) {
      lVar18 = 0;
      do {
        plVar10 = plVar11 + lVar18 * 3;
        lVar17 = plVar10[1];
        lVar16 = plVar10[2];
        if (lVar16 != 0) {
          puVar9 = (undefined8 *)(lVar17 + 8);
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (*plVar10 != 0) {
          _free(lVar17);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != (uVar6 >> 3) * -0x5555555555555555);
    }
    if (lVar5 != 0) {
      _free(plVar4);
    }
    lVar5 = *(long *)(puVar2 + -0x1118);
    uVar7 = *(undefined8 *)(puVar2 + -0x1110);
    if (*(long *)(puVar2 + -0x1070) == 2) {
      func_0x000102a12c08(puVar2 + -0x1068);
    }
    else {
      FUN_102a17550(puVar2 + -0x1070);
    }
    if (lVar5 == -0x8000000000000000) goto LAB_102953284;
    *(long *)(puVar2 + 0x2580) = lVar5;
    *(undefined8 *)(puVar2 + 0x2590) = *(undefined8 *)(puVar2 + 0x9c8);
    *(undefined8 *)(puVar2 + 0x2588) = *(undefined8 *)(puVar2 + 0x9c0);
    *(undefined1 **)(puVar2 + 0xaf0) = puVar2 + 0x2580;
    *(undefined **)(puVar2 + 0xaf8) = &DAT_102a46b50;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (puVar2 + -0x10b8,s_unknown_configuration_field_____i_108aefa99,puVar2 + 0xaf0);
    uVar7 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,puVar2 + -0x10b8);
LAB_102953498:
    if (*(long *)(puVar2 + 0x2580) != 0) {
      _free(*(undefined8 *)(puVar2 + 0x2588));
    }
  }
  plVar4 = (long *)(*
                   ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                   )();
  if ((char)plVar4[4] != '\x01') {
    if ((char)plVar4[4] == '\x02') {
      plVar4 = (long *)func_0x000108a82a50(&UNK_10b38f438);
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar4,&DAT_1055621b8)
    ;
    *(undefined1 *)(plVar4 + 4) = 1;
  }
  if (*plVar4 == 0) {
    *plVar4 = -1;
    if ((plVar4[1] & 0x7fffffffffffffffU) == 0) {
      lVar5 = 0;
    }
    else {
      _free(plVar4[2]);
      lVar5 = *plVar4 + 1;
    }
    *plVar4 = lVar5;
    plVar4[1] = -0x8000000000000000;
    return uVar7;
  }
  __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38f568);
LAB_102953574:
  func_0x000108a07a3c(&UNK_108d4bfd5,0x37,puVar2 + 0xa60,&UNK_10b2975c8,&UNK_10b2974a8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029535a0);
  (*pcVar1)();
}

