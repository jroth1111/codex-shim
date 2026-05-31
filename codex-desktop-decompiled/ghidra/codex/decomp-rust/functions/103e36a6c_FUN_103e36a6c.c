
long * FUN_103e36a6c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  char in_wzr;
  undefined1 auVar6 [16];
  long *plStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  
  lVar3 = *param_2;
  *param_2 = lVar3 + 0x40;
  if (lVar3 < 0) {
    __ZN3std7process5abort17hdc01e45e25b715e8E();
    uVar5 = extraout_x1;
LAB_103e36bdc:
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(unaff_x22,uVar5,1000000000);
  }
  else {
    unaff_x23 = (long *)*param_1;
    param_1[1] = param_1[1] + 1;
    lVar3 = *unaff_x23;
    *unaff_x23 = lVar3 + 1;
    if (lVar3 < 0) goto LAB_103e36c1c;
    lStack_78 = 1;
    puStack_80 = (undefined *)0x1;
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_50 = 1;
    plStack_70 = unaff_x23;
    plStack_58 = param_2;
    auVar6 = _malloc(0x38);
    uVar5 = auVar6._8_8_;
    unaff_x20 = auVar6._0_8_;
    if (unaff_x20 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      goto LAB_103e36c1c;
    }
    unaff_x20[1] = lStack_78;
    *unaff_x20 = (long)puStack_80;
    unaff_x20[3] = lStack_68;
    unaff_x20[2] = (long)plStack_70;
    unaff_x20[5] = (long)plStack_58;
    unaff_x20[4] = lStack_60;
    unaff_x20[6] = CONCAT71(uStack_4f,uStack_50);
    unaff_x22 = unaff_x23 + 2;
    unaff_x19 = param_2;
    unaff_x21 = param_1;
    plStack_90 = unaff_x20;
    if ((char)*unaff_x22 != '\0') goto LAB_103e36bdc;
    *(char *)unaff_x22 = '\x01';
  }
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar3 + 1;
  if (-1 < lVar3) {
    lVar3 = unaff_x23[5];
    plVar1 = unaff_x20 + 2;
    puStack_80 = (undefined *)plVar1;
    if ((long *)lVar3 != plVar1) {
      unaff_x20[3] = 0;
      unaff_x20[4] = lVar3;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar1;
      }
      unaff_x23[5] = (long)plVar1;
      if (unaff_x23[6] == 0) {
        unaff_x23[6] = (long)plVar1;
      }
      if ((char)*unaff_x22 == '\x01') {
        *(char *)unaff_x22 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(unaff_x22,0);
      }
      puStack_80 = &UNK_10b2fbbd0;
      lVar3 = unaff_x20[5];
      plStack_90 = unaff_x20;
      plStack_88 = unaff_x21;
      lStack_78 = (long)plVar1;
      iVar4 = __ZN5tokio7runtime4task7harness15can_read_output17h666a0f093e0cf41dE
                        (lVar3,lVar3 + *(long *)(*(long *)(lVar3 + 0x10) + 0x38),&puStack_80);
      if (iVar4 != 0) {
        func_0x000103ec4ad8(unaff_x20);
      }
      lVar3 = *unaff_x20;
      *unaff_x20 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9e34a6907af95765E(&plStack_90);
      }
      return unaff_x19;
    }
    func_0x00010897c08c(1,unaff_x23 + 5,&puStack_80,0,param_5,&UNK_10b2fbba0);
  }
LAB_103e36c1c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e36c20);
  (*pcVar2)();
}

