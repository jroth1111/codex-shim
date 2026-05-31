
void FUN_101460248(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *unaff_x28;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_168;
  byte bStack_160;
  char cStack_15f;
  undefined6 uStack_15e;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    pbVar18 = *(byte **)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18);
    pbVar14 = pbVar1 + lVar11 * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar16 = pbVar1;
    pbStack_e0 = pbVar1;
    pbStack_d0 = pbVar18;
    pbStack_c8 = pbVar14;
    if (lVar11 == 0) {
LAB_1014607f8:
      pbStack_d8 = pbVar16;
      pbVar19 = (byte *)FUN_1087e422c(0,&UNK_10b22e7d8,&UNK_10b20a590);
LAB_101460814:
      bStack_160 = 0;
      cStack_15f = 0;
      uStack_15e = 0x800000000000;
      uStack_158 = SUB81(pbVar19,0);
      uStack_157 = (undefined7)((ulong)pbVar19 >> 8);
    }
    else {
      pbVar16 = pbVar1 + 0x20;
      bStack_160 = *pbVar1;
      if (bStack_160 == 0x16) goto LAB_1014607f8;
      uVar8 = *(undefined8 *)(pbVar1 + 1);
      uStack_157 = (undefined7)*(undefined8 *)(pbVar1 + 9);
      cStack_15f = (char)uVar8;
      uStack_15e = (undefined6)((ulong)uVar8 >> 8);
      uStack_158 = (undefined1)((ulong)uVar8 >> 0x38);
      pbStack_148 = *(byte **)(pbVar1 + 0x18);
      uStack_150 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
      uStack_14f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar16;
      FUN_10129bb14(&pbStack_80,&bStack_160);
      pbVar20 = pbStack_70;
      pbVar19 = pbStack_78;
      pbVar17 = pbStack_80;
      if (pbStack_80 == (byte *)0x8000000000000000) goto LAB_101460814;
      pbStack_98 = pbStack_80;
      pbStack_90 = pbStack_78;
      pbStack_88 = pbStack_70;
      if (lVar11 == 1) {
LAB_1014608d0:
        pbVar7 = (byte *)FUN_1087e422c(1,&UNK_10b22e7d8,&UNK_10b20a590);
LAB_1014608e8:
        bStack_160 = 0;
        cStack_15f = 0;
        uStack_15e = 0x800000000000;
        uStack_158 = SUB81(pbVar7,0);
        uStack_157 = (undefined7)((ulong)pbVar7 >> 8);
        if (pbVar20 != (byte *)0x0) {
          pbVar7 = pbVar19 + 0x20;
          do {
            if (*(long *)(pbVar7 + -0x20) != 0) {
              _free(*(undefined8 *)(pbVar7 + -0x18));
            }
            if (*(long *)(pbVar7 + -8) != 0) {
              _free(*(undefined8 *)pbVar7);
            }
            pbVar7 = pbVar7 + 0x38;
            pbVar20 = pbVar20 + -1;
          } while (pbVar20 != (byte *)0x0);
        }
        if (pbVar17 != (byte *)0x0) {
          _free(pbVar19);
        }
      }
      else {
        pbVar16 = pbVar1 + 0x40;
        pbStack_d8 = pbVar16;
        if (pbVar1[0x20] == 0x16) goto LAB_1014608d0;
        uVar8 = *(undefined8 *)(pbVar1 + 0x21);
        uStack_157 = (undefined7)*(undefined8 *)(pbVar1 + 0x29);
        cStack_15f = (char)uVar8;
        uStack_15e = (undefined6)((ulong)uVar8 >> 8);
        uStack_158 = (undefined1)((ulong)uVar8 >> 0x38);
        pbStack_148 = *(byte **)(pbVar1 + 0x38);
        uStack_150 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
        uStack_14f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
        pbStack_c0 = (byte *)0x2;
        bStack_160 = pbVar1[0x20];
        FUN_1004b5b34(&pbStack_80,&bStack_160);
        pbVar7 = pbStack_78;
        if (pbStack_80 == (byte *)0x8000000000000000) goto LAB_1014608e8;
        pbStack_138 = pbStack_70;
        uStack_158 = SUB81(pbStack_90,0);
        uStack_157 = (undefined7)((ulong)pbStack_90 >> 8);
        bStack_160 = (byte)pbStack_98;
        cStack_15f = (char)((ulong)pbStack_98 >> 8);
        uStack_15e = (undefined6)((ulong)pbStack_98 >> 0x10);
        uStack_150 = SUB81(pbStack_88,0);
        uStack_14f = (undefined7)((ulong)pbStack_88 >> 8);
        pbStack_148 = pbStack_80;
        pbStack_140 = pbStack_78;
        if (pbStack_98 != (byte *)0x8000000000000000) {
          pbStack_128 = pbStack_90;
          pbStack_130 = pbStack_98;
          pbStack_120 = pbStack_88;
          pbStack_118 = pbStack_80;
          pbStack_108 = pbStack_70;
          pbStack_110 = pbStack_78;
          lVar11 = FUN_100fbc738(&pbStack_e0);
          if (lVar11 != 0) {
            bStack_160 = 0;
            cStack_15f = 0;
            uStack_15e = 0x800000000000;
            uStack_158 = (undefined1)lVar11;
            uStack_157 = (undefined7)((ulong)lVar11 >> 8);
            FUN_100e24ac8(&pbStack_130);
          }
          goto LAB_101460d08;
        }
      }
    }
    lVar11 = ((ulong)((long)pbVar14 - (long)pbVar16) >> 5) + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100e077ec(pbVar16);
      pbVar16 = pbVar16 + 0x20;
    }
    if (pbVar18 != (byte *)0x0) {
      _free(pbVar1);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar8 = FUN_108855b04(param_2,&pbStack_80,&UNK_10b20a720);
      goto LAB_101460d30;
    }
    uStack_100 = *(undefined8 *)(param_2 + 8);
    pbStack_110 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar16 = pbStack_110 + lVar11;
    pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
    pbStack_f0 = (byte *)0x0;
    pbStack_b0 = (byte *)0x8000000000000000;
    pbVar14 = param_1;
    pbStack_f8 = pbVar16;
    if (*(long *)(param_2 + 0x18) == 0) {
      pbStack_98 = (byte *)0x8000000000000000;
      pbStack_b0 = (byte *)0x8000000000000000;
      pbStack_168 = (byte *)0x8000000000000000;
      pbStack_108 = pbStack_110;
LAB_101460964:
      pbStack_80 = &UNK_108cad9de;
      pbStack_78 = (byte *)0x7;
      bStack_160 = (byte)&pbStack_80;
      cStack_15f = (char)((ulong)&pbStack_80 >> 8);
      uStack_15e = (undefined6)((ulong)&pbStack_80 >> 0x10);
      uStack_158 = 0xa0;
      uStack_157 = 0x100c7b3;
      pbVar19 = (byte *)0x8000000000000000;
      uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_160);
