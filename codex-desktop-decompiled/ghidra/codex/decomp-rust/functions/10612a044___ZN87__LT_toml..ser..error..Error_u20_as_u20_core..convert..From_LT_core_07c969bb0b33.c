
void __ZN87__LT_toml__ser__error__Error_u20_as_u20_core__convert__From_LT_core__fmt__Error_GT__GT_4from17h103b46a54fff1ff8E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,long param_5
               )

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  code *pcVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  byte bVar16;
  long *plVar17;
  long lVar18;
  undefined4 uVar19;
  byte bVar20;
  long lVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  byte *pbVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  puVar13 = (undefined8 *)_malloc(0x26);
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = 0x6572727563636f20;
    *puVar13 = 0x726f727265206e61;
    puVar13[3] = 0x6120676e69746972;
    puVar13[2] = 0x77206e6568772064;
    *(undefined8 *)((long)puVar13 + 0x1e) = 0x65756c6176206120;
    *param_1 = 0x26;
    param_1[1] = puVar13;
    param_1[2] = 0x26;
    return;
  }
  auVar27 = func_0x0001087c9084(1,0x26);
  plVar17 = auVar27._8_8_;
  plVar14 = auVar27._0_8_;
  if (*plVar17 != -0x7fffffffffffffff) {
    uStack_a8._0_4_ = 0;
    uStack_a8._4_4_ = 0;
    uStack_a0 = 1;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    if (param_5 == 0) {
      bVar23 = 0;
      bVar20 = 0;
      iVar12 = 0;
      bVar7 = false;
      bVar3 = false;
    }
    else {
      bVar3 = false;
      bVar7 = false;
      iVar12 = 0;
      bVar20 = 0;
      bVar23 = 0;
      cVar11 = '\0';
      bVar16 = 0;
      lVar18 = param_5;
      pbVar25 = param_4;
      do {
        bVar5 = *pbVar25;
        bVar22 = bVar23;
        if (bVar5 < 0x22) {
          if (bVar5 == 9) {
            bVar16 = 0;
            cVar11 = '\0';
          }
          else {
            if (bVar5 != 10) {
              bVar16 = 0;
              cVar10 = '\0';
              goto LAB_10612a154;
            }
            bVar16 = 0;
            cVar11 = '\0';
            iVar12 = 1;
          }
        }
        else {
          if (bVar5 == 0x22) {
            cVar10 = '\0';
            bVar16 = bVar16 + 1;
            bVar22 = bVar16;
            if (bVar16 <= bVar23) {
              bVar22 = bVar23;
            }
          }
          else {
            if (bVar5 == 0x5c) {
              bVar16 = 0;
              cVar11 = '\0';
              bVar7 = true;
              goto LAB_10612a164;
            }
            bVar23 = cVar11 + 1U;
            if ((byte)(cVar11 + 1U) <= bVar20) {
              bVar23 = bVar20;
            }
            bVar16 = 0;
            cVar10 = '\0';
            if (bVar5 == 0x27) {
              cVar10 = cVar11 + '\x01';
              bVar20 = bVar23;
            }
          }
LAB_10612a154:
          bVar3 = (bool)((bVar5 < 0x20 || bVar5 == 0x7f) | bVar3);
          bVar23 = bVar22;
          cVar11 = cVar10;
        }
LAB_10612a164:
        lVar18 = lVar18 + -1;
        pbVar25 = pbVar25 + 1;
      } while (lVar18 != 0);
    }
    if (((bVar3 || bVar7) || (bVar23 != 0)) || (iVar12 != 0)) {
      uVar19 = 3;
      if (iVar12 == 0) {
        uVar19 = 1;
      }
      if (!bVar3 && bVar20 < 3) {
        uVar19 = 2;
      }
      uVar4 = 3;
      if ((bVar3 || bVar7) || 2 < bVar23) {
        uVar4 = uVar19;
      }
      uVar19 = 0;
      if ((bVar3 || iVar12 != 0) || bVar20 != 0) {
        uVar19 = uVar4;
      }
    }
    else {
      uVar19 = 1;
    }
    iVar12 = FUN_10611e800(param_4,param_5,uVar19,iVar12,&uStack_a8);
    if (iVar12 == 0) {
      plVar26 = (long *)plVar17[3];
      if ((*(byte *)(plVar17 + 4) & 1) == 0) {
        lVar18 = plVar26[2];
      }
      else {
        lVar18 = plVar26[2];
        if (*plVar26 == lVar18) {
          FUN_108a8c380(plVar26,lVar18,1,1,1);
          lVar18 = plVar26[2];
        }
        *(undefined1 *)(plVar26[1] + lVar18) = 0x2c;
        lVar18 = lVar18 + 1;
        plVar26[2] = lVar18;
      }
      *(undefined1 *)(plVar17 + 4) = 1;
      if (*plVar26 == lVar18) {
        FUN_108a8c380(plVar26,lVar18,1,1,1);
        lVar18 = plVar26[2];
      }
      bVar20 = 0;
      bVar7 = false;
      bVar23 = 0;
      bVar8 = false;
      lVar21 = 0;
      *(undefined1 *)(plVar26[1] + lVar18) = 0x20;
      plVar26[2] = lVar18 + 1;
      bVar3 = true;
      do {
        bVar16 = (&UNK_109beca9b)[lVar21];
        uVar24 = (uint)bVar16;
        bVar1 = bVar3;
        if (uVar24 != 0x5f) {
          bVar1 = false;
        }
        bVar2 = bVar3;
        if (uVar24 != 0x2d) {
          bVar2 = bVar1;
        }
        if (9 < uVar24 - 0x30 && 0x19 < (uVar24 & 0xffffffdf) - 0x41) {
          bVar3 = bVar2;
        }
        if (bVar16 < 0x27) {
          if (bVar16 != 9) {
            if (bVar16 == 0x22) {
              bVar7 = true;
            }
            else {
LAB_10612a33c:
              bVar23 = (bVar16 < 0x20 || bVar16 == 0x7f) | bVar23;
            }
          }
        }
        else if (bVar16 == 0x27) {
          bVar20 = 1;
        }
        else {
          if (bVar16 != 0x5c) goto LAB_10612a33c;
          bVar8 = true;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0x18);
      bVar16 = 1;
      if ((bVar23 != 0 || bVar8) || bVar7) {
        bVar16 = bVar23 | bVar20;
      }
      bVar23 = 4;
      if (!bVar3) {
        bVar23 = bVar16;
      }
      iVar12 = FUN_10611e800(&UNK_109beca9b,0x18,bVar23,0,plVar26);
      if (iVar12 == 0) {
        lVar18 = plVar26[2];
        if (*plVar26 == lVar18) {
          FUN_108a8c380(plVar26,lVar18,1,1,1);
          lVar18 = plVar26[2];
        }
        *(undefined1 *)(plVar26[1] + lVar18) = 0x20;
        lVar18 = lVar18 + 1;
        plVar26[2] = lVar18;
        if (*plVar26 == lVar18) {
          FUN_108a8c380(plVar26,lVar18,1,1,1);
          lVar18 = plVar26[2];
        }
        *(undefined1 *)(plVar26[1] + lVar18) = 0x3d;
        lVar18 = lVar18 + 1;
        plVar26[2] = lVar18;
        if (*plVar26 == lVar18) {
          FUN_108a8c380(plVar26,lVar18,1,1,1);
          lVar18 = plVar26[2];
        }
        *(undefined1 *)(plVar26[1] + lVar18) = 0x20;
        plVar26[2] = lVar18 + 1;
        puStack_c0 = &uStack_a8;
        puStack_b8 = &DAT_1061269e4;
        iVar12 = __ZN4core3fmt5write17h64810b21425781ecE
                           (plVar26,&UNK_10b4cf200,s__108b38569,&puStack_c0);
        if (iVar12 == 0) {
          *plVar14 = -0x7ffffffffffffffc;
          lVar18 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8);
          goto joined_r0x00010612a4d0;
        }
      }
    }
    puVar13 = (undefined8 *)_malloc(0x26);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[1] = 0x6572727563636f20;
      *puVar13 = 0x726f727265206e61;
      puVar13[3] = 0x6120676e69746972;
      puVar13[2] = 0x77206e6568772064;
      *(undefined8 *)((long)puVar13 + 0x1e) = 0x65756c6176206120;
      *plVar14 = 0x26;
      plVar14[1] = (long)puVar13;
      plVar14[2] = 0x26;
      lVar18 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8);
