
void FUN_10084f1f0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plStack_280;
  undefined8 uStack_278;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_38;
  
  lVar4 = _malloc(0x2420);
  if (lVar4 == 0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x2420);
  }
  else {
    *(undefined8 *)(lVar4 + 0x2418) = 0;
    *(undefined8 *)(lVar4 + 0x2410) = 0;
    *(undefined8 *)(lVar4 + 0x2408) = 0;
    *(undefined8 *)(lVar4 + 0x2400) = 0;
    uStack_278 = 1;
    plStack_280 = (long *)0x1;
    uStack_1f8 = 0;
    uStack_180 = 0;
    uStack_170 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_b8 = 1;
    uStack_c0 = 0;
    uStack_b0 = 0;
    plStack_38 = (long *)0x0;
    lStack_200 = lVar4;
    lStack_e0 = lVar4;
    lStack_d8 = lVar4;
    iVar3 = _posix_memalign(&plStack_38,0x80,0x200);
    plVar1 = plStack_38;
    if ((iVar3 != 0) || (plStack_38 == (long *)0x0)) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
      goto LAB_10084f310;
    }
    _memcpy(plStack_38,&plStack_280,0x200);
    lVar4 = *plVar1;
    *plVar1 = lVar4 + 1;
    if (lVar4 < 0) goto LAB_10084f310;
    plStack_280 = plVar1;
    plStack_38 = plVar1;
    plVar5 = (long *)_malloc(0x30);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = 1;
      *plVar5 = 1;
      *(undefined1 *)(plVar5 + 5) = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      lVar4 = *plVar5;
      *plVar5 = lVar4 + 1;
      if (-1 < lVar4) {
        *param_1 = plVar5;
        param_1[1] = plVar1;
        *(undefined1 *)(param_1 + 2) = 0;
        param_1[3] = plVar1;
        param_1[4] = plVar5;
        return;
      }
      goto LAB_10084f310;
    }
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
LAB_10084f310:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10084f314);
  (*pcVar2)();
}

