
/* WARNING: Possible PIC construction at 0x0001017a6b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017a6b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017a6b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017a6b08) */
/* WARNING: Removing unreachable block (ram,0x0001017a6b38) */
/* WARNING: Removing unreachable block (ram,0x0001017a6b18) */

void FUN_101778ac0(byte *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x23;
  byte *unaff_x24;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  int aiStack_d8 [2];
  undefined8 uStack_d0;
  long lStack_c8;
  uint auStack_c0 [2];
  long lStack_b8;
  long lStack_b0;
  undefined1 uStack_a1;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  byte *pbStack_50;
  long lStack_48;
  
  puVar5 = auStack_60;
  puVar17 = &stack0xfffffffffffffff0;
  uVar13 = *(ulong *)(param_2 + 0x28);
  if (uVar13 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar13);
      if (0x22 < bVar2) {
LAB_101778bec:
        lVar7 = FUN_10887eaf8(param_2,&lStack_58,&UNK_10b2589d0);
LAB_101778c04:
        uVar6 = FUN_10887f554(lVar7,param_2);
        goto LAB_101778b3c;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x22) goto LAB_101778bec;
        *(ulong *)(param_2 + 0x28) = uVar13 + 1;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                  (&lStack_58,param_2 + 0x18,param_2);
        if (lStack_58 == 2) {
          *(byte **)(param_1 + 8) = pbStack_50;
          goto LAB_101778b7c;
        }
        if (lStack_48 == 0) {
          lVar7 = 1;
          _memcpy(1,pbStack_50,0);
LAB_101778bcc:
          *(long *)param_1 = lStack_48;
          *(long *)(param_1 + 8) = lVar7;
          *(long *)(param_1 + 0x10) = lStack_48;
          return;
        }
        lVar7 = _malloc(lStack_48);
        if (lVar7 != 0) {
          _memcpy(lVar7,pbStack_50,lStack_48);
          if (lStack_48 != -0x8000000000000000) goto LAB_101778bcc;
          goto LAB_101778c04;
        }
        auVar18 = func_0x0001087c9084(1,lStack_48);
        pbVar11 = auVar18._8_8_;
        plVar8 = auVar18._0_8_;
        uStack_68 = 0x101778c20;
        bVar2 = *pbVar11;
        if (bVar2 < 0xe) {
          if (bVar2 == 0xc) {
            lVar7 = *(long *)(pbVar11 + 8);
            plVar8[1] = *(long *)(pbVar11 + 0x10);
            *plVar8 = lVar7;
            plVar8[2] = *(long *)(pbVar11 + 0x18);
            return;
          }
          if (bVar2 != 0xd) {
LAB_101778d68:
            lVar7 = FUN_10888066c(pbVar11,&uStack_a1,&UNK_10b2589d0);
            *plVar8 = -0x8000000000000000;
            plVar8[1] = lVar7;
            return;
          }
          uVar3 = *(undefined8 *)(pbVar11 + 8);
          lVar1 = *(long *)(pbVar11 + 0x10);
        }
        else {
          if (bVar2 == 0xe) {
            lVar7 = *(long *)(pbVar11 + 8);
            lVar1 = *(long *)(pbVar11 + 0x10);
            lVar14 = *(long *)(pbVar11 + 0x18);
            func_0x0001055bf348(auStack_c0,lVar1,lVar14);
            lVar9 = lVar14;
            lVar15 = lVar1;
            lVar16 = lVar7;
            if (((auStack_c0[0] & 1) != 0) &&
               (lVar9 = lStack_b8, lVar15 = lVar14, lVar16 = lVar1, lVar7 != -0x8000000000000000)) {
              auStack_c0[0] = CONCAT31(auStack_c0[0]._1_3_,6);
              lStack_b8 = lVar1;
              lStack_b0 = lVar14;
              lVar9 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                (auStack_c0,&uStack_a1,&UNK_10b2589d0);
              *plVar8 = -0x8000000000000000;
              plVar8[1] = lVar9;
              if (lVar7 == 0) {
                return;
              }
              _free(lVar1);
              return;
            }
            *plVar8 = lVar16;
            plVar8[1] = lVar15;
            plVar8[2] = lVar9;
            return;
          }
          if (bVar2 != 0xf) goto LAB_101778d68;
          lVar7 = *(long *)(pbVar11 + 8);
          uVar6 = *(undefined8 *)(pbVar11 + 0x10);
          func_0x0001055bf348(aiStack_d8,lVar7,uVar6);
          uVar3 = uStack_d0;
          lVar1 = lStack_c8;
          if (aiStack_d8[0] == 1) {
            auStack_c0[0] = CONCAT31(auStack_c0[0]._1_3_,6);
            lStack_b8 = lVar7;
            lStack_b0 = uVar6;
            lVar7 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (auStack_c0,&uStack_a1,&UNK_10b2589d0);
            *plVar8 = -0x8000000000000000;
            plVar8[1] = lVar7;
            goto SUB_1017a6a48;
          }
        }
        if (lVar1 == 0) {
          lVar7 = 1;
        }
        else {
          lVar7 = _malloc(lVar1);
          if (lVar7 == 0) {
            func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101778c84);
            (*pcVar4)();
          }
        }
        _memcpy(lVar7,uVar3,lVar1);
        *plVar8 = lVar1;
        plVar8[1] = lVar7;
        plVar8[2] = lVar1;
        puVar5 = auStack_60;
        goto SUB_1017a6a48;
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(param_2 + 0x28) = uVar13;
    } while (*(ulong *)(param_2 + 0x20) != uVar13);
  }
  lStack_58 = 5;
  uVar6 = FUN_10887ea38(param_2,&lStack_58);
