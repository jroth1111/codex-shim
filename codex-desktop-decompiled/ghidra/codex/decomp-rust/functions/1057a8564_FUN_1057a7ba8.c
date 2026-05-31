
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1057a7ba8(long *param_1,undefined8 *param_2,ulong *param_3)

{
  short sVar1;
  short *psVar2;
  ushort *puVar3;
  ulong *puVar4;
  undefined2 *puVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  byte bVar11;
  byte *pbVar12;
  long lVar13;
  code *pcVar14;
  bool bVar15;
  ushort uVar16;
  int iVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long extraout_x1;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  int *piVar34;
  long lVar35;
  undefined4 *puVar36;
  undefined8 *puVar37;
  short sVar38;
  long *plVar39;
  ulong uVar40;
  ulong uVar41;
  undefined1 auVar42 [16];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  int *piStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  uint7 uStack_df;
  byte bStack_d8;
  uint7 uStack_d7;
  ulong uStack_d0;
  byte bStack_c8;
  uint7 uStack_c7;
  byte bStack_c0;
  uint7 uStack_bf;
  byte bStack_b8;
  uint7 uStack_b7;
  ulong uStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  ulong auStack_98 [3];
  undefined8 uStack_80;
  uint7 uStack_78;
  byte bStack_71;
  uint7 uStack_70;
  
  uVar41 = param_1[5];
  uVar40 = param_1[10];
  if (*param_1 == 1) {
    if ((float)uVar41 / (float)uVar40 < 0.2) {
      pauVar18 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar18[1][0] == '\x01') {
        auVar42 = *pauVar18;
      }
      else {
        auVar42 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar18 + 8) = auVar42._8_8_;
        pauVar18[1][0] = 1;
      }
      *(long *)*pauVar18 = auVar42._0_8_ + 1;
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 1) = auVar42;
      puVar36 = (undefined4 *)param_1[9];
      if (uVar40 != 0) {
        uVar28 = uVar40 * 4 - 4;
        puVar25 = puVar36;
        if (0xb < uVar28) {
          uVar27 = (uVar28 >> 2) + 1;
          if (uVar28 < 0x7c) {
            uVar29 = 0;
          }
          else {
            uVar29 = uVar27 & 0x7fffffffffffffe0;
            puVar37 = (undefined8 *)(puVar36 + 0x10);
            uVar28 = uVar29;
            do {
              puVar37[-7] = 0xffff0000ffff;
              puVar37[-8] = 0xffff0000ffff;
              puVar37[-5] = 0xffff0000ffff;
              puVar37[-6] = 0xffff0000ffff;
              puVar37[-3] = 0xffff0000ffff;
              puVar37[-4] = 0xffff0000ffff;
              puVar37[-1] = 0xffff0000ffff;
              puVar37[-2] = 0xffff0000ffff;
              puVar37[1] = 0xffff0000ffff;
              *puVar37 = 0xffff0000ffff;
              puVar37[3] = 0xffff0000ffff;
              puVar37[2] = 0xffff0000ffff;
              puVar37[5] = 0xffff0000ffff;
              puVar37[4] = 0xffff0000ffff;
              puVar37[7] = 0xffff0000ffff;
              puVar37[6] = 0xffff0000ffff;
              puVar37 = puVar37 + 0x10;
              uVar28 = uVar28 - 0x20;
            } while (uVar28 != 0);
            if (uVar27 == uVar29) goto LAB_1057a7da4;
            if ((uVar27 & 0x1c) == 0) {
              puVar25 = puVar36 + uVar29;
              goto LAB_1057a7d90;
            }
          }
          uVar28 = uVar27 & 0x7ffffffffffffffc;
          puVar25 = puVar36 + uVar28;
          lVar30 = uVar29 - uVar28;
          puVar37 = (undefined8 *)(puVar36 + uVar29);
          do {
            puVar37[1] = 0xffff0000ffff;
            *puVar37 = 0xffff0000ffff;
            lVar30 = lVar30 + 4;
            puVar37 = puVar37 + 2;
          } while (lVar30 != 0);
          if (uVar27 == uVar28) goto LAB_1057a7da4;
        }
LAB_1057a7d90:
        do {
          puVar26 = puVar25 + 1;
          *puVar25 = 0xffff;
          puVar25 = puVar26;
        } while (puVar26 != puVar36 + uVar40);
      }
