
void FUN_101251ec4(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong unaff_x21;
  ulong unaff_x22;
  byte *pbVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined *puStack_78;
  undefined8 uStack_70;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lVar12 = *(long *)(param_2 + 8);
    pbVar19 = *(byte **)(param_2 + 0x10);
    lVar16 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar19 + lVar16 * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar14 = pbVar19;
    pbStack_e0 = pbVar19;
    lStack_d0 = lVar12;
    pbStack_c8 = pbVar1;
    if (lVar16 == 0) {
LAB_101252334:
      pbStack_d8 = pbVar14;
      uVar9 = FUN_1087e422c(0,&UNK_10b22d170,&UNK_10b20a590);
    }
    else {
      pbVar14 = pbVar19 + 0x20;
      if (*pbVar19 == 0x16) goto LAB_101252334;
      uVar20 = *(undefined8 *)(pbVar19 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar19 + 9);
      cStack_97 = (char)uVar20;
      uStack_96 = (undefined6)((ulong)uVar20 >> 8);
      uStack_90 = (undefined1)((ulong)uVar20 >> 0x38);
      lStack_80 = *(long *)(pbVar19 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar19 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar14;
      bStack_98 = *pbVar19;
      auVar21 = FUN_100617a90(&bStack_98);
      uVar9 = auVar21._8_8_;
      if (auVar21._0_8_ != 1) {
        if (lVar16 != 1) {
          pbVar14 = pbVar19 + 0x40;
          pbStack_d8 = pbVar14;
          if (pbVar19[0x20] != 0x16) {
            uVar20 = *(undefined8 *)(pbVar19 + 0x21);
            uStack_8f = (undefined7)*(undefined8 *)(pbVar19 + 0x29);
            cStack_97 = (char)uVar20;
            uStack_96 = (undefined6)((ulong)uVar20 >> 8);
            uStack_90 = (undefined1)((ulong)uVar20 >> 0x38);
            lStack_80 = *(long *)(pbVar19 + 0x38);
            uStack_88 = (undefined1)*(undefined8 *)(pbVar19 + 0x30);
            uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x30) >> 8);
            pbStack_c0 = (byte *)0x2;
            bStack_98 = pbVar19[0x20];
            auVar22 = FUN_100617a90(&bStack_98);
            uVar9 = auVar22._8_8_;
            if (auVar22._0_8_ != 1) {
              param_1[1] = auVar21._8_8_;
              param_1[2] = uVar9;
              uVar9 = FUN_100fbc738(&pbStack_e0);
              if (uVar9 == 0) {
                *param_1 = 0;
              }
              else {
                *param_1 = 1;
                param_1[1] = uVar9;
              }
              goto LAB_1012524ac;
            }
            goto LAB_10125234c;
          }
        }
        uVar9 = FUN_1087e422c(1,&UNK_10b22d170,&UNK_10b20a590);
      }
    }
