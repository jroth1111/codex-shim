
long * FUN_1016ee13c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x24;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined4 uStack_18c;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  bVar4 = *(byte *)(param_2 + 0x14);
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      func_0x000108a07af4(&UNK_10b2528f8);
LAB_1016ee37c:
      func_0x000108a07b10(&UNK_10b2528f8);
      *(undefined1 *)(param_2 + 0x14) = 2;
      uVar7 = __Unwind_Resume();
      if (*(long *)(unaff_x24 + 8) != 0) {
        _free(param_3);
      }
      FUN_100e75ad0(param_2 + 9);
      *(undefined1 *)(param_2 + 0x14) = 2;
      __Unwind_Resume(uVar7);
      func_0x000108a07bc4();
      auVar15 = func_0x000108a07bc4();
      puVar8 = auVar15._8_8_;
      plVar5 = auVar15._0_8_;
      if (plVar5[3] != -0x8000000000000000) {
        lVar12 = plVar5[5];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar7 = puVar8[2];
        if (lVar12 == plVar5[3]) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E();
        }
        puVar8 = (undefined8 *)(plVar5[4] + lVar12 * 0x20);
        puVar8[1] = uVar13;
        *puVar8 = CONCAT44(uStack_18c,1);
        puVar8[3] = uVar7;
        puVar8[2] = uVar14;
        plVar5[5] = lVar12 + 1;
        lVar12 = plVar5[2];
        if (*plVar5 == lVar12) {
          FUN_108855060(plVar5,lVar12,1,1,1);
          lVar12 = plVar5[2];
        }
        *(undefined1 *)(plVar5[1] + lVar12) = 0x3f;
        plVar5[2] = lVar12 + 1;
        return plVar5;
      }
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd9631,0x71,&UNK_10b252958);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1016ee4d4);
      (*pcVar11)();
    }
    param_2[10] = param_2[1];
    param_2[9] = *param_2;
    param_2[0xc] = param_2[3];
    param_2[0xb] = param_2[2];
    param_2[0xe] = param_2[5];
    param_2[0xd] = param_2[4];
    param_2[0x10] = param_2[7];
    param_2[0xf] = param_2[6];
    param_2[0x11] = param_2[8];
    if (*(int *)(param_2 + 9) == 4) {
      puStack_f8 = (undefined8 *)param_2[10];
    }
    else {
      if (*(int *)(param_2 + 9) == 3) {
        func_0x000108a079f0(&UNK_108ca1579,0x24,&UNK_10b209070);
        goto LAB_1016ee36c;
      }
      puStack_f8 = param_2 + 9;
    }
    puStack_f8 = puStack_f8 + 1;
    uStack_58 = 0;
    plVar5 = (long *)_malloc(0xa8);
    if (plVar5 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa8);
      goto LAB_1016ee36c;
    }
    plVar5[0x11] = lStack_70;
    plVar5[0x10] = lStack_78;
    plVar5[0x13] = lStack_60;
    plVar5[0x12] = lStack_68;
    plVar5[0x14] = CONCAT71(uStack_57,uStack_58);
    plVar5[9] = lStack_b0;
    plVar5[8] = lStack_b8;
    plVar5[0xb] = lStack_a0;
    plVar5[10] = lStack_a8;
    plVar5[0xd] = lStack_90;
    plVar5[0xc] = lStack_98;
    plVar5[0xf] = lStack_80;
    plVar5[0xe] = lStack_88;
    plVar5[1] = lStack_f0;
    *plVar5 = (long)puStack_f8;
    plVar5[3] = lStack_e0;
    plVar5[2] = lStack_e8;
    plVar5[5] = lStack_d0;
    plVar5[4] = lStack_d8;
    plVar5[7] = lStack_c0;
    plVar5[6] = lStack_c8;
    puVar10 = &UNK_10b46c390;
    param_2[0x12] = plVar5;
    param_2[0x13] = &UNK_10b46c390;
  }
  else {
    if (bVar4 != 3) goto LAB_1016ee37c;
    plVar5 = (long *)param_2[0x12];
    puVar10 = (undefined *)param_2[0x13];
  }
  plVar5 = (long *)(**(code **)(puVar10 + 0x18))(&puStack_f8,plVar5,param_3);
  puVar8 = puStack_f8;
  if (puStack_f8 == (undefined8 *)0x8000000000000015) {
    *param_1 = 0x8000000000000015;
    uVar9 = 3;
  }
  else {
    uVar7 = param_2[0x12];
    puVar2 = (undefined8 *)param_2[0x13];
    pcVar11 = (code *)*puVar2;
    if (pcVar11 != (code *)0x0) {
      plVar5 = (long *)(*pcVar11)(uVar7);
    }
    if (puVar2[1] != 0) {
      plVar5 = (long *)_free(uVar7);
    }
    if (puVar8 == (undefined8 *)0x8000000000000014) {
      iVar3 = *(int *)(param_2 + 9);
      *(undefined1 *)(param_2 + 0x11) = 0;
    }
    else {
      piVar1 = (int *)(param_2 + 9);
      if (*(char *)(param_2 + 0x11) == '\x01') {
        if (*piVar1 == 4) {
          piVar6 = (int *)param_2[10];
        }
        else {
          piVar6 = piVar1;
          if (*piVar1 == 3) {
            func_0x000108a079f0(&UNK_108ca1579,0x24,&UNK_10b209070);
LAB_1016ee36c:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1016ee370);
            (*pcVar11)();
          }
        }
        plVar5 = (long *)__ZN113__LT_sqlx_sqlite__transaction__SqliteTransactionManager_u20_as_u20_sqlx_core__transaction__TransactionManager_GT_14start_rollback17h281f626b15aff32dE
                                   (piVar6);
      }
      iVar3 = *piVar1;
      lStack_118 = lStack_e8;
      lStack_120 = lStack_f0;
      lStack_108 = lStack_d8;
      lStack_110 = lStack_e0;
    }
    if (iVar3 != 4) {
      plVar5 = (long *)func_0x000100c9f240(param_2 + 9);
    }
    *param_1 = puVar8;
    param_1[2] = lStack_118;
    param_1[1] = lStack_120;
    param_1[4] = lStack_108;
    param_1[3] = lStack_110;
    uVar9 = 1;
  }
  *(undefined1 *)(param_2 + 0x14) = uVar9;
  return plVar5;
}

