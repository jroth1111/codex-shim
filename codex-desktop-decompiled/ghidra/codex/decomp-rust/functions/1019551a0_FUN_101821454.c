
/* WARNING: Possible PIC construction at 0x00010195528c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010195525c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010195526c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101955260) */
/* WARNING: Removing unreachable block (ram,0x000101955290) */
/* WARNING: Removing unreachable block (ram,0x000101955270) */

void FUN_101821454(byte *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x23;
  byte *unaff_x24;
  undefined1 *puVar16;
  undefined1 auVar17 [16];
  uint uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int aiStack_c0 [2];
  long lStack_b8;
  long lStack_b0;
  undefined1 uStack_a1;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  byte *pbStack_50;
  long lStack_48;
  
  puVar4 = auStack_60;
  puVar16 = &stack0xfffffffffffffff0;
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
      if (0x22 < bVar2) {
LAB_101821580:
        lVar6 = FUN_10889a27c(param_2,&lStack_58,&UNK_10b25d5b0);
LAB_101821598:
        uVar5 = FUN_10889a5f0(lVar6,param_2);
        goto LAB_1018214d0;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x22) goto LAB_101821580;
        *(ulong *)(param_2 + 0x28) = uVar11 + 1;
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
          goto LAB_101821510;
        }
        if (lStack_48 == 0) {
          lVar6 = 1;
          _memcpy(1,pbStack_50,0);
LAB_101821560:
          *(long *)param_1 = lStack_48;
          *(long *)(param_1 + 8) = lVar6;
          *(long *)(param_1 + 0x10) = lStack_48;
          return;
        }
        lVar6 = _malloc(lStack_48);
        if (lVar6 != 0) {
          _memcpy(lVar6,pbStack_50,lStack_48);
          if (lStack_48 != -0x8000000000000000) goto LAB_101821560;
          goto LAB_101821598;
        }
        auVar17 = func_0x0001087c9084(1,lStack_48);
        pbVar9 = auVar17._8_8_;
        puVar7 = auVar17._0_8_;
        uStack_68 = 0x1018215b4;
        bVar2 = *pbVar9;
        if (bVar2 < 0xe) {
          if (bVar2 == 0xc) {
            uVar5 = *(undefined8 *)(pbVar9 + 8);
            puVar7[2] = *(undefined8 *)(pbVar9 + 0x10);
            puVar7[1] = uVar5;
            puVar7[3] = *(undefined8 *)(pbVar9 + 0x18);
LAB_1018216f0:
            *puVar7 = 2;
            return;
          }
          if (bVar2 != 0xd) {
LAB_10182170c:
            FUN_1088bb854(puVar7,pbVar9,&uStack_a1,&UNK_10b25d5b0);
            return;
          }
          lVar1 = *(undefined8 *)(pbVar9 + 8);
          lVar12 = *(long *)(pbVar9 + 0x10);
        }
        else {
          if (bVar2 == 0xe) {
            lVar6 = *(long *)(pbVar9 + 8);
            lVar1 = *(long *)(pbVar9 + 0x10);
            lVar13 = *(long *)(pbVar9 + 0x18);
            func_0x0001055bf348(&uStack_118,lVar1,lVar13);
            lVar12 = lVar13;
            lVar14 = lVar1;
            lVar15 = lVar6;
            if (((uStack_118 & 1) != 0) &&
               (lVar12 = lStack_110, lVar14 = lVar13, lVar15 = lVar1, lVar6 != -0x8000000000000000))
            {
              aiStack_c0[0] = CONCAT31(aiStack_c0[0]._1_3_,6);
              lStack_b8 = lVar1;
              lStack_b0 = lVar13;
              FUN_108880b08(&uStack_118,aiStack_c0,&uStack_a1,&UNK_10b25d5b0);
              puVar7[5] = uStack_f0;
              puVar7[4] = uStack_f8;
              puVar7[7] = uStack_e0;
              puVar7[6] = uStack_e8;
              puVar7[9] = uStack_d0;
              puVar7[8] = uStack_d8;
              puVar7[10] = uStack_c8;
              puVar7[1] = lStack_110;
              *puVar7 = CONCAT44(uStack_114,uStack_118);
              puVar7[3] = uStack_100;
              puVar7[2] = uStack_108;
              if (lVar6 == 0) {
                return;
              }
              _free(lVar1);
              return;
            }
            puVar7[2] = lVar14;
            puVar7[3] = lVar12;
            puVar7[1] = lVar15;
            goto LAB_1018216f0;
          }
          if (bVar2 != 0xf) goto LAB_10182170c;
          lVar6 = *(long *)(pbVar9 + 8);
          uVar5 = *(undefined8 *)(pbVar9 + 0x10);
          func_0x0001055bf348(aiStack_c0,lVar6,uVar5);
          lVar1 = lStack_b8;
          lVar12 = lStack_b0;
          if (aiStack_c0[0] == 1) {
            uStack_118 = CONCAT31(uStack_118._1_3_,6);
            lStack_110 = lVar6;
            uStack_108 = uVar5;
            FUN_108880b08(puVar7,&uStack_118,&uStack_a1,&UNK_10b25d5b0);
            goto SUB_1019551a0;
          }
        }
        if (lVar12 == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = _malloc(lVar12);
          if (lVar6 == 0) {
            func_0x0001087c9084(1,lVar12);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101821618);
            (*pcVar3)();
          }
        }
        _memcpy(lVar6,lVar1,lVar12);
        puVar7[2] = lVar6;
        puVar7[3] = lVar12;
        *puVar7 = 2;
        puVar7[1] = lVar12;
        puVar4 = auStack_60;
        goto SUB_1019551a0;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
    } while (*(ulong *)(param_2 + 0x20) != uVar11);
  }
  lStack_58 = 5;
  uVar5 = FUN_10889a21c(param_2,&lStack_58);