LAB_10125234c:
    *param_1 = 1;
    param_1[1] = uVar9;
    lVar16 = ((ulong)((long)pbVar1 - (long)pbVar14) >> 5) + 1;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      FUN_100e077ec(pbVar14);
      pbVar14 = pbVar14 + 0x20;
    }
    if (lVar12 != 0) {
      _free(pbVar19);
    }
    goto LAB_1012524ac;
  }
  if (bVar3 != 0x15) {
    uVar9 = FUN_108855b04(param_2,&puStack_78,&UNK_10b20bd60);
    *param_1 = 1;
    param_1[1] = uVar9;
    return;
  }
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  pbStack_c0 = *(byte **)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar14 = pbStack_c0 + lVar12;
  pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
  lStack_a0 = 0;
  pbStack_b8 = pbStack_c0;
  pbStack_a8 = pbVar14;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_10125244c:
    puStack_78 = &UNK_108ca1af1;
    uStack_70 = 5;
    bStack_98 = (byte)&puStack_78;
    cStack_97 = (char)((ulong)&puStack_78 >> 8);
    uStack_96 = (undefined6)((ulong)&puStack_78 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
  }
  else {
    lVar16 = 0;
    bVar6 = false;
    bVar7 = false;
    puVar15 = (undefined8 *)((ulong)&bStack_98 | 1);
    puVar13 = (undefined8 *)((ulong)&pbStack_e0 | 1);
    pbVar1 = pbStack_c0;
    pbStack_b8 = pbStack_c0;
    do {
      pbVar18 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      lVar17 = lVar16;
      pbVar19 = pbVar18;
      if (bVar2 == 0x16) break;
      uVar20 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar15 + 0xf) = uVar20;
      uVar20 = *(undefined8 *)(pbVar1 + 1);
      puVar15[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar15 = uVar20;
      pbStack_d8 = *(byte **)(pbVar1 + 0x28);
      pbStack_e0 = *(byte **)(pbVar1 + 0x20);
      pbStack_c8 = *(byte **)(pbVar1 + 0x38);
      lStack_d0 = *(long *)(pbVar1 + 0x30);
      piVar4 = (int *)CONCAT71(uStack_8f,uStack_90);
      piVar5 = (int *)CONCAT71(uStack_87,uStack_88);
      bStack_98 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          iVar11 = 1;
          if (cStack_97 != '\x01') {
            iVar11 = 2;
          }
          iVar10 = 0;
          if (cStack_97 != '\0') {
            iVar10 = iVar11;
          }
        }
        else {
          if (bVar2 != 4) {
            if (bVar2 == 0xc) {
              if (lStack_80 == 3) {
                iVar10 = 1;
                if ((short)*piVar5 != 0x6e65 || *(char *)((long)piVar5 + 2) != 'd') {
                  iVar10 = 2;
                }
              }
              else if (lStack_80 == 5) {
                iVar10 = 2;
                if (*piVar5 == 0x72617473 && (char)piVar5[1] == 't') {
                  iVar10 = 0;
                }
              }
              else {
                iVar10 = 2;
              }
              goto joined_r0x0001012521b0;
            }
LAB_101252668:
            lStack_a0 = lVar16 + 1;
            pbStack_b8 = pbVar18;
            uVar9 = FUN_108855b04(&bStack_98,&puStack_78,&UNK_10b20ef00);
            goto LAB_101252488;
          }
          iVar11 = 1;
          if (piVar4 != (int *)0x1) {
            iVar11 = 2;
          }
          iVar10 = 0;
          if (piVar4 != (int *)0x0) {
            iVar10 = iVar11;
          }
        }
LAB_101252214:
        FUN_100e077ec(&bStack_98);
      }
      else {
        if (bVar2 == 0xd) {
          if (piVar5 == (int *)0x3) {
            iVar10 = 1;
            if ((short)*piVar4 != 0x6e65 || *(char *)((long)piVar4 + 2) != 'd') {
              iVar10 = 2;
            }
          }
          else {
            if (piVar5 != (int *)0x5) goto LAB_1012521e4;
            iVar10 = 2;
            if (*piVar4 == 0x72617473 && (char)piVar4[1] == 't') {
              iVar10 = 0;
            }
          }
          goto LAB_101252214;
        }
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_101252668;
          if (piVar5 == (int *)0x3) {
            if ((((char)*piVar4 != 'e') || (*(char *)((long)piVar4 + 1) != 'n')) ||
               (*(char *)((long)piVar4 + 2) != 'd')) goto LAB_1012521e4;
            iVar10 = 1;
          }
          else if ((((piVar5 == (int *)0x5) && ((char)*piVar4 == 's')) &&
                   ((*(char *)((long)piVar4 + 1) == 't' &&
                    ((*(char *)((long)piVar4 + 2) == 'a' && (*(char *)((long)piVar4 + 3) == 'r')))))
                   ) && ((char)piVar4[1] == 't')) {
            iVar10 = 0;
          }
          else {
LAB_1012521e4:
            iVar10 = 2;
          }
          goto LAB_101252214;
        }
        if (lStack_80 == 3) {
          if ((((char)*piVar5 != 'e') || (*(char *)((long)piVar5 + 1) != 'n')) ||
             (*(char *)((long)piVar5 + 2) != 'd')) goto LAB_10125217c;
          iVar10 = 1;
        }
        else if (((lStack_80 == 5) && ((char)*piVar5 == 's')) &&
                (((*(char *)((long)piVar5 + 1) == 't' &&
                  ((*(char *)((long)piVar5 + 2) == 'a' && (*(char *)((long)piVar5 + 3) == 'r')))) &&
                 ((char)piVar5[1] == 't')))) {
          iVar10 = 0;
        }
        else {
LAB_10125217c:
          iVar10 = 2;
        }
