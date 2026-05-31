
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046d0a44(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  short sVar1;
  short *psVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  code *pcVar11;
  ushort uVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  short sVar34;
  undefined *puVar35;
  ulong uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined *puStack_148;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar16 = param_2[5];
  uVar32 = param_2[10];
  if (*param_2 == 1) {
    if ((float)uVar16 / (float)uVar32 < 0.2) {
      plVar14 = (long *)(*
                        ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                        )();
      if ((char)plVar14[2] == '\x01') {
        lVar29 = *plVar14;
        lVar21 = plVar14[1];
        *plVar14 = lVar29 + 1;
        *param_2 = 2;
        param_2[1] = lVar29;
        param_2[2] = lVar21;
      }
      else {
        auVar47 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(undefined1 *)(plVar14 + 2) = 1;
        uVar32 = param_2[10];
        *plVar14 = auVar47._0_8_ + 1;
        plVar14[1] = auVar47._8_8_;
        *param_2 = 2;
        *(undefined1 (*) [16])(param_2 + 1) = auVar47;
      }
      if (uVar32 != 0) {
        puVar17 = (undefined4 *)param_2[9];
        uVar16 = uVar32 * 4 - 4;
        puVar25 = puVar17;
        if (0xb < uVar16) {
          uVar22 = (uVar16 >> 2) + 1;
          if (uVar16 < 0x7c) {
            uVar28 = 0;
          }
          else {
            uVar28 = uVar22 & 0x7fffffffffffffe0;
            puVar15 = (undefined8 *)(puVar17 + 0x10);
            uVar16 = uVar28;
            do {
              puVar15[-7] = 0xffff0000ffff;
              puVar15[-8] = 0xffff0000ffff;
              puVar15[-5] = 0xffff0000ffff;
              puVar15[-6] = 0xffff0000ffff;
              puVar15[-3] = 0xffff0000ffff;
              puVar15[-4] = 0xffff0000ffff;
              puVar15[-1] = 0xffff0000ffff;
              puVar15[-2] = 0xffff0000ffff;
              puVar15[1] = 0xffff0000ffff;
              *puVar15 = 0xffff0000ffff;
              puVar15[3] = 0xffff0000ffff;
              puVar15[2] = 0xffff0000ffff;
              puVar15[5] = 0xffff0000ffff;
              puVar15[4] = 0xffff0000ffff;
              puVar15[7] = 0xffff0000ffff;
              puVar15[6] = 0xffff0000ffff;
              puVar15 = puVar15 + 0x10;
              uVar16 = uVar16 - 0x20;
            } while (uVar16 != 0);
            if (uVar22 == uVar28) goto LAB_1046d0c88;
            if ((uVar22 & 0x1c) == 0) {
              puVar25 = puVar17 + uVar28;
              goto LAB_1046d0c74;
            }
          }
          uVar16 = uVar22 & 0x7ffffffffffffffc;
          puVar25 = puVar17 + uVar16;
          lVar29 = uVar28 - uVar16;
          puVar15 = (undefined8 *)(puVar17 + uVar28);
          do {
            puVar15[1] = 0xffff0000ffff;
            *puVar15 = 0xffff0000ffff;
            lVar29 = lVar29 + 4;
            puVar15 = puVar15 + 2;
          } while (lVar29 != 0);
          if (uVar22 == uVar16) goto LAB_1046d0c88;
        }
LAB_1046d0c74:
        do {
          puVar26 = puVar25 + 1;
          *puVar25 = 0xffff;
          puVar25 = puVar26;
        } while (puVar26 != puVar17 + uVar32);
      }
LAB_1046d0c88:
      lVar29 = param_2[5];
      if (lVar29 != 0) {
        lVar33 = param_2[4];
        uVar8 = *(ushort *)(param_2 + 0xb);
        lVar21 = param_2[9];
        uVar32 = param_2[10];
        lVar38 = lVar33;
        sVar34 = 0;
        do {
          lVar40 = lVar38 + 0x68;
          sVar1 = sVar34 + 1;
          uVar12 = func_0x0001046d0868(param_2,lVar38 + 0x40);
          uVar16 = 0;
          uVar22 = (ulong)(uVar12 & uVar8);
          *(ushort *)(lVar38 + 0x60) = uVar12;
          while( true ) {
            if ((uVar32 <= uVar22) && (uVar22 = 0, uVar32 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            psVar2 = (short *)(lVar21 + uVar22 * 4);
            if (*psVar2 == -1) {
              *psVar2 = sVar34;
              *(ushort *)(lVar21 + uVar22 * 4 + 2) = uVar12;
              goto joined_r0x0001046d0d54;
            }
            if (((ulong)((int)uVar22 - (uint)(psVar2[1] & uVar8)) & (ulong)uVar8) < uVar16) break;
            uVar16 = uVar16 + 1;
            uVar22 = uVar22 + 1;
          }
          while( true ) {
            if ((uVar32 <= uVar22) && (uVar22 = 0, uVar32 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            psVar2 = (short *)(lVar21 + uVar22 * 4);
            sVar9 = *psVar2;
            if (sVar9 == -1) break;
            uVar10 = psVar2[1];
            *psVar2 = sVar34;
            psVar2[1] = uVar12;
            uVar22 = uVar22 + 1;
            sVar34 = sVar9;
            uVar12 = uVar10;
          }
          *psVar2 = sVar34;
          *(ushort *)(lVar21 + uVar22 * 4 + 2) = uVar12;
joined_r0x0001046d0d54:
          lVar38 = lVar40;
          sVar34 = sVar1;
        } while (lVar40 != lVar33 + lVar29 * 0x68);
      }
      goto LAB_1046d0dc4;
    }
    *param_2 = 0;
    uVar32 = func_0x0001046d16a0(param_2,uVar32 << 1);
  }
  else {
    if (uVar16 != uVar32 - (uVar32 >> 2)) goto LAB_1046d0dc4;
    if (uVar16 == 0) {
      *(undefined2 *)(param_2 + 0xb) = 7;
      uVar16 = 0x20;
      puVar15 = (undefined8 *)_malloc(0x20);
      if (puVar15 == (undefined8 *)0x0) {
LAB_1046d14b8:
        uVar37 = 2;
      }
      else {
        puVar15[1] = 0xffff0000ffff;
        *puVar15 = 0xffff0000ffff;
        puVar15[3] = 0xffff0000ffff;
        puVar15[2] = 0xffff0000ffff;
        if (uVar32 != 0) {
          _free(param_2[9]);
        }
        uVar37 = 8;
        param_2[9] = (long)puVar15;
        param_2[10] = 8;
        uVar16 = 0x270;
        lVar29 = _malloc(0x270);
        if (lVar29 != 0) {
          func_0x0001046cfbb8(param_2 + 3);
          param_2[3] = 6;
          param_2[4] = lVar29;
          param_2[5] = 0;
          goto LAB_1046d0dc4;
        }
      }
      func_0x0001087c9084(uVar37,uVar16);
      goto LAB_1046d14c8;
    }
    uVar32 = func_0x0001046d16a0(param_2,uVar32 << 1);
  }
  if ((uVar32 & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 3;
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001046d0b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
LAB_1046d0dc4:
  uVar12 = func_0x0001046d0868(param_2,param_3);
  uVar32 = 0;
  uVar8 = *(ushort *)(param_2 + 0xb);
  uVar22 = (ulong)(uVar8 & uVar12);
  lVar29 = param_2[9];
  uVar16 = param_2[10];
  lVar21 = param_2[4];
  uVar28 = param_2[5];
  lVar38 = *param_3;
  lVar33 = param_3[1];
  lVar40 = param_3[1];
  lVar31 = param_3[2];
  do {
    if ((uVar16 <= uVar22) && (uVar22 = 0, uVar16 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar3 = (ushort *)(lVar29 + uVar22 * 4);
    uVar36 = (ulong)*puVar3;
    if (uVar36 == 0xffff) {
      uStack_f8 = param_3[1];
      lStack_100 = *param_3;
      uStack_e8 = param_3[3];
      uStack_f0 = param_3[2];
      uStack_a8 = param_4[1];
      lStack_b0 = *param_4;
      uStack_98 = param_4[3];
      uStack_a0 = param_4[2];
      lStack_90 = param_4[4];
      iVar13 = func_0x0001046d1578(param_2,uVar12,&lStack_100,&lStack_b0);
      if (iVar13 != 0) {
LAB_1046d1208:
        *(undefined1 *)(param_1 + 4) = 3;
        return;
      }
      if ((ulong)param_2[10] <= uVar22) {
        func_0x000108a07bdc(uVar22,param_2[10],&UNK_10b32d070);
        goto LAB_1046d14b8;
      }
      puVar4 = (undefined2 *)(param_2[9] + uVar22 * 4);
      *puVar4 = (short)uVar28;
      puVar4[1] = uVar12;
      goto LAB_1046d11b4;
    }
    uVar10 = puVar3[1];
    if (((ulong)((int)uVar22 - (uint)(uVar10 & uVar8)) & (ulong)uVar8) < uVar32) {
      lVar29 = *param_2;
      uStack_f8 = param_3[1];
      lStack_100 = *param_3;
      uStack_e8 = param_3[3];
      uStack_f0 = param_3[2];
      uStack_a8 = param_4[1];
      lStack_b0 = *param_4;
      uStack_98 = param_4[3];
      uStack_a0 = param_4[2];
      lStack_90 = param_4[4];
      uVar16 = func_0x0001046d1578(param_2,uVar12,&lStack_100,&lStack_b0);
      if ((uVar16 & 1) != 0) goto LAB_1046d1208;
      uVar16 = 0;
      lVar21 = param_2[9];
      uVar36 = param_2[10];
      uVar30 = (uint)uVar28 & 0xffff;
      while( true ) {
        uVar8 = (ushort)uVar30;
        if ((uVar36 <= uVar22) && (uVar22 = 0, uVar36 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar3 = (ushort *)(lVar21 + uVar22 * 4);
        uVar30 = (uint)*puVar3;
        if (uVar30 == 0xffff) break;
        uVar16 = uVar16 + 1;
        uVar10 = puVar3[1];
        *puVar3 = uVar8;
        puVar3[1] = uVar12;
        uVar22 = uVar22 + 1;
        uVar12 = uVar10;
      }
      *puVar3 = uVar8;
      puVar3[1] = uVar12;
      if ((0x7f < uVar16 || 0x1ff < uVar32 && lVar29 != 2) && (*param_2 == 0)) {
        *param_2 = 1;
      }
LAB_1046d11b4:
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    if (uVar10 == uVar12) {
      if (uVar28 <= uVar36) {
        func_0x000108a07bdc(uVar36,uVar28,&UNK_10b32d058);
        goto LAB_1046d14c8;
      }
      lVar18 = lVar21 + uVar36 * 0x68;
      if ((lVar38 == 0) != (*(long *)(lVar18 + 0x40) != 0)) {
        if (*(long *)(lVar18 + 0x40) == 0) {
          if (*(char *)(lVar18 + 0x48) == (char)lVar40) break;
        }
        else if ((*(long *)(lVar18 + 0x50) == lVar31) &&
                (iVar13 = _memcmp(*(undefined8 *)(lVar18 + 0x48),lVar33,lVar31), iVar13 == 0))
        break;
      }
    }
    uVar32 = uVar32 + 1;
    uVar22 = uVar22 + 1;
  } while( true );
  lVar33 = param_4[1];
  lVar38 = *param_4;
  lVar31 = param_4[3];
  lVar40 = param_4[2];
  lVar29 = param_4[4];
  puVar19 = (uint *)(lVar21 + uVar36 * 0x68);
  if ((*puVar19 & 1) == 0) {
LAB_1046d12e4:
    lVar21 = lVar21 + uVar36 * 0x68;
    uVar37 = *(undefined8 *)(lVar21 + 0x18);
    uVar41 = *(undefined8 *)(lVar21 + 0x30);
    uVar39 = *(undefined8 *)(lVar21 + 0x28);
    param_1[1] = *(undefined8 *)(lVar21 + 0x20);
    *param_1 = uVar37;
    param_1[3] = uVar41;
    param_1[2] = uVar39;
    uVar7 = *(undefined1 *)(lVar21 + 0x38);
    *(undefined4 *)((long)param_1 + 0x21) = *(undefined4 *)(lVar21 + 0x39);
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(lVar21 + 0x3c);
    *(long *)(lVar21 + 0x38) = lVar29;
    *(long *)(lVar21 + 0x20) = lVar33;
    *(long *)(lVar21 + 0x18) = lVar38;
    *(long *)(lVar21 + 0x30) = lVar31;
    *(long *)(lVar21 + 0x28) = lVar40;
    *(undefined1 *)(param_1 + 4) = uVar7;
    if (*param_3 == 0) {
      return;
    }
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    return;
  }
  uVar32 = *(ulong *)(puVar19 + 2);
  uVar16 = param_2[8];
  if (uVar32 < uVar16) {
    lVar18 = param_2[7];
    puStack_148 = &UNK_10b32d190;
    puVar35 = &UNK_10b32d0d0;
    uVar22 = uVar32;
    puVar15 = (undefined8 *)(lVar18 + uVar16 * 0x48);
    do {
      puVar19 = (uint *)(lVar18 + uVar22 * 0x48);
      uVar32 = *(ulong *)(puVar19 + 2);
      uVar23 = *(ulong *)(puVar19 + 6);
      if ((*puVar19 & 1) == 0) {
        if (puVar19[4] == 0) {
          if (uVar28 <= uVar32) {
            puVar35 = &UNK_10b32d0b8;
            goto LAB_1046d1490;
          }
          *(undefined8 *)(lVar21 + uVar32 * 0x68) = 0;
        }
        else {
          if (uVar28 <= uVar32) goto LAB_1046d1490;
          piVar20 = (int *)(lVar21 + uVar32 * 0x68);
          if (*piVar20 != 1) {
            puVar35 = &UNK_10b32d0e8;
LAB_1046d1384:
            func_0x000108a07a20(puVar35);
            goto LAB_1046d14c8;
          }
          *(ulong *)(piVar20 + 2) = uVar23;
          if (uVar16 <= uVar23) {
            puVar35 = &UNK_10b32d100;
            uVar28 = uVar16;
            uVar32 = uVar23;
            goto LAB_1046d1490;
          }
          puVar24 = (undefined8 *)(lVar18 + uVar23 * 0x48);
          *puVar24 = 0;
          puVar24[1] = uVar32;
        }
      }
      else if ((puVar19[4] & 1) == 0) {
        if (uVar28 <= uVar23) {
          puVar35 = &UNK_10b32d118;
          uVar32 = uVar23;
          goto LAB_1046d1490;
        }
        piVar20 = (int *)(lVar21 + uVar23 * 0x68);
        if (*piVar20 != 1) {
          puVar35 = &UNK_10b32d130;
          goto LAB_1046d1384;
        }
        *(ulong *)(piVar20 + 4) = uVar32;
        if (uVar16 <= uVar32) {
          puVar35 = &UNK_10b32d148;
          uVar28 = uVar16;
          goto LAB_1046d1490;
        }
        lVar27 = lVar18 + uVar32 * 0x48;
        *(undefined8 *)(lVar27 + 0x10) = 0;
        *(ulong *)(lVar27 + 0x18) = uVar23;
      }
      else {
        if (uVar16 <= uVar32) {
          puVar35 = &UNK_10b32d160;
          uVar28 = uVar16;
          goto LAB_1046d1490;
        }
        lVar27 = lVar18 + uVar32 * 0x48;
        *(undefined8 *)(lVar27 + 0x10) = 1;
        *(ulong *)(lVar27 + 0x18) = uVar23;
        if (uVar16 <= uVar23) {
          puVar35 = &UNK_10b32d178;
          uVar28 = uVar16;
          uVar32 = uVar23;
          goto LAB_1046d1490;
        }
        puVar24 = (undefined8 *)(lVar18 + uVar23 * 0x48);
        *puVar24 = 1;
        puVar24[1] = uVar32;
      }
      uStack_a8 = *(ulong *)(puVar19 + 2);
      lStack_b0 = *(long *)puVar19;
      uStack_98 = *(ulong *)(puVar19 + 6);
      uStack_a0 = *(ulong *)(puVar19 + 4);
      uStack_88 = *(undefined8 *)(puVar19 + 10);
      lStack_90 = *(long *)(puVar19 + 8);
      uStack_78 = *(undefined8 *)(puVar19 + 0xe);
      uStack_80 = *(undefined8 *)(puVar19 + 0xc);
      uStack_70 = *(undefined8 *)(puVar19 + 0x10);
      uVar16 = uVar16 - 1;
      uVar39 = puVar15[-8];
      uVar37 = puVar15[-9];
      uVar42 = puVar15[-6];
      uVar41 = puVar15[-7];
      uVar44 = puVar15[-4];
      uVar43 = puVar15[-5];
      uVar46 = puVar15[-2];
      uVar45 = puVar15[-3];
      *(undefined8 *)(puVar19 + 0x10) = puVar15[-1];
      *(undefined8 *)(puVar19 + 10) = uVar44;
      *(undefined8 *)(puVar19 + 8) = uVar43;
      *(undefined8 *)(puVar19 + 0xe) = uVar46;
      *(undefined8 *)(puVar19 + 0xc) = uVar45;
      *(undefined8 *)(puVar19 + 2) = uVar39;
      *(undefined8 *)puVar19 = uVar37;
      *(undefined8 *)(puVar19 + 6) = uVar42;
      *(undefined8 *)(puVar19 + 4) = uVar41;
      param_2[8] = uVar16;
      if ((lStack_b0 != 0) && (uVar16 == uStack_a8)) {
        lStack_b0 = 1;
        uStack_a8 = uVar22;
      }
      if ((uStack_a0 != 0) && (uVar16 == uStack_98)) {
        uStack_a0 = 1;
        uStack_98 = uVar22;
      }
      uVar32 = uStack_98;
      if (uVar16 == uVar22) goto LAB_1046d10f4;
      uVar23 = uVar22;
      if (uVar16 <= uVar22) {
LAB_1046d1470:
        func_0x000108a07bdc(uVar23,uVar16,puStack_148);
        goto LAB_1046d14c8;
      }
      uVar5 = *(ulong *)(puVar19 + 4);
      uVar6 = *(ulong *)(puVar19 + 6);
      uVar23 = *(ulong *)(puVar19 + 2);
      if ((*puVar19 & 1) == 0) {
        if (uVar28 <= uVar23) {
          puStack_148 = &UNK_10b32d1a8;
          uVar16 = uVar28;
          goto LAB_1046d1470;
        }
        piVar20 = (int *)(lVar21 + uVar23 * 0x68);
        if (*piVar20 == 1) goto LAB_1046d10b8;
        puVar35 = &UNK_10b32d1c0;
LAB_1046d13a0:
        func_0x000108a07a20(puVar35);
        goto LAB_1046d14c8;
      }
      if (uVar16 <= uVar23) {
        puStack_148 = &UNK_10b32d1d8;
        goto LAB_1046d1470;
      }
      piVar20 = (int *)(lVar18 + uVar23 * 0x48 + 0x10);
      piVar20[0] = 1;
      piVar20[1] = 0;
LAB_1046d10b8:
      *(ulong *)(piVar20 + 2) = uVar22;
      uVar23 = uVar6;
      if ((uVar5 & 1) == 0) {
        if (uVar28 <= uVar6) {
          puStack_148 = &UNK_10b32d1f0;
          uVar16 = uVar28;
          goto LAB_1046d1470;
        }
        piVar20 = (int *)(lVar21 + uVar6 * 0x68);
        if (*piVar20 != 1) {
          puVar35 = &UNK_10b32d208;
          goto LAB_1046d13a0;
        }
        *(ulong *)(piVar20 + 4) = uVar22;
      }
      else {
        if (uVar16 <= uVar6) {
          puStack_148 = &UNK_10b32d220;
          goto LAB_1046d1470;
        }
        puVar24 = (undefined8 *)(lVar18 + uVar6 * 0x48);
        *puVar24 = 1;
        puVar24[1] = uVar22;
      }
LAB_1046d10f4:
      uStack_f8 = uStack_a8;
      lStack_100 = lStack_b0;
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      lStack_e0 = lStack_90;
      uStack_d8 = uStack_88;
      uStack_d0 = uStack_80;
      uStack_c8 = uStack_78;
      uStack_c0 = uStack_70;
      if ((uStack_a0 & 1) == 0) {
        (**(code **)(lStack_90 + 0x20))(&uStack_c8,uStack_88,uStack_80);
        goto LAB_1046d12e4;
      }
      (**(code **)(lStack_90 + 0x20))(&uStack_c8,uStack_88,uStack_80);
      uVar22 = uVar32;
      puVar15 = puVar15 + -9;
    } while (uVar32 < uVar16);
  }
  puVar35 = &UNK_10b32d0a0;
  uVar28 = uVar16;
LAB_1046d1490:
  func_0x000108a07bdc(uVar32,uVar28,puVar35);
LAB_1046d14c8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1046d14cc);
  (*pcVar11)();
}

