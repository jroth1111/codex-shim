
/* WARNING: Removing unreachable block (ram,0x000101466acc) */
/* WARNING: Removing unreachable block (ram,0x0001014669ec) */
/* WARNING: Removing unreachable block (ram,0x000101466a9c) */
/* WARNING: Removing unreachable block (ram,0x000101466a50) */

void FUN_101466850(ulong *param_1,char *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  byte *pbVar8;
  undefined1 uVar9;
  long lVar10;
  ulong in_x9;
  ulong in_x10;
  long lVar11;
  undefined *puVar12;
  byte *unaff_x20;
  byte *pbVar13;
  byte *unaff_x21;
  long lVar14;
  byte *unaff_x23;
  byte *pbVar15;
  ulong unaff_x24;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x28;
  undefined *puStack_c0;
  byte *pbStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  ulong uStack_90;
  ulong uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*param_2 == '\x14') {
    pbVar15 = *(byte **)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
    if (lVar4 == 0) {
      puVar12 = (undefined *)0x0;
      uVar17 = 0x8000000000000000;
      uStack_90 = in_x9;
      pbVar13 = pbVar15;
      pbVar8 = pbVar15;
LAB_101466900:
      uStack_a0 = (undefined **)0x8000000000000001;
      pbVar16 = pbVar8;
    }
    else {
      pbVar13 = pbVar15 + 0x20;
      bVar6 = *pbVar15;
      uVar17 = 0x8000000000000000;
      uVar2 = in_x9;
      uVar3 = (ulong)uStack_a0;
      uVar18 = uStack_90;
      if (bVar6 != 0x10) {
        if (bVar6 == 0x11) {
          pbVar8 = *(byte **)(pbVar15 + 8);
        }
        else {
          pbVar8 = pbVar15;
          uVar2 = in_x9;
          if (bVar6 == 0x12) goto joined_r0x000101466e0c;
        }
        FUN_1004e07f8(&uStack_a0,pbVar8);
        uVar17 = (ulong)uStack_a0;
        if ((long)uStack_a0 < -0x7ffffffffffffffe) {
          uVar17 = 0x8000000000000001;
        }
        uVar2 = 0x8000000000000001;
        uVar3 = (ulong)uStack_a0;
        unaff_x21 = pbStack_98;
        unaff_x24 = uStack_90;
        uVar18 = uStack_90;
        if (uVar17 + 0x7fffffffffffffff < 2) goto LAB_101466e58;
      }
joined_r0x000101466e0c:
      uStack_90 = uVar2;
      pbVar8 = pbVar15 + lVar4 * 0x20;
      puVar12 = (undefined *)0x1;
      if (pbVar13 == pbVar8) goto LAB_101466900;
      pbVar16 = pbVar15 + 0x40;
      bVar6 = *pbVar13;
      uStack_90 = (ulong)bVar6;
      puVar12 = (undefined *)0x2;
      uStack_a0 = (undefined **)0x8000000000000000;
      if (bVar6 != 0x10) {
        if (bVar6 == 0x11) {
          uStack_a0 = (undefined **)uVar3;
          uStack_90 = uVar18;
          FUN_1004e07f8(&uStack_a0,*(undefined8 *)(pbVar15 + 0x28));
        }
        else {
          if (bVar6 == 0x12) goto LAB_101466c78;
          uStack_a0 = (undefined **)uVar3;
          uStack_90 = uVar18;
          FUN_1004e07f8(&uStack_a0,pbVar13);
        }
        if ((long)uStack_a0 < -0x7ffffffffffffffe) {
          uStack_a0 = (undefined **)0x8000000000000001;
        }
        pbVar13 = pbStack_98;
        if ((long)uStack_a0 + 0x7fffffffffffffffU < 2) {
          if ((uVar17 & 0x7fffffffffffffff) != 0) {
            _free(unaff_x21);
          }
          goto LAB_101466e58;
        }
      }
    }
LAB_101466c78:
    uVar3 = 0x8000000000000000;
    if (uStack_a0 != (undefined **)0x8000000000000001) {
      uVar3 = (ulong)uStack_a0;
    }
    uStack_a0 = (undefined **)uVar17;
    pbStack_98 = unaff_x21;
    uVar18 = unaff_x24;
    uStack_88 = uVar3;
    pbStack_80 = pbVar13;
    uStack_78 = uStack_90;
    if ((long)pbVar8 - (long)pbVar16 != 0) {
      uVar18 = unaff_x24;
      puStack_70 = puVar12;
      pbStack_98 = (byte *)FUN_1087e422c(puVar12 + ((ulong)((long)pbVar8 - (long)pbVar16) >> 5),
                                         &puStack_70,&UNK_10b23a1b0);
      uStack_90 = uVar18;
      uStack_a0 = (undefined **)0x8000000000000001;
      if ((uVar17 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x21);
      }
joined_r0x000101466ccc:
      uVar18 = uStack_90;
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
LAB_101466e3c:
        _free(pbVar13);
        uVar18 = uStack_90;
      }
    }
  }
  else {
    if (*param_2 != '\x15') {
      pbStack_98 = (byte *)FUN_108855c40(param_2,&puStack_70,&UNK_10b213be8);
      goto LAB_101466e58;
    }
    lVar4 = *(long *)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18) * 0x40;
    if (*(long *)(param_2 + 0x18) == 0) {
      puStack_c0 = (undefined *)0x0;
      uVar18 = 0x8000000000000001;
      uVar17 = 0x8000000000000001;
      lVar10 = lVar4;
    }
    else {
      lVar11 = 0;
      puStack_c0 = (undefined *)((lVar14 - 0x40U >> 6) + 1);
      uVar17 = 0x8000000000000001;
      uVar18 = 0x8000000000000001;
      pbVar13 = unaff_x20;
      pbVar15 = unaff_x23;
      do {
        pbVar8 = (byte *)(lVar4 + lVar11);
        pbVar16 = pbVar8 + 0x20;
        bVar6 = *pbVar8;
        if (0xc < bVar6) {
          if (bVar6 == 0xd) {
            plVar5 = *(long **)(lVar4 + lVar11 + 8);
            lVar10 = *(long *)(lVar4 + lVar11 + 0x10);
joined_r0x000101466990:
            if (lVar10 == 10) {
              uVar9 = 1;
              if (*plVar5 != 0x6174736563617274 || (short)plVar5[1] != 0x6574) {
                uVar9 = 2;
              }
              uStack_a0 = (undefined **)((ulong)CONCAT61(uStack_a0._2_6_,uVar9) << 8);
            }
            else if (lVar10 == 0xb) {
              uVar9 = 2;
              if (*plVar5 == 0x7261706563617274 && *(long *)((long)plVar5 + 3) == 0x746e657261706563
                 ) {
                uVar9 = 0;
              }
              uStack_a0 = (undefined **)((ulong)CONCAT61(uStack_a0._2_6_,uVar9) << 8);
            }
            else {
              uStack_a0 = (undefined **)CONCAT62(uStack_a0._2_6_,0x200);
            }
            goto LAB_101466b14;
          }
          if (bVar6 == 0xe) {
            FUN_100b1bff0(&uStack_a0,*(undefined8 *)(lVar4 + lVar11 + 0x10),
                          *(undefined8 *)(lVar4 + lVar11 + 0x18));
          }
          else {
            if (bVar6 != 0xf) goto LAB_101466be4;
            FUN_100b1bff0(&uStack_a0,*(undefined8 *)(lVar4 + lVar11 + 8),
                          *(undefined8 *)(lVar4 + lVar11 + 0x10));
          }
          if (((ulong)uStack_a0 & 1) == 0) goto LAB_101466b14;
LAB_101466c0c:
          uStack_a0 = (undefined **)0x8000000000000001;
          if (-0x7fffffffffffffff < (long)uVar18) {
joined_r0x000101466c28:
            uStack_a0 = (undefined **)0x8000000000000001;
            if (uVar18 != 0) {
              uStack_a0 = (undefined **)0x8000000000000001;
              _free(pbStack_b8);
            }
          }
LAB_101466e28:
          uVar18 = uStack_90;
          if (((long)uVar17 < -0x7ffffffffffffffe) || (uVar17 == 0)) goto LAB_101466e44;
          goto LAB_101466e3c;
        }
        if (bVar6 == 1) {
          cVar7 = *(char *)(lVar4 + lVar11 + 1);
          uVar9 = 1;
          if (cVar7 != '\x01') {
            uVar9 = 2;
          }
          uVar1 = 0;
          if (cVar7 != '\0') {
            uVar1 = uVar9;
          }
          uStack_a0 = (undefined **)((ulong)CONCAT61(uStack_a0._2_6_,uVar1) << 8);
        }
        else {
          if (bVar6 != 4) {
            if (bVar6 != 0xc) {
LAB_101466be4:
              pbStack_98 = (byte *)FUN_108855c40(pbVar8,&puStack_70,&UNK_10b214c48);
              goto LAB_101466c0c;
            }
            plVar5 = *(long **)(lVar4 + lVar11 + 0x10);
            lVar10 = *(long *)(lVar4 + lVar11 + 0x18);
            goto joined_r0x000101466990;
          }
          lVar10 = *(long *)(lVar4 + lVar11 + 8);
          uVar9 = 1;
          if (lVar10 != 1) {
            uVar9 = 2;
          }
          uVar1 = 0;
          if (lVar10 != 0) {
            uVar1 = uVar9;
          }
          uStack_a0 = (undefined **)((ulong)CONCAT61(uStack_a0._2_6_,uVar1) << 8);
        }
LAB_101466b14:
        if (uStack_a0._1_1_ == '\0') {
          if (uVar17 != 0x8000000000000001) {
            puStack_70 = &UNK_108cb02cc;
            uStack_68 = 0xb;
            uStack_a0 = &puStack_70;
            pbStack_98 = &DAT_100c7b3a0;
            pbStack_98 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0);
            goto LAB_101466c0c;
          }
          bVar6 = *pbVar16;
          uVar17 = 0x8000000000000000;
          unaff_x20 = pbVar15;
          if (bVar6 != 0x10) {
            if (bVar6 == 0x11) {
              FUN_1004e07f8(&uStack_a0,*(undefined8 *)(lVar4 + lVar11 + 0x28));
            }
            else {
              if (bVar6 == 0x12) goto LAB_10146694c;
              FUN_1004e07f8(&uStack_a0,pbVar16);
            }
            if (uStack_a0 != (undefined **)0x8000000000000000) {
              unaff_x28 = uStack_90;
            }
            uVar17 = (ulong)uStack_a0;
            if ((long)uStack_a0 < -0x7ffffffffffffffe) {
              uVar17 = 0x8000000000000001;
            }
            unaff_x20 = pbStack_98;
            pbVar15 = pbStack_98;
            if (uVar17 == 0x8000000000000001) {
              uVar17 = 0x8000000000000001;
              goto LAB_101466c0c;
            }
          }
        }
        else {
          unaff_x20 = pbVar13;
          if (uStack_a0._1_1_ == '\x01') {
            if (uVar18 != 0x8000000000000001) {
              puStack_70 = &UNK_108cac725;
              uStack_68 = 10;
              uStack_a0 = &puStack_70;
              pbStack_98 = &DAT_100c7b3a0;
              pbStack_98 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_a0);
              uVar18 = uVar18 & 0x7fffffffffffffff;
              goto joined_r0x000101466c28;
            }
            bVar6 = *pbVar16;
            uVar18 = 0x8000000000000000;
            if (bVar6 != 0x10) {
              if (bVar6 == 0x11) {
                FUN_1004e07f8(&uStack_a0,*(undefined8 *)(lVar4 + lVar11 + 0x28));
              }
              else {
                if (bVar6 == 0x12) goto LAB_10146694c;
                FUN_1004e07f8(&uStack_a0,pbVar16);
              }
              pbStack_b8 = pbStack_98;
              if (uStack_a0 != (undefined **)0x8000000000000000) {
                uStack_a8 = uStack_90;
              }
              uVar18 = (ulong)uStack_a0;
              if ((long)uStack_a0 < -0x7ffffffffffffffe) {
                uVar18 = 0x8000000000000001;
              }
              if (uVar18 == 0x8000000000000001) {
                uStack_a0 = (undefined **)0x8000000000000001;
                goto LAB_101466e28;
              }
            }
          }
        }
