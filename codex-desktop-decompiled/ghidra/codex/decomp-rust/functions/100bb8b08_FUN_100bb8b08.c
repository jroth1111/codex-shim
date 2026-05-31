
void FUN_100bb8b08(undefined2 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  undefined2 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined2 uStack_e8;
  undefined2 uStack_e4;
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
  undefined8 uStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    lVar15 = *(long *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    lVar20 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar2 + lVar20 * 0x20;
    pbStack_c0 = (byte *)0x0;
    pbVar17 = pbVar2;
    pbStack_e0 = pbVar2;
    lStack_d0 = lVar15;
    pbStack_c8 = pbVar1;
    if (lVar20 == 0) {
LAB_100bb8f0c:
      pbStack_d8 = pbVar17;
      uVar12 = FUN_1087e422c(0,&UNK_10b232900,&UNK_10b20a590);
    }
    else {
      pbVar17 = pbVar2 + 0x20;
      if (*pbVar2 == 0x16) goto LAB_100bb8f0c;
      uVar12 = *(undefined8 *)(pbVar2 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar2 + 9);
      cStack_97 = (char)uVar12;
      uStack_96 = (undefined6)((ulong)uVar12 >> 8);
      uStack_90 = (undefined1)((ulong)uVar12 >> 0x38);
      lStack_80 = *(long *)(pbVar2 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar2 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x10) >> 8);
      pbStack_c0 = (byte *)0x1;
      pbStack_d8 = pbVar17;
      bStack_98 = *pbVar2;
      FUN_100615630(&uStack_78,&bStack_98);
      uVar12 = uStack_70;
      if ((short)uStack_78 != 1) {
        if (lVar20 != 1) {
          uVar10 = uStack_78._2_2_;
          pbVar17 = pbVar2 + 0x40;
          pbStack_d8 = pbVar17;
          if (pbVar2[0x20] != 0x16) {
            uVar12 = *(undefined8 *)(pbVar2 + 0x21);
            uStack_8f = (undefined7)*(undefined8 *)(pbVar2 + 0x29);
            cStack_97 = (char)uVar12;
            uStack_96 = (undefined6)((ulong)uVar12 >> 8);
            uStack_90 = (undefined1)((ulong)uVar12 >> 0x38);
            lStack_80 = *(long *)(pbVar2 + 0x38);
            uStack_88 = (undefined1)*(undefined8 *)(pbVar2 + 0x30);
            uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x30) >> 8);
            pbStack_c0 = (byte *)0x2;
            bStack_98 = pbVar2[0x20];
            FUN_100615630(&uStack_78,&bStack_98);
            uVar12 = uStack_70;
            if (((ulong)uStack_78 & 1) == 0) {
              param_1[1] = uVar10;
              param_1[2] = uStack_78._2_2_;
              lVar15 = FUN_100fbc738(&pbStack_e0);
              if (lVar15 == 0) {
                *param_1 = 0;
                return;
              }
              goto LAB_100bb9194;
            }
            goto LAB_100bb904c;
          }
        }
        uVar12 = FUN_1087e422c(1,&UNK_10b232900,&UNK_10b20a590);
      }
    }
