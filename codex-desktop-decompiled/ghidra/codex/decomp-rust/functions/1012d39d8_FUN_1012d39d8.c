
void FUN_1012d39d8(ulong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong in_x13;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  byte *unaff_x21;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uStack_130;
  ulong uStack_120;
  int iStack_114;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  ulong uStack_d0;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  byte bStack_a0;
  char cStack_9f;
  undefined2 uStack_9e;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    uVar8 = *(ulong *)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18);
    pbVar20 = unaff_x21 + lVar10 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar18 = unaff_x21;
    pbStack_110 = unaff_x21;
    uStack_100 = uVar8;
    pbStack_f8 = pbVar20;
    if (lVar10 == 0) {
LAB_1012d3f70:
      pbStack_108 = pbVar18;
      pbVar7 = (byte *)FUN_1087e422c(0,&UNK_10b232078,&UNK_10b20a590);
LAB_1012d3f8c:
      *param_1 = 0x8000000000000001;
      param_1[1] = (ulong)pbVar7;
    }
    else {
      pbVar18 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_1012d3f70;
      uVar23 = *(undefined8 *)(unaff_x21 + 1);
      uStack_97 = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_9f = (char)uVar23;
      uStack_9e = (undefined2)((ulong)uVar23 >> 8);
      uStack_9c = (uint)((ulong)uVar23 >> 0x18);
      uStack_98 = (undefined1)((ulong)uVar23 >> 0x38);
      lStack_88 = *(long *)(unaff_x21 + 0x18);
      uStack_90 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar18;
      bStack_a0 = *unaff_x21;
      FUN_1004b60cc(&bStack_c0,&bStack_a0);
      uVar21 = CONCAT71(uStack_bf,bStack_c0);
      pbVar7 = (byte *)CONCAT71(uStack_b7,uStack_b8);
      if (uVar21 == 0x8000000000000001) goto LAB_1012d3f8c;
      if (lVar10 == 1) {
LAB_1012d4034:
        uVar22 = FUN_1087e422c(1,&UNK_10b232078,&UNK_10b20a590);
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar22;
      }
      else {
        uVar22 = CONCAT71(uStack_af,uStack_b0);
        pbVar18 = unaff_x21 + 0x40;
        bVar1 = unaff_x21[0x20];
        pbStack_108 = pbVar18;
        if (bVar1 == 0x16) goto LAB_1012d4034;
        uStack_b7 = (undefined7)*(undefined8 *)(unaff_x21 + 0x29);
        uStack_bf = (undefined7)*(undefined8 *)(unaff_x21 + 0x21);
        uStack_b8 = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 0x21) >> 0x38);
        uStack_a8 = *(undefined8 *)(unaff_x21 + 0x38);
        uStack_b0 = (undefined1)*(undefined8 *)(unaff_x21 + 0x30);
        uStack_af = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x30) >> 8);
        pbStack_f0 = (byte *)0x2;
        bStack_c0 = bVar1;
        if (bVar1 == 0x10) {
LAB_1012d41ac:
          uStack_70 = FUN_100e077ec(&bStack_c0);
          uVar9 = 0;
LAB_1012d4248:
          *param_1 = uVar21;
          param_1[1] = (ulong)pbVar7;
          param_1[2] = uVar22;
          *(undefined4 *)(param_1 + 3) = uVar9;
          *(int *)((long)param_1 + 0x1c) = (int)uStack_70;
          uVar8 = FUN_100fbc738(&pbStack_110);
          if (uVar8 == 0) goto LAB_1012d40c0;
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar8;
          uVar8 = uVar21 & 0x7fffffffffffffff;
          unaff_x21 = pbVar7;
          goto joined_r0x0001012d4270;
        }
        if (bVar1 == 0x11) {
          puVar13 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          uVar23 = *puVar13;
          uStack_98 = (undefined1)puVar13[1];
          uStack_97 = (undefined7)((ulong)puVar13[1] >> 8);
          bStack_a0 = (byte)uVar23;
          cStack_9f = (char)((ulong)uVar23 >> 8);
          uStack_9e = (undefined2)((ulong)uVar23 >> 0x10);
          uStack_9c = (uint)((ulong)uVar23 >> 0x20);
          lStack_88 = puVar13[3];
          uStack_90 = (undefined1)puVar13[2];
          uStack_8f = (undefined7)((ulong)puVar13[2] >> 8);
          FUN_100615890(&uStack_78,&bStack_a0);
          if (uStack_78 == 0) {
            uStack_70 = (ulong)uStack_74;
          }
          _free(puVar13);
        }
        else {
          if (bVar1 == 0x12) goto LAB_1012d41ac;
          FUN_100615890(&bStack_a0,&bStack_c0);
          uStack_78 = CONCAT22(uStack_9e,CONCAT11(cStack_9f,bStack_a0));
          uStack_70 = CONCAT71(uStack_97,uStack_98);
          if (uStack_78 == 0) {
            uStack_70 = (ulong)uStack_9c;
          }
        }
        if ((uStack_78 & 1) == 0) {
          uVar9 = 1;
          goto LAB_1012d4248;
        }
        *param_1 = 0x8000000000000001;
        param_1[1] = uStack_70;
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        _free(pbVar7);
      }
    }
    lVar10 = ((ulong)((long)pbVar20 - (long)pbVar18) >> 5) + 1;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar8 = FUN_108855b04(param_2,&bStack_c0,&UNK_10b20cce0);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar8;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar18 = pbVar20 + lVar10;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    uStack_d0 = 0;
    pbStack_f0 = pbVar20;
    pbStack_d8 = pbVar18;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar21 = 0x8000000000000001;
      iStack_114 = 2;
      uStack_120._0_4_ = 0;
      uStack_130 = in_x13;
    }
    else {
      uVar22 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar16 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar13 = (undefined8 *)((ulong)&bStack_c0 | 1);
      uVar8 = (lVar10 - 0x40U >> 6) + 1;
      iStack_114 = 2;
      uVar21 = 0x8000000000000001;
      pbVar7 = pbVar20;
      uStack_120 = uVar8;
      pbStack_e8 = pbVar20;
      do {
        pbVar19 = pbVar7 + 0x40;
        bVar1 = *pbVar7;
        pbVar20 = pbVar19;
        uVar14 = uVar22;
        if (bVar1 == 0x16) break;
        uVar23 = *(undefined8 *)(pbVar7 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar23;
        uVar23 = *(undefined8 *)(pbVar7 + 1);
        puVar15[1] = *(undefined8 *)(pbVar7 + 9);
        *puVar15 = uVar23;
        pbStack_108 = *(byte **)(pbVar7 + 0x28);
        pbStack_110 = *(byte **)(pbVar7 + 0x20);
        pbStack_f8 = *(byte **)(pbVar7 + 0x38);
        uStack_100 = *(ulong *)(pbVar7 + 0x30);
        piVar4 = (int *)CONCAT71(uStack_97,uStack_98);
        piVar5 = (int *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar1;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            iVar12 = 1;
            if (cStack_9f != '\x01') {
              iVar12 = 2;
            }
            iVar11 = 0;
            if (cStack_9f != '\0') {
              iVar11 = iVar12;
            }
            goto LAB_1012d3d88;
          }
          if (bVar1 == 4) {
            iVar12 = 1;
            if (piVar4 != (int *)0x1) {
              iVar12 = 2;
            }
            iVar11 = 0;
            if (piVar4 != (int *)0x0) {
              iVar11 = iVar12;
            }
            goto LAB_1012d3d88;
          }
          if (bVar1 == 0xc) {
            if (lStack_88 == 5) {
              iVar11 = 1;
              if (*piVar5 != 0x696d696c || (char)piVar5[1] != 't') {
                iVar11 = 2;
              }
            }
            else if (lStack_88 == 6) {
              iVar11 = 2;
              if (*piVar5 == 0x73727563 && (short)piVar5[1] == 0x726f) {
                iVar11 = 0;
              }
            }
            else {
              iVar11 = 2;
            }
            goto joined_r0x0001012d3d08;
          }
LAB_1012d4364:
          uStack_d0 = uVar22 + 1;
          pbStack_e8 = pbVar19;
          uVar8 = FUN_108855b04(&bStack_a0,&bStack_c0,&UNK_10b210e60);
LAB_1012d4384:
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar8;
joined_r0x0001012d43a0:
          if (-0x7fffffffffffffff < (long)uVar21) {
joined_r0x0001012d42f0:
            if (uVar21 != 0) {
              _free(unaff_x21);
            }
          }
LAB_1012d4114:
          FUN_100d34830(&pbStack_f0);
          if ((byte)pbStack_110 != '\x16') {
            FUN_100e077ec(&pbStack_110);
          }
          goto LAB_1012d40c0;
        }
        if (bVar1 == 0xd) {
          if (piVar5 == (int *)0x5) {
            iVar11 = 1;
            if (*piVar4 != 0x696d696c || (char)piVar4[1] != 't') {
              iVar11 = 2;
            }
          }
          else {
            if (piVar5 != (int *)0x6) goto LAB_1012d3d54;
            iVar11 = 2;
            if (*piVar4 == 0x73727563 && (short)piVar4[1] == 0x726f) {
              iVar11 = 0;
            }
          }
LAB_1012d3d88:
          FUN_100e077ec(&bStack_a0);
        }
        else {
          if (bVar1 != 0xe) {
            if (bVar1 != 0xf) goto LAB_1012d4364;
            if (piVar5 == (int *)0x5) {
              if (((((char)*piVar4 != 'l') || (*(char *)((long)piVar4 + 1) != 'i')) ||
                  (*(char *)((long)piVar4 + 2) != 'm')) ||
                 ((*(char *)((long)piVar4 + 3) != 'i' || ((char)piVar4[1] != 't'))))
              goto LAB_1012d3d54;
              iVar11 = 1;
            }
            else if (((piVar5 == (int *)0x6) && ((char)*piVar4 == 'c')) &&
                    ((*(char *)((long)piVar4 + 1) == 'u' &&
                     ((((*(char *)((long)piVar4 + 2) == 'r' && (*(char *)((long)piVar4 + 3) == 's'))
                       && ((char)piVar4[1] == 'o')) && (*(char *)((long)piVar4 + 5) == 'r')))))) {
              iVar11 = 0;
            }
            else {
LAB_1012d3d54:
              iVar11 = 2;
            }
            goto LAB_1012d3d88;
          }
          if (lStack_88 == 5) {
            if ((((char)*piVar5 != 'l') || (*(char *)((long)piVar5 + 1) != 'i')) ||
               ((*(char *)((long)piVar5 + 2) != 'm' ||
                ((*(char *)((long)piVar5 + 3) != 'i' || ((char)piVar5[1] != 't'))))))
            goto LAB_1012d3cd0;
            iVar11 = 1;
          }
          else if ((((lStack_88 == 6) && ((char)*piVar5 == 'c')) &&
                   (*(char *)((long)piVar5 + 1) == 'u')) &&
                  (((*(char *)((long)piVar5 + 2) == 'r' && (*(char *)((long)piVar5 + 3) == 's')) &&
                   (((char)piVar5[1] == 'o' && (*(char *)((long)piVar5 + 5) == 'r')))))) {
            iVar11 = 0;
          }
          else {
LAB_1012d3cd0:
            iVar11 = 2;
          }
joined_r0x0001012d3d08:
          if (piVar4 != (int *)0x0) {
            _free();
          }
        }
        bVar1 = (byte)pbStack_110;
        if (iVar11 == 0) {
          if (uVar21 != 0x8000000000000001) {
            uStack_d0 = uVar22 + 1;
            bStack_c0 = 0xa9;
            uStack_bf = 0x108cac7;
            uStack_b8 = 6;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            cStack_9f = (char)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar19;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar8;
            uVar21 = uVar21 & 0x7fffffffffffffff;
            goto joined_r0x0001012d42f0;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar1 == 0x16) {
            uStack_d0 = uVar22 + 1;
            pbStack_e8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012d4360;
          }
          uVar23 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar23;
          bStack_a0 = bVar1;
          FUN_1004b60cc(&bStack_c0,&bStack_a0);
          uVar21 = CONCAT71(uStack_bf,bStack_c0);
          unaff_x21 = (byte *)CONCAT71(uStack_b7,uStack_b8);
          if (uVar21 != 0x8000000000000001) {
            uStack_130 = CONCAT71(uStack_af,uStack_b0);
            goto LAB_1012d3a98;
          }
          uStack_d0 = uVar22 + 1;
          *param_1 = 0x8000000000000001;
          param_1[1] = (ulong)unaff_x21;
          pbStack_e8 = pbVar19;
          goto LAB_1012d4114;
        }
        if (iVar11 == 1) {
          if (iStack_114 != 2) {
            uStack_d0 = uVar22 + 1;
            bStack_c0 = 0x21;
            uStack_bf = 0x108cadc;
            uStack_b8 = 5;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            cStack_9f = (char)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar19;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_1012d4384;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar1 == 0x16) goto LAB_1012d4278;
          uVar23 = *puVar16;
          puVar13[1] = puVar16[1];
          *puVar13 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar23;
          bStack_c0 = bVar1;
          if (bVar1 == 0x10) {
LAB_1012d3e00:
            FUN_100e077ec(&bStack_c0);
            iStack_114 = 0;
          }
          else {
            if (bVar1 == 0x11) {
              puVar3 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
              uVar23 = *puVar3;
              uStack_98 = (undefined1)puVar3[1];
              uStack_97 = (undefined7)((ulong)puVar3[1] >> 8);
              bStack_a0 = (byte)uVar23;
              cStack_9f = (char)((ulong)uVar23 >> 8);
              uStack_9e = (undefined2)((ulong)uVar23 >> 0x10);
              uStack_9c = (uint)((ulong)uVar23 >> 0x20);
              lStack_88 = puVar3[3];
              uStack_90 = (undefined1)puVar3[2];
              uStack_8f = (undefined7)((ulong)puVar3[2] >> 8);
              FUN_100615890(&uStack_78,&bStack_a0);
              uVar17 = uStack_78;
              uVar14 = uStack_70;
              if (uStack_78 == 0) {
                iStack_114 = 1;
                uVar14 = uStack_120 & 0xffffffff00000000 | (ulong)uStack_74;
              }
              _free(puVar3);
              uStack_120 = uVar14;
            }
            else {
              if (bVar1 == 0x12) goto LAB_1012d3e00;
              FUN_100615890(&bStack_a0,&bStack_c0);
              uVar17 = CONCAT22(uStack_9e,CONCAT11(cStack_9f,bStack_a0));
              uVar14 = uStack_120 & 0xffffffff00000000;
              uStack_120 = CONCAT71(uStack_97,uStack_98);
              if (uVar17 == 0) {
                iStack_114 = 1;
                uStack_120 = uVar14 | uStack_9c;
              }
            }
            if (uVar17 != 0) {
              uStack_d0 = uVar22 + 1;
              *param_1 = 0x8000000000000001;
              param_1[1] = uStack_120;
              pbStack_e8 = pbVar19;
              goto joined_r0x0001012d43a0;
            }
          }
        }
        else {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar1 == 0x16) {
LAB_1012d4278:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            uStack_d0 = uVar22 + 1;
            pbStack_e8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012d4360:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1012d4364);
            (*pcVar6)();
          }
          uVar23 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar23;
          uVar23 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar23;
          bStack_a0 = bVar1;
          FUN_100e077ec(&bStack_a0);
        }
