
void FUN_102d989f4(undefined8 param_1,long *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  
  if (lRam000000010b62a0e8 != 0) {
    pppuStack_a0 = (undefined8 ***)0x10b62a0e8;
    pppuStack_80 = &pppuStack_a0;
    __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
              (0x10b62a0e8,1,&pppuStack_80,&UNK_10b2c09e0,&UNK_10b2c0900);
  }
  auStack_d0[0] = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 8;
  lStack_a8 = 0;
  plVar5 = (long *)*param_2;
  lVar6 = param_2[2];
  if (plVar5 != (long *)0x0 && lVar6 != 0) {
    plVar9 = (long *)0x0;
    uVar11 = param_2[1];
    do {
      plVar10 = plVar5;
      if (plVar9 == (long *)0x0) {
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          plVar10 = (long *)plVar10[0x86];
        }
        plVar5 = (long *)0x0;
        uVar12 = 0;
        if (*(short *)((long)plVar10 + 0x42a) == 0) goto LAB_102d98bc0;
      }
      else {
        plVar10 = plVar9;
        uVar12 = uVar11;
        if (*(ushort *)((long)plVar9 + 0x42a) <= uVar11) {
LAB_102d98bc0:
          do {
            plVar9 = (long *)*plVar10;
            if (plVar9 == (long *)0x0) {
              func_0x000108a07a20(&UNK_10b2c30e8);
              goto LAB_102d98db4;
            }
            plVar5 = (long *)((long)plVar5 + 1);
            puVar1 = (ushort *)(plVar10 + 0x85);
            plVar10 = plVar9;
            uVar12 = (ulong)*puVar1;
          } while (*(ushort *)((long)plVar9 + 0x42a) <= *puVar1);
        }
      }
      uVar11 = uVar12 + 1;
      plVar9 = plVar10;
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar10 + uVar11;
        do {
          plVar9 = (long *)plVar9[0x86];
          plVar5 = (long *)((long)plVar5 + -1);
        } while (plVar5 != (long *)0x0);
        uVar11 = 0;
      }
      uVar4 = func_0x0001034b5820(auStack_d0,plVar10[uVar12 * 3 + 2],plVar10[uVar12 * 3 + 3]);
      if ((uVar4 & 1) == 0) {
        func_0x000102d98438(&pppuStack_80,plVar10[uVar12 * 3 + 2],plVar10[uVar12 * 3 + 3],
                            plVar10 + uVar12 * 9 + 0x22);
        lVar7 = lStack_a8;
        if (lStack_a8 == lStack_b8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_b8);
        }
        plVar5 = (long *)(lStack_b0 + lVar7 * 0x18);
        plVar5[1] = (long)puStack_78;
        *plVar5 = (long)pppuStack_80;
        plVar5[2] = (long)pppuStack_70;
        lStack_a8 = lVar7 + 1;
      }
      plVar5 = (long *)0x0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (plRam000000010b62a0f0 != (long *)0x0 && lRam000000010b62a100 != 0) {
    plVar9 = (long *)0x0;
    plVar5 = plRam000000010b62a0f0;
    lVar6 = lRam000000010b62a100;
    uVar11 = uRam000000010b62a0f8;
    do {
      plVar10 = plVar5;
      if (plVar9 == (long *)0x0) {
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          plVar10 = (long *)plVar10[0x86];
        }
        plVar5 = (long *)0x0;
        uVar12 = 0;
        if (*(short *)((long)plVar10 + 0x42a) == 0) goto LAB_102d98cd4;
      }
      else {
        plVar10 = plVar9;
        uVar12 = uVar11;
        if (*(ushort *)((long)plVar9 + 0x42a) <= uVar11) {
LAB_102d98cd4:
          do {
            plVar9 = (long *)*plVar10;
            if (plVar9 == (long *)0x0) {
              func_0x000108a07a20(&UNK_10b2c30e8);
LAB_102d98db4:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102d98db8);
              (*pcVar2)();
            }
            plVar5 = (long *)((long)plVar5 + 1);
            puVar1 = (ushort *)(plVar10 + 0x85);
            plVar10 = plVar9;
            uVar12 = (ulong)*puVar1;
          } while (*(ushort *)((long)plVar9 + 0x42a) <= *puVar1);
        }
      }
      uVar11 = uVar12 + 1;
      plVar9 = plVar10;
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar10 + uVar11;
        do {
          plVar9 = (long *)plVar9[0x86];
          plVar5 = (long *)((long)plVar5 + -1);
        } while (plVar5 != (long *)0x0);
        uVar11 = 0;
      }
      iVar3 = func_0x0001034b5820(auStack_d0,plVar10[uVar12 * 3 + 2],plVar10[uVar12 * 3 + 3]);
      if (iVar3 == 0) {
        func_0x000102d98438(&pppuStack_80,plVar10[uVar12 * 3 + 2],plVar10[uVar12 * 3 + 3],
                            plVar10 + uVar12 * 9 + 0x22);
        lVar7 = lStack_a8;
        if (lStack_a8 == lStack_b8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_b8);
        }
        plVar5 = (long *)(lStack_b0 + lVar7 * 0x18);
        plVar5[1] = (long)puStack_78;
        *plVar5 = (long)pppuStack_80;
        plVar5[2] = (long)pppuStack_70;
        lStack_a8 = lVar7 + 1;
      }
      plVar5 = (long *)0x0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_1034c1c4c(&pppuStack_80,lStack_b0,lStack_a8,&UNK_108d5275f,1);
  lStack_98 = (long)puStack_78;
  pppuStack_a0 = pppuStack_80;
  lStack_90 = (long)pppuStack_70;
  pppuStack_80 = (undefined8 ***)&UNK_10b2a8220;
  puStack_78 = &DAT_103296230;
  pppuStack_70 = &pppuStack_a0;
  puStack_68 = &DAT_103592578;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (param_1,s_3Optional_type_name_for_the_new_a_108af2067,&pppuStack_80);
  if ((undefined8 ****)pppuStack_a0 != (undefined8 ****)0x0) {
    _free(lStack_98);
  }
  lVar6 = lStack_b0;
  if (lStack_a8 != 0) {
    puVar8 = (undefined8 *)(lStack_b0 + 8);
    lVar7 = lStack_a8;
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lStack_b8 != 0) {
    _free(lVar6);
  }
  func_0x0001033c2c38(auStack_d0);
  return;
}

