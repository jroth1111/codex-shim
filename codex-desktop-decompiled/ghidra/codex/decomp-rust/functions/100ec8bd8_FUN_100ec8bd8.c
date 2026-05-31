
void FUN_100ec8bd8(undefined8 *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*param_2 == '\x14') {
    lVar17 = *(long *)(param_2 + 0x18);
    if (lVar17 == 0) {
      puStack_f0 = (undefined8 *)FUN_1087e422c(0,&UNK_10b22b558,&UNK_10b20a590);
    }
    else {
      func_0x000100ec7314(&ppuStack_f8,*(undefined8 *)(param_2 + 0x10));
      if (ppuStack_f8 != (undefined **)0x2) {
        param_1[0xb] = uStack_a0;
        param_1[10] = lStack_a8;
        param_1[0xd] = lStack_90;
        param_1[0xc] = uStack_98;
        param_1[0xf] = uStack_80;
        param_1[0xe] = uStack_88;
        param_1[0x10] = uStack_78;
        param_1[3] = uStack_e0;
        param_1[2] = uStack_e8;
        param_1[5] = uStack_d0;
        param_1[4] = lStack_d8;
        param_1[7] = lStack_c0;
        param_1[6] = uStack_c8;
        param_1[9] = uStack_b0;
        param_1[8] = uStack_b8;
        *param_1 = ppuStack_f8;
        param_1[1] = puStack_f0;
        uVar10 = lVar17 - 1;
        if (uVar10 == 0) {
          return;
        }
        lVar17 = param_1[4];
        uVar12 = param_1[5];
        lVar1 = param_1[7];
        uVar4 = param_1[8];
        uVar2 = param_1[10];
        uVar5 = param_1[0xb];
        uVar3 = param_1[0xd];
        uVar6 = param_1[0xe];
        ppuStack_f8 = (undefined **)0x1;
        uVar13 = FUN_1087e422c((uVar10 & 0x7ffffffffffffff) + 1,&ppuStack_f8,&UNK_10b23a1b0);
        *param_1 = 2;
        param_1[1] = uVar13;
        if (lVar17 != 0) {
          _free(uVar12);
        }
        if ((uVar2 & 0x7fffffffffffffff) != 0) {
          _free(uVar5);
        }
        if (lVar1 != 0) {
          _free(uVar4);
        }
        if ((uVar3 & 0x7fffffffffffffff) == 0) {
          return;
        }
        _free(uVar6);
        return;
      }
    }
  }
  else if (*param_2 == '\x15') {
    pbVar15 = *(byte **)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar17 = *(long *)(param_2 + 0x18) << 6;
      ppuVar16 = (undefined **)0x2;
      puVar11 = param_1;
      do {
        bVar8 = *pbVar15;
        if (bVar8 < 0xd) {
          if (bVar8 == 1) {
            if (pbVar15[1] == 0) {
LAB_100ec8d3c:
              if (ppuVar16 != (undefined **)0x2) {
                puStack_70 = &UNK_108cde44c;
                uStack_68 = 4;
                ppuStack_f8 = &puStack_70;
                puStack_f0 = (undefined8 *)&DAT_100c7b3a0;
                uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_f8);
                *param_1 = 2;
                param_1[1] = uVar12;
LAB_100ec8ef8:
                if (lStack_160 != 0) {
                  _free(uStack_158);
                }
                if ((lStack_130 != -0x8000000000000000) && (lStack_130 != 0)) {
                  _free(uStack_128);
                }
                if (lStack_148 != 0) {
                  _free(uStack_140);
                }
                if (lStack_118 == -0x8000000000000000) {
                  return;
                }
                if (lStack_118 == 0) {
                  return;
                }
                _free(uStack_110);
                return;
              }
              func_0x000100ec7314(&ppuStack_f8,pbVar15 + 0x20);
              if (ppuStack_f8 == (undefined **)0x2) goto LAB_100ec8da4;
              uStack_128 = uStack_a0;
              lStack_130 = lStack_a8;
              lStack_118 = lStack_90;
              uStack_120 = uStack_98;
              uStack_108 = uStack_80;
              uStack_110 = uStack_88;
              uStack_100 = uStack_78;
              uStack_168 = uStack_e0;
              uStack_170 = uStack_e8;
              uStack_158 = uStack_d0;
              lStack_160 = lStack_d8;
              lStack_148 = lStack_c0;
              uStack_150 = uStack_c8;
              uStack_138 = uStack_b0;
              uStack_140 = uStack_b8;
              puVar11 = puStack_f0;
              ppuVar16 = ppuStack_f8;
            }
          }
          else if (bVar8 == 4) {
            if (*(long *)(pbVar15 + 8) == 0) goto LAB_100ec8d3c;
          }
          else {
            if (bVar8 != 0xc) {
LAB_100ec8ed0:
              uVar12 = FUN_108855c40(pbVar15,&ppuStack_f8,&UNK_10b214c28);
              *param_1 = 2;
              param_1[1] = uVar12;
              if (ppuVar16 == (undefined **)0x2) {
                return;
              }
              goto LAB_100ec8ef8;
            }
            if (*(long *)(pbVar15 + 0x18) == 4) {
              iVar7 = **(int **)(pbVar15 + 0x10);
              goto joined_r0x000100ec8d38;
            }
          }
        }
        else if (bVar8 == 0xd) {
          if (*(long *)(pbVar15 + 0x10) == 4) {
            iVar7 = **(int **)(pbVar15 + 8);
joined_r0x000100ec8d38:
            if (iVar7 == 0x6b736174) goto LAB_100ec8d3c;
          }
        }
        else if (bVar8 == 0xe) {
          if (*(long *)(pbVar15 + 0x18) == 4) {
            pcVar14 = *(char **)(pbVar15 + 0x10);
            cVar9 = *pcVar14;
joined_r0x000100ec8ce8:
            if ((((cVar9 == 't') && (pcVar14[1] == 'a')) && (pcVar14[2] == 's')) &&
               (pcVar14[3] == 'k')) goto LAB_100ec8d3c;
          }
        }
        else {
          if (bVar8 != 0xf) goto LAB_100ec8ed0;
          if (*(long *)(pbVar15 + 0x10) == 4) {
            pcVar14 = *(char **)(pbVar15 + 8);
            cVar9 = *pcVar14;
            goto joined_r0x000100ec8ce8;
          }
        }
        pbVar15 = pbVar15 + 0x40;
        lVar17 = lVar17 + -0x40;
      } while (lVar17 != 0);
      if (ppuVar16 != (undefined **)0x2) {
        param_1[0xb] = uStack_128;
        param_1[10] = lStack_130;
        param_1[0xd] = lStack_118;
        param_1[0xc] = uStack_120;
        param_1[0xf] = uStack_108;
        param_1[0xe] = uStack_110;
        param_1[0x10] = uStack_100;
        param_1[3] = uStack_168;
        param_1[2] = uStack_170;
        param_1[5] = uStack_158;
        param_1[4] = lStack_160;
        param_1[7] = lStack_148;
        param_1[6] = uStack_150;
        param_1[9] = uStack_138;
        param_1[8] = uStack_140;
        *param_1 = ppuVar16;
        param_1[1] = puVar11;
        return;
      }
    }
    puStack_70 = &UNK_108cde44c;
    uStack_68 = 4;
    ppuStack_f8 = &puStack_70;
    puStack_f0 = (undefined8 *)&DAT_100c7b3a0;
    puStack_f0 = (undefined8 *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_f8);
  }
  else {
    puStack_f0 = (undefined8 *)FUN_108855c40(param_2,&ppuStack_f8,&UNK_10b213ce8);
  }
LAB_100ec8da4:
  *param_1 = 2;
  param_1[1] = puStack_f0;
  return;
}

