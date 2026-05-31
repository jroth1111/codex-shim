
/* WARNING: Type propagation algorithm not settling */

void FUN_10121e188(ulong *param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  code *pcVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong unaff_x20;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  int iStack_124;
  ulong uStack_120;
  byte *pbStack_110;
  byte *pbStack_108;
  long lStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined2 uStack_9e;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  uint uStack_78;
  uint uStack_74;
  byte *pbStack_70;
  
  bVar6 = *param_2;
  if (bVar6 != 0x14) {
    if (bVar6 != 0x15) {
      uVar26 = FUN_108855b04(param_2,&bStack_c0,&UNK_10b20af40);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar26;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar24 = *(byte **)(param_2 + 0x10);
    lVar16 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar23 = pbVar24 + lVar16;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    pbStack_f0 = pbVar24;
    pbStack_d8 = pbVar23;
    if (*(long *)(param_2 + 0x18) == 0) {
      iStack_124 = 2;
      uVar26 = 0x8000000000000001;
      uStack_120 = 0x8000000000000001;
      pbStack_130._0_4_ = 0;
    }
    else {
      lVar20 = 0;
      puVar25 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar18 = (undefined8 *)((ulong)&bStack_c0 | 1);
      iStack_124 = 2;
      pbStack_130 = (byte *)0x2;
      uStack_120 = 0x8000000000000001;
      uVar26 = 0x8000000000000001;
      pbVar4 = pbVar24;
      pbStack_e8 = pbVar24;
      do {
        pbVar22 = pbVar4 + 0x40;
        bVar5 = *pbVar4;
        lVar21 = lVar20;
        pbVar24 = pbVar22;
        if (bVar5 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)puVar25 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar4 + 1);
        puVar25[1] = *(undefined8 *)(pbVar4 + 9);
        *puVar25 = uVar12;
        pbStack_108 = *(byte **)(pbVar4 + 0x28);
        pbStack_110 = *(byte **)(pbVar4 + 0x20);
        pbStack_f8 = *(byte **)(pbVar4 + 0x38);
        lStack_100 = *(long *)(pbVar4 + 0x30);
        piVar2 = (int *)CONCAT71(uStack_97,uStack_98);
        piVar10 = (int *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar5;
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            uVar15 = (uint)bStack_9f;
            if (2 < uVar15) {
              uVar15 = 3;
            }
LAB_10121e668:
            FUN_100e077ec(&bStack_a0);
            goto LAB_10121e670;
          }
          if (bVar5 == 4) {
            if ((int *)0x2 < piVar2) {
              piVar2 = (int *)0x3;
            }
            uVar15 = (uint)piVar2;
            goto LAB_10121e668;
          }
          if (bVar5 == 0xc) {
            if (lStack_88 == 3) {
              if ((short)*piVar10 != 0x7763 || *(char *)((long)piVar10 + 2) != 'd')
              goto LAB_10121e5e8;
              uVar15 = 2;
            }
            else if (lStack_88 == 5) {
              if (*piVar10 != 0x696d696c || (char)piVar10[1] != 't') goto LAB_10121e5e8;
              uVar15 = 1;
            }
            else if ((lStack_88 == 6) && (*piVar10 == 0x73727563 && (short)piVar10[1] == 0x726f)) {
              uVar15 = 0;
            }
            else {
LAB_10121e5e8:
              uVar15 = 3;
            }
            goto joined_r0x00010121e898;
          }
LAB_10121edc8:
          lStack_d0 = lVar20 + 1;
          pbStack_e8 = pbVar22;
          uVar14 = FUN_108855b04(&bStack_a0,&bStack_c0,&UNK_10b20fa20);
          goto LAB_10121ede8;
        }
        if (bVar5 == 0xd) {
          if (piVar10 == (int *)0x3) {
            if ((short)*piVar2 != 0x7763 || *(char *)((long)piVar2 + 2) != 'd') goto LAB_10121e664;
LAB_10121e88c:
            uVar15 = 2;
          }
          else if (piVar10 == (int *)0x5) {
            if (*piVar2 != 0x696d696c || (char)piVar2[1] != 't') goto LAB_10121e664;
LAB_10121e640:
            uVar15 = 1;
          }
          else if ((piVar10 == (int *)0x6) && (*piVar2 == 0x73727563 && (short)piVar2[1] == 0x726f))
          {
LAB_10121e4dc:
            uVar15 = 0;
          }
          else {
LAB_10121e664:
            uVar15 = 3;
          }
          goto LAB_10121e668;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_10121edc8;
          if (piVar10 == (int *)0x3) {
            if ((((char)*piVar2 == 'c') && (*(char *)((long)piVar2 + 1) == 'w')) &&
               (*(char *)((long)piVar2 + 2) == 'd')) goto LAB_10121e88c;
          }
          else if (piVar10 == (int *)0x5) {
            if (((((char)*piVar2 == 'l') && (*(char *)((long)piVar2 + 1) == 'i')) &&
                (*(char *)((long)piVar2 + 2) == 'm')) &&
               ((*(char *)((long)piVar2 + 3) == 'i' && ((char)piVar2[1] == 't'))))
            goto LAB_10121e640;
          }
          else if ((((piVar10 == (int *)0x6) && ((char)*piVar2 == 'c')) &&
                   ((*(char *)((long)piVar2 + 1) == 'u' &&
                    (((*(char *)((long)piVar2 + 2) == 'r' && (*(char *)((long)piVar2 + 3) == 's'))
                     && ((char)piVar2[1] == 'o')))))) && (*(char *)((long)piVar2 + 5) == 'r'))
          goto LAB_10121e4dc;
          goto LAB_10121e664;
        }
        if (lStack_88 == 3) {
          if ((((char)*piVar10 != 'c') || (*(char *)((long)piVar10 + 1) != 'w')) ||
             (*(char *)((long)piVar10 + 2) != 'd')) goto LAB_10121e5c0;
          uVar15 = 2;
        }
        else if (lStack_88 == 5) {
          if ((((char)*piVar10 != 'l') || (*(char *)((long)piVar10 + 1) != 'i')) ||
             ((*(char *)((long)piVar10 + 2) != 'm' ||
              ((*(char *)((long)piVar10 + 3) != 'i' || ((char)piVar10[1] != 't'))))))
          goto LAB_10121e5c0;
          uVar15 = 1;
        }
        else if ((((((lStack_88 == 6) && ((char)*piVar10 == 'c')) &&
                   (*(char *)((long)piVar10 + 1) == 'u')) &&
                  ((*(char *)((long)piVar10 + 2) == 'r' && (*(char *)((long)piVar10 + 3) == 's'))))
                 && ((char)piVar10[1] == 'o')) && (*(char *)((long)piVar10 + 5) == 'r')) {
          uVar15 = 0;
        }
        else {
LAB_10121e5c0:
          uVar15 = 3;
        }
joined_r0x00010121e898:
        if (piVar2 != (int *)0x0) {
          _free();
        }
LAB_10121e670:
        uVar15 = uVar15 & 0xff;
        bVar5 = (byte)pbStack_110;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            if (uStack_120 != 0x8000000000000001) {
              lStack_d0 = lVar20 + 1;
              bStack_c0 = 0xa9;
              uStack_bf = 0x108cac7;
              uStack_b8 = 6;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
              uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_e8 = pbVar22;
              uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              goto LAB_10121ede8;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_d0 = lVar20 + 1;
              pbStack_e8 = pbVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10121edc4;
            }
            uVar12 = *puVar19;
            puVar25[1] = puVar19[1];
            *puVar25 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar12;
            bStack_a0 = bVar5;
            FUN_1004b60cc(&bStack_c0,&bStack_a0);
            uStack_120 = CONCAT71(uStack_bf,bStack_c0);
            if (uStack_120 != 0x8000000000000001) {
              unaff_x20 = CONCAT71(uStack_b7,uStack_b8);
              uStack_148 = CONCAT71(uStack_af,uStack_b0);
              goto LAB_10121e2e4;
            }
            uStack_120 = 0x8000000000000001;
            *param_1 = 0x8000000000000001;
            param_1[1] = CONCAT71(uStack_b7,uStack_b8);
joined_r0x00010121eacc:
            lStack_d0 = lVar20 + 1;
            pbStack_e8 = pbVar22;
            if ((long)uVar26 < -0x7ffffffffffffffe) goto LAB_10121eadc;
LAB_10121ead0:
            if (uVar26 != 0) goto LAB_10121ead4;
          }
          else {
            if (iStack_124 == 2) {
              pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
              if (bVar5 == 0x16) goto LAB_10121ec6c;
              uVar12 = *puVar19;
              puVar18[1] = puVar19[1];
              *puVar18 = uVar12;
              uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
              *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
              *(undefined8 *)((long)puVar18 + 0xf) = uVar12;
              bStack_c0 = bVar5;
              if (bVar5 == 0x10) {
LAB_10121e2d8:
                bStack_c0 = bVar5;
                FUN_100e077ec(&bStack_c0);
                iStack_124 = 0;
              }
              else {
                if (bVar5 == 0x11) {
                  puVar8 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
                  uVar12 = *puVar8;
                  uStack_98 = (undefined1)puVar8[1];
                  uStack_97 = (undefined7)((ulong)puVar8[1] >> 8);
                  bStack_a0 = (byte)uVar12;
                  bStack_9f = (byte)((ulong)uVar12 >> 8);
                  uStack_9e = (undefined2)((ulong)uVar12 >> 0x10);
                  uStack_9c = (uint)((ulong)uVar12 >> 0x20);
                  lStack_88 = puVar8[3];
                  uStack_90 = (undefined1)puVar8[2];
                  uStack_8f = (undefined7)((ulong)puVar8[2] >> 8);
                  FUN_100615890(&uStack_78,&bStack_a0);
                  uVar15 = uStack_78;
                  pbVar24 = pbStack_70;
                  if (uStack_78 == 0) {
                    iStack_124 = 1;
                    pbVar24 = (byte *)((ulong)pbStack_130 & 0xffffffff00000000 | (ulong)uStack_74);
                  }
                  _free(puVar8);
                  pbStack_130 = pbVar24;
                }
                else {
                  if (bVar5 == 0x12) goto LAB_10121e2d8;
                  FUN_100615890(&bStack_a0,&bStack_c0);
                  uVar15 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
                  uVar14 = (ulong)pbStack_130 & 0xffffffff00000000;
                  pbStack_130 = (byte *)CONCAT71(uStack_97,uStack_98);
                  if (uVar15 == 0) {
                    iStack_124 = 1;
                    pbStack_130 = (byte *)(uVar14 | uStack_9c);
                  }
                }
                if (uVar15 != 0) {
                  *param_1 = 0x8000000000000001;
                  param_1[1] = (ulong)pbStack_130;
                  goto joined_r0x00010121eacc;
                }
              }
              goto LAB_10121e2e4;
            }
            lStack_d0 = lVar20 + 1;
            bStack_c0 = 0x21;
            uStack_bf = 0x108cadc;
            uStack_b8 = 5;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
LAB_10121ede8:
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar14;
            if (-0x7fffffffffffffff < (long)uVar26) goto LAB_10121ead0;
          }
LAB_10121eadc:
          if ((-0x7fffffffffffffff < (long)uStack_120) && (uStack_120 != 0)) {
            _free(unaff_x20);
          }
          FUN_100d34830(&pbStack_f0);
          if ((byte)pbStack_110 != '\x16') {
            FUN_100e077ec(&pbStack_110);
          }
          goto LAB_10121e96c;
        }
        if (uVar15 == 2) {
          if (uVar26 != 0x8000000000000001) {
            lStack_d0 = lVar20 + 1;
            bStack_c0 = 0x1d;
            uStack_bf = 0x108ca1f;
            uStack_b8 = 3;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar14;
            if ((uVar26 & 0x7fffffffffffffff) == 0) goto LAB_10121eadc;
LAB_10121ead4:
            _free(uStack_138);
            goto LAB_10121eadc;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_d0 = lVar20 + 1;
            pbStack_e8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10121edc4;
          }
          uVar12 = *puVar19;
          puVar25[1] = puVar19[1];
          *puVar25 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar25 + 0xf) = uVar12;
          bStack_a0 = bVar5;
          FUN_1004b60cc(&bStack_c0,&bStack_a0);
          uVar26 = CONCAT71(uStack_bf,bStack_c0);
          if (uVar26 == 0x8000000000000001) {
            lStack_d0 = lVar20 + 1;
            *param_1 = 0x8000000000000001;
            param_1[1] = CONCAT71(uStack_b7,uStack_b8);
            pbStack_e8 = pbVar22;
            goto LAB_10121eadc;
          }
          uStack_138 = CONCAT71(uStack_b7,uStack_b8);
          uStack_140 = CONCAT71(uStack_af,uStack_b0);
        }
        else {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar5 == 0x16) {
LAB_10121ec6c:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            lStack_d0 = lVar20 + 1;
            pbStack_e8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10121edc4:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10121edc8);
            (*pcVar11)();
          }
          uVar12 = *puVar19;
          puVar25[1] = puVar19[1];
          *puVar25 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar25 + 0xf) = uVar12;
          bStack_a0 = bVar5;
          FUN_100e077ec(&bStack_a0);
        }
