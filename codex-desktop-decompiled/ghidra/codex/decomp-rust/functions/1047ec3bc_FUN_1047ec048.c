
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047ec048(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *unaff_x20;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  short sVar19;
  short sVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  unkbyte10 Var30;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined6 uStack_96;
  
  uVar17 = param_1[5];
  uVar16 = param_1[10];
  if (*param_1 != 1) {
    if (uVar17 != uVar16 - (uVar16 >> 2)) {
      return false;
    }
    if (uVar17 == 0) {
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
        if (uVar16 != 0) {
          _free(param_1[9]);
        }
        param_1[9] = (long)puVar7;
        param_1[10] = 8;
        lVar14 = _malloc(0x270);
        unaff_x20 = puVar7;
        if (lVar14 != 0) {
          lVar18 = param_1[4];
          FUN_1047e98c8(lVar18,0);
          if (param_1[3] != 0) {
            _free(lVar18);
          }
          param_1[3] = 6;
          param_1[4] = lVar14;
          param_1[5] = 0;
          return false;
        }
      }
      uVar8 = func_0x0001087c9084(8,0x270);
      if (param_1[3] != 0) {
        _free(uVar16);
      }
      param_1[3] = 6;
      param_1[4] = (long)unaff_x20;
      param_1[5] = 0;
      Var30 = __Unwind_Resume(uVar8);
      lVar14 = (long)Var30;
      uVar16 = *(ulong *)(lVar14 + 0x28);
      if (uVar16 >> 0xf == 0) {
        lVar23 = param_3[1];
        lVar21 = *param_3;
        lVar27 = param_3[3];
        lVar25 = param_3[2];
        lVar24 = param_4[1];
        lVar22 = *param_4;
        lVar28 = param_4[3];
        lVar26 = param_4[2];
        lVar18 = param_4[4];
        if (uVar16 == *(ulong *)(lVar14 + 0x18)) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27544599c7fa16b6E();
        }
        puVar7 = (undefined8 *)(*(long *)(lVar14 + 0x20) + uVar16 * 0x68);
        puVar7[3] = lVar22;
        puVar7[2] = uStack_e8;
        puVar7[5] = lVar26;
        puVar7[4] = lVar24;
        puVar7[1] = uStack_f0;
        *puVar7 = 0;
        puVar7[0xc] = CONCAT62(uStack_96,(short)((unkuint10)Var30 >> 0x40));
        puVar7[9] = lVar23;
        puVar7[8] = lVar21;
        puVar7[0xb] = lVar27;
        puVar7[10] = lVar25;
        puVar7[7] = lVar18;
        puVar7[6] = lVar28;
        *(ulong *)(lVar14 + 0x28) = uVar16 + 1;
      }
      else {
        (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
        if (*param_3 != 0) {
          (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
        }
      }
      return (uVar16 & 0xffffffffffff8000) != 0;
    }
    uVar16 = func_0x0001047eccec(param_1,uVar16 << 1);
joined_r0x0001047ec120:
    if ((uVar16 & 1) == 0) {
      return false;
    }
    return true;
  }
  if (0.2 <= (float)uVar17 / (float)uVar16) {
    *param_1 = 0;
    uVar16 = func_0x0001047eccec(param_1,uVar16 << 1);
    goto joined_r0x0001047ec120;
  }
  pauVar6 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar6[1][0] == '\x01') {
    auVar29 = *pauVar6;
  }
  else {
    auVar29 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auVar29._8_8_;
    pauVar6[1][0] = 1;
  }
  *(long *)*pauVar6 = auVar29._0_8_ + 1;
  *param_1 = 2;
  *(undefined1 (*) [16])(param_1 + 1) = auVar29;
  puVar15 = (undefined4 *)param_1[9];
  if (uVar16 == 0) goto LAB_1047ec238;
  uVar12 = uVar16 * 4 - 4;
  puVar10 = puVar15;
  if (0xb < uVar12) {
    uVar9 = (uVar12 >> 2) + 1;
    if (uVar12 < 0x7c) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar9 & 0x7fffffffffffffe0;
      puVar7 = (undefined8 *)(puVar15 + 0x10);
      uVar12 = uVar13;
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
        uVar12 = uVar12 - 0x20;
      } while (uVar12 != 0);
      if (uVar9 == uVar13) goto LAB_1047ec238;
      if ((uVar9 & 0x1c) == 0) {
        puVar10 = puVar15 + uVar13;
        goto LAB_1047ec224;
      }
    }
    uVar12 = uVar9 & 0x7ffffffffffffffc;
    puVar10 = puVar15 + uVar12;
    lVar14 = uVar13 - uVar12;
    puVar7 = (undefined8 *)(puVar15 + uVar13);
    do {
      puVar7[1] = 0xffff0000ffff;
      *puVar7 = 0xffff0000ffff;
      lVar14 = lVar14 + 4;
      puVar7 = puVar7 + 2;
    } while (lVar14 != 0);
    if (uVar9 == uVar12) goto LAB_1047ec238;
  }
LAB_1047ec224:
  do {
    puVar11 = puVar10 + 1;
    *puVar10 = 0xffff;
    puVar10 = puVar11;
  } while (puVar11 != puVar15 + uVar16);
LAB_1047ec238:
  if (uVar17 == 0) {
    return false;
  }
  lVar18 = param_1[4];
  uVar2 = *(ushort *)(param_1 + 0xb);
  lVar14 = lVar18;
  sVar19 = 0;
  do {
    lVar21 = lVar14 + 0x68;
    uVar5 = FUN_1047eb5ec(param_1,lVar14 + 0x40);
    uVar12 = 0;
    uVar9 = (ulong)(uVar5 & uVar2);
    *(ushort *)(lVar14 + 0x60) = uVar5;
    while( true ) {
      if ((uVar16 <= uVar9) && (uVar9 = 0, uVar16 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar1 = (short *)(puVar15 + uVar9);
      if (*psVar1 == -1) {
        *psVar1 = sVar19;
        *(ushort *)((long)puVar15 + uVar9 * 4 + 2) = uVar5;
        goto joined_r0x0001047ec330;
      }
      sVar20 = sVar19;
      if (((ulong)((int)uVar9 - (uint)(psVar1[1] & uVar2)) & (ulong)uVar2) < uVar12) break;
      uVar12 = uVar12 + 1;
      uVar9 = uVar9 + 1;
    }
    while( true ) {
      if ((uVar16 <= uVar9) && (uVar9 = 0, uVar16 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar1 = (short *)(puVar15 + uVar9);
      sVar4 = *psVar1;
      if (sVar4 == -1) break;
      uVar3 = psVar1[1];
      *psVar1 = sVar20;
      psVar1[1] = uVar5;
      uVar9 = uVar9 + 1;
      sVar20 = sVar4;
      uVar5 = uVar3;
    }
    *psVar1 = sVar20;
    *(ushort *)((long)puVar15 + uVar9 * 4 + 2) = uVar5;
joined_r0x0001047ec330:
    lVar14 = lVar21;
    sVar19 = sVar19 + 1;
    if (lVar21 == lVar18 + uVar17 * 0x68) {
      return false;
    }
  } while( true );
}

