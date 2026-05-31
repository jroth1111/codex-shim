
/* WARNING: Type propagation algorithm not settling */

void FUN_1013b452c(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  byte *******pppppppbVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  byte bVar11;
  code *pcVar12;
  undefined8 uVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  byte *******in_x13;
  byte bVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  long lVar26;
  long lVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *******pppppppbVar30;
  uint uVar31;
  undefined8 *puVar32;
  uint uVar33;
  byte *******pppppppbStack_160;
  ulong uStack_158;
  byte *******pppppppbStack_140;
  int iStack_128;
  ulong uStack_120;
  ulong uStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  ulong uStack_100;
  byte *******pppppppbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
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
  undefined2 uStack_9e;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte ******ppppppbStack_88;
  uint uStack_78;
  uint uStack_74;
  byte *******pppppppbStack_70;
  
  if (*param_2 == '\x14') {
    uVar16 = *(ulong *)(param_2 + 8);
    pppppppbStack_160 = *(byte ********)(param_2 + 0x10);
    lVar20 = *(long *)(param_2 + 0x18);
    pppppppbVar2 = pppppppbStack_160 + lVar20 * 4;
    pbStack_f0 = (byte *)0x0;
    uVar31 = 0x14;
    pppppppbVar30 = pppppppbStack_160;
    pppppppbStack_110 = pppppppbStack_160;
    uStack_100 = uVar16;
    pppppppbStack_f8 = pppppppbVar2;
    if (lVar20 == 0) {
LAB_1013b4628:
      pppppppbStack_108 = pppppppbVar30;
      uVar17 = FUN_1087e422c(0,&UNK_10b230538,&UNK_10b20a590);
LAB_1013b4644:
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar17;
LAB_1013b464c:
      lVar20 = ((ulong)((long)pppppppbVar2 - (long)pppppppbVar30) >> 5) + 1;
      while (lVar20 = lVar20 + -1, lVar20 != 0) {
        FUN_100e077ec(pppppppbVar30);
        pppppppbVar30 = pppppppbVar30 + 4;
      }
    }
    else {
      pppppppbVar30 = pppppppbStack_160 + 4;
      if (*(byte *)pppppppbStack_160 == 0x16) goto LAB_1013b4628;
      uVar13 = *(undefined8 *)((long)pppppppbStack_160 + 1);
      uStack_97 = (undefined7)*(undefined8 *)((long)pppppppbStack_160 + 9);
      bStack_9f = (byte)uVar13;
      uStack_9e = (undefined2)((ulong)uVar13 >> 8);
      uStack_9c = (uint)((ulong)uVar13 >> 0x18);
      uStack_98 = (undefined1)((ulong)uVar13 >> 0x38);
      ppppppbStack_88 = pppppppbStack_160[3];
      uStack_90 = SUB81(pppppppbStack_160[2],0);
      uStack_8f = (undefined7)((ulong)pppppppbStack_160[2] >> 8);
      pbStack_f0 = (byte *)0x1;
      pppppppbStack_108 = pppppppbVar30;
      bStack_a0 = *(byte *)pppppppbStack_160;
      FUN_1004b60cc(&bStack_c0,&bStack_a0);
      uVar5 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
      uVar17 = CONCAT71(uStack_b7,uStack_b8);
      if (uVar5 == 0x8000000000000001) goto LAB_1013b4644;
      if (lVar20 == 1) {
LAB_1013b4d80:
        pppppppbVar14 = (byte *******)FUN_1087e422c(1,&UNK_10b230538,&UNK_10b20a590);
LAB_1013b4d9c:
        *param_1 = 0x8000000000000001;
        param_1[1] = (ulong)pppppppbVar14;
LAB_1013b4da8:
        if ((uVar5 & 0x7fffffffffffffff) != 0) {
          _free(uVar17);
        }
        goto LAB_1013b464c;
      }
      uVar18 = CONCAT71(uStack_af,uStack_b0);
      pppppppbVar30 = pppppppbStack_160 + 8;
      bVar19 = *(byte *)(pppppppbStack_160 + 4);
      pppppppbStack_108 = pppppppbVar30;
      if (bVar19 == 0x16) goto LAB_1013b4d80;
      uVar13 = *(undefined8 *)((long)pppppppbStack_160 + 0x21);
      uStack_b7 = (undefined7)*(undefined8 *)((long)pppppppbStack_160 + 0x29);
      bStack_bf = (byte)uVar13;
      uStack_be = (undefined6)((ulong)uVar13 >> 8);
      uStack_b8 = (undefined1)((ulong)uVar13 >> 0x38);
      ppppppbStack_a8 = pppppppbStack_160[7];
      uStack_b0 = SUB81(pppppppbStack_160[6],0);
      uStack_af = (undefined7)((ulong)pppppppbStack_160[6] >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_c0 = bVar19;
      if (bVar19 != 0x10) {
        if (bVar19 == 0x11) {
          puVar21 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          uVar13 = *puVar21;
          uStack_98 = (undefined1)puVar21[1];
          uStack_97 = (undefined7)((ulong)puVar21[1] >> 8);
          bStack_a0 = (byte)uVar13;
          bStack_9f = (byte)((ulong)uVar13 >> 8);
          uStack_9e = (undefined2)((ulong)uVar13 >> 0x10);
          uStack_9c = (uint)((ulong)uVar13 >> 0x20);
          ppppppbStack_88 = (byte ******)puVar21[3];
          uStack_90 = (undefined1)puVar21[2];
          uStack_8f = (undefined7)((ulong)puVar21[2] >> 8);
          FUN_100615890(&uStack_78,&bStack_a0);
          if (uStack_78 == 0) {
            pppppppbStack_70 = (byte *******)(ulong)uStack_74;
          }
          _free(puVar21);
          pppppppbVar14 = pppppppbStack_70;
        }
        else {
          if (bVar19 == 0x12) goto LAB_1013b4df8;
          FUN_100615890(&bStack_a0,&bStack_c0);
          uStack_78 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
          pppppppbVar14 = (byte *******)CONCAT71(uStack_97,uStack_98);
          if (uStack_78 == 0) {
            pppppppbVar14 = (byte *******)(ulong)uStack_9c;
          }
        }
        if ((uStack_78 & 1) == 0) {
          uVar22 = 1;
          pppppppbVar15 = pppppppbVar14;
          goto LAB_1013b4f30;
        }
        goto LAB_1013b4d9c;
      }
LAB_1013b4df8:
      pppppppbVar15 = (byte *******)FUN_100e077ec(&bStack_c0);
      uVar22 = 0;
LAB_1013b4f30:
      if (lVar20 == 2) {
LAB_1013b4f4c:
        pppppppbVar14 = (byte *******)FUN_1087e422c(2,&UNK_10b230538,&UNK_10b20a590);
        goto LAB_1013b4d9c;
      }
      pppppppbVar30 = pppppppbStack_160 + 0xc;
      pppppppbStack_108 = pppppppbVar30;
      if (*(byte *)(pppppppbStack_160 + 8) == 0x16) goto LAB_1013b4f4c;
      uVar13 = *(undefined8 *)((long)pppppppbStack_160 + 0x41);
      uStack_97 = (undefined7)*(undefined8 *)((long)pppppppbStack_160 + 0x49);
      bStack_9f = (byte)uVar13;
      uStack_9e = (undefined2)((ulong)uVar13 >> 8);
      uStack_9c = (uint)((ulong)uVar13 >> 0x18);
      uStack_98 = (undefined1)((ulong)uVar13 >> 0x38);
      ppppppbStack_88 = pppppppbStack_160[0xb];
      uStack_90 = SUB81(pppppppbStack_160[10],0);
      uStack_8f = (undefined7)((ulong)pppppppbStack_160[10] >> 8);
      pbStack_f0 = (byte *)0x3;
      bStack_a0 = *(byte *)(pppppppbStack_160 + 8);
      FUN_1004b60cc(&bStack_c0,&bStack_a0);
      uVar7 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
      pppppppbVar14 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
      if (uVar7 == 0x8000000000000001) goto LAB_1013b4d9c;
      uVar9 = CONCAT71(uStack_af,uStack_b0);
      if (lVar20 != 3) {
        pppppppbVar30 = pppppppbStack_160 + 0x10;
        bVar19 = *(byte *)(pppppppbStack_160 + 0xc);
        pppppppbStack_108 = pppppppbVar30;
        if (bVar19 == 0x16) {
          bVar23 = 0;
          goto LAB_1013b5054;
        }
        uVar13 = *(undefined8 *)((long)pppppppbStack_160 + 0x61);
        uStack_97 = (undefined7)*(undefined8 *)((long)pppppppbStack_160 + 0x69);
        bStack_9f = (byte)uVar13;
        bVar23 = bStack_9f;
        uStack_9e = (undefined2)((ulong)uVar13 >> 8);
        uStack_9c = (uint)((ulong)uVar13 >> 0x18);
        uStack_98 = (undefined1)((ulong)uVar13 >> 0x38);
        ppppppbStack_88 = pppppppbStack_160[0xf];
        uStack_90 = SUB81(pppppppbStack_160[0xe],0);
        uStack_8f = (undefined7)((ulong)pppppppbStack_160[0xe] >> 8);
        pbStack_f0 = (byte *)0x4;
        bStack_a0 = bVar19;
        if (bVar19 == 0) {
          FUN_100e077ec(&bStack_a0);
          goto LAB_1013b5054;
        }
        uVar18 = FUN_108855b04(&bStack_a0,&uStack_78,&UNK_10b20a560);
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar18;
        if ((uVar7 & 0x7fffffffffffffff) != 0) {
          _free(pppppppbVar14);
        }
        goto LAB_1013b4da8;
      }
      bVar23 = 0;
LAB_1013b5054:
      *param_1 = uVar5;
      param_1[1] = uVar17;
      param_1[2] = uVar18;
      param_1[3] = uVar7;
      param_1[4] = (ulong)pppppppbVar14;
      param_1[5] = uVar9;
      *(undefined4 *)(param_1 + 6) = uVar22;
      *(int *)((long)param_1 + 0x34) = (int)pppppppbVar15;
      *(byte *)(param_1 + 7) = bVar23;
      uVar16 = FUN_100fbc738(&pppppppbStack_110);
      uVar33 = 0x14;
      if (uVar16 == 0) goto LAB_1013b4d2c;
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar16;
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        _free(uVar17);
      }
      uVar16 = uVar7 & 0x7fffffffffffffff;
      pppppppbStack_160 = pppppppbVar14;
    }
    uVar33 = 0x14;
  }
  else {
    if (*param_2 != '\x15') {
      uVar16 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20bf00);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar16;
      return;
    }
    uVar33 = 0x15;
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar29 = *(byte **)(param_2 + 0x10);
    lVar20 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbVar29 + lVar20;
    pppppppbStack_140 = (byte *******)&pppppppbStack_110;
    pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    uVar17 = 0x15;
    puVar25 = param_1;
    pbStack_f0 = pbVar29;
    pbStack_d8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar19 = 0;
      iStack_128 = 2;
      uStack_118 = 0x8000000000000001;
      uStack_120 = 0x8000000000000001;
      uStack_158 = 0;
      pppppppbStack_160 = in_x13;
    }
    else {
      lVar26 = 0;
      puVar24 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar32 = (undefined8 *)((ulong)pppppppbStack_140 | 1);
      puVar21 = (undefined8 *)((ulong)&bStack_c0 | 1);
      iStack_128 = 2;
      pppppppbStack_140 = (byte *******)0x2;
      bVar19 = 2;
      uStack_120 = 0x8000000000000001;
      uStack_118 = 0x8000000000000001;
      pbVar6 = pbVar29;
      pbStack_e8 = pbVar29;
      do {
        pbVar28 = pbVar6 + 0x40;
        bVar23 = *pbVar6;
        lVar27 = lVar26;
        pbVar29 = pbVar28;
        if (bVar23 == 0x16) break;
        uVar13 = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
        uVar13 = *(undefined8 *)(pbVar6 + 1);
        puVar24[1] = *(undefined8 *)(pbVar6 + 9);
        *puVar24 = uVar13;
        pppppppbStack_108 = *(byte ********)(pbVar6 + 0x28);
        pppppppbStack_110 = *(byte ********)(pbVar6 + 0x20);
        pppppppbStack_f8 = *(byte ********)(pbVar6 + 0x38);
        uStack_100 = *(ulong *)(pbVar6 + 0x30);
        plVar4 = (long *)CONCAT71(uStack_97,uStack_98);
        plVar10 = (long *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar23;
        if (bVar23 < 0xd) {
          if (bVar23 == 1) {
            bStack_bf = bStack_9f;
            if (3 < bStack_9f) {
              bStack_bf = 4;
            }
LAB_1013b4940:
            bStack_c0 = 0;
            goto LAB_1013b4944;
          }
          if (bVar23 == 4) {
            if ((long *)0x3 < plVar4) {
              plVar4 = (long *)0x4;
            }
            bStack_bf = (byte)plVar4;
            goto LAB_1013b4940;
          }
          if (bVar23 == 0xc) {
            if ((long)ppppppbStack_88 < 8) {
              if (ppppppbStack_88 != (byte ******)0x5) {
                if ((ppppppbStack_88 == (byte ******)0x6) &&
                   ((int)*plVar10 == 0x73727563 && *(short *)((long)plVar10 + 4) == 0x726f)) {
                  bStack_bf = 0;
                  bStack_c0 = 0;
                  goto joined_r0x0001013b4bcc;
                }
                goto LAB_1013b48d8;
              }
              if ((int)*plVar10 != 0x696d696c || *(char *)((long)plVar10 + 4) != 't')
              goto LAB_1013b48d8;
              bStack_bf = 1;
            }
            else {
              if (ppppppbStack_88 == (byte ******)0x8) {
                if (*plVar10 == 0x6449646165726874) {
                  bStack_bf = 2;
                  goto joined_r0x0001013b4bcc;
                }
              }
              else if ((ppppppbStack_88 == (byte ******)0xc) &&
                      (*plVar10 == 0x6665526563726f66 && (int)plVar10[1] == 0x68637465)) {
                bStack_bf = 3;
joined_r0x0001013b4bcc:
                bStack_c0 = 0;
                goto joined_r0x0001013b4bcc;
              }
LAB_1013b48d8:
              bStack_bf = 4;
            }
            bStack_c0 = 0;
            goto joined_r0x0001013b4bcc;
          }
LAB_1013b4bdc:
          uVar13 = FUN_108855b04(&bStack_a0,&uStack_78,&UNK_10b210140);
          uStack_b8 = (undefined1)uVar13;
          uStack_b7 = (undefined7)((ulong)uVar13 >> 8);
          bStack_c0 = 1;
        }
        else {
          if (bVar23 == 0xd) {
            if ((long)plVar10 < 8) {
              if (plVar10 == (long *)0x5) {
                if ((int)*plVar4 == 0x696d696c && *(char *)((long)plVar4 + 4) == 't') {
                  bStack_bf = 1;
                }
                else {
LAB_1013b4938:
                  bStack_bf = 4;
                }
              }
              else {
                if ((plVar10 != (long *)0x6) ||
                   ((int)*plVar4 != 0x73727563 || *(short *)((long)plVar4 + 4) != 0x726f))
                goto LAB_1013b4938;
                bStack_bf = 0;
              }
            }
            else if (plVar10 == (long *)0x8) {
              if (*plVar4 != 0x6449646165726874) goto LAB_1013b4938;
              bStack_bf = 2;
            }
            else {
              if ((plVar10 != (long *)0xc) ||
                 (*plVar4 != 0x6665526563726f66 || (int)plVar4[1] != 0x68637465))
              goto LAB_1013b4938;
              bStack_bf = 3;
            }
            goto LAB_1013b4940;
          }
          if (bVar23 == 0xe) {
            FUN_100ba6a14(&bStack_c0,plVar10);
joined_r0x0001013b4bcc:
            if (plVar4 != (long *)0x0) {
              _free(plVar10);
            }
            goto LAB_1013b494c;
          }
          if (bVar23 != 0xf) goto LAB_1013b4bdc;
          FUN_100ba6a14(&bStack_c0,plVar4,plVar10);
LAB_1013b4944:
          FUN_100e077ec(&bStack_a0);
        }
LAB_1013b494c:
        bVar23 = bStack_9f;
        if ((bStack_c0 & 1) != 0) {
          pppppppbStack_140 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
LAB_1013b4c78:
          lStack_d0 = lVar26 + 1;
          pbStack_e8 = pbVar28;
LAB_1013b4c7c:
          *param_1 = 0x8000000000000001;
          param_1[1] = (ulong)pppppppbStack_140;
          if ((-0x7fffffffffffffff < (long)uStack_118) && (uStack_118 != 0)) {
LAB_1013b4c9c:
            _free(pppppppbStack_160);
          }
LAB_1013b4e34:
          if ((-0x7fffffffffffffff < (long)uStack_120) && (uStack_120 != 0)) {
            _free(uStack_158);
          }
          FUN_100d34830(&pbStack_f0);
          if ((byte)pppppppbStack_110 != '\x16') {
            FUN_100e077ec(&pppppppbStack_110);
          }
          goto LAB_1013b4d2c;
        }
        bVar11 = (byte)pppppppbStack_110;
        if (bStack_bf < 2) {
          if (bStack_bf == 0) {
            if (uStack_120 == 0x8000000000000001) {
              pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
              if (bVar11 == 0x16) {
                lStack_d0 = lVar26 + 1;
                pbStack_e8 = pbVar28;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1013b522c;
              }
              uVar13 = *puVar32;
              puVar24[1] = puVar32[1];
              *puVar24 = uVar13;
              uVar13 = *(undefined8 *)((long)puVar32 + 0xf);
              *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
              *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
              bStack_a0 = bVar11;
              FUN_1004b60cc(&bStack_c0,&bStack_a0);
              uStack_120 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
              if (uStack_120 != 0x8000000000000001) {
                uStack_158 = CONCAT71(uStack_b7,uStack_b8);
                uVar17 = CONCAT71(uStack_af,uStack_b0);
                goto LAB_1013b4688;
              }
              pppppppbStack_140 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
              uStack_120 = 0x8000000000000001;
              goto LAB_1013b4c78;
            }
            lStack_d0 = lVar26 + 1;
            bStack_c0 = 0xa9;
            bStack_bf = 199;
            uStack_be = 0x108ca;
            uStack_b8 = 6;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar28;
            pppppppbStack_140 =
                 (byte *******)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          }
          else {
            if (iStack_128 == 2) {
              pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
              if (bVar11 == 0x16) goto LAB_1013b4ff0;
              uVar13 = *puVar32;
              puVar21[1] = puVar32[1];
              *puVar21 = uVar13;
              uVar13 = *(undefined8 *)((long)puVar32 + 0xf);
              *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
              *(undefined8 *)((long)puVar21 + 0xf) = uVar13;
              bStack_c0 = bVar11;
              if (bVar11 == 0x10) {
LAB_1013b4b1c:
                FUN_100e077ec(&bStack_c0);
                iStack_128 = 0;
              }
              else {
                if (bVar11 == 0x11) {
                  puVar8 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
                  uVar13 = *puVar8;
                  uStack_98 = (undefined1)puVar8[1];
                  uStack_97 = (undefined7)((ulong)puVar8[1] >> 8);
                  bStack_a0 = (byte)uVar13;
                  bStack_9f = (byte)((ulong)uVar13 >> 8);
                  uStack_9e = (undefined2)((ulong)uVar13 >> 0x10);
                  uStack_9c = (uint)((ulong)uVar13 >> 0x20);
                  ppppppbStack_88 = (byte ******)puVar8[3];
                  uStack_90 = (undefined1)puVar8[2];
                  uStack_8f = (undefined7)((ulong)puVar8[2] >> 8);
                  FUN_100615890(&uStack_78,&bStack_a0);
                  uVar31 = uStack_78;
                  pppppppbVar30 = pppppppbStack_70;
                  if (uStack_78 == 0) {
                    iStack_128 = 1;
                    pppppppbVar30 =
                         (byte *******)
                         ((ulong)pppppppbStack_140 & 0xffffffff00000000 | (ulong)uStack_74);
                  }
                  _free(puVar8);
                  pppppppbStack_140 = pppppppbVar30;
                }
                else {
                  if (bVar11 == 0x12) goto LAB_1013b4b1c;
                  FUN_100615890(&bStack_a0,&bStack_c0);
                  uVar31 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
                  uVar16 = (ulong)pppppppbStack_140 & 0xffffffff00000000;
                  pppppppbStack_140 = (byte *******)CONCAT71(uStack_97,uStack_98);
                  if (uVar31 == 0) {
                    iStack_128 = 1;
                    pppppppbStack_140 = (byte *******)(uVar16 | uStack_9c);
                  }
                }
                if (uVar31 != 0) goto LAB_1013b4c78;
              }
              goto LAB_1013b4688;
            }
            lStack_d0 = lVar26 + 1;
            bStack_c0 = 0x21;
            bStack_bf = 0xdc;
            uStack_be = 0x108ca;
            uStack_b8 = 5;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar28;
            pppppppbStack_140 =
                 (byte *******)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          }
          goto LAB_1013b4c7c;
        }
        if (bStack_bf == 2) {
          if (uStack_118 != 0x8000000000000001) {
            lStack_d0 = lVar26 + 1;
            bStack_c0 = 0xf8;
            bStack_bf = 0x82;
            uStack_be = 0x108c9;
            uStack_b8 = 8;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar28;
            uVar16 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar16;
            if ((uStack_118 & 0x7fffffffffffffff) == 0) goto LAB_1013b4e34;
            goto LAB_1013b4c9c;
          }
          pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
          if (bVar11 == 0x16) {
            lStack_d0 = lVar26 + 1;
            pbStack_e8 = pbVar28;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1013b522c;
          }
          uVar13 = *puVar32;
          puVar24[1] = puVar32[1];
          *puVar24 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar32 + 0xf);
          *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
          *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
          bStack_a0 = bVar11;
          FUN_1004b60cc(&bStack_c0,&bStack_a0);
          uStack_118 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
          if (uStack_118 != 0x8000000000000001) {
            pppppppbStack_160 = (byte *******)CONCAT71(uStack_b7,uStack_b8);
            puVar25 = (ulong *)CONCAT71(uStack_af,uStack_b0);
            goto LAB_1013b4688;
          }
          lStack_d0 = lVar26 + 1;
          *param_1 = 0x8000000000000001;
          param_1[1] = CONCAT71(uStack_b7,uStack_b8);
          pbStack_e8 = pbVar28;
          goto LAB_1013b4e34;
        }
        if (bStack_bf == 3) {
          if (bVar19 == 2) {
            pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
            if (bVar11 == 0x16) goto LAB_1013b4ff0;
            uVar13 = *puVar32;
            puVar24[1] = puVar32[1];
            *puVar24 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar32 + 0xf);
            *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
            *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
            bStack_a0 = bVar11;
            if (bVar11 == 0) {
              FUN_100e077ec(&bStack_a0);
              bVar19 = bVar23;
              goto LAB_1013b4688;
            }
            lStack_d0 = lVar26 + 1;
            pbStack_e8 = pbVar28;
            pppppppbStack_140 = (byte *******)FUN_108855b04(&bStack_a0,&uStack_78,&UNK_10b20a560);
          }
          else {
            lStack_d0 = lVar26 + 1;
            bStack_c0 = 0x88;
            bStack_bf = 0xed;
            uStack_be = 0x108cb;
            uStack_b8 = 0xc;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar28;
            pppppppbStack_140 =
                 (byte *******)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          }
          goto LAB_1013b4c7c;
        }
        pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
        if (bVar11 == 0x16) {
LAB_1013b4ff0:
          pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,0x16);
          lStack_d0 = lVar26 + 1;
          pbStack_e8 = pbVar28;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013b522c:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1013b5230);
          (*pcVar12)();
        }
        uVar13 = *puVar32;
        puVar24[1] = puVar32[1];
        *puVar24 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar32 + 0xf);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar32 + 0x17);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar13;
        bStack_a0 = bVar11;
        FUN_100e077ec(&bStack_a0);
