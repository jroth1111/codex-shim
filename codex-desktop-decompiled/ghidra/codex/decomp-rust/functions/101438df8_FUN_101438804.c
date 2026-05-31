
void FUN_101438804(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  long *plVar7;
  ulong *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 uVar22;
  byte *pbStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  byte bStack_98;
  char cStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    lVar12 = *(long *)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    pbVar1 = pbVar16 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar18 = pbVar16;
    pbStack_e0 = pbVar16;
    lStack_d0 = lVar12;
    pbStack_c8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101438be4:
      pbStack_d8 = pbVar18;
      lVar19 = FUN_1087e422c(0,&UNK_10b22d970,&UNK_10b20a590);
    }
    else {
      pbVar18 = pbVar16 + 0x20;
      if (*pbVar16 == 0x16) goto LAB_101438be4;
      uVar22 = *(undefined8 *)(pbVar16 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar16 + 9);
      cStack_97 = (char)uVar22;
      uStack_96 = (undefined6)((ulong)uVar22 >> 8);
      uStack_90 = (undefined1)((ulong)uVar22 >> 0x38);
      lStack_80 = *(long *)(pbVar16 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar16 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar16 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar18;
      bStack_98 = *pbVar16;
      FUN_101226150(&uStack_78,&bStack_98);
      lVar19 = lStack_70;
      if ((char)uStack_78 != '\x01') {
        pbVar16 = (byte *)((ulong)uStack_78 >> 8 & 0xff);
        lVar19 = FUN_100fbc738(&pbStack_e0);
        goto LAB_101438d3c;
      }
    }
    lVar15 = ((ulong)((long)pbVar1 - (long)pbVar18) >> 5) + 1;
    while (lVar15 = lVar15 + -1, lVar15 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
    if (lVar12 == 0) {
LAB_101438d90:
      bVar10 = true;
      if ((bVar4 & 0x1e) != 0x14) {
LAB_101438ce4:
        FUN_100e077ec(param_2);
      }
    }
    else {
      _free(pbVar16);
      bVar10 = true;
    }
LAB_101438cec:
    if (!bVar10) {
      uVar11 = 0;
      param_1[1] = (char)pbVar16;
      goto LAB_101438d0c;
    }
  }
  else {
    if (bVar4 == 0x15) {
      uStack_b0 = *(undefined8 *)(param_2 + 8);
      pbVar18 = *(byte **)(param_2 + 0x10);
      lVar12 = *(long *)(param_2 + 0x18) * 0x40;
      pbVar1 = pbVar18 + lVar12;
      pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
      lStack_a0 = 0;
      pbStack_c0 = pbVar18;
      pbStack_a8 = pbVar1;
      if (*(long *)(param_2 + 0x18) == 0) {
        pbVar16 = (byte *)0x2;
      }
      else {
        lVar19 = 0;
        pbVar16 = (byte *)((ulong)&bStack_98 | 1);
        puVar20 = (undefined8 *)((ulong)&pbStack_e0 | 1);
        uVar21 = 3;
        pbVar6 = pbVar18;
        pbStack_b8 = pbVar18;
        do {
          cVar5 = cStack_97;
          pbVar17 = pbVar6 + 0x40;
          bVar3 = *pbVar6;
          pbVar18 = pbVar17;
          lVar15 = lVar19;
          if (bVar3 == 0x16) break;
          uVar22 = *(undefined8 *)(pbVar6 + 0x10);
          *(undefined8 *)(pbVar16 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
          *(undefined8 *)(pbVar16 + 0xf) = uVar22;
          uVar22 = *(undefined8 *)(pbVar6 + 1);
          *(undefined8 *)(pbVar16 + 8) = *(undefined8 *)(pbVar6 + 9);
          *(undefined8 *)pbVar16 = uVar22;
          pbStack_d8 = *(byte **)(pbVar6 + 0x28);
          pbStack_e0 = *(byte **)(pbVar6 + 0x20);
          pbStack_c8 = *(byte **)(pbVar6 + 0x38);
          lStack_d0 = *(long *)(pbVar6 + 0x30);
          plVar7 = (long *)CONCAT71(uStack_8f,uStack_90);
          puVar8 = (ulong *)CONCAT71(uStack_87,uStack_88);
          bStack_98 = bVar3;
          if (0xc < bVar3) {
            if (bVar3 == 0xd) {
              if (puVar8 != (ulong *)0xb) {
LAB_101438b08:
                FUN_100e077ec(&bStack_98);
                goto LAB_101438b7c;
              }
              cVar5 = *plVar7 != 0x6e6168437473696c ||
                      *(long *)((long)plVar7 + 3) != 0x6465676e61684374;
              FUN_100e077ec(&bStack_98);
              goto LAB_101438b00;
            }
            if (bVar3 == 0xe) {
              if ((((((lStack_80 == 0xb) && ((char)*puVar8 == 'l')) &&
                    (*(char *)((long)puVar8 + 1) == 'i')) &&
                   ((*(char *)((long)puVar8 + 2) == 's' && (*(char *)((long)puVar8 + 3) == 't'))))
                  && (((*(char *)((long)puVar8 + 4) == 'C' &&
                       ((*(char *)((long)puVar8 + 5) == 'h' && (*(char *)((long)puVar8 + 6) == 'a'))
                       )) && (*(char *)((long)puVar8 + 7) == 'n')))) &&
                 (((char)puVar8[1] == 'g' && (*(char *)((long)puVar8 + 9) == 'e')))) {
                bVar10 = *(char *)((long)puVar8 + 10) != 'd';
              }
              else {
                bVar10 = true;
              }
              if (plVar7 != (long *)0x0) {
                _free();
              }
LAB_101438b20:
              if (bVar10) goto LAB_101438b7c;
            }
            else {
              if (bVar3 != 0xf) goto LAB_101438e0c;
              if (((((puVar8 != (ulong *)0xb) || ((char)*plVar7 != 'l')) ||
                   (*(char *)((long)plVar7 + 1) != 'i')) ||
                  (((*(char *)((long)plVar7 + 2) != 's' || (*(char *)((long)plVar7 + 3) != 't')) ||
                   ((*(char *)((long)plVar7 + 4) != 'C' ||
                    ((*(char *)((long)plVar7 + 5) != 'h' || (*(char *)((long)plVar7 + 6) != 'a')))))
                   ))) || ((*(char *)((long)plVar7 + 7) != 'n' ||
                           (((char)plVar7[1] != 'g' || (*(char *)((long)plVar7 + 9) != 'e'))))))
              goto LAB_101438b08;
              cVar5 = *(char *)((long)plVar7 + 10);
              FUN_100e077ec(&bStack_98);
              if (cVar5 != 'd') goto LAB_101438b7c;
            }
LAB_101438b24:
            if (uVar21 == 3) {
              bVar3 = (byte)pbStack_e0;
              pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
              if (bVar3 == 0x16) {
LAB_101438da4:
                lStack_a0 = lVar19 + 1;
                pbStack_b8 = pbVar17;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x101438dcc);
                (*pcVar9)();
              }
              uVar22 = *puVar20;
              *(undefined8 *)(pbVar16 + 8) = puVar20[1];
              *(undefined8 *)pbVar16 = uVar22;
              uVar22 = *(undefined8 *)((long)puVar20 + 0xf);
              *(undefined8 *)(pbVar16 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
              *(undefined8 *)(pbVar16 + 0xf) = uVar22;
              bStack_98 = bVar3;
              FUN_101226150(&uStack_78,&bStack_98);
              if (((ulong)uStack_78 & 1) == 0) {
                uVar21 = (uint)uStack_78._1_1_;
                goto LAB_1014388a0;
              }
              lStack_a0 = lVar19 + 1;
              lVar19 = lStack_70;
              pbStack_b8 = pbVar17;
            }
            else {
              lStack_a0 = lVar19 + 1;
              uStack_78 = &UNK_108cb7da7;
              lStack_70 = 0xb;
              bStack_98 = (byte)&uStack_78;
              cStack_97 = (char)((ulong)&uStack_78 >> 8);
              uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              pbStack_b8 = pbVar17;
              lVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
            }
LAB_101438d68:
            FUN_100d34830(&pbStack_c0);
            if ((byte)pbStack_e0 != '\x16') {
              FUN_100e077ec(&pbStack_e0);
            }
            goto LAB_101438d90;
          }
          if (bVar3 == 1) {
            FUN_100e077ec(&bStack_98);
LAB_101438b00:
            if (cVar5 != '\0') goto LAB_101438b7c;
            goto LAB_101438b24;
          }
          if (bVar3 != 4) {
            if (bVar3 == 0xc) {
              if (lStack_80 == 0xb) {
                uVar13 = *puVar8;
                uVar14 = *(ulong *)((long)puVar8 + 3) ^ 0x6465676e61684374;
                bVar10 = (uVar13 ^ 0x6e6168437473696c) != 0 || uVar14 != 0;
                if (plVar7 == (long *)0x0) goto LAB_101438b20;
                _free();
                if ((uVar13 ^ 0x6e6168437473696c) == 0 && uVar14 == 0) goto LAB_101438b24;
              }
              else if (plVar7 != (long *)0x0) {
                _free();
              }
              goto LAB_101438b7c;
            }
LAB_101438e0c:
            lStack_a0 = lVar19 + 1;
            pbStack_b8 = pbVar17;
            lVar19 = FUN_108855b04(&bStack_98,&uStack_78,&UNK_10b20e9a0);
            goto LAB_101438d68;
          }
          FUN_100e077ec(&bStack_98);
          if (plVar7 == (long *)0x0) goto LAB_101438b24;
LAB_101438b7c:
          bVar3 = (byte)pbStack_e0;
          pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
          if (bVar3 == 0x16) goto LAB_101438da4;
          uVar22 = *puVar20;
          *(undefined8 *)(pbVar16 + 8) = puVar20[1];
          *(undefined8 *)pbVar16 = uVar22;
          uVar22 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)(pbVar16 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)(pbVar16 + 0xf) = uVar22;
          bStack_98 = bVar3;
          FUN_100e077ec(&bStack_98);
LAB_1014388a0:
          lVar19 = lVar19 + 1;
          pbVar18 = pbVar1;
          lVar15 = (lVar12 - 0x40U >> 6) + 1;
          pbVar6 = pbVar17;
        } while (pbVar17 != pbVar1);
        uVar2 = 2;
        if (uVar21 != 3) {
          uVar2 = uVar21;
        }
        pbVar16 = (byte *)(ulong)uVar2;
        lStack_a0 = lVar15;
      }
      lVar12 = lStack_a0;
      pbStack_b8 = pbVar18;
      FUN_100d34830(&pbStack_c0);
      if (pbVar1 != pbVar18) {
        bStack_98 = (byte)lVar12;
        cStack_97 = (char)((ulong)lVar12 >> 8);
        uStack_96 = (undefined6)((ulong)lVar12 >> 0x10);
        lVar19 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar18) >> 6) + lVar12,&bStack_98,
                               &UNK_10b23a190);
LAB_101438d3c:
        bVar10 = lVar19 != 0;
        if ((bVar4 & 0x1e) == 0x14) goto LAB_101438cec;
        goto LAB_101438ce4;
      }
      lVar19 = 0;
      bVar10 = false;
      goto LAB_101438cec;
    }
    lVar19 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20ac00);
  }
  *(long *)(param_1 + 8) = lVar19;
  uVar11 = 1;
LAB_101438d0c:
  *param_1 = uVar11;
  return;
}

