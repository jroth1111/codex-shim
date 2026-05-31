
ulong FUN_100575e94(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  long *plStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  long lStack_268;
  uint uStack_260;
  uint uStack_25c;
  undefined8 uStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined1 uStack_19d;
  undefined1 uStack_19c;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  undefined1 auStack_198 [12];
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  uint uStack_168;
  
  bVar5 = *(byte *)((long)param_1 + 0x179);
  if (bVar5 < 2) {
    if (bVar5 != 0) {
      FUN_107c05cc0(&UNK_10b2178b8);
LAB_100576198:
      uVar9 = FUN_107c05cc4(&UNK_10b2178b8);
      if ((((*(byte *)((long)param_1 + 0x17b) & 1) != 0) && (param_1[0x1b] != -0x8000000000000000))
         && (param_1[0x1b] != 0)) {
        _free(param_1[0x1c]);
      }
      *(undefined1 *)((long)param_1 + 0x17b) = 0;
      if (((*(byte *)((long)param_1 + 0x17d) & 1) != 0) && (param_1[0xf] != 0)) {
        _free(param_1[0x10]);
      }
      if (((*(byte *)((long)param_1 + 0x17c) & 1) != 0) && (param_1[0x12] != 0)) {
        _free(param_1[0x13]);
      }
      *(undefined2 *)((long)param_1 + 0x17c) = 0;
      *(undefined1 *)((long)param_1 + 0x179) = 2;
      auVar13 = __Unwind_Resume(uVar9);
      ppuStack_2c0 = auVar13._8_8_;
      uStack_278 = 0x1005762b4;
      puStack_2f8 = &UNK_108cb15b8;
      uStack_2f0 = 0x12;
      puStack_2e8 = &UNK_108cb15ca;
      uStack_2e0 = 0x13;
      puStack_2b8 = &DAT_103592578;
      uStack_290 = uVar9;
      puStack_288 = param_1;
      puStack_280 = &stack0xfffffffffffffff0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_2d8,s_p_The_user_has_requested_a_new_c_108af6b1f,&ppuStack_2c0);
      ppuStack_2c0 = &puStack_2f8;
      puStack_2b8 = &DAT_100c7b3a0;
      puStack_2a8 = &DAT_10112965c;
      ppuStack_2a0 = &puStack_2e8;
      puStack_298 = &DAT_100c7b3a0;
      plStack_2b0 = &lStack_2d8;
      uVar10 = __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                         (auVar13._0_8_,s__108ac137a,&ppuStack_2c0);
      if (lStack_2d8 != 0) {
        uVar10 = _free(uStack_2d0);
      }
      return uVar10;
    }
    param_1[0x14] = param_1[5];
    param_1[0x13] = param_1[4];
    param_1[0x16] = param_1[7];
    param_1[0x15] = param_1[6];
    param_1[0x18] = param_1[9];
    param_1[0x17] = param_1[8];
    param_1[0x10] = param_1[1];
    param_1[0xf] = *param_1;
    *(undefined1 *)((long)param_1 + 0x17d) = 1;
    param_1[0x12] = param_1[3];
    param_1[0x11] = param_1[2];
    *(undefined2 *)((long)param_1 + 0x17b) = 0x101;
    param_1[0x19] = param_1[10];
    param_1[0x1a] = param_1[0xe];
    *(undefined1 *)((long)param_1 + 0x17a) = *(undefined1 *)(param_1 + 0x2f);
    param_1[0x1c] = param_1[0xc];
    param_1[0x1b] = param_1[0xb];
    param_1[0x1d] = param_1[0xd];
    param_1[0x1e] = param_1[0xe];
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  else if (bVar5 != 3) goto LAB_100576198;
  auVar13 = FUN_1005ab94c(param_1 + 0x1e);
  if ((auVar13._0_8_ & 1) == 0) {
    if ((((*(char *)(param_1 + 0x2e) == '\x03') && (*(char *)(param_1 + 0x2d) == '\x03')) &&
        (*(char *)(param_1 + 0x2c) == '\x03')) && (*(char *)(param_1 + 0x23) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x24);
      if (param_1[0x25] != 0) {
        (**(code **)(param_1[0x25] + 0x18))(param_1[0x26]);
      }
    }
    *(undefined1 *)((long)param_1 + 0x17d) = 0;
    uStack_220 = param_1[0xf];
    uStack_238 = param_1[0x10];
    uStack_258 = param_1[0x11];
    uStack_228 = param_1[0x12];
    uStack_240 = param_1[0x13];
    uVar2 = param_1[0x14];
    uVar11 = *(undefined1 *)((long)param_1 + 0xca);
    uStack_260 = (uint)*(byte *)((long)param_1 + 0xc9);
    uStack_25c = (uint)*(byte *)(param_1 + 0x19);
    uVar6 = *(undefined1 *)((long)param_1 + 0xcb);
    uStack_24c = (uint)*(byte *)((long)param_1 + 0x17a);
    *(undefined2 *)((long)param_1 + 0x17b) = 0;
    lStack_268 = param_1[0x1a];
    uStack_230 = param_1[0x1b];
    uStack_248 = param_1[0x1c];
    uVar3 = param_1[0x1d];
    uVar9 = param_1[0x17];
    uVar4 = param_1[0x18];
    auStack_198 = func_0x000106032954(0);
    uStack_188 = 0;
    uStack_180 = 0;
    func_0x000106032878(&uStack_178,auStack_198,&uStack_188);
    uStack_1a8 = 0;
    if ((int)uStack_178 == 0) {
      uStack_1a8 = (ulong)puStack_170;
    }
    auVar14 = func_0x000106032954(8);
    uStack_188 = param_1[0x15];
    uStack_180 = *(undefined4 *)(param_1 + 0x16);
    auStack_198 = auVar14;
    func_0x000106032878(&uStack_178,auStack_198,&uStack_188);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = puStack_170;
    lVar12 = SUB168(auVar7 * ZEXT816(1000),8);
    uStack_208 = uStack_220;
    uStack_200 = uStack_238;
    lVar1 = (long)puStack_170 * 1000 + (ulong)uStack_168 / 1000000;
    if (CARRY8((long)puStack_170 * 1000,(ulong)uStack_168 / 1000000)) {
      lVar12 = lVar12 + 1;
    }
    if (lVar12 != 0) {
      lVar1 = -1;
    }
    lStack_210 = 0;
    if ((int)uStack_178 == 0) {
      lStack_210 = lVar1;
    }
    uStack_1f8 = uStack_258;
    uStack_1f0 = uStack_228;
    uStack_1e8 = uStack_240;
    uStack_1a0 = (undefined1)uStack_25c;
    uStack_19f = (undefined1)uStack_260;
    uStack_19e = 0;
    uStack_19b = (undefined1)uStack_24c;
    uStack_1d8 = uStack_230;
    uStack_1d0 = uStack_248;
    uStack_218 = 1;
    uStack_1e0 = uVar2;
    uStack_1c8 = uVar3;
    uStack_1c0 = uVar9;
    uStack_1b8 = auVar13._8_8_;
    uStack_1b0 = uVar4;
    uStack_19d = uVar11;
    uStack_19c = uVar6;
    puStack_170 = (undefined8 *)_malloc(0x80);
    if (puStack_170 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x80);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10057618c);
      (*pcVar8)();
    }
    puStack_170[9] = uStack_1d0;
    puStack_170[8] = uStack_1d8;
    puStack_170[0xb] = uStack_1c0;
    puStack_170[10] = uStack_1c8;
    puStack_170[0xd] = uStack_1b0;
    puStack_170[0xc] = uStack_1b8;
    puStack_170[0xf] =
         CONCAT26(uStack_19a,
                  CONCAT15(uStack_19b,
                           CONCAT14(uStack_19c,
                                    CONCAT13(uStack_19d,
                                             CONCAT12(uStack_19e,CONCAT11(uStack_19f,uStack_1a0)))))
                 );
    puStack_170[0xe] = uStack_1a8;
    puStack_170[1] = lStack_210;
    *puStack_170 = uStack_218;
    puStack_170[3] = uStack_200;
    puStack_170[2] = uStack_208;
    puStack_170[5] = uStack_1f0;
    puStack_170[4] = uStack_1f8;
    puStack_170[7] = uStack_1e0;
    puStack_170[6] = uStack_1e8;
    uStack_178 = 0x8000000000000001;
    FUN_101725e54(*(undefined8 *)(lStack_268 + 0x4c8),&uStack_178);
    *(undefined2 *)((long)param_1 + 0x17b) = 0;
    *(undefined1 *)((long)param_1 + 0x17d) = 0;
    uVar11 = 1;
  }
  else {
    uVar11 = 3;
  }
  *(undefined1 *)((long)param_1 + 0x179) = uVar11;
  return (ulong)(auVar13._0_4_ & 1);
}

