
/* WARNING: Type propagation algorithm not settling */

void FUN_101419d80(undefined8 *param_1,byte *******param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  undefined8 *puVar10;
  byte ******ppppppbVar11;
  byte ******ppppppbVar12;
  byte ******ppppppbVar13;
  undefined8 *puVar14;
  byte *******pppppppbVar15;
  long lVar16;
  long lVar17;
  byte *******unaff_x23;
  byte *******pppppppbVar18;
  byte *******unaff_x25;
  byte *******pppppppbVar19;
  byte bVar20;
  undefined8 *puVar21;
  byte ******ppppppbVar22;
  byte ******ppppppbVar23;
  undefined1 auVar24 [16];
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte ******ppppppbStack_140;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte ******ppppppbStack_120;
  byte *******pppppppbStack_118;
  long lStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  byte ******ppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  byte bStack_e0;
  byte ******ppppppbStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  byte ******ppppppbStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte ******ppppppbStack_88;
  undefined1 auStack_71 [17];
  
  bVar2 = *(byte *)param_2;
  if (bVar2 == 0x14) {
    ppppppbVar13 = param_2[1];
    pppppppbVar7 = (byte *******)param_2[2];
    ppppppbVar11 = param_2[3];
    pppppppbVar15 = pppppppbVar7 + (long)ppppppbVar11 * 4;
    pppppppbStack_e8 = (byte *******)0x0;
    unaff_x23 = pppppppbVar7;
    pppppppbStack_108 = pppppppbVar7;
    ppppppbStack_f8 = ppppppbVar13;
    pppppppbStack_f0 = pppppppbVar15;
    if (ppppppbVar11 == (byte ******)0x0) {
LAB_10141a2f4:
      pppppppbStack_100 = unaff_x23;
      pppppppbStack_190 = (byte *******)FUN_1087e422c(0,&UNK_10b22e8b8,&UNK_10b20a590);
    }
    else {
      unaff_x23 = pppppppbVar7 + 4;
      if (*(byte *)pppppppbVar7 == 0x16) goto LAB_10141a2f4;
      uVar6 = *(undefined8 *)((long)pppppppbVar7 + 1);
      uStack_97 = (undefined7)*(undefined8 *)((long)pppppppbVar7 + 9);
      bStack_9f = (byte)uVar6;
      uStack_9e = (undefined6)((ulong)uVar6 >> 8);
      uStack_98 = (undefined1)((ulong)uVar6 >> 0x38);
      ppppppbStack_88 = pppppppbVar7[3];
      uStack_90 = SUB81(pppppppbVar7[2],0);
      uStack_8f = (undefined7)((ulong)pppppppbVar7[2] >> 8);
      pppppppbStack_e8 = (byte *******)0x1;
      pppppppbStack_100 = unaff_x23;
      bStack_a0 = *(byte *)pppppppbVar7;
      FUN_1013d7fec(&bStack_c0,&bStack_a0);
      bVar20 = bStack_bf;
      if (bStack_c0 != 1) {
        pppppppbStack_190 = param_2;
        if (ppppppbVar11 == (byte ******)0x1) {
LAB_10141a558:
          pppppppbVar8 = (byte *******)0x2;
          pppppppbVar9 = (byte *******)0x2;
          pppppppbVar18 = unaff_x23;
        }
        else {
          unaff_x23 = pppppppbVar7 + 8;
          bVar1 = *(byte *)(pppppppbVar7 + 4);
          pppppppbStack_100 = unaff_x23;
          if (bVar1 == 0x16) goto LAB_10141a558;
          uVar6 = *(undefined8 *)((long)pppppppbVar7 + 0x21);
          uStack_b7 = (undefined7)*(undefined8 *)((long)pppppppbVar7 + 0x29);
          bStack_bf = (byte)uVar6;
          uStack_be = (undefined6)((ulong)uVar6 >> 8);
          uStack_b8 = (undefined1)((ulong)uVar6 >> 0x38);
          ppppppbStack_a8 = pppppppbVar7[7];
          uStack_b0 = SUB81(pppppppbVar7[6],0);
          uStack_af = (undefined7)((ulong)pppppppbVar7[6] >> 8);
          pppppppbStack_e8 = (byte *******)0x2;
          pppppppbVar18 = unaff_x23;
          bStack_c0 = bVar1;
          if (bVar1 == 0x10) {
LAB_10141a63c:
            FUN_100e077ec(&bStack_c0);
            pppppppbVar9 = (byte *******)0x0;
            pppppppbVar8 = (byte *******)0x3;
          }
          else {
            if (bVar1 == 0x11) {
              puVar10 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
              uVar6 = *puVar10;
              uStack_98 = (undefined1)puVar10[1];
              uStack_97 = (undefined7)((ulong)puVar10[1] >> 8);
              bStack_a0 = (byte)uVar6;
              bStack_9f = (byte)((ulong)uVar6 >> 8);
              uStack_9e = (undefined6)((ulong)uVar6 >> 0x10);
              ppppppbStack_88 = (byte ******)puVar10[3];
              uStack_90 = (undefined1)puVar10[2];
              uStack_8f = (undefined7)((ulong)puVar10[2] >> 8);
              auVar24 = FUN_100617a90(&bStack_a0);
              _free(puVar10);
            }
            else {
              if (bVar1 == 0x12) goto LAB_10141a63c;
              auVar24 = FUN_100617a90(&bStack_c0);
            }
            pppppppbStack_190 = auVar24._8_8_;
            pppppppbVar9 = (byte *******)(auVar24._0_8_ + 1);
            if (pppppppbVar9 == (byte *******)0x2) goto LAB_10141a310;
            pppppppbVar8 = (byte *******)0x3;
            unaff_x25 = pppppppbStack_190;
          }
        }
        pppppppbVar19 = (byte *******)0x0;
        if (pppppppbVar9 != (byte *******)0x2) {
          pppppppbVar19 = pppppppbVar9;
        }
        if (pppppppbVar18 == pppppppbVar15) {
          ppppppbVar11 = (byte ******)0x8000000000000000;
        }
        else {
          unaff_x23 = pppppppbVar18 + 4;
          pppppppbStack_100 = unaff_x23;
          if (*(byte *)pppppppbVar18 == 0x16) {
            ppppppbVar11 = (byte ******)0x8000000000000000;
            pppppppbVar9 = (byte *******)0x16;
          }
          else {
            uVar6 = *(undefined8 *)((long)pppppppbVar18 + 1);
            uStack_97 = (undefined7)*(undefined8 *)((long)pppppppbVar18 + 9);
            bStack_9f = (byte)uVar6;
            uStack_9e = (undefined6)((ulong)uVar6 >> 8);
            uStack_98 = (undefined1)((ulong)uVar6 >> 0x38);
            ppppppbStack_88 = pppppppbVar18[3];
            uStack_90 = SUB81(pppppppbVar18[2],0);
            uStack_8f = (undefined7)((ulong)pppppppbVar18[2] >> 8);
            pppppppbStack_e8 = pppppppbVar8;
            bStack_a0 = *(byte *)pppppppbVar18;
            FUN_1013d38a0(&bStack_c0,&bStack_a0);
            ppppppbVar11 = (byte ******)CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
            pppppppbStack_190 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
            if (ppppppbVar11 == (byte ******)0x8000000000000000) goto LAB_10141a310;
            pppppppbVar9 = (byte *******)CONCAT71(uStack_af,uStack_b0);
          }
        }
        bVar5 = ppppppbVar11 != (byte ******)0x8000000000000000;
        ppppppbVar13 = (byte ******)0x0;
        if (bVar5) {
          ppppppbVar13 = ppppppbVar11;
        }
        unaff_x23 = (byte *******)0x8;
        if (bVar5) {
          unaff_x23 = pppppppbStack_190;
        }
        pppppppbVar15 = (byte *******)0x0;
        if (bVar5) {
          pppppppbVar15 = pppppppbVar9;
        }
        pppppppbStack_128 = (byte *******)CONCAT71(pppppppbStack_128._1_7_,bVar20);
        pppppppbStack_150 = pppppppbVar19;
        pppppppbStack_148 = unaff_x25;
        ppppppbStack_140 = ppppppbVar13;
        pppppppbStack_138 = unaff_x23;
        pppppppbStack_130 = pppppppbVar15;
        pppppppbVar7 = (byte *******)FUN_100fbc738(&pppppppbStack_108);
        pppppppbStack_190 = unaff_x25;
        if (pppppppbVar7 != (byte *******)0x0) {
          FUN_100e79780(&ppppppbStack_140);
          pppppppbVar19 = (byte *******)0x2;
          pppppppbStack_190 = pppppppbVar7;
        }
        goto LAB_10141a478;
      }
      pppppppbStack_190 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
    }
LAB_10141a310:
    lVar16 = ((ulong)((long)pppppppbVar15 - (long)unaff_x23) >> 5) + 1;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      FUN_100e077ec(unaff_x23);
      unaff_x23 = unaff_x23 + 4;
    }
    if (ppppppbVar13 != (byte ******)0x0) {
      _free(pppppppbVar7);
    }
    bVar20 = 0;
    pppppppbVar19 = (byte *******)0x2;
  }
  else {
    if (bVar2 != 0x15) {
      pppppppbStack_190 = (byte *******)FUN_108855b04(param_2,auStack_71,&UNK_10b20a9a0);
      goto LAB_10141a498;
    }
    ppppppbStack_120 = param_2[1];
    pppppppbStack_130 = (byte *******)param_2[2];
    ppppppbVar11 = param_2[3];
    pppppppbVar7 = pppppppbStack_130 + (long)ppppppbVar11 * 8;
    pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
    lStack_110 = 0;
    pppppppbStack_118 = pppppppbVar7;
    if (ppppppbVar11 == (byte ******)0x0) {
      ppppppbVar12 = (byte ******)0x8000000000000000;
      ppppppbStack_d8 = (byte ******)0x8000000000000000;
      pppppppbStack_128 = pppppppbStack_130;
LAB_10141a40c:
      bStack_c0 = 0x74;
      bStack_bf = 0x18;
      uStack_be = 0x108c5;
      uStack_b8 = 4;
      uStack_b7 = 0;
      bStack_a0 = (byte)&bStack_c0;
      bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
      uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
      uStack_98 = 0xa0;
      uStack_97 = 0x100c7b3;
      pppppppbStack_178 = (byte *******)FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
      ppppppbVar13 = ppppppbVar12;
joined_r0x00010141a3d0:
      if (ppppppbVar13 != (byte ******)0x8000000000000000) {
LAB_10141a44c:
        FUN_100e79780(&ppppppbStack_d8);
      }
LAB_10141a454:
      pppppppbVar15 = (byte *******)&pppppppbStack_150;
      FUN_100d34830(&pppppppbStack_130);
      if ((byte)pppppppbStack_150 != '\x16') {
        FUN_100e077ec(&pppppppbStack_150);
      }
      bVar20 = 0;
      pppppppbVar19 = (byte *******)0x2;
      pppppppbStack_190 = pppppppbStack_178;
    }
    else {
      lVar16 = 0;
      puVar21 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar14 = (undefined8 *)((ulong)&pppppppbStack_150 | 1);
      puVar10 = (undefined8 *)((ulong)&bStack_c0 | 1);
      pppppppbStack_160 = (byte *******)0x2;
      bVar20 = 3;
      ppppppbVar12 = (byte ******)0x8000000000000000;
      ppppppbVar22 = (byte ******)0x8000000000000000;
      pppppppbVar15 = pppppppbStack_130;
      pppppppbStack_128 = pppppppbStack_130;
      do {
        pppppppbVar18 = pppppppbVar15 + 8;
        bVar1 = *(byte *)pppppppbVar15;
        lVar17 = lVar16;
        pppppppbVar9 = pppppppbVar18;
        if (bVar1 == 0x16) break;
        ppppppbVar13 = pppppppbVar15[2];
        *(byte *******)((long)puVar21 + 0x17) = pppppppbVar15[3];
        *(byte *******)((long)puVar21 + 0xf) = ppppppbVar13;
        uVar6 = *(undefined8 *)((long)pppppppbVar15 + 1);
        puVar21[1] = *(undefined8 *)((long)pppppppbVar15 + 9);
        *puVar21 = uVar6;
        pppppppbStack_148 = (byte *******)pppppppbVar15[5];
        pppppppbStack_150 = (byte *******)pppppppbVar15[4];
        pppppppbStack_138 = (byte *******)pppppppbVar15[7];
        ppppppbStack_140 = pppppppbVar15[6];
        unaff_x23 = (byte *******)CONCAT71(uStack_97,uStack_98);
        plVar3 = (long *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar1;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            bStack_bf = bStack_9f;
            if (2 < bStack_9f) {
              bStack_bf = 3;
            }
LAB_10141a0ac:
            bStack_c0 = 0;
            goto LAB_10141a0b0;
          }
          if (bVar1 == 4) {
            pppppppbVar15 = unaff_x23;
            if ((byte *******)0x2 < unaff_x23) {
              pppppppbVar15 = (byte *******)0x3;
            }
            bStack_bf = (byte)pppppppbVar15;
            goto LAB_10141a0ac;
          }
          if (bVar1 == 0xc) {
            if (ppppppbStack_88 == (byte ******)0x13) {
              if ((*plVar3 != 0x6163735f626f6c67 || plVar3[1] != 0x65645f78616d5f6e) ||
                  *(long *)((long)plVar3 + 0xb) != 0x68747065645f7861) goto LAB_10141a014;
              bStack_bf = 1;
              bStack_c0 = 0;
            }
            else {
              if (ppppppbStack_88 == (byte ******)0x7) {
                if ((int)*plVar3 == 0x72746e65 && *(int *)((long)plVar3 + 3) == 0x73656972) {
                  bStack_bf = 2;
                  bStack_c0 = 0;
                  goto joined_r0x00010141a28c;
                }
LAB_10141a014:
                bStack_bf = 3;
              }
              else {
                if ((ppppppbStack_88 != (byte ******)0x4) || ((int)*plVar3 != 0x646e696b))
                goto LAB_10141a014;
                bStack_bf = 0;
              }
              bStack_c0 = 0;
            }
joined_r0x00010141a28c:
            if (unaff_x23 != (byte *******)0x0) {
              _free(plVar3);
            }
          }
          else {
LAB_10141a29c:
            uVar6 = FUN_108855b04(&bStack_a0,auStack_71,&UNK_10b20dc40);
            uStack_b8 = (undefined1)uVar6;
            uStack_b7 = (undefined7)((ulong)uVar6 >> 8);
            bStack_c0 = 1;
          }
        }
        else {
          if (bVar1 == 0xd) {
            if (plVar3 == (long *)0x13) {
              if ((*unaff_x23 != (byte ******)0x6163735f626f6c67 ||
                  unaff_x23[1] != (byte ******)0x65645f78616d5f6e) ||
                  *(long *)((long)unaff_x23 + 0xb) != 0x68747065645f7861) goto LAB_10141a0a4;
              bStack_bf = 1;
            }
            else if (plVar3 == (long *)0x7) {
              if (*(int *)unaff_x23 != 0x72746e65 || *(int *)((long)unaff_x23 + 3) != 0x73656972)
              goto LAB_10141a0a4;
              bStack_bf = 2;
            }
            else if ((plVar3 == (long *)0x4) && (*(int *)unaff_x23 == 0x646e696b)) {
              bStack_bf = 0;
            }
            else {
LAB_10141a0a4:
              bStack_bf = 3;
            }
            goto LAB_10141a0ac;
          }
          if (bVar1 == 0xe) {
            FUN_100b45020(&bStack_c0,plVar3);
            goto joined_r0x00010141a28c;
          }
          if (bVar1 != 0xf) goto LAB_10141a29c;
          FUN_100b45020(&bStack_c0,unaff_x23,plVar3);
LAB_10141a0b0:
          FUN_100e077ec(&bStack_a0);
        }
        ppppppbVar13 = ppppppbVar12;
        if ((bStack_c0 & 1) != 0) {
LAB_10141a3a0:
          lStack_110 = lVar16 + 1;
          pppppppbStack_128 = pppppppbVar18;
          ppppppbStack_d8 = ppppppbVar22;
          pppppppbStack_d0 = pppppppbStack_178;
          pppppppbStack_c8 = pppppppbStack_180;
          pppppppbStack_178 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
          goto joined_r0x00010141a3d0;
        }
        bVar1 = (byte)pppppppbStack_150;
        if (bStack_bf < 2) {
          if (bStack_bf == 0) {
            if (bVar20 != 3) {
              lStack_110 = lVar16 + 1;
              pppppppbStack_d0 = pppppppbStack_178;
              pppppppbStack_c8 = pppppppbStack_180;
              bStack_c0 = 0x74;
              bStack_bf = 0x18;
              uStack_be = 0x108c5;
              uStack_b8 = 4;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pppppppbStack_128 = pppppppbVar18;
              ppppppbStack_d8 = ppppppbVar22;
              pppppppbStack_178 =
                   (byte *******)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              goto joined_r0x00010141a3d0;
            }
            pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
            if (bVar1 == 0x16) {
LAB_10141a730:
              pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
              lStack_110 = lVar16 + 1;
              pppppppbStack_d0 = pppppppbStack_178;
              pppppppbStack_c8 = pppppppbStack_180;
              pppppppbStack_128 = pppppppbVar18;
              ppppppbStack_d8 = ppppppbVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10141a8ac:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10141a8b0);
              (*pcVar4)();
            }
            uVar6 = *puVar14;
            puVar21[1] = puVar14[1];
            *puVar21 = uVar6;
            uVar6 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar21 + 0xf) = uVar6;
            bStack_a0 = bVar1;
            FUN_1013d7fec(&bStack_c0,&bStack_a0);
            bVar20 = bStack_bf;
            if (bStack_c0 == 1) goto LAB_10141a3a0;
          }
          else {
            if (pppppppbStack_160 != (byte *******)0x2) {
              lStack_110 = lVar16 + 1;
              pppppppbStack_d0 = pppppppbStack_178;
              pppppppbStack_c8 = pppppppbStack_180;
              bStack_c0 = 0x72;
              bStack_bf = 0xc0;
              uStack_be = 0x108ca;
              uStack_b8 = 0x13;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pppppppbStack_128 = pppppppbVar18;
              ppppppbStack_d8 = ppppppbVar22;
              pppppppbStack_178 =
                   (byte *******)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              goto joined_r0x00010141a3d0;
            }
            pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
            if (bVar1 == 0x16) goto LAB_10141a730;
            uVar6 = *puVar14;
            puVar10[1] = puVar14[1];
            *puVar10 = uVar6;
            uVar6 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar10 + 0xf) = uVar6;
            bStack_c0 = bVar1;
            if (bVar1 == 0x10) {
LAB_10141a1dc:
              FUN_100e077ec(&bStack_c0);
              pppppppbStack_160 = (byte *******)0x0;
            }
            else {
              if (bVar1 == 0x11) {
                unaff_x23 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
                ppppppbVar23 = *unaff_x23;
                uStack_98 = SUB81(unaff_x23[1],0);
                uStack_97 = (undefined7)((ulong)unaff_x23[1] >> 8);
                bStack_a0 = (byte)ppppppbVar23;
                bStack_9f = (byte)((ulong)ppppppbVar23 >> 8);
                uStack_9e = (undefined6)((ulong)ppppppbVar23 >> 0x10);
                ppppppbStack_88 = unaff_x23[3];
                uStack_90 = SUB81(unaff_x23[2],0);
                uStack_8f = (undefined7)((ulong)unaff_x23[2] >> 8);
                auVar24 = FUN_100617a90(&bStack_a0);
                _free(unaff_x23);
              }
              else {
                if (bVar1 == 0x12) goto LAB_10141a1dc;
                auVar24 = FUN_100617a90(&bStack_c0);
              }
              pppppppbStack_190 = auVar24._8_8_;
              pppppppbStack_160 = (byte *******)(auVar24._0_8_ + 1);
              if (pppppppbStack_160 == (byte *******)0x2) {
                lStack_110 = lVar16 + 1;
                pppppppbStack_128 = pppppppbVar18;
                ppppppbStack_d8 = ppppppbVar22;
                pppppppbStack_d0 = pppppppbStack_178;
                pppppppbStack_c8 = pppppppbStack_180;
                pppppppbStack_178 = pppppppbStack_190;
                goto joined_r0x00010141a3d0;
              }
            }
          }
        }
        else if (bStack_bf == 2) {
          if (ppppppbVar12 != (byte ******)0x8000000000000000) {
            lStack_110 = lVar16 + 1;
            pppppppbStack_d0 = pppppppbStack_178;
            pppppppbStack_c8 = pppppppbStack_180;
            bStack_c0 = 0xde;
            bStack_bf = 0xd9;
            uStack_be = 0x108ca;
            uStack_b8 = 7;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined6)((ulong)&bStack_c0 >> 0x10);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pppppppbStack_128 = pppppppbVar18;
            ppppppbStack_d8 = ppppppbVar22;
            pppppppbStack_178 =
                 (byte *******)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_10141a44c;
          }
          pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_110 = lVar16 + 1;
            pppppppbStack_d0 = pppppppbStack_178;
            pppppppbStack_c8 = pppppppbStack_180;
            pppppppbStack_128 = pppppppbVar18;
            ppppppbStack_d8 = ppppppbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10141a8ac;
          }
          uVar6 = *puVar14;
          puVar21[1] = puVar14[1];
          *puVar21 = uVar6;
          uVar6 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar6;
          bStack_a0 = bVar1;
          ppppppbVar13 = (byte ******)0x8000000000000000;
          FUN_1013d38a0(&bStack_c0,&bStack_a0);
          ppppppbVar12 = (byte ******)CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
          pppppppbStack_178 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
          if (ppppppbVar12 == (byte ******)0x8000000000000000) {
            lStack_110 = lVar16 + 1;
            pppppppbStack_128 = pppppppbVar18;
            goto LAB_10141a454;
          }
          pppppppbStack_180 = (byte *******)CONCAT71(uStack_af,uStack_b0);
          ppppppbVar22 = ppppppbVar12;
        }
        else {
          pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
          if (bVar1 == 0x16) goto LAB_10141a730;
          uVar6 = *puVar14;
          puVar21[1] = puVar14[1];
          *puVar21 = uVar6;
          uVar6 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar6;
          bStack_a0 = bVar1;
          FUN_100e077ec(&bStack_a0);
        }
        lVar16 = lVar16 + 1;
        lVar17 = ((long)ppppppbVar11 * 0x40 - 0x40U >> 6) + 1;
        pppppppbVar9 = pppppppbVar7;
        pppppppbVar15 = pppppppbVar18;
      } while (pppppppbVar18 != pppppppbVar7);
      pppppppbStack_d0 = pppppppbStack_178;
      pppppppbStack_c8 = pppppppbStack_180;
      pppppppbStack_128 = pppppppbVar9;
      lStack_110 = lVar17;
      ppppppbStack_d8 = ppppppbVar22;
      if (bVar20 == 3) goto LAB_10141a40c;
      pppppppbVar19 = (byte *******)0x0;
      if (pppppppbStack_160 != (byte *******)0x2) {
        pppppppbVar19 = pppppppbStack_160;
      }
      bVar5 = ppppppbVar12 != (byte ******)0x8000000000000000;
      ppppppbVar13 = (byte ******)0x0;
      if (bVar5) {
        ppppppbVar13 = ppppppbVar12;
      }
      pppppppbStack_100 = pppppppbStack_190;
      unaff_x23 = (byte *******)0x8;
      if (bVar5) {
        unaff_x23 = pppppppbStack_178;
      }
      pppppppbVar15 = (byte *******)0x0;
      if (bVar5) {
        pppppppbVar15 = pppppppbStack_180;
      }
      pppppppbStack_108 = pppppppbVar19;
      ppppppbStack_f8 = ppppppbVar13;
      pppppppbStack_f0 = unaff_x23;
      pppppppbStack_e8 = pppppppbVar15;
      bStack_e0 = bVar20;
      FUN_100d34830(&pppppppbStack_130);
      if (pppppppbVar7 != pppppppbVar9) {
        bStack_a0 = (byte)lVar17;
        bStack_9f = (byte)((ulong)lVar17 >> 8);
        uStack_9e = (undefined6)((ulong)lVar17 >> 0x10);
        pppppppbStack_190 =
             (byte *******)
             FUN_1087e422c(((ulong)((long)pppppppbVar7 - (long)pppppppbVar9) >> 6) + lVar17,
                           &bStack_a0,&UNK_10b23a190);
        FUN_100e79780(&ppppppbStack_f8);
        pppppppbVar19 = (byte *******)0x2;
      }
    }
  }
LAB_10141a478:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (pppppppbVar19 != (byte *******)0x2) {
    *param_1 = pppppppbVar19;
    param_1[1] = pppppppbStack_190;
    param_1[2] = ppppppbVar13;
    param_1[3] = unaff_x23;
    param_1[4] = pppppppbVar15;
    *(byte *)(param_1 + 5) = bVar20;
    return;
  }
LAB_10141a498:
  *param_1 = 3;
  param_1[1] = pppppppbStack_190;
  return;
}

