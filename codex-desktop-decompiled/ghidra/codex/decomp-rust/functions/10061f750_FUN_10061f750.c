
void FUN_10061f750(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  char cStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  uint uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  uint uStack_6c;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uVar1 = *param_2;
  if (uVar1 == 2) {
    uVar8 = 0x8000000000000000;
    lVar6 = 8;
  }
  else {
    puVar4 = (undefined8 *)_malloc(0x18);
    if (puVar4 == (undefined8 *)0x0) {
      uVar8 = FUN_107c03c64(1,0x18);
      if (lStack_68 != 0) {
        _free(uStack_60);
      }
      _free();
      auVar9 = __Unwind_Resume(uVar8);
      lVar6 = auVar9._8_8_;
      plVar5 = auVar9._0_8_;
      pcVar7 = *(char **)(lVar6 + 0x28);
      if (pcVar7 != *(char **)(lVar6 + 0x38)) {
        cStack_f8 = *pcVar7;
        *(char **)(lVar6 + 0x28) = pcVar7 + 0x40;
        if (cStack_f8 != '\x16') {
          *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + 1;
          uStack_ef = (undefined7)*(undefined8 *)(pcVar7 + 9);
          uStack_f7 = (undefined7)*(undefined8 *)(pcVar7 + 1);
          uStack_f0 = (undefined1)((ulong)*(undefined8 *)(pcVar7 + 1) >> 0x38);
          lStack_e0 = *(long *)(pcVar7 + 0x18);
          uStack_128 = *(undefined8 *)(pcVar7 + 0x28);
          uStack_130 = *(undefined8 *)(pcVar7 + 0x20);
          uStack_e8 = (undefined1)*(undefined8 *)(pcVar7 + 0x10);
          uStack_e7 = (undefined7)((ulong)*(undefined8 *)(pcVar7 + 0x10) >> 8);
          uStack_118 = *(undefined8 *)(pcVar7 + 0x38);
          uStack_120 = *(undefined8 *)(pcVar7 + 0x30);
          uStack_b0 = (ulong)uVar1;
          puStack_a8 = param_2;
          uStack_a0 = uVar8;
          FUN_1004b62d4(&lStack_110,&cStack_f8);
          if (lStack_110 == -0x8000000000000000) {
            *plVar5 = -0x7fffffffffffffff;
            plVar5[1] = lStack_108;
            FUN_100e077ec(&uStack_130);
            return;
          }
          FUN_1004aa788(&cStack_f8,&uStack_130);
          if (CONCAT71(uStack_f7,cStack_f8) == -0x7ffffffffffffffb) {
            *plVar5 = -0x7fffffffffffffff;
            plVar5[1] = CONCAT71(uStack_ef,uStack_f0);
            if (lStack_110 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lStack_108);
            return;
          }
          plVar5[6] = lStack_e0;
          plVar5[5] = CONCAT71(uStack_e7,uStack_e8);
          plVar5[8] = lStack_d0;
          plVar5[7] = lStack_d8;
          plVar5[10] = lStack_c0;
          plVar5[9] = lStack_c8;
          plVar5[0xb] = lStack_b8;
          plVar5[4] = CONCAT71(uStack_ef,uStack_f0);
          plVar5[3] = CONCAT71(uStack_f7,cStack_f8);
          *plVar5 = lStack_110;
          plVar5[1] = lStack_108;
          plVar5[2] = lStack_100;
          return;
        }
      }
      *plVar5 = -0x8000000000000000;
      return;
    }
    puVar4[1] = 0x5f65746176697270;
    *puVar4 = 0x5f6c6d6f745f5f24;
    puVar4[2] = 0x656d697465746164;
    *param_2 = 2;
    uStack_74 = *(undefined8 *)(param_2 + 3);
    uStack_7c = *(undefined8 *)(param_2 + 1);
    uStack_6c = param_2[5];
    lStack_68 = 0;
    uStack_60 = 1;
    uStack_40 = 0x60000020;
    plStack_50 = &lStack_68;
    uStack_58 = 0;
    puStack_48 = &UNK_10b209290;
    uStack_80 = uVar1;
    iVar3 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&uStack_80,&plStack_50);
    if (iVar3 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,&uStack_31,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061f864);
      (*pcVar2)();
    }
    param_1[5] = uStack_60;
    param_1[4] = lStack_68;
    param_1[6] = uStack_58;
    lVar6 = 0x18;
    param_1[1] = 0x18;
    param_1[2] = puVar4;
    uVar8 = 0x18;
  }
  *(undefined8 *)((long)param_1 + lVar6) = uVar8;
  *param_1 = 2;
  return;
}

