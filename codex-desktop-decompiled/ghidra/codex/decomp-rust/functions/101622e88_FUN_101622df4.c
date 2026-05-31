
void FUN_101622df4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined1 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long **pplStack_70;
  code *pcStack_68;
  
  bVar2 = *(byte *)(param_2 + 0x35);
  if (bVar2 < 3) {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        func_0x000108a07af4(&UNK_10b24fb40);
      }
      func_0x000108a07b10();
      goto LAB_1016231f0;
    }
    param_2[6] = param_2[1];
    param_2[5] = *param_2;
    param_2[7] = param_2[2];
    param_2[4] = 0x8000000000000000;
    FUN_1006882f4(&lStack_1a8);
    if (lStack_1a8 != -0x7ffffffffffffffb) {
      param_2[0x36] = lStack_1a8;
      param_2[0x37] = plStack_1a0;
      param_2[0x38] = puStack_198;
      param_2[0x3a] = lStack_188;
      param_2[0x39] = lStack_190;
      param_2[0x3c] = lStack_178;
      param_2[0x3b] = lStack_180;
      param_2[0x3e] = lStack_168;
      param_2[0x3d] = lStack_170;
      param_2[0x3f] = *(long *)(param_2[3] + 0x40) + 0x10;
      *(undefined1 *)(param_2 + 0x4d) = 0;
      goto LAB_101622f0c;
    }
    plStack_90 = plStack_1a0;
    pplStack_70 = &plStack_90;
    pcStack_68 = 
    __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&plStack_88,s__failed_to_encode_websocket_requ_108ad9817,&pplStack_70);
    plVar10 = plStack_90;
    if (*plStack_90 == 1) {
      uVar8 = plStack_90[1];
      if ((uVar8 & 3) == 1) {
        puVar7 = (undefined8 *)(uVar8 - 1);
        uVar9 = *puVar7;
        puVar11 = *(undefined8 **)(uVar8 + 7);
        pcVar3 = (code *)*puVar11;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar9);
        }
        if (puVar11[1] != 0) {
          _free(uVar9);
        }
        goto LAB_101622ec4;
      }
    }
    else if ((*plStack_90 == 0) && (plStack_90[2] != 0)) {
      puVar7 = (undefined8 *)plStack_90[1];
LAB_101622ec4:
      _free(puVar7);
    }
    _free(plVar10);
    puStack_198 = puStack_80;
    puVar7 = puStack_80;
    plStack_1a0 = plStack_88;
    plVar10 = plStack_88;
    lStack_190 = lStack_78;
    lVar4 = lStack_78;
    if (param_2[4] == -0x8000000000000000) {
LAB_101623118:
      if (param_2[5] != 0) {
        _free(param_2[6]);
      }
    }
    else {
LAB_1016230e4:
      func_0x000100e15954();
      puStack_198 = puVar7;
      plStack_1a0 = plVar10;
      lStack_190 = lVar4;
    }
    lStack_1a8 = 9;
  }
  else {
    if (bVar2 == 3) {
LAB_101622f0c:
      lVar4 = FUN_100fd3e50(param_2 + 0x3f,param_3);
      if (lVar4 == 0) {
        *param_1 = 0x13;
        uVar5 = 3;
        goto LAB_101623160;
      }
      param_2[0x34] = lVar4;
      if (((*(char *)(param_2 + 0x4d) == '\x03') && (*(char *)(param_2 + 0x4c) == '\x03')) &&
         (*(char *)(param_2 + 0x43) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_2 + 0x44);
        if (param_2[0x45] != 0) {
          (**(code **)(param_2[0x45] + 0x18))(param_2[0x46]);
        }
      }
      pcVar6 = (char *)param_2[0x34];
      if (*(long *)(pcVar6 + 0x28) == 0) {
        auVar12 = _malloc(0x1e);
        puVar7 = auVar12._0_8_;
        if (puVar7 == (undefined8 *)0x0) {
LAB_1016231f0:
          func_0x0001087c9084(1,0x1e);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101623200);
          (*pcVar3)();
        }
        puVar7[1] = 0x63656e6e6f632074;
        *puVar7 = 0x656b636f73626577;
        *(undefined8 *)((long)puVar7 + 0x16) = 0x6465736f6c632073;
        *(undefined8 *)((long)puVar7 + 0xe) = 0x69206e6f69746365;
        if (*pcVar6 == '\0') {
          *pcVar6 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar6,auVar12._8_8_,1000000000);
        }
        FUN_1060fa678(pcVar6,1,pcVar6);
        FUN_100de6690(param_2 + 0x36);
        puStack_198 = puVar7;
        plStack_1a0 = (long *)0x1e;
        plVar10 = (long *)0x1e;
        lStack_190 = 0x1e;
        lVar4 = 0x1e;
        if (param_2[4] == -0x8000000000000000) goto LAB_101623118;
        goto LAB_1016230e4;
      }
      lVar4 = param_2[3];
      uVar1 = *(undefined4 *)(lVar4 + 0x38);
      plVar10 = (long *)0x0;
      if (*(long *)(lVar4 + 0x48) != 0) {
        plVar10 = (long *)(lVar4 + 0x48);
      }
      param_2[0x3f] = *(undefined8 *)(lVar4 + 0x30);
      *(undefined4 *)(param_2 + 0x40) = uVar1;
      param_2[0x41] = pcVar6 + 0x28;
      param_2[0x42] = plVar10;
      *(undefined2 *)(param_2 + 0x95) = 1;
    }
    FUN_101620884(&lStack_1a8,param_2 + 0x36,param_3);
    if (lStack_1a8 == 0x13) {
      *param_1 = 0x13;
      uVar5 = 4;
      goto LAB_101623160;
    }
    lStack_c8 = lStack_140;
    lStack_d0 = lStack_148;
    lStack_b8 = lStack_130;
    lStack_c0 = lStack_138;
    lStack_a8 = lStack_120;
    lStack_b0 = lStack_128;
    lStack_a0 = lStack_118;
    lStack_108 = lStack_180;
    lStack_110 = lStack_188;
    lStack_f8 = lStack_170;
    lStack_100 = lStack_178;
    lStack_e8 = lStack_160;
    lStack_f0 = lStack_168;
    lStack_d8 = lStack_150;
    lStack_e0 = lStack_158;
    FUN_100cd1454(param_2 + 0x36);
    pcVar6 = (char *)param_2[0x34];
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar6,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar6,1,pcVar6);
    if (param_2[4] == -0x8000000000000000) {
      if (param_2[5] != 0) {
        _free(param_2[6]);
      }
    }
    else {
      func_0x000100e15954();
    }
  }
  *param_1 = lStack_1a8;
  param_1[1] = (long)plStack_1a0;
  param_1[2] = (long)puStack_198;
  param_1[3] = lStack_190;
  param_1[0xd] = lStack_c8;
  param_1[0xc] = lStack_d0;
  param_1[0xf] = lStack_b8;
  param_1[0xe] = lStack_c0;
  param_1[0x11] = lStack_a8;
  param_1[0x10] = lStack_b0;
  param_1[0x12] = lStack_a0;
  param_1[5] = lStack_108;
  param_1[4] = lStack_110;
  param_1[7] = lStack_f8;
  param_1[6] = lStack_100;
  uVar5 = 1;
  param_1[9] = lStack_e8;
  param_1[8] = lStack_f0;
  param_1[0xb] = lStack_d8;
  param_1[10] = lStack_e0;
LAB_101623160:
  *(undefined1 *)(param_2 + 0x35) = uVar5;
  return;
}

