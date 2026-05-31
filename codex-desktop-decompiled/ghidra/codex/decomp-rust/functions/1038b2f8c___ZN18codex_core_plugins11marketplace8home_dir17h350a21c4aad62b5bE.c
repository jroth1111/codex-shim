
void __ZN18codex_core_plugins11marketplace8home_dir17h350a21c4aad62b5bE(long *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long in_stack_ffffffffffffffc8;
  char *in_stack_ffffffffffffffd0;
  long in_stack_ffffffffffffffd8;
  
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&stack0xffffffffffffffc8,&UNK_108d96a7b,4);
  if (in_stack_ffffffffffffffc8 != -0x8000000000000000) {
    if ((in_stack_ffffffffffffffd8 != 0) && (*in_stack_ffffffffffffffd0 == '/')) goto LAB_1038b3014;
    if (in_stack_ffffffffffffffc8 != 0) {
      _free();
    }
  }
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&stack0xffffffffffffffc8,&UNK_108d96a7f,0xb);
  if (in_stack_ffffffffffffffc8 != -0x8000000000000000) {
    if ((in_stack_ffffffffffffffd8 != 0) && (*in_stack_ffffffffffffffd0 == '/')) {
LAB_1038b3014:
      *param_1 = in_stack_ffffffffffffffc8;
      param_1[1] = (long)in_stack_ffffffffffffffd0;
      param_1[2] = in_stack_ffffffffffffffd8;
      return;
    }
    if (in_stack_ffffffffffffffc8 != 0) {
      _free();
    }
  }
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&lStack_90,&UNK_109a37de6,4);
  if (lStack_90 != -0x8000000000000000) {
    if (lStack_80 != 0) goto LAB_1055f4ca0;
    unaff_x22 = lStack_80;
    unaff_x23 = lStack_88;
    if (lStack_90 != 0) {
      _free(lStack_88);
    }
  }
  lVar4 = _sysconf(0x47);
  lVar1 = 0x200;
  if (-1 < lVar4) {
    lVar1 = lVar4;
  }
  if (lVar1 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(lVar1);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,lVar1);
      goto LAB_1055f4cd8;
    }
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_48 = 0;
  uVar5 = _getuid();
  iVar3 = _getpwuid_r(uVar5,&lStack_90,lVar4,lVar1,&lStack_48);
  uVar5 = uStack_60;
  lVar6 = -0x8000000000000000;
  if ((iVar3 == 0) && (lStack_48 != 0)) {
    lVar6 = _strlen(uStack_60);
    if (lVar6 == 0) {
      lVar6 = -0x8000000000000000;
    }
    else {
      unaff_x23 = _malloc();
      unaff_x22 = lVar6;
      if (unaff_x23 == 0) {
LAB_1055f4cd8:
        func_0x0001087c9084(1,unaff_x22);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1055f4ce8);
        (*pcVar2)();
      }
      _memcpy(unaff_x23,uVar5,lVar6);
    }
  }
  if (lVar1 != 0) {
    _free(lVar4);
  }
  lStack_80 = unaff_x22;
  lStack_88 = unaff_x23;
  lStack_90 = lVar6;
  if (lVar6 == -0x8000000000000000) {
    *param_1 = -0x8000000000000000;
    return;
  }
LAB_1055f4ca0:
  *param_1 = lStack_90;
  param_1[1] = lStack_88;
  param_1[2] = lStack_80;
  return;
}