LAB_10121e2e4:
        lVar20 = lVar20 + 1;
        lVar21 = (lVar16 - 0x40U >> 6) + 1;
        pbVar24 = pbVar23;
        pbVar4 = pbVar22;
      } while (pbVar22 != pbVar23);
      lStack_d0 = lVar21;
    }
    lVar16 = lStack_d0;
    uVar14 = 0x8000000000000000;
    if (uStack_120 != 0x8000000000000001) {
      uVar14 = uStack_120;
    }
    *param_1 = uVar14;
    param_1[1] = unaff_x20;
    iVar1 = 0;
    if (iStack_124 != 2) {
      iVar1 = iStack_124;
    }
    uVar17 = 0;
    if (iStack_124 != 2) {
      uVar17 = pbStack_130._0_4_;
    }
    uVar3 = 0x8000000000000000;
    if (uVar26 != 0x8000000000000001) {
      uVar3 = uVar26;
    }
    param_1[2] = uStack_148;
    param_1[3] = uVar3;
    param_1[4] = uStack_138;
    param_1[5] = uStack_140;
    *(int *)(param_1 + 6) = iVar1;
    *(undefined4 *)((long)param_1 + 0x34) = uVar17;
    pbStack_e8 = pbVar24;
    FUN_100d34830(&pbStack_f0);
    if (pbVar23 != pbVar24) {
      bStack_a0 = (byte)lVar16;
      bStack_9f = (byte)((ulong)lVar16 >> 8);
      uStack_9e = (undefined2)((ulong)lVar16 >> 0x10);
      uStack_9c = (uint)((ulong)lVar16 >> 0x20);
      uVar26 = FUN_1087e422c(((ulong)((long)pbVar23 - (long)pbVar24) >> 6) + lVar16,&bStack_a0,
                             &UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar26;
      if ((uVar14 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x20);
      }
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
        _free(uStack_138);
      }
    }
    goto LAB_10121e96c;
  }
  uVar26 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  lVar16 = *(long *)(param_2 + 0x18);
  pbVar24 = pbVar4 + lVar16 * 0x20;
  pbStack_f0 = (byte *)0x0;
  pbVar23 = pbVar4;
  pbStack_110 = pbVar4;
  lStack_100 = uVar26;
  pbStack_f8 = pbVar24;
  if (lVar16 == 0) {
LAB_10121e27c:
    pbStack_108 = pbVar23;
    uVar14 = FUN_1087e422c(0,&UNK_10b232960,&UNK_10b20a590);
LAB_10121e298:
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar14;
LAB_10121e2a0:
    lVar16 = ((ulong)((long)pbVar24 - (long)pbVar23) >> 5) + 1;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      FUN_100e077ec(pbVar23);
      pbVar23 = pbVar23 + 0x20;
    }
  }
  else {
    pbVar23 = pbVar4 + 0x20;
    if (*pbVar4 == 0x16) goto LAB_10121e27c;
    uVar12 = *(undefined8 *)(pbVar4 + 1);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar4 + 9);
    bStack_9f = (byte)uVar12;
    uStack_9e = (undefined2)((ulong)uVar12 >> 8);
    uStack_9c = (uint)((ulong)uVar12 >> 0x18);
    uStack_98 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_88 = *(long *)(pbVar4 + 0x18);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar4 + 0x10);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x10) >> 8);
    pbStack_f0 = (byte *)0x1;
    pbStack_108 = pbVar23;
    bStack_a0 = *pbVar4;
    FUN_1004b60cc(&bStack_c0,&bStack_a0);
    uVar3 = CONCAT71(uStack_bf,bStack_c0);
    uVar14 = CONCAT71(uStack_b7,uStack_b8);
    if (uVar3 == 0x8000000000000001) goto LAB_10121e298;
    if (lVar16 == 1) {
LAB_10121e9c0:
      uVar12 = 1;
LAB_10121e9c4:
      pbVar22 = (byte *)FUN_1087e422c(uVar12,&UNK_10b232960,&UNK_10b20a590);
LAB_10121e9d8:
      *param_1 = 0x8000000000000001;
      param_1[1] = (ulong)pbVar22;
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
        _free(uVar14);
      }
      goto LAB_10121e2a0;
    }
    uVar9 = CONCAT71(uStack_af,uStack_b0);
    pbVar23 = pbVar4 + 0x40;
    bVar5 = pbVar4[0x20];
    pbStack_108 = pbVar23;
    if (bVar5 == 0x16) goto LAB_10121e9c0;
    uStack_b7 = (undefined7)*(undefined8 *)(pbVar4 + 0x29);
    uStack_bf = (undefined7)*(undefined8 *)(pbVar4 + 0x21);
    uStack_b8 = (undefined1)((ulong)*(undefined8 *)(pbVar4 + 0x21) >> 0x38);
    uStack_a8 = *(undefined8 *)(pbVar4 + 0x38);
    uStack_b0 = (undefined1)*(undefined8 *)(pbVar4 + 0x30);
    uStack_af = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x30) >> 8);
    pbStack_f0 = (byte *)0x2;
    bStack_c0 = bVar5;
    if (bVar5 != 0x10) {
      if (bVar5 == 0x11) {
        puVar18 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
        uVar12 = *puVar18;
        uStack_98 = (undefined1)puVar18[1];
        uStack_97 = (undefined7)((ulong)puVar18[1] >> 8);
        bStack_a0 = (byte)uVar12;
        bStack_9f = (byte)((ulong)uVar12 >> 8);
        uStack_9e = (undefined2)((ulong)uVar12 >> 0x10);
        uStack_9c = (uint)((ulong)uVar12 >> 0x20);
        lStack_88 = puVar18[3];
        uStack_90 = (undefined1)puVar18[2];
        uStack_8f = (undefined7)((ulong)puVar18[2] >> 8);
        FUN_100615890(&uStack_78,&bStack_a0);
        if (uStack_78 == 0) {
          pbStack_70 = (byte *)(ulong)uStack_74;
        }
        _free(puVar18);
        pbVar22 = pbStack_70;
      }
      else {
        if (bVar5 == 0x12) goto LAB_10121ea84;
        FUN_100615890(&bStack_a0,&bStack_c0);
        uStack_78 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
        pbVar22 = (byte *)CONCAT71(uStack_97,uStack_98);
        if (uStack_78 == 0) {
          pbVar22 = (byte *)(ulong)uStack_9c;
        }
      }
      if ((uStack_78 & 1) == 0) {
        uVar17 = 1;
        pbVar13 = pbVar22;
        goto LAB_10121eba8;
      }
      goto LAB_10121e9d8;
    }
