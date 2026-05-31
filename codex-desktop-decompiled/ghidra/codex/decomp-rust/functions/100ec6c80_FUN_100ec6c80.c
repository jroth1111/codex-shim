
/* WARNING: Type propagation algorithm not settling */

void FUN_100ec6c80(long *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int *piVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  undefined *unaff_x27;
  int iVar15;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined ****ppppuStack_170;
  long lStack_168;
  undefined ****ppppuStack_160;
  long lStack_158;
  undefined ****ppppuStack_150;
  long lStack_148;
  undefined ****ppppuStack_140;
  long lStack_138;
  undefined8 ****ppppuStack_130;
  long lStack_128;
  undefined ****ppppuStack_120;
  long lStack_118;
  undefined ****ppppuStack_110;
  long lStack_108;
  undefined ****ppppuStack_100;
  long lStack_f8;
  undefined ****ppppuStack_f0;
  undefined ****ppppuStack_e0;
  long lStack_d8;
  undefined ****ppppuStack_d0;
  long lStack_c8;
  undefined ****ppppuStack_c0;
  long lStack_b8;
  undefined ****ppppuStack_b0;
  undefined ****ppppuStack_a0;
  long lStack_98;
  undefined ****ppppuStack_90;
  long lStack_88;
  undefined ****ppppuStack_80;
  long lStack_78;
  undefined ****ppppuStack_70;
  
  if (*param_2 != '\x14') {
    if (*param_2 != '\x15') {
      lVar6 = FUN_108855c40(param_2,&uStack_180,&UNK_10b214328);
      *param_1 = -0x7ffffffffffffffa;
      param_1[1] = lVar6;
      return;
    }
    lVar6 = *(long *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    ppppuStack_130 = (undefined8 ****)0x8000000000000006;
    if (lVar12 == 0) {
      ppppuStack_130 = (undefined8 ****)0x8000000000000006;
    }
    else {
      lVar14 = 0;
      cVar11 = '\x03';
      ppppuVar13 = (undefined8 ****)0x8000000000000006;
      do {
        pbVar8 = (byte *)(lVar6 + lVar14) + 0x20;
        bVar2 = *(byte *)(lVar6 + lVar14);
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            cVar3 = *(char *)(lVar6 + lVar14 + 1);
            iVar15 = 1;
            if (cVar3 != '\x01') {
              iVar15 = 2;
            }
            if (cVar3 != '\0') {
LAB_100ec6e90:
              if (iVar15 != 2) goto LAB_100ec6ef4;
              goto LAB_100ec6d10;
            }
          }
          else if (bVar2 == 4) {
            lVar10 = *(long *)(lVar6 + lVar14 + 8);
            iVar15 = 1;
            if (lVar10 != 1) {
              iVar15 = 2;
            }
            if (lVar10 != 0) goto LAB_100ec6e90;
          }
          else {
            if (bVar2 != 0xc) {
LAB_100ec71e8:
              ppppuStack_130 = ppppuVar13;
              lVar6 = FUN_108855c40(lVar6 + lVar14,&uStack_180,&UNK_10b215028);
              goto LAB_100ec704c;
            }
            piVar9 = *(int **)(lVar6 + lVar14 + 0x10);
            lVar10 = *(long *)(lVar6 + lVar14 + 0x18);
            if (lVar10 == 7) goto LAB_100ec6ed4;
LAB_100ec6d54:
            if ((lVar10 != 6) || (*piVar9 != 0x69746361 || (short)piVar9[1] != 0x6e6f))
            goto LAB_100ec6d10;
          }
LAB_100ec6ea0:
          if (cVar11 != '\x03') {
            ppppuStack_e0 = (undefined ****)&UNK_108ca6c32;
            lStack_d8 = 6;
            uStack_180 = &ppppuStack_e0;
            puStack_178 = &DAT_100c7b3a0;
            ppppuStack_130 = ppppuVar13;
            lVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_180);
            goto LAB_100ec704c;
          }
          func_0x000101233910(&uStack_180);
          if ((char)uStack_180 == '\x01') {
            *param_1 = -0x7ffffffffffffffa;
            param_1[1] = (long)puStack_178;
            ppppuStack_130 = ppppuVar13;
            goto joined_r0x000100ec716c;
          }
          cVar11 = uStack_180._1_1_;
        }
        else if (bVar2 == 0xd) {
          piVar9 = *(int **)(lVar6 + lVar14 + 8);
          lVar10 = *(long *)(lVar6 + lVar14 + 0x10);
          if (lVar10 != 7) goto LAB_100ec6d54;
LAB_100ec6ed4:
          if (*piVar9 == 0x746e6f63 && *(int *)((long)piVar9 + 3) == 0x746e6574) {
LAB_100ec6ef4:
            if (ppppuVar13 != (undefined8 ****)0x8000000000000006) {
              ppppuStack_e0 = (undefined ****)&UNK_108ca1095;
              lStack_d8 = 7;
              uStack_180 = &ppppuStack_e0;
              puStack_178 = &DAT_100c7b3a0;
              ppppuStack_130 = ppppuVar13;
              lVar6 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_180);
              *param_1 = -0x7ffffffffffffffa;
              param_1[1] = lVar6;
              if (ppppuVar13 == (undefined8 ****)0x8000000000000005) {
                return;
              }
              goto LAB_100ec7060;
            }
            bVar2 = *pbVar8;
            ppppuVar13 = (undefined8 ****)0x8000000000000005;
            if (bVar2 != 0x10) {
              if (bVar2 == 0x11) {
                pbVar8 = *(byte **)(lVar6 + lVar14 + 0x28);
              }
              else if (bVar2 == 0x12) goto LAB_100ec6cf8;
              FUN_1004db9e8(&uStack_180,pbVar8);
              ppppuVar13 = (undefined8 ****)0x8000000000000006;
              if (uStack_180 != (undefined8 ****)0x8000000000000005) {
                lStack_d8 = lStack_168;
                ppppuStack_e0 = ppppuStack_170;
                lStack_c8 = lStack_158;
                ppppuStack_d0 = ppppuStack_160;
                lStack_b8 = lStack_148;
                ppppuStack_c0 = ppppuStack_150;
                ppppuStack_b0 = ppppuStack_140;
                ppppuVar13 = uStack_180;
              }
              unaff_x27 = puStack_178;
              if (ppppuVar13 == (undefined8 ****)0x8000000000000006) {
                *param_1 = -0x7ffffffffffffffa;
                param_1[1] = (long)puStack_178;
                return;
              }
            }
LAB_100ec6cf8:
            lStack_118 = lStack_d8;
            ppppuStack_120 = ppppuStack_e0;
            lStack_108 = lStack_c8;
            ppppuStack_110 = ppppuStack_d0;
            lStack_f8 = lStack_b8;
            ppppuStack_100 = ppppuStack_c0;
            ppppuStack_f0 = ppppuStack_b0;
          }
        }
        else {
          if (bVar2 == 0xe) {
            pcVar1 = *(char **)(lVar6 + lVar14 + 0x10);
            lVar10 = *(long *)(lVar6 + lVar14 + 0x18);
          }
          else {
            if (bVar2 != 0xf) goto LAB_100ec71e8;
            pcVar1 = *(char **)(lVar6 + lVar14 + 8);
            lVar10 = *(long *)(lVar6 + lVar14 + 0x10);
          }
          if (lVar10 == 7) {
            if (((*pcVar1 == 'c') && (pcVar1[1] == 'o')) &&
               ((pcVar1[2] == 'n' &&
                ((((pcVar1[3] == 't' && (pcVar1[4] == 'e')) && (pcVar1[5] == 'n')) &&
                 (pcVar1[6] == 't')))))) goto LAB_100ec6ef4;
          }
          else if ((((lVar10 == 6) && (*pcVar1 == 'a')) && (pcVar1[1] == 'c')) &&
                  (((pcVar1[2] == 't' && (pcVar1[3] == 'i')) &&
                   ((pcVar1[4] == 'o' && (pcVar1[5] == 'n')))))) goto LAB_100ec6ea0;
        }
LAB_100ec6d10:
        lVar14 = lVar14 + 0x40;
      } while (lVar12 * 0x40 - lVar14 != 0);
      ppppuStack_130 = ppppuVar13;
      if (cVar11 != '\x03') {
        if (ppppuVar13 == (undefined8 ****)0x8000000000000006) {
          ppppuVar13 = (undefined8 ****)0x8000000000000005;
        }
        else {
          lStack_98 = lStack_118;
          ppppuStack_a0 = ppppuStack_120;
          lStack_88 = lStack_108;
          ppppuStack_90 = ppppuStack_110;
          lStack_78 = lStack_f8;
          ppppuStack_80 = ppppuStack_100;
          ppppuStack_70 = ppppuStack_f0;
        }
        *param_1 = (long)ppppuVar13;
        param_1[1] = (long)unaff_x27;
        param_1[3] = lStack_98;
        param_1[2] = (long)ppppuStack_a0;
        param_1[5] = lStack_88;
        param_1[4] = (long)ppppuStack_90;
        param_1[7] = lStack_78;
        param_1[6] = (long)ppppuStack_80;
        param_1[8] = (long)ppppuStack_70;
        *(char *)(param_1 + 9) = cVar11;
        return;
      }
    }
    ppppuVar13 = ppppuStack_130;
    ppppuStack_e0 = (undefined ****)&UNK_108ca6c32;
    lStack_d8 = 6;
    uStack_180 = &ppppuStack_e0;
    puStack_178 = &DAT_100c7b3a0;
    lVar6 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_180);