LAB_1018214d0:
  *(undefined8 *)(param_1 + 8) = uVar5;
LAB_101821510:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80;
  return;
SUB_1019551a0:
  *(byte **)(puVar4 + -0x40) = unaff_x24;
  *(long *)(puVar4 + -0x38) = unaff_x23;
  *(byte **)(puVar4 + -0x30) = pbStack_50;
  *(long *)(puVar4 + -0x28) = lStack_48;
  *(byte **)(puVar4 + -0x20) = param_2;
  *(byte **)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar16;
  *(undefined8 *)(puVar4 + -8) = uStack_68;
  puVar16 = puVar4 + -0x10;
  bVar2 = *pbVar9;
  uVar10 = (uint)bVar2;
  param_2 = pbVar9;
  if (bVar2 < 0xd) {
    if (bVar2 < 0xc) {
      return;
    }
    if (uVar10 == 0xc) {
LAB_1019551f4:
      if (*(long *)(pbVar9 + 8) == 0) {
        return;
      }
      param_1 = *(byte **)(pbVar9 + 0x10);
      goto LAB_1019552ac;
    }
LAB_101955274:
    param_1 = *(byte **)(pbVar9 + 0x10);
    lStack_48 = *(long *)(pbVar9 + 0x18);
    if (lStack_48 != 0) {
      uStack_68 = 0x101955290;
      puVar4 = puVar4 + -0x40;
      pbVar9 = param_1;
      pbStack_50 = param_1;
      unaff_x23 = lStack_48;
      unaff_x24 = param_1;
      goto SUB_1019551a0;
    }
    goto LAB_1019552a4;
  }
  if (bVar2 < 0x11) {
    if (uVar10 - 0xf < 2 || uVar10 == 0xd) {
      return;
    }
    if (uVar10 == 0xe) goto LAB_1019551f4;
    goto LAB_101955274;
  }
  if (uVar10 < 0x13) {
    if (uVar10 != 0x11) {
      if (uVar10 == 0x12) {
        return;
      }
      goto LAB_101955274;
    }
    param_1 = *(byte **)(pbVar9 + 8);
    uStack_68 = 0x101955260;
    puVar4 = puVar4 + -0x40;
    pbVar9 = param_1;
    goto SUB_1019551a0;
  }
  if (uVar10 != 0x13) {
    if (uVar10 != 0x14) goto LAB_101955274;
    param_1 = *(byte **)(pbVar9 + 0x10);
    lVar6 = *(long *)(pbVar9 + 0x18) + 1;
    pbVar8 = param_1;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      func_0x0001019551a0(pbVar8);
      pbVar8 = pbVar8 + 0x20;
    }
LAB_1019552a4:
    if (*(long *)(pbVar9 + 8) == 0) {
      return;
    }
LAB_1019552ac:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1);
    return;
  }
  param_1 = *(byte **)(pbVar9 + 8);
  uStack_68 = 0x101955270;
  puVar4 = puVar4 + -0x40;
  pbVar9 = param_1;
  goto SUB_1019551a0;
}

