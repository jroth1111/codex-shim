
void thunk_FUN_1004db4ac(byte *param_1,byte *param_2,ushort **param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  ushort *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  long unaff_x21;
  byte *pbVar14;
  byte *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  byte *unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar16;
  byte abStack_114 [60];
  ushort *puStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  ushort *puStack_68;
  
  puVar15 = &stack0xfffffffffffffff0;
  bVar7 = *param_2;
  puVar9 = (ushort *)(ulong)bVar7;
  puVar12 = &UNK_108c9a62e;
  pbVar4 = abStack_114 + 0x34;
  pbVar5 = param_1;
  pbVar14 = unaff_x22;
  switch(bVar7) {
  case 0:
  case 0xfc:
    bVar7 = param_2[1];
  case 0x54:
    bStack_bf = bVar7;
    bStack_c0 = 0;
    goto code_r0x0001004db854;
  case 1:
  case 0x46:
    puVar9 = (ushort *)(ulong)param_2[1];
    break;
  case 2:
    puVar9 = (ushort *)(ulong)*(ushort *)(param_2 + 2);
    break;
  case 3:
    puVar9 = (ushort *)(ulong)*(uint *)(param_2 + 4);
  case 0x4a:
    break;
  case 4:
    puVar9 = *(ushort **)(param_2 + 8);
    break;
  case 5:
    puVar9 = (ushort *)(long)(char)param_2[1];
    goto code_r0x0001004db848;
  case 6:
  case 0x42:
    puVar9 = (ushort *)(long)*(short *)(param_2 + 2);
    goto code_r0x0001004db848;
  case 7:
    puVar9 = (ushort *)(long)*(int *)(param_2 + 4);
  case 0x5a:
code_r0x0001004db848:
    bStack_b8 = (byte)puVar9;
    uStack_b7 = (undefined7)((ulong)puVar9 >> 8);
code_r0x0001004db84c:
    bVar7 = 2;
    goto code_r0x0001004db850;
  case 8:
    puVar9 = *(ushort **)(param_2 + 8);
    goto code_r0x0001004db848;
  case 9:
  case 0x58:
    dVar16 = (double)*(float *)(param_2 + 4);
    goto code_r0x0001004db838;
  case 10:
    dVar16 = *(double *)(param_2 + 8);
code_r0x0001004db838:
    bStack_b8 = SUB81(dVar16,0);
    uStack_b7 = (undefined7)((ulong)dVar16 >> 8);
code_r0x0001004db83c:
    bVar7 = 3;
    goto code_r0x0001004db850;
  case 0xb:
    param_2 = (byte *)(ulong)*(uint *)(param_2 + 4);
    puVar15 = unaff_x29;
  case 0xb4:
code_r0x0001004db798:
    pbVar4 = (byte *)register0x00000008;
code_r0x0001004db7ac:
    *(undefined1 **)(pbVar4 + -0x10) = puVar15;
    *(undefined8 *)(pbVar4 + -8) = unaff_x30;
    *(undefined4 *)(pbVar4 + -0x34) = 0;
    uVar6 = (uint)param_2;
    if (uVar6 < 0x80) {
      pbVar4[-0x34] = (byte)param_2;
      uVar11 = 1;
    }
    else {
      bVar7 = (byte)param_2 & 0x3f | 0x80;
      if (uVar6 < 0x800) {
        pbVar4[-0x34] = (byte)(uVar6 >> 6) | 0xc0;
        pbVar4[-0x33] = bVar7;
        uVar11 = 2;
      }
      else {
        bVar3 = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        if (uVar6 < 0x10000) {
          pbVar4[-0x34] = (byte)(uVar6 >> 0xc) | 0xe0;
          pbVar4[-0x33] = bVar3;
          pbVar4[-0x32] = bVar7;
          uVar11 = 3;
        }
        else {
          pbVar4[-0x34] = (byte)(uVar6 >> 0x12) | 0xf0;
          pbVar4[-0x33] = (byte)(uVar6 >> 0xc) & 0x3f | 0x80;
          pbVar4[-0x32] = bVar3;
          pbVar4[-0x31] = bVar7;
          uVar11 = 4;
        }
      }
    }
    *(byte **)(pbVar4 + -0x28) = pbVar4 + -0x34;
    *(undefined8 *)(pbVar4 + -0x20) = uVar11;
    pbVar4[-0x30] = 5;
    FUN_1087e3db0(param_1,pbVar4 + -0x30,pbVar4 + -0x11,&UNK_10b21b150);
    return;
  case 0xc:
  case 0x5e:
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    goto code_r0x0001004db820;
  case 0xd:
  case 0x48:
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar13 = *(undefined8 *)(param_2 + 0x10);
code_r0x0001004db820:
    bStack_b8 = (byte)uVar11;
    uStack_b7 = (undefined7)((ulong)uVar11 >> 8);
    uStack_b0 = (undefined1)uVar13;
    uStack_af = (undefined7)((ulong)uVar13 >> 8);
code_r0x0001004db824:
    bVar7 = 5;
    goto code_r0x0001004db850;
  case 0xe:
  case 0xbe:
    puVar9 = *(ushort **)(param_2 + 0x10);
    puVar12 = *(undefined **)(param_2 + 0x18);
  case 0x94:
code_r0x0001004db7d8:
    bStack_b8 = (byte)puVar9;
    uStack_b7 = (undefined7)((ulong)puVar9 >> 8);
    uStack_b0 = SUB81(puVar12,0);
    uStack_af = (undefined7)((ulong)puVar12 >> 8);
    bVar7 = 6;
    goto code_r0x0001004db850;
  case 0xf:
    puVar9 = *(ushort **)(param_2 + 8);
    puVar12 = *(undefined **)(param_2 + 0x10);
    goto code_r0x0001004db7d8;
  case 0x10:
  case 0x11:
    bVar7 = 8;
  case 0xd2:
    goto code_r0x0001004db850;
  case 0x12:
  case 0xe2:
    bVar7 = 7;
  case 0x8e:
    goto code_r0x0001004db850;
  case 0x13:
    bVar7 = 9;
  case 0xe0:
    goto code_r0x0001004db850;
  case 0x14:
    param_2 = *(byte **)(param_2 + 0x18);
  case 0x9e:
code_r0x0001004db89c:
code_r0x0001004db8ac:
    uStack_90 = 10;
    FUN_1087e3db0(param_1,&uStack_90,&stack0xffffffffffffffc8,&UNK_10b21b150);
    if (*(long *)param_1 == 2) {
      if (param_2 != (byte *)0x0) {
        lVar1 = *(long *)(param_1 + 0x10);
        lVar2 = *(long *)(param_1 + 0x18);
        FUN_1087e427c(&uStack_90,param_2,&stack0xffffffffffffffc8,&UNK_10b23a1b0);
        if (CONCAT71(uStack_8f,uStack_90) != 2) {
          *(ushort **)(param_1 + 0x28) = puStack_68;
          *(long *)(param_1 + 0x20) = lStack_70;
          *(byte **)(param_1 + 0x38) = unaff_x27;
          *(ulong *)(param_1 + 0x30) = unaff_x28;
          *(long *)(param_1 + 0x48) = unaff_x25;
          *(ushort **)(param_1 + 0x40) = unaff_x26;
          *(ulong *)(param_1 + 0x50) = unaff_x24;
          *(long *)(param_1 + 8) = CONCAT71(uStack_87,uStack_88);
          *(long *)param_1 = CONCAT71(uStack_8f,uStack_90);
          *(long *)(param_1 + 0x18) = CONCAT71(uStack_77,uStack_78);
          *(long *)(param_1 + 0x10) = CONCAT71(uStack_7f,uStack_80);
          if (lVar1 == 0) {
            return;
          }
          _free(lVar2);
          return;
        }
      }
      param_1[0] = 2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    return;
  default:
    unaff_x27 = *(byte **)(param_2 + 0x10);
    puVar9 = *(ushort **)(param_2 + 0x18);
  case 0x33:
  case 0x35:
  case 0x3d:
  case 0x67:
  case 0x69:
  case 0x7d:
  case 0xa7:
  case 0xe3:
  case 0xe5:
  case 0xf1:
  case 0xf3:
  case 0xf9:
    unaff_x23 = (long)puVar9 << 6;
code_r0x0001004db4f4:
    unaff_x22 = unaff_x27 + unaff_x23;
code_r0x0001004db4f8:
    if (puVar9 == (ushort *)0x0) {
      unaff_x26 = (ushort *)0x0;
code_r0x0001004db6b0:
      param_2 = &UNK_108cac8dc;
      pbVar5 = &bStack_c0;
code_r0x0001004db6c0:
      thunk_FUN_1087e4020(pbVar5,param_2,3);
      lVar1 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
      unaff_x24 = CONCAT71(uStack_b7,bStack_b8);
      unaff_x20 = CONCAT71(uStack_af,uStack_b0);
      unaff_x25 = CONCAT71(uStack_a7,uStack_a8);
      if (lVar1 == 2) goto code_r0x0001004db6d8;
      *(long *)(param_1 + 0x28) = CONCAT71(uStack_97,uStack_98);
      *(long *)(param_1 + 0x20) = CONCAT71(uStack_9f,uStack_a0);
      *(long *)(param_1 + 0x38) = CONCAT71(uStack_87,uStack_88);
      *(long *)(param_1 + 0x30) = CONCAT71(uStack_8f,uStack_90);
      *(long *)(param_1 + 0x48) = CONCAT71(uStack_77,uStack_78);
      *(long *)(param_1 + 0x40) = CONCAT71(uStack_7f,uStack_80);
      *(long *)(param_1 + 0x50) = lStack_70;
      *(long *)param_1 = lVar1;
      *(ulong *)(param_1 + 8) = unaff_x24;
code_r0x0001004db714:
      *(long *)(param_1 + 0x10) = unaff_x20;
      *(long *)(param_1 + 0x18) = unaff_x25;
      puVar9 = *(ushort **)param_1;
code_r0x0001004db71c:
      goto joined_r0x0001004db918;
    }
code_r0x0001004db4fc:
    unaff_x21 = 0;
code_r0x0001004db500:
    pbStack_d0 = unaff_x22;
    pbStack_c8 = unaff_x22;
code_r0x0001004db504:
    puVar9 = (ushort *)((unaff_x23 - 0x40U >> 6) + 1);
code_r0x0001004db510:
    unaff_x28 = 0x8000000000000000;
    puStack_d8 = puVar9;
code_r0x0001004db518:
    unaff_x26 = (ushort *)0x1;
code_r0x0001004db51c:
    unaff_x24 = 0x8000000000000000;
code_r0x0001004db540:
    do {
      param_2 = unaff_x27 + unaff_x21;
code_r0x0001004db544:
      pbVar14 = param_2;
code_r0x0001004db548:
      unaff_x22 = pbVar14 + 0x20;
      puVar9 = (ushort *)(ulong)*pbVar14;
      uVar6 = (uint)*pbVar14;
      in_OV = SBORROW4(uVar6,0xc);
      in_NG = (int)(uVar6 - 0xc) < 0;
      in_ZR = uVar6 == 0xc;
code_r0x0001004db550:
      if ((bool)in_ZR || in_NG != in_OV) {
code_r0x0001004db554:
        iVar8 = (int)puVar9;
        if (iVar8 == 1) {
          puVar9 = (ushort *)(ulong)unaff_x27[unaff_x21 + 1];
code_r0x0001004db604:
          if ((int)puVar9 == 0) goto code_r0x0001004db63c;
        }
        else {
          if (iVar8 == 4) {
code_r0x0001004db524:
            uVar10 = *(ulong *)(unaff_x27 + unaff_x21 + 8);
          }
          else {
            in_ZR = iVar8 == 0xc;
code_r0x0001004db568:
            if ((bool)in_ZR) {
              puVar9 = (ushort *)(unaff_x27 + unaff_x21);
code_r0x0001004db570:
              puVar12 = *(undefined **)(puVar9 + 0xc);
code_r0x0001004db574:
              in_ZR = puVar12 == (undefined *)0x3;
code_r0x0001004db578:
              if ((bool)in_ZR) {
code_r0x0001004db57c:
                puVar9 = *(ushort **)(puVar9 + 8);
code_r0x0001004db580:
                goto code_r0x0001004db620;
              }
              goto code_r0x0001004db530;
            }
code_r0x0001004db668:
            pbVar5 = &bStack_c0;
            param_3 = &puStack_68;
            param_4 = &UNK_10b214000;
code_r0x0001004db674:
            thunk_FUN_108855bf0(pbVar5,param_2,param_3,param_4 + 0xfc8);
code_r0x0001004db67c:
            puVar12 = (undefined *)CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
            puVar9 = (ushort *)(ulong)bStack_b8;
code_r0x0001004db684:
            if (puVar12 != (undefined *)0x2) {
              *(ulong *)(param_1 + 0x21) = CONCAT17(uStack_98,uStack_9f);
              *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_a0,uStack_a7);
              *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_88,uStack_8f);
              *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_90,uStack_97);
              *(ulong *)(param_1 + 0x41) = CONCAT17(uStack_78,uStack_7f);
              *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_80,uStack_87);
              *(long *)(param_1 + 0x50) = lStack_70;
              *(long *)(param_1 + 0x48) = CONCAT71(uStack_77,uStack_78);
              *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_a8,uStack_af);
              *(ulong *)(param_1 + 9) = CONCAT17(uStack_b0,uStack_b7);
              *(undefined **)param_1 = puVar12;
              param_1[8] = (byte)puVar9;
              if ((unaff_x24 & 0x7fffffffffffffff) != 0) goto code_r0x0001004db900;
              goto code_r0x0001004db86c;
            }
code_r0x0001004db68c:
            uVar10 = (ulong)puVar9 & 1;
          }
          if (uVar10 == 0) {
code_r0x0001004db63c:
            in_ZR = unaff_x24 == unaff_x28;
code_r0x0001004db640:
            if (!(bool)in_ZR) goto code_r0x0001004db8c4;
            func_0x0001004e0914(&bStack_c0,unaff_x22);
            puVar9 = (ushort *)CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
            unaff_x24 = CONCAT71(uStack_b7,bStack_b8);
            unaff_x20 = CONCAT71(uStack_af,uStack_b0);
            unaff_x25 = CONCAT71(uStack_a7,uStack_a8);
            in_ZR = puVar9 == (ushort *)0x2;
code_r0x0001004db660:
            if (!(bool)in_ZR) goto code_r0x0001004db664;
          }
        }
      }
      else {
code_r0x0001004db584:
        in_ZR = (int)puVar9 == 0xd;
code_r0x0001004db588:
        if ((bool)in_ZR) {
          puVar9 = (ushort *)(unaff_x27 + unaff_x21);
code_r0x0001004db610:
          if (*(long *)(puVar9 + 8) == 3) {
code_r0x0001004db61c:
            puVar9 = *(ushort **)(puVar9 + 4);
code_r0x0001004db620:
            puVar12 = (undefined *)(ulong)*puVar9;
            puVar9 = (ushort *)(ulong)(byte)puVar9[1];
code_r0x0001004db628:
            if ((int)puVar12 == 0x7275 && (int)puVar9 == 0x6c) goto code_r0x0001004db63c;
          }
        }
        else if ((int)puVar9 == 0xe) {
          puVar9 = (ushort *)(unaff_x27 + unaff_x21);
          if (*(long *)(puVar9 + 0xc) == 3) {
code_r0x0001004db5d0:
            puVar9 = *(ushort **)(puVar9 + 8);
            puVar12 = (undefined *)(ulong)(byte)*puVar9;
code_r0x0001004db5d8:
            in_ZR = (int)puVar12 == 0x75;
code_r0x0001004db5dc:
            if ((bool)in_ZR) {
code_r0x0001004db5e0:
              puVar12 = (undefined *)(ulong)*(byte *)((long)puVar9 + 1);
code_r0x0001004db5e4:
              in_ZR = (int)puVar12 == 0x72;
code_r0x0001004db5e8:
              if ((bool)in_ZR) {
code_r0x0001004db5ec:
                in_ZR = (byte)puVar9[1] == 0x6c;
code_r0x0001004db5f4:
                if ((bool)in_ZR) goto code_r0x0001004db63c;
              }
            }
          }
        }
        else {
code_r0x0001004db594:
          if ((int)puVar9 != 0xf) goto code_r0x0001004db668;
code_r0x0001004db59c:
          puVar9 = (ushort *)(unaff_x27 + unaff_x21);
          if (*(long *)(puVar9 + 8) == 3) {
code_r0x0001004db5ac:
            puVar9 = *(ushort **)(puVar9 + 4);
            puVar12 = (undefined *)(ulong)(byte)*puVar9;
code_r0x0001004db5b4:
            if ((int)puVar12 == 0x75) goto code_r0x0001004db5e0;
          }
        }
      }
