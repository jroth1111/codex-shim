
/* WARNING: Removing unreachable block (ram,0x0001014163a4) */
/* WARNING: Removing unreachable block (ram,0x000101416510) */
/* WARNING: Removing unreachable block (ram,0x0001014164f8) */
/* WARNING: Removing unreachable block (ram,0x00010141633c) */
/* WARNING: Removing unreachable block (ram,0x0001014162f8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1014161d4(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  undefined **ppuVar11;
  undefined *in_x13;
  undefined *extraout_x13;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined *unaff_x21;
  byte *pbVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  long lVar21;
  undefined4 unaff_w27;
  ulong unaff_x28;
  undefined4 uVar22;
  ulong unaff_d8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar22 = (undefined4)unaff_d8;
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lVar21 = *(long *)(param_2 + 0x10);
      lVar20 = *(long *)(param_2 + 0x18) * 0x40;
      lVar18 = lVar21 + lVar20;
      if (*(long *)(param_2 + 0x18) == 0) {
        ppuVar11 = (undefined **)0x0;
        iVar14 = 2;
        ppuVar17 = (undefined **)0x8000000000000001;
        unaff_w27 = 0;
      }
      else {
        lVar13 = 0;
        bVar4 = false;
        ppuVar11 = (undefined **)((lVar20 - 0x40U >> 6) + 1);
        iVar14 = 2;
        ppuVar17 = (undefined **)0x8000000000000001;
        do {
          pbVar1 = (byte *)(lVar21 + lVar13);
          pbVar15 = pbVar1 + 0x20;
          bVar10 = *pbVar1;
          if (bVar10 < 0xd) {
            if (bVar10 == 1) {
              bVar10 = *(byte *)(lVar21 + lVar13 + 1);
              if (2 < bVar10) {
                bVar10 = 3;
              }
              uStack_98 = (undefined **)((ulong)CONCAT61(uStack_98._2_6_,bVar10) << 8);
            }
            else {
              if (bVar10 != 4) {
                if (bVar10 != 0xc) goto LAB_101416514;
                plVar9 = *(long **)(lVar21 + lVar13 + 0x10);
                lVar2 = *(long *)(lVar21 + lVar13 + 0x18);
                if (lVar2 != 0xc) {
                  if (lVar2 == 8) goto LAB_101416358;
                  goto LAB_1014163d4;
                }
                goto LAB_1014163a8;
              }
              uVar8 = *(ulong *)(lVar21 + lVar13 + 8);
              if (2 < uVar8) {
                uVar8 = 3;
              }
              uStack_98 = (undefined **)((ulong)CONCAT61(uStack_98._2_6_,(char)uVar8) << 8);
            }
            goto LAB_1014163e8;
          }
          if (bVar10 != 0xd) {
            if (bVar10 == 0xe) {
              FUN_100ac2f28(&uStack_98,*(undefined8 *)(lVar21 + lVar13 + 0x10),
                            *(undefined8 *)(lVar21 + lVar13 + 0x18));
joined_r0x000101416310:
              if (((ulong)uStack_98 & 1) == 0) goto LAB_1014163e8;
            }
            else {
              if (bVar10 == 0xf) {
                FUN_100ac2f28(&uStack_98,*(undefined8 *)(lVar21 + lVar13 + 8),
                              *(undefined8 *)(lVar21 + lVar13 + 0x10));
                goto joined_r0x000101416310;
              }
LAB_101416514:
              puStack_90 = (undefined *)FUN_108855c40(pbVar1,&puStack_80,&UNK_10b20eb00);
              uStack_98 = (undefined **)CONCAT71(uStack_98._1_7_,1);
            }
LAB_101416538:
            puVar6 = puStack_90;
            if ((long)ppuVar17 < -0x7ffffffffffffffe) goto LAB_10141673c;
            goto joined_r0x000101416820;
          }
          plVar9 = *(long **)(lVar21 + lVar13 + 8);
          lVar2 = *(long *)(lVar21 + lVar13 + 0x10);
          if (lVar2 == 0xc) {
LAB_1014163a8:
            if (*plVar9 == 0x69646f4d7473616c && (int)plVar9[1] == 0x64656966) {
              uStack_98 = (undefined **)CONCAT62(uStack_98._2_6_,0x200);
              goto LAB_1014163e8;
            }
LAB_1014163d4:
            uStack_98 = (undefined **)CONCAT62(uStack_98._2_6_,0x300);
          }
          else {
            if (lVar2 != 8) goto LAB_1014163d4;
LAB_101416358:
            if (*plVar9 == 0x65636e6569647561) {
              uStack_98 = (undefined **)((ulong)uStack_98._2_6_ << 0x10);
            }
            else {
              if (*plVar9 != 0x797469726f697270) goto LAB_1014163d4;
              uStack_98 = (undefined **)CONCAT62(uStack_98._2_6_,0x100);
            }
          }
LAB_1014163e8:
          if (uStack_98._1_1_ < 2) {
            if (uStack_98._1_1_ == 0) {
              if (ppuVar17 != (undefined **)0x8000000000000001) {
                puStack_80 = &UNK_108c6e908;
                uStack_78 = 8;
                uStack_98 = &puStack_80;
                puStack_90 = &DAT_100c7b3a0;
                puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
                ppuVar17 = (undefined **)((ulong)ppuVar17 & 0x7fffffffffffffff);
                goto joined_r0x000101416820;
              }
              bVar10 = *pbVar15;
              ppuVar17 = (undefined **)0x8000000000000000;
              if (bVar10 != 0x10) {
                if (bVar10 == 0x11) {
                  pbVar15 = *(byte **)(lVar21 + lVar13 + 0x28);
                }
                else if (bVar10 == 0x12) goto LAB_101416244;
                FUN_101452ee8(&uStack_98,pbVar15);
                puVar6 = puStack_90;
                ppuVar17 = uStack_98;
                if (uStack_98 == (undefined **)0x8000000000000001) goto LAB_10141673c;
              }
LAB_101416244:
              puStack_a0 = puStack_90;
              unaff_x28 = uStack_88;
            }
            else {
              if (iVar14 != 2) {
                puStack_80 = &UNK_108c98148;
                uStack_78 = 8;
                uStack_98 = &puStack_80;
                puStack_90 = &DAT_100c7b3a0;
                puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
                goto LAB_1014167d0;
              }
              FUN_101354a9c(&uStack_98,pbVar15);
              if ((int)uStack_98 == 1) goto LAB_101416538;
              unaff_d8 = (ulong)puStack_90 & 0xffffffff;
              iVar14 = uStack_98._4_4_;
            }
          }
          else if (uStack_98._1_1_ == 2) {
            if (bVar4) {
              puStack_80 = &UNK_108cb62a8;
              uStack_78 = 0xc;
              uStack_98 = &puStack_80;
              puStack_90 = &DAT_100c7b3a0;
              puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
LAB_1014167d0:
              if (-0x7fffffffffffffff < (long)ppuVar17) goto joined_r0x000101416820;
              goto LAB_10141673c;
            }
            unaff_w27 = 0;
            bVar10 = *pbVar15;
            if (bVar10 != 0x10) {
              if (bVar10 == 0x11) {
                pbVar15 = *(byte **)(lVar21 + lVar13 + 0x28);
              }
              else if (bVar10 == 0x12) goto LAB_1014164d4;
              FUN_101466fb0(&uStack_98,pbVar15);
              if (((ulong)uStack_98 & 1) != 0) goto LAB_101416538;
              unaff_w27 = uStack_98._4_4_;
            }
LAB_1014164d4:
            puStack_a8 = puStack_90;
            bVar4 = true;
          }
          uVar22 = (undefined4)unaff_d8;
          lVar13 = lVar13 + 0x40;
        } while (lVar20 - lVar13 != 0);
        in_x13 = puStack_a8;
        lVar21 = lVar18;
        if (!bVar4) {
          unaff_w27 = 0;
        }
      }
      ppuVar16 = (undefined **)0x8000000000000000;
      if (ppuVar17 != (undefined **)0x8000000000000001) {
        ppuVar16 = ppuVar17;
      }
      iVar12 = 0;
      if (iVar14 != 2) {
        iVar12 = iVar14;
      }
      if (lVar18 - lVar21 != 0) {
        uStack_98 = ppuVar11;
        puVar6 = (undefined *)
                 FUN_1087e422c((long)ppuVar11 + ((ulong)(lVar18 - lVar21) >> 6),&uStack_98,
                               &UNK_10b23a190);
        ppuVar17 = (undefined **)((ulong)ppuVar16 & 0x7fffffffffffffff);
joined_r0x000101416820:
        if (ppuVar17 != (undefined **)0x0) {
          _free(puStack_a0);
        }
        goto LAB_10141673c;
      }
      goto LAB_10141666c;
    }
    puVar6 = (undefined *)FUN_108855c40(param_2,&puStack_80,&UNK_10b20b6c0);
    goto LAB_10141673c;
  }
  lVar18 = *(long *)(param_2 + 0x18);
  if (lVar18 == 0) {
    puVar6 = (undefined *)FUN_1087e422c(0,&UNK_10b22b808,&UNK_10b20a590);
    goto LAB_10141673c;
  }
  pcVar19 = *(char **)(param_2 + 0x10);
  cVar3 = *pcVar19;
  if (cVar3 == '\x10' || cVar3 == '\x12') {
    ppuVar16 = (undefined **)0x8000000000000000;
    puStack_a0 = unaff_x21;
  }
  else {
    pcVar7 = pcVar19;
    if (cVar3 == '\x11') {
      pcVar7 = *(char **)(pcVar19 + 8);
    }
    FUN_101452ee8(&uStack_98,pcVar7);
    puVar6 = puStack_90;
    if ((uStack_98 == (undefined **)0x8000000000000001) ||
       (ppuVar16 = uStack_98, puStack_a0 = puStack_90, unaff_x28 = uStack_88,
       uStack_98 == (undefined **)0x8000000000000002)) goto LAB_10141673c;
  }
  if (lVar18 == 1) {
    uVar5 = 1;
LAB_10141658c:
    puVar6 = (undefined *)FUN_1087e422c(uVar5,&UNK_10b22b808,&UNK_10b20a590);
  }
  else {
    FUN_101354a9c(&uStack_98,pcVar19 + 0x20);
    puVar6 = puStack_90;
    if (((ulong)uStack_98 & 1) == 0) {
      if (lVar18 == 2) {
        uVar5 = 2;
        goto LAB_10141658c;
      }
      pcVar7 = pcVar19 + 0x40;
      iVar12 = uStack_98._4_4_;
      uVar22 = puStack_90._0_4_;
      cVar3 = *pcVar7;
      if (cVar3 == '\x10' || cVar3 == '\x12') {
        unaff_w27 = 0;
        puStack_90 = extraout_x13;
      }
      else {
        if (cVar3 == '\x11') {
          pcVar7 = *(char **)(pcVar19 + 0x48);
        }
        FUN_101466fb0(&uStack_98,pcVar7);
        puVar6 = puStack_90;
        if (((ulong)uStack_98 & 1) != 0) goto joined_r0x000101416614;
        unaff_w27 = (undefined4)((ulong)uStack_98 >> 0x20);
      }
      in_x13 = puStack_90;
      if (lVar18 == 3) {
LAB_10141666c:
        *param_1 = (ulong)ppuVar16;
        param_1[1] = (ulong)puStack_a0;
        param_1[2] = unaff_x28;
        *(int *)(param_1 + 3) = iVar12;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar22;
        *(undefined4 *)(param_1 + 4) = unaff_w27;
        *(undefined **)((long)param_1 + 0x24) = in_x13;
        return;
      }
      uStack_98 = (undefined **)0x3;
      puVar6 = (undefined *)
               FUN_1087e422c((lVar18 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,&uStack_98,
                             &UNK_10b23a1b0);
    }
  }
joined_r0x000101416614:
  if (((ulong)ppuVar16 & 0x7fffffffffffffff) != 0) {
    _free(puStack_a0);
  }
LAB_10141673c:
  *param_1 = 0x8000000000000002;
  param_1[1] = (ulong)puVar6;
  return;
}