joined_r0x00010612a4d0:
      if (lVar18 != 0) {
        _free(CONCAT44(uStack_9c,uStack_a0));
      }
      return;
    }
    func_0x0001087c9084(1,0x26);
    goto LAB_10612a628;
  }
  __ZN80__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hde5586f6355fdd1fE
            (&uStack_a8,param_4,param_5);
  if ((int)uStack_a8 != 1) {
    plVar17[2] = CONCAT44(uStack_98,uStack_9c);
    plVar17[1] = CONCAT44(uStack_a0,uStack_a8._4_4_);
    plVar17[3] = CONCAT44(uStack_90,uStack_94);
    puStack_c0 = (undefined8 *)0x8000000000000004;
    goto LAB_10612a534;
  }
  lVar18 = CONCAT44(uStack_9c,uStack_a0);
  uVar6 = CONCAT44(uStack_94,uStack_98);
  puStack_c0 = (undefined8 *)0x0;
  puStack_b8 = (undefined *)0x1;
  uStack_98 = 0x60000020;
  uStack_94 = 0;
  uStack_a0 = 0xb4cf200;
  uStack_9c = 1;
  lStack_b0 = 0;
  if (lVar18 == 0) {
    uStack_a8 = &puStack_c0;
    uVar15 = func_0x0001055b8dfc(&uStack_a8,&UNK_109bed06d,0x10);
  }
  else {
    puStack_70 = auStack_80;
    puStack_68 = &DAT_10612b344;
    uStack_78 = uVar6;
    uStack_a8 = &puStack_c0;
    uVar15 = __ZN4core3fmt5write17h64810b21425781ecE
                       (&puStack_c0,&UNK_10b4cf200,s_invalid_108b38af9,&puStack_70);
  }
  if ((uVar15 & 1) == 0) {
    if (CONCAT44(uStack_8c,uStack_90) != 0) {
      uStack_78 = uStack_88;
      puStack_70 = auStack_80;
      puStack_68 = &DAT_10612b344;
      iVar12 = __ZN4core3fmt5write17h64810b21425781ecE
                         (&puStack_c0,&UNK_10b4cf200,s___expected_108b38b04,&puStack_70);
      if (iVar12 != 0) goto LAB_10612a568;
    }
    plVar14[2] = lStack_b0;
    plVar14[1] = (long)puStack_b8;
LAB_10612a534:
    *plVar14 = (long)puStack_c0;
    return;
  }
LAB_10612a568:
  func_0x000108a07a3c(&UNK_109becab3,0x37,&puStack_70,&UNK_10b4cf348,&UNK_10b4cf298);
LAB_10612a628:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10612a62c);
  (*pcVar9)();
}

