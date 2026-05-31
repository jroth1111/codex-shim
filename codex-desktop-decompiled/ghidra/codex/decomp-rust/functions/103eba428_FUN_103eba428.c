
void FUN_103eba428(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  long *plVar8;
  ushort uVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  char *pcVar21;
  char *pcVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  char *pcStack_110;
  char *pcStack_108;
  long *plStack_100;
  char *pcStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  char *pcStack_d0;
  undefined2 uStack_c0;
  long lStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  ulong *puStack_80;
  long lStack_78;
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    plVar17 = *(long **)(param_2 + 8);
    pcVar3 = *(char **)(param_2 + 0x10);
    pcVar22 = pcVar3 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_f0 = (byte *)0x0;
    pcVar21 = pcVar3;
    pcStack_110 = pcVar3;
    plStack_100 = plVar17;
    pcStack_f8 = pcVar22;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_103eba8c8:
      pcStack_108 = pcVar21;
      lVar19 = func_0x000108978e3c(0,&UNK_10b2f9b90,&UNK_10b2f7378);
    }
    else {
      pcVar21 = pcVar3 + 0x20;
      cVar6 = *pcVar3;
      if (cVar6 == '\x16') goto LAB_103eba8c8;
      uStack_a7 = (undefined7)*(undefined8 *)(pcVar3 + 9);
      uStack_af = (undefined7)*(undefined8 *)(pcVar3 + 1);
      uStack_a8 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 1) >> 0x38);
      uStack_98 = *(undefined8 *)(pcVar3 + 0x18);
      uStack_a0 = (undefined1)*(undefined8 *)(pcVar3 + 0x10);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pcStack_108 = pcVar21;
      cStack_b0 = cVar6;
      if (cVar6 == '\x10') {
LAB_103eba970:
        uStack_c0 = 0x300;
        func_0x000103db23f4(&cStack_b0);
LAB_103ebaa78:
        uVar9 = uStack_c0;
        lVar19 = lStack_b8;
      }
      else {
        if (cVar6 != '\x11') {
          if (cVar6 == '\x12') goto LAB_103eba970;
          func_0x000103eb71a8(&uStack_c0,&cStack_b0);
          goto LAB_103ebaa78;
        }
        plVar8 = (long *)CONCAT71(uStack_a7,uStack_a8);
        plStack_88 = (long *)plVar8[1];
        uStack_90 = (char *)*plVar8;
        lStack_78 = plVar8[3];
        puStack_80 = (ulong *)plVar8[2];
        func_0x000103eb71a8(&uStack_c0,&uStack_90);
        _free(plVar8);
        uVar9 = uStack_c0;
        lVar19 = lStack_b8;
      }
      bVar11 = (char)uStack_c0 != '\x01';
      uStack_c0 = uVar9;
      if (bVar11) {
        uStack_c0._1_1_ = (byte)(uVar9 >> 8);
        plVar17 = (long *)(ulong)uStack_c0._1_1_;
        lVar19 = func_0x000103e32ba0(&pcStack_110);
        goto LAB_103eba9c8;
      }
    }
    lVar13 = ((ulong)((long)pcVar22 - (long)pcVar21) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      func_0x000103db23f4(pcVar21);
      pcVar21 = pcVar21 + 0x20;
    }
    if (plVar17 != (long *)0x0) {
      _free(pcVar3);
    }
    bVar11 = true;
