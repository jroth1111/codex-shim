
void FUN_1016f9f34(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 uVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 uStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_690;
  long lStack_688;
  undefined *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long *plStack_660;
  undefined1 uStack_658;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  bVar1 = *(byte *)(param_2 + 9);
  lVar10 = param_3;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uStack_98 = param_2[1];
      uStack_a0 = *param_2;
      uStack_88 = param_2[3];
      uStack_90 = param_2[2];
      uStack_78 = param_2[5];
      uStack_80 = param_2[4];
      uStack_40 = FUN_1016f90e0(*(undefined8 *)param_2[6],&uStack_a0);
      puStack_38 = &UNK_10b252d88;
      uStack_70 = 0;
      puVar3 = (undefined8 *)_malloc(0x40);
      puVar14 = puStack_50;
      if (puVar3 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
      }
      else {
        puVar3[1] = uStack_68;
        *puVar3 = uStack_70;
        puVar3[3] = puStack_58;
        puVar3[2] = uStack_60;
        puStack_50 = &UNK_10b252f28;
        uStack_70 = 0;
        uStack_68 = 8;
        puVar3[5] = uStack_48;
        puVar3[4] = puVar14;
        puVar3[7] = puStack_38;
        puVar3[6] = uStack_40;
        uStack_60 = 0;
        puStack_58 = puVar3;
        puVar3 = (undefined8 *)_malloc(0x28);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = uStack_68;
          *puVar3 = uStack_70;
          puVar3[3] = puStack_58;
          puVar3[2] = uStack_60;
          puVar3[4] = puStack_50;
          puVar14 = &UNK_10b252f88;
          param_2[7] = puVar3;
          param_2[8] = &UNK_10b252f88;
          goto LAB_1016fa000;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1016fa08c);
      (*pcVar8)();
    }
    func_0x000108a07af4(&UNK_10b252e60);
  }
  else if (bVar1 == 3) {
    puVar3 = (undefined8 *)param_2[7];
    puVar14 = (undefined *)param_2[8];
LAB_1016fa000:
    (**(code **)(puVar14 + 0x18))(param_1,puVar3,param_3);
    if (*param_1 == -0x7fffffffffffffeb) {
      uVar7 = 3;
    }
    else {
      uVar4 = param_2[7];
      puVar3 = (undefined8 *)param_2[8];
      pcVar8 = (code *)*puVar3;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar4);
      }
      if (puVar3[1] != 0) {
        _free(uVar4);
      }
      uVar7 = 1;
    }
    *(undefined1 *)(param_2 + 9) = uVar7;
    return;
  }
  uVar4 = func_0x000108a07b10(&UNK_10b252e60);
  if (param_1[1] != 0) {
    _free(param_3);
    *(undefined1 *)(param_2 + 9) = 2;
    __Unwind_Resume(uVar4);
    *(undefined1 *)(param_2 + 9) = 2;
    uVar4 = __Unwind_Resume();
    FUN_100c9623c(param_2[7],param_2[8]);
  }
  *(undefined1 *)(param_2 + 9) = 2;
  __Unwind_Resume(uVar4);
  auVar16 = func_0x000108a07bc4();
  puVar3 = auVar16._8_8_;
  bVar1 = *(byte *)(puVar3 + 9);
  lVar2 = lVar10;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar11 = puVar3[1];
      uVar4 = *puVar3;
      uVar15 = puVar3[3];
      puVar14 = (undefined *)puVar3[2];
      uVar13 = puVar3[5];
      uVar12 = puVar3[4];
      plVar9 = *(long **)puVar3[6];
      lVar2 = *plVar9;
      *plVar9 = lVar2 + 1;
      if (-1 < lVar2) {
        uStack_658 = 0;
        uStack_690 = uVar4;
        lStack_688 = lVar11;
        puStack_680 = puVar14;
        uStack_678 = uVar15;
        uStack_670 = uVar12;
        uStack_668 = uVar13;
        plStack_660 = plVar9;
        lVar2 = _malloc(0x5b0);
        if (lVar2 == 0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x5b0);
        }
        else {
          _memcpy(lVar2,&uStack_690,0x5b0);
          uStack_690 = 0x8000000000000016;
          puStack_680 = &UNK_10b252dc8;
          lStack_688 = lVar2;
          puVar5 = (undefined8 *)_malloc(0x28);
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = lStack_688;
            *puVar5 = uStack_690;
            puVar5[3] = uStack_678;
            puVar5[2] = puStack_680;
            puVar5[4] = uStack_670;
            puVar14 = &UNK_10b252fa8;
            puVar3[7] = puVar5;
            puVar3[8] = &UNK_10b252fa8;
            goto LAB_1016fa204;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
        }
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1016fa28c);
      (*pcVar8)();
    }
    func_0x000108a07af4(&UNK_10b252e78);
  }
  else if (bVar1 == 3) {
    puVar5 = (undefined8 *)puVar3[7];
    puVar14 = (undefined *)puVar3[8];
LAB_1016fa204:
    (**(code **)(puVar14 + 0x18))(auVar16._0_8_,puVar5,lVar10);
    if (*auVar16._0_8_ == -0x7fffffffffffffeb) {
      uVar7 = 3;
    }
    else {
      uVar4 = puVar3[7];
      puVar5 = (undefined8 *)puVar3[8];
      pcVar8 = (code *)*puVar5;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar4);
      }
      if (puVar5[1] != 0) {
        _free(uVar4);
      }
      uVar7 = 1;
    }
    *(undefined1 *)(puVar3 + 9) = uVar7;
    return;
  }
  uVar4 = func_0x000108a07b10(&UNK_10b252e78);
  if (*(long *)(unaff_x22 + 8) != 0) {
    _free(lVar10);
    *(undefined1 *)(puVar3 + 9) = 2;
    uVar4 = __Unwind_Resume(uVar4);
    FUN_100c9623c(puVar3[7],puVar3[8]);
  }
  *(undefined1 *)(puVar3 + 9) = 2;
  __Unwind_Resume(uVar4);
  auVar16 = func_0x000108a07bc4();
  plVar6 = auVar16._8_8_;
  plVar9 = auVar16._0_8_;
  lVar10 = *plVar6;
  if (-0x7fffffffffffffff < lVar10) {
    lVar11 = plVar6[2];
    if (lVar2 == 0) {
      uStack_710 = 0;
      if (lVar11 == lVar10) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(plVar6);
      }
    }
    else {
      uStack_708 = 0x8000000000000000;
      uStack_710 = 1;
      lStack_700 = lVar2;
      uStack_6f8 = param_4;
      if (lVar11 == lVar10) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(plVar6);
      }
    }
    puVar3 = (undefined8 *)(plVar6[1] + lVar11 * 0x20);
    puVar3[1] = uStack_708;
    *puVar3 = CONCAT44(uStack_70c,uStack_710);
    puVar3[3] = uStack_6f8;
    puVar3[2] = lStack_700;
    plVar6[2] = lVar11 + 1;
  }
  lVar10 = *plVar6;
  lVar11 = plVar6[3];
  lVar2 = plVar6[2];
  plVar9[1] = plVar6[1];
  *plVar9 = lVar10;
  plVar9[3] = lVar11;
  plVar9[2] = lVar2;
  lVar10 = plVar6[4];
  plVar9[5] = plVar6[5];
  plVar9[4] = lVar10;
  return;
}