LAB_1057a7da4:
      if (uVar41 != 0) {
        uStack_100 = param_1[4] + uVar41 * 0x60;
        uVar8 = *(ushort *)(param_1 + 0xb);
        uVar41 = param_1[4];
        puStack_f8 = param_2;
        sVar38 = 0;
        do {
          uVar28 = uVar41 + 0x60;
          sVar1 = sVar38 + 1;
          uVar16 = FUN_1057a7770(param_1,uVar41 + 0x38);
          uVar27 = 0;
          uVar29 = (ulong)(uVar16 & uVar8);
          *(ushort *)(uVar41 + 0x58) = uVar16;
          while( true ) {
            if ((uVar40 <= uVar29) && (uVar29 = 0, uVar40 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            psVar2 = (short *)(puVar36 + uVar29);
            if (*psVar2 == -1) {
              *psVar2 = sVar38;
              *(ushort *)((long)puVar36 + uVar29 * 4 + 2) = uVar16;
              goto joined_r0x0001057a7e5c;
            }
            if (((ulong)((int)uVar29 - (uint)(psVar2[1] & uVar8)) & (ulong)uVar8) < uVar27) break;
            uVar27 = uVar27 + 1;
            uVar29 = uVar29 + 1;
          }
          while( true ) {
            if ((uVar40 <= uVar29) && (uVar29 = 0, uVar40 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            psVar2 = (short *)(puVar36 + uVar29);
            sVar9 = *psVar2;
            if (sVar9 == -1) break;
            uVar10 = psVar2[1];
            *psVar2 = sVar38;
            psVar2[1] = uVar16;
            uVar29 = uVar29 + 1;
            sVar38 = sVar9;
            uVar16 = uVar10;
          }
          *psVar2 = sVar38;
          *(ushort *)((long)puVar36 + uVar29 * 4 + 2) = uVar16;
joined_r0x0001057a7e5c:
          uVar41 = uVar28;
          param_2 = puStack_f8;
          sVar38 = sVar1;
        } while (uVar28 != uStack_100);
      }
      goto LAB_1057a7ec8;
    }
    *param_1 = 0;
    uVar40 = FUN_1057a9fa0(param_1,uVar40 << 1);
  }
  else {
    if (uVar41 != uVar40 - (uVar40 >> 2)) goto LAB_1057a7ec8;
    if (uVar41 == 0) {
      *(undefined2 *)(param_1 + 0xb) = 7;
      uVar41 = 0x20;
      puVar37 = (undefined8 *)_malloc(0x20);
      if (puVar37 == (undefined8 *)0x0) {
LAB_1057a84c0:
        uVar19 = 2;
      }
      else {
        puVar37[1] = 0xffff0000ffff;
        *puVar37 = 0xffff0000ffff;
        puVar37[3] = 0xffff0000ffff;
        puVar37[2] = 0xffff0000ffff;
        if (uVar40 != 0) {
          _free(param_1[9]);
        }
        uVar19 = 8;
        param_1[9] = (long)puVar37;
        param_1[10] = 8;
        uVar41 = 0x240;
        lVar30 = _malloc(0x240);
        if (lVar30 != 0) {
          FUN_1057a696c(param_1 + 3);
          param_1[3] = 6;
          param_1[4] = lVar30;
          param_1[5] = 0;
          goto LAB_1057a7ec8;
        }
      }
      func_0x0001087c9084(uVar19,uVar41);
LAB_1057a84d0:
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1057a84d4);
      (*pcVar14)();
    }
    uVar40 = FUN_1057a9fa0(param_1,uVar40 << 1);
  }
  if ((uVar40 & 1) != 0) {
    (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    return 2;
  }
LAB_1057a7ec8:
  lStack_120 = *param_1;
  puStack_108 = param_3;
  puStack_f8 = param_2;
  if (lStack_120 == 2) {
    uStack_a8 = param_1[2];
    uStack_b0 = param_1[1];
    uStack_d0 = uStack_b0 ^ 0x736f6d6570736575;
    bStack_c8 = (byte)uStack_b0 ^ 0x61;
    uStack_c7 = (uint7)(uStack_b0 >> 8) ^ 0x6c7967656e6572;
    bStack_c0 = (byte)uStack_a8 ^ 0x6d;
    uStack_b7 = (uint7)(uStack_a8 >> 8);
    uStack_bf = uStack_b7 ^ 0x646f72616e646f;
    bStack_b8 = (byte)uStack_a8 ^ 0x73;
    uStack_b7 = uStack_b7 ^ 0x74656462797465;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    plStack_a0 = (long *)0x0;
    puVar37 = (undefined8 *)*param_2;
    uStack_f0 = (ulong)(puVar37 != (undefined8 *)0x0);
    plVar39 = (long *)(ulong)(puVar37 == (undefined8 *)0x0);
    FUN_1057b2720(&uStack_d0,&uStack_f0,8);
    if (puVar37 == (undefined8 *)0x0) {
      uVar40 = (ulong)*(byte *)(param_2 + 1);
      uStack_f0 = uVar40;
      FUN_1057b2720(&uStack_d0,&uStack_f0,8);
    }
    else {
      uVar19 = param_2[1];
      FUN_1057b2720(&uStack_d0,uVar19,param_2[2]);
      uVar40 = (ulong)((uint)uVar19 & 0xff);
    }
    uVar32 = auStack_98[0] | (long)plStack_a0 << 0x38;
    uVar31 = uVar32 ^ CONCAT71(uStack_b7,bStack_b8);
    uVar41 = CONCAT71(uStack_bf,bStack_c0) + uStack_d0;
    uVar29 = uVar41 ^ ((ulong)(uStack_bf >> 0x2b) | CONCAT71(uStack_bf,bStack_c0) << 0xd);
    uVar28 = uVar31 + CONCAT71(uStack_c7,bStack_c8);
    uVar27 = uVar28 + uVar29;
    uVar28 = uVar28 ^ (uVar31 >> 0x30 | uVar31 << 0x10);
    uVar31 = uVar27 ^ (uVar29 >> 0x2f | uVar29 << 0x11);
    uVar41 = uVar28 + (uVar41 >> 0x20 | uVar41 << 0x20);
    uVar29 = uVar41 ^ (uVar28 >> 0x2b | uVar28 << 0x15);
    uVar41 = (uVar41 ^ uVar32) + uVar31;
    uVar31 = uVar41 ^ (uVar31 >> 0x33 | uVar31 << 0xd);
    uVar28 = uVar29 + ((uVar27 >> 0x20 | uVar27 << 0x20) ^ 0xff);
    uVar27 = uVar31 + uVar28;
    uVar28 = uVar28 ^ (uVar29 >> 0x30 | uVar29 << 0x10);
    uVar31 = uVar27 ^ (uVar31 >> 0x2f | uVar31 << 0x11);
    uVar41 = uVar28 + (uVar41 >> 0x20 | uVar41 << 0x20);
    uVar29 = uVar31 + uVar41;
    uVar41 = uVar41 ^ (uVar28 >> 0x2b | uVar28 << 0x15);
    uVar31 = uVar29 ^ (uVar31 >> 0x33 | uVar31 << 0xd);
    uVar28 = uVar41 + (uVar27 >> 0x20 | uVar27 << 0x20);
    uVar27 = uVar31 + uVar28;
    uVar28 = uVar28 ^ (uVar41 >> 0x30 | uVar41 << 0x10);
    uVar31 = uVar27 ^ (uVar31 >> 0x2f | uVar31 << 0x11);
    uVar41 = uVar28 + (uVar29 >> 0x20 | uVar29 << 0x20);
    uVar29 = uVar41 ^ (uVar28 >> 0x2b | uVar28 << 0x15);
    uVar31 = uVar31 + uVar41 ^ (uVar31 >> 0x33 | uVar31 << 0xd);
    uVar28 = uVar29 + (uVar27 >> 0x20 | uVar27 << 0x20);
    uVar41 = uVar31 + uVar28;
    uVar41 = (uVar28 ^ uVar29 << 0x10) >> 0x2b ^ uVar31 >> 0x2f ^ uVar41 >> 0x20 ^ uVar41;
    puStack_118 = puVar37;
  }
  else {
    puStack_118 = (undefined8 *)*param_2;
    uVar41 = ((ulong)(puStack_118 != (undefined8 *)0x0) ^ 0x2325) * 0x4a21;
    if (puStack_118 == (undefined8 *)0x0) {
      puStack_118 = (undefined8 *)0x0;
      uVar40 = (ulong)*(byte *)(param_2 + 1);
      uVar41 = (uVar40 ^ 0xa2d39c5) * 0x4a21;
      plVar39 = (long *)0x1;
    }
    else {
      uVar40 = (ulong)((uint)(byte *)param_2[1] & 0xff);
      pbVar12 = (byte *)param_2[1];
      for (lVar30 = param_2[2]; lVar30 != 0; lVar30 = lVar30 + -1) {
        uVar41 = (uVar41 ^ *pbVar12) * 0x1b3;
        pbVar12 = pbVar12 + 1;
      }
      plVar39 = (long *)0x0;
    }
  }
  uVar28 = 0;
  uVar41 = uVar41 & 0x7fff;
  uVar8 = *(ushort *)(param_1 + 0xb);
  uVar27 = uVar41 & uVar8;
  lVar30 = param_1[9];
  uVar29 = param_1[10];
  lVar6 = param_1[4];
  uVar31 = param_1[5];
  plStack_110 = param_1;
  uStack_100 = uVar31;
  do {
    puVar4 = puStack_108;
    if ((uVar29 <= uVar27) && (uVar27 = 0, uVar29 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar3 = (ushort *)(lVar30 + uVar27 * 4);
    uVar16 = *puVar3;
    uVar32 = (ulong)uVar16;
    if (uVar32 == 0xffff) {
      if (puStack_118 == (undefined8 *)0x0) {
        uStack_d0 = 0;
      }
      else {
        (*(code *)*puStack_118)(&uStack_d0,puStack_f8 + 3,puStack_f8[1],puStack_f8[2]);
        uVar40 = (ulong)bStack_c8;
        uStack_80 = CONCAT17(bStack_c0,uStack_c7);
        uStack_78 = uStack_bf;
        bStack_71 = bStack_b8;
        uStack_70 = uStack_b7;
      }
      plVar39 = plStack_110;
      uStack_e8 = (undefined1)uVar40;
      uStack_df = uStack_78;
      uStack_e7 = uStack_80;
      bStack_d8 = bStack_71;
      uStack_d7 = uStack_70;
      bStack_c8 = (byte)puVar4[1];
      uStack_c7 = (uint7)(puVar4[1] >> 8);
      bStack_b8 = (byte)puVar4[3];
      uStack_b7 = (uint7)(puVar4[3] >> 8);
      bStack_c0 = (byte)puVar4[2];
      uStack_bf = (uint7)(puVar4[2] >> 8);
      uStack_f0 = uStack_d0;
      uStack_d0 = *puVar4;
      uVar40 = FUN_1057a99e0(plStack_110,uVar41,&uStack_f0,&uStack_d0);
      if ((uVar40 & 1) != 0) {
        return 2;
      }
      uVar40 = plVar39[10];
      if (uVar27 < uVar40) {
        puVar5 = (undefined2 *)(plVar39[9] + uVar27 * 4);
        *puVar5 = (short)uStack_100;
        puVar5[1] = (short)uVar41;
        return 0;
      }
      func_0x000108a07bdc(uVar27,uVar40,&UNK_10b3b4500);
      goto LAB_1057a84c0;
    }
    uVar10 = puVar3[1];
    if (((ulong)((int)uVar27 - (uint)(uVar10 & uVar8)) & (ulong)uVar8) < uVar28) {
      bVar15 = lStack_120 == 2;
      if (puStack_118 == (undefined8 *)0x0) {
        uStack_d0 = 0;
      }
      else {
        (*(code *)*puStack_118)(&uStack_d0,puStack_f8 + 3,puStack_f8[1],puStack_f8[2]);
        uVar40 = (ulong)bStack_c8;
        uStack_80 = CONCAT17(bStack_c0,uStack_c7);
        uStack_78 = uStack_bf;
        bStack_71 = bStack_b8;
        uStack_70 = uStack_b7;
      }
      plVar39 = plStack_110;
      uStack_e8 = (undefined1)uVar40;
      uStack_df = uStack_78;
      uStack_e7 = uStack_80;
      bStack_d8 = bStack_71;
      uStack_d7 = uStack_70;
      bStack_c8 = (byte)puVar4[1];
      uStack_c7 = (uint7)(puVar4[1] >> 8);
      bStack_b8 = (byte)puVar4[3];
      uStack_b7 = (uint7)(puVar4[3] >> 8);
      bStack_c0 = (byte)puVar4[2];
      uStack_bf = (uint7)(puVar4[2] >> 8);
      uStack_f0 = uStack_d0;
      uStack_d0 = *puVar4;
      uVar40 = FUN_1057a99e0(plStack_110,uVar41,&uStack_f0,&uStack_d0);
      if ((uVar40 & 1) != 0) {
        return 2;
      }
      uVar40 = 0;
      lVar30 = plVar39[9];
      uVar29 = plVar39[10];
      uVar33 = (uint)uStack_100 & 0xffff;
      while( true ) {
        uVar8 = (ushort)uVar41;
        uVar16 = (ushort)uVar33;
        if ((uVar29 <= uVar27) && (uVar27 = 0, uVar29 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar3 = (ushort *)(lVar30 + uVar27 * 4);
        uVar33 = (uint)*puVar3;
        if (uVar33 == 0xffff) break;
        uVar40 = uVar40 + 1;
        uVar41 = (ulong)puVar3[1];
        *puVar3 = uVar16;
        puVar3[1] = uVar8;
        uVar27 = uVar27 + 1;
      }
      *puVar3 = uVar16;
      puVar3[1] = uVar8;
      if (uVar40 < 0x80 && (bVar15 || uVar28 < 0x200)) {
        return 0;
      }
      if (*plVar39 == 0) {
        *plVar39 = 1;
        return 0;
      }
      return 0;
    }
    if ((uint)uVar10 == (uint)uVar41) {
      if (uVar31 <= uVar32) {
        func_0x000108a07bdc(uVar32,uVar31,&UNK_10b3b44e8);
        goto LAB_1057a84d0;
      }
      lVar23 = lVar6 + uVar32 * 0x60;
      if ((uint)plVar39 != (uint)(*(long *)(lVar23 + 0x38) != 0)) {
        if (*(long *)(lVar23 + 0x38) == 0) {
          if ((uint)*(byte *)(lVar23 + 0x40) == (uint)uVar40) break;
        }
        else if (*(long *)(lVar23 + 0x48) == puStack_f8[2]) {
          uVar40 = puStack_f8[1];
          iVar17 = _memcmp(*(undefined8 *)(lVar23 + 0x40),uVar40);
          param_1 = plVar39;
          if (iVar17 == 0) break;
          uVar40 = (ulong)((uint)uVar40 & 0xff);
          uVar31 = uStack_100;
        }
      }
    }
    uVar28 = uVar28 + 1;
    uVar27 = uVar27 + 1;
  } while( true );
  plVar39 = plStack_110;
  piVar34 = (int *)(lVar6 + uVar32 * 0x60);
  bStack_b8 = (byte)uVar16;
  bVar11 = (byte)(uVar16 >> 8);
  if (*piVar34 != 1) {
    lVar30 = plStack_110[8];
    uStack_a8 = puStack_108[1];
    uStack_b0 = *puStack_108;
    auStack_98[0] = puStack_108[3];
    plStack_a0 = (long *)puStack_108[2];
    uStack_d0 = 0;
    uStack_c7 = (uint7)bVar11;
    bStack_c0 = 0;
    uStack_bf = 0;
    uStack_b7 = (uint7)bVar11;
    bStack_c8 = bStack_b8;
    if (lVar30 == plStack_110[6]) {
      func_0x000108a1516c(plStack_110 + 6);
    }
    puVar4 = (ulong *)(plVar39[7] + lVar30 * 0x40);
    puVar4[5] = uStack_a8;
    puVar4[4] = uStack_b0;
    puVar4[7] = auStack_98[0];
    puVar4[6] = (ulong)plStack_a0;
    puVar4[1] = CONCAT71(uStack_c7,bStack_c8);
    *puVar4 = uStack_d0;
    puVar4[3] = CONCAT71(uStack_b7,bStack_b8);
    puVar4[2] = CONCAT71(uStack_bf,bStack_c0);
    plVar39[8] = lVar30 + 1;
    piVar34[0] = 1;
    piVar34[1] = 0;
    *(long *)(piVar34 + 2) = lVar30;
    *(long *)(piVar34 + 4) = lVar30;
    return 1;
  }
  uVar29 = *(ulong *)(piVar34 + 4);
  uVar41 = plStack_110[8];
  uStack_a8 = puStack_108[1];
  uStack_b0 = *puStack_108;
  auStack_98[0] = puStack_108[3];
  plStack_a0 = (long *)puStack_108[2];
  uStack_d0 = 1;
  bStack_c8 = (byte)uVar29;
  uStack_c7 = (uint7)(uVar29 >> 8);
  bStack_c0 = 0;
  uStack_bf = 0;
  uStack_b7 = (uint7)bVar11;
  if (uVar41 == plStack_110[6]) {
    func_0x000108a1516c(plStack_110 + 6);
  }
  lVar30 = plVar39[7];
  puVar4 = (ulong *)(lVar30 + uVar41 * 0x40);
  puVar4[5] = uStack_a8;
  puVar4[4] = uStack_b0;
  puVar4[7] = auStack_98[0];
  puVar4[6] = (ulong)plStack_a0;
  puVar4[1] = CONCAT71(uStack_c7,bStack_c8);
  *puVar4 = uStack_d0;
  puVar4[3] = CONCAT71(uStack_b7,bStack_b8);
  puVar4[2] = CONCAT71(uStack_bf,bStack_c0);
  plVar39[8] = uVar41 + 1;
  if (uVar29 <= uVar41) {
    lVar30 = lVar30 + uVar29 * 0x40;
    *(undefined8 *)(lVar30 + 0x10) = 1;
    *(ulong *)(lVar30 + 0x18) = uVar41;
    piVar34[0] = 1;
    piVar34[1] = 0;
    *(ulong *)(piVar34 + 4) = uVar41;
    return 1;
  }
  uVar19 = func_0x000108a07bdc(uVar29,uVar41 + 1,&UNK_10b3b4488);
  plVar22 = plStack_a0;
  (**(code **)(uStack_b0 + 0x20))(auStack_98,uStack_a8);
  __Unwind_Resume(uVar19);
  auVar42 = func_0x000108a07bc4();
  plVar21 = auVar42._8_8_;
  plVar20 = auVar42._0_8_;
  plStack_150 = plVar39;
  uStack_128 = 0x1057a8564;
  plStack_180 = param_1;
  uStack_178 = uVar28;
  uStack_170 = uVar40;
  uStack_168 = uVar32;
  uStack_160 = uVar27;
  lStack_158 = lVar6;
  uStack_148 = uVar19;
  uStack_140 = uVar41;
  piStack_138 = piVar34;
  puStack_130 = &stack0xfffffffffffffff0;
  iVar17 = FUN_1057a9544();
  if (iVar17 != 0) {
    (**(code **)(*plVar22 + 0x20))(plVar22 + 3,plVar22[1],plVar22[2]);
    if (*plVar21 == 0) {
      return 2;
    }
    (**(code **)(*plVar21 + 0x20))(plVar21 + 3,plVar21[1],plVar21[2]);
    return 2;
  }
  uVar16 = FUN_1057a7770(plVar20,plVar21);
  uVar40 = 0;
  uVar8 = *(ushort *)(plVar20 + 0xb);
  uVar29 = (ulong)(uint)uVar16;
  uVar41 = (ulong)(uVar8 & uVar16);
  lVar30 = plVar20[9];
  uVar28 = plVar20[10];
  lVar6 = plVar20[4];
  uVar27 = plVar20[5];
  lVar23 = *plVar21;
  lVar7 = plVar21[1];
  lVar13 = plVar21[1];
  lVar35 = plVar21[2];
  do {
    if ((uVar28 <= uVar41) && (uVar41 = 0, uVar28 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar3 = (ushort *)(lVar30 + uVar41 * 4);
    uVar31 = (ulong)*puVar3;
    if (uVar31 == 0xffff) {
      lStack_1e8 = plVar21[1];
      lStack_1f0 = *plVar21;
      lStack_1d8 = plVar21[3];
      lStack_1e0 = plVar21[2];
      uStack_1c8 = plVar22[1];
      lStack_1d0 = *plVar22;
      uStack_1b8 = plVar22[3];
      lStack_1c0 = plVar22[2];
      lStack_1b0 = plVar22[4];
      uVar40 = FUN_1057a98b8(plVar20,uVar29,&lStack_1f0,&lStack_1d0);
      if ((uVar40 & 1) != 0) {
        return 2;
      }
      if (uVar41 < (ulong)plVar20[10]) {
        puVar5 = (undefined2 *)(plVar20[9] + uVar41 * 4);
        *puVar5 = (short)uVar27;
        puVar5[1] = uVar16;
        return 0;
      }
      func_0x000108a07bdc(uVar41,plVar20[10],&UNK_10b3b4500);
      lVar30 = extraout_x1;
      goto LAB_1057a89b0;
    }
    uVar10 = puVar3[1];
    if (((ulong)((int)uVar41 - (uint)(uVar10 & uVar8)) & (ulong)uVar8) < uVar40) {
      lVar30 = *plVar20;
      lStack_1e8 = plVar21[1];
      lStack_1f0 = *plVar21;
      lStack_1d8 = plVar21[3];
      lStack_1e0 = plVar21[2];
      uStack_1c8 = plVar22[1];
      lStack_1d0 = *plVar22;
      uStack_1b8 = plVar22[3];
      lStack_1c0 = plVar22[2];
      lStack_1b0 = plVar22[4];
      uVar28 = FUN_1057a98b8(plVar20,uVar29,&lStack_1f0,&lStack_1d0);
      if ((uVar28 & 1) != 0) {
        return 2;
      }
      uVar28 = 0;
      lVar6 = plVar20[9];
      uVar31 = plVar20[10];
      uVar33 = (uint)uVar27 & 0xffff;
      while( true ) {
        uVar8 = (ushort)uVar29;
        uVar16 = (ushort)uVar33;
        if ((uVar31 <= uVar41) && (uVar41 = 0, uVar31 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar3 = (ushort *)(lVar6 + uVar41 * 4);
        uVar33 = (uint)*puVar3;
        if (uVar33 == 0xffff) break;
        uVar28 = uVar28 + 1;
        uVar29 = (ulong)puVar3[1];
        *puVar3 = uVar16;
        puVar3[1] = uVar8;
        uVar41 = uVar41 + 1;
      }
      *puVar3 = uVar16;
      puVar3[1] = uVar8;
      if (uVar28 < 0x80 && (uVar40 < 0x200 || lVar30 == 2)) {
        return 0;
      }
      if (*plVar20 == 0) {
        *plVar20 = 1;
        return 0;
      }
      return 0;
    }
    if ((uint)uVar10 == (uint)uVar16) {
      if (uVar27 <= uVar31) {
        func_0x000108a07bdc(uVar31,uVar27,&UNK_10b3b44e8);
        goto LAB_1057a89c0;
      }
      lVar24 = lVar6 + uVar31 * 0x68;
      if ((lVar23 == 0) != (*(long *)(lVar24 + 0x40) != 0)) {
        if (*(long *)(lVar24 + 0x40) == 0) {
          if (*(char *)(lVar24 + 0x48) == (char)lVar13) {
LAB_1057a86dc:
            piVar34 = (int *)(lVar6 + uVar31 * 0x68);
            uStack_1b8 = uVar31;
            if (*piVar34 == 1) {
              uVar29 = *(ulong *)(piVar34 + 4);
              uVar40 = plVar20[8];
              lStack_1a8 = plVar22[1];
              lStack_1b0 = *plVar22;
              lStack_198 = plVar22[3];
              lStack_1a0 = plVar22[2];
              lStack_190 = plVar22[4];
              lStack_1d0 = 1;
              lStack_1c0 = 0;
              uStack_1c8 = uVar29;
              if (uVar40 == plVar20[6]) {
                func_0x000108a12230(plVar20 + 6);
              }
              plVar39 = (long *)(plVar20[7] + uVar40 * 0x48);
              plVar39[1] = uStack_1c8;
              *plVar39 = lStack_1d0;
              plVar39[8] = lStack_190;
              plVar39[5] = lStack_1a8;
              plVar39[4] = lStack_1b0;
              plVar39[7] = lStack_198;
              plVar39[6] = lStack_1a0;
              plVar39[3] = uStack_1b8;
              plVar39[2] = lStack_1c0;
              lVar30 = uVar40 + 1;
              plVar20[8] = lVar30;
              if (uVar40 < uVar29) {
LAB_1057a89b0:
                func_0x000108a07bdc(uVar29,lVar30,&UNK_10b3b4488);
LAB_1057a89c0:
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x1057a89c4);
                (*pcVar14)();
              }
              lVar30 = plVar20[7] + uVar29 * 0x48;
              *(undefined8 *)(lVar30 + 0x10) = 1;
              *(ulong *)(lVar30 + 0x18) = uVar40;
              piVar34[0] = 1;
              piVar34[1] = 0;
            }
            else {
              uVar40 = plVar20[8];
              lStack_1a8 = plVar22[1];
              lStack_1b0 = *plVar22;
              lStack_198 = plVar22[3];
              lStack_1a0 = plVar22[2];
              lStack_190 = plVar22[4];
              lStack_1d0 = 0;
              lStack_1c0 = 0;
              uStack_1c8 = uVar31;
              if (uVar40 == plVar20[6]) {
                func_0x000108a12230(plVar20 + 6);
              }
              plVar39 = (long *)(plVar20[7] + uVar40 * 0x48);
              plVar39[1] = uStack_1c8;
              *plVar39 = lStack_1d0;
              plVar39[8] = lStack_190;
              plVar39[5] = lStack_1a8;
              plVar39[4] = lStack_1b0;
              plVar39[7] = lStack_198;
              plVar39[6] = lStack_1a0;
              plVar39[3] = uStack_1b8;
              plVar39[2] = lStack_1c0;
              plVar20[8] = uVar40 + 1;
              piVar34[0] = 1;
              piVar34[1] = 0;
              *(ulong *)(piVar34 + 2) = uVar40;
            }
            *(ulong *)(piVar34 + 4) = uVar40;
            if (*plVar21 != 0) {
              (**(code **)(*plVar21 + 0x20))(plVar21 + 3,plVar21[1],plVar21[2]);
            }
            return 1;
          }
        }
        else if ((*(long *)(lVar24 + 0x50) == lVar35) &&
                (iVar17 = _memcmp(*(undefined8 *)(lVar24 + 0x48),lVar7,lVar35), iVar17 == 0))
        goto LAB_1057a86dc;
      }
    }
    uVar40 = uVar40 + 1;
    uVar41 = uVar41 + 1;
  } while( true );
}

