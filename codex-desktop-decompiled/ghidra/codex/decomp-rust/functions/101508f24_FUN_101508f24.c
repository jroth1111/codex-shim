
void FUN_101508f24(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  int iStack_74;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  
  iVar2 = *param_2;
  *param_2 = 2;
  if (iVar2 == 2) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd67a9,0x57,&UNK_10b24e5c8);
  }
  else {
    uStack_7c = *(undefined8 *)(param_2 + 3);
    uStack_84 = *(undefined8 *)(param_2 + 1);
    iStack_74 = param_2[5];
    uStack_58 = 0;
    uStack_50 = 1;
    uStack_48 = 0;
    uStack_30 = 0x60000020;
    uStack_29 = 0;
    uStack_40 = SUB87(&uStack_58,0);
    uStack_39 = (undefined1)((ulong)&uStack_58 >> 0x38);
    uStack_38 = 0x10b209290;
    uStack_31 = 0;
    iStack_88 = iVar2;
    iVar2 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&iStack_88,&uStack_40);
    if (iVar2 == 0) {
      uStack_31 = (undefined1)uStack_50;
      uStack_39 = (undefined1)uStack_58;
      uStack_38 = (undefined7)((ulong)uStack_58 >> 8);
      *(undefined1 *)(param_1 + 1) = 0xc;
      *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_31,uStack_38);
      *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_39,uStack_40);
      param_1[4] = uStack_48;
      param_1[3] = uStack_50;
      *param_1 = 2;
      return;
    }
  }
  func_0x000108a07a3c(&UNK_108cc3daa,0x37,auStack_70,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101509020);
  (*pcVar1)();
}