LAB_101778b3c:
  *(undefined8 *)(param_1 + 8) = uVar6;
LAB_101778b7c:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80;
  return;
SUB_1017a6a48:
  *(byte **)(puVar5 + -0x40) = unaff_x24;
  *(long *)(puVar5 + -0x38) = unaff_x23;
  *(byte **)(puVar5 + -0x30) = pbStack_50;
  *(long *)(puVar5 + -0x28) = lStack_48;
  *(byte **)(puVar5 + -0x20) = param_2;
  *(byte **)(puVar5 + -0x18) = param_1;
  *(undefined1 **)(puVar5 + -0x10) = puVar17;
  *(undefined8 *)(puVar5 + -8) = uStack_68;
  puVar17 = puVar5 + -0x10;
  bVar2 = *pbVar11;
  uVar12 = (uint)bVar2;
  param_2 = pbVar11;
  if (bVar2 < 0xd) {
    if (bVar2 < 0xc) {
      return;
    }
    if (uVar12 == 0xc) {
LAB_1017a6a9c:
      if (*(long *)(pbVar11 + 8) == 0) {
        return;
      }
      param_1 = *(byte **)(pbVar11 + 0x10);
      goto LAB_1017a6b54;
    }
LAB_1017a6b1c:
    param_1 = *(byte **)(pbVar11 + 0x10);
    lStack_48 = *(long *)(pbVar11 + 0x18);
    if (lStack_48 != 0) {
      uStack_68 = 0x1017a6b38;
      puVar5 = puVar5 + -0x40;
      pbVar11 = param_1;
      pbStack_50 = param_1;
      unaff_x23 = lStack_48;
      unaff_x24 = param_1;
      goto SUB_1017a6a48;
    }
    goto LAB_1017a6b4c;
  }
  if (bVar2 < 0x11) {
    if (uVar12 - 0xf < 2 || uVar12 == 0xd) {
      return;
    }
    if (uVar12 == 0xe) goto LAB_1017a6a9c;
    goto LAB_1017a6b1c;
  }
  if (uVar12 < 0x13) {
    if (uVar12 != 0x11) {
      if (uVar12 == 0x12) {
        return;
      }
      goto LAB_1017a6b1c;
    }
    param_1 = *(byte **)(pbVar11 + 8);
    uStack_68 = 0x1017a6b08;
    puVar5 = puVar5 + -0x40;
    pbVar11 = param_1;
    goto SUB_1017a6a48;
  }
  if (uVar12 != 0x13) {
    if (uVar12 != 0x14) goto LAB_1017a6b1c;
    param_1 = *(byte **)(pbVar11 + 0x10);
    lVar7 = *(long *)(pbVar11 + 0x18) + 1;
    pbVar10 = param_1;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      func_0x0001017a6a48(pbVar10);
      pbVar10 = pbVar10 + 0x20;
    }
LAB_1017a6b4c:
    if (*(long *)(pbVar11 + 8) == 0) {
      return;
    }
LAB_1017a6b54:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1);
    return;
  }
  param_1 = *(byte **)(pbVar11 + 8);
  uStack_68 = 0x1017a6b18;
  puVar5 = puVar5 + -0x40;
  pbVar11 = param_1;
  goto SUB_1017a6a48;
}