LAB_100ec704c:
    *param_1 = -0x7ffffffffffffffa;
    param_1[1] = lVar6;
joined_r0x000100ec716c:
    if ((long)ppppuVar13 + 0x7ffffffffffffffbU < 2) {
      return;
    }
LAB_100ec7060:
    FUN_100de6690(&ppppuStack_130);
    return;
  }
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar12 = *(long *)(param_2 + 0x10);
    puVar5 = (undefined *)func_0x000101233910(&uStack_180,lVar12);
    if ((char)uStack_180 == '\x01') goto LAB_100ec6f98;
    if (lVar6 != 1) {
      uVar4 = uStack_180._1_1_;
      cVar11 = *(char *)(lVar12 + 0x20);
      ppppuVar13 = (undefined8 ****)0x8000000000000005;
      if (cVar11 != '\x10') {
        if (cVar11 == '\x11') {
          FUN_1004db9e8(&uStack_180,*(undefined8 *)(lVar12 + 0x28));
        }
        else {
          if (cVar11 == '\x12') goto LAB_100ec70f4;
          FUN_1004db9e8(&uStack_180,lVar12 + 0x20);
        }
        ppppuVar13 = (undefined8 ****)0x8000000000000006;
        if (uStack_180 != (undefined8 ****)0x8000000000000005) {
          ppppuVar13 = uStack_180;
          ppppuStack_130 = (undefined8 ****)ppppuStack_170;
          lStack_128 = lStack_168;
          ppppuStack_120 = ppppuStack_160;
          lStack_118 = lStack_158;
          ppppuStack_110 = ppppuStack_150;
          lStack_108 = lStack_148;
          ppppuStack_100 = ppppuStack_140;
        }
        puVar5 = puStack_178;
        if (ppppuVar13 == (undefined8 ****)0x8000000000000006) goto LAB_100ec6f98;
      }
LAB_100ec70f4:
      param_1[3] = lStack_128;
      param_1[2] = (long)ppppuStack_130;
      param_1[5] = lStack_118;
      param_1[4] = (long)ppppuStack_120;
      param_1[7] = lStack_108;
      param_1[6] = (long)ppppuStack_110;
      param_1[8] = (long)ppppuStack_100;
      *param_1 = (long)ppppuVar13;
      param_1[1] = (long)puVar5;
      *(undefined1 *)(param_1 + 9) = uVar4;
      puStack_178 = (undefined *)param_1[1];
      uStack_180 = (undefined8 ****)*param_1;
      lStack_168 = param_1[3];
      ppppuStack_170 = (undefined ****)param_1[2];
      lStack_148 = param_1[7];
      ppppuStack_150 = (undefined ****)param_1[6];
      lStack_138 = param_1[9];
      ppppuStack_140 = (undefined ****)param_1[8];
      lStack_158 = param_1[5];
      ppppuStack_160 = (undefined ****)param_1[4];
      if (lVar6 == 2) {
        return;
      }
      ppppuStack_130 = (undefined8 ****)0x2;
      lVar6 = FUN_1087e422c((lVar6 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&ppppuStack_130,
                            &UNK_10b23a1b0);
      *param_1 = -0x7ffffffffffffffa;
      param_1[1] = lVar6;
      if (uStack_180 == (undefined8 ****)0x8000000000000005) {
        return;
      }
      FUN_100de6690(&uStack_180);
      return;
    }
    uVar7 = 1;
  }
  puStack_178 = (undefined *)FUN_1087e422c(uVar7,&UNK_10b229f50,&UNK_10b20a590);
LAB_100ec6f98:
  *param_1 = -0x7ffffffffffffffa;
  param_1[1] = (long)puStack_178;
  return;
}