code_r0x0001004db530:
      unaff_x26 = (ushort *)((long)unaff_x26 + 1);
      unaff_x21 = unaff_x21 + 0x40;
    } while (unaff_x23 != unaff_x21);
code_r0x0001004db694:
    in_ZR = unaff_x24 == 0x8000000000000000;
code_r0x0001004db69c:
    unaff_x22 = pbStack_c8;
    unaff_x26 = puStack_d8;
    unaff_x27 = pbStack_d0;
code_r0x0001004db6a4:
    if ((bool)in_ZR) goto code_r0x0001004db6b0;
code_r0x0001004db6d8:
    *(ulong *)(param_1 + 0x10) = unaff_x24;
    *(long *)(param_1 + 0x18) = unaff_x20;
    *(long *)(param_1 + 0x20) = unaff_x25;
    param_1[8] = 1;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0] = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    puVar9 = (ushort *)(unaff_x22 + -(long)unaff_x27);
    if (puVar9 != (ushort *)0x0) {
code_r0x0001004db6f4:
      goto code_r0x0001004db920;
    }
    goto code_r0x0001004db774;
  case 0x16:
  case 0x70:
    goto code_r0x0001004db580;
  case 0x18:
    goto code_r0x0001004db594;
  case 0x1a:
    goto code_r0x0001004db568;
  case 0x1c:
    goto code_r0x0001004db570;
  case 0x1e:
    goto code_r0x0001004db51c;
  case 0x20:
    goto code_r0x0001004db5ac;
  case 0x22:
    goto code_r0x0001004db620;
  case 0x24:
    goto code_r0x0001004db578;
  case 0x26:
