
void FUN_1013f089c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined7 uStack_150;
  long lStack_149;
  char cStack_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  char cStack_c0;
  undefined6 uStack_bf;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined6 uStack_b7;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  plVar10 = *(long **)(param_2 + 8);
  plVar7 = *(long **)(param_2 + 0x18);
  uVar5 = ((ulong)((long)plVar7 - (long)plVar10) >> 4) * -0x3333333333333333;
  if (0x7fff < uVar5) {
    uVar5 = 0x8000;
  }
  if (plVar7 == plVar10) {
    uStack_178 = 0;
    lStack_170 = 8;
    uStack_168 = 0;
  }
  else {
    lStack_170 = _malloc(uVar5 << 5);
    if (lStack_170 == 0) {
      uVar4 = func_0x0001087c9084(8,uVar5 << 5);
      FUN_100e077ec(&cStack_138);
      FUN_100e4a7d4(&uStack_178);
      __Unwind_Resume(uVar4);
      func_0x000108a07bc4();
      if (lRam000000010b62c4d8 != 0) {
        puStack_198 = (undefined1 *)&puStack_1a0;
        uStack_188 = 0x1013f0b30;
        puStack_1a0 = &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
        puStack_190 = &stack0xfffffffffffffff0;
        __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                  (0x10b62c4d8,1,&puStack_198,&UNK_10b234158,&UNK_10b2340c8);
        return;
      }
      return;
    }
    uStack_168 = 0;
    puVar8 = (undefined8 *)((ulong)&cStack_138 | 1);
    uStack_178 = uVar5;
    do {
      plVar9 = plVar10 + 10;
      lStack_118 = *plVar10;
      *(long **)(param_2 + 8) = plVar9;
      if (lStack_118 == -0x7ffffffffffffffa) break;
      lStack_f8 = plVar10[4];
      lStack_100 = plVar10[3];
      lStack_e8 = plVar10[6];
      lStack_f0 = plVar10[5];
      lStack_d8 = plVar10[8];
      lStack_e0 = plVar10[7];
      lStack_d0 = plVar10[9];
      lStack_108 = plVar10[2];
      lStack_110 = plVar10[1];
      FUN_10116a9e0(&uStack_c8,&lStack_118);
      uVar5 = uStack_168;
      lVar2 = lStack_170;
      uVar4 = CONCAT17(uStack_b8,CONCAT16(uStack_b9,uStack_bf));
      lStack_149 = lStack_a8;
      uStack_150 = (undefined7)(CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0)) >> 8);
      if (CONCAT17(uStack_c1,uStack_c8) != 2) {
        param_1[6] = lStack_98;
        param_1[5] = lStack_a0;
        param_1[8] = lStack_88;
        param_1[7] = lStack_90;
        param_1[10] = lStack_78;
        param_1[9] = lStack_80;
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_b0,CONCAT16(uStack_b1,uStack_b7));
        *(undefined8 *)((long)param_1 + 9) = uVar4;
        *param_1 = CONCAT17(uStack_c1,uStack_c8);
        *(char *)(param_1 + 1) = cStack_c0;
        lVar6 = uStack_168 + 1;
        param_1[4] = lStack_a8;
        param_1[3] = CONCAT71(uStack_150,uStack_b0);
        lVar3 = lStack_170;
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
          FUN_100e077ec(lVar3);
          lVar3 = lVar3 + 0x20;
        }
        if (uStack_178 == 0) {
          return;
        }
        _free(lVar2);
        return;
      }
      if (cStack_c0 == '\x16') break;
      cStack_138 = cStack_c0;
      puVar8[1] = CONCAT17(uStack_b0,CONCAT16(uStack_b1,uStack_b7));
      *puVar8 = uVar4;
      *(long *)((long)puVar8 + 0x17) = lStack_a8;
      *(ulong *)((long)puVar8 + 0xf) = CONCAT71(uStack_150,uStack_b0);
      if (uStack_168 == uStack_178) {
        func_0x000108a1efa8(&uStack_178);
      }
      puVar1 = (undefined8 *)(lStack_170 + uVar5 * 0x20);
      puVar1[1] = uStack_130;
      *puVar1 = CONCAT71(uStack_137,cStack_138);
      puVar1[3] = uStack_120;
      puVar1[2] = uStack_128;
      uStack_168 = uVar5 + 1;
      plVar10 = plVar9;
    } while (plVar9 != plVar7);
  }
  uStack_b9 = (undefined1)lStack_170;
  uStack_c1 = (undefined1)uStack_178;
  *(undefined1 *)(param_1 + 1) = 0x14;
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_b9,(int7)(uStack_178 >> 8));
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_c1,uStack_c8);
  param_1[4] = uStack_168;
  param_1[3] = lStack_170;
  *param_1 = 2;
  return;
}

