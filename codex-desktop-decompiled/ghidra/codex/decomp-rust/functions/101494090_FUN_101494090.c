
void FUN_101494090(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lStack_e0;
  long lStack_d8;
  int iStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  lVar7 = *param_2;
  *param_2 = -0x8000000000000000;
  if (lVar7 != -0x8000000000000000) {
    lStack_d8 = param_2[2];
    lStack_e0 = param_2[1];
  }
  lVar6 = param_2[3];
  *(undefined4 *)(param_2 + 3) = 2;
  if ((int)lVar6 == 2) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd67a9,0x57,&UNK_10b24e5c8);
  }
  else {
    uStack_94 = *(undefined8 *)((long)param_2 + 0x24);
    uStack_9c = *(undefined8 *)((long)param_2 + 0x1c);
    uStack_8c = *(undefined4 *)((long)param_2 + 0x2c);
    uStack_88 = 0;
    uStack_80 = 1;
    uStack_78 = 0;
    uStack_60 = 0x60000020;
    puStack_70 = &uStack_88;
    puStack_68 = &UNK_10b209290;
    iStack_a0 = (int)lVar6;
    iVar5 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&iStack_a0,&puStack_70);
    uVar3 = uStack_78;
    uVar2 = uStack_80;
    uVar1 = uStack_88;
    if (iVar5 == 0) {
      if (lVar7 == -0x8000000000000000) {
        *(undefined1 *)(param_1 + 1) = 0xc;
        param_1[2] = uStack_88;
        param_1[3] = uStack_80;
        param_1[4] = uStack_78;
        *param_1 = 2;
      }
      else {
        if (lStack_d8 == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = _malloc(lStack_d8);
          if (lVar6 == 0) {
            func_0x0001087c9084(1,lStack_d8);
            goto LAB_101494258;
          }
        }
        _memcpy(lVar6,lStack_e0,lStack_d8);
        *(undefined1 *)(param_1 + 1) = 0xc;
        param_1[2] = uVar1;
        param_1[3] = uVar2;
        param_1[4] = uVar3;
        *param_1 = 2;
        if (lStack_d8 != 0) {
          _free(lVar6);
        }
        if (lVar7 != 0) {
          _free(lStack_e0);
        }
      }
      return;
    }
    func_0x000108a07a3c(&UNK_108cc3daa,0x37,&uStack_51,&UNK_10b235000,&UNK_10b2346c0);
  }
LAB_101494258:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10149425c);
  (*pcVar4)();
}