LAB_1013b4688:
        lVar26 = lVar26 + 1;
        lVar27 = (lVar20 - 0x40U >> 6) + 1;
        pbVar29 = pbVar1;
        pbVar6 = pbVar28;
      } while (pbVar28 != pbVar1);
      bVar19 = bVar19 & 1;
      lStack_d0 = lVar27;
    }
    lVar20 = lStack_d0;
    uVar5 = 0x8000000000000000;
    if (uStack_120 != 0x8000000000000001) {
      uVar5 = uStack_120;
    }
    *param_1 = uVar5;
    param_1[1] = uStack_158;
    iVar3 = 0;
    if (iStack_128 != 2) {
      iVar3 = iStack_128;
    }
    uVar22 = 0;
    if (iStack_128 != 2) {
      uVar22 = SUB84(pppppppbStack_140,0);
    }
    uVar16 = 0x8000000000000000;
    if (uStack_118 != 0x8000000000000001) {
      uVar16 = uStack_118;
    }
    param_1[2] = uVar17;
    param_1[3] = uVar16;
    param_1[4] = (ulong)pppppppbStack_160;
    param_1[5] = (ulong)puVar25;
    *(int *)(param_1 + 6) = iVar3;
    *(undefined4 *)((long)param_1 + 0x34) = uVar22;
    *(byte *)(param_1 + 7) = bVar19;
    uVar31 = 0x15;
    pbStack_e8 = pbVar29;
    FUN_100d34830(&pbStack_f0);
    if (pbVar1 == pbVar29) goto LAB_1013b4d2c;
    bStack_a0 = (byte)lVar20;
    bStack_9f = (byte)((ulong)lVar20 >> 8);
    uStack_9e = (undefined2)((ulong)lVar20 >> 0x10);
    uStack_9c = (uint)((ulong)lVar20 >> 0x20);
    uVar17 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar29) >> 6) + lVar20,&bStack_a0,
                           &UNK_10b23a190);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar17;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      _free(uStack_158);
    }
    uVar16 = uVar16 & 0x7fffffffffffffff;
  }
  if (uVar16 != 0) {
    _free(pppppppbStack_160);
    uVar33 = uVar31;
  }
LAB_1013b4d2c:
  if ((uVar33 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

