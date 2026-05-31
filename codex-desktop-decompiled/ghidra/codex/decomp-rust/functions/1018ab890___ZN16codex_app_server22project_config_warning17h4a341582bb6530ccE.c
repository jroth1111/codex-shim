
void __ZN16codex_app_server22project_config_warning17h4a341582bb6530ccE
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *******pppppppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 ******ppppppuVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 ******ppppppuVar14;
  long *plVar15;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  long *plStack_70;
  
  lStack_f8 = 0;
  lStack_f0 = 8;
  lStack_e8 = 0;
  __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E
            (&ppppppuStack_e0,param_2,0,1);
  puVar5 = puStack_d8;
  ppppppuVar14 = ppppppuStack_e0;
  if (plStack_d0 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    lVar13 = (long)plStack_d0 * 8;
    do {
      plVar12 = *(long **)(puVar5 + lVar10);
      if ((*plVar12 == 3) && (plVar12[0xd] != -0x8000000000000000)) {
        lStack_b0 = plVar12[2];
        puStack_a8 = (undefined8 *)plVar12[3];
        ppppppuStack_80 = (undefined8 *******)0x0;
        puStack_78 = (undefined *)0x1;
        plStack_70 = (long *)0x0;
        plStack_d0 = (long *)0x60000020;
        ppppppuStack_e0 = &ppppppuStack_80;
        puStack_d8 = &UNK_10b25d2c0;
        iVar7 = __ZN64__LT_std__ffi__os_str__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h9b276ae677c3f105E
                          (&lStack_b0,&ppppppuStack_e0);
        plVar15 = plStack_70;
        puVar2 = puStack_78;
        ppppppuVar4 = ppppppuStack_80;
        if (iVar7 != 0) {
          func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&pppppuStack_88,&UNK_10b268ec0,&UNK_10b268df0);
          goto LAB_1018abab0;
        }
        pppppppuVar1 = (undefined8 *******)ppppppuStack_80;
        lVar11 = plVar12[0xe];
        puVar3 = (undefined *)plVar12[0xf];
        if (puVar3 == (undefined *)0x0) {
          lVar8 = 1;
        }
        else {
          lVar8 = _malloc(puVar3);
          if (lVar8 == 0) {
            func_0x0001087c9084(1,puVar3);
            goto LAB_1018abab0;
          }
        }
        _memcpy(lVar8,lVar11,puVar3);
        lVar11 = lStack_e8;
        ppppppuStack_e0 = ppppppuVar4;
        puStack_d8 = puVar2;
        plStack_d0 = plVar15;
        puStack_c8 = puVar3;
        lStack_c0 = lVar8;
        puStack_b8 = puVar3;
        if (lStack_e8 == lStack_f8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h8c8b3a601d98415aE(&lStack_f8);
        }
        plVar12 = (long *)(lStack_f0 + lVar11 * 0x30);
        plVar12[1] = (long)puStack_d8;
        *plVar12 = (long)ppppppuStack_e0;
        plVar12[3] = (long)puStack_c8;
        plVar12[2] = (long)plStack_d0;
        plVar12[5] = (long)puStack_b8;
        plVar12[4] = lStack_c0;
        lVar11 = lVar11 + 1;
        lStack_e8 = lVar11;
      }
      lVar10 = lVar10 + 8;
    } while (lVar13 - lVar10 != 0);
  }
  if ((undefined8 *******)ppppppuVar14 != (undefined8 *******)0x0) {
    _free(puVar5);
    lVar11 = lStack_e8;
  }
  if (lVar11 == 0) {
    *param_1 = 2;
    lVar11 = lStack_f0;
  }
  else {
    puVar9 = (undefined8 *)_malloc(0x8a);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x8a);
