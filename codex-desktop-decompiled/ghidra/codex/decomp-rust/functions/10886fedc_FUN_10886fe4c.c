
void FUN_10886fe4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  if ((uVar5 < 9) || (uVar5 = *(ulong *)(param_1 + 8), uVar5 != 0xffffffffffffffff)) {
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = 0xffffffffffffffff >> (LZCOUNT(uVar5) & 0x3fU);
    }
    if (uVar1 == 0xffffffffffffffff) goto LAB_10886fea4;
    lVar2 = FUN_1014a3390(param_1,uVar1 + 1);
    if (lVar2 == -0x7fffffffffffffff) {
      return;
    }
  }
  else {
LAB_10886fea4:
    lVar2 = func_0x000108a079f0(&UNK_108ca7687,0x11,&UNK_10b24dd68);
  }
  if (lVar2 == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca7687,0x11,&UNK_10b24dd50);
  }
  lVar2 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E();
  uVar5 = *(ulong *)(lVar2 + 0x48);
  if ((uVar5 < 0x41) || (uVar5 = *(ulong *)(lVar2 + 8), uVar5 != 0xffffffffffffffff)) {
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = 0xffffffffffffffff >> (LZCOUNT(uVar5) & 0x3fU);
    }
    if (uVar1 == 0xffffffffffffffff) goto LAB_10886ff34;
    lVar2 = FUN_1014a322c(lVar2,uVar1 + 1);
    if (lVar2 == -0x7fffffffffffffff) {
      return;
    }
  }
  else {
LAB_10886ff34:
    lVar2 = func_0x000108a079f0(&UNK_108ca7687,0x11,&UNK_10b24dd68);
  }
  if (lVar2 == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca7687,0x11,&UNK_10b24dd50);
  }
  lVar2 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E();
  uVar5 = *(ulong *)(lVar2 + 0x10);
  if ((uVar5 < 3) || (uVar5 = *(ulong *)(lVar2 + 8), uVar5 != 0xffffffffffffffff)) {
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = 0xffffffffffffffff >> (LZCOUNT(uVar5) & 0x3fU);
    }
    if (uVar1 != 0xffffffffffffffff) {
      lVar2 = FUN_1014a3044(lVar2,uVar1 + 1);
      if (lVar2 == -0x7fffffffffffffff) {
        return;
      }
      goto LAB_10886ffdc;
    }
  }
  lVar2 = func_0x000108a079f0(&UNK_108ca7687,0x11,&UNK_10b24dd68);
LAB_10886ffdc:
  if (lVar2 == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca7687,0x11,&UNK_10b24dd50);
  }
  auVar6 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E();
  plVar4 = auVar6._8_8_;
  plVar3 = auVar6._0_8_;
  lStack_e8 = plVar4[1];
  lStack_f0 = *plVar4;
  lStack_d8 = plVar4[3];
  lStack_e0 = plVar4[2];
  lStack_d0 = plVar4[4];
  lVar2 = plVar4[8];
  FUN_10883f6a8(plVar3,&lStack_f0,lVar2,plVar4 + 5);
  if (*plVar3 != 2) {
    lStack_98 = plVar3[5];
    lStack_a0 = plVar3[4];
    lStack_88 = plVar3[7];
    lStack_90 = plVar3[6];
    lStack_78 = plVar3[9];
    lStack_80 = plVar3[8];
    lStack_70 = plVar3[10];
    lStack_b8 = plVar3[1];
    lStack_c0 = *plVar3;
    lStack_a8 = plVar3[3];
    lStack_b0 = plVar3[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar2,&lStack_f0);
  }
  if (((lStack_f0 == 2) || (lStack_f0 == 4)) && (lStack_e0 != 0)) {
    _free(lStack_d8);
  }
  return;
}

