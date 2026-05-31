
/* WARNING: Type propagation algorithm not settling */

void __ZN16codex_app_server18request_processors16thread_processor21paginate_thread_turns17h864fb6dcc9de855bE
               (undefined8 *param_1,long *******param_2,long *******param_3,long *******param_4,
               ulong param_5,ulong param_6,int param_7)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  long *******ppppppplVar5;
  code *pcVar6;
  int iVar7;
  long *******ppppppplVar8;
  undefined8 uVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *******ppppppplVar15;
  long *******unaff_x19;
  undefined *puVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long ******pppppplVar19;
  long lVar20;
  long *******unaff_x22;
  long *******unaff_x23;
  long lVar21;
  long ******pppppplVar22;
  long *******ppppppplVar23;
  long *****ppppplVar24;
  long *******ppppppplVar25;
  long ******pppppplVar26;
  long ******pppppplVar27;
  long ******pppppplVar28;
  long ******pppppplVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long ******pppppplVar32;
  long ******pppppplVar33;
  long ******pppppplVar34;
  long ******pppppplVar35;
  long ******pppppplVar36;
  long ******pppppplVar37;
  long ******pppppplVar38;
  long ******pppppplVar39;
  long ******pppppplVar40;
  long ******pppppplVar41;
  long ******pppppplVar42;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c0;
  undefined8 uStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  undefined1 uStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
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
  undefined1 auStack_69 [9];
  
  ppppppplVar17 = (long *******)param_2[2];
  if (ppppppplVar17 != (long *******)0x0) {
    ppppppplStack_1d8 = (long *******)CONCAT44(ppppppplStack_1d8._4_4_,param_7);
    if (param_3 != (long *******)0x0) {
      ppppppplStack_e8 = (long *******)0x0;
      ppppppplStack_e0 = (long *******)0x0;
      ppppppplStack_110 = (long *******)0x0;
      ppppppplStack_108 = (long *******)0x1;
      ppppppplStack_100 = (long *******)0x0;
      lStack_c8 = CONCAT71(lStack_c8._1_7_,0x80);
      ppppppplStack_148 = param_3;
      ppppppplStack_140 = param_4;
      ppppppplStack_f8 = param_3;
      ppppppplStack_f0 = param_4;
      ppppppplStack_d8 = param_3;
      ppppppplStack_d0 = param_4;
      if (param_4 != (long *******)0x0) {
        do {
          bVar3 = *(byte *)((long)param_3 + (long)ppppppplStack_e8);
          if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            if (bVar3 != 0x5b) {
              if (bVar3 != 0x7b) {
                ppppppplStack_1d0 =
                     (long *******)FUN_10889a27c(&ppppppplStack_110,auStack_69,&UNK_10b26a3f0);
                goto LAB_1018930d8;
              }
              lStack_c8 = CONCAT71(lStack_c8._1_7_,0x7f);
              ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
              ppppppplStack_138 = (long *******)&ppppppplStack_110;
              ppppppplStack_1c0 = (long *******)0x2;
              uStack_130 = 1;
              ppppppplVar15 = (long *******)0x8000000000000000;
              ppppppplVar8 = param_2;
              goto LAB_101892bc4;
            }
            lStack_c8 = CONCAT71(lStack_c8._1_7_,0x7f);
            ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
            ppppppplStack_128 = (long *******)&ppppppplStack_110;
            ppppppplStack_120 = (long *******)CONCAT71(ppppppplStack_120._1_7_,1);
            FUN_1019e3854(&uStack_1b0,&ppppppplStack_128);
            ppppppplVar23 = param_2;
            if ((char)uStack_1b0 == '\x01') {
              ppppppplVar15 = (long *******)0x8000000000000000;
              ppppppplStack_1d0 = ppppppplStack_1a8;
            }
            else if (uStack_1b0._1_1_ == '\x01') {
              FUN_101821454(&uStack_1b0,ppppppplStack_128);
              ppppppplVar23 = ppppppplStack_1a0;
              ppppppplStack_1d0 = ppppppplStack_1a8;
              ppppppplVar15 = uStack_1b0;
              if (uStack_1b0 == (long *******)0x8000000000000000) {
                ppppppplVar15 = (long *******)0x8000000000000000;
                ppppppplVar23 = param_2;
              }
              else {
                FUN_1019e3854(&uStack_1b0,&ppppppplStack_128);
                ppppppplVar8 = ppppppplStack_1a8;
                if ((char)uStack_1b0 != '\x01') {
                  if (uStack_1b0._1_1_ == '\x01') {
                    FUN_101a2e314(&uStack_1b0,ppppppplStack_128);
                    ppppppplVar8 = ppppppplStack_1a8;
                    if ((char)uStack_1b0 != '\x01') {
                      ppppppplStack_1c0 = (long *******)((ulong)uStack_1b0 >> 8 & 0xff);
                      goto LAB_101892fc0;
                    }
                  }
                  else {
                    ppppppplVar8 = (long *******)FUN_108880da4(1,&UNK_10b268af8,&UNK_10b25d520);
                  }
                }
                if (ppppppplVar15 != (long *******)0x0) {
                  _free(ppppppplStack_1d0);
                }
                ppppppplVar15 = (long *******)0x8000000000000000;
                ppppppplStack_1d0 = ppppppplVar8;
              }
            }
            else {
              ppppppplStack_1d0 = (long *******)FUN_108880da4(0,&UNK_10b268af8,&UNK_10b25d520);
              ppppppplVar15 = (long *******)0x8000000000000000;
            }
LAB_101892fc0:
            lStack_c8 = CONCAT71(lStack_c8._1_7_,(char)lStack_c8 + '\x01');
            ppppppplVar8 = (long *******)FUN_101839588(&ppppppplStack_110);
            unaff_x22 = ppppppplStack_1d0;
            if (ppppppplVar15 != (long *******)0x8000000000000000) goto LAB_101893014;
            if (ppppppplVar8 == (long *******)0x0) goto LAB_1018930d8;
            pppppplVar19 = *ppppppplVar8;
            if (pppppplVar19 != (long ******)0x1) goto LAB_101892ff4;
            FUN_10194d0ac(ppppppplVar8 + 1);
            goto LAB_1018930c8;
          }
          ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
        } while (param_4 != ppppppplStack_e8);
      }
      uStack_1b0 = (long *******)0x5;
      ppppppplVar8 = (long *******)FUN_10889a21c(&ppppppplStack_110,&uStack_1b0);
      goto LAB_1018930e4;
    }