LAB_101460998:
      uStack_158 = (undefined1)uVar8;
      uStack_157 = (undefined7)((ulong)uVar8 >> 8);
joined_r0x000101460b74:
      uStack_15e = 0x800000000000;
      cStack_15f = 0;
      bStack_160 = 0;
      if (pbStack_168 != (byte *)0x8000000000000000) {
joined_r0x000101460c74:
        uStack_15e = 0x800000000000;
        cStack_15f = 0;
        bStack_160 = 0;
        if (pbVar14 != (byte *)0x0) {
          uStack_15e = 0x800000000000;
          cStack_15f = 0;
          bStack_160 = 0;
          pbVar16 = pbStack_178 + 8;
          do {
            if (*(long *)(pbVar16 + -8) != 0) {
              _free(*(undefined8 *)pbVar16);
            }
            pbVar16 = pbVar16 + 0x18;
            pbVar14 = pbVar14 + -1;
          } while (pbVar14 != (byte *)0x0);
        }
        if (pbStack_168 != (byte *)0x0) {
          _free(pbStack_178);
          pbVar19 = pbStack_b0;
        }
      }
LAB_101460c88:
      pbVar16 = pbStack_a8;
      if (pbVar19 != (byte *)0x8000000000000000) {
        if (pbStack_a0 != (byte *)0x0) {
          pbVar14 = pbStack_a8 + 0x20;
          pbVar18 = pbStack_a0;
          do {
            if (*(long *)(pbVar14 + -0x20) != 0) {
              _free(*(undefined8 *)(pbVar14 + -0x18));
            }
            if (*(long *)(pbVar14 + -8) != 0) {
              _free(*(undefined8 *)pbVar14);
            }
            pbVar14 = pbVar14 + 0x38;
            pbVar18 = pbVar18 + -1;
          } while (pbVar18 != (byte *)0x0);
        }
        if (pbVar19 != (byte *)0x0) {
          _free(pbVar16);
        }
      }