code_r0x0001004db664:
    *(long *)(param_1 + 0x28) = CONCAT71(uStack_97,uStack_98);
    *(long *)(param_1 + 0x20) = CONCAT71(uStack_9f,uStack_a0);
    *(long *)(param_1 + 0x38) = CONCAT71(uStack_87,uStack_88);
    *(long *)(param_1 + 0x30) = CONCAT71(uStack_8f,uStack_90);
    *(long *)(param_1 + 0x48) = CONCAT71(uStack_77,uStack_78);
    *(long *)(param_1 + 0x40) = CONCAT71(uStack_7f,uStack_80);
  case 0xa6:
    *(long *)(param_1 + 0x50) = lStack_70;
    *(ushort **)param_1 = puVar9;
    *(ulong *)(param_1 + 8) = unaff_x24;
    unaff_x27 = unaff_x27 + unaff_x21 + 0x40;
    *(long *)(param_1 + 0x10) = unaff_x20;
    *(long *)(param_1 + 0x18) = unaff_x25;
    puVar9 = *(ushort **)param_1;
    unaff_x22 = pbStack_c8;
code_r0x0001004db760:
joined_r0x0001004db918:
    if (puVar9 == (ushort *)0x2) {
      unaff_x24 = *(ulong *)(param_1 + 0x10);
      unaff_x20 = *(long *)(param_1 + 0x18);
      puVar9 = (ushort *)(unaff_x22 + -(long)unaff_x27);
      if (puVar9 != (ushort *)0x0) {
code_r0x0001004db920:
        puStack_68 = unaff_x26;
        thunk_FUN_1087e427c(&bStack_c0,(byte *)((long)unaff_x26 + ((ulong)puVar9 >> 6)),&puStack_68,
                            &UNK_10b23a190);
        if (CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0)) != 2) {
          *(long *)(param_1 + 0x28) = CONCAT71(uStack_97,uStack_98);
          *(long *)(param_1 + 0x20) = CONCAT71(uStack_9f,uStack_a0);
          *(long *)(param_1 + 0x38) = CONCAT71(uStack_87,uStack_88);
          *(long *)(param_1 + 0x30) = CONCAT71(uStack_8f,uStack_90);
          *(long *)(param_1 + 0x48) = CONCAT71(uStack_77,uStack_78);
          *(long *)(param_1 + 0x40) = CONCAT71(uStack_7f,uStack_80);
          *(long *)(param_1 + 0x50) = lStack_70;
          *(long *)(param_1 + 8) = CONCAT71(uStack_b7,bStack_b8);
          *(long *)param_1 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
          *(long *)(param_1 + 0x18) = CONCAT71(uStack_a7,uStack_a8);
          *(long *)(param_1 + 0x10) = CONCAT71(uStack_af,uStack_b0);
          if (unaff_x24 != 0) {
            _free(unaff_x20);
          }
          goto code_r0x0001004db86c;
        }
      }
