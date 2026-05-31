
void FUN_100ec13f0(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  undefined *unaff_x19;
  byte *pbVar8;
  undefined **ppuVar9;
  long unaff_x23;
  long lVar10;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (*param_2 == '\x14') {
    lVar10 = *(long *)(param_2 + 0x18);
    if (lVar10 == 0) {
      puStack_70 = (undefined *)FUN_1087e422c(0,&UNK_10b229dd0,&UNK_10b20a590);
    }
    else {
      func_0x00010124dadc(&ppuStack_78,*(undefined8 *)(param_2 + 0x10));
      unaff_x19 = puStack_70;
      ppuVar9 = ppuStack_78;
      if (ppuStack_78 != (undefined **)0x8000000000000000) {
        *param_1 = ppuStack_78;
        param_1[1] = puStack_70;
        param_1[2] = lStack_68;
        uVar3 = lVar10 - 1;
        if (uVar3 == 0) {
          return;
        }
        ppuStack_78 = (undefined **)0x1;
        uVar4 = FUN_1087e422c((uVar3 & 0x7ffffffffffffff) + 1,&ppuStack_78,&UNK_10b23a1b0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar4;
        lStack_68 = lStack_68 + 1;
        puVar5 = unaff_x19;
        while (lStack_68 = lStack_68 + -1, lStack_68 != 0) {
          func_0x000100e0dab4(puVar5);
          puVar5 = puVar5 + 0x98;
        }
LAB_100ec1740:
        if (ppuVar9 == (undefined **)0x0) {
          return;
        }
        _free(unaff_x19);
        return;
      }
    }
  }
  else {
    if (*param_2 != '\x15') {
      uVar4 = FUN_108855c40(param_2,&ppuStack_78,&UNK_10b214188);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar4;
      return;
    }
    pbVar8 = *(byte **)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar10 = *(long *)(param_2 + 0x18) << 6;
      ppuVar9 = (undefined **)0x8000000000000000;
      do {
        bVar1 = *pbVar8;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            if (pbVar8[1] == 0) {
LAB_100ec1580:
              if (ppuVar9 != (undefined **)0x8000000000000000) {
                puStack_60 = &UNK_108c78a78;
                uStack_58 = 8;
                ppuStack_78 = &puStack_60;
                puStack_70 = &DAT_100c7b3a0;
                uVar4 = FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_78);
                *param_1 = 0x8000000000000000;
                param_1[1] = uVar4;
LAB_100ec1720:
                lVar10 = unaff_x23 + 1;
                puVar5 = unaff_x19;
                while (lVar10 = lVar10 + -1, lVar10 != 0) {
                  func_0x000100e0dab4(puVar5);
                  puVar5 = puVar5 + 0x98;
                }
                goto LAB_100ec1740;
              }
              func_0x00010124dadc(&ppuStack_78,pbVar8 + 0x20);
              unaff_x19 = puStack_70;
              ppuVar9 = ppuStack_78;
              unaff_x23 = lStack_68;
              if (ppuStack_78 == (undefined **)0x8000000000000000) goto LAB_100ec168c;
            }
          }
          else if (bVar1 == 4) {
            if (*(long *)(pbVar8 + 8) == 0) goto LAB_100ec1580;
          }
          else {
            if (bVar1 != 0xc) {
LAB_100ec16f4:
              uVar4 = FUN_108855c40(pbVar8,&ppuStack_78,&UNK_10b214e68);
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar4;
              if (ppuVar9 == (undefined **)0x8000000000000000) {
                return;
              }
              goto LAB_100ec1720;
            }
            if (*(long *)(pbVar8 + 0x18) == 8) {
              lVar6 = **(long **)(pbVar8 + 0x10);
              goto joined_r0x000100ec157c;
            }
          }
        }
        else if (bVar1 == 0xd) {
          if (*(long *)(pbVar8 + 0x10) == 8) {
            lVar6 = **(long **)(pbVar8 + 8);
joined_r0x000100ec157c:
            if (lVar6 == 0x73746e65746e6f63) goto LAB_100ec1580;
          }
        }
        else if (bVar1 == 0xe) {
          if (*(long *)(pbVar8 + 0x18) == 8) {
            pcVar7 = *(char **)(pbVar8 + 0x10);
            cVar2 = *pcVar7;
joined_r0x000100ec14fc:
            if (((((cVar2 == 'c') && (pcVar7[1] == 'o')) && (pcVar7[2] == 'n')) &&
                ((pcVar7[3] == 't' && (pcVar7[4] == 'e')))) &&
               ((pcVar7[5] == 'n' && ((pcVar7[6] == 't' && (pcVar7[7] == 's'))))))
            goto LAB_100ec1580;
          }
        }
        else {
          if (bVar1 != 0xf) goto LAB_100ec16f4;
          if (*(long *)(pbVar8 + 0x10) == 8) {
            pcVar7 = *(char **)(pbVar8 + 8);
            cVar2 = *pcVar7;
            goto joined_r0x000100ec14fc;
          }
        }
        pbVar8 = pbVar8 + 0x40;
        lVar10 = lVar10 + -0x40;
      } while (lVar10 != 0);
      if (ppuVar9 != (undefined **)0x8000000000000000) {
        *param_1 = ppuVar9;
        param_1[1] = unaff_x19;
        param_1[2] = unaff_x23;
        return;
      }
    }
    puStack_60 = &UNK_108c78a78;
    uStack_58 = 8;
    ppuStack_78 = &puStack_60;
    puStack_70 = &DAT_100c7b3a0;
    puStack_70 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_78);
  }
LAB_100ec168c:
  *param_1 = 0x8000000000000000;
  param_1[1] = puStack_70;
  return;
}

