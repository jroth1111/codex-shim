
void FUN_101509138(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  iVar2 = *param_2;
  *param_2 = 2;
  if (iVar2 == 2) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd67a9,0x57,&UNK_10b24e5c8);
  }
  else {
    uStack_64 = *(undefined8 *)(param_2 + 3);
    uStack_6c = *(undefined8 *)(param_2 + 1);
    iStack_5c = param_2[5];
    uStack_58 = 0;
    uStack_50 = 1;
    uStack_30 = 0x60000020;
    puStack_40 = &uStack_58;
    uStack_48 = 0;
    puStack_38 = &UNK_10b209290;
    iStack_70 = iVar2;
    iVar2 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&iStack_70,&puStack_40);
    if (iVar2 == 0) {
      param_1[4] = uStack_48;
      param_1[1] = 0x8000000000000003;
      *param_1 = 2;
      param_1[3] = uStack_50;
      param_1[2] = uStack_58;
      return;
    }
  }
  func_0x000108a07a3c(&UNK_108cc3daa,0x37,&uStack_21,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101509214);
  (*pcVar1)();
}