LAB_103eba9e4:
    if (!bVar11) {
      uVar12 = 0;
      param_1[1] = (char)plVar17;
      goto LAB_103eba9fc;
    }
  }
  else {
    if (bVar5 == 0x15) {
      uStack_e0 = *(undefined8 *)(param_2 + 8);
      pbVar24 = *(byte **)(param_2 + 0x10);
      lVar13 = *(long *)(param_2 + 0x18) * 0x40;
      pbVar1 = pbVar24 + lVar13;
      pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
      pcStack_d0 = (char *)0x0;
      pbStack_f0 = pbVar24;
      pbStack_d8 = pbVar1;
      if (*(long *)(param_2 + 0x18) == 0) {
        plVar17 = (long *)0x3;
      }
      else {
        pcVar22 = (char *)0x0;
        puVar25 = (undefined8 *)((ulong)&uStack_90 | 1);
        puVar20 = (undefined8 *)((ulong)&pcStack_110 | 1);
        puVar15 = (undefined8 *)((ulong)&cStack_b0 | 1);
        uVar18 = 4;
        pbVar7 = pbVar24;
        pbStack_e8 = pbVar24;
        do {
          plVar17 = plStack_88;
          pcVar3 = uStack_90;
          pbVar23 = pbVar7 + 0x40;
          bVar4 = *pbVar7;
          pcVar21 = pcVar22;
          pbVar24 = pbVar23;
          if (bVar4 == 0x16) break;
          uStack_90 = (char *)CONCAT71(uStack_90._1_7_,bVar4);
          pcVar21 = uStack_90;
          uVar26 = *(undefined8 *)(pbVar7 + 0x10);
          *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
          *(undefined8 *)((long)puVar25 + 0xf) = uVar26;
          uVar26 = *(undefined8 *)(pbVar7 + 1);
          puVar25[1] = *(undefined8 *)(pbVar7 + 9);
          *puVar25 = uVar26;
          pcStack_108 = *(char **)(pbVar7 + 0x28);
          pcStack_110 = *(char **)(pbVar7 + 0x20);
          pcStack_f8 = *(char **)(pbVar7 + 0x38);
          plStack_100 = *(long **)(pbVar7 + 0x30);
          if (0xc < bVar4) {
            if (bVar4 == 0xd) {
              if (puStack_80 != (ulong *)0xb) {
LAB_103eba758:
                func_0x000103db23f4(&uStack_90);
                goto LAB_103eba7dc;
              }
              cVar6 = *plStack_88 != 0x707075536b736174 ||
                      *(long *)((long)plStack_88 + 3) != 0x74726f707075536b;
              func_0x000103db23f4(&uStack_90);
              goto LAB_103eba750;
            }
            if (bVar4 == 0xe) {
              if (((((lStack_78 == 0xb) && ((char)*puStack_80 == 't')) &&
                   (*(char *)((long)puStack_80 + 1) == 'a')) &&
                  ((*(char *)((long)puStack_80 + 2) == 's' &&
                   (*(char *)((long)puStack_80 + 3) == 'k')))) &&
                 ((*(char *)((long)puStack_80 + 4) == 'S' &&
                  (*(char *)((long)puStack_80 + 5) == 'u')))) {
                bVar11 = true;
                if (((*(char *)((long)puStack_80 + 6) == 'p') &&
                    (*(char *)((long)puStack_80 + 7) == 'p')) &&
                   (((char)puStack_80[1] == 'o' && (*(char *)((long)puStack_80 + 9) == 'r')))) {
                  bVar11 = *(char *)((long)puStack_80 + 10) != 't';
                }
              }
              else {
                bVar11 = true;
              }
              if (plStack_88 != (long *)0x0) {
                _free();
              }
LAB_103eba770:
              if (bVar11) goto LAB_103eba7dc;
            }
            else {
              if (bVar4 != 0xf) goto LAB_103ebaaf4;
              if (((((puStack_80 != (ulong *)0xb) || ((char)*plStack_88 != 't')) ||
                   (*(char *)((long)plStack_88 + 1) != 'a')) ||
                  ((*(char *)((long)plStack_88 + 2) != 's' ||
                   (*(char *)((long)plStack_88 + 3) != 'k')))) ||
                 ((((*(char *)((long)plStack_88 + 4) != 'S' ||
                    ((*(char *)((long)plStack_88 + 5) != 'u' ||
                     (*(char *)((long)plStack_88 + 6) != 'p')))) ||
                   (*(char *)((long)plStack_88 + 7) != 'p')) ||
                  (((char)plStack_88[1] != 'o' || (*(char *)((long)plStack_88 + 9) != 'r'))))))
              goto LAB_103eba758;
              cVar6 = *(char *)((long)plStack_88 + 10);
              func_0x000103db23f4(&uStack_90);
              if (cVar6 != 't') goto LAB_103eba7dc;
              plVar17 = (long *)0x74;
            }
LAB_103eba774:
            if (uVar18 == 4) {
              cVar6 = (char)pcStack_110;
              pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
              if (cVar6 == '\x16') {
LAB_103ebaa8c:
                pcStack_d0 = pcVar22 + 1;
                pbStack_e8 = pbVar23;
                func_0x000108a079f0(&UNK_108dc11c5,0x2c,&UNK_10b3004a0);
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103ebaab4);
                (*pcVar10)();
              }
              uVar26 = *puVar20;
              puVar15[1] = puVar20[1];
              *puVar15 = uVar26;
              uVar26 = *(undefined8 *)((long)puVar20 + 0xf);
              *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
              *(undefined8 *)((long)puVar15 + 0xf) = uVar26;
              cStack_b0 = cVar6;
              if (cVar6 == '\x10') {
LAB_103eba4d0:
                uStack_c0 = 0x300;
                cStack_b0 = cVar6;
                func_0x000103db23f4(&cStack_b0);
                lVar19 = lStack_b8;
              }
              else if (cVar6 == '\x11') {
                plVar8 = (long *)CONCAT71(uStack_a7,uStack_a8);
                plStack_88 = (long *)plVar8[1];
                uStack_90 = (char *)*plVar8;
                lStack_78 = plVar8[3];
                puStack_80 = (ulong *)plVar8[2];
                func_0x000103eb71a8(&uStack_c0,&uStack_90);
                _free(plVar8);
                lVar19 = lStack_b8;
              }
              else {
                if (cVar6 == '\x12') goto LAB_103eba4d0;
                func_0x000103eb71a8(&uStack_c0,&cStack_b0);
                lVar19 = lStack_b8;
              }
              if ((uStack_c0 & 1) == 0) {
                uStack_c0._1_1_ = (byte)(uStack_c0 >> 8);
                uVar18 = (uint)uStack_c0._1_1_;
                lStack_b8 = lVar19;
                goto LAB_103eba4ec;
              }
              pcStack_d0 = pcVar22 + 1;
              pbStack_e8 = pbVar23;
            }
            else {
              pcStack_d0 = pcVar22 + 1;
              cStack_b0 = '\x03';
              uStack_af = 0x108dc1f;
              uStack_a8 = 0xb;
              uStack_a7 = 0;
              uStack_90 = &cStack_b0;
              plStack_88 = (long *)&DAT_103d8be04;
              pbStack_e8 = pbVar23;
              lVar19 = func_0x00010897ca94(s_duplicate_field_____108ac2973,&uStack_90);
            }
LAB_103eba850:
            FUN_103d988cc(&pbStack_f0);
            if ((char)pcStack_110 != '\x16') {
              func_0x000103db23f4(&pcStack_110);
            }
            bVar11 = true;
            goto LAB_103eba9e4;
          }
          if (bVar4 == 1) {
            uStack_90._1_1_ = SUB81(pcVar3,1);
            cVar6 = uStack_90._1_1_;
            uStack_90 = pcVar21;
            func_0x000103db23f4(&uStack_90);
LAB_103eba750:
            if (cVar6 != '\0') goto LAB_103eba7dc;
            plVar17 = (long *)0x0;
            goto LAB_103eba774;
          }
          if (bVar4 != 4) {
            if (bVar4 == 0xc) {
              if (lStack_78 == 0xb) {
                uVar14 = *puStack_80;
                uVar16 = *(ulong *)((long)puStack_80 + 3) ^ 0x74726f707075536b;
                bVar11 = (uVar14 ^ 0x707075536b736174) != 0 || uVar16 != 0;
                if (plStack_88 == (long *)0x0) goto LAB_103eba770;
                _free();
                if ((uVar14 ^ 0x707075536b736174) == 0 && uVar16 == 0) goto LAB_103eba774;
              }
              else if (plStack_88 != (long *)0x0) {
                _free();
              }
              goto LAB_103eba7dc;
            }
LAB_103ebaaf4:
            pcStack_d0 = pcVar22 + 1;
            pbStack_e8 = pbVar23;
            lVar19 = func_0x00010897c8c4(&uStack_90,&cStack_b0,&UNK_10b2f7648);
            goto LAB_103eba850;
          }
          func_0x000103db23f4(&uStack_90);
          if (plVar17 == (long *)0x0) goto LAB_103eba774;
LAB_103eba7dc:
          cVar6 = (char)pcStack_110;
          pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
          if (cVar6 == '\x16') goto LAB_103ebaa8c;
          uVar26 = *puVar20;
          puVar25[1] = puVar20[1];
          *puVar25 = uVar26;
          uVar26 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar25 + 0xf) = uVar26;
          uStack_90 = (char *)CONCAT71(uStack_90._1_7_,cVar6);
          func_0x000103db23f4(&uStack_90);
LAB_103eba4ec:
          pcVar22 = pcVar22 + 1;
          pcVar21 = (char *)((lVar13 - 0x40U >> 6) + 1);
          pbVar24 = pbVar1;
          pbVar7 = pbVar23;
        } while (pbVar23 != pbVar1);
        uVar2 = 3;
        if (uVar18 != 4) {
          uVar2 = uVar18;
        }
        plVar17 = (long *)(ulong)uVar2;
        pcStack_d0 = pcVar21;
      }
      pcVar22 = pcStack_d0;
      pbStack_e8 = pbVar24;
      FUN_103d988cc(&pbStack_f0);
      if (pbVar1 == pbVar24) {
        lVar19 = 0;
      }
      else {
        uStack_90 = pcVar22;
        lVar19 = func_0x000108978e3c(pcVar22 + ((ulong)((long)pbVar1 - (long)pbVar24) >> 6),
                                     &uStack_90,&UNK_10b2fb940);
      }
LAB_103eba9c8:
      bVar11 = lVar19 != 0;
      if ((bVar5 & 0x1e) != 0x14) {
        func_0x000103db23f4(param_2);
      }
      goto LAB_103eba9e4;
    }
    lVar19 = func_0x00010897c8c4(param_2,&cStack_b0,&UNK_10b2f7588);
  }
  *(long *)(param_1 + 8) = lVar19;
  uVar12 = 1;
LAB_103eba9fc:
  *param_1 = uVar12;
  return;
}