LAB_10121ea84:
    pbVar13 = (byte *)FUN_100e077ec(&bStack_c0);
    uVar17 = 0;
LAB_10121eba8:
    if (lVar16 == 2) {
LAB_10121ebc4:
      uVar12 = 2;
      goto LAB_10121e9c4;
    }
    pbVar23 = pbVar4 + 0x60;
    pbStack_108 = pbVar23;
    if (pbVar4[0x40] == 0x16) goto LAB_10121ebc4;
    uVar12 = *(undefined8 *)(pbVar4 + 0x41);
    uStack_97 = (undefined7)*(undefined8 *)(pbVar4 + 0x49);
    bStack_9f = (byte)uVar12;
    uStack_9e = (undefined2)((ulong)uVar12 >> 8);
    uStack_9c = (uint)((ulong)uVar12 >> 0x18);
    uStack_98 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_88 = *(long *)(pbVar4 + 0x58);
    uStack_90 = (undefined1)*(undefined8 *)(pbVar4 + 0x50);
    uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x50) >> 8);
    pbStack_f0 = (byte *)0x3;
    bStack_a0 = pbVar4[0x40];
    FUN_1004b60cc(&bStack_c0,&bStack_a0);
    uVar7 = CONCAT71(uStack_bf,bStack_c0);
    pbVar22 = (byte *)CONCAT71(uStack_b7,uStack_b8);
    if (uVar7 == 0x8000000000000001) goto LAB_10121e9d8;
    *param_1 = uVar3;
    param_1[1] = uVar14;
    param_1[2] = uVar9;
    param_1[3] = uVar7;
    param_1[4] = (ulong)pbVar22;
    param_1[5] = CONCAT71(uStack_af,uStack_b0);
    *(undefined4 *)(param_1 + 6) = uVar17;
    *(int *)((long)param_1 + 0x34) = (int)pbVar13;
    uVar26 = FUN_100fbc738(&pbStack_110);
    if (uVar26 == 0) goto LAB_10121e96c;
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar26;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      _free(uVar14);
    }
    uVar26 = uVar7 & 0x7fffffffffffffff;
    pbVar4 = pbVar22;
  }
  if (uVar26 != 0) {
    _free(pbVar4);
  }
LAB_10121e96c:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

