
void __ZN84__LT_toml__ser__value__key__KeySerializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_str17h97c00fd3c87f7941E
               (undefined8 *param_1,undefined8 param_2,byte *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  byte *pbVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  uVar13 = 0;
  bVar15 = false;
  uVar19 = 0;
  bVar16 = false;
  if (param_4 == 0) {
LAB_1061293bc:
    if (((uVar19 != 0) || (bVar16)) || (bVar15)) {
      pbVar10 = (byte *)(ulong)(uVar19 | uVar13);
      lVar11 = 0;
      iVar6 = FUN_10611e800(param_3,param_4,pbVar10,0,param_2);
    }
    else {
      pbVar10 = (byte *)0x1;
      lVar11 = 0;
      iVar6 = FUN_10611e800(param_3,param_4,1,0,param_2);
    }
  }
  else {
    bVar3 = true;
    lVar11 = param_4;
    pbVar10 = param_3;
    uVar13 = 0;
    do {
      bVar14 = *pbVar10;
      uVar20 = (uint)bVar14;
      bVar1 = bVar3;
      if (uVar20 != 0x5f) {
        bVar1 = false;
      }
      bVar2 = bVar3;
      if (uVar20 != 0x2d) {
        bVar2 = bVar1;
      }
      if (9 < uVar20 - 0x30 && 0x19 < (uVar20 & 0xffffffdf) - 0x41) {
        bVar3 = bVar2;
      }
      if (bVar14 < 0x27) {
        if (bVar14 != 9) {
          if (bVar14 == 0x22) {
            bVar15 = true;
          }
          else {
LAB_106129318:
            uVar19 = (bVar14 < 0x20 || bVar14 == 0x7f) | uVar19;
          }
        }
      }
      else if (bVar14 == 0x27) {
        uVar13 = 1;
      }
      else {
        if (bVar14 != 0x5c) goto LAB_106129318;
        bVar16 = true;
      }
      lVar11 = lVar11 + -1;
      pbVar10 = pbVar10 + 1;
    } while (lVar11 != 0);
    if (!bVar3) goto LAB_1061293bc;
    pbVar10 = (byte *)0x4;
    lVar11 = 0;
    iVar6 = FUN_10611e800(param_3,param_4,4,0,param_2);
  }
  if (iVar6 == 0) {
    *param_1 = 0x8000000000000004;
    return;
  }
  puVar7 = (undefined8 *)_malloc(0x26);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0x6572727563636f20;
    *puVar7 = 0x726f727265206e61;
    puVar7[3] = 0x6120676e69746972;
    puVar7[2] = 0x77206e6568772064;
    *(undefined8 *)((long)puVar7 + 0x1e) = 0x65756c6176206120;
    *param_1 = 0x26;
    param_1[1] = puVar7;
    param_1[2] = 0x26;
    return;
  }
  auVar22 = func_0x0001087c9084(1,0x26);
  puVar9 = auVar22._8_8_;
  puVar7 = auVar22._0_8_;
  uVar21 = *puVar9;
  if (uVar21 == 0x8000000000000001) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109beccb5,0xc5,&UNK_10b4cf730);
    goto LAB_106129628;
  }
  uStack_88 = 0;
  uStack_80 = 1;
  uStack_78 = 0;
  bVar12 = 0;
  bVar15 = false;
  bVar14 = 0;
  bVar16 = false;
  if (lVar11 == 0) {
LAB_106129544:
    if (((bVar14 != 0) || (bVar16)) || (bVar15)) {
      bVar14 = bVar14 | bVar12;
    }
    else {
      bVar14 = 1;
    }
  }
  else {
    bVar3 = true;
    lVar17 = lVar11;
    pbVar18 = pbVar10;
    bVar12 = 0;
    do {
      bVar4 = *pbVar18;
      uVar19 = (uint)bVar4;
      bVar1 = bVar3;
      if (uVar19 != 0x5f) {
        bVar1 = false;
      }
      bVar2 = bVar3;
      if (uVar19 != 0x2d) {
        bVar2 = bVar1;
      }
      if (9 < uVar19 - 0x30 && 0x19 < (uVar19 & 0xffffffdf) - 0x41) {
        bVar3 = bVar2;
      }
      if (bVar4 < 0x27) {
        if (bVar4 != 9) {
          if (bVar4 == 0x22) {
            bVar15 = true;
          }
          else {
LAB_1061294b4:
            bVar14 = (bVar4 < 0x20 || bVar4 == 0x7f) | bVar14;
          }
        }
      }
      else if (bVar4 == 0x27) {
        bVar12 = 1;
      }
      else {
        if (bVar4 != 0x5c) goto LAB_1061294b4;
        bVar16 = true;
      }
      lVar17 = lVar17 + -1;
      pbVar18 = pbVar18 + 1;
    } while (lVar17 != 0);
    if (!bVar3) goto LAB_106129544;
    bVar14 = 4;
  }
  iVar6 = FUN_10611e800(pbVar10,lVar11,bVar14,0,&uStack_88);
  if (iVar6 == 0) {
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    if ((uVar21 & 0x7fffffffffffffff) != 0) {
      _free(puVar9[1]);
    }
    puVar9[1] = uStack_68;
    *puVar9 = uStack_70;
    puVar9[2] = uStack_60;
    *puVar7 = 0x8000000000000004;
  }
  else {
    puVar8 = (undefined8 *)_malloc(0x26);
    if (puVar8 == (undefined8 *)0x0) {
LAB_106129628:
      func_0x0001087c9084(1,0x26);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x106129638);
      (*pcVar5)();
    }
    puVar8[1] = 0x6572727563636f20;
    *puVar8 = 0x726f727265206e61;
    puVar8[3] = 0x6120676e69746972;
    puVar8[2] = 0x77206e6568772064;
    *(undefined8 *)((long)puVar8 + 0x1e) = 0x65756c6176206120;
    *puVar7 = 0x26;
    puVar7[1] = puVar8;
    puVar7[2] = 0x26;
    if (uStack_88 != 0) {
      _free(uStack_80);
    }
  }
  return;
}

