
void FUN_10140ec48(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int *piVar7;
  uint *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  long lVar12;
  char cVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  char cVar20;
  undefined8 uVar21;
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
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    lVar12 = *(long *)(param_2 + 8);
    pbVar14 = *(byte **)(param_2 + 0x10);
    pbVar1 = pbVar14 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar16 = pbVar14;
    pbStack_e0 = pbVar14;
    lStack_d0 = lVar12;
    pbStack_c8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10140efa8:
      pbStack_d8 = pbVar16;
      lVar17 = FUN_1087e422c(0,&UNK_10b22d220,&UNK_10b20a590);
    }
    else {
      pbVar16 = pbVar14 + 0x20;
      if (*pbVar14 == 0x16) goto LAB_10140efa8;
      uVar21 = *(undefined8 *)(pbVar14 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar14 + 9);
      cStack_97 = (char)uVar21;
      uStack_96 = (undefined6)((ulong)uVar21 >> 8);
      uStack_90 = (undefined1)((ulong)uVar21 >> 0x38);
      lStack_80 = *(long *)(pbVar14 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar14 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar14 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar16;
      bStack_98 = *pbVar14;
      FUN_101226150(&uStack_78,&bStack_98);
      lVar17 = lStack_70;
      if ((char)uStack_78 != '\x01') {
        cVar13 = uStack_78._1_1_;
        lVar17 = FUN_100fbc738(&pbStack_e0);
        goto LAB_10140f100;
      }
    }
    lVar18 = ((ulong)((long)pbVar1 - (long)pbVar16) >> 5) + 1;
    while (lVar18 = lVar18 + -1, lVar18 != 0) {
      FUN_100e077ec(pbVar16);
      pbVar16 = pbVar16 + 0x20;
    }
    if (lVar12 != 0) {
      _free(pbVar14);
    }
LAB_10140eff8:
    cVar13 = (char)pbVar14;
    bVar10 = true;
    if ((bVar5 & 0x1e) != 0x14) {
LAB_10140f0a8:
      FUN_100e077ec(param_2);
    }
LAB_10140f0b0:
    if (!bVar10) {
      uVar11 = 0;
      param_1[1] = cVar13;
      goto LAB_10140f0d0;
    }
  }
  else {
    if (bVar5 == 0x15) {
      uStack_b0 = *(undefined8 *)(param_2 + 8);
      pbVar16 = *(byte **)(param_2 + 0x10);
      lVar12 = *(long *)(param_2 + 0x18) * 0x40;
      pbVar1 = pbVar16 + lVar12;
      pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
      lStack_a0 = 0;
      pbStack_c0 = pbVar16;
      pbStack_a8 = pbVar1;
      if (*(long *)(param_2 + 0x18) == 0) {
        cVar13 = '\x02';
      }
      else {
        lVar17 = 0;
        pbVar14 = (byte *)((ulong)&bStack_98 | 1);
        puVar19 = (undefined8 *)((ulong)&pbStack_e0 | 1);
        cVar20 = '\x03';
        pbVar6 = pbVar16;
        pbStack_b8 = pbVar16;
        do {
          cVar13 = cStack_97;
          pbVar15 = pbVar6 + 0x40;
          bVar4 = *pbVar6;
          pbVar16 = pbVar15;
          lVar18 = lVar17;
          if (bVar4 == 0x16) break;
          uVar21 = *(undefined8 *)(pbVar6 + 0x10);
          *(undefined8 *)(pbVar14 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
          *(undefined8 *)(pbVar14 + 0xf) = uVar21;
          uVar21 = *(undefined8 *)(pbVar6 + 1);
          *(undefined8 *)(pbVar14 + 8) = *(undefined8 *)(pbVar6 + 9);
          *(undefined8 *)pbVar14 = uVar21;
          pbStack_d8 = *(byte **)(pbVar6 + 0x28);
          pbStack_e0 = *(byte **)(pbVar6 + 0x20);
          pbStack_c8 = *(byte **)(pbVar6 + 0x38);
          lStack_d0 = *(long *)(pbVar6 + 0x30);
          piVar7 = (int *)CONCAT71(uStack_8f,uStack_90);
          puVar8 = (uint *)CONCAT71(uStack_87,uStack_88);
          bStack_98 = bVar4;
          if (bVar4 < 0xd) {
            if (bVar4 != 1) {
              if (bVar4 == 4) {
                FUN_100e077ec(&bStack_98);
                if (piVar7 == (int *)0x0) goto LAB_10140eeec;
              }
              else {
                if (bVar4 != 0xc) {
LAB_10140f1c0:
                  lStack_a0 = lVar17 + 1;
                  pbStack_b8 = pbVar15;
                  lVar17 = FUN_108855b04(&bStack_98,&uStack_78,&UNK_10b20f640);
                  goto LAB_10140f12c;
                }
                if (lStack_80 == 7) {
                  uVar3 = *puVar8;
                  uVar2 = *(uint *)((long)puVar8 + 3) ^ 0x64656c62;
                  bVar10 = (uVar3 ^ 0x62616e65) != 0 || uVar2 != 0;
                  if (piVar7 == (int *)0x0) goto LAB_10140eee8;
                  _free();
                  if ((uVar3 ^ 0x62616e65) == 0 && uVar2 == 0) goto LAB_10140eeec;
                }
                else if (piVar7 != (int *)0x0) {
                  _free();
                }
              }
              goto LAB_10140ef40;
            }
            FUN_100e077ec(&bStack_98);
LAB_10140eec8:
            if (cVar13 != '\0') goto LAB_10140ef40;
LAB_10140eeec:
            if (cVar20 != '\x03') {
              lStack_a0 = lVar17 + 1;
              uStack_78 = &UNK_108ca2209;
              lStack_70 = 7;
              bStack_98 = (byte)&uStack_78;
              cStack_97 = (char)((ulong)&uStack_78 >> 8);
              uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              pbStack_b8 = pbVar15;
              lVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
LAB_10140f12c:
              FUN_100d34830(&pbStack_c0);
              if ((byte)pbStack_e0 != '\x16') {
                FUN_100e077ec(&pbStack_e0);
              }
              goto LAB_10140eff8;
            }
            bVar4 = (byte)pbStack_e0;
            pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
            if (bVar4 == 0x16) goto LAB_10140f158;
            uVar21 = *puVar19;
            *(undefined8 *)(pbVar14 + 8) = puVar19[1];
            *(undefined8 *)pbVar14 = uVar21;
            uVar21 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)(pbVar14 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)(pbVar14 + 0xf) = uVar21;
            bStack_98 = bVar4;
            FUN_101226150(&uStack_78,&bStack_98);
            if (((ulong)uStack_78 & 1) != 0) {
              lStack_a0 = lVar17 + 1;
              lVar17 = lStack_70;
              pbStack_b8 = pbVar15;
              goto LAB_10140f12c;
            }
            cVar20 = uStack_78._1_1_;
          }
          else {
            if (bVar4 == 0xd) {
              if (puVar8 == (uint *)0x7) {
                cVar13 = *piVar7 != 0x62616e65 || *(int *)((long)piVar7 + 3) != 0x64656c62;
                FUN_100e077ec(&bStack_98);
                goto LAB_10140eec8;
              }
LAB_10140eed0:
              FUN_100e077ec(&bStack_98);
            }
            else if (bVar4 == 0xe) {
              if ((((lStack_80 == 7) && ((char)*puVar8 == 'e')) &&
                  (*(char *)((long)puVar8 + 1) == 'n')) &&
                 (((*(char *)((long)puVar8 + 2) == 'a' && (*(char *)((long)puVar8 + 3) == 'b')) &&
                  (((char)puVar8[1] == 'l' && (*(char *)((long)puVar8 + 5) == 'e')))))) {
                bVar10 = *(char *)((long)puVar8 + 6) != 'd';
              }
              else {
                bVar10 = true;
              }
              if (piVar7 != (int *)0x0) {
                _free();
              }
LAB_10140eee8:
              if (!bVar10) goto LAB_10140eeec;
            }
            else {
              if (bVar4 != 0xf) goto LAB_10140f1c0;
              if ((((puVar8 != (uint *)0x7) || ((char)*piVar7 != 'e')) ||
                  ((*(char *)((long)piVar7 + 1) != 'n' ||
                   (((*(char *)((long)piVar7 + 2) != 'a' || (*(char *)((long)piVar7 + 3) != 'b')) ||
                    ((char)piVar7[1] != 'l')))))) || (*(char *)((long)piVar7 + 5) != 'e'))
              goto LAB_10140eed0;
              cVar13 = *(char *)((long)piVar7 + 6);
              FUN_100e077ec(&bStack_98);
              if (cVar13 == 'd') goto LAB_10140eeec;
            }
LAB_10140ef40:
            bVar4 = (byte)pbStack_e0;
            pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
            if (bVar4 == 0x16) {
LAB_10140f158:
              lStack_a0 = lVar17 + 1;
              pbStack_b8 = pbVar15;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10140f180);
              (*pcVar9)();
            }
            uVar21 = *puVar19;
            *(undefined8 *)(pbVar14 + 8) = puVar19[1];
            *(undefined8 *)pbVar14 = uVar21;
            uVar21 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)(pbVar14 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)(pbVar14 + 0xf) = uVar21;
            bStack_98 = bVar4;
            FUN_100e077ec(&bStack_98);
          }
          lVar17 = lVar17 + 1;
          pbVar16 = pbVar1;
          lVar18 = (lVar12 - 0x40U >> 6) + 1;
          pbVar6 = pbVar15;
        } while (pbVar15 != pbVar1);
        lStack_a0 = lVar18;
        cVar13 = '\x02';
        if (cVar20 != '\x03') {
          cVar13 = cVar20;
        }
      }
      lVar12 = lStack_a0;
      pbStack_b8 = pbVar16;
      FUN_100d34830(&pbStack_c0);
      if (pbVar1 != pbVar16) {
        bStack_98 = (byte)lVar12;
        cStack_97 = (char)((ulong)lVar12 >> 8);
        uStack_96 = (undefined6)((ulong)lVar12 >> 0x10);
        lVar17 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar16) >> 6) + lVar12,&bStack_98,
                               &UNK_10b23a190);
LAB_10140f100:
        bVar10 = lVar17 != 0;
        if ((bVar5 & 0x1e) == 0x14) goto LAB_10140f0b0;
        goto LAB_10140f0a8;
      }
      lVar17 = 0;
      bVar10 = false;
      goto LAB_10140f0b0;
    }
    lVar17 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20b300);
  }
  *(long *)(param_1 + 8) = lVar17;
  uVar11 = 1;
LAB_10140f0d0:
  *param_1 = uVar11;
  return;
}