code_r0x0001004db774:
      param_1[0] = 2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    goto code_r0x0001004db86c;
  case 0x28:
  case 0x9f:
    goto code_r0x0001004db540;
  case 0x2a:
  case 0xc4:
    goto code_r0x0001004db628;
  case 0x2c:
  case 0x71:
  case 0x73:
  case 0xbd:
  case 0xbf:
  case 0xcf:
  case 0xd1:
  case 0xd3:
  case 0xd5:
    goto code_r0x0001004db500;
  case 0x2e:
    goto code_r0x0001004db524;
  case 0x30:
  case 0xd8:
    goto code_r0x0001004db5f4;
  case 0x32:
    goto code_r0x0001004db68c;
  case 0x34:
    goto code_r0x0001004db69c;
  case 0x36:
  case 0x3a:
  case 0x68:
  case 0x7f:
  case 0x81:
    goto code_r0x0001004db4f4;
  case 0x3c:
    goto code_r0x0001004db694;
  case 0x3e:
    goto code_r0x0001004db6a4;
  case 0x40:
    goto code_r0x0001004db5b4;
  case 0x44:
  case 0x7a:
    goto code_r0x0001004db83c;
  case 0x4c:
    goto code_r0x0001004db84c;
  case 0x4e:
    goto code_r0x0001004db864;
  case 0x50:
  case 0xb6:
    goto code_r0x0001004db824;
  case 0x52:
    goto code_r0x0001004db87c;
  case 0x56:
    goto code_r0x0001004db86c;
  case 0x5c:
    goto code_r0x0001004db854;
  case 0x60:
    goto code_r0x0001004db80c;
  case 0x62:
  case 100:
    goto code_r0x0001004db760;
  case 0x6a:
  case 0xca:
