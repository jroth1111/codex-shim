
long * __ZN17rama_http_backend6client5proxy5layer15proxy_connector9connector23InnerHttpProxyConnector10set_header17h20113f0facfcbabdE
                 (long *param_1,long *param_2,long *param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  char cVar8;
  ushort uVar9;
  ushort uVar10;
  undefined5 uVar11;
  code *pcVar12;
  ushort uVar13;
  int iVar14;
  undefined *puVar15;
  undefined8 *extraout_x1;
  ulong extraout_x1_00;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong extraout_x9;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 *unaff_x27;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  iVar14 = func_0x000105a6dde8();
  if (iVar14 == 0) {
    uVar13 = func_0x000105a6dc0c(param_1,param_2);
    uVar32 = 0;
    uVar9 = *(ushort *)(param_1 + 0xb);
    unaff_x27 = (undefined8 *)(ulong)(uVar9 & uVar13);
    lVar19 = param_1[9];
    puVar22 = (undefined8 *)param_1[10];
    lVar23 = param_1[4];
    uVar16 = param_1[5];
    lVar3 = *param_2;
    lVar5 = param_2[1];
    lVar33 = param_2[1];
    lVar17 = param_2[2];
    do {
      if ((puVar22 <= unaff_x27) && (unaff_x27 = (undefined8 *)0x0, puVar22 == (undefined8 *)0x0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar19 + (long)unaff_x27 * 4);
      uVar29 = (ulong)*puVar1;
      if (uVar29 == 0xffff) {
        uStack_108 = param_2[1];
        lStack_110 = *param_2;
        uStack_f8 = param_2[3];
        uStack_100 = param_2[2];
        uStack_b8 = param_3[1];
        lStack_c0 = *param_3;
        uStack_a8 = param_3[3];
        uStack_b0 = param_3[2];
        lStack_a0 = param_3[4];
        uVar32 = func_0x000105a6e134(param_1,uVar13,&lStack_110,&lStack_c0);
        if ((uVar32 & 1) != 0) goto LAB_105a6bb00;
        puVar22 = (undefined8 *)param_1[10];
        if (unaff_x27 < puVar22) {
          puVar2 = (undefined2 *)(param_1[9] + (long)unaff_x27 * 4);
          *puVar2 = (short)uVar16;
          puVar2[1] = uVar13;
          return param_1;
        }
        goto LAB_105a6bb24;
      }
      uVar10 = puVar1[1];
      if (((ulong)((int)unaff_x27 - (uint)(uVar10 & uVar9)) & (ulong)uVar9) < uVar32) {
        lVar19 = *param_1;
        uStack_108 = param_2[1];
        lStack_110 = *param_2;
        uStack_f8 = param_2[3];
        uStack_100 = param_2[2];
        uStack_b8 = param_3[1];
        lStack_c0 = *param_3;
        uStack_a8 = param_3[3];
        uStack_b0 = param_3[2];
        lStack_a0 = param_3[4];
        uVar29 = func_0x000105a6e134(param_1,uVar13,&lStack_110,&lStack_c0);
        if ((uVar29 & 1) == 0) {
          uVar29 = 0;
          lVar23 = param_1[9];
          puVar22 = (undefined8 *)param_1[10];
          uVar27 = (uint)uVar16 & 0xffff;
          while( true ) {
            uVar9 = (ushort)uVar27;
            if ((puVar22 <= unaff_x27) &&
               (unaff_x27 = (undefined8 *)0x0, puVar22 == (undefined8 *)0x0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            puVar1 = (ushort *)(lVar23 + (long)unaff_x27 * 4);
            uVar27 = (uint)*puVar1;
            if (uVar27 == 0xffff) break;
            uVar29 = uVar29 + 1;
            uVar10 = puVar1[1];
            *puVar1 = uVar9;
            puVar1[1] = uVar13;
            unaff_x27 = (undefined8 *)((long)unaff_x27 + 1);
            uVar13 = uVar10;
          }
          *puVar1 = uVar9;
          puVar1[1] = uVar13;
          if (uVar29 < 0x80 && (uVar32 < 0x200 || lVar19 == 2)) {
            return param_1;
          }
          if (*param_1 != 0) {
            return param_1;
          }
          *param_1 = 1;
          return param_1;
        }
        goto LAB_105a6bb00;
      }
      if (uVar10 == uVar13) {
        if (uVar16 <= uVar29) {
          func_0x000108a07bdc(uVar29,uVar16,&UNK_10b3f8710);
          goto LAB_105a6bc20;
        }
        lVar18 = lVar23 + uVar29 * 0x68;
        if ((lVar3 == 0) != (*(long *)(lVar18 + 0x40) != 0)) {
          if (*(long *)(lVar18 + 0x40) == 0) {
            if (*(char *)(lVar18 + 0x48) == (char)lVar33) goto LAB_105a6b5ec;
          }
          else if ((*(long *)(lVar18 + 0x50) == lVar17) &&
                  (iVar14 = _memcmp(*(undefined8 *)(lVar18 + 0x48),lVar5), iVar14 == 0))
          goto LAB_105a6b5ec;
        }
      }
      uVar32 = uVar32 + 1;
      unaff_x27 = (undefined8 *)((long)unaff_x27 + 1);
    } while( true );
  }
  (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
  if (*param_2 != 0) {
    (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  }
LAB_105a6bb00:
  func_0x000108a07a3c(&UNK_109b04f0a,0x17,&lStack_110,&UNK_10b3f86a8,&UNK_10b3f80c8);
  puVar22 = extraout_x1;
LAB_105a6bb24:
  func_0x000108a07bdc(unaff_x27,puVar22,&UNK_10b3f8728);
  uVar16 = extraout_x1_00;
  uVar32 = extraout_x9;
LAB_105a6bb34:
  puStack_190 = &UNK_10b3f8770;
LAB_105a6bc0c:
  func_0x000108a07bdc(uVar32,uVar16,puStack_190);
LAB_105a6bc20:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x105a6bc24);
  (*pcVar12)();
LAB_105a6b5ec:
  lVar18 = param_3[1];
  lVar33 = *param_3;
  lVar38 = param_3[3];
  lVar36 = param_3[2];
  lVar19 = param_3[4];
  puVar20 = (uint *)(lVar23 + uVar29 * 0x68);
  if ((*puVar20 & 1) != 0) {
    uVar32 = *(ulong *)(puVar20 + 2);
    uVar30 = param_1[8];
    if (uVar32 < uVar30) {
      lVar28 = param_1[7];
      puStack_198 = &UNK_10b3f8848;
      puStack_190 = &UNK_10b3f8788;
      uVar31 = uVar32;
      puVar22 = (undefined8 *)(lVar28 + uVar30 * 0x48);
      do {
        unaff_x27 = puVar22 + -9;
        puVar20 = (uint *)(lVar28 + uVar31 * 0x48);
        uVar32 = *(ulong *)(puVar20 + 2);
        uVar24 = *(ulong *)(puVar20 + 6);
        if ((*puVar20 & 1) == 0) {
          if (puVar20[4] == 0) {
            if (uVar16 <= uVar32) goto LAB_105a6bb34;
            *(undefined8 *)(lVar23 + uVar32 * 0x68) = 0;
          }
          else {
            if (uVar16 <= uVar32) goto LAB_105a6bc0c;
            piVar21 = (int *)(lVar23 + uVar32 * 0x68);
            if (*piVar21 != 1) {
              puVar15 = &UNK_10b3f87a0;
LAB_105a6ba98:
              func_0x000108a07a20(puVar15);
              goto LAB_105a6bc20;
            }
            *(ulong *)(piVar21 + 2) = uVar24;
            if (uVar30 <= uVar24) {
              puStack_190 = &UNK_10b3f87b8;
              uVar16 = uVar30;
              uVar32 = uVar24;
              goto LAB_105a6bc0c;
            }
            puVar25 = (undefined8 *)(lVar28 + uVar24 * 0x48);
            *puVar25 = 0;
            puVar25[1] = uVar32;
          }
        }
        else if ((puVar20[4] & 1) == 0) {
          if (uVar16 <= uVar24) {
            puStack_190 = &UNK_10b3f87d0;
            uVar32 = uVar24;
            goto LAB_105a6bc0c;
          }
          piVar21 = (int *)(lVar23 + uVar24 * 0x68);
          if (*piVar21 != 1) {
            puVar15 = &UNK_10b3f87e8;
            goto LAB_105a6ba98;
          }
          *(ulong *)(piVar21 + 4) = uVar32;
          if (uVar30 <= uVar32) {
            puStack_190 = &UNK_10b3f8800;
            uVar16 = uVar30;
            goto LAB_105a6bc0c;
          }
          lVar26 = lVar28 + uVar32 * 0x48;
          *(undefined8 *)(lVar26 + 0x10) = 0;
          *(ulong *)(lVar26 + 0x18) = uVar24;
        }
        else {
          if (uVar30 <= uVar32) {
            puStack_190 = &UNK_10b3f8818;
            uVar16 = uVar30;
            goto LAB_105a6bc0c;
          }
          lVar26 = lVar28 + uVar32 * 0x48;
          *(undefined8 *)(lVar26 + 0x10) = 1;
          *(ulong *)(lVar26 + 0x18) = uVar24;
          if (uVar30 <= uVar24) {
            puStack_190 = &UNK_10b3f8830;
            uVar16 = uVar30;
            uVar32 = uVar24;
            goto LAB_105a6bc0c;
          }
          puVar25 = (undefined8 *)(lVar28 + uVar24 * 0x48);
          *puVar25 = 1;
          puVar25[1] = uVar32;
        }
        uStack_b8 = *(ulong *)(puVar20 + 2);
        lStack_c0 = *(long *)puVar20;
        uStack_a8 = *(ulong *)(puVar20 + 6);
        uStack_b0 = *(ulong *)(puVar20 + 4);
        uStack_98 = *(undefined8 *)(puVar20 + 10);
        lStack_a0 = *(long *)(puVar20 + 8);
        uStack_88 = *(undefined8 *)(puVar20 + 0xe);
        uStack_90 = *(undefined8 *)(puVar20 + 0xc);
        uStack_80 = *(undefined8 *)(puVar20 + 0x10);
        uVar30 = uVar30 - 1;
        uVar35 = puVar22[-8];
        uVar34 = *unaff_x27;
        uVar39 = puVar22[-6];
        uVar37 = puVar22[-7];
        uVar41 = puVar22[-4];
        uVar40 = puVar22[-5];
        uVar43 = puVar22[-2];
        uVar42 = puVar22[-3];
        *(undefined8 *)(puVar20 + 0x10) = puVar22[-1];
        *(undefined8 *)(puVar20 + 10) = uVar41;
        *(undefined8 *)(puVar20 + 8) = uVar40;
        *(undefined8 *)(puVar20 + 0xe) = uVar43;
        *(undefined8 *)(puVar20 + 0xc) = uVar42;
        *(undefined8 *)(puVar20 + 2) = uVar35;
        *(undefined8 *)puVar20 = uVar34;
        *(undefined8 *)(puVar20 + 6) = uVar39;
        *(undefined8 *)(puVar20 + 4) = uVar37;
        param_1[8] = uVar30;
        if ((lStack_c0 != 0) && (uVar30 == uStack_b8)) {
          lStack_c0 = 1;
          uStack_b8 = uVar31;
        }
        if ((uStack_b0 != 0) && (uVar30 == uStack_a8)) {
          uStack_b0 = 1;
          uStack_a8 = uVar31;
        }
        uVar32 = uStack_a8;
        if (uVar30 == uVar31) goto LAB_105a6b80c;
        uVar24 = uVar31;
        if (uVar30 <= uVar31) {
LAB_105a6bbe4:
          func_0x000108a07bdc(uVar24,uVar30,puStack_198);
          goto LAB_105a6bc20;
        }
        uVar4 = *(ulong *)(puVar20 + 4);
        uVar6 = *(ulong *)(puVar20 + 6);
        uVar24 = *(ulong *)(puVar20 + 2);
        if ((*puVar20 & 1) == 0) {
          if (uVar16 <= uVar24) {
            puStack_198 = &UNK_10b3f8860;
            uVar30 = uVar16;
            goto LAB_105a6bbe4;
          }
          piVar21 = (int *)(lVar23 + uVar24 * 0x68);
          if (*piVar21 == 1) goto LAB_105a6b7d0;
          puVar15 = &UNK_10b3f8878;
LAB_105a6bab4:
          func_0x000108a07a20(puVar15);
          goto LAB_105a6bc20;
        }
        if (uVar30 <= uVar24) {
          puStack_198 = &UNK_10b3f8890;
          goto LAB_105a6bbe4;
        }
        piVar21 = (int *)(lVar28 + uVar24 * 0x48 + 0x10);
        piVar21[0] = 1;
        piVar21[1] = 0;
LAB_105a6b7d0:
        *(ulong *)(piVar21 + 2) = uVar31;
        uVar24 = uVar6;
        if ((uVar4 & 1) == 0) {
          if (uVar16 <= uVar6) {
            puStack_198 = &UNK_10b3f88a8;
            uVar30 = uVar16;
            goto LAB_105a6bbe4;
          }
          piVar21 = (int *)(lVar23 + uVar6 * 0x68);
          if (*piVar21 != 1) {
            puVar15 = &UNK_10b3f88c0;
            goto LAB_105a6bab4;
          }
          *(ulong *)(piVar21 + 4) = uVar31;
        }
        else {
          if (uVar30 <= uVar6) {
            puStack_198 = &UNK_10b3f88d8;
            goto LAB_105a6bbe4;
          }
          puVar22 = (undefined8 *)(lVar28 + uVar6 * 0x48);
          *puVar22 = 1;
          puVar22[1] = uVar31;
        }
LAB_105a6b80c:
        uStack_f8 = uStack_a8;
        uStack_100 = uStack_b0;
        uStack_108 = uStack_b8;
        lStack_110 = lStack_c0;
        lStack_f0 = lStack_a0;
        uStack_e8 = uStack_98;
        uStack_e0 = uStack_90;
        uStack_d8 = uStack_88;
        uStack_d0 = uStack_80;
        if ((uStack_b0 & 1) == 0) {
          (**(code **)(lStack_a0 + 0x20))(&uStack_d8,uStack_98,uStack_90);
          goto LAB_105a6b9ec;
        }
        (**(code **)(lStack_a0 + 0x20))(&uStack_d8,uStack_98,uStack_90);
        uVar31 = uVar32;
        puVar22 = unaff_x27;
      } while (uVar32 < uVar30);
    }
    puStack_190 = &UNK_10b3f8758;
    uVar16 = uVar30;
    goto LAB_105a6bc0c;
  }
LAB_105a6b9ec:
  lVar23 = lVar23 + uVar29 * 0x68;
  uVar34 = *(undefined8 *)(lVar23 + 0x20);
  lVar28 = *(long *)(lVar23 + 0x18);
  uVar32 = *(ulong *)(lVar23 + 0x30);
  uVar35 = *(undefined8 *)(lVar23 + 0x28);
  cVar8 = *(char *)(lVar23 + 0x38);
  uVar11 = *(undefined5 *)(lVar23 + 0x38);
  uVar7 = *(undefined4 *)(lVar23 + 0x3c);
  *(long *)(lVar23 + 0x38) = lVar19;
  *(long *)(lVar23 + 0x20) = lVar18;
  *(long *)(lVar23 + 0x18) = lVar33;
  *(long *)(lVar23 + 0x30) = lVar38;
  *(long *)(lVar23 + 0x28) = lVar36;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x20))(param_2 + 3,lVar5,lVar17);
  }
  if (cVar8 != '\x03') {
    lStack_a0 = CONCAT44(uVar7,(int)uVar11);
    if (cVar8 != '\x02') {
      lStack_c0 = lVar28;
      uStack_b8 = uVar34;
      uStack_b0 = uVar35;
      uStack_a8 = uVar32;
      (**(code **)(lVar28 + 0x20))(&uStack_a8,uVar34,uVar35);
    }
    return param_1;
  }
  goto LAB_105a6bb00;
}

