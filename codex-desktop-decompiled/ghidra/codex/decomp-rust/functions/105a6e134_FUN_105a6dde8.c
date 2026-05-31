
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105a6dde8(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  ulong uVar8;
  long extraout_x9;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *unaff_x20;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  short sVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  unkbyte10 Var28;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined6 uStack_96;
  
  uVar8 = param_1[5];
  uVar15 = param_1[10];
  if (*param_1 != 1) {
    if (uVar8 != uVar15 - (uVar15 >> 2)) {
      return false;
    }
    if (uVar8 == 0) {
      *(undefined2 *)(param_1 + 0xb) = 7;
      puVar7 = (undefined8 *)_malloc(0x20);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0001087c9084(2,0x20);
      }
      else {
        puVar7[1] = 0xffff0000ffff;
        *puVar7 = 0xffff0000ffff;
        puVar7[3] = 0xffff0000ffff;
        puVar7[2] = 0xffff0000ffff;
        if (uVar15 != 0) {
          _free(param_1[9]);
        }
        param_1[9] = (long)puVar7;
        param_1[10] = 8;
        lVar13 = _malloc(0x270);
        unaff_x20 = puVar7;
        if (lVar13 != 0) {
          func_0x000105a6d104(param_1 + 3);
          param_1[3] = 6;
          param_1[4] = lVar13;
          param_1[5] = 0;
          return false;
        }
      }
      func_0x0001087c9084(8,0x270);
      param_1[3] = 6;
      param_1[4] = (long)unaff_x20;
      param_1[5] = 0;
      Var28 = __Unwind_Resume();
      lVar13 = (long)Var28;
      uVar8 = *(ulong *)(lVar13 + 0x28);
      if (uVar8 >> 0xf == 0) {
        lVar21 = param_3[1];
        lVar19 = *param_3;
        lVar25 = param_3[3];
        lVar23 = param_3[2];
        lVar22 = param_4[1];
        lVar20 = *param_4;
        lVar26 = param_4[3];
        lVar24 = param_4[2];
        lVar16 = param_4[4];
        if (uVar8 == *(ulong *)(lVar13 + 0x18)) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27544599c7fa16b6E();
        }
        puVar7 = (undefined8 *)(*(long *)(lVar13 + 0x20) + uVar8 * 0x68);
        puVar7[3] = lVar20;
        puVar7[2] = uStack_e8;
        puVar7[5] = lVar24;
        puVar7[4] = lVar22;
        puVar7[1] = uStack_f0;
        *puVar7 = 0;
        puVar7[0xc] = CONCAT62(uStack_96,(short)((unkuint10)Var28 >> 0x40));
        puVar7[9] = lVar21;
        puVar7[8] = lVar19;
        puVar7[0xb] = lVar25;
        puVar7[10] = lVar23;
        puVar7[7] = lVar16;
        puVar7[6] = lVar26;
        *(ulong *)(lVar13 + 0x28) = uVar8 + 1;
      }
      else {
        (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
        if (*param_3 != 0) {
          (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
        }
      }
      return (uVar8 & 0xffffffffffff8000) != 0;
    }
    uVar8 = func_0x000105a6e25c(param_1,uVar15 << 1);
joined_r0x000105a6dec0:
    if ((uVar8 & 1) == 0) {
      return false;
    }
    return true;
  }
  if (0.2 <= (float)uVar8 / (float)uVar15) {
    *param_1 = 0;
    uVar8 = func_0x000105a6e25c(param_1,uVar15 << 1);
    goto joined_r0x000105a6dec0;
  }
  pauVar6 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar6[1][0] == '\x01') {
    auVar27 = *pauVar6;
  }
  else {
    auVar27 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auVar27._8_8_;
    pauVar6[1][0] = 1;
  }
  *(long *)*pauVar6 = auVar27._0_8_ + 1;
  *param_1 = 2;
  *(undefined1 (*) [16])(param_1 + 1) = auVar27;
  puVar14 = (undefined4 *)param_1[9];
  if (uVar15 == 0) goto LAB_105a6dfc0;
  uVar8 = uVar15 * 4 - 4;
  puVar10 = puVar14;
  if (0xb < uVar8) {
    uVar9 = (uVar8 >> 2) + 1;
    if (uVar8 < 0x7c) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar9 & 0x7fffffffffffffe0;
      puVar7 = (undefined8 *)(puVar14 + 0x10);
      uVar8 = uVar12;
      do {
        puVar7[-7] = 0xffff0000ffff;
        puVar7[-8] = 0xffff0000ffff;
        puVar7[-5] = 0xffff0000ffff;
        puVar7[-6] = 0xffff0000ffff;
        puVar7[-3] = 0xffff0000ffff;
        puVar7[-4] = 0xffff0000ffff;
        puVar7[-1] = 0xffff0000ffff;
        puVar7[-2] = 0xffff0000ffff;
        puVar7[1] = 0xffff0000ffff;
        *puVar7 = 0xffff0000ffff;
        puVar7[3] = 0xffff0000ffff;
        puVar7[2] = 0xffff0000ffff;
        puVar7[5] = 0xffff0000ffff;
        puVar7[4] = 0xffff0000ffff;
        puVar7[7] = 0xffff0000ffff;
        puVar7[6] = 0xffff0000ffff;
        puVar7 = puVar7 + 0x10;
        uVar8 = uVar8 - 0x20;
      } while (uVar8 != 0);
      if (uVar9 == uVar12) goto LAB_105a6dfc0;
      if ((uVar9 & 0x1c) == 0) {
        puVar10 = puVar14 + uVar12;
        goto LAB_105a6dfac;
      }
    }
    uVar8 = uVar9 & 0x7ffffffffffffffc;
    puVar10 = puVar14 + uVar8;
    lVar13 = uVar12 - uVar8;
    puVar7 = (undefined8 *)(puVar14 + uVar12);
    do {
      puVar7[1] = 0xffff0000ffff;
      *puVar7 = 0xffff0000ffff;
      lVar13 = lVar13 + 4;
      puVar7 = puVar7 + 2;
    } while (lVar13 != 0);
    if (uVar9 == uVar8) goto LAB_105a6dfc0;
  }
