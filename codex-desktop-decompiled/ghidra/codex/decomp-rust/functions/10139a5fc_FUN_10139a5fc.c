
void FUN_10139a5fc(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  long *plVar7;
  ulong *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  byte bVar22;
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
  byte bStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lVar13 = *(long *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    lVar19 = *(long *)(param_2 + 0x18) * 0x20;
    pbStack_c8 = pbVar1 + lVar19;
    pbStack_c0 = (byte *)0x0;
    pbStack_d8 = pbVar1;
    pbStack_e0 = pbVar1;
    lStack_d0 = lVar13;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_10139a9d8:
      bVar15 = 0;
    }
    else {
      pbVar17 = pbVar1 + 0x20;
      bVar22 = *pbVar1;
      pbStack_d8 = pbVar17;
      if (bVar22 == 0x16) goto LAB_10139a9d8;
      uVar11 = *(undefined8 *)(pbVar1 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar1 + 9);
      bStack_97 = (byte)uVar11;
      bVar15 = bStack_97;
      uStack_96 = (undefined6)((ulong)uVar11 >> 8);
      uStack_90 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_80 = *(long *)(pbVar1 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      bStack_98 = bVar22;
      if (bVar22 != 0) {
        uVar11 = FUN_108855b04(&bStack_98,&puStack_78,&UNK_10b20a560);
        *(undefined8 *)(param_1 + 8) = uVar11;
        *param_1 = 1;
        lVar19 = (lVar19 - 0x20U >> 5) + 1;
        while (lVar19 = lVar19 + -1, lVar19 != 0) {
          FUN_100e077ec(pbVar17);
          pbVar17 = pbVar17 + 0x20;
        }
        if (lVar13 != 0) {
          _free(pbVar1);
        }
        goto LAB_10139aa80;
      }
      FUN_100e077ec(&bStack_98);
    }
    param_1[1] = bVar15;
    lVar13 = FUN_100fbc738(&pbStack_e0);
    if (lVar13 == 0) {
      *param_1 = 0;
      goto LAB_10139aa80;
    }
LAB_10139aa28:
    *(long *)(param_1 + 8) = lVar13;
    uVar12 = 1;
  }
  else {
    if (bVar3 != 0x15) {
      uVar11 = FUN_108855b04(param_2,&puStack_78,&UNK_10b20c8c0);
      *(undefined8 *)(param_1 + 8) = uVar11;
      *param_1 = 1;
      return;
    }
    uStack_b0 = *(undefined8 *)(param_2 + 8);
    pbVar17 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbVar17 + lVar13;
    pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
    lStack_a0 = 0;
    pbStack_c0 = pbVar17;
    pbStack_a8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar22 = 0;
    }
    else {
      lVar19 = 0;
      puVar16 = (undefined8 *)((ulong)&bStack_98 | 1);
      puVar21 = (undefined8 *)((ulong)&pbStack_e0 | 1);
      bVar22 = 2;
      pbVar6 = pbVar17;
      pbStack_b8 = pbVar17;
      do {
        bVar15 = bStack_97;
        pbVar18 = pbVar6 + 0x40;
        bVar2 = *pbVar6;
        pbVar17 = pbVar18;
        lVar20 = lVar19;
        if (bVar2 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar6 + 1);
        puVar16[1] = *(undefined8 *)(pbVar6 + 9);
        *puVar16 = uVar11;
        pbStack_d8 = *(byte **)(pbVar6 + 0x28);
        pbStack_e0 = *(byte **)(pbVar6 + 0x20);
        pbStack_c8 = *(byte **)(pbVar6 + 0x38);
        lStack_d0 = *(long *)(pbVar6 + 0x30);
        plVar7 = (long *)CONCAT71(uStack_8f,uStack_90);
        puVar8 = (ulong *)CONCAT71(uStack_87,uStack_88);
        bStack_98 = bVar2;
        if (bVar2 < 0xd) {
          if (bVar2 != 1) {
            if (bVar2 == 4) {
              FUN_100e077ec(&bStack_98);
              if (plVar7 == (long *)0x0) goto LAB_10139a924;
            }
            else {
              if (bVar2 != 0xc) {
LAB_10139ab40:
                lStack_a0 = lVar19 + 1;
                pbStack_b8 = pbVar18;
                uVar11 = FUN_108855b04(&bStack_98,&puStack_78,&UNK_10b20dc60);
                goto LAB_10139ab60;
              }
              if (lStack_80 == 0xc) {
                uVar14 = *puVar8;
                uVar5 = (uint)puVar8[1] ^ 0x6e656b6f;
                bVar10 = (uVar14 ^ 0x5468736572666572) != 0 || uVar5 != 0;
                if (plVar7 == (long *)0x0) goto LAB_10139a920;
                _free();
                if ((uVar14 ^ 0x5468736572666572) == 0 && uVar5 == 0) goto LAB_10139a924;
              }
              else if (plVar7 != (long *)0x0) {
                _free();
              }
            }
            goto LAB_10139a970;
          }
          FUN_100e077ec(&bStack_98);
LAB_10139a900:
          if (bVar15 != 0) goto LAB_10139a970;
LAB_10139a924:
          bVar15 = bStack_97;
          if (bVar22 != 2) {
            lStack_a0 = lVar19 + 1;
            puStack_78 = &UNK_108cbc0eb;
            uStack_70 = 0xc;
            bStack_98 = (byte)&puStack_78;
            bStack_97 = (byte)((ulong)&puStack_78 >> 8);
            uStack_96 = (undefined6)((ulong)&puStack_78 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_b8 = pbVar18;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
LAB_10139ab60:
            *(undefined8 *)(param_1 + 8) = uVar11;
            *param_1 = 1;
            FUN_100d34830(&pbStack_c0);
            if ((byte)pbStack_e0 != '\x16') {
              FUN_100e077ec(&pbStack_e0);
            }
            goto LAB_10139aa80;
          }
          bVar22 = (byte)pbStack_e0;
          pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
          if (bVar22 == 0x16) goto LAB_10139aab4;
          uVar11 = *puVar21;
          puVar16[1] = puVar21[1];
          *puVar16 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
          bStack_98 = bVar22;
          if (bVar22 != 0) {
            lStack_a0 = lVar19 + 1;
            pbStack_b8 = pbVar18;
            uVar11 = FUN_108855b04(&bStack_98,&puStack_78,&UNK_10b20a560);
            goto LAB_10139ab60;
          }
          FUN_100e077ec(&bStack_98);
          bVar22 = bVar15;
        }
        else {
          if (bVar2 == 0xd) {
            if (puVar8 == (ulong *)0xc) {
              bVar15 = *plVar7 != 0x5468736572666572 || (int)plVar7[1] != 0x6e656b6f;
              FUN_100e077ec(&bStack_98);
              goto LAB_10139a900;
            }
LAB_10139a908:
            FUN_100e077ec(&bStack_98);
          }
          else if (bVar2 == 0xe) {
            if (((((lStack_80 == 0xc) && ((char)*puVar8 == 'r')) &&
                 (*(char *)((long)puVar8 + 1) == 'e')) &&
                (((*(char *)((long)puVar8 + 2) == 'f' && (*(char *)((long)puVar8 + 3) == 'r')) &&
                 ((*(char *)((long)puVar8 + 4) == 'e' &&
                  ((*(char *)((long)puVar8 + 5) == 's' && (*(char *)((long)puVar8 + 6) == 'h')))))))
                ) && ((*(char *)((long)puVar8 + 7) == 'T' &&
                      ((((char)puVar8[1] == 'o' && (*(char *)((long)puVar8 + 9) == 'k')) &&
                       (*(char *)((long)puVar8 + 10) == 'e')))))) {
              bVar10 = *(char *)((long)puVar8 + 0xb) != 'n';
            }
            else {
              bVar10 = true;
            }
            if (plVar7 != (long *)0x0) {
              _free();
            }
LAB_10139a920:
            if (!bVar10) goto LAB_10139a924;
          }
          else {
            if (bVar2 != 0xf) goto LAB_10139ab40;
            if ((((puVar8 != (ulong *)0xc) || ((char)*plVar7 != 'r')) ||
                ((*(char *)((long)plVar7 + 1) != 'e' ||
                 ((*(char *)((long)plVar7 + 2) != 'f' || (*(char *)((long)plVar7 + 3) != 'r'))))))
               || ((*(char *)((long)plVar7 + 4) != 'e' ||
                   (((((*(char *)((long)plVar7 + 5) != 's' || (*(char *)((long)plVar7 + 6) != 'h'))
                      || (*(char *)((long)plVar7 + 7) != 'T')) ||
                     (((char)plVar7[1] != 'o' || (*(char *)((long)plVar7 + 9) != 'k')))) ||
                    (*(char *)((long)plVar7 + 10) != 'e')))))) goto LAB_10139a908;
            cVar4 = *(char *)((long)plVar7 + 0xb);
            FUN_100e077ec(&bStack_98);
            if (cVar4 == 'n') goto LAB_10139a924;
          }
LAB_10139a970:
          bVar15 = (byte)pbStack_e0;
          pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
          if (bVar15 == 0x16) {
LAB_10139aab4:
            lStack_a0 = lVar19 + 1;
            pbStack_b8 = pbVar18;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10139aadc);
            (*pcVar9)();
          }
          uVar11 = *puVar21;
          puVar16[1] = puVar21[1];
          *puVar16 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
          bStack_98 = bVar15;
          FUN_100e077ec(&bStack_98);
        }
        lVar19 = lVar19 + 1;
        pbVar17 = pbVar1;
        lVar20 = (lVar13 - 0x40U >> 6) + 1;
        pbVar6 = pbVar18;
      } while (pbVar18 != pbVar1);
      bVar22 = bVar22 & 1;
      lStack_a0 = lVar20;
    }
    lVar13 = lStack_a0;
    param_1[1] = bVar22;
    *param_1 = 0;
    pbStack_b8 = pbVar17;
    FUN_100d34830(&pbStack_c0);
    if (pbVar1 != pbVar17) {
      bStack_98 = (byte)lVar13;
      bStack_97 = (byte)((ulong)lVar13 >> 8);
      uStack_96 = (undefined6)((ulong)lVar13 >> 0x10);
      lVar13 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar17) >> 6) + lVar13,&bStack_98,
                             &UNK_10b23a190);
      goto LAB_10139aa28;
    }
    uVar12 = 0;
  }
  *param_1 = uVar12;
LAB_10139aa80:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

