
undefined1  [16] FUN_10603acbc(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  long lStack_70;
  long lStack_68;
  ulong uStack_40;
  ulong uStack_38;
  long *plStack_28;
  
  uStack_38 = ((ulong *)*param_1)[1];
  if ((uStack_38 & 1) == 0) {
    uStack_40 = 0x8000000000000000;
    plStack_28 = param_1;
    __ZN3std9panicking15panic_with_hook17hb885411bb59bebf4E
              (&uStack_40,&UNK_10b4ae460,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
               *(undefined1 *)(param_1[2] + 0x11));
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10603ad04);
    (*pcVar1)();
  }
  uStack_40 = *(ulong *)*param_1;
  uStack_38 = uStack_38 >> 1;
  uVar2 = __ZN3std9panicking15panic_with_hook17hb885411bb59bebf4E
                    (&uStack_40,&UNK_10b4ae498,param_1[1],*(undefined1 *)(param_1[2] + 0x10),
                     *(undefined1 *)(param_1[2] + 0x11));
  if ((uStack_40 & 0x7fffffffffffffff) == 0) {
    uVar2 = __Unwind_Resume();
  }
  _free(uStack_38);
  auVar7 = __Unwind_Resume(uVar2);
  puVar3 = auVar7._0_8_;
  pcVar1 = *(code **)(auVar7._8_8_ + 0x18);
  (*pcVar1)(&lStack_70);
  if (lStack_68 == -0x4674e48ea859be88 && lStack_70 == 0x63eb502cd6cb5d6d) {
    lVar5 = 8;
    puVar6 = puVar3;
  }
  else {
    (*pcVar1)(&lStack_70,puVar3);
    if (lStack_68 != -0x3a9d1c0c47df6f72 || lStack_70 != -0x3e9032c8f95954af) {
      puVar4 = &UNK_109bd6831;
      uVar2 = 0xc;
      goto LAB_10603ae0c;
    }
    puVar6 = puVar3 + 1;
    lVar5 = 0x10;
  }
  puVar4 = (undefined *)*puVar6;
  uVar2 = *(undefined8 *)((long)puVar3 + lVar5);
LAB_10603ae0c:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = puVar4;
  return auVar7;
}