LAB_100bb904c:
    *(undefined8 *)(param_1 + 4) = uVar12;
    *param_1 = 1;
    lVar20 = ((ulong)((long)pbVar1 - (long)pbVar17) >> 5) + 1;
    while (lVar20 = lVar20 + -1, lVar20 != 0) {
      FUN_100e077ec(pbVar17);
      pbVar17 = pbVar17 + 0x20;
    }
    if (lVar15 != 0) {
      _free(pbVar2);
      return;
    }
    goto joined_r0x000100bb9120;
  }
  if (bVar4 != 0x15) {
    uVar12 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20b700);
    *(undefined8 *)(param_1 + 4) = uVar12;
    *param_1 = 1;
    return;
  }
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  pbStack_c0 = *(byte **)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar17 = pbStack_c0 + lVar15;
  pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
  lStack_a0 = 0;
  pbStack_b8 = pbStack_c0;
  pbStack_a8 = pbVar17;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_100bb8fe0:
    uStack_78 = &UNK_108cde380;
    uStack_70 = 4;
    bStack_98 = (byte)&uStack_78;
    cStack_97 = (char)((ulong)&uStack_78 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
  }
  else {
    lVar20 = 0;
    bVar8 = false;
    bVar7 = false;
    puVar19 = (undefined8 *)((ulong)&bStack_98 | 1);
    puVar18 = (undefined8 *)((ulong)&pbStack_e0 | 1);
    pbVar1 = pbStack_c0;
    pbStack_b8 = pbStack_c0;
    do {
      pbVar16 = pbVar1 + 0x40;
      bVar3 = *pbVar1;
      pbVar2 = pbVar16;
      lVar9 = lVar20;
      if (bVar3 == 0x16) break;
      uVar12 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
      uVar12 = *(undefined8 *)(pbVar1 + 1);
      puVar19[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar19 = uVar12;
      pbStack_d8 = *(byte **)(pbVar1 + 0x28);
      pbStack_e0 = *(byte **)(pbVar1 + 0x20);
      pbStack_c8 = *(byte **)(pbVar1 + 0x38);
      lStack_d0 = *(long *)(pbVar1 + 0x30);
      piVar5 = (int *)CONCAT71(uStack_8f,uStack_90);
      piVar6 = (int *)CONCAT71(uStack_87,uStack_88);
      bStack_98 = bVar3;
      if (bVar3 < 0xd) {
        if (bVar3 == 1) {
          iVar14 = 1;
          if (cStack_97 != '\x01') {
            iVar14 = 2;
          }
          iVar13 = 0;
          if (cStack_97 != '\0') {
            iVar13 = iVar14;
          }
        }
        else {
          if (bVar3 != 4) {
            if (bVar3 == 0xc) {
              if (lStack_80 == 4) {
                if (*piVar6 == 0x73776f72) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = 1;
                  if (*piVar6 != 0x736c6f63) {
                    iVar13 = 2;
                  }
                }
              }
              else {
                iVar13 = 2;
              }
              goto joined_r0x000100bb8d6c;
            }
LAB_100bb9294:
            lStack_a0 = lVar20 + 1;
            pbStack_b8 = pbVar16;
            uVar12 = FUN_108855b04(&bStack_98,&uStack_78,&UNK_10b211160);
            goto LAB_100bb90f0;
          }
          iVar14 = 1;
          if (piVar5 != (int *)0x1) {
            iVar14 = 2;
          }
          iVar13 = 0;
          if (piVar5 != (int *)0x0) {
            iVar13 = iVar14;
          }
        }
LAB_100bb8df4:
        FUN_100e077ec(&bStack_98);
      }
      else {
        if (bVar3 == 0xd) {
          if (piVar6 != (int *)0x4) goto LAB_100bb8df0;
          if (*piVar5 == 0x73776f72) {
LAB_100bb8d74:
            iVar13 = 0;
          }
          else {
            iVar13 = 1;
            if (*piVar5 != 0x736c6f63) {
              iVar13 = 2;
            }
          }
          goto LAB_100bb8df4;
        }
        if (bVar3 != 0xe) {
          if (bVar3 != 0xf) goto LAB_100bb9294;
          if (piVar6 == (int *)0x4) {
            if ((char)*piVar5 == 'c') {
              if (((*(char *)((long)piVar5 + 1) == 'o') && (*(char *)((long)piVar5 + 2) == 'l')) &&
                 (*(char *)((long)piVar5 + 3) == 's')) {
                iVar13 = 1;
                goto LAB_100bb8df4;
              }
            }
            else if ((((char)*piVar5 == 'r') && (*(char *)((long)piVar5 + 1) == 'o')) &&
                    ((*(char *)((long)piVar5 + 2) == 'w' && (*(char *)((long)piVar5 + 3) == 's'))))
            goto LAB_100bb8d74;
          }
LAB_100bb8df0:
          iVar13 = 2;
          goto LAB_100bb8df4;
        }
        if (lStack_80 == 4) {
          if ((char)*piVar6 == 'c') {
            if (((*(char *)((long)piVar6 + 1) != 'o') || (*(char *)((long)piVar6 + 2) != 'l')) ||
               (*(char *)((long)piVar6 + 3) != 's')) goto LAB_100bb8db4;
            iVar13 = 1;
          }
          else {
            if (((((char)*piVar6 != 'r') || (*(char *)((long)piVar6 + 1) != 'o')) ||
                (*(char *)((long)piVar6 + 2) != 'w')) || (*(char *)((long)piVar6 + 3) != 's'))
            goto LAB_100bb8db4;
            iVar13 = 0;
          }
        }
        else {
LAB_100bb8db4:
          iVar13 = 2;
        }
joined_r0x000100bb8d6c:
        if (piVar5 != (int *)0x0) {
          _free();
        }
      }
      bVar3 = (byte)pbStack_e0;
      if (iVar13 == 0) {
        if (bVar8) {
          lStack_a0 = lVar20 + 1;
          uStack_78 = &UNK_108cde380;
          uStack_70 = 4;
          bStack_98 = (byte)&uStack_78;
          cStack_97 = (char)((ulong)&uStack_78 >> 8);
          uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_b8 = pbVar16;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          goto LAB_100bb90f0;
        }
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_100bb91c4;
        uVar12 = *puVar18;
        puVar19[1] = puVar18[1];
        *puVar19 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
        bStack_98 = bVar3;
        FUN_100615630(&uStack_78,&bStack_98);
        if (((ulong)uStack_78 & 1) != 0) {
LAB_100bb909c:
          lStack_a0 = lVar20 + 1;
          uVar12 = uStack_70;
          pbStack_b8 = pbVar16;
          goto LAB_100bb90f0;
        }
        bVar8 = true;
        uStack_e4 = uStack_78._2_2_;
      }
      else if (iVar13 == 1) {
        if (bVar7) {
          lStack_a0 = lVar20 + 1;
          uStack_78 = &UNK_108cde384;
          uStack_70 = 4;
          bStack_98 = (byte)&uStack_78;
          cStack_97 = (char)((ulong)&uStack_78 >> 8);
          uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_b8 = pbVar16;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          goto LAB_100bb90f0;
        }
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_100bb91c4;
        uVar12 = *puVar18;
        puVar19[1] = puVar18[1];
        *puVar19 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
        bStack_98 = bVar3;
        FUN_100615630(&uStack_78,&bStack_98);
        if (((ulong)uStack_78 & 1) != 0) goto LAB_100bb909c;
        bVar7 = true;
        uStack_e8 = uStack_78._2_2_;
      }
      else {
        pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
        if (bVar3 == 0x16) {
LAB_100bb91c4:
          pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,0x16);
          lStack_a0 = lVar20 + 1;
          pbStack_b8 = pbVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100bb91f4);
          (*pcVar11)();
        }
        uVar12 = *puVar18;
        puVar19[1] = puVar18[1];
        *puVar19 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar12;
        bStack_98 = bVar3;
        FUN_100e077ec(&bStack_98);
      }
      lVar20 = lVar20 + 1;
      pbVar1 = pbVar16;
      pbVar2 = pbVar17;
      lVar9 = (lVar15 - 0x40U >> 6) + 1;
    } while (pbVar16 != pbVar17);
    pbStack_b8 = pbVar2;
    lStack_a0 = lVar9;
    if (!bVar8) goto LAB_100bb8fe0;
    if (bVar7) {
      param_1[1] = uStack_e4;
      param_1[2] = uStack_e8;
      *param_1 = 0;
      FUN_100d34830(&pbStack_c0);
      if (pbVar17 == pbVar2) {
        *param_1 = 0;
        return;
      }
      bStack_98 = (byte)lVar9;
      cStack_97 = (char)((ulong)lVar9 >> 8);
      uStack_96 = (undefined6)((ulong)lVar9 >> 0x10);
      lVar15 = FUN_1087e422c(((ulong)((long)pbVar17 - (long)pbVar2) >> 6) + lVar9,&bStack_98,
                             &UNK_10b23a190);
LAB_100bb9194:
      *(long *)(param_1 + 4) = lVar15;
      *param_1 = 1;
      goto joined_r0x000100bb9120;
    }
    uStack_78 = &UNK_108cde384;
    uStack_70 = 4;
    bStack_98 = (byte)&uStack_78;
    cStack_97 = (char)((ulong)&uStack_78 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
  }
LAB_100bb90f0:
  *(undefined8 *)(param_1 + 4) = uVar12;
  *param_1 = 1;
  FUN_100d34830(&pbStack_c0);
  if ((byte)pbStack_e0 != '\x16') {
    FUN_100e077ec(&pbStack_e0);
  }
joined_r0x000100bb9120:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