LAB_10146694c:
        lVar11 = lVar11 + 0x40;
        in_x10 = uStack_a8;
        pbVar13 = unaff_x20;
        unaff_x23 = pbStack_b8;
        lVar10 = lVar4 + lVar14;
      } while (lVar14 - lVar11 != 0);
    }
    uVar2 = 0x8000000000000000;
    if (uVar17 != 0x8000000000000001) {
      uVar2 = uVar17;
    }
    uVar3 = 0x8000000000000000;
    if (uVar18 != 0x8000000000000001) {
      uVar3 = uVar18;
    }
    uVar17 = (lVar4 + lVar14) - lVar10;
    uStack_a0 = (undefined **)uVar2;
    pbStack_98 = unaff_x20;
    uVar18 = unaff_x28;
    uStack_88 = uVar3;
    pbStack_80 = unaff_x23;
    uStack_78 = in_x10;
    if (uVar17 != 0) {
      puStack_70 = puStack_c0;
      uStack_90 = unaff_x28;
      pbStack_80 = unaff_x23;
      pbStack_98 = (byte *)FUN_1087e422c(puStack_c0 + (uVar17 >> 6),&puStack_70,&UNK_10b23a190);
      uStack_a0 = (undefined **)0x8000000000000001;
      pbVar13 = unaff_x23;
      if ((uVar2 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x20);
      }
      goto joined_r0x000101466ccc;
    }
  }
LAB_101466e44:
  uStack_90 = uVar18;
  if (uStack_a0 != (undefined **)0x8000000000000001) {
    param_1[1] = (ulong)pbStack_98;
    *param_1 = (ulong)uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = (ulong)pbStack_80;
    return;
  }
LAB_101466e58:
  *param_1 = 0x8000000000000002;
  param_1[1] = (ulong)pbStack_98;
  return;
}