joined_r0x0001012521b0:
        if (piVar4 != (int *)0x0) {
          _free();
        }
      }
      bVar2 = (byte)pbStack_e0;
      if (iVar10 == 0) {
        if (bVar6) {
          lStack_a0 = lVar16 + 1;
          puStack_78 = &UNK_108ca1af1;
          uStack_70 = 5;
          bStack_98 = (byte)&puStack_78;
          cStack_97 = (char)((ulong)&puStack_78 >> 8);
          uStack_96 = (undefined6)((ulong)&puStack_78 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_b8 = pbVar18;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          goto LAB_101252488;
        }
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar2 == 0x16) goto LAB_1012525a4;
        uVar20 = *puVar13;
        puVar15[1] = puVar13[1];
        *puVar15 = uVar20;
        uVar20 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar20;
        bStack_98 = bVar2;
        auVar21 = FUN_100617a90(&bStack_98);
        uVar9 = auVar21._8_8_;
        if ((auVar21._0_8_ & 1) != 0) {
LAB_101252538:
          lStack_a0 = lVar16 + 1;
          pbStack_b8 = pbVar18;
          goto LAB_101252488;
        }
        bVar6 = true;
        unaff_x21 = uVar9;
      }
      else if (iVar10 == 1) {
        if (bVar7) {
          lStack_a0 = lVar16 + 1;
          puStack_78 = &UNK_108cad86e;
          uStack_70 = 3;
          bStack_98 = (byte)&puStack_78;
          cStack_97 = (char)((ulong)&puStack_78 >> 8);
          uStack_96 = (undefined6)((ulong)&puStack_78 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_b8 = pbVar18;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          goto LAB_101252488;
        }
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar2 == 0x16) goto LAB_1012525a4;
        uVar20 = *puVar13;
        puVar15[1] = puVar13[1];
        *puVar15 = uVar20;
        uVar20 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar20;
        bStack_98 = bVar2;
        auVar21 = FUN_100617a90(&bStack_98);
        uVar9 = auVar21._8_8_;
        if ((auVar21._0_8_ & 1) != 0) goto LAB_101252538;
        bVar7 = true;
        unaff_x22 = uVar9;
      }
      else {
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar2 == 0x16) {
LAB_1012525a4:
          pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
          lStack_a0 = lVar16 + 1;
          pbStack_b8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1012525d0);
          (*pcVar8)();
        }
        uVar20 = *puVar13;
        puVar15[1] = puVar13[1];
        *puVar15 = uVar20;
        uVar20 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar20;
        bStack_98 = bVar2;
        FUN_100e077ec(&bStack_98);
      }
      lVar16 = lVar16 + 1;
      lVar17 = (lVar12 - 0x40U >> 6) + 1;
      pbVar19 = pbVar14;
      pbVar1 = pbVar18;
    } while (pbVar18 != pbVar14);
    pbStack_b8 = pbVar19;
    lStack_a0 = lVar17;
    if (!bVar6) goto LAB_10125244c;
    if (bVar7) {
      param_1[1] = unaff_x21;
      param_1[2] = unaff_x22;
      *param_1 = 0;
      FUN_100d34830(&pbStack_c0);
      if (pbVar14 != pbVar19) {
        bStack_98 = (byte)lVar17;
        cStack_97 = (char)((ulong)lVar17 >> 8);
        uStack_96 = (undefined6)((ulong)lVar17 >> 0x10);
        uVar9 = FUN_1087e422c(((ulong)((long)pbVar14 - (long)pbVar19) >> 6) + lVar17,&bStack_98,
                              &UNK_10b23a190);
        param_1[1] = uVar9;
      }
      *param_1 = (ulong)(pbVar14 != pbVar19);
      goto LAB_1012524ac;
    }
    puStack_78 = &UNK_108cad86e;
    uStack_70 = 3;
    bStack_98 = (byte)&puStack_78;
    cStack_97 = (char)((ulong)&puStack_78 >> 8);
    uStack_96 = (undefined6)((ulong)&puStack_78 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
  }
LAB_101252488:
  *param_1 = 1;
  param_1[1] = uVar9;
  FUN_100d34830(&pbStack_c0);
  if ((byte)pbStack_e0 != '\x16') {
    FUN_100e077ec(&pbStack_e0);
  }
LAB_1012524ac:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