LAB_1012d3a98:
        uVar22 = uVar22 + 1;
        pbVar20 = pbVar18;
        uVar14 = uVar8;
        pbVar7 = pbVar19;
      } while (pbVar19 != pbVar18);
      uStack_d0 = uVar14;
    }
    uVar22 = uStack_d0;
    uVar8 = 0x8000000000000000;
    if (uVar21 != 0x8000000000000001) {
      uVar8 = uVar21;
    }
    *param_1 = uVar8;
    param_1[1] = (ulong)unaff_x21;
    iVar12 = 0;
    if (iStack_114 != 2) {
      iVar12 = iStack_114;
    }
    param_1[2] = uStack_130;
    *(int *)(param_1 + 3) = iVar12;
    *(undefined4 *)((long)param_1 + 0x1c) = (undefined4)uStack_120;
    pbStack_e8 = pbVar20;
    FUN_100d34830(&pbStack_f0);
    if (pbVar18 == pbVar20) goto LAB_1012d40c0;
    bStack_a0 = (byte)uVar22;
    cStack_9f = (char)(uVar22 >> 8);
    uStack_9e = (undefined2)(uVar22 >> 0x10);
    uStack_9c = (uint)(uVar22 >> 0x20);
    uVar21 = FUN_1087e422c(((ulong)((long)pbVar18 - (long)pbVar20) >> 6) + uVar22,&bStack_a0,
                           &UNK_10b23a190);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar21;
    uVar8 = uVar8 & 0x7fffffffffffffff;
  }
joined_r0x0001012d4270:
  if (uVar8 != 0) {
    _free(unaff_x21);
  }
LAB_1012d40c0:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

