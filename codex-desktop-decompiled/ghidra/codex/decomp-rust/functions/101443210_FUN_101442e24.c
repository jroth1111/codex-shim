
/* WARNING: Type propagation algorithm not settling */

void FUN_101442e24(undefined8 *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *unaff_x20;
  undefined8 ****ppppuVar7;
  long lVar8;
  long lVar9;
  undefined8 ****ppppuStack_190;
  long lStack_188;
  undefined ****ppppuStack_180;
  long lStack_178;
  undefined ****ppppuStack_170;
  long lStack_168;
  undefined ****ppppuStack_160;
  long lStack_158;
  undefined ****ppppuStack_150;
  undefined ****ppppuStack_140;
  long lStack_138;
  undefined ****ppppuStack_130;
  long lStack_128;
  undefined ****ppppuStack_120;
  long lStack_118;
  undefined ****ppppuStack_110;
  undefined *puStack_100;
  undefined ****ppppuStack_f8;
  long lStack_f0;
  undefined ****ppppuStack_e8;
  long lStack_e0;
  undefined ****ppppuStack_d8;
  long lStack_d0;
  undefined ****ppppuStack_c8;
  undefined8 ****ppppuStack_b8;
  undefined *puStack_b0;
  undefined ****ppppuStack_a8;
  long lStack_a0;
  undefined ****ppppuStack_98;
  long lStack_90;
  undefined ****ppppuStack_88;
  long lStack_80;
  undefined ****ppppuStack_78;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lVar8 = *(long *)(param_2 + 0x10);
      lVar1 = *(long *)(param_2 + 0x18);
      ppppuStack_190 = (undefined8 ****)0x8000000000000001;
      if (lVar1 == 0) {
        ppppuStack_b8 = (undefined8 ****)0x8000000000000000;
      }
      else {
        lVar9 = 0;
        ppppuVar7 = (undefined8 ****)0x8000000000000001;
        do {
          bVar3 = *(byte *)(lVar8 + lVar9);
          if (bVar3 < 0xd) {
            if (bVar3 == 1) {
              if (*(char *)(lVar8 + lVar9 + 1) == '\0') {
LAB_10144305c:
                if (ppppuVar7 != (undefined8 ****)0x8000000000000001) {
                  ppppuStack_140 = (undefined ****)&UNK_108cde458;
                  lStack_138 = 4;
                  ppppuStack_b8 = &ppppuStack_140;
                  puStack_b0 = &DAT_100c7b3a0;
                  ppppuStack_190 = ppppuVar7;
                  unaff_x20 = (undefined *)
                              FUN_108856088(s_duplicate_field_____108ac2973,&ppppuStack_b8);
LAB_101443250:
                  if (ppppuVar7 != (undefined8 ****)0x8000000000000000) {
                    if ((ppppuStack_170 != (undefined ****)0x0) &&
                       ((long)ppppuStack_170 * 9 != -0x11)) {
                      _free(lStack_178 + (long)ppppuStack_170 * -8 + -8);
                    }
                    func_0x000100cd7284(&ppppuStack_190);
                  }
                  goto LAB_1014431d8;
                }
                bVar3 = ((byte *)(lVar8 + lVar9))[0x20];
                ppppuVar7 = (undefined8 ****)0x8000000000000000;
                if (bVar3 != 0x10) {
                  if (bVar3 == 0x11) {
                    FUN_1004de164(&ppppuStack_b8,*(undefined8 *)(lVar8 + lVar9 + 0x28));
                    ppppuVar7 = ppppuStack_b8;
                    unaff_x20 = puStack_b0;
                    ppppuStack_140 = ppppuStack_a8;
                    lStack_138 = lStack_a0;
                    ppppuStack_130 = ppppuStack_98;
                    lStack_128 = lStack_90;
                    ppppuStack_120 = ppppuStack_88;
                    lStack_118 = lStack_80;
                    ppppuStack_110 = ppppuStack_78;
                  }
                  else {
                    if (bVar3 == 0x12) goto LAB_101442f18;
                    FUN_1004de164(&ppppuStack_b8);
                    ppppuVar7 = ppppuStack_b8;
                    unaff_x20 = puStack_b0;
                    ppppuStack_140 = ppppuStack_a8;
                    lStack_138 = lStack_a0;
                    ppppuStack_130 = ppppuStack_98;
                    lStack_128 = lStack_90;
                    ppppuStack_120 = ppppuStack_88;
                    lStack_118 = lStack_80;
                    ppppuStack_110 = ppppuStack_78;
                  }
                  if ((ppppuVar7 == (undefined8 ****)0x8000000000000000) ||
                     (ppppuStack_b8 = ppppuVar7, puStack_b0 = unaff_x20,
                     ppppuStack_a8 = ppppuStack_140, lStack_a0 = lStack_138,
                     ppppuStack_98 = ppppuStack_130, lStack_90 = lStack_128,
                     ppppuStack_88 = ppppuStack_120, lStack_80 = lStack_118,
                     ppppuStack_78 = ppppuStack_110,
                     ppppuVar7 == (undefined8 ****)0x8000000000000001)) goto LAB_1014431d8;
                }
LAB_101442f18:
                lStack_178 = lStack_138;
                ppppuStack_180 = ppppuStack_140;
                lStack_168 = lStack_128;
                ppppuStack_170 = ppppuStack_130;
                lStack_158 = lStack_118;
                ppppuStack_160 = ppppuStack_120;
                ppppuStack_150 = ppppuStack_110;
              }
            }
            else if (bVar3 == 4) {
              if (*(long *)(lVar8 + lVar9 + 8) == 0) goto LAB_10144305c;
            }
            else {
              if (bVar3 != 0xc) {
LAB_101443228:
                ppppuStack_190 = ppppuVar7;
                unaff_x20 = (undefined *)FUN_108855c40(lVar8 + lVar9,&ppppuStack_b8,&UNK_10b212580);
                if (ppppuVar7 != (undefined8 ****)0x8000000000000001) goto LAB_101443250;
                goto LAB_1014431d8;
              }
              if (*(long *)(lVar8 + lVar9 + 0x18) == 4) {
                iVar2 = **(int **)(lVar8 + lVar9 + 0x10);
                goto joined_r0x000101443058;
              }
            }
          }
          else if (bVar3 == 0xd) {
            if (*(long *)(lVar8 + lVar9 + 0x10) == 4) {
              iVar2 = **(int **)(lVar8 + lVar9 + 8);
joined_r0x000101443058:
              if (iVar2 == 0x6c6c6163) goto LAB_10144305c;
            }
          }
          else if (bVar3 == 0xe) {
            if (*(long *)(lVar8 + lVar9 + 0x18) == 4) {
              pcVar6 = *(char **)(lVar8 + lVar9 + 0x10);
              cVar4 = *pcVar6;
joined_r0x000101442ff8:
              if ((((cVar4 == 'c') && (pcVar6[1] == 'a')) && (pcVar6[2] == 'l')) &&
                 (pcVar6[3] == 'l')) goto LAB_10144305c;
            }
          }
          else {
            if (bVar3 != 0xf) goto LAB_101443228;
            if (*(long *)(lVar8 + lVar9 + 0x10) == 4) {
              pcVar6 = *(char **)(lVar8 + lVar9 + 8);
              cVar4 = *pcVar6;
              goto joined_r0x000101442ff8;
            }
          }
          lVar9 = lVar9 + 0x40;
        } while (lVar1 * 0x40 - lVar9 != 0);
        if (ppppuVar7 == (undefined8 ****)0x8000000000000001) {
          ppppuVar7 = (undefined8 ****)0x8000000000000000;
        }
        else {
          ppppuStack_f8 = ppppuStack_180;
          ppppuStack_e8 = ppppuStack_170;
          lStack_f0 = lStack_178;
          ppppuStack_d8 = ppppuStack_160;
          lStack_e0 = lStack_168;
          ppppuStack_c8 = ppppuStack_150;
          lStack_d0 = lStack_158;
          puStack_100 = unaff_x20;
        }
        ppppuStack_a8 = ppppuStack_f8;
        puStack_b0 = puStack_100;
        ppppuStack_98 = ppppuStack_e8;
        lStack_a0 = lStack_f0;
        ppppuStack_88 = ppppuStack_d8;
        lStack_90 = lStack_e0;
        ppppuStack_78 = ppppuStack_c8;
        lStack_80 = lStack_d0;
        ppppuStack_b8 = ppppuVar7;
      }
      goto LAB_101443184;
    }
    unaff_x20 = (undefined *)FUN_108855c40(param_2,&ppppuStack_b8,&UNK_10b20bce0);
    goto LAB_1014431d8;
  }
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 == 0) {
    unaff_x20 = (undefined *)FUN_1087e422c(0,&UNK_10b22e188,&UNK_10b20a590);
    goto LAB_1014431d8;
  }
  cVar4 = **(char **)(param_2 + 0x10);
  ppppuVar7 = (undefined8 ****)0x8000000000000000;
  if (cVar4 != '\x10') {
    if (cVar4 == '\x11') {
      FUN_1004de164(&ppppuStack_b8,*(undefined8 *)(*(char **)(param_2 + 0x10) + 8));
      ppppuVar7 = ppppuStack_b8;
      unaff_x20 = puStack_b0;
      ppppuStack_190 = (undefined8 ****)ppppuStack_a8;
      lStack_188 = lStack_a0;
      ppppuStack_180 = ppppuStack_98;
      lStack_178 = lStack_90;
      ppppuStack_170 = ppppuStack_88;
      lStack_168 = lStack_80;
      ppppuStack_160 = ppppuStack_78;
    }
    else {
      if (cVar4 == '\x12') goto LAB_101443160;
      FUN_1004de164(&ppppuStack_b8);
      ppppuVar7 = ppppuStack_b8;
      unaff_x20 = puStack_b0;
      ppppuStack_190 = (undefined8 ****)ppppuStack_a8;
      lStack_188 = lStack_a0;
      ppppuStack_180 = ppppuStack_98;
      lStack_178 = lStack_90;
      ppppuStack_170 = ppppuStack_88;
      lStack_168 = lStack_80;
      ppppuStack_160 = ppppuStack_78;
    }
    if ((ppppuVar7 == (undefined8 ****)0x8000000000000000) ||
       (ppppuVar7 == (undefined8 ****)0x8000000000000001)) goto LAB_1014431d8;
  }
