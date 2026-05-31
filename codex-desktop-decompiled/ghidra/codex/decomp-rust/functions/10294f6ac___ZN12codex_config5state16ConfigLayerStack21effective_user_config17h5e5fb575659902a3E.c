
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN12codex_config5state16ConfigLayerStack21effective_user_config17h5e5fb575659902a3E
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E(&lStack_c8,param_2,0,0)
  ;
  plVar2 = plStack_c0;
  lVar1 = lStack_c8;
  if (lStack_b8 != 0) {
    lVar4 = 0;
    plVar6 = plStack_c0;
    do {
      plVar5 = plVar6;
      if (**(long **)((long)plStack_c0 + lVar4) == 2) {
        plVar5 = plVar6 + 1;
        *plVar6 = (long)*(long **)((long)plStack_c0 + lVar4);
      }
      lVar4 = lVar4 + 8;
      plVar6 = plVar5;
    } while (lStack_b8 * 8 - lVar4 != 0);
    if (plVar5 != plStack_c0) {
      pauVar3 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar3[1][0] == '\x01') {
        auStack_90 = *pauVar3;
      }
      else {
        auStack_90 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar3 + 8) = auStack_90._8_8_;
        pauVar3[1][0] = 1;
      }
      lStack_a8 = 0;
      puStack_b0 = &UNK_108c56c70;
      lStack_98 = 0;
      lStack_a0 = 0;
      *(long *)*pauVar3 = auStack_90._0_8_ + 1;
      lStack_c8 = 0;
      plStack_c0 = (long *)0x8;
      lStack_b8 = 0;
      uStack_80 = 0;
      uStack_7e = 0;
      plVar6 = plVar2;
      do {
        plVar7 = plVar6 + 1;
        lStack_78 = 0;
        lStack_70 = 8;
        lStack_68 = 0;
        FUN_10294dad8(&lStack_c8,*plVar6 + 0x98,&lStack_78);
        lVar4 = lStack_70;
        if (lStack_68 != 0) {
          puVar9 = (undefined8 *)(lStack_70 + 8);
          lVar8 = lStack_68;
          do {
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            puVar9 = puVar9 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lStack_78 != 0) {
          _free(lVar4);
        }
        plVar6 = plVar7;
      } while (plVar7 != plVar5);
      if (lVar1 != 0) {
        _free(plVar2);
      }
      param_1[5] = lStack_a0;
      param_1[4] = lStack_a8;
      param_1[7] = auStack_90._0_8_;
      param_1[6] = lStack_98;
      param_1[9] = CONCAT53(uStack_7d,CONCAT12(uStack_7e,uStack_80));
      param_1[8] = auStack_90._8_8_;
      param_1[1] = (long)plStack_c0;
      *param_1 = lStack_c8;
      param_1[3] = (long)puStack_b0;
      param_1[2] = lStack_b8;
      return;
    }
  }
  *param_1 = -0x7ffffffffffffffa;
  if (lStack_c8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plStack_c0);
  return;
}