LAB_1018abab0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018abab4);
      (*pcVar6)();
    }
    puVar9[0xd] = 0x6574737572742073;
    puVar9[0xc] = 0x69207463656a6f72;
    puVar9[0xf] = 0x747320736c6c696b;
    puVar9[0xe] = 0x7320747562202c64;
    *(undefined8 *)((long)puVar9 + 0x82) = 0xa2e64616f6c206c;
    *(undefined8 *)((long)puVar9 + 0x7a) = 0x6c69747320736c6c;
    puVar9[5] = 0x612073656963696c;
    puVar9[4] = 0x6f70206365786520;
    puVar9[7] = 0x74206e692064656c;
    puVar9[6] = 0x6261736964206572;
    puVar9[9] = 0x6c6f6620676e6977;
    puVar9[8] = 0x6f6c6c6f66206568;
    puVar9[0xb] = 0x7020656874206c69;
    puVar9[10] = 0x746e752073726564;
    lVar13 = 0x8a;
    lVar8 = lStack_f0 + lVar11 * 0x30;
    ppppppuVar14 = (undefined8 ******)0x1;
    puVar9[1] = 0x6f63206c61636f6c;
    *puVar9 = 0x2d7463656a6f7250;
    puVar9[3] = 0x646e61202c736b6f;
    puVar9[2] = 0x6f68202c6769666e;
    lStack_b0 = 0x8a;
    lStack_a0 = 0x8a;
    lVar10 = lStack_f0;
    puStack_a8 = puVar9;
    do {
      pppppuStack_90 = (undefined8 *****)(lVar10 + 0x18);
      ppppppuStack_e0 = &pppppuStack_88;
      plStack_d0 = &lStack_98;
      puStack_d8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      puStack_c8 = &DAT_10192d980;
      lStack_98 = lVar10;
      pppppuStack_88 = ppppppuVar14;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppppppuStack_80,s___108ade1d5,&ppppppuStack_e0);
      plVar12 = plStack_70;
      puVar5 = puStack_78;
      ppppppuVar4 = ppppppuStack_80;
      if ((long *)(lStack_b0 - lVar13) < plStack_70) {
        FUN_1088bb36c(&lStack_b0,lVar13,plStack_70,1,1);
        puVar9 = puStack_a8;
        lVar13 = lStack_a0;
      }
      _memcpy((long)puVar9 + lVar13,puVar5,plVar12);
      lVar13 = lVar13 + (long)plVar12;
      lStack_a0 = lVar13;
      if ((undefined8 *******)ppppppuVar4 != (undefined8 *******)0x0) {
        _free(puVar5);
      }
      ppppppuStack_80 = &pppppuStack_90;
      puStack_78 = &DAT_10192d980;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppppppuStack_e0,s__108ade1e2,&ppppppuStack_80);
      plVar12 = plStack_d0;
      puVar5 = puStack_d8;
      ppppppuVar4 = ppppppuStack_e0;
      if ((long *)(lStack_b0 - lVar13) < plStack_d0) {
        FUN_1088bb36c(&lStack_b0,lVar13,plStack_d0,1,1);
        lVar13 = lStack_a0;
      }
      puVar9 = puStack_a8;
      _memcpy((long)puStack_a8 + lVar13,puVar5,plVar12);
      lVar13 = lVar13 + (long)plVar12;
      lStack_a0 = lVar13;
      if ((undefined8 *******)ppppppuVar4 != (undefined8 *******)0x0) {
        _free(puVar5);
      }
      lVar11 = lStack_f0;
      ppppppuVar14 = (undefined8 ******)((long)ppppppuVar14 + 1);
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != lVar8);
    param_1[6] = puStack_a8;
    param_1[5] = lStack_b0;
    *param_1 = 0;
    param_1[7] = lStack_a0;
    param_1[8] = 0x8000000000000000;
    param_1[0xb] = 0x8000000000000000;
    if (lStack_e8 != 0) {
      puVar9 = (undefined8 *)(lStack_f0 + 0x20);
      lVar10 = lStack_e8;
      do {
        if (puVar9[-4] != 0) {
          _free(puVar9[-3]);
        }
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 6;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  if (lStack_f8 != 0) {
    _free(lVar11);
  }
  return;
}