LAB_101443160:
  lStack_a0 = lStack_188;
  ppppuStack_a8 = (undefined ****)ppppuStack_190;
  lStack_90 = lStack_178;
  ppppuStack_98 = ppppuStack_180;
  lStack_80 = lStack_168;
  ppppuStack_88 = ppppuStack_170;
  ppppuStack_78 = ppppuStack_160;
  uVar5 = lVar8 - 1;
  ppppuStack_b8 = ppppuVar7;
  puStack_b0 = unaff_x20;
  if (uVar5 == 0) {
LAB_101443184:
    param_1[5] = lStack_90;
    param_1[4] = ppppuStack_98;
    param_1[7] = lStack_80;
    param_1[6] = ppppuStack_88;
    param_1[8] = ppppuStack_78;
    param_1[1] = puStack_b0;
    *param_1 = ppppuStack_b8;
    param_1[3] = lStack_a0;
    param_1[2] = ppppuStack_a8;
    return;
  }
  ppppuStack_190 = (undefined8 ****)0x1;
  unaff_x20 = (undefined *)
              FUN_1087e422c((uVar5 & 0x7ffffffffffffff) + 1,&ppppuStack_190,&UNK_10b23a1b0);
  if (ppppuVar7 != (undefined8 ****)0x8000000000000000) {
    if ((ppppuStack_180 != (undefined ****)0x0) && ((long)ppppuStack_180 * 9 != -0x11)) {
      _free(lStack_188 + (long)ppppuStack_180 * -8 + -8);
    }
    func_0x000100cd7284(&ppppuStack_b8);
  }
LAB_1014431d8:
  *param_1 = 0x8000000000000002;
  param_1[1] = unaff_x20;
  return;
}

