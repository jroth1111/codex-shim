
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101434930(undefined8 *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined *puStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  char acStack_1b0 [32];
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [72];
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [9];
  undefined1 auStack_71 [17];
  
  if (*param_2 == '\x15') {
    uStack_180 = *(undefined8 *)(param_2 + 8);
    lStack_190 = *(long *)(param_2 + 0x10);
    uVar11 = *(ulong *)(param_2 + 0x18);
    lStack_178 = lStack_190 + uVar11 * 0x40;
    acStack_1b0[0] = '\x16';
    lStack_170 = 0;
    uVar8 = uVar11;
    if (0x2aa9 < uVar11) {
      uVar8 = 0x2aaa;
    }
    lStack_188 = lStack_190;
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar12 = *pauVar5;
      *(long *)*pauVar5 = *(long *)*pauVar5 + 1;
      auVar3 = *pauVar5;
      if (uVar11 != 0) goto LAB_1014349bc;
LAB_101434a80:
      auVar12 = auVar3;
      uVar8 = 0;
      uVar11 = 0;
      puVar10 = &UNK_108c56c70;
    }
    else {
      auVar12 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      pauVar5[1][0] = 1;
      *(long *)*pauVar5 = auVar12._0_8_ + 1;
      *(long *)(*pauVar5 + 8) = auVar12._8_8_;
      auVar3 = auVar12;
      if (uVar11 == 0) goto LAB_101434a80;
LAB_1014349bc:
      uVar2 = 4;
      if (3 < uVar11) {
        uVar2 = (uVar8 & 8) + 8;
      }
      if (0xe < uVar11) {
        uVar2 = (0xffffffffffffffffU >>
                (LZCOUNT(((ulong)(uint)((int)uVar8 << 3) * 0x92492493 >> 0x22) - 1) & 0x3fU)) + 1;
      }
      lVar9 = uVar2 * 0x60;
      lVar1 = uVar2 + 8;
      lVar6 = _malloc(lVar9 + lVar1);
      if (lVar6 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar9 + lVar1);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101434c30);
        (*pcVar4)();
      }
      puVar10 = (undefined *)(lVar6 + lVar9);
      uVar11 = uVar2 - 1;
      uVar8 = uVar11;
      if (7 < uVar11) {
        uVar8 = (uVar2 >> 3) * 7;
      }
      _memset(puVar10,0xff,lVar1);
    }
    uStack_150 = 0;
    puStack_168 = puVar10;
    uStack_160 = uVar11;
    uStack_158 = uVar8;
    auStack_148 = auVar12;
    while( true ) {
      FUN_10061f894(&lStack_138,acStack_1b0);
      lVar6 = lStack_178;
      lVar1 = lStack_188;
      if (lStack_138 == -0x8000000000000000) break;
      if (lStack_138 == -0x7fffffffffffffff) {
        uStack_1d8 = uStack_130;
        FUN_100cc2fb4(&puStack_168);
        goto LAB_101434b80;
      }
      lStack_d8 = lStack_138;
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      FUN_1016e58ac(alStack_c0,&puStack_168,&lStack_d8,auStack_120);
      if (alStack_c0[0] != -0x7ffffffffffffffb) {
        FUN_100de6690(alStack_c0);
      }
    }
    uStack_1d8 = uStack_160;
    puStack_1e0 = puStack_168;
    uStack_1c8 = uStack_150;
    uStack_1d0 = uStack_158;
    auStack_1c0 = auStack_148;
    if (puStack_168 == (undefined *)0x0) {
LAB_101434b80:
      FUN_100d34830(&lStack_190);
      if (acStack_1b0[0] != '\x16') {
        FUN_100e077ec(acStack_1b0);
      }
    }
    else {
      FUN_100d34830(&lStack_190);
      if (lVar6 == lVar1) {
        uVar8 = 0;
      }
      else {
        lStack_138 = lStack_170;
        uVar8 = FUN_1087e422c(lStack_170 + ((ulong)(lVar6 - lVar1) >> 6),&lStack_138,&UNK_10b23a190)
        ;
      }
      if (acStack_1b0[0] != '\x16') {
        FUN_100e077ec(acStack_1b0);
      }
      if (uVar8 == 0) {
        uVar7 = 0;
        param_1[2] = uStack_1d8;
        param_1[1] = puStack_1e0;
        param_1[4] = uStack_1c8;
        param_1[3] = uStack_1d0;
        *(undefined1 (*) [16])(param_1 + 5) = auStack_1c0;
        goto LAB_101434ba8;
      }
      FUN_100cc2fb4(&puStack_1e0);
      uStack_1d8 = uVar8;
    }
  }
  else {
    uStack_1d8 = FUN_108855b04(param_2,auStack_71,&UNK_10b209b60);
  }
  param_1[1] = uStack_1d8;
  uVar7 = 1;
LAB_101434ba8:
  *param_1 = uVar7;
  return;
}

