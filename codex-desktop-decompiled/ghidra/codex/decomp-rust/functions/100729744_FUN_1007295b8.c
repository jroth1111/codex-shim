
void FUN_1007295b8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  
  uVar11 = *(ulong *)(param_2 + 0x10);
  if (uVar11 != 0) {
    lVar12 = 0;
    lVar13 = 0;
    uVar9 = 0;
    lVar14 = *(long *)(param_2 + 8);
    lVar6 = param_4;
    do {
      if ((*(long *)(lVar14 + lVar13 + 8) == param_4) &&
         (iVar2 = _memcmp(*(undefined8 *)(lVar14 + lVar13),param_3,param_4), iVar2 == 0)) {
        if (uVar9 < uVar11) {
          puVar3 = (undefined8 *)(lVar14 + lVar13);
          uVar8 = *puVar3;
          uVar16 = puVar3[1];
          _memmove(puVar3,puVar3 + 2,(uVar11 * 0x10 - lVar13) + -0x10);
          *(ulong *)(param_2 + 0x10) = uVar11 - 1;
          uVar11 = *(ulong *)(param_2 + 0x28);
          if (uVar9 <= uVar11 && uVar11 - uVar9 != 0) {
            plVar4 = (long *)(*(long *)(param_2 + 0x20) + lVar12);
            lVar13 = *plVar4;
            lVar17 = plVar4[6];
            lVar12 = plVar4[5];
            lVar25 = plVar4[8];
            lVar21 = plVar4[7];
            lVar18 = plVar4[10];
            lVar14 = plVar4[9];
            lVar26 = plVar4[0xc];
            lVar22 = plVar4[0xb];
            lVar19 = plVar4[2];
            lVar15 = plVar4[1];
            lVar27 = plVar4[4];
            lVar23 = plVar4[3];
            _memmove(plVar4,plVar4 + 0xd,(uVar11 - uVar9) * 0x68 + -0x68);
            uVar11 = uVar11 - 1;
            *(ulong *)(param_2 + 0x28) = uVar11;
            if (lVar13 != 2) {
              param_1[8] = lVar17;
              param_1[7] = lVar12;
              param_1[10] = lVar25;
              param_1[9] = lVar21;
              param_1[0xc] = lVar18;
              param_1[0xb] = lVar14;
              param_1[0xe] = lVar26;
              param_1[0xd] = lVar22;
              param_1[4] = lVar19;
              param_1[3] = lVar15;
              param_1[6] = lVar27;
              param_1[5] = lVar23;
              *param_1 = uVar8;
              param_1[1] = uVar16;
              goto LAB_1007296f8;
            }
          }
          FUN_107c03c58(uVar9,uVar11,&UNK_10b21f708);
        }
        puVar5 = &UNK_10b21f6f0;
        auVar31 = FUN_107c03c58(uVar9,uVar11);
        plVar4 = auVar31._8_8_;
        puVar3 = auVar31._0_8_;
        lVar13 = plVar4[1];
        lVar12 = plVar4[2];
        if (lVar12 != 0) {
          lVar14 = 0;
          uVar11 = 0;
          lVar15 = lVar12 << 4;
          plVar10 = (long *)(lVar13 + 8);
          do {
            if ((*plVar10 == lVar6) && (iVar2 = _memcmp(plVar10[-1],puVar5,lVar6), iVar2 == 0)) {
              if (uVar11 < (ulong)plVar4[5]) {
                puVar7 = (undefined8 *)(plVar4[4] + lVar14);
                uVar8 = *param_5;
                uVar20 = param_5[3];
                uVar16 = param_5[2];
                uVar28 = puVar7[1];
                uVar24 = *puVar7;
                uVar30 = puVar7[3];
                uVar29 = puVar7[2];
                puVar7[1] = param_5[1];
                *puVar7 = uVar8;
                puVar7[3] = uVar20;
                puVar7[2] = uVar16;
                param_5[1] = uVar28;
                *param_5 = uVar24;
                param_5[3] = uVar30;
                param_5[2] = uVar29;
                uVar8 = param_5[4];
                uVar20 = param_5[7];
                uVar16 = param_5[6];
                uVar28 = puVar7[5];
                uVar24 = puVar7[4];
                uVar30 = puVar7[7];
                uVar29 = puVar7[6];
                puVar7[5] = param_5[5];
                puVar7[4] = uVar8;
                puVar7[7] = uVar20;
                puVar7[6] = uVar16;
                param_5[5] = uVar28;
                param_5[4] = uVar24;
                param_5[7] = uVar30;
                param_5[6] = uVar29;
                uVar8 = param_5[8];
                uVar20 = param_5[0xb];
                uVar16 = param_5[10];
                uVar28 = puVar7[9];
                uVar24 = puVar7[8];
                uVar30 = puVar7[0xb];
                uVar29 = puVar7[10];
                puVar7[9] = param_5[9];
                puVar7[8] = uVar8;
                puVar7[0xb] = uVar20;
                puVar7[10] = uVar16;
                param_5[9] = uVar28;
                param_5[8] = uVar24;
                param_5[0xb] = uVar30;
                param_5[10] = uVar29;
                uVar8 = puVar7[0xc];
                puVar7[0xc] = param_5[0xc];
                param_5[0xc] = uVar8;
                uVar20 = param_5[9];
                uVar16 = param_5[8];
                uVar28 = param_5[0xb];
                uVar24 = param_5[10];
                puVar3[0xc] = uVar8;
                puVar3[9] = uVar20;
                puVar3[8] = uVar16;
                puVar3[0xb] = uVar28;
                puVar3[10] = uVar24;
                uVar16 = param_5[1];
                uVar8 = *param_5;
                uVar24 = param_5[3];
                uVar20 = param_5[2];
                uVar30 = param_5[4];
                uVar29 = param_5[7];
                uVar28 = param_5[6];
                puVar3[5] = param_5[5];
                puVar3[4] = uVar30;
                puVar3[7] = uVar29;
                puVar3[6] = uVar28;
                puVar3[1] = uVar16;
                *puVar3 = uVar8;
                puVar3[3] = uVar24;
                puVar3[2] = uVar20;
                return;
              }
              FUN_107c05cd0(uVar11,plVar4[5],&UNK_10b21f738);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1007298f4);
              (*pcVar1)();
            }
            lVar14 = lVar14 + 0x68;
            plVar10 = plVar10 + 2;
            uVar11 = uVar11 + 1;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != 0);
        }
        if (lVar12 == *plVar4) {
          FUN_107c0418c(plVar4);
          lVar13 = plVar4[1];
        }
        puVar7 = (undefined8 *)(lVar13 + lVar12 * 0x10);
        *puVar7 = puVar5;
        puVar7[1] = lVar6;
        plVar4[2] = lVar12 + 1;
        lVar13 = plVar4[5];
        if (lVar13 == plVar4[3]) {
          FUN_107c041a4();
        }
        puVar7 = (undefined8 *)(plVar4[4] + lVar13 * 0x68);
        uVar8 = param_5[8];
        uVar20 = param_5[0xb];
        uVar16 = param_5[10];
        puVar7[9] = param_5[9];
        puVar7[8] = uVar8;
        puVar7[0xb] = uVar20;
        puVar7[10] = uVar16;
        puVar7[0xc] = param_5[0xc];
        uVar8 = *param_5;
        uVar20 = param_5[3];
        uVar16 = param_5[2];
        puVar7[1] = param_5[1];
        *puVar7 = uVar8;
        puVar7[3] = uVar20;
        puVar7[2] = uVar16;
        uVar20 = param_5[4];
        uVar16 = param_5[7];
        uVar8 = param_5[6];
        puVar7[5] = param_5[5];
        puVar7[4] = uVar20;
        puVar7[7] = uVar16;
        puVar7[6] = uVar8;
        plVar4[5] = lVar13 + 1;
        *puVar3 = 2;
        return;
      }
      lVar13 = lVar13 + 0x10;
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x68;
    } while (uVar11 * 0x10 - lVar13 != 0);
  }
  lVar13 = 2;
LAB_1007296f8:
  param_1[2] = lVar13;
  return;
}

