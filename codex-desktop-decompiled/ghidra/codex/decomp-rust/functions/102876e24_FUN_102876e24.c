
/* WARNING: Possible PIC construction at 0x000102877604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102877608) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_102876e24(long *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar2 = *param_2;
  uStack_6c = (int)uVar2 >> 0xd;
  if (uStack_6c >> 4 < 0x271) {
    uVar17 = (uVar2 >> 0xf & 0x3fff) / 0x19;
    bVar4 = (byte)(uVar17 / 10) & 0x1f;
    lVar15 = param_1[2];
    lVar10 = *param_1;
    lVar14 = lVar15;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar10 = *param_1;
      lVar14 = param_1[2];
    }
    lVar13 = param_1[1];
    *(byte *)(lVar13 + lVar14) = bVar4 | 0x30;
    lVar14 = lVar15 + 1;
    param_1[2] = lVar14;
    if (lVar10 == lVar14) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      lVar13 = param_1[1];
      lVar14 = param_1[2];
    }
    *(byte *)(lVar13 + lVar14) = (char)uVar17 + bVar4 * -10 | 0x30;
    lVar14 = lVar15 + 2;
    param_1[2] = lVar14;
    uVar17 = (int)uStack_6c % 100;
    if ((int)uVar17 < 0) {
      return 1;
    }
    bVar4 = (byte)((uVar17 & 0xff) / 10);
    lVar10 = *param_1;
    if (lVar10 == lVar14) {
      func_0x0001088f89d0(param_1,lVar14,1,1,1);
      lVar14 = param_1[2];
      lVar10 = *param_1;
    }
    lVar13 = param_1[1];
    *(byte *)(lVar13 + lVar14) = bVar4 | 0x30;
    lVar14 = lVar15 + 3;
    param_1[2] = lVar14;
    if (lVar10 == lVar14) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      lVar13 = param_1[1];
      lVar14 = param_1[2];
    }
    *(byte *)(lVar13 + lVar14) = (char)uVar17 + bVar4 * -10 | 0x30;
    lVar15 = lVar15 + 4;
    param_1[2] = lVar15;
    lVar14 = lVar15;
    if (*param_1 == lVar15) {
LAB_1028772b0:
      func_0x0001088f89d0(param_1,lVar14,1,1,1);
      lVar15 = param_1[2];
    }
  }
  else {
    uStack_60 = &uStack_6c;
    puStack_58 = &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hc1020c4dffdb8fa5E
    ;
    uVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                      (param_1,&UNK_10b28e668,&UNK_108c94720,&uStack_60);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    lVar15 = param_1[2];
    lVar14 = lVar15;
    if (*param_1 == lVar15) goto LAB_1028772b0;
  }
  *(undefined1 *)(param_1[1] + lVar15) = 0x2d;
  lVar15 = lVar14 + 1;
  param_1[2] = lVar15;
  uVar7 = (ulong)(uVar2 >> 3) & 0x3ff;
  if ((uint)uVar7 < 0x2dd) {
    bVar4 = (&UNK_108d42eb4)[uVar7];
    uVar17 = (uint)uVar7 + (uint)bVar4;
    uVar11 = 0x30;
    if (0x27f < uVar17) {
      uVar11 = 0x31;
    }
    lVar10 = *param_1;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar15 = param_1[2];
      lVar10 = *param_1;
    }
    bVar3 = (byte)(uVar17 >> 6);
    lVar13 = param_1[1];
    *(undefined1 *)(lVar13 + lVar15) = uVar11;
    lVar15 = lVar14 + 2;
    param_1[2] = lVar15;
    if (0x27f < uVar17) {
      bVar3 = bVar3 - 10;
    }
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      *(byte *)(param_1[1] + param_1[2]) = bVar3 | 0x30;
      lVar15 = lVar14 + 3;
      param_1[2] = lVar15;
      if (*param_1 == lVar15) goto LAB_1028773b0;
    }
    else {
      *(byte *)(lVar13 + lVar15) = bVar3 | 0x30;
      lVar15 = lVar14 + 3;
      param_1[2] = lVar15;
      if (*param_1 == lVar15) {
LAB_1028773b0:
        func_0x0001088f89d0(param_1,lVar14 + 3,1,1,1);
        lVar15 = param_1[2];
      }
    }
    *(undefined1 *)(param_1[1] + lVar15) = 0x2d;
    lVar15 = lVar14 + 4;
    param_1[2] = lVar15;
    uVar2 = (uint)bVar4 + (uVar2 >> 3) >> 1 & 0x1f;
    lVar10 = *param_1;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar15 = param_1[2];
      lVar10 = *param_1;
    }
    lVar13 = param_1[1];
    *(byte *)(lVar13 + lVar15) = (byte)(uVar2 / 10) | 0x30;
    lVar15 = lVar14 + 5;
    param_1[2] = lVar15;
    bVar4 = (byte)(uVar2 % 10) | 0x30;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      *(byte *)(param_1[1] + param_1[2]) = bVar4;
      lVar15 = lVar14 + 6;
      param_1[2] = lVar15;
      if (*param_1 == lVar15) goto LAB_102877420;
    }
    else {
      *(byte *)(lVar13 + lVar15) = bVar4;
      lVar15 = lVar14 + 6;
      param_1[2] = lVar15;
      if (*param_1 == lVar15) {
LAB_102877420:
        func_0x0001088f89d0(param_1,lVar14 + 6,1,1,1);
        lVar15 = param_1[2];
      }
    }
    *(undefined1 *)(param_1[1] + lVar15) = 0x54;
    lVar15 = lVar14 + 7;
    param_1[2] = lVar15;
    uVar17 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = uVar17 % 0x3c;
    if (999999999 < uVar1) {
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0xc4653600;
    }
    if (99 < (uVar17 / 0xe10 & 0xff)) {
      return 1;
    }
    bVar4 = (byte)((uVar17 / 0xe10 & 0xff) / 10);
    lVar10 = *param_1;
    uStack_68 = uVar1;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar15 = param_1[2];
      lVar10 = *param_1;
    }
    lVar13 = param_1[1];
    *(byte *)(lVar13 + lVar15) = bVar4 | 0x30;
    lVar15 = lVar14 + 8;
    param_1[2] = lVar15;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      lVar13 = param_1[1];
      lVar15 = param_1[2];
    }
    iVar12 = uVar17 / 0x3c + (uVar17 / 0xe10) * -0x3c;
    *(byte *)(lVar13 + lVar15) = (char)(uVar17 / 0xe10) + bVar4 * -10 | 0x30;
    lVar15 = lVar14 + 9;
    param_1[2] = lVar15;
    if (*param_1 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar15 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + lVar15) = 0x3a;
    lVar15 = lVar14 + 10;
    param_1[2] = lVar15;
    bVar4 = (byte)((uint)(iVar12 * 0xcd) >> 0xb) & 0x1f;
    lVar10 = *param_1;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar15 = param_1[2];
      lVar10 = *param_1;
    }
    lVar13 = param_1[1];
    *(byte *)(lVar13 + lVar15) = bVar4 | 0x30;
    lVar15 = lVar14 + 0xb;
    param_1[2] = lVar15;
    bVar4 = (char)iVar12 + bVar4 * -10 | 0x30;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      *(byte *)(param_1[1] + param_1[2]) = bVar4;
      lVar15 = lVar14 + 0xc;
      param_1[2] = lVar15;
      if (*param_1 == lVar15) goto LAB_102877584;
    }
    else {
      *(byte *)(lVar13 + lVar15) = bVar4;
      lVar15 = lVar14 + 0xc;
      param_1[2] = lVar15;
      if (*param_1 == lVar15) {
LAB_102877584:
        func_0x0001088f89d0(param_1,lVar14 + 0xc,1,1,1);
        lVar15 = param_1[2];
      }
    }
    *(undefined1 *)(param_1[1] + lVar15) = 0x3a;
    lVar15 = lVar14 + 0xd;
    param_1[2] = lVar15;
    lVar10 = *param_1;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar15 = param_1[2];
      lVar10 = *param_1;
    }
    lVar13 = param_1[1];
    *(byte *)(lVar13 + lVar15) = (byte)(uVar2 / 10) | 0x30;
    lVar15 = lVar14 + 0xe;
    param_1[2] = lVar15;
    bVar4 = (byte)(uVar2 % 10) | 0x30;
    if (lVar10 == lVar15) {
      func_0x0001088f89d0(param_1,lVar10,1,1,1);
      *(byte *)(param_1[1] + param_1[2]) = bVar4;
      param_1[2] = lVar14 + 0xf;
      uVar2 = uStack_64;
    }
    else {
      *(byte *)(lVar13 + lVar15) = bVar4;
      param_1[2] = lVar14 + 0xf;
      uVar2 = uStack_64;
    }
    uStack_60._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
    uStack_64 = uVar2;
    if (uVar1 != 0) {
      uStack_64 = uVar1 / 1000000;
      if (uVar1 == uStack_64 * 1000000) {
        uStack_60 = &uStack_64;
        puStack_58 = &
                     __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        uVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                          (param_1,&UNK_10b28e668,&UNK_108d431b5,&uStack_60);
      }
      else {
        uStack_64 = uVar1 / 1000;
        if (uVar1 % 1000 == 0) {
          uStack_60 = &uStack_64;
          puStack_58 = &
                       __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          uVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                            (param_1,&UNK_10b28e668,&UNK_108d431bf,&uStack_60);
        }
        else {
          uStack_60 = &uStack_68;
          puStack_58 = &
                       __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          uStack_64 = uVar2;
          uVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                            (param_1,&UNK_10b28e668,&UNK_108d431c9,&uStack_60);
        }
      }
      uStack_60._4_4_ = (undefined4)((ulong)uStack_60 >> 0x20);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
    }
    uStack_60 = (uint *)CONCAT44(uStack_60._4_4_,0x1010100);
    pbVar8 = (byte *)&uStack_60;
  }
  else {
    param_3 = 0xb28f8d8;
    auVar19 = func_0x000108a07bdc(uVar7,0x2dd);
    param_1 = auVar19._8_8_;
    pbVar8 = auVar19._0_8_;
  }
  if ((param_3 == 0) && ((*pbVar8 & 1) != 0)) {
    lVar15 = param_1[2];
    lVar14 = lVar15;
    if (*param_1 == lVar15) {
      func_0x0001088f89d0(param_1,lVar15,1,1,1);
      lVar14 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + lVar14) = 0x5a;
    lVar15 = lVar15 + 1;
LAB_102877670:
    uVar9 = 0;
    param_1[2] = lVar15;
  }
  else {
    uVar11 = 0x2d;
    if (-1 < param_3) {
      uVar11 = 0x2b;
    }
    iVar12 = -param_3;
    if (-1 < param_3) {
      iVar12 = param_3;
    }
    bVar4 = pbVar8[3];
    uVar7 = (ulong)bVar4;
    uVar17 = (uint)bVar4;
    uVar2 = 1 << (ulong)(uVar17 & 0x1f);
    if ((uVar2 & 0x34) == 0) {
      if ((uVar2 & 10) == 0) {
        bVar5 = false;
        uVar16 = uVar7;
        uVar18 = uVar7;
      }
      else {
        bVar5 = false;
        uVar7 = 0;
        iVar12 = iVar12 + 0x1e;
        uVar2 = (iVar12 / 0x3c) % 0x3c;
        bVar6 = uVar2 != 0;
        if (uVar17 == 3 && !bVar6) {
          uVar2 = 0;
        }
        uVar16 = (ulong)uVar2;
        uVar18 = (ulong)(uVar17 != 3 || bVar6);
      }
    }
    else {
      uVar7 = (ulong)(uint)(iVar12 % 0x3c);
      uVar2 = (iVar12 / 0x3c) % 0x3c;
      if (iVar12 % 0x3c == 0 && bVar4 != 2) {
        bVar5 = false;
        uVar7 = 0;
        bVar6 = uVar2 != 0;
        if (!bVar6 && bVar4 == 5) {
          uVar2 = 0;
        }
        uVar16 = (ulong)uVar2;
        uVar18 = (ulong)(bVar6 || bVar4 != 5);
      }
      else {
        bVar5 = true;
        uVar16 = (ulong)uVar2;
        uVar18 = 2;
      }
    }
    uVar2 = iVar12 / 0xe10;
    bVar4 = pbVar8[1];
    if ((uVar2 & 0xff) < 10) {
      bVar3 = pbVar8[2];
      if (bVar3 == 2) {
        lVar14 = param_1[2];
        lVar15 = lVar14;
        if (*param_1 == lVar14) {
          func_0x0001088f89d0(param_1,lVar14,1,1,1);
          lVar15 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + lVar15) = 0x20;
        lVar14 = lVar14 + 1;
        param_1[2] = lVar14;
      }
      else {
        lVar14 = param_1[2];
      }
      lVar10 = *param_1;
      if (lVar10 == lVar14) {
        func_0x0001088f89d0(param_1,lVar14,1,1,1);
        lVar13 = param_1[1];
        lVar10 = *param_1;
        *(undefined1 *)(lVar13 + param_1[2]) = uVar11;
        param_1[2] = lVar14 + 1;
        if (bVar3 == 1) goto LAB_102877928;
LAB_102877a00:
        lVar14 = lVar14 + 1;
        lVar15 = lVar14;
        if (lVar10 == lVar14) {
LAB_10287794c:
          func_0x0001088f89d0(param_1,lVar10,1,1,1);
          lVar13 = param_1[1];
          lVar14 = param_1[2];
        }
      }
      else {
        lVar13 = param_1[1];
        *(undefined1 *)(lVar13 + lVar14) = uVar11;
        param_1[2] = lVar14 + 1;
        if (bVar3 != 1) goto LAB_102877a00;
LAB_102877928:
        lVar15 = lVar14 + 1;
        if (lVar10 == lVar15) {
          func_0x0001088f89d0(param_1,lVar10,1,1,1);
          lVar15 = param_1[2];
          lVar10 = *param_1;
          lVar13 = param_1[1];
        }
        *(undefined1 *)(lVar13 + lVar15) = 0x30;
        lVar14 = lVar14 + 2;
        param_1[2] = lVar14;
        lVar15 = lVar14;
        if (lVar10 == lVar14) goto LAB_10287794c;
      }
      *(byte *)(lVar13 + lVar14) = (byte)uVar2 | 0x30;
      lVar15 = lVar15 + 1;
      param_1[2] = lVar15;
joined_r0x000102877b6c:
      if (uVar18 - 1 < 2) {
        if (bVar4 == 1) {
          lVar14 = lVar15;
          if (*param_1 == lVar15) {
            func_0x0001088f89d0(param_1,lVar15,1,1,1);
            lVar14 = param_1[2];
          }
          *(undefined1 *)(param_1[1] + lVar14) = 0x3a;
          lVar15 = lVar15 + 1;
          param_1[2] = lVar15;
        }
        uVar2 = (uint)uVar16 & 0xff;
        if (99 < uVar2) goto LAB_102877a60;
        bVar3 = (byte)(uVar2 / 10);
        lVar10 = *param_1;
        lVar14 = lVar15;
        if (lVar10 == lVar15) {
          func_0x0001088f89d0(param_1,lVar15,1,1,1);
          lVar14 = param_1[2];
          lVar10 = *param_1;
        }
        lVar13 = param_1[1];
        *(byte *)(lVar13 + lVar14) = bVar3 | 0x30;
        lVar14 = lVar15 + 1;
        param_1[2] = lVar14;
        bVar3 = (char)uVar16 + bVar3 * -10 | 0x30;
        if (lVar10 == lVar14) {
          func_0x0001088f89d0(param_1,lVar10,1,1,1);
          *(byte *)(param_1[1] + param_1[2]) = bVar3;
          lVar15 = lVar15 + 2;
          param_1[2] = lVar15;
        }
        else {
          *(byte *)(lVar13 + lVar14) = bVar3;
          lVar15 = lVar15 + 2;
          param_1[2] = lVar15;
        }
      }
      if (!bVar5) {
        return 0;
      }
      if (bVar4 == 1) {
        lVar14 = lVar15;
        if (*param_1 == lVar15) {
          func_0x0001088f89d0(param_1,lVar15,1,1,1);
          lVar14 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + lVar14) = 0x3a;
        lVar15 = lVar15 + 1;
        param_1[2] = lVar15;
      }
      uVar2 = (uint)uVar7 & 0xff;
      if (uVar2 < 100) {
        bVar4 = (byte)(uVar2 / 10);
        lVar10 = *param_1;
        lVar14 = lVar15;
        if (lVar10 == lVar15) {
          func_0x0001088f89d0(param_1,lVar15,1,1,1);
          lVar14 = param_1[2];
          lVar10 = *param_1;
        }
        lVar13 = param_1[1];
        *(byte *)(lVar13 + lVar14) = bVar4 | 0x30;
        lVar14 = lVar15 + 1;
        param_1[2] = lVar14;
        if (lVar10 == lVar14) {
          func_0x0001088f89d0(param_1,lVar10,1,1,1);
          lVar13 = param_1[1];
          lVar14 = param_1[2];
        }
        *(byte *)(lVar13 + lVar14) = (char)uVar7 + bVar4 * -10 | 0x30;
        lVar15 = lVar15 + 2;
        goto LAB_102877670;
      }
    }
    else {
      lVar15 = param_1[2];
      lVar14 = lVar15;
      if (*param_1 == lVar15) {
        func_0x0001088f89d0(param_1,lVar15,1,1,1);
        lVar14 = param_1[2];
      }
      lVar10 = param_1[1];
      *(undefined1 *)(lVar10 + lVar14) = uVar11;
      lVar14 = lVar15 + 1;
      param_1[2] = lVar14;
      if ((uVar2 & 0xff) < 100) {
        bVar3 = (byte)((uVar2 & 0xff) / 10);
        lVar13 = *param_1;
        if (lVar13 == lVar14) {
          func_0x0001088f89d0(param_1,lVar14,1,1,1);
          lVar10 = param_1[1];
          lVar14 = param_1[2];
          lVar13 = *param_1;
        }
        *(byte *)(lVar10 + lVar14) = bVar3 | 0x30;
        lVar14 = lVar15 + 2;
        param_1[2] = lVar14;
        bVar3 = (byte)uVar2 + bVar3 * -10 | 0x30;
        if (lVar13 == lVar14) {
          func_0x0001088f89d0(param_1,lVar13,1,1,1);
          *(byte *)(param_1[1] + param_1[2]) = bVar3;
          lVar15 = lVar15 + 3;
          param_1[2] = lVar15;
        }
        else {
          *(byte *)(lVar10 + lVar14) = bVar3;
          lVar15 = lVar15 + 3;
          param_1[2] = lVar15;
        }
        goto joined_r0x000102877b6c;
      }
    }
LAB_102877a60:
    uVar9 = 1;
  }
  return uVar9;
}

