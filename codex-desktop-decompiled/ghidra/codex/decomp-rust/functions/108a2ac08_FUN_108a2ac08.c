
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108a2ac08(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x10;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar11;
  ulong unaff_x22;
  ulong uVar12;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puStack_210;
  ulong uStack_208;
  undefined8 *puStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (*(char *)(param_1 + 0x14) != '\x01') {
      param_1 = (undefined8 *)0x0;
    }
    return param_1;
  }
  __ZN16parking_lot_core11parking_lot10ThreadData3new17hfa4775c6f0f885d9E(&uStack_170);
  cVar1 = *(char *)(param_1 + 0x14);
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  param_1[0xd] = uStack_108;
  param_1[0xc] = uStack_110;
  param_1[0xf] = uStack_f8;
  param_1[0xe] = uStack_100;
  param_1[0x11] = uStack_e8;
  param_1[0x10] = uStack_f0;
  param_1[0x13] = uStack_d8;
  param_1[0x12] = uStack_e0;
  param_1[5] = uStack_148;
  param_1[4] = uStack_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  param_1[9] = uStack_128;
  param_1[8] = uStack_130;
  param_1[0xb] = uStack_118;
  param_1[10] = uStack_120;
  param_1[1] = uStack_168;
  *param_1 = uStack_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  *(undefined1 *)(param_1 + 0x14) = 1;
  lVar2 = ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E;
  if (cVar1 == '\x01') {
    ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E =
         ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E + -1;
    _pthread_mutex_destroy(lVar2,&uStack_d0);
    _pthread_cond_destroy(&uStack_90);
    return param_1;
  }
  if (cVar1 == '\0') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(param_1,0x1059de5c0);
    return param_1;
  }
  puVar4 = (undefined8 *)
           __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109af9b80,0x28,&UNK_10b3df5a0);
  uStack_178 = 0x108a2ad0c;
  uVar10 = puVar4[0x19];
  uVar8 = uVar10;
  puStack_180 = &stack0xfffffffffffffff0;
  if ((uVar10 < 9) || (uVar8 = puVar4[1], uVar8 != 0xffffffffffffffff)) {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = 0xffffffffffffffff >> (LZCOUNT(uVar8) & 0x3fU);
    }
    if (uVar9 == 0xffffffffffffffff) goto LAB_108a2af24;
    unaff_x23 = uVar9 + 1;
    if (uVar10 < 9) {
      unaff_x21 = 8;
      param_1 = puVar4 + 1;
      unaff_x22 = uVar10;
    }
    else {
      param_1 = (undefined8 *)puVar4[2];
      unaff_x21 = uVar10;
      unaff_x22 = puVar4[1];
    }
    if (unaff_x23 < unaff_x22) goto LAB_108a2af3c;
    if (uVar9 < 8) {
      if (uVar10 < 9) {
        return puVar4;
      }
      *puVar4 = 0;
      _memcpy(puVar4 + 1,param_1,unaff_x22 * 0x18);
      puVar4[0x19] = unaff_x22;
      if (unaff_x21 < 0x555555555555556) goto code_r0x000108aa97c4;
      lStack_1b8 = unaff_x21 * 0x18;
      puStack_1c0 = (undefined8 *)0x0;
      puVar4 = (undefined8 *)
               func_0x000108a07a3c(&UNK_109af9be6,0x2b,&puStack_1c0,&UNK_10b3df5b8,&UNK_10b3df638);
      uVar10 = extraout_x9;
      uVar9 = extraout_x10;
    }
    if (unaff_x23 == unaff_x21) {
      return puVar4;
    }
    if (0x555555555555554 < uVar9) {
LAB_108a2ae18:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109af9c22,0x11,&UNK_10b3df650);
      goto code_r0x000108aa97c4;
    }
    unaff_x20 = (undefined8 *)(unaff_x23 * 0x18);
    unaff_x24 = puVar4;
    if (uVar10 < 9) {
      if (unaff_x20 == (undefined8 *)0x0) {
        puStack_1c0 = (undefined8 *)0x0;
        iVar3 = _posix_memalign(&puStack_1c0,8,0);
        puStack_1d8 = param_1;
        puVar5 = puStack_1c0;
        if (iVar3 != 0) goto LAB_108a2af54;
      }
      else {
        puVar5 = (undefined8 *)_malloc(unaff_x20);
      }
      unaff_x21 = 0;
      puStack_1d8 = param_1;
      if (puVar5 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)_memcpy(puVar5,param_1,unaff_x22 * 0x18);
LAB_108a2aed0:
        *puVar4 = 1;
        puVar4[1] = unaff_x22;
        puVar4[2] = puVar5;
        puVar4[0x19] = unaff_x23;
        return puVar6;
      }
    }
    else {
      if (0x555555555555555 < unaff_x21) goto LAB_108a2ae18;
      if (unaff_x20 == (undefined8 *)0x0) {
        puStack_1c0 = (undefined8 *)0x0;
        iVar3 = _posix_memalign(&puStack_1c0,8,0);
        puVar5 = puStack_1c0;
        puStack_1d8 = param_1;
        if ((iVar3 == 0) && (unaff_x21 = 0, puStack_1c0 != (undefined8 *)0x0)) {
          puVar6 = (undefined8 *)_free(param_1);
          goto LAB_108a2aed0;
        }
      }
      else {
        puVar6 = (undefined8 *)_realloc(param_1,unaff_x20);
        puVar5 = puVar6;
        if (puVar6 != (undefined8 *)0x0) goto LAB_108a2aed0;
        unaff_x21 = 0;
        puStack_1d8 = param_1;
      }
    }
  }
  else {
LAB_108a2af24:
    func_0x000108a079f0(&UNK_109af9c22,0x11,&UNK_10b3df668);
LAB_108a2af3c:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109af9c33,0x20,&UNK_10b3df680);
    puStack_1d8 = param_1;
  }
