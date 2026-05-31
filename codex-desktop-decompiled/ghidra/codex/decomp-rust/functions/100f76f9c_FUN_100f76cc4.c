
/* WARNING: Removing unreachable block (ram,0x000100f76d3c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100f76cc4(long *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long ***ppplVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 ***pppuVar12;
  bool bVar13;
  undefined *puVar14;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long ***ppplStack_390;
  undefined8 *puStack_388;
  undefined8 ***pppuStack_380;
  undefined8 ****ppppuStack_378;
  undefined *puStack_370;
  long lStack_368;
  long lStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  int aiStack_e8 [2];
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x180) {
    _memcpy(&puStack_268,param_2,param_3);
    *(undefined1 *)((long)&puStack_268 + param_3) = 0;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
              (aiStack_e8,&puStack_268,param_3 + 1);
    if (aiStack_e8[0] == 1) {
      puVar14 = &UNK_10b4add80;
LAB_100f76dd4:
      lStack_300 = 0;
      puStack_2f8 = (undefined *)0x1;
      lStack_2f0 = 0;
      uStack_258 = 0x60000020;
      puStack_260 = &UNK_10b209290;
      puStack_268 = (undefined1 *)&lStack_300;
      puStack_d0 = puVar14;
      iVar5 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                        (&puStack_d0,&puStack_268);
      if (iVar5 == 0) {
        param_1[1] = (long)puStack_2f8;
        *param_1 = lStack_300;
        param_1[2] = lStack_2f0;
        if (((ulong)puVar14 & 3) == 1) {
          uVar8 = *(undefined8 *)(puVar14 + -1);
          puVar7 = *(undefined8 **)(puVar14 + 7);
          pcVar4 = (code *)*puVar7;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar8);
          }
          if (puVar7[1] != 0) {
            _free(uVar8);
          }
          _free(puVar14 + -1);
        }
        return;
      }
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,aiStack_e8,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100f76f44);
      (*pcVar4)();
    }
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    puStack_d0 = (undefined *)0x0;
    iVar5 = _stat(uStack_e0,&puStack_d0);
    if (iVar5 == -1) {
      puVar6 = (uint *)___error();
      puVar14 = (undefined *)((ulong)*puVar6 << 0x20 | 2);
      goto LAB_100f76dd4;
    }
    uStack_2a0 = uStack_78;
    uStack_2a8 = uStack_80;
    uStack_290 = uStack_68;
    uStack_298 = uStack_70;
    uStack_280 = uStack_58;
    uStack_288 = uStack_60;
    uStack_270 = uStack_48;
    uStack_278 = uStack_50;
    uStack_2e0 = uStack_b8;
    uStack_2e8 = uStack_c0;
    uStack_2d0 = uStack_a8;
    uStack_2d8 = uStack_b0;
    uStack_2c0 = uStack_98;
    uStack_2c8 = uStack_a0;
    uStack_2b0 = uStack_88;
    uStack_2b8 = uStack_90;
    lStack_2f0 = uStack_c8;
    puStack_2f8 = puStack_d0;
  }
  else {
    FUN_108a820a8(&lStack_300,param_2,param_3,&DAT_10603cc64);
    puVar14 = puStack_2f8;
    if (lStack_300 != 0) goto LAB_100f76dd4;
  }
  puVar14 = puStack_2f8;
  if ((short)((ulong)puStack_2f8 >> 0x20) < -0x7000) {
    if (((ulong)puStack_2f8 & 0x4900000000) != 0) {
      *param_1 = -0x8000000000000000;
      return;
    }
    puStack_260 = &
                  __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    lStack_300 = param_2;
    puStack_2f8 = (undefined *)param_3;
    puStack_268 = (undefined1 *)&lStack_300;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s_is_not_executable_108ad532b,&puStack_268);
    return;
  }
  puVar7 = (undefined8 *)_malloc(0x12);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar7 + 2) = 0x656c;
    puVar7[1] = 0x6966206120746f6e;
    *puVar7 = 0x2073692068746170;
    *param_1 = 0x12;
    param_1[1] = (long)puVar7;
    param_1[2] = 0x12;
    return;
  }
  uVar8 = func_0x0001087c9084(1,0x12);
  if (*(long *)(param_2 + 8) != 0) {
    _free(param_3);
  }
  _free(puVar14);
  uVar8 = __Unwind_Resume(uVar8);
  if (lStack_300 != 0) {
    _free(puStack_2f8);
  }
  FUN_100de21d4(&puStack_d0);
  __Unwind_Resume(uVar8);
  plVar9 = (long *)func_0x000108a07bc4();
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108ca3771,10);
  lVar11 = lStack_368;
  if (ppppuStack_378 == (undefined8 ****)0x8000000000000000) {
LAB_100f76fe4:
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108ca377b,0xb);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = false;
        uVar8 = 0xb;
        lVar11 = 0x20;
        puVar14 = &UNK_108ca377b;
        goto LAB_100f772e4;
      }
    }
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108ca38a1,9);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = false;
        uVar8 = 9;
        lVar11 = 0x30;
        puVar14 = &UNK_108ca38a1;
        goto LAB_100f772e4;
      }
    }
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108c98130,8);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = false;
        uVar8 = 8;
        lVar11 = 0x40;
        puVar14 = &UNK_108c98130;
        goto LAB_100f772e4;
      }
    }
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108ca3786,10);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = false;
        uVar8 = 10;
        lVar11 = 0x50;
        puVar14 = &UNK_108ca3786;
        goto LAB_100f772e4;
      }
    }
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108ca3790,0xb);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = false;
        uVar8 = 0xb;
        lVar11 = 0x60;
        puVar14 = &UNK_108ca3790;
        goto LAB_100f772e4;
      }
    }
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108ca38aa,9);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = false;
        uVar8 = 9;
        lVar11 = 0x70;
        puVar14 = &UNK_108ca38aa;
        goto LAB_100f772e4;
      }
    }
    __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,&UNK_108c98138,8);
    lVar11 = lStack_368;
    if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
      if (ppppuStack_378 != (undefined8 ****)0x0) {
        _free(puStack_370);
      }
      if (lVar11 != 0) {
        bVar13 = true;
        uVar8 = 8;
        lVar11 = 0x80;
        puVar14 = &UNK_108c98138;
        goto LAB_100f772e4;
      }
    }
    puVar7 = (undefined8 *)_malloc(0x14);
    if (puVar7 == (undefined8 *)0x0) goto LAB_100f77484;
    *(undefined4 *)(puVar7 + 2) = 0x656e6f6e;
    puVar7[1] = 0x203a737261762076;
    *puVar7 = 0x6e652079786f7270;
    lVar11 = plVar9[2];
    if (lVar11 == *plVar9) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(plVar9);
    }
    puVar10 = (undefined8 *)(plVar9[1] + lVar11 * 0x18);
    *puVar10 = 0x14;
    puVar10[1] = puVar7;
    puVar10[2] = 0x14;
    plVar9[2] = lVar11 + 1;
  }
  else {
    if (ppppuStack_378 != (undefined8 ****)0x0) {
      _free(puStack_370);
    }
    if (lVar11 == 0) goto LAB_100f76fe4;
    bVar13 = false;
    uVar8 = 10;
    lVar11 = 0x10;
    puVar14 = &UNK_108ca3771;
LAB_100f772e4:
    puVar7 = (undefined8 *)_malloc(0x40);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0001087c9084(8,0x40);
LAB_100f77484:
      func_0x0001087c9084(1,0x14);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100f7749c);
      (*pcVar4)();
    }
    *puVar7 = puVar14;
    puVar7[1] = uVar8;
    ppplStack_390 = (undefined8 ***)0x4;
    pppuVar12 = (undefined8 ***)0x1;
    pppuStack_380 = (undefined8 ***)0x1;
    puStack_388 = puVar7;
    if (!bVar13) {
LAB_100f7731c:
      pppuVar12 = pppuStack_380;
      lVar11 = lVar11 + 0x10;
      do {
        uVar8 = *(undefined8 *)(&UNK_10b239480 + lVar11);
        uVar1 = *(undefined8 *)(&UNK_10b239488 + lVar11);
        __ZN3std3env7_var_os17h6bd9111edd9950c4E(&ppppuStack_378,uVar8,uVar1);
        lVar3 = lStack_368;
        if (ppppuStack_378 != (undefined8 ****)0x8000000000000000) {
          if (ppppuStack_378 != (undefined8 ****)0x0) {
            _free(puStack_370);
          }
          if (lVar3 != 0) goto LAB_100f7736c;
        }
        lVar11 = lVar11 + 0x10;
        if (lVar11 == 0x90) break;
      } while( true );
    }
LAB_100f773b0:
    puVar7 = puStack_388;
    ppplVar2 = ppplStack_390;
    func_0x000100f3f8c4(&ppppuStack_378,puStack_388,pppuVar12,&UNK_108ca7fce,2);
    puStack_388 = (undefined8 *)puStack_370;
    ppplStack_390 = (long ***)ppppuStack_378;
    ppppuStack_378 = &ppplStack_390;
    pppuStack_380 = (undefined8 ***)lStack_368;
    puStack_370 = &DAT_10112965c;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_3a8,s_proxy_env_vars_present__108ad513c,&ppppuStack_378);
    if (ppplStack_390 != (long ***)0x0) {
      _free(puStack_388);
    }
    lVar11 = plVar9[2];
    if (lVar11 == *plVar9) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(plVar9);
    }
    puVar10 = (undefined8 *)(plVar9[1] + lVar11 * 0x18);
    puVar10[1] = uStack_3a0;
    *puVar10 = uStack_3a8;
    puVar10[2] = uStack_398;
    plVar9[2] = lVar11 + 1;
    if (ppplVar2 != (undefined8 ***)0x0) {
      _free(puVar7);
    }
  }
  return;
LAB_100f7736c:
  if (pppuVar12 == ppplStack_390) {
    FUN_108855060(&ppplStack_390,pppuVar12,1,8,0x10);
    puVar7 = puStack_388;
  }
  puVar7[(long)pppuVar12 * 2] = uVar8;
  (puVar7 + (long)pppuVar12 * 2)[1] = uVar1;
  pppuVar12 = (undefined8 ***)((long)pppuVar12 + 1);
  pppuStack_380 = pppuVar12;
  if (lVar11 == 0x80) goto LAB_100f773b0;
  goto LAB_100f7731c;
}

