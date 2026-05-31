
void FUN_101614ac4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long **pplStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *param_2;
  plVar1 = (long *)param_2[1];
  lStack_80 = param_2[2];
  if (lVar3 == -0x8000000000000000) {
    if (lStack_80 == 0xe) {
      if (*plVar1 != 0x61737265766e6f63 || *(long *)((long)plVar1 + 6) != 0x6c616e6f69746173) {
code_r0x0001087e44e4:
        puStack_78 = &UNK_10b2200e0;
        uStack_70 = 2;
        pplStack_68 = &plStack_88;
        puStack_60 = &DAT_100c7b3a0;
        ppuStack_58 = &puStack_78;
        puStack_50 = &
                     __ZN60__LT_serde_core__de__OneOf_u20_as_u20_core__fmt__Display_GT_3fmt17hd5744e9bc51436a2E
        ;
        plStack_88 = plVar1;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&lStack_48,s_unknown_variant______expected_108ac2989,&pplStack_68);
        if (lStack_38 == 0) {
          lVar3 = 1;
        }
        else {
          lVar3 = _malloc(lStack_38);
          if (lVar3 == 0) {
            func_0x0001087c9084(1,lStack_38);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e4560);
            (*pcVar2)();
          }
        }
        _memcpy(lVar3,uStack_40,lStack_38);
        param_1[3] = lStack_38;
        param_1[4] = lVar3;
        param_1[5] = lStack_38;
        param_1[6] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[7] = 8;
        *param_1 = 0;
        if (lStack_48 != 0) {
          _free(uStack_40);
        }
        return;
      }
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      if ((lStack_80 != 0xd) ||
         (*plVar1 != 0x697263736e617274 || *(long *)((long)plVar1 + 5) != 0x6e6f697470697263))
      goto code_r0x0001087e44e4;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *param_1 = 2;
    return;
  }
  if (lStack_80 == 0xe) {
    if (*plVar1 == 0x61737265766e6f63 && *(long *)((long)plVar1 + 6) == 0x6c616e6f69746173) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      if (lVar3 == 0) {
        return;
      }
      goto LAB_101614c20;
    }
LAB_101614b64:
    FUN_1087e44e4(param_1,plVar1,lStack_80,&UNK_10b2200e0,2);
  }
  else {
    if ((lStack_80 != 0xd) ||
       (*plVar1 != 0x697263736e617274 || *(long *)((long)plVar1 + 5) != 0x6e6f697470697263))
    goto LAB_101614b64;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
  }
  if (lVar3 == 0) {
    return;
  }
LAB_101614c20:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar1);
  return;
}