code_r0x0001004db8c4:
    param_2 = &UNK_108cac8dc;
  case 0x88:
    pbVar5 = &bStack_c0;
code_r0x0001004db8d0:
    thunk_FUN_1087e4364(pbVar5,param_2,3);
    *(long *)(param_1 + 0x28) = CONCAT71(uStack_97,uStack_98);
    *(long *)(param_1 + 0x20) = CONCAT71(uStack_9f,uStack_a0);
    *(long *)(param_1 + 0x38) = CONCAT71(uStack_87,uStack_88);
    *(long *)(param_1 + 0x30) = CONCAT71(uStack_8f,uStack_90);
    *(long *)(param_1 + 0x48) = CONCAT71(uStack_77,uStack_78);
    *(long *)(param_1 + 0x40) = CONCAT71(uStack_7f,uStack_80);
    *(long *)(param_1 + 0x50) = lStack_70;
    *(long *)(param_1 + 8) = CONCAT71(uStack_b7,bStack_b8);
    *(long *)param_1 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
    *(long *)(param_1 + 0x18) = CONCAT71(uStack_a7,uStack_a8);
    *(long *)(param_1 + 0x10) = CONCAT71(uStack_af,uStack_b0);
    unaff_x22 = pbStack_c8;
    if (unaff_x24 != 0) {
code_r0x0001004db900:
      unaff_x22 = pbStack_c8;
      _free(unaff_x20);
    }
    unaff_x27 = unaff_x27 + unaff_x21 + 0x40;
    puVar9 = *(ushort **)param_1;
    goto joined_r0x0001004db918;
  case 0x72:
  case 0xcc:
    goto code_r0x0001004db574;
  case 0x74:
    goto code_r0x0001004db510;
  case 0x76:
    goto code_r0x0001004db59c;
  case 0x78:
    goto code_r0x0001004db7ac;
  case 0x7c:
    goto code_r0x0001004db57c;
  case 0x7e:
  case 0xa2:
  case 0xaa:
  case 0xae:
    goto code_r0x0001004db5ec;
  case 0x80:
  case 0x82:
    goto code_r0x0001004db6d8;
  case 0x83:
  case 0x85:
  case 0x89:
  case 0xe7:
    goto code_r0x0001004db4f8;
  case 0x84:
    goto code_r0x0001004db85c;
  case 0x86:
  case 0xac:
    goto code_r0x0001004db5dc;
  case 0x87:
  case 0x8b:
  case 0xb3:
  case 0xe9:
  case 0xeb:
  case 0xed:
    goto code_r0x0001004db4fc;
  case 0x8a:
    goto code_r0x0001004db71c;
  case 0x90:
    goto code_r0x0001004db8ac;
  case 0x92:
    goto code_r0x0001004db5d8;
  case 0x95:
  case 0xce:
    goto code_r0x0001004db554;
  case 0x96:
    goto code_r0x0001004db550;
  case 0x98:
    goto code_r0x0001004db584;
  case 0x9a:
    goto code_r0x0001004db5e8;
  case 0x9c:
    goto code_r0x0001004db5e4;
  case 0xa0:
    goto code_r0x0001004db5d0;
  case 0xa1:
  case 0xab:
  case 0xad:
  case 0xf4:
    goto code_r0x0001004db548;
  case 0xa3:
  case 0xa5:
    goto code_r0x0001004db518;
  case 0xa4:
    goto code_r0x0001004db8d0;
  case 0xb0:
  case 0xec:
    goto code_r0x0001004db6c0;
  case 0xb2:
  case 0xc3:
  case 0xc5:
  case 0xd9:
  case 0xdb:
    goto code_r0x0001004db504;
  case 0xb8:
    goto code_r0x0001004db674;
  case 0xba:
    goto code_r0x0001004db67c;
  case 0xbc:
    goto code_r0x0001004db6f4;
  case 0xc2:
  case 0xe8:
    goto code_r0x0001004db61c;
  case 0xc6:
    goto code_r0x0001004db544;
  case 200:
    goto code_r0x0001004db640;
  case 0xd0:
    goto code_r0x0001004db604;
  case 0xd4:
    goto code_r0x0001004db850;
  case 0xda:
    goto code_r0x0001004db5e0;
  case 0xdc:
    goto code_r0x0001004db714;
  case 0xde:
  case 0xe6:
    goto code_r0x0001004db798;
  case 0xe4:
    goto code_r0x0001004db63c;
  case 0xea:
    goto code_r0x0001004db660;
  case 0xf0:
    goto code_r0x0001004db874;
  case 0xf2:
    goto code_r0x0001004db868;
  case 0xf6:
    goto code_r0x0001004db610;
  case 0xf8:
    goto code_r0x0001004db588;
  case 0xfa:
    goto code_r0x0001004db684;
  case 0xfe:
    goto code_r0x0001004db89c;
  }
  bStack_b8 = (byte)puVar9;
  uStack_b7 = (undefined7)((ulong)puVar9 >> 8);
code_r0x0001004db80c:
  bVar7 = 1;
code_r0x0001004db850:
  bStack_c0 = bVar7;
code_r0x0001004db854:
  param_4 = &UNK_10b21b150;
code_r0x0001004db85c:
  param_2 = &bStack_c0;
  param_3 = &puStack_68;
code_r0x0001004db864:
code_r0x0001004db868:
  thunk_FUN_1087e3db0(param_1,param_2,param_3,param_4);
code_r0x0001004db86c:
code_r0x0001004db874:
code_r0x0001004db87c:
  return;
}

