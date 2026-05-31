
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN28codex_app_server_test_client11CodexClient12thread_start17hd4e5be6da8f05df6E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong **ppuVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  int *piVar12;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 ***pppuStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [416];
  undefined8 **ppuStack_148;
  undefined8 ***pppuStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  ulong **ppuStack_120;
  undefined8 ***pppuStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong **ppuStack_f0;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  ulong **ppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  
  ppuStack_f0 = (ulong **)0x0;
  pppuStack_e8 = (undefined8 ****)0x0;
  iVar9 = _getentropy(&ppuStack_f0,0x10);
  if (iVar9 != 0) {
    piVar12 = (int *)___error();
    iVar9 = 0x10001;
    if (0 < *piVar12) {
      iVar9 = -*piVar12;
    }
    ppuStack_120 = (ulong **)CONCAT44(ppuStack_120._4_4_,iVar9);
    pppuStack_b8 = (undefined8 ***)
                   &
                   __ZN62__LT_getrandom__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hbded66845035e9f5E
    ;
    pppuStack_c0 = &ppuStack_120;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__could_not_retrieve_random_bytes_108b3c856,&pppuStack_c0,&UNK_10b4dc178);
LAB_1025c72b8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1025c72bc);
    (*pcVar7)();
  }
  uVar2 = ((ulong)ppuStack_f0 & 0x3f00ff00ff00ff00 | 0x8000000000000000) >> 8 |
          ((ulong)ppuStack_f0 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  pppuStack_118 = (undefined8 ***)(uVar2 >> 0x20 | uVar2 << 0x20);
  uVar2 = ((ulong)pppuStack_e8 & 0xff00ff00ff000f00 | 0x4000) >> 8 |
          ((ulong)pppuStack_e8 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  ppuStack_120 = (ulong **)(uVar2 >> 0x20 | uVar2 << 0x20);
  ppuStack_f0 = (ulong **)0x0;
  pppuStack_e8 = (undefined8 ****)0x1;
  lStack_e0 = 0;
  FUN_10624142c(&pppuStack_c0,&ppuStack_120,0);
  FUN_1088e6a54(&ppuStack_f0,0,0x24,1,1);
  pppuVar6 = pppuStack_e8;
  ppuVar5 = ppuStack_f0;
  plVar1 = (long *)((long)pppuStack_e8 + lStack_e0);
  plVar1[1] = (long)pppuStack_b8;
  *plVar1 = (long)pppuStack_c0;
  plVar1[3] = (long)puStack_a8;
  plVar1[2] = (long)ppuStack_b0;
  *(undefined4 *)(plVar1 + 4) = puStack_a0._0_4_;
  lVar11 = lStack_e0 + 0x24;
  lStack_300 = -0x8000000000000000;
  ppppuVar10 = (undefined8 ****)pppuStack_e8;
  if ((undefined8 ***)ppuStack_f0 != (undefined8 ***)0x8000000000000000) {
    ppppuVar10 = (undefined8 ****)_malloc(lVar11);
    if (ppppuVar10 == (undefined8 ****)0x0) {
      func_0x0001087c9084(1,lVar11);
      goto LAB_1025c72b8;
    }
    _memcpy(ppppuVar10,pppuVar6,lVar11);
    lStack_300 = lVar11;
  }
  pppuStack_2f8 = ppppuVar10;
  lStack_2f0 = lVar11;
  _memcpy(auStack_2e8,param_3,0x160);
  uStack_308 = 0x8000000000000001;
  ppuStack_148 = ppuVar5;
  pppuStack_140 = pppuVar6;
  puStack_130 = &UNK_108d2f553;
  uStack_128 = 0xc;
  lStack_138 = lVar11;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bRam000000010b628938 - 1 < 2 ||
       ((bRam000000010b628938 != 0 &&
        (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b628928), cVar8 != '\0')))) &&
      (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b628928)
      , iVar9 != 0)))) {
    ppuStack_70 = &ppuStack_148;
    lStack_d8 = lRam000000010b628928 + 0x30;
    pppuStack_c0 = (undefined8 ***)&UNK_10b27cc90;
    pppuStack_b8 = (undefined8 ***)&UNK_10b27c068;
    ppuStack_b0 = &puStack_130;
    puStack_a8 = &UNK_10b27c068;
    puStack_a0 = (undefined8 *)&UNK_10b27cca0;
    puStack_98 = &UNK_10b27c068;
    puStack_88 = &UNK_10b27c068;
    ppuStack_80 = (ulong **)&ppuStack_70;
    puStack_78 = &UNK_10b27ccb0;
    pppuStack_e8 = &pppuStack_c0;
    ppuStack_f0 = (ulong **)0x1;
    lStack_e0 = 5;
    ppuStack_90 = ppuStack_b0;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E(&ppuStack_120,lRam000000010b628928,&ppuStack_f0);
  }
  else {
    ppuStack_f0 = (ulong **)0x2;
    lStack_d0 = lRam000000010b628928;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      ppuStack_70 = &ppuStack_148;
      pppuStack_c0 = (undefined8 ***)&UNK_10b27cc90;
      pppuStack_b8 = (undefined8 ***)&UNK_10b27c068;
      lStack_108 = lRam000000010b628928 + 0x30;
      ppuStack_b0 = &puStack_130;
      puStack_a8 = &UNK_10b27c068;
      puStack_a0 = (undefined8 *)&UNK_10b27cca0;
      puStack_98 = &UNK_10b27c068;
      puStack_88 = &UNK_10b27c068;
      ppuStack_80 = (ulong **)&ppuStack_70;
      puStack_78 = &UNK_10b27ccb0;
      pppuStack_118 = &pppuStack_c0;
      ppuStack_120 = (ulong **)0x1;
      lStack_110 = 5;
      ppuStack_90 = ppuStack_b0;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&ppuStack_f0,&ppuStack_120);
    }
    pppuStack_118 = pppuStack_e8;
    ppuStack_120 = ppuStack_f0;
    lStack_108 = lStack_d8;
    lStack_110 = lStack_e0;
    lStack_100 = lStack_d0;
  }
  ppuVar5 = ppuStack_120;
  uVar4 = uStack_128;
  puVar3 = puStack_130;
  puStack_a0 = &uStack_308;
  pppuStack_b8 = pppuStack_140;
  pppuStack_c0 = (undefined8 ***)ppuStack_148;
  ppuStack_b0 = (undefined **)lStack_138;
  puStack_98 = puStack_130;
  ppuStack_90 = (undefined **)uStack_128;
  puStack_a8 = (undefined *)param_2;
  if ((undefined8 ***)ppuStack_120 != (undefined8 ***)0x2) {
    ppppuVar10 = (undefined8 ****)pppuStack_118;
    if (((ulong)ppuStack_120 & 1) != 0) {
      ppppuVar10 = (undefined8 ****)
                   ((long)pppuStack_118 +
                   (*(long *)(lStack_110 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (**(code **)(lStack_110 + 0x60))(ppppuVar10,&lStack_108);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_100 != 0)) {
    ppuStack_70 = *(undefined8 ***)(lStack_100 + 0x10);
    uStack_68 = *(undefined8 *)(lStack_100 + 0x18);
    ppuStack_f0 = (ulong **)&ppuStack_70;
    pppuStack_e8 = (undefined8 ***)&DAT_1025f090c;
    FUN_102614b4c(&ppuStack_120,&UNK_108d31bac,0x15,s__>___108ab67cd,&ppuStack_f0);
  }
  lVar11 = FUN_1025c7884(param_2,&uStack_308);
  if (lVar11 == 0) {
    func_0x0001025c9078(param_1,param_2,&pppuStack_c0,puVar3,uVar4);
  }
  else {
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar11;
    if (((ulong)pppuStack_c0 & 0x7fffffffffffffff) != 0) {
      _free(pppuStack_b8);
    }
  }
  if ((undefined8 ***)ppuVar5 != (undefined8 ***)0x2) {
    ppppuVar10 = (undefined8 ****)pppuStack_118;
    if (((ulong)ppuStack_120 & 1) != 0) {
      ppppuVar10 = (undefined8 ****)
                   ((long)pppuStack_118 +
                   (*(long *)(lStack_110 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (**(code **)(lStack_110 + 0x68))(ppppuVar10,&lStack_108);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_100 != 0)) {
    ppuStack_70 = *(undefined8 ***)(lStack_100 + 0x10);
    uStack_68 = *(undefined8 *)(lStack_100 + 0x18);
    ppuStack_f0 = (ulong **)&ppuStack_70;
    pppuStack_e8 = (undefined8 ***)&DAT_1025f090c;
    FUN_102614b4c(&ppuStack_120,&UNK_108d31bac,0x15,s_<____108ab67c5,&ppuStack_f0);
  }
  FUN_1025f61a4(&ppuStack_120);
  FUN_1025fa1cc(&uStack_308);
  return;
}