LAB_10189317c:
    ppppppplVar15 = (long *******)(param_6 & 0xffffffff);
    if ((param_5 & 1) == 0) {
      ppppppplVar15 = (long *******)0x19;
    }
    ppppppplVar11 = ppppppplVar15;
    if ((long *******)0x63 < ppppppplVar15) {
      ppppppplVar11 = (long *******)0x64;
    }
    if (ppppppplVar15 == (long *******)0x0) {
      ppppppplVar11 = (long *******)0x1;
    }
LAB_1018931a0:
    pppppplVar22 = param_2[1];
    ppppppplStack_1d0 = (long *******)0x0;
    bVar4 = true;
LAB_1018931bc:
    pppppplVar19 = *param_2;
    if (ppppppplVar17 < (long *******)0xc30c30c30c30c4) {
      ppppppplVar15 = (long *******)((long)ppppppplVar17 * 0xa8);
      ppppppplVar8 = (long *******)_malloc(ppppppplVar15);
      if (ppppppplVar8 != (long *******)0x0) {
        lVar12 = 0;
        ppppppplVar15 = (long *******)0x0;
        lVar21 = -1;
        do {
          lVar20 = lVar21;
          puVar13 = (undefined8 *)((long)pppppplVar22 + lVar12);
          lStack_a8 = puVar13[0xd];
          lStack_b0 = puVar13[0xc];
          lStack_98 = puVar13[0xf];
          lStack_a0 = puVar13[0xe];
          lStack_88 = puVar13[0x11];
          lStack_90 = puVar13[0x10];
          lStack_78 = puVar13[0x13];
          lStack_80 = puVar13[0x12];
          ppppppplStack_e8 = (long *******)puVar13[5];
          ppppppplStack_f0 = (long *******)puVar13[4];
          ppppppplStack_d8 = (long *******)puVar13[7];
          ppppppplStack_e0 = (long *******)puVar13[6];
          lStack_c8 = puVar13[9];
          ppppppplStack_d0 = (long *******)puVar13[8];
          lStack_b8 = puVar13[0xb];
          lStack_c0 = puVar13[10];
          ppppppplStack_108 = (long *******)puVar13[1];
          ppppppplStack_110 = (long *******)*puVar13;
          ppppppplStack_f8 = (long *******)puVar13[3];
          ppppppplStack_100 = (long *******)puVar13[2];
          lVar21 = lVar20 + 1;
          plVar2 = (long *)((long)ppppppplVar8 + (long)ppppppplVar15);
          *plVar2 = lVar21;
          plVar2[6] = (long)ppppppplStack_e8;
          plVar2[5] = (long)ppppppplStack_f0;
          plVar2[0xe] = lStack_a8;
          plVar2[0xd] = lStack_b0;
          plVar2[0xc] = lStack_b8;
          plVar2[0xb] = lStack_c0;
          plVar2[4] = (long)ppppppplStack_f8;
          plVar2[3] = (long)ppppppplStack_100;
          plVar2[10] = lStack_c8;
          plVar2[9] = (long)ppppppplStack_d0;
          plVar2[8] = (long)ppppppplStack_d8;
          plVar2[7] = (long)ppppppplStack_e0;
          plVar2[2] = (long)ppppppplStack_108;
          plVar2[1] = (long)ppppppplStack_110;
          plVar2[0x14] = lStack_78;
          plVar2[0x13] = lStack_80;
          plVar2[0x12] = lStack_88;
          plVar2[0x11] = lStack_90;
          plVar2[0x10] = lStack_98;
          plVar2[0xf] = lStack_a0;
          ppppppplVar15 = ppppppplVar15 + 0x15;
          lVar12 = lVar12 + 0xa0;
        } while ((long)ppppppplVar17 * 0xa0 != lVar12);
        ppppppplVar23 = (long *******)(lVar20 + 2);
        if (pppppplVar19 != (long ******)0x0) {
          _free(pppppplVar22);
        }
        ppppppplStack_128 = ppppppplVar17;
        ppppppplStack_120 = ppppppplVar8;
        ppppppplStack_118 = ppppppplVar23;
        if (param_7 == 0) {
          if (!bVar4) {
            lVar12 = 0;
            ppppppplVar23 = ppppppplVar8;
LAB_1018933e4:
            ppppppplVar10 = ppppppplVar23 + 0x15;
            bVar4 = unaff_x19 <= *ppppppplVar23;
            if (((ulong)unaff_x23 & 1) == 0) {
              bVar4 = unaff_x19 < *ppppppplVar23;
            }
            lVar1 = lVar12 + 1;
            if (bVar4) goto code_r0x000101893404;
            FUN_101962f78(ppppppplVar23 + 1);
            if (lVar21 != lVar12) {
              lVar12 = lVar21 - lVar12;
              lVar20 = 1;
              do {
                bVar4 = unaff_x19 <= *ppppppplVar10;
                if (((ulong)unaff_x23 & 1) == 0) {
                  bVar4 = unaff_x19 < *ppppppplVar10;
                }
                if (bVar4) {
                  ppppppplVar23 = ppppppplVar10 + lVar20 * -0x15;
                  pppppplVar22 = ppppppplVar10[1];
                  pppppplVar19 = *ppppppplVar10;
                  pppppplVar26 = ppppppplVar10[2];
                  pppppplVar28 = ppppppplVar10[5];
                  pppppplVar27 = ppppppplVar10[4];
                  ppppppplVar23[3] = ppppppplVar10[3];
                  ppppppplVar23[2] = pppppplVar26;
                  ppppppplVar23[5] = pppppplVar28;
                  ppppppplVar23[4] = pppppplVar27;
                  ppppppplVar23[1] = pppppplVar22;
                  *ppppppplVar23 = pppppplVar19;
                  pppppplVar22 = ppppppplVar10[7];
                  pppppplVar19 = ppppppplVar10[6];
                  pppppplVar27 = ppppppplVar10[9];
                  pppppplVar26 = ppppppplVar10[8];
                  pppppplVar28 = ppppppplVar10[10];
                  pppppplVar30 = ppppppplVar10[0xd];
                  pppppplVar29 = ppppppplVar10[0xc];
                  ppppppplVar23[0xb] = ppppppplVar10[0xb];
                  ppppppplVar23[10] = pppppplVar28;
                  ppppppplVar23[0xd] = pppppplVar30;
                  ppppppplVar23[0xc] = pppppplVar29;
                  ppppppplVar23[7] = pppppplVar22;
                  ppppppplVar23[6] = pppppplVar19;
                  ppppppplVar23[9] = pppppplVar27;
                  ppppppplVar23[8] = pppppplVar26;
                  pppppplVar22 = ppppppplVar10[0xf];
                  pppppplVar19 = ppppppplVar10[0xe];
                  pppppplVar27 = ppppppplVar10[0x11];
                  pppppplVar26 = ppppppplVar10[0x10];
                  pppppplVar29 = ppppppplVar10[0x13];
                  pppppplVar28 = ppppppplVar10[0x12];
                  ppppppplVar23[0x14] = ppppppplVar10[0x14];
                  ppppppplVar23[0x11] = pppppplVar27;
                  ppppppplVar23[0x10] = pppppplVar26;
                  ppppppplVar23[0x13] = pppppplVar29;
                  ppppppplVar23[0x12] = pppppplVar28;
                  ppppppplVar23[0xf] = pppppplVar22;
                  ppppppplVar23[0xe] = pppppplVar19;
                }
                else {
                  lVar20 = lVar20 + 1;
                  FUN_101962f78(ppppppplVar10 + 1);
                }
                ppppppplVar10 = ppppppplVar10 + 0x15;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              goto LAB_101893674;
            }
            goto LAB_101893670;
          }
        }
        else {
          if (lVar21 != 0) {
            puVar13 = (undefined8 *)
                      ((undefined *)((long)ppppppplVar8 + (long)ppppppplVar15) + -0x48);
            uVar14 = (ulong)ppppppplVar23 >> 1;
            ppppppplVar23 = ppppppplVar8 + 10;
            do {
              pppppplVar22 = ppppppplVar23[-9];
              pppppplVar19 = ppppppplVar23[-10];
              pppppplVar27 = ppppppplVar23[-7];
              pppppplVar26 = ppppppplVar23[-8];
              pppppplVar28 = (long ******)puVar13[-0xc];
              pppppplVar30 = (long ******)puVar13[-9];
              pppppplVar29 = (long ******)puVar13[-10];
              ppppppplVar23[-9] = (long ******)puVar13[-0xb];
              ppppppplVar23[-10] = pppppplVar28;
              ppppppplVar23[-7] = pppppplVar30;
              ppppppplVar23[-8] = pppppplVar29;
              puVar13[-0xb] = pppppplVar22;
              puVar13[-0xc] = pppppplVar19;
              puVar13[-9] = pppppplVar27;
              puVar13[-10] = pppppplVar26;
              pppppplVar22 = ppppppplVar23[-5];
              pppppplVar19 = ppppppplVar23[-6];
              pppppplVar27 = ppppppplVar23[-3];
              pppppplVar26 = ppppppplVar23[-4];
              pppppplVar28 = (long ******)puVar13[-8];
              pppppplVar30 = (long ******)puVar13[-5];
              pppppplVar29 = (long ******)puVar13[-6];
              ppppppplVar23[-5] = (long ******)puVar13[-7];
              ppppppplVar23[-6] = pppppplVar28;
              ppppppplVar23[-3] = pppppplVar30;
              ppppppplVar23[-4] = pppppplVar29;
              puVar13[-7] = pppppplVar22;
              puVar13[-8] = pppppplVar19;
              puVar13[-5] = pppppplVar27;
              puVar13[-6] = pppppplVar26;
              pppppplVar22 = ppppppplVar23[-1];
              pppppplVar19 = ppppppplVar23[-2];
              pppppplVar27 = ppppppplVar23[1];
              pppppplVar26 = *ppppppplVar23;
              pppppplVar28 = (long ******)puVar13[-4];
              pppppplVar30 = (long ******)puVar13[-1];
              pppppplVar29 = (long ******)puVar13[-2];
              ppppppplVar23[-1] = (long ******)puVar13[-3];
              ppppppplVar23[-2] = pppppplVar28;
              ppppppplVar23[1] = pppppplVar30;
              *ppppppplVar23 = pppppplVar29;
              puVar13[-3] = pppppplVar22;
              puVar13[-4] = pppppplVar19;
              puVar13[-1] = pppppplVar27;
              puVar13[-2] = pppppplVar26;
              pppppplVar22 = ppppppplVar23[3];
              pppppplVar19 = ppppppplVar23[2];
              pppppplVar27 = ppppppplVar23[5];
              pppppplVar26 = ppppppplVar23[4];
              pppppplVar28 = (long ******)*puVar13;
              pppppplVar30 = (long ******)puVar13[3];
              pppppplVar29 = (long ******)puVar13[2];
              ppppppplVar23[3] = (long ******)puVar13[1];
              ppppppplVar23[2] = pppppplVar28;
              ppppppplVar23[5] = pppppplVar30;
              ppppppplVar23[4] = pppppplVar29;
              puVar13[1] = pppppplVar22;
              *puVar13 = pppppplVar19;
              puVar13[3] = pppppplVar27;
              puVar13[2] = pppppplVar26;
              pppppplVar19 = ppppppplVar23[6];
              pppppplVar26 = ppppppplVar23[9];
              pppppplVar22 = ppppppplVar23[8];
              pppppplVar28 = (long ******)puVar13[5];
              pppppplVar27 = (long ******)puVar13[4];
              pppppplVar30 = (long ******)puVar13[7];
              pppppplVar29 = (long ******)puVar13[6];
              puVar13[5] = ppppppplVar23[7];
              puVar13[4] = pppppplVar19;
              puVar13[7] = pppppplVar26;
              puVar13[6] = pppppplVar22;
              pppppplVar19 = (long ******)puVar13[8];
              puVar13[8] = ppppppplVar23[10];
              puVar13 = puVar13 + -0x15;
              ppppppplVar23[7] = pppppplVar28;
              ppppppplVar23[6] = pppppplVar27;
              ppppppplVar23[9] = pppppplVar30;
              ppppppplVar23[8] = pppppplVar29;
              ppppppplVar23[10] = pppppplVar19;
              ppppppplVar23 = ppppppplVar23 + 0x15;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (!bVar4) {
            lVar12 = 0;
            ppppppplVar23 = ppppppplVar8;
LAB_101893380:
            ppppppplVar10 = ppppppplVar23 + 0x15;
            bVar4 = *ppppppplVar23 <= unaff_x19;
            if (((ulong)unaff_x23 & 1) == 0) {
              bVar4 = *ppppppplVar23 < unaff_x19;
            }
            lVar1 = lVar12 + 1;
            if (bVar4) goto code_r0x0001018933a0;
            FUN_101962f78(ppppppplVar23 + 1);
            if (lVar21 == lVar12) {
LAB_101893670:
              lVar20 = 1;
            }
            else {
              lVar12 = lVar21 - lVar12;
              lVar20 = 1;
              do {
                bVar4 = *ppppppplVar10 <= unaff_x19;
                if (((ulong)unaff_x23 & 1) == 0) {
                  bVar4 = *ppppppplVar10 < unaff_x19;
                }
                if (bVar4) {
                  ppppppplVar23 = ppppppplVar10 + lVar20 * -0x15;
                  pppppplVar22 = ppppppplVar10[1];
                  pppppplVar19 = *ppppppplVar10;
                  pppppplVar26 = ppppppplVar10[2];
                  pppppplVar28 = ppppppplVar10[5];
                  pppppplVar27 = ppppppplVar10[4];
                  ppppppplVar23[3] = ppppppplVar10[3];
                  ppppppplVar23[2] = pppppplVar26;
                  ppppppplVar23[5] = pppppplVar28;
                  ppppppplVar23[4] = pppppplVar27;
                  ppppppplVar23[1] = pppppplVar22;
                  *ppppppplVar23 = pppppplVar19;
                  pppppplVar22 = ppppppplVar10[7];
                  pppppplVar19 = ppppppplVar10[6];
                  pppppplVar27 = ppppppplVar10[9];
                  pppppplVar26 = ppppppplVar10[8];
                  pppppplVar28 = ppppppplVar10[10];
                  pppppplVar30 = ppppppplVar10[0xd];
                  pppppplVar29 = ppppppplVar10[0xc];
                  ppppppplVar23[0xb] = ppppppplVar10[0xb];
                  ppppppplVar23[10] = pppppplVar28;
                  ppppppplVar23[0xd] = pppppplVar30;
                  ppppppplVar23[0xc] = pppppplVar29;
                  ppppppplVar23[7] = pppppplVar22;
                  ppppppplVar23[6] = pppppplVar19;
                  ppppppplVar23[9] = pppppplVar27;
                  ppppppplVar23[8] = pppppplVar26;
                  pppppplVar22 = ppppppplVar10[0xf];
                  pppppplVar19 = ppppppplVar10[0xe];
                  pppppplVar27 = ppppppplVar10[0x11];
                  pppppplVar26 = ppppppplVar10[0x10];
                  pppppplVar29 = ppppppplVar10[0x13];
                  pppppplVar28 = ppppppplVar10[0x12];
                  ppppppplVar23[0x14] = ppppppplVar10[0x14];
                  ppppppplVar23[0x11] = pppppplVar27;
                  ppppppplVar23[0x10] = pppppplVar26;
                  ppppppplVar23[0x13] = pppppplVar29;
                  ppppppplVar23[0x12] = pppppplVar28;
                  ppppppplVar23[0xf] = pppppplVar22;
                  ppppppplVar23[0xe] = pppppplVar19;
                }
                else {
                  lVar20 = lVar20 + 1;
                  FUN_101962f78(ppppppplVar10 + 1);
                }
                ppppppplVar10 = ppppppplVar10 + 0x15;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            goto LAB_101893674;
          }
        }
        goto LAB_101893680;
      }
      uVar9 = 8;
    }
    else {
      uVar9 = 0;
      ppppppplVar15 = ppppppplVar11;
    }
    func_0x0001087c9084(uVar9,ppppppplVar15);
    goto LAB_101893b74;
  }
  param_1[2] = 8;
  param_1[4] = 0x8000000000000000;
  param_1[3] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[1] = 0;
  *param_1 = 0x8000000000000000;
  goto LAB_101893564;
LAB_101892bc4:
  ppppppplVar23 = ppppppplVar8;
  FUN_1019e3464(&uStack_1b0,&ppppppplStack_138);
  ppppppplVar10 = ppppppplStack_138;
  ppppppplVar11 = ppppppplStack_1a8;
  if ((char)uStack_1b0 == '\x01') goto LAB_101892e20;
  if (uStack_1b0._1_1_ != '\x01') {
    if (ppppppplVar15 == (long *******)0x8000000000000000) {
      ppppppplStack_128 = (long *******)&UNK_108cecafa;
      ppppppplStack_120 = (long *******)0x6;
      uStack_1b0 = (long *******)&ppppppplStack_128;
      ppppppplStack_1a8 = (long *******)&DAT_10192d9a4;
      ppppppplVar11 = (long *******)FUN_1088bbbb8(s_missing_field_____108ac28f7,&uStack_1b0);
    }
    else {
      if ((int)ppppppplStack_1c0 != 2) goto LAB_101892ea4;
      ppppppplStack_128 = (long *******)&UNK_108cee498;
      ppppppplStack_120 = (long *******)0xd;
      uStack_1b0 = (long *******)&ppppppplStack_128;
      ppppppplStack_1a8 = (long *******)&DAT_10192d9a4;
      ppppppplVar11 = (long *******)FUN_1088bbbb8(s_missing_field_____108ac28f7,&uStack_1b0);
joined_r0x000101892f50:
      if (ppppppplVar15 != (long *******)0x0) {
        _free(ppppppplStack_1d0);
      }
    }
    goto LAB_101892ea0;
  }
  ppppppplStack_138[5] = (long ******)((long)ppppppplStack_138[5] + 1);
  ppppppplStack_138[2] = (long ******)0x0;
  __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
            (&uStack_1b0,ppppppplStack_138 + 3,ppppppplStack_138);
  ppppppplVar11 = ppppppplStack_1a8;
  if (uStack_1b0 != (long *******)0x2) {
    ppppppplVar8 = ppppppplVar23;
    if (ppppppplStack_1a0 != (long *******)0xd) {
      if ((ppppppplStack_1a0 != (long *******)0x6) ||
         (*(int *)ppppppplStack_1a8 != 0x6e727574 ||
          *(short *)((long)ppppppplStack_1a8 + 4) != 0x6449)) goto LAB_101892cc8;
      if (ppppppplVar15 != (long *******)0x8000000000000000) {
        ppppppplStack_128 = (long *******)&UNK_108cecafa;
        ppppppplStack_120 = (long *******)0x6;
        uStack_1b0 = (long *******)&ppppppplStack_128;
        ppppppplStack_1a8 = (long *******)&DAT_10192d9a4;
        ppppppplVar11 = (long *******)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&uStack_1b0);
        goto LAB_101892e20;
      }
      pppppplVar19 = ppppppplVar10[5];
      if (ppppppplVar10[4] <= pppppplVar19) {
LAB_101893a44:
        uStack_1b0 = (long *******)0x3;
        ppppppplVar11 = (long *******)FUN_10889a21c(ppppppplVar10,&uStack_1b0);
        goto LAB_101892ea0;
      }
      while( true ) {
        bVar3 = *(byte *)((long)ppppppplVar10[3] + (long)pppppplVar19);
        if (0x3a < bVar3) goto LAB_101893b18;
        if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
        pppppplVar19 = (long ******)((long)pppppplVar19 + 1);
        ppppppplVar10[5] = pppppplVar19;
        if (ppppppplVar10[4] == pppppplVar19) goto LAB_101893a44;
      }
      if ((ulong)bVar3 != 0x3a) {
LAB_101893b18:
        uStack_1b0 = (long *******)0x6;
        ppppppplVar11 = (long *******)FUN_10889a21c(ppppppplVar10,&uStack_1b0);
        goto LAB_101892ea0;
      }
      ppppppplVar10[5] = (long ******)((long)pppppplVar19 + 1);
      FUN_101821454(&ppppppplStack_128,ppppppplVar10);
      ppppppplStack_1d0 = ppppppplStack_120;
      ppppppplVar15 = ppppppplStack_128;
      ppppppplVar11 = ppppppplStack_120;
      ppppppplVar8 = ppppppplStack_118;
      if (ppppppplStack_128 == (long *******)0x8000000000000000) goto LAB_101892ea0;
      goto LAB_101892bc4;
    }
    if (*ppppppplStack_1a8 == (long ******)0x416564756c636e69 &&
        *(long *)((long)ppppppplStack_1a8 + 5) == 0x726f68636e416564) {
      if ((int)ppppppplStack_1c0 == 2) {
        pppppplVar19 = ppppppplVar10[5];
        if (pppppplVar19 < ppppppplVar10[4]) {
          while( true ) {
            bVar3 = *(byte *)((long)ppppppplVar10[3] + (long)pppppplVar19);
            if (0x3a < bVar3) goto LAB_101893b34;
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
            pppppplVar19 = (long ******)((long)pppppplVar19 + 1);
            ppppppplVar10[5] = pppppplVar19;
            if (ppppppplVar10[4] == pppppplVar19) goto LAB_101893a60;
          }
          if ((ulong)bVar3 == 0x3a) {
            ppppppplVar10[5] = (long ******)((long)pppppplVar19 + 1);
            FUN_101a2e314(&ppppppplStack_128,ppppppplVar10);
            ppppppplVar11 = ppppppplStack_120;
            if ((char)ppppppplStack_128 == '\x01') goto LAB_101892e20;
            ppppppplStack_1c0 = (long *******)((ulong)ppppppplStack_128 >> 8 & 0xff);
            goto LAB_101892bc4;
          }
LAB_101893b34:
          uStack_1b0 = (long *******)0x6;
          ppppppplVar11 = (long *******)FUN_10889a21c(ppppppplVar10,&uStack_1b0);
        }
        else {
LAB_101893a60:
          uStack_1b0 = (long *******)0x3;
          ppppppplVar11 = (long *******)FUN_10889a21c(ppppppplVar10,&uStack_1b0);
        }
      }
      else {
        ppppppplStack_128 = (long *******)&UNK_108cee498;
        ppppppplStack_120 = (long *******)0xd;
        uStack_1b0 = (long *******)&ppppppplStack_128;
        ppppppplStack_1a8 = (long *******)&DAT_10192d9a4;
        ppppppplVar11 = (long *******)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&uStack_1b0);
      }
    }
    else {
LAB_101892cc8:
      ppppppplVar11 = (long *******)FUN_1018300f4(ppppppplVar10);
      if (ppppppplVar11 == (long *******)0x0) goto LAB_101892bc4;
    }
  }
LAB_101892e20:
  ppppppplVar15 = (long *******)((ulong)ppppppplVar15 & 0x7fffffffffffffff);
  goto joined_r0x000101892f50;
code_r0x000101893404:
  lVar12 = lVar1;
  ppppppplVar23 = ppppppplVar10;
  if (lVar20 + 2 == lVar1) goto LAB_101893414;
  goto LAB_1018933e4;
code_r0x0001018933a0:
  lVar12 = lVar1;
  ppppppplVar23 = ppppppplVar10;
  if (lVar20 + 2 == lVar1) goto LAB_101893414;
  goto LAB_101893380;
LAB_101893414:
  lVar20 = 0;
LAB_101893674:
  ppppppplStack_118 = (long *******)((lVar21 - lVar20) + 1);
LAB_101893680:
  ppppppplVar23 = ppppppplStack_118;
  ppppppplVar10 = ppppppplStack_118;
  if (ppppppplVar11 <= ppppppplStack_118) {
    puVar16 = (undefined *)((long)ppppppplStack_118 + (1 - (long)ppppppplVar11));
    ppppppplVar10 = ppppppplVar8 + (long)ppppppplVar11 * 0x15 + 1;
    ppppppplStack_118 = ppppppplVar11;
    while (puVar16 = puVar16 + -1, puVar16 != (undefined *)0x0) {
      FUN_101962f78(ppppppplVar10);
      ppppppplVar10 = ppppppplVar10 + 0x15;
    }
    unaff_x19 = (long *******)0x0;
    ppppppplVar10 = ppppppplVar11;
  }
  if (ppppppplVar10 == (long *******)0x0) {
    ppppppplStack_1c0 = (long *******)0x8000000000000000;
joined_r0x000101893794:
    ppppppplVar25 = (long *******)0x8000000000000000;
    ppppppplStack_1e0 = ppppppplVar11;
    ppppppplVar18 = ppppppplStack_1d8;
    if (((ppppppplVar11 < ppppppplVar23) &&
        (ppppppplVar25 = (long *******)0x8000000000000000, ppppppplVar10 != (long *******)0x0)) &&
       (ppppppplVar23 = ppppppplVar8 + (long)ppppppplVar10 * 0x15,
       ppppppplVar23 != (long *******)0xa8)) {
      FUN_1018989f4(&ppppppplStack_110,ppppppplVar23[-0xd],ppppppplVar23[-0xc],0);
      ppppppplStack_1e0 = ppppppplStack_f8;
      lStack_188 = lStack_c8;
      ppppppplStack_190 = ppppppplStack_d0;
      lStack_178 = lStack_b8;
      lStack_180 = lStack_c0;
      lStack_170 = lStack_b0;
      ppppppplStack_1a8 = ppppppplStack_e8;
      uStack_1b0 = ppppppplStack_f0;
      ppppppplStack_198 = ppppppplStack_d8;
      ppppppplStack_1a0 = ppppppplStack_e0;
      ppppppplVar25 = ppppppplStack_108;
      ppppppplVar18 = ppppppplStack_100;
      if (ppppppplStack_110 != (long *******)0x8000000000000000) {
        if (ppppppplStack_110 != (long *******)0x8000000000000001) {
          param_1[9] = lStack_c8;
          param_1[8] = ppppppplStack_d0;
          param_1[0xb] = lStack_b8;
          param_1[10] = lStack_c0;
          param_1[0xc] = lStack_b0;
          param_1[5] = ppppppplStack_e8;
          param_1[4] = ppppppplStack_f0;
          param_1[7] = ppppppplStack_d8;
          param_1[6] = ppppppplStack_e0;
          *param_1 = ppppppplStack_110;
          param_1[1] = ppppppplStack_108;
          param_1[2] = ppppppplStack_100;
          param_1[3] = ppppppplStack_f8;
          if (((ulong)ppppppplStack_1c0 & 0x7fffffffffffffff) != 0) {
            _free(ppppppplVar15);
          }
          goto LAB_101893734;
        }
        ppppppplVar25 = (long *******)0x8000000000000000;
        ppppppplStack_1e0 = ppppppplVar11;
        ppppppplVar18 = ppppppplStack_1d8;
      }
    }
    ppppppplStack_1d8 = ppppppplVar18;
    uVar14 = (ulong)((long)ppppppplVar17 * 0xa8) / 0xa0;
    ppppppplVar11 = (long *******)((long)ppppppplVar10 * 0xa8);
    ppppppplVar23 = ppppppplVar8;
    ppppppplVar18 = ppppppplVar8;
    ppppppplVar5 = ppppppplVar10;
    while (ppppppplVar5 != (long *******)0x0) {
      pppppplVar22 = ppppppplVar23[2];
      pppppplVar19 = ppppppplVar23[1];
      pppppplVar27 = ppppppplVar23[4];
      pppppplVar26 = ppppppplVar23[3];
      pppppplVar29 = ppppppplVar23[6];
      pppppplVar28 = ppppppplVar23[5];
      pppppplVar31 = ppppppplVar23[8];
      pppppplVar30 = ppppppplVar23[7];
      pppppplVar33 = ppppppplVar23[10];
      pppppplVar32 = ppppppplVar23[9];
      pppppplVar35 = ppppppplVar23[0xc];
      pppppplVar34 = ppppppplVar23[0xb];
      pppppplVar37 = ppppppplVar23[0xe];
      pppppplVar36 = ppppppplVar23[0xd];
      pppppplVar39 = ppppppplVar23[0x10];
      pppppplVar38 = ppppppplVar23[0xf];
      pppppplVar40 = ppppppplVar23[0x11];
      pppppplVar42 = ppppppplVar23[0x14];
      pppppplVar41 = ppppppplVar23[0x13];
      ppppppplVar18[0x11] = ppppppplVar23[0x12];
      ppppppplVar18[0x10] = pppppplVar40;
      ppppppplVar18[0x13] = pppppplVar42;
      ppppppplVar18[0x12] = pppppplVar41;
      ppppppplVar18[0xd] = pppppplVar37;
      ppppppplVar18[0xc] = pppppplVar36;
      ppppppplVar18[0xf] = pppppplVar39;
      ppppppplVar18[0xe] = pppppplVar38;
      ppppppplVar18[9] = pppppplVar33;
      ppppppplVar18[8] = pppppplVar32;
      ppppppplVar18[0xb] = pppppplVar35;
      ppppppplVar18[10] = pppppplVar34;
      ppppppplVar18[5] = pppppplVar29;
      ppppppplVar18[4] = pppppplVar28;
      ppppppplVar18[7] = pppppplVar31;
      ppppppplVar18[6] = pppppplVar30;
      ppppppplVar18[1] = pppppplVar22;
      *ppppppplVar18 = pppppplVar19;
      ppppppplVar18[3] = pppppplVar27;
      ppppppplVar18[2] = pppppplVar26;
      ppppppplVar11 = ppppppplVar11 + -0x15;
      ppppppplVar23 = ppppppplVar23 + 0x15;
      ppppppplVar18 = ppppppplVar18 + 0x14;
      ppppppplVar5 = ppppppplVar11;
    }
    ppppppplVar18 =
         (long *******)
         (((ulong)((long)ppppppplVar18 - (long)ppppppplVar8) >> 5) * -0x3333333333333333);
    uStack_168 = 8;
    uStack_160 = 8;
    uStack_158 = 0;
    uStack_150 = 8;
    lVar21 = ((ulong)((long)ppppppplVar8 + ((long)ppppppplVar10 * 0xa8 - (long)ppppppplVar23)) >> 3)
             * -0x30c30c30c30c30c3 + 1;
    ppppppplVar11 = ppppppplVar23 + 1;
    ppppppplStack_110 = ppppppplVar8;
    ppppppplStack_108 = ppppppplVar18;
    ppppppplStack_100 = ppppppplVar17;
    while (lVar21 = lVar21 + -1, lVar21 != 0) {
      FUN_101962f78(ppppppplVar11);
      ppppppplVar11 = ppppppplVar11 + 0x15;
    }
    lVar21 = uVar14 * 0xa0;
    if (((ulong)((long)ppppppplVar17 * 0xa8) % 0xa0 != 0) &&
       (ppppppplVar8 = (long *******)_realloc(ppppppplVar8,lVar21),
       ppppppplVar8 == (long *******)0x0)) {
      func_0x0001087c906c(8,lVar21);
LAB_101893b74:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101893b78);
      (*pcVar6)();
    }
    param_1[2] = ppppppplVar8;
    param_1[3] = ppppppplVar18;
    param_1[4] = ppppppplVar25;
    param_1[5] = ppppppplStack_1d8;
    param_1[6] = ppppppplStack_1e0;
    param_1[7] = ppppppplStack_1c0;
    param_1[8] = ppppppplVar15;
    param_1[9] = unaff_x19;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
  }
  else {
    FUN_1018989f4(&ppppppplStack_110,ppppppplVar8[8],ppppppplVar8[9],1);
    lStack_188 = lStack_c8;
    ppppppplStack_190 = ppppppplStack_d0;
    lStack_178 = lStack_b8;
    lStack_180 = lStack_c0;
    lStack_170 = lStack_b0;
    ppppppplStack_1a8 = ppppppplStack_e8;
    uStack_1b0 = ppppppplStack_f0;
    ppppppplStack_198 = ppppppplStack_d8;
    ppppppplStack_1a0 = ppppppplStack_e0;
    unaff_x19 = ppppppplStack_f8;
    ppppppplVar15 = ppppppplStack_100;
    if (ppppppplStack_110 == (long *******)0x8000000000000001) {
      ppppppplStack_1c0 = (long *******)0x8000000000000000;
      goto joined_r0x000101893794;
    }
    ppppppplStack_1c0 = ppppppplStack_108;
    if (ppppppplStack_110 == (long *******)0x8000000000000000) goto joined_r0x000101893794;
    param_1[9] = lStack_c8;
    param_1[8] = ppppppplStack_d0;
    param_1[0xb] = lStack_b8;
    param_1[10] = lStack_c0;
    param_1[0xc] = lStack_b0;
    param_1[5] = ppppppplStack_e8;
    param_1[4] = ppppppplStack_f0;
    param_1[7] = ppppppplStack_d8;
    param_1[6] = ppppppplStack_e0;
    *param_1 = ppppppplStack_110;
    param_1[1] = ppppppplStack_108;
    param_1[2] = ppppppplStack_100;
    param_1[3] = ppppppplStack_f8;
LAB_101893734:
    puVar16 = (undefined *)((long)ppppppplVar10 + 1);
    ppppppplVar17 = ppppppplVar8 + 1;
    while (puVar16 = puVar16 + -1, puVar16 != (undefined *)0x0) {
      FUN_101962f78(ppppppplVar17);
      ppppppplVar17 = ppppppplVar17 + 0x15;
    }
    _free(ppppppplVar8);
  }
  if (((ulong)ppppppplStack_1d0 & 0x7fffffffffffffff) == 0) {
    return;
  }
  goto LAB_101893590;
LAB_101892ea0:
  ppppppplVar15 = (long *******)0x8000000000000000;
  ppppppplStack_1d0 = ppppppplVar11;
LAB_101892ea4:
  lStack_c8 = CONCAT71(lStack_c8._1_7_,(char)lStack_c8 + '\x01');
  ppppppplVar8 = (long *******)FUN_1018394e4(&ppppppplStack_110);
  unaff_x22 = ppppppplStack_1d0;
  if (ppppppplVar15 == (long *******)0x8000000000000000) {
    if (ppppppplVar8 != (long *******)0x0) {
      pppppplVar19 = *ppppppplVar8;
      if (pppppplVar19 == (long ******)0x1) {
        FUN_10194d0ac(ppppppplVar8 + 1);
      }
      else {
LAB_101892ff4:
        if ((pppppplVar19 == (long ******)0x0) && (ppppppplVar8[2] != (long ******)0x0)) {
          _free(ppppppplVar8[1]);
        }
      }
LAB_1018930c8:
      _free(ppppppplVar8);
    }
LAB_1018930d8:
    ppppppplVar8 = (long *******)FUN_10889a5f0(ppppppplStack_1d0,&ppppppplStack_110);
LAB_1018930e4:
    if (ppppppplStack_110 != (long *******)0x0) {
      _free(ppppppplStack_108);
    }
    uStack_1b0 = (long *******)&ppppppplStack_148;
    ppppppplStack_1a8 = (long *******)&DAT_10192d9a4;
    ppppppplStack_128 = ppppppplVar8;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&ppppppplStack_110,s_invalid_cursor__108aca359,&uStack_1b0);
    unaff_x22 = ppppppplStack_100;
    ppppppplStack_1d0 = ppppppplStack_108;
    unaff_x19 = ppppppplStack_110;
    if (*ppppppplVar8 == (long ******)0x1) {
      pppppplVar19 = ppppppplVar8[1];
      if (((ulong)pppppplVar19 & 3) == 1) {
        pppppplVar22 = (long ******)((long)pppppplVar19 + -1);
        ppppplVar24 = *pppppplVar22;
        puVar13 = *(undefined8 **)((long)pppppplVar19 + 7);
        pcVar6 = (code *)*puVar13;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(ppppplVar24);
        }
        if (puVar13[1] != 0) {
          _free(ppppplVar24);
        }
        goto LAB_10189344c;
      }
LAB_101893158:
      _free(ppppppplVar8);
    }
    else {
      if ((*ppppppplVar8 != (long ******)0x0) || (ppppppplVar8[2] == (long ******)0x0))
      goto LAB_101893158;
      pppppplVar22 = ppppppplVar8[1];
LAB_10189344c:
      _free(pppppplVar22);
      _free(ppppppplVar8);
    }
    unaff_x23 = param_2;
    if (unaff_x19 != (long *******)0x8000000000000000) {
      if (unaff_x19 == (long *******)0x8000000000000001) goto LAB_10189317c;
      *param_1 = unaff_x19;
      param_1[1] = ppppppplStack_1d0;
      param_1[2] = unaff_x22;
      param_1[3] = 0x8000000000000005;
      param_1[0xc] = 0xffffffffffff80a8;
      goto LAB_101893564;
    }
    ppppppplVar15 = (long *******)(param_6 & 0xffffffff);
    if ((param_5 & 1) == 0) {
      ppppppplVar15 = (long *******)0x19;
    }
    ppppppplVar11 = ppppppplVar15;
    if ((long *******)0x63 < ppppppplVar15) {
      ppppppplVar11 = (long *******)0x64;
    }
    if (ppppppplVar15 == (long *******)0x0) {
      ppppppplVar11 = (long *******)0x1;
    }
    if (ppppppplStack_1d0 == (long *******)0x8000000000000000) goto LAB_1018931a0;
    ppppppplVar23 = (long *******)0x8000000000000005;
  }
  else {
LAB_101893014:
    if (ppppppplVar8 != (long *******)0x0) {
      ppppppplStack_1d0 = ppppppplVar8;
      ppppppplVar8 = unaff_x22;
      if (ppppppplVar15 != (long *******)0x0) goto LAB_1018930c8;
      goto LAB_1018930d8;
    }
    if (ppppppplStack_e8 < ppppppplStack_f0) {
      do {
        if (0x20 < *(byte *)((long)ppppppplStack_f8 + (long)ppppppplStack_e8) ||
            (1L << ((ulong)*(byte *)((long)ppppppplStack_f8 + (long)ppppppplStack_e8) & 0x3f) &
            0x100002600U) == 0) {
          uStack_1b0 = (long *******)0x16;
          ppppppplVar8 = (long *******)FUN_10889a21c(&ppppppplStack_110,&uStack_1b0);
          if (ppppppplVar15 != (long *******)0x0) {
            _free(unaff_x22);
          }
          goto LAB_1018930e4;
        }
        ppppppplStack_e8 = (long *******)((long)ppppppplStack_e8 + 1);
      } while (ppppppplStack_f0 != ppppppplStack_e8);
    }
    if (ppppppplStack_110 != (long *******)0x0) {
      _free(ppppppplStack_108);
    }
    ppppppplVar8 = (long *******)(param_6 & 0xffffffff);
    if ((param_5 & 1) == 0) {
      ppppppplVar8 = (long *******)0x19;
    }
    ppppppplVar11 = ppppppplVar8;
    if ((long *******)0x63 < ppppppplVar8) {
      ppppppplVar11 = (long *******)0x64;
    }
    ppppppplStack_1d0 = ppppppplVar15;
    if (ppppppplVar8 == (long *******)0x0) {
      ppppppplVar11 = (long *******)0x1;
    }
  }
  unaff_x19 = (long *******)0x0;
  pppppplVar22 = param_2[1];
  lVar21 = (long)ppppppplVar17 * 0xa0;
  pppppplVar19 = pppppplVar22 + 8;
  do {
    if (((long *******)*pppppplVar19 == ppppppplVar23) &&
       (iVar7 = _memcmp(pppppplVar19[-1],unaff_x22,ppppppplVar23), iVar7 == 0)) {
      bVar4 = false;
      unaff_x23 = (long *******)((ulong)ppppppplStack_1c0 & 0xffffffff);
      goto LAB_1018931bc;
    }
    unaff_x19 = (long *******)((long)unaff_x19 + 1);
    pppppplVar19 = pppppplVar19 + 0x14;
    lVar21 = lVar21 + -0xa0;
  } while (lVar21 != 0);
  puVar13 = (undefined8 *)_malloc(0x30);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x30);
    goto LAB_101893b74;
  }
  puVar13[1] = 0x203a726f73727563;
  *puVar13 = 0x2064696c61766e69;
  puVar13[3] = 0x6e207369206e7275;
  puVar13[2] = 0x7420726f68636e61;
  puVar13[5] = 0x746e657365727020;
  puVar13[4] = 0x7265676e6f6c206f;
  *param_1 = 0x30;
  param_1[1] = puVar13;
  param_1[3] = 0x8000000000000005;
  param_1[2] = 0x30;
  param_1[0xc] = 0xffffffffffff80a8;
  if (ppppppplStack_1d0 != (long *******)0x0) {
    _free(unaff_x22);
  }
LAB_101893564:
  unaff_x22 = (long *******)param_2[1];
  puVar16 = (undefined *)((long)ppppppplVar17 + 1);
  ppppppplVar17 = unaff_x22;
  while (puVar16 = puVar16 + -1, puVar16 != (undefined *)0x0) {
    FUN_101962f78(ppppppplVar17);
    ppppppplVar17 = ppppppplVar17 + 0x14;
  }
  if (*param_2 != (long ******)0x0) {
LAB_101893590:
    _free(unaff_x22);
  }
  return;
}