LAB_101460ce4:
      FUN_100d34830(&pbStack_110);
      if ((byte)pbStack_130 != '\x16') {
        FUN_100e077ec(&pbStack_130);
      }
    }
    else {
      pbVar18 = (byte *)0x0;
      puVar13 = (undefined8 *)((ulong)&bStack_160 | 1);
      puVar12 = (undefined8 *)((ulong)&pbStack_130 | 1);
      pbStack_168 = (byte *)0x8000000000000000;
      pbVar20 = (byte *)0x8000000000000000;
      pbVar19 = (byte *)0x8000000000000000;
      pbVar1 = pbStack_110;
      pbStack_108 = pbStack_110;
      do {
        pbVar15 = pbVar1 + 0x40;
        bStack_160 = *pbVar1;
        pbVar17 = pbVar15;
        pbVar7 = pbVar18;
        if (bStack_160 == 0x16) break;
        uVar8 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
        uVar8 = *(undefined8 *)(pbVar1 + 1);
        puVar13[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar13 = uVar8;
        pbStack_128 = *(byte **)(pbVar1 + 0x28);
        pbStack_130 = *(byte **)(pbVar1 + 0x20);
        pbStack_118 = *(byte **)(pbVar1 + 0x38);
        pbStack_120 = *(byte **)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_157,uStack_158);
        plVar4 = (long *)CONCAT71(uStack_14f,uStack_150);
        pbStack_a0 = unaff_x28;
        if (bStack_160 < 0xd) {
          if (bStack_160 == 1) {
            iVar10 = 1;
            if (cStack_15f != '\x01') {
              iVar10 = 2;
            }
            iVar9 = 0;
            if (cStack_15f != '\0') {
              iVar9 = iVar10;
            }
          }
          else {
            if (bStack_160 != 4) {
              if (bStack_160 == 0xc) {
                if (pbStack_148 == (byte *)0xa) {
                  iVar9 = 1;
                  if (*plVar4 != 0x4974756f6c6c6f72 || (short)plVar4[1] != 0x7364) {
                    iVar9 = 2;
                  }
                }
                else if (pbStack_148 == (byte *)0x7) {
                  iVar9 = 2;
                  if ((int)*plVar4 == 0x72746e65 && *(int *)((long)plVar4 + 3) == 0x73656972) {
                    iVar9 = 0;
                  }
                }
                else {
                  iVar9 = 2;
                }
                goto joined_r0x0001014605dc;
              }
LAB_101460e8c:
              pbStack_f0 = pbVar18 + 1;
              pbStack_90 = pbStack_178;
              pbStack_a8 = pbStack_180;
              pbStack_108 = pbVar15;
              pbStack_b0 = pbVar19;
              pbStack_98 = pbVar20;
              pbStack_88 = pbVar14;
              uVar8 = FUN_108855b04(&bStack_160,&pbStack_80,&UNK_10b211f00);
              goto LAB_101460998;
            }
            iVar10 = 1;
            if (plVar3 != (long *)0x1) {
              iVar10 = 2;
            }
            iVar9 = 0;
            if (plVar3 != (long *)0x0) {
              iVar9 = iVar10;
            }
          }
LAB_1014606a0:
          FUN_100e077ec(&bStack_160);
        }
        else {
          if (bStack_160 == 0xd) {
            if (plVar4 == (long *)0xa) {
              iVar9 = 1;
              if (*plVar3 != 0x4974756f6c6c6f72 || (short)plVar3[1] != 0x7364) {
                iVar9 = 2;
              }
            }
            else {
              if (plVar4 != (long *)0x7) goto LAB_101460664;
              iVar9 = 2;
              if ((int)*plVar3 == 0x72746e65 && *(int *)((long)plVar3 + 3) == 0x73656972) {
                iVar9 = 0;
              }
            }
            goto LAB_1014606a0;
          }
          if (bStack_160 != 0xe) {
            if (bStack_160 != 0xf) goto LAB_101460e8c;
            if (plVar4 == (long *)0xa) {
              if ((((((((char)*plVar3 != 'r') || (*(char *)((long)plVar3 + 1) != 'o')) ||
                     (*(char *)((long)plVar3 + 2) != 'l')) ||
                    ((*(char *)((long)plVar3 + 3) != 'l' || (*(char *)((long)plVar3 + 4) != 'o'))))
                   || ((*(char *)((long)plVar3 + 5) != 'u' ||
                       ((*(char *)((long)plVar3 + 6) != 't' || (*(char *)((long)plVar3 + 7) != 'I'))
                       )))) || ((char)plVar3[1] != 'd')) || (*(char *)((long)plVar3 + 9) != 's'))
              goto LAB_101460664;
              iVar9 = 1;
            }
            else if ((((plVar4 == (long *)0x7) && ((char)*plVar3 == 'e')) &&
                     (*(char *)((long)plVar3 + 1) == 'n')) &&
                    (((*(char *)((long)plVar3 + 2) == 't' && (*(char *)((long)plVar3 + 3) == 'r'))
                     && ((*(char *)((long)plVar3 + 4) == 'i' &&
                         ((*(char *)((long)plVar3 + 5) == 'e' &&
                          (*(char *)((long)plVar3 + 6) == 's')))))))) {
              iVar9 = 0;
            }
            else {
LAB_101460664:
              iVar9 = 2;
            }
            goto LAB_1014606a0;
          }
          if (pbStack_148 == (byte *)0xa) {
            if ((((((char)*plVar4 != 'r') || (*(char *)((long)plVar4 + 1) != 'o')) ||
                 (*(char *)((long)plVar4 + 2) != 'l')) ||
                (((*(char *)((long)plVar4 + 3) != 'l' || (*(char *)((long)plVar4 + 4) != 'o')) ||
                 (((*(char *)((long)plVar4 + 5) != 'u' ||
                   ((*(char *)((long)plVar4 + 6) != 't' || (*(char *)((long)plVar4 + 7) != 'I'))))
                  || ((char)plVar4[1] != 'd')))))) || (*(char *)((long)plVar4 + 9) != 's'))
            goto LAB_10146059c;
            iVar9 = 1;
          }
          else if (((((pbStack_148 == (byte *)0x7) && ((char)*plVar4 == 'e')) &&
                    (*(char *)((long)plVar4 + 1) == 'n')) &&
                   ((*(char *)((long)plVar4 + 2) == 't' && (*(char *)((long)plVar4 + 3) == 'r'))))
                  && ((*(char *)((long)plVar4 + 4) == 'i' &&
                      ((*(char *)((long)plVar4 + 5) == 'e' && (*(char *)((long)plVar4 + 6) == 's')))
                      ))) {
            iVar9 = 0;
          }
          else {
LAB_10146059c:
            iVar9 = 2;
          }
joined_r0x0001014605dc:
          if (plVar3 != (long *)0x0) {
            _free();
          }
        }
        bVar5 = (byte)pbStack_130;
        if (iVar9 == 0) {
          if (pbVar19 != (byte *)0x8000000000000000) {
            pbStack_f0 = pbVar18 + 1;
            pbStack_90 = pbStack_178;
            pbStack_a8 = pbStack_180;
            pbStack_80 = &UNK_108cad9de;
            pbStack_78 = (byte *)0x7;
            bStack_160 = (byte)&pbStack_80;
            cStack_15f = (char)((ulong)&pbStack_80 >> 8);
            uStack_15e = (undefined6)((ulong)&pbStack_80 >> 0x10);
            uStack_158 = 0xa0;
            uStack_157 = 0x100c7b3;
            pbStack_108 = pbVar15;
            pbStack_b0 = pbVar19;
            pbStack_98 = pbVar20;
            pbStack_88 = pbVar14;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_160);
            goto LAB_101460998;
          }
          pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
          if (bVar5 == 0x16) {
            pbStack_f0 = pbVar18 + 1;
            pbStack_90 = pbStack_178;
            pbStack_b0 = (byte *)0x8000000000000000;
            pbStack_a8 = pbStack_180;
            pbStack_108 = pbVar15;
            pbStack_98 = pbVar20;
            pbStack_88 = pbVar14;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101460e88;
          }
          uVar8 = *puVar12;
          puVar13[1] = puVar12[1];
          *puVar13 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
          bStack_160 = bVar5;
          FUN_10129bb14(&pbStack_80,&bStack_160);
          if (pbStack_80 == (byte *)0x8000000000000000) {
            pbStack_f0 = pbVar18 + 1;
            pbVar19 = (byte *)0x8000000000000000;
            pbStack_b0 = (byte *)0x8000000000000000;
            uStack_158 = SUB81(pbStack_78,0);
            uStack_157 = (undefined7)((ulong)pbStack_78 >> 8);
            pbStack_a8 = pbStack_180;
            pbStack_90 = pbStack_178;
            pbStack_108 = pbVar15;
            pbStack_98 = pbVar20;
            pbStack_88 = pbVar14;
            goto joined_r0x000101460b74;
          }
          pbStack_180 = pbStack_78;
          pbVar19 = pbStack_80;
          unaff_x28 = pbStack_70;
        }
        else if (iVar9 == 1) {
          if (pbStack_168 != (byte *)0x8000000000000000) {
            pbStack_f0 = pbVar18 + 1;
            pbStack_90 = pbStack_178;
            pbStack_a8 = pbStack_180;
            pbStack_80 = &UNK_108cade85;
            pbStack_78 = (byte *)0xa;
            bStack_160 = (byte)&pbStack_80;
            cStack_15f = (char)((ulong)&pbStack_80 >> 8);
            uStack_15e = (undefined6)((ulong)&pbStack_80 >> 0x10);
            uStack_158 = 0xa0;
            uStack_157 = 0x100c7b3;
            pbStack_108 = pbVar15;
            pbStack_b0 = pbVar19;
            pbStack_98 = pbVar20;
            pbStack_88 = pbVar14;
            uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_160);
            uStack_158 = (undefined1)uVar8;
            uStack_157 = (undefined7)((ulong)uVar8 >> 8);
            goto joined_r0x000101460c74;
          }
          pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
          if (bVar5 == 0x16) {
            pbStack_f0 = pbVar18 + 1;
            pbStack_90 = pbStack_178;
            pbStack_a8 = pbStack_180;
            pbStack_108 = pbVar15;
            pbStack_b0 = pbVar19;
            pbStack_98 = pbVar20;
            pbStack_88 = pbVar14;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101460e88;
          }
          uVar8 = *puVar12;
          puVar13[1] = puVar12[1];
          *puVar13 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
          bStack_160 = bVar5;
          FUN_1004b5b34(&pbStack_80,&bStack_160);
          pbStack_168 = pbStack_80;
          if (pbStack_80 == (byte *)0x8000000000000000) {
            pbStack_f0 = pbVar18 + 1;
            pbStack_a8 = pbStack_180;
            bStack_160 = 0;
            cStack_15f = 0;
            uStack_15e = 0x800000000000;
            uStack_158 = SUB81(pbStack_78,0);
            uStack_157 = (undefined7)((ulong)pbStack_78 >> 8);
            pbStack_108 = pbVar15;
            goto LAB_101460c88;
          }
          pbStack_178 = pbStack_78;
          pbVar20 = pbStack_80;
          pbVar14 = pbStack_70;
        }
        else {
          pbStack_130 = (byte *)CONCAT71(pbStack_130._1_7_,0x16);
          if (bVar5 == 0x16) {
            pbStack_f0 = pbVar18 + 1;
            pbStack_90 = pbStack_178;
            pbStack_a8 = pbStack_180;
            pbStack_108 = pbVar15;
            pbStack_b0 = pbVar19;
            pbStack_98 = pbVar20;
            pbStack_88 = pbVar14;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101460e88:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101460e8c);
            (*pcVar6)();
          }
          uVar8 = *puVar12;
          puVar13[1] = puVar12[1];
          *puVar13 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
          bStack_160 = bVar5;
          FUN_100e077ec(&bStack_160);
        }
        pbVar18 = pbVar18 + 1;
        pbVar17 = pbVar16;
        pbVar7 = (byte *)((lVar11 - 0x40U >> 6) + 1);
        pbVar1 = pbVar15;
      } while (pbVar15 != pbVar16);
      pbStack_90 = pbStack_178;
      pbStack_a8 = pbStack_180;
      pbStack_108 = pbVar17;
      pbStack_f0 = pbVar7;
      pbStack_b0 = pbVar19;
      pbStack_a0 = unaff_x28;
      pbStack_98 = pbVar20;
      pbStack_88 = pbVar14;
      if (pbVar19 == (byte *)0x8000000000000000) goto LAB_101460964;
      if (pbStack_168 == (byte *)0x8000000000000000) {
        pbStack_80 = &UNK_108cade85;
        pbStack_78 = (byte *)0xa;
        bStack_160 = (byte)&pbStack_80;
        cStack_15f = (char)((ulong)&pbStack_80 >> 8);
        uStack_15e = (undefined6)((ulong)&pbStack_80 >> 0x10);
        uStack_158 = 0xa0;
        uStack_157 = 0x100c7b3;
        uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_160);
        bStack_160 = 0;
        cStack_15f = 0;
        uStack_15e = 0x800000000000;
        uStack_158 = (undefined1)uVar8;
        uStack_157 = (undefined7)((ulong)uVar8 >> 8);
        if (unaff_x28 != (byte *)0x0) {
          pbVar16 = pbStack_180 + 0x20;
          do {
            if (*(long *)(pbVar16 + -0x20) != 0) {
              _free(*(undefined8 *)(pbVar16 + -0x18));
            }
            if (*(long *)(pbVar16 + -8) != 0) {
              _free(*(undefined8 *)pbVar16);
            }
            pbVar16 = pbVar16 + 0x38;
            unaff_x28 = unaff_x28 + -1;
          } while (unaff_x28 != (byte *)0x0);
        }
        if (pbVar19 != (byte *)0x0) {
          _free(pbStack_180);
        }
        goto LAB_101460ce4;
      }
      uStack_158 = SUB81(pbStack_180,0);
      uStack_157 = (undefined7)((ulong)pbStack_180 >> 8);
      bStack_160 = (byte)pbVar19;
      cStack_15f = (char)((ulong)pbVar19 >> 8);
      uStack_15e = (undefined6)((ulong)pbVar19 >> 0x10);
      uStack_150 = SUB81(unaff_x28,0);
      uStack_14f = (undefined7)((ulong)unaff_x28 >> 8);
      pbStack_148 = pbStack_168;
      pbStack_140 = pbStack_178;
      pbStack_138 = pbVar14;
      if (pbVar19 == (byte *)0x8000000000000000) goto LAB_101460ce4;
      pbStack_d8 = pbStack_180;
      pbStack_c8 = pbStack_168;
      pbStack_c0 = pbStack_178;
      pbStack_e0 = pbVar19;
      pbStack_d0 = unaff_x28;
      pbStack_b8 = pbVar14;
      FUN_100d34830(&pbStack_110);
      if (pbVar16 != pbVar17) {
        pbStack_80 = pbVar7;
        uVar8 = FUN_1087e422c(pbVar7 + ((ulong)((long)pbVar16 - (long)pbVar17) >> 6),&pbStack_80,
                              &UNK_10b23a190);
        bStack_160 = 0;
        cStack_15f = 0;
        uStack_15e = 0x800000000000;
        uStack_158 = (undefined1)uVar8;
        uStack_157 = (undefined7)((ulong)uVar8 >> 8);
        FUN_100e24ac8(&pbStack_e0);
      }
    }
  }
LAB_101460d08:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_15e,CONCAT11(cStack_15f,bStack_160)) != -0x8000000000000000) {
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_157,uStack_158);
    *(ulong *)param_1 = CONCAT62(uStack_15e,CONCAT11(cStack_15f,bStack_160));
    *(byte **)(param_1 + 0x18) = pbStack_148;
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_14f,uStack_150);
    *(byte **)(param_1 + 0x28) = pbStack_138;
    *(byte **)(param_1 + 0x20) = pbStack_140;
    return;
  }
  uVar8 = CONCAT71(uStack_157,uStack_158);
LAB_101460d30:
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80;
  *(undefined8 *)(param_1 + 8) = uVar8;
  return;
}

