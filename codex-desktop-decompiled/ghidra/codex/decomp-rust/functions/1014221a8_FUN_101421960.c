
/* WARNING: Removing unreachable block (ram,0x000101421fb8) */
/* WARNING: Removing unreachable block (ram,0x000101421ebc) */

void FUN_101421960(undefined1 *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  long *plVar8;
  ushort uVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  undefined8 *puVar18;
  char *pcVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  char *pcStack_110;
  char *pcStack_108;
  long lStack_100;
  char *pcStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
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
  int *piStack_88;
  int *piStack_80;
  long lStack_78;
  
  if (*param_2 == '\x14') {
    lVar13 = *(long *)(param_2 + 8);
    pcVar4 = *(char **)(param_2 + 0x10);
    lVar21 = *(long *)(param_2 + 0x18);
    pcVar2 = pcVar4 + lVar21 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pcVar19 = pcVar4;
    pcStack_110 = pcVar4;
    lStack_100 = lVar13;
    pcStack_f8 = pcVar2;
    if (lVar21 == 0) {
LAB_101421e54:
      pcStack_108 = pcVar19;
      lVar20 = FUN_1087e422c(0,&UNK_10b22e408,&UNK_10b20a590);
    }
    else {
      pcVar19 = pcVar4 + 0x20;
      cVar6 = *pcVar4;
      if (cVar6 == '\x16') goto LAB_101421e54;
      uStack_a7 = (undefined7)*(undefined8 *)(pcVar4 + 9);
      uStack_af = (undefined7)*(undefined8 *)(pcVar4 + 1);
      uStack_a8 = (undefined1)((ulong)*(undefined8 *)(pcVar4 + 1) >> 0x38);
      uStack_98 = *(undefined8 *)(pcVar4 + 0x18);
      uStack_a0 = (undefined1)*(undefined8 *)(pcVar4 + 0x10);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pcVar4 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pcStack_108 = pcVar19;
      cStack_b0 = cVar6;
      if (cVar6 == '\x10') {
LAB_101421f48:
        uStack_c0 = 0x300;
        FUN_100e077ec(&cStack_b0);
LAB_101422054:
        uVar9 = uStack_c0;
        cVar6 = cStack_b0;
      }
      else {
        if (cVar6 != '\x11') {
          if (cVar6 == '\x12') goto LAB_101421f48;
          FUN_101423220(&uStack_c0,&cStack_b0);
          goto LAB_101422054;
        }
        plVar8 = (long *)CONCAT71(uStack_a7,uStack_a8);
        piStack_88 = (int *)plVar8[1];
        uStack_90 = (char *)*plVar8;
        lStack_78 = plVar8[3];
        piStack_80 = (int *)plVar8[2];
        FUN_101423220(&uStack_c0,&uStack_90);
        _free(plVar8);
        uVar9 = uStack_c0;
        cVar6 = cStack_b0;
      }
      bVar11 = (char)uStack_c0 != '\x01';
      lVar20 = lStack_b8;
      uStack_c0 = uVar9;
      cStack_b0 = cVar6;
      if (bVar11) {
        if (lVar21 != 1) {
          uStack_c0._1_1_ = (byte)(uVar9 >> 8);
          puVar22 = (undefined8 *)(ulong)uStack_c0._1_1_;
          pcVar19 = pcVar4 + 0x40;
          cStack_b0 = pcVar4[0x20];
          pcStack_108 = pcVar19;
          if (cStack_b0 != '\x16') {
            uStack_a7 = (undefined7)*(undefined8 *)(pcVar4 + 0x29);
            uStack_af = (undefined7)*(undefined8 *)(pcVar4 + 0x21);
            uStack_a8 = (undefined1)((ulong)*(undefined8 *)(pcVar4 + 0x21) >> 0x38);
            uStack_98 = *(undefined8 *)(pcVar4 + 0x38);
            uStack_a0 = (undefined1)*(undefined8 *)(pcVar4 + 0x30);
            uStack_9f = (undefined7)((ulong)*(undefined8 *)(pcVar4 + 0x30) >> 8);
            pbStack_f0 = (byte *)0x2;
            if (cStack_b0 == '\x10') {
LAB_1014220d8:
              uStack_c0 = 0;
              FUN_100e077ec(&cStack_b0);
            }
            else if (cStack_b0 == '\x11') {
              plVar8 = (long *)CONCAT71(uStack_a7,uStack_a8);
              piStack_88 = (int *)plVar8[1];
              uStack_90 = (char *)*plVar8;
              lStack_78 = plVar8[3];
              piStack_80 = (int *)plVar8[2];
              FUN_101429124(&uStack_c0,&uStack_90);
              _free(plVar8);
            }
            else {
              if (cStack_b0 == '\x12') goto LAB_1014220d8;
              FUN_101429124(&uStack_c0,&cStack_b0);
            }
            lVar20 = lStack_b8;
            if ((uStack_c0 & 1) == 0) {
              bVar17 = uStack_c0._1_1_;
              lVar20 = FUN_100fbc738(&pcStack_110);
              bVar11 = lVar20 != 0;
              goto LAB_101421ec4;
            }
            goto LAB_101421e70;
          }
        }
        cStack_b0 = cVar6;
        lVar20 = FUN_1087e422c(1,&UNK_10b22e408,&UNK_10b20a590);
      }
    }
LAB_101421e70:
    lVar21 = ((ulong)((long)pcVar2 - (long)pcVar19) >> 5) + 1;
    while (lVar21 = lVar21 + -1, lVar21 != 0) {
      FUN_100e077ec(pcVar19);
      pcVar19 = pcVar19 + 0x20;
    }
    if (lVar13 != 0) {
      _free(pcVar4);
    }
    bVar17 = 0;
    bVar11 = true;
    puVar22 = (undefined8 *)0x0;
LAB_101421ec4:
    if (!bVar11) {
      uVar12 = 0;
      param_1[1] = bVar17;
      param_1[2] = (char)puVar22;
      goto LAB_101421ee0;
    }
  }
  else {
    if (*param_2 == '\x15') {
      uStack_e0 = *(undefined8 *)(param_2 + 8);
      pbVar24 = *(byte **)(param_2 + 0x10);
      lVar13 = *(long *)(param_2 + 0x18) * 0x40;
      pbVar1 = pbVar24 + lVar13;
      pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
      lStack_d0 = 0;
      pbStack_f0 = pbVar24;
      pbStack_d8 = pbVar1;
      if (*(long *)(param_2 + 0x18) == 0) {
        bVar17 = 0;
        puVar22 = (undefined8 *)0x3;
      }
      else {
        lVar21 = 0;
        puVar25 = (undefined8 *)((ulong)&uStack_90 | 1);
        puVar18 = (undefined8 *)((ulong)&pcStack_110 | 1);
        puVar22 = (undefined8 *)((ulong)&cStack_b0 | 1);
        uVar16 = 4;
        bVar17 = 2;
        pbVar7 = pbVar24;
        pbStack_e8 = pbVar24;
        do {
          pcVar19 = uStack_90;
          pbVar23 = pbVar7 + 0x40;
          bVar5 = *pbVar7;
          lVar20 = lVar21;
          pbVar24 = pbVar23;
          if (bVar5 == 0x16) break;
          uStack_90 = (char *)CONCAT71(uStack_90._1_7_,bVar5);
          pcVar2 = uStack_90;
          uVar26 = *(undefined8 *)(pbVar7 + 0x10);
          *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
          *(undefined8 *)((long)puVar25 + 0xf) = uVar26;
          uVar26 = *(undefined8 *)(pbVar7 + 1);
          puVar25[1] = *(undefined8 *)(pbVar7 + 9);
          *puVar25 = uVar26;
          pcStack_108 = *(char **)(pbVar7 + 0x28);
          pcStack_110 = *(char **)(pbVar7 + 0x20);
          pcStack_f8 = *(char **)(pbVar7 + 0x38);
          lStack_100 = *(long *)(pbVar7 + 0x30);
          if (bVar5 < 0xd) {
            if (bVar5 == 1) {
              uStack_90._1_1_ = SUB81(pcVar19,1);
              iVar15 = 1;
              if (uStack_90._1_1_ != '\x01') {
                iVar15 = 2;
              }
              iVar14 = 0;
              if (uStack_90._1_1_ != '\0') {
                iVar14 = iVar15;
              }
              goto LAB_101421c84;
            }
            if (bVar5 == 4) {
              iVar15 = 1;
              if (piStack_88 != (int *)0x1) {
                iVar15 = 2;
              }
              iVar14 = 0;
              if (piStack_88 != (int *)0x0) {
                iVar14 = iVar15;
              }
              goto LAB_101421c84;
            }
            if (bVar5 == 0xc) {
              if (lStack_78 == 3) {
                iVar14 = 1;
                if ((short)*piStack_80 != 0x7275 || *(char *)((long)piStack_80 + 2) != 'l') {
                  iVar14 = 2;
                }
              }
              else if (lStack_78 == 4) {
                iVar14 = 2;
                if (*piStack_80 == 0x6d726f66) {
                  iVar14 = 0;
                }
              }
              else {
                iVar14 = 2;
              }
              goto joined_r0x000101421c20;
            }
LAB_1014221fc:
            lStack_d0 = lVar21 + 1;
            pbStack_e8 = pbVar23;
            lVar20 = FUN_108855b04(&uStack_90,&cStack_b0,&UNK_10b20fe60);
LAB_101421fcc:
            FUN_100d34830(&pbStack_f0);
            if ((char)pcStack_110 != '\x16') {
              FUN_100e077ec(&pcStack_110);
            }
            bVar17 = 0;
            bVar11 = true;
            goto LAB_101421ec4;
          }
          if (bVar5 == 0xd) {
            if (piStack_80 == (int *)0x3) {
              iVar14 = 1;
              if ((short)*piStack_88 != 0x7275 || *(char *)((long)piStack_88 + 2) != 'l') {
                iVar14 = 2;
              }
            }
            else {
              if (piStack_80 != (int *)0x4) goto LAB_101421c54;
              iVar14 = 2;
              if (*piStack_88 == 0x6d726f66) {
                iVar14 = 0;
              }
            }
LAB_101421c84:
            uStack_90 = pcVar2;
            FUN_100e077ec(&uStack_90);
          }
          else {
            if (bVar5 != 0xe) {
              if (bVar5 != 0xf) goto LAB_1014221fc;
              if (piStack_80 == (int *)0x3) {
                if ((((char)*piStack_88 != 'u') || (*(char *)((long)piStack_88 + 1) != 'r')) ||
                   (*(char *)((long)piStack_88 + 2) != 'l')) goto LAB_101421c54;
                iVar14 = 1;
              }
              else if (((piStack_80 == (int *)0x4) && ((char)*piStack_88 == 'f')) &&
                      ((*(char *)((long)piStack_88 + 1) == 'o' &&
                       ((*(char *)((long)piStack_88 + 2) == 'r' &&
                        (*(char *)((long)piStack_88 + 3) == 'm')))))) {
                iVar14 = 0;
              }
              else {
LAB_101421c54:
                iVar14 = 2;
              }
              goto LAB_101421c84;
            }
            if (lStack_78 == 3) {
              if ((((char)*piStack_80 != 'u') || (*(char *)((long)piStack_80 + 1) != 'r')) ||
                 (*(char *)((long)piStack_80 + 2) != 'l')) goto LAB_101421bec;
              iVar14 = 1;
            }
            else if (((lStack_78 == 4) && ((char)*piStack_80 == 'f')) &&
                    ((*(char *)((long)piStack_80 + 1) == 'o' &&
                     ((*(char *)((long)piStack_80 + 2) == 'r' &&
                      (*(char *)((long)piStack_80 + 3) == 'm')))))) {
              iVar14 = 0;
            }
            else {
LAB_101421bec:
              iVar14 = 2;
            }
joined_r0x000101421c20:
            if (piStack_88 != (int *)0x0) {
              _free();
            }
          }
          cVar6 = (char)pcStack_110;
          if (iVar14 == 0) {
            if (uVar16 != 4) {
              lStack_d0 = lVar21 + 1;
              cStack_b0 = '$';
              uStack_af = 0x108cde4;
              uStack_a8 = 4;
              uStack_a7 = 0;
              uStack_90 = &cStack_b0;
              piStack_88 = (int *)&DAT_100c7b3a0;
              pbStack_e8 = pbVar23;
              lVar20 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_101421fcc;
            }
            pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
            if (cVar6 == '\x16') goto LAB_101422154;
            uVar26 = *puVar18;
            puVar22[1] = puVar18[1];
            *puVar22 = uVar26;
            uVar26 = *(undefined8 *)((long)puVar18 + 0xf);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar26;
            cStack_b0 = cVar6;
            if (cVar6 == '\x10') {
LAB_101421d50:
              uStack_c0 = 0x300;
              FUN_100e077ec(&cStack_b0);
              uVar9 = uStack_c0;
            }
            else if (cVar6 == '\x11') {
              plVar8 = (long *)CONCAT71(uStack_a7,uStack_a8);
              piStack_88 = (int *)plVar8[1];
              uStack_90 = (char *)*plVar8;
              lStack_78 = plVar8[3];
              piStack_80 = (int *)plVar8[2];
              FUN_101423220(&uStack_c0,&uStack_90);
              _free(plVar8);
              uVar9 = uStack_c0;
            }
            else {
              if (cVar6 == '\x12') goto LAB_101421d50;
              FUN_101423220(&uStack_c0,&cStack_b0);
              uVar9 = uStack_c0;
            }
            uStack_c0 = uVar9;
            if ((uVar9 & 1) != 0) goto LAB_101421fbc;
            uStack_c0._1_1_ = (byte)(uVar9 >> 8);
            uVar16 = (uint)uStack_c0._1_1_;
          }
          else if (iVar14 == 1) {
            if (bVar17 != 2) {
              lStack_d0 = lVar21 + 1;
              cStack_b0 = -0x24;
              uStack_af = 0x108cac8;
              uStack_a8 = 3;
              uStack_a7 = 0;
              uStack_90 = &cStack_b0;
              piStack_88 = (int *)&DAT_100c7b3a0;
              pbStack_e8 = pbVar23;
              lVar20 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_101421fcc;
            }
            pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
            if (cVar6 == '\x16') goto LAB_101422154;
            uVar26 = *puVar18;
            puVar22[1] = puVar18[1];
            *puVar22 = uVar26;
            uVar26 = *(undefined8 *)((long)puVar18 + 0xf);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar26;
            cStack_b0 = cVar6;
            if (cVar6 == '\x10') {
LAB_101421a0c:
              uStack_c0 = 0;
              cStack_b0 = cVar6;
              FUN_100e077ec(&cStack_b0);
              uVar9 = uStack_c0;
            }
            else if (cVar6 == '\x11') {
              plVar8 = (long *)CONCAT71(uStack_a7,uStack_a8);
              piStack_88 = (int *)plVar8[1];
              uStack_90 = (char *)*plVar8;
              lStack_78 = plVar8[3];
              piStack_80 = (int *)plVar8[2];
              FUN_101429124(&uStack_c0,&uStack_90);
              _free(plVar8);
              uVar9 = uStack_c0;
            }
            else {
              if (cVar6 == '\x12') goto LAB_101421a0c;
              FUN_101429124(&uStack_c0,&cStack_b0);
              uVar9 = uStack_c0;
            }
            uStack_c0 = uVar9;
            if ((uVar9 & 1) != 0) {
LAB_101421fbc:
              lStack_d0 = lVar21 + 1;
              lVar20 = lStack_b8;
              pbStack_e8 = pbVar23;
              goto LAB_101421fcc;
            }
            uStack_c0._1_1_ = (byte)(uVar9 >> 8);
            bVar17 = uStack_c0._1_1_;
          }
          else {
            pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
            if (cVar6 == '\x16') {
LAB_101422154:
              pcStack_110 = (char *)CONCAT71(pcStack_110._1_7_,0x16);
              lStack_d0 = lVar21 + 1;
              pbStack_e8 = pbVar23;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10142217c);
              (*pcVar10)();
            }
            uVar26 = *puVar18;
            puVar25[1] = puVar18[1];
            *puVar25 = uVar26;
            uVar26 = *(undefined8 *)((long)puVar18 + 0xf);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar26;
            uStack_90 = (char *)CONCAT71(uStack_90._1_7_,cVar6);
            FUN_100e077ec(&uStack_90);
            uVar9 = uStack_c0;
          }
          uStack_c0 = uVar9;
          lVar21 = lVar21 + 1;
          lVar20 = (lVar13 - 0x40U >> 6) + 1;
          pbVar24 = pbVar1;
          pbVar7 = pbVar23;
        } while (pbVar23 != pbVar1);
        bVar17 = bVar17 & 1;
        uVar3 = 3;
        if (uVar16 != 4) {
          uVar3 = uVar16;
        }
        puVar22 = (undefined8 *)(ulong)uVar3;
        lStack_d0 = lVar20;
      }
      lVar13 = lStack_d0;
      pbStack_e8 = pbVar24;
      FUN_100d34830(&pbStack_f0);
      if (pbVar1 == pbVar24) {
        lVar20 = 0;
        bVar11 = false;
      }
      else {
        uStack_90 = (char *)lVar13;
        lVar20 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar24) >> 6) + lVar13,&uStack_90,
                               &UNK_10b23a190);
        bVar11 = lVar20 != 0;
      }
      goto LAB_101421ec4;
    }
    lVar20 = FUN_108855b04(param_2,&cStack_b0,&UNK_10b20b020);
  }
  *(long *)(param_1 + 8) = lVar20;
  uVar12 = 1;
LAB_101421ee0:
  *param_1 = uVar12;
  return;
}