LAB_105a6dfac:
  do {
    puVar11 = puVar10 + 1;
    *puVar10 = 0xffff;
    puVar10 = puVar11;
  } while (puVar11 != puVar14 + uVar15);
LAB_105a6dfc0:
  if (extraout_x9 == 0) {
    return false;
  }
  lVar16 = param_1[4];
  uVar2 = *(ushort *)(param_1 + 0xb);
  lVar13 = lVar16;
  sVar17 = 0;
  do {
    lVar19 = lVar13 + 0x68;
    uVar5 = FUN_105a6dc0c(param_1,lVar13 + 0x40);
    uVar8 = 0;
    uVar9 = (ulong)(uVar5 & uVar2);
    *(ushort *)(lVar13 + 0x60) = uVar5;
    while( true ) {
      if ((uVar15 <= uVar9) && (uVar9 = 0, uVar15 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar1 = (short *)(puVar14 + uVar9);
      if (*psVar1 == -1) {
        *psVar1 = sVar17;
        *(ushort *)((long)puVar14 + uVar9 * 4 + 2) = uVar5;
        goto joined_r0x000105a6e0b8;
      }
      sVar18 = sVar17;
      if (((ulong)((int)uVar9 - (uint)(psVar1[1] & uVar2)) & (ulong)uVar2) < uVar8) break;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
    }
    while( true ) {
      if ((uVar15 <= uVar9) && (uVar9 = 0, uVar15 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar1 = (short *)(puVar14 + uVar9);
      sVar4 = *psVar1;
      if (sVar4 == -1) break;
      uVar3 = psVar1[1];
      *psVar1 = sVar18;
      psVar1[1] = uVar5;
      uVar9 = uVar9 + 1;
      sVar18 = sVar4;
      uVar5 = uVar3;
    }
    *psVar1 = sVar18;
    *(ushort *)((long)puVar14 + uVar9 * 4 + 2) = uVar5;
joined_r0x000105a6e0b8:
    lVar13 = lVar19;
    sVar17 = sVar17 + 1;
    if (lVar19 == lVar16 + extraout_x9 * 0x68) {
      return false;
    }
  } while( true );
}

