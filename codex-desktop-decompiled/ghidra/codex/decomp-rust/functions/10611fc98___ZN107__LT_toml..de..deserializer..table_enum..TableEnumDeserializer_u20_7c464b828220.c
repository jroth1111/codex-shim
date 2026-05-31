
void __ZN107__LT_toml__de__deserializer__table_enum__TableEnumDeserializer_u20_as_u20_serde_core__de__VariantAccess_GT_12unit_variant17h77c4a3066d09ddecE
               (undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  
  uVar8 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar8 = 6;
  }
  if (uVar8 == 5) {
    uVar8 = param_2[1];
    puVar7 = (ulong *)param_2[2];
    uVar9 = param_2[3];
    if (uVar9 == 0) {
      *param_1 = 2;
    }
    else {
      uVar1 = param_2[10];
      uVar2 = param_2[0xb];
      puVar4 = (undefined8 *)_malloc(0x14);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x14);
        goto LAB_10611e39c;
      }
      *(undefined4 *)(puVar4 + 2) = 0x79617272;
      puVar4[1] = 0x61207974706d6520;
      *puVar4 = 0x6465746365707865;
      *param_1 = 1;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = 0x14;
      param_1[4] = puVar4;
      param_1[6] = 0;
      param_1[5] = 0x14;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[7] = 8;
    }
    lVar5 = uVar9 + 1;
    puVar6 = puVar7;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      func_0x0001061200fc(puVar6);
      puVar6 = puVar6 + 0xc;
    }
    if (uVar8 == 0) {
      return;
    }
  }
  else {
    if (uVar8 != 6) {
      uStack_70 = *(undefined8 *)(&UNK_10b4cf8a0 + uVar8 * 8);
      uStack_68 = *(undefined8 *)(&UNK_109becdc8 + uVar8 * 8);
      puStack_60 = &uStack_70;
      puStack_58 = &DAT_10611f8fc;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_88,s_expected_table__found_108b38550,&puStack_60);
      uVar8 = param_2[10];
      uVar9 = param_2[0xb];
      if (lStack_78 == 0) {
        lVar5 = 1;
        _memcpy(1,uStack_80,0);
      }
      else {
        lVar5 = _malloc(lStack_78);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,lStack_78);
          goto LAB_10611e39c;
        }
        _memcpy(lVar5,uStack_80,lStack_78);
      }
      if (lStack_88 != 0) {
        _free(uStack_80);
      }
      *param_1 = 1;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = lStack_78;
      param_1[4] = lVar5;
      param_1[5] = lStack_78;
      param_1[6] = 0;
      param_1[7] = 8;
      param_1[8] = 0;
      param_1[9] = 0;
      func_0x0001061200fc(param_2);
      return;
    }
    if (param_2[6] == 0) {
      *param_1 = 2;
      uVar8 = param_2[4];
    }
    else {
      uVar8 = param_2[10];
      uVar9 = param_2[0xb];
      puVar4 = (undefined8 *)_malloc(0x14);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x14);
LAB_10611e39c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10611e3a0);
        (*pcVar3)();
      }
      *(undefined4 *)(puVar4 + 2) = 0x656c6261;
      puVar4[1] = 0x74207974706d6520;
      *puVar4 = 0x6465746365707865;
      *param_1 = 1;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = 0x14;
      param_1[4] = puVar4;
      param_1[6] = 0;
      param_1[5] = 0x14;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[7] = 8;
      uVar8 = param_2[4];
    }
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_2[3] + uVar8 * -8 + -8);
    }
    puVar7 = (ulong *)param_2[1];
    lVar5 = param_2[2] + 1;
    puVar6 = puVar7;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      if ((*puVar6 & 0x7fffffffffffffff) != 0) {
        _free(puVar6[1]);
      }
      func_0x0001061200fc(puVar6 + 5);
      puVar6 = puVar6 + 0x12;
    }
    if (*param_2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar7);
  return;
}