LAB_108a2af54:
  puVar5 = (undefined8 *)__ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
  uStack_1c8 = 0x108a2af60;
  uVar10 = puVar5[9];
  uVar8 = uVar10;
  puVar4 = unaff_x20;
  puStack_200 = unaff_x24;
  uStack_1f8 = unaff_x23;
  uStack_1f0 = unaff_x22;
  uStack_1e8 = unaff_x21;
  puStack_1e0 = unaff_x20;
  ppuStack_1d0 = &puStack_180;
  if ((uVar10 < 9) || (uVar8 = puVar5[1], uVar8 != 0xffffffffffffffff)) {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = 0xffffffffffffffff >> (LZCOUNT(uVar8) & 0x3fU);
    }
    if (uVar9 == 0xffffffffffffffff) goto LAB_108a2b184;
    uVar8 = uVar9 + 1;
    if (uVar10 < 9) {
      uVar11 = 8;
      param_1 = puVar5 + 1;
      uVar12 = uVar10;
    }
    else {
      param_1 = (undefined8 *)puVar5[2];
      uVar11 = uVar10;
      uVar12 = puVar5[1];
    }
    if (uVar12 <= uVar8) {
      if (uVar9 < 8) {
        if (uVar10 < 9) {
          return puVar5;
        }
        *puVar5 = 0;
        _memcpy(puVar5 + 1,param_1,uVar12 << 3);
        puVar5[9] = uVar12;
        uStack_208 = uVar11 << 3;
        if ((uVar11 >> 0x3d == 0) && (uStack_208 < 0x7ffffffffffffff9)) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(param_1);
          return puVar4;
        }
        puStack_210 = (undefined8 *)0x0;
        puVar6 = (undefined8 *)
                 func_0x000108a07a3c(&UNK_109af9be6,0x2b,&puStack_210,&UNK_10b3df5b8,&UNK_10b3df638)
        ;
        uVar9 = extraout_x8;
        puVar4 = puVar5;
LAB_108a2b0b4:
        if ((uVar11 >> 0x3d == 0) && (uVar11 << 3 < uVar9)) {
          puVar5 = puVar6;
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = (undefined8 *)_realloc(param_1,puVar4);
            puVar6 = puVar7;
            if (puVar7 == (undefined8 *)0x0) goto LAB_108a2b1b4;
            goto LAB_108a2b130;
          }
          puStack_210 = (undefined8 *)0x0;
          iVar3 = _posix_memalign(&puStack_210,8,0);
          puVar6 = puStack_210;
          if ((iVar3 == 0) && (puStack_210 != (undefined8 *)0x0)) {
            puVar7 = (undefined8 *)_free(param_1);
            goto LAB_108a2b130;
          }
          goto LAB_108a2b1b4;
        }
LAB_108a2b0e8:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109af9c22,0x11,&UNK_10b3df650);
        puVar5 = unaff_x24;
LAB_108a2b100:
        puStack_210 = (undefined8 *)0x0;
        iVar3 = _posix_memalign(&puStack_210,8,0);
        puVar6 = puStack_210;
        if (iVar3 != 0) goto LAB_108a2b1b4;
      }
      else {
        if (uVar8 == uVar11) {
          return puVar5;
        }
        if (0x1ffffffffffffffe < uVar9) goto LAB_108a2b0e8;
        uVar9 = 0x7ffffffffffffff9;
        puVar4 = (undefined8 *)(uVar8 * 8);
        if ((undefined8 *)0x7ffffffffffffff8 < puVar4) goto LAB_108a2b0e8;
        puVar6 = puVar5;
        if (8 < uVar10) goto LAB_108a2b0b4;
        if (puVar4 == (undefined8 *)0x0) goto LAB_108a2b100;
        puVar6 = (undefined8 *)_malloc(puVar4);
      }
      if (puVar6 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)_memcpy(puVar6,param_1,uVar12 << 3);
LAB_108a2b130:
        *puVar5 = 1;
        puVar5[1] = uVar12;
        puVar5[2] = puVar6;
        puVar5[9] = uVar8;
        return puVar7;
      }
      goto LAB_108a2b1b4;
    }
  }
  else {
LAB_108a2b184:
    func_0x000108a079f0(&UNK_109af9c22,0x11,&UNK_10b3df668);
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109af9c33,0x20,&UNK_10b3df680);
LAB_108a2b1b4:
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,puVar4);
  puVar5 = (undefined8 *)FUN_1059dec38(3,0);
  puVar4 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
  puVar6 = puVar5;
  if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E != (undefined8 *)0x0) {
    if (puVar5[1] != 0) {
      _free(*puVar5);
    }
    _free(puVar5);
    puVar5 = puVar4;
    puVar6 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
  }
  ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E = puVar6;
  return puVar5;
}

