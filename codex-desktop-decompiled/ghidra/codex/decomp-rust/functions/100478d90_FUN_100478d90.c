
/* WARNING: Type propagation algorithm not settling */

void FUN_100478d90(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  byte *param_4,undefined *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int *piVar3;
  ulong *******pppppppuVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar19;
  ulong ******ppppppuVar20;
  ulong ******ppppppuVar21;
  uint uVar22;
  byte bVar23;
  ulong *******pppppppuVar24;
  ulong *******pppppppuVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  long lVar31;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar32;
  ulong *******unaff_x25;
  long unaff_x26;
  ulong *******unaff_x27;
  undefined1 *unaff_x29;
  undefined1 *puVar33;
  undefined8 unaff_x30;
  ulong *******pppppppuVar34;
  ulong ******ppppppuVar35;
  byte abStack_3c0 [88];
  ulong *******pppppppuStack_368;
  ulong *******pppppppuStack_360;
  ulong *******pppppppuStack_358;
  undefined8 *puStack_350;
  ulong *******pppppppuStack_348;
  ulong *******pppppppuStack_340;
  ulong *******pppppppuStack_338;
  ulong ******ppppppuStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  ulong ******ppppppuStack_318;
  ulong *******pppppppuStack_310;
  ulong *******pppppppuStack_308;
  undefined8 uStack_300;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2f0;
  ulong ******ppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong ******ppppppuStack_2c8;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  ulong *******pppppppuStack_110;
  ulong *******pppppppuStack_108;
  ulong *******pppppppuStack_100;
  ulong *******pppppppuStack_f0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  ulong ******ppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong ******ppppppuStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  byte *pbVar18;
  
  pppppppuVar34 = param_1._0_8_;
  puVar33 = &stack0xfffffffffffffff0;
  pbVar12 = abStack_3c0 + 0x50;
  pbVar17 = abStack_3c0 + 0x50;
  pppppppuVar32 = (ulong *******)&uStack_d8;
  bVar23 = *param_4;
  pppppppuVar24 = (ulong *******)(ulong)bVar23;
  pppppppuVar29 = (ulong *******)&UNK_108c9981e;
  pppppppuVar30 =
       (ulong *******)
       (&UNK_100478dd4 + (ulong)*(ushort *)(&UNK_108c9981e + (long)pppppppuVar24 * 2) * 4);
  pbVar13 = abStack_3c0 + 0x50;
  pbVar14 = abStack_3c0 + 0x50;
  pbVar15 = abStack_3c0 + 0x50;
  pbVar16 = abStack_3c0 + 0x50;
  pbVar18 = abStack_3c0 + 0x50;
  pbVar10 = abStack_3c0 + 0x50;
  pbVar11 = abStack_3c0 + 0x50;
  pbVar6 = abStack_3c0 + 0x50;
  pbVar7 = abStack_3c0 + 0x50;
  pbVar8 = abStack_3c0 + 0x50;
  pbVar9 = abStack_3c0 + 0x50;
  pppppppuVar19 = param_3;
  pppppppuVar25 = pppppppuVar24;
  ppppppuVar21 = param_1._8_8_;
  ppppppuVar20 = param_2._0_8_;
  ppppppuVar35 = param_2._8_8_;
  pppppppuVar4 = pppppppuStack_308;
  bVar2 = (byte)uStack_d8;
  switch(bVar23) {
  case 0:
    bVar23 = param_4[1];
  case 0x78:
  case 0x8e:
    ppppppuStack_2e0 = (ulong ******)((ulong)CONCAT61(ppppppuStack_2e0._2_6_,bVar23) << 8);
    goto code_r0x00010047973c;
  case 1:
    pppppppuVar24 = (ulong *******)(ulong)param_4[1];
  case 0x76:
  case 0x8c:
code_r0x0001004796f0:
    bVar23 = 1;
    pppppppuStack_2d8 = pppppppuVar24;
    break;
  case 2:
  case 0x32:
    pppppppuVar24 = (ulong *******)(ulong)*(ushort *)(param_4 + 2);
    goto code_r0x0001004796f0;
  case 3:
  case 0x34:
    pppppppuVar24 = (ulong *******)(ulong)*(uint *)(param_4 + 4);
    goto code_r0x0001004796f0;
  case 4:
  case 0x70:
  case 0x86:
    pppppppuVar24 = *(ulong ********)(param_4 + 8);
  case 0x2c:
    goto code_r0x0001004796f0;
  case 5:
    pppppppuVar24 = (ulong *******)(long)(char)param_4[1];
    goto code_r0x000100479730;
  case 6:
    pppppppuVar24 = (ulong *******)(long)*(short *)(param_4 + 2);
    goto code_r0x000100479730;
  case 7:
    pppppppuVar24 = (ulong *******)(long)*(int *)(param_4 + 4);
  case 0x74:
  case 0x8a:
code_r0x000100479730:
    bVar23 = 2;
    pppppppuStack_2d8 = pppppppuVar24;
    break;
  case 8:
    pppppppuVar24 = *(ulong ********)(param_4 + 8);
    goto code_r0x000100479730;
  case 9:
    pppppppuVar34 = (ulong *******)(double)*(float *)(param_4 + 4);
  case 0x6f:
  case 0x85:
code_r0x000100479720:
    bVar23 = 3;
    pppppppuStack_2d8 = pppppppuVar34;
    break;
  case 10:
  case 0x3e:
    pppppppuVar34 = *(ulong ********)(param_4 + 8);
    goto code_r0x000100479720;
  case 0xb:
    param_4 = (byte *)(ulong)*(uint *)(param_4 + 4);
  case 0x2e:
    pbVar10 = &stack0xffffffffffffffa0;
code_r0x00010047965c:
    puVar33 = *(undefined1 **)(pbVar10 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar10 + 0x58);
    unaff_x20 = *(ulong ********)(pbVar10 + 0x40);
    unaff_x19 = *(ulong ********)(pbVar10 + 0x48);
    pbVar11 = pbVar10;
code_r0x00010047966c:
    pbVar12 = pbVar11 + 0x60;
code_r0x000100479674:
    *(ulong ********)(pbVar12 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar12 + -0x10) = puVar33;
    *(undefined8 *)(pbVar12 + -8) = unaff_x30;
    *(undefined4 *)(pbVar12 + -0x44) = 0;
    uVar22 = (uint)param_4;
    if (uVar22 < 0x80) {
      pbVar12[-0x44] = (byte)param_4;
      uVar26 = 1;
    }
    else {
      bVar2 = (byte)param_4 & 0x3f | 0x80;
      if (uVar22 < 0x800) {
        pbVar12[-0x44] = (byte)(uVar22 >> 6) | 0xc0;
        pbVar12[-0x43] = bVar2;
        uVar26 = 2;
      }
      else {
        bVar23 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
        if (uVar22 < 0x10000) {
          pbVar12[-0x44] = (byte)(uVar22 >> 0xc) | 0xe0;
          pbVar12[-0x43] = bVar23;
          pbVar12[-0x42] = bVar2;
          uVar26 = 3;
        }
        else {
          pbVar12[-0x44] = (byte)(uVar22 >> 0x12) | 0xf0;
          pbVar12[-0x43] = (byte)(uVar22 >> 0xc) & 0x3f | 0x80;
          pbVar12[-0x42] = bVar23;
          pbVar12[-0x41] = bVar2;
          uVar26 = 4;
        }
      }
    }
    *(byte **)(pbVar12 + -0x38) = pbVar12 + -0x44;
    *(undefined8 *)(pbVar12 + -0x30) = uVar26;
    pbVar12[-0x40] = 5;
    ppppppuVar21 = (ulong ******)func_0x000108a4a50c(pbVar12 + -0x40,pbVar12 + -0x21,&UNK_10b219b90)
    ;
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar21;
    return;
  case 0xc:
  case 0x7d:
  case 0x93:
    param_4 = param_4 + 8;
  case 0x28:
  case 0x54:
    pbVar13 = &stack0xffffffffffffffa0;
code_r0x00010047968c:
    puVar33 = *(undefined1 **)(pbVar13 + 0x50);
    unaff_x30 = *(undefined8 *)(pbVar13 + 0x58);
    pbVar14 = pbVar13;
code_r0x000100479690:
    unaff_x20 = *(ulong ********)(pbVar14 + 0x40);
    unaff_x19 = *(ulong ********)(pbVar14 + 0x48);
    unaff_x22 = *(ulong ********)(pbVar14 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar14 + 0x38);
    pbVar15 = pbVar14;
code_r0x000100479698:
    pbVar16 = pbVar15;
code_r0x00010047969c:
    pbVar18 = pbVar16;
code_r0x0001004796a0:
    pbVar17 = pbVar18 + 0x60;
code_r0x0001004796a4:
    *(ulong ********)(pbVar17 + -0x30) = unaff_x22;
    *(ulong ********)(pbVar17 + -0x28) = unaff_x21;
    *(ulong ********)(pbVar17 + -0x20) = unaff_x20;
    *(ulong ********)(pbVar17 + -0x18) = unaff_x19;
    *(undefined1 **)(pbVar17 + -0x10) = puVar33;
    *(undefined8 *)(pbVar17 + -8) = unaff_x30;
    uVar26 = *(undefined8 *)(param_4 + 8);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(pbVar17 + -0x48) = uVar26;
    *(undefined8 *)(pbVar17 + -0x40) = uVar1;
    pbVar17[-0x50] = 5;
    ppppppuVar21 = (ulong ******)func_0x000108a4a50c(pbVar17 + -0x50,pbVar17 + -0x31,&UNK_10b219b90)
    ;
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar21;
    if (*(long *)param_4 != 0) {
      _free(uVar26);
    }
    return;
  case 0xd:
    pppppppuStack_2d8 = *(ulong ********)(param_4 + 8);
    pppppppuStack_2d0 = *(ulong ********)(param_4 + 0x10);
    bVar23 = 5;
    break;
  case 0xe:
  case 0x20:
  case 0x4c:
    param_4 = param_4 + 8;
  case 0x6a:
  case 0xe2:
    pbVar6 = &stack0xffffffffffffffa0;
    puVar33 = unaff_x29;
code_r0x000100479638:
    unaff_x20 = *(ulong ********)(pbVar6 + 0x40);
    unaff_x19 = *(ulong ********)(pbVar6 + 0x48);
    pbVar7 = pbVar6;
code_r0x00010047963c:
    unaff_x22 = *(ulong ********)(pbVar7 + 0x30);
    unaff_x21 = *(ulong ********)(pbVar7 + 0x38);
    pbVar8 = pbVar7;
code_r0x000100479644:
    pbVar9 = pbVar8;
code_r0x000100479648:
    *(ulong ********)(pbVar9 + 0x30) = unaff_x22;
    *(ulong ********)(pbVar9 + 0x38) = unaff_x21;
    *(ulong ********)(pbVar9 + 0x40) = unaff_x20;
    *(ulong ********)(pbVar9 + 0x48) = unaff_x19;
    *(undefined1 **)(pbVar9 + 0x50) = puVar33;
    *(undefined8 *)(pbVar9 + 0x58) = unaff_x30;
    uVar26 = *(undefined8 *)(param_4 + 8);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(pbVar9 + 0x18) = uVar26;
    *(undefined8 *)(pbVar9 + 0x20) = uVar1;
    pbVar9[0x10] = 6;
    ppppppuVar21 = (ulong ******)func_0x000108a4a50c(pbVar9 + 0x10,pbVar9 + 0x2f,&UNK_10b219b90);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar21;
    if (*(long *)param_4 != 0) {
      _free(uVar26);
    }
    return;
  case 0xf:
  case 0x36:
    pppppppuVar24 = *(ulong ********)(param_4 + 8);
    pppppppuVar29 = *(ulong ********)(param_4 + 0x10);
  case 0x73:
  case 0x89:
    bVar23 = 6;
    pppppppuStack_2d8 = pppppppuVar24;
    pppppppuStack_2d0 = pppppppuVar29;
code_r0x0001004796c8:
    break;
  case 0x10:
  case 0x1c:
  case 0x38:
  case 0x48:
  case 0xe9:
    bVar23 = 8;
    break;
  default:
    pppppppuVar19 = *(ulong ********)(param_4 + 8);
    pppppppuStack_2d8 = (ulong *******)pppppppuVar19[1];
    ppppppuStack_2e0 = *pppppppuVar19;
    ppppppuStack_2c8 = pppppppuVar19[3];
    pppppppuStack_2d0 = (ulong *******)pppppppuVar19[2];
    func_0x000107c04828(param_3,&ppppppuStack_2e0);
  case 0x40:
  case 0x98:
code_r0x000100479264:
code_r0x000100479268:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar19);
    return;
  case 0x12:
    bVar23 = 7;
    break;
  case 0x13:
  case 0x81:
    unaff_x20 = *(ulong ********)(param_4 + 8);
  case 0x2a:
  case 0x56:
    pppppppuStack_2d8 = (ulong *******)unaff_x20[1];
    ppppppuStack_2e0 = *unaff_x20;
code_r0x00010047923c:
    pppppppuVar19 = unaff_x20;
    ppppppuStack_2c8 = pppppppuVar19[3];
    pppppppuStack_2d0 = (ulong *******)pppppppuVar19[2];
    func_0x000107c0524c(param_3,&ppppppuStack_2e0);
    goto code_r0x000100479264;
  case 0x14:
  case 0x82:
    unaff_x23 = *(ulong ********)(param_4 + 8);
    unaff_x20 = *(ulong ********)(param_4 + 0x10);
    unaff_x26 = *(long *)(param_4 + 0x18);
    unaff_x19 = unaff_x20 + unaff_x26 * 4;
    pppppppuStack_100 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_120 = unaff_x20;
    pppppppuStack_110 = unaff_x23;
    pppppppuStack_108 = unaff_x19;
    if (unaff_x26 != 0) {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_118 = unaff_x21;
      bVar23 = *(byte *)unaff_x20;
      if (*(byte *)unaff_x20 != 0x16) goto code_r0x00010047931c;
    }
    pppppppuStack_118 = unaff_x21;
    unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f5b8,&UNK_10b20a590);
    goto code_r0x0001004792cc;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    uStack_300 = *(undefined8 *)(param_4 + 8);
    pppppppuStack_310 = *(ulong ********)(param_4 + 0x10);
    lVar31 = *(long *)(param_4 + 0x18);
    unaff_x19 = pppppppuStack_310 + lVar31 * 8;
    unaff_x21 = &ppppppuStack_330;
    ppppppuStack_330._0_1_ = 0x16;
    pppppppuStack_2f0 = (ulong *******)0x0;
    unaff_x20 = (ulong *******)&pppppppuStack_120;
    pppppppuStack_338 = (ulong *******)&pppppppuStack_110;
    pppppppuStack_308 = pppppppuStack_310;
    pppppppuStack_2f8 = unaff_x19;
    if (lVar31 != 0) {
      unaff_x27 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_d8 | 1);
      unaff_x21 = (ulong *******)((ulong)unaff_x21 | 1);
      puStack_350 = (undefined8 *)((ulong)&pppppppuStack_90 | 1);
      pppppppuStack_368 = (ulong *******)((lVar31 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (ulong *******)0x8000000000000003;
      unaff_x23 = (ulong *******)0x8000000000000001;
      pppppppuVar32 = (ulong *******)0x8000000000000003;
      unaff_x25 = pppppppuStack_310;
      pppppppuStack_360 = param_3;
      do {
        param_3 = unaff_x25;
        unaff_x25 = param_3 + 8;
        bVar2 = *(byte *)param_3;
        pppppppuVar29 = (ulong *******)(ulong)bVar2;
        pppppppuVar4 = unaff_x25;
        if (bVar2 == 0x16) goto code_r0x0001004793b8;
code_r0x000100478ec4:
        uStack_d8._0_1_ = bVar2;
        ppppppuVar21 = param_3[2];
        *(ulong *******)((long)unaff_x20 + 0x17) = param_3[3];
        *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar21;
        ppppppuVar21 = *(ulong *******)((long)param_3 + 1);
        unaff_x20[1] = *(ulong *******)((long)param_3 + 9);
        *unaff_x20 = ppppppuVar21;
        ppppppuStack_318 = param_3[7];
        uStack_328 = SUB81(param_3[5],0);
        uStack_327 = (undefined7)((ulong)param_3[5] >> 8);
        ppppppuStack_330._0_1_ = (byte)param_3[4];
        ppppppuStack_330._1_7_ = (undefined7)((ulong)param_3[4] >> 8);
        uStack_320 = SUB81(param_3[6],0);
        uStack_31f = (undefined7)((ulong)param_3[6] >> 8);
        pppppppuVar24 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
        piVar3 = (int *)CONCAT71(uStack_c7,uStack_c8);
        uVar22 = (uint)pppppppuVar29;
        if (uVar22 < 0xd) {
          if (uVar22 == 1) {
            iVar28 = 1;
            if (uStack_d8._1_1_ != '\x01') {
              iVar28 = 2;
            }
            iVar27 = 0;
            if (uStack_d8._1_1_ != '\0') {
              iVar27 = iVar28;
            }
          }
          else {
            if (uVar22 != 4) {
              if (uVar22 == 0xc) {
                if (ppppppuStack_c0 == (ulong ******)0x6) {
                  iVar27 = 1;
                  if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                    iVar27 = 2;
                  }
                }
                else if (ppppppuStack_c0 == (ulong ******)0x2) {
                  iVar27 = 2;
                  if ((short)*piVar3 == 0x6469) {
                    iVar27 = 0;
                  }
                }
                else {
                  iVar27 = 2;
                }
                goto joined_r0x000100479088;
              }
code_r0x00010047997c:
              pppppppuStack_2f0 = (ulong *******)((long)unaff_x27 + 1);
              pppppppuStack_118 = pppppppuStack_348;
              pppppppuStack_308 = unaff_x25;
              pppppppuStack_120 = pppppppuVar32;
              param_3 = (ulong *******)
                        thunk_FUN_108855b04(&uStack_d8,&pppppppuStack_90,&UNK_10b2109a0);
              pppppppuVar29 = pppppppuStack_360;
              goto code_r0x0001004799b4;
            }
            iVar28 = 1;
            if (pppppppuVar24 != (ulong *******)0x1) {
              iVar28 = 2;
            }
            iVar27 = 0;
            if (pppppppuVar24 != (ulong *******)0x0) {
              iVar27 = iVar28;
            }
          }
code_r0x000100479114:
          FUN_100e077ec(&uStack_d8);
        }
        else {
          if (uVar22 == 0xd) {
            if (piVar3 == (int *)0x6) {
              pppppppuVar29 = (ulong *******)(ulong)(*(uint *)pppppppuVar24 ^ 0x61726170);
              pppppppuVar24 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar24 + 4);
              pppppppuVar30 = (ulong *******)0x736d;
code_r0x000100479100:
              iVar27 = 1;
              if ((int)pppppppuVar29 != 0 || (int)pppppppuVar24 != (int)pppppppuVar30) {
                iVar27 = 2;
              }
            }
            else {
              if (piVar3 != (int *)0x2) goto code_r0x0001004790e0;
              iVar27 = 2;
              if (*(short *)pppppppuVar24 == 0x6469) {
                iVar27 = 0;
              }
            }
            goto code_r0x000100479114;
          }
          if (uVar22 != 0xe) {
            if (uVar22 != 0xf) goto code_r0x00010047997c;
            if (piVar3 == (int *)0x6) {
              if (((*(char *)pppppppuVar24 == 'p') && (*(char *)((long)pppppppuVar24 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar24 + 2) == 'r')) {
                in_ZR = *(char *)((long)pppppppuVar24 + 3) == 'a';
code_r0x0001004790bc:
                if ((((bool)in_ZR) && (*(char *)((long)pppppppuVar24 + 4) == 'm')) &&
                   (*(char *)((long)pppppppuVar24 + 5) == 's')) {
                  iVar27 = 1;
                  goto code_r0x000100479114;
                }
              }
            }
            else if (((piVar3 == (int *)0x2) && (*(char *)pppppppuVar24 == 'i')) &&
                    (*(char *)((long)pppppppuVar24 + 1) == 'd')) {
              iVar27 = 0;
              goto code_r0x000100479114;
            }
code_r0x0001004790e0:
            iVar27 = 2;
            goto code_r0x000100479114;
          }
          if (ppppppuStack_c0 == (ulong ******)0x6) {
            if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
                 (*(char *)((long)piVar3 + 2) != 'r')) ||
                ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
               (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x000100479050;
            iVar27 = 1;
          }
          else if (((ppppppuStack_c0 == (ulong ******)0x2) && ((char)*piVar3 == 'i')) &&
                  (*(char *)((long)piVar3 + 1) == 'd')) {
            iVar27 = 0;
          }
          else {
code_r0x000100479050:
            iVar27 = 2;
          }
joined_r0x000100479088:
          if (pppppppuVar24 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar23 = (byte)ppppppuStack_330;
        if (iVar27 == 0) {
          if (unaff_x23 != (ulong *******)0x8000000000000001) {
            pppppppuStack_2f0 = (ulong *******)((long)unaff_x27 + 1);
            pppppppuStack_118 = pppppppuStack_348;
            pppppppuStack_308 = unaff_x25;
            pppppppuStack_120 = pppppppuVar32;
            goto code_r0x000100479898;
          }
          ppppppuStack_330._0_1_ = 0x16;
          if (bVar23 == 0x16) goto code_r0x00010047990c;
          ppppppuVar21 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar21;
          uVar26 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar26;
          uStack_d8._0_1_ = bVar23;
code_r0x0001004791cc:
          func_0x00010135ba2c(&pppppppuStack_90,&uStack_d8);
          pppppppuVar24 = pppppppuStack_80;
          pppppppuVar29 = pppppppuStack_88;
          unaff_x23 = pppppppuStack_90;
          if (pppppppuStack_90 == (ulong *******)0x8000000000000001) goto code_r0x0001004795e4;
code_r0x0001004791f0:
          pppppppuStack_358 = pppppppuVar24;
          pppppppuStack_340 = pppppppuVar29;
code_r0x0001004791f8:
        }
        else if (iVar27 == 1) {
          if (unaff_x22 != (ulong *******)0x8000000000000003) goto code_r0x000100479818;
          ppppppuStack_330._0_1_ = 0x16;
          if (bVar23 == 0x16) {
            pppppppuVar24 = (ulong *******)((long)unaff_x27 + 1);
            pppppppuStack_308 = unaff_x25;
            goto code_r0x00010047994c;
          }
          ppppppuVar21 = *unaff_x21;
          puStack_350[1] = unaff_x21[1];
          *puStack_350 = ppppppuVar21;
          uVar26 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)puStack_350 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)puStack_350 + 0xf) = uVar26;
          pppppppuStack_90 = (ulong *******)CONCAT71(pppppppuStack_90._1_7_,bVar23);
          func_0x000101246a38(&uStack_d8,&pppppppuStack_90);
          pppppppuVar32 =
               (ulong *******)CONCAT62(uStack_d8._2_6_,CONCAT11(uStack_d8._1_1_,(byte)uStack_d8));
          if (pppppppuVar32 == (ulong *******)0x8000000000000003) goto code_r0x000100479580;
          pppppppuStack_348 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
          pppppppuVar24 = (ulong *******)&uStack_d8;
          pppppppuVar34 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
          ppppppuVar21 = ppppppuStack_c0;
          ppppppuVar20 = ppppppuStack_b8;
          ppppppuVar35 = ppppppuStack_b0;
code_r0x000100478e80:
          unaff_x22 = pppppppuVar32;
          pppppppuStack_338[1] = ppppppuVar21;
          *pppppppuStack_338 = (ulong ******)pppppppuVar34;
          pppppppuStack_338[3] = ppppppuVar35;
          pppppppuStack_338[2] = ppppppuVar20;
          ppppppuVar21 = pppppppuVar24[6];
          pppppppuStack_338[5] = pppppppuVar24[7];
          pppppppuStack_338[4] = ppppppuVar21;
          pppppppuStack_338[6] = pppppppuVar24[8];
          pppppppuVar32 = unaff_x22;
        }
        else {
          ppppppuStack_330._0_1_ = 0x16;
          if (bVar23 == 0x16) {
            pppppppuVar24 = (ulong *******)((long)unaff_x27 + 1);
            goto code_r0x0001004798dc;
          }
code_r0x000100479210:
          ppppppuVar21 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppuVar21;
          uVar26 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar26;
code_r0x000100479220:
          uStack_d8._0_1_ = bVar23;
code_r0x000100479224:
          FUN_100e077ec(&uStack_d8);
        }
        unaff_x27 = (ulong *******)((long)unaff_x27 + 1);
      } while (param_3 + 8 != unaff_x19);
      goto code_r0x0001004793ac;
    }
    unaff_x22 = (ulong *******)0x8000000000000003;
    pppppppuStack_120 = (ulong *******)0x8000000000000003;
  case 0xcc:
  case 0xf2:
code_r0x0001004793e0:
    pppppppuVar24 = (ulong *******)&UNK_108ca26b0;
code_r0x0001004793e8:
    pppppppuStack_88 = (ulong *******)0x2;
    pppppppuStack_90 = pppppppuVar24;
code_r0x0001004793f0:
    pppppppuVar24 = (ulong *******)&pppppppuStack_90;
    pppppppuVar29 = (ulong *******)&UNK_100c7b000;
code_r0x0001004793f8:
    uStack_d8._0_1_ = (byte)pppppppuVar24;
    uStack_d8._1_1_ = (char)((ulong)pppppppuVar24 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)pppppppuVar24 >> 0x10);
    uStack_d0 = SUB81(pppppppuVar29 + 0x74,0);
    uStack_cf = (undefined7)((ulong)(pppppppuVar29 + 0x74) >> 8);
    pppppppuVar19 = param_3;
code_r0x000100479400:
    unaff_x23 = (ulong *******)0x8000000000000001;
    param_3 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x000100479408:
    param_3 = (ulong *******)thunk_FUN_108856088((long)param_3 + 0x8f7,&uStack_d8);
    pppppppuVar24 = (ulong *******)0x6e;
code_r0x000100479418:
    *pppppppuVar19 = (ulong ******)((ulong)pppppppuVar24 | 0x8000000000000000);
    pppppppuVar19[1] = (ulong ******)param_3;
code_r0x000100479420:
    unaff_x19 = pppppppuStack_340;
    if (unaff_x22 != (ulong *******)0x8000000000000003) {
LAB_100479430:
      pppppppuVar24 = (ulong *******)((ulong)unaff_x22 ^ 0x8000000000000000);
      if (-1 < (long)unaff_x22) {
        pppppppuVar24 = (ulong *******)0x3;
      }
      pppppppuVar29 = (ulong *******)((long)pppppppuVar24 + -1);
code_r0x000100479444:
      if ((ulong *******)0x1 < pppppppuVar29) {
        if (pppppppuVar24 == (ulong *******)0x0) {
          if (pppppppuStack_348 != (ulong *******)0x0) {
LAB_100479570:
            param_3 = (ulong *******)*pppppppuStack_338;
code_r0x000100479578:
            _free(param_3);
          }
        }
        else {
LAB_100479540:
          if (unaff_x22 != (ulong *******)0x0) {
code_r0x000100479544:
            param_3 = pppppppuStack_348;
code_r0x000100479548:
            _free(param_3);
          }
          param_3 = pppppppuStack_100;
          if (pppppppuStack_108 != (ulong *******)0x0) {
code_r0x000100479558:
            _free(param_3);
          }
LAB_10047955c:
          pppppppuVar24 = pppppppuStack_f0;
code_r0x000100479560:
          if (((ulong)pppppppuVar24 & 0x7fffffffffffffff) != 0) {
code_r0x000100479568:
            pppppppuVar24 = unaff_x20 + 7;
code_r0x00010047956c:
            pppppppuStack_338 = pppppppuVar24;
            goto LAB_100479570;
          }
        }
      }
    }
LAB_1004795a8:
    pppppppuVar24 = (ulong *******)0x8000000000000002;
code_r0x0001004795b0:
    in_OV = SBORROW8((long)unaff_x23,(long)pppppppuVar24);
    in_NG = (long)unaff_x23 - (long)pppppppuVar24 < 0;
code_r0x0001004795b4:
    if (in_NG == in_OV) {
code_r0x0001004795b8:
      param_3 = unaff_x19;
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x0001004795c0:
        _free(param_3);
      }
    }
LAB_1004795c4:
    param_3 = unaff_x21 + 4;
code_r0x0001004795c8:
    FUN_100d34830(param_3);
    pppppppuVar24 = (ulong *******)(ulong)(byte)ppppppuStack_330;
code_r0x0001004795d0:
    if ((int)pppppppuVar24 == 0x16) {
      return;
    }
code_r0x0001004795d8:
    FUN_100e077ec(&ppppppuStack_330);
code_r0x0001004795e0:
    return;
  case 0x16:
  case 0x42:
  case 0xc2:
  case 0xdf:
    goto code_r0x0001004795e8;
  case 0x17:
  case 0x43:
  case 0xdc:
    goto code_r0x0001004795f8;
  case 0x18:
  case 0x3c:
  case 0x44:
    goto code_r0x0001004795c0;
  case 0x19:
  case 0x45:
  case 0xeb:
    goto code_r0x0001004795d8;
  case 0x1a:
  case 0x46:
    goto code_r0x000100479584;
  case 0x1b:
  case 0x47:
  case 0xdd:
    goto code_r0x000100479608;
  case 0x1d:
  case 0x49:
  case 0x60:
    goto code_r0x0001004795e0;
  case 0x1e:
  case 0x4a:
  case 0xe6:
    goto code_r0x000100479638;
  case 0x1f:
  case 0x4b:
    goto code_r0x0001004795b4;
  case 0x21:
  case 0x4d:
  case 0x61:
    goto LAB_10047955c;
  case 0x22:
  case 0x4e:
    goto code_r0x00010047958c;
  case 0x23:
  case 0x4f:
    goto code_r0x000100479610;
  case 0x24:
  case 0x50:
  case 100:
  case 0xb9:
    goto code_r0x000100479534;
  case 0x25:
  case 0x3a:
  case 0x51:
  case 0x5e:
    goto code_r0x0001004795c8;
  case 0x26:
  case 0x52:
  case 0x5c:
    goto code_r0x00010047952c;
  case 0x29:
  case 0x55:
    goto code_r0x0001004791f0;
  case 0x2d:
    goto code_r0x00010047968c;
  case 0x2f:
  case 0x77:
  case 0x8d:
    goto code_r0x00010047966c;
  case 0x30:
  case 0xe1:
    goto code_r0x000100479618;
  case 0x31:
    goto code_r0x00010047969c;
  case 0x33:
    goto code_r0x000100479674;
  case 0x35:
  case 0xe4:
    goto code_r0x000100479648;
  case 0x37:
  case 0xe3:
    goto code_r0x0001004795f0;
  case 0x39:
    goto code_r0x0001004796a4;
  case 0x3b:
    goto code_r0x00010047965c;
  case 0x3f:
  case 0x97:
    goto code_r0x000100479220;
  case 0x58:
  case 0xbd:
    goto code_r0x000100479590;
  case 0x59:
  case 0xb6:
    goto code_r0x0001004795a0;
  case 0x5a:
  case 0xb0:
    goto code_r0x000100479568;
  case 0x5b:
code_r0x000100479580:
    pppppppuVar24 = (ulong *******)((long)unaff_x27 + 1);
code_r0x000100479584:
    pppppppuStack_308 = unaff_x25;
code_r0x000100479588:
    pppppppuStack_2f0 = pppppppuVar24;
code_r0x00010047958c:
    pppppppuVar24 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
code_r0x000100479590:
    pppppppuVar29 = (ulong *******)0x6e;
code_r0x000100479594:
    pppppppuVar29 = (ulong *******)((ulong)pppppppuVar29 | 0x8000000000000000);
    pppppppuVar30 = pppppppuStack_360;
code_r0x00010047959c:
    *pppppppuVar30 = (ulong ******)pppppppuVar29;
    pppppppuVar30[1] = (ulong ******)pppppppuVar24;
code_r0x0001004795a0:
    unaff_x21 = &ppppppuStack_330;
    unaff_x19 = pppppppuStack_340;
    goto LAB_1004795a8;
  case 0x5d:
    goto code_r0x0001004795b0;
  case 0x5f:
  case 0xb5:
    goto code_r0x000100479588;
  case 0x62:
  case 0xde:
    goto code_r0x0001004795d0;
  case 99:
  case 0xb4:
    goto code_r0x000100479504;
  case 0x65:
  case 0xb8:
    goto code_r0x0001004795b8;
  case 0x66:
  case 0xbb:
    goto code_r0x0001004794dc;
  case 0x67:
    goto LAB_100479570;
  case 0x68:
    goto code_r0x0001004794d4;
  case 0x6b:
    goto code_r0x0001004791cc;
  case 0x6c:
    goto code_r0x000100479210;
  case 0x6e:
  case 0x84:
    goto code_r0x0001004796a0;
  case 0x71:
  case 0x87:
    goto code_r0x000100479690;
  case 0x72:
  case 0x88:
    goto code_r0x00010047963c;
  case 0x75:
  case 0x8b:
  case 0xee:
    goto code_r0x000100479698;
  case 0x79:
  case 0x8f:
    goto code_r0x000100479614;
  case 0x7a:
  case 0x90:
    goto code_r0x000100479644;
  case 0x7b:
  case 0x91:
    goto code_r0x0001004796c8;
  case 0x7c:
  case 0x92:
    goto code_r0x0001004795ec;
  case 0x7e:
  case 0x94:
code_r0x0001004795e4:
    pppppppuVar24 = (ulong *******)((long)unaff_x27 + 1);
code_r0x0001004795e8:
    pppppppuStack_308 = unaff_x25;
code_r0x0001004795ec:
    pppppppuStack_2f0 = pppppppuVar24;
code_r0x0001004795f0:
    pppppppuStack_118 = pppppppuStack_348;
code_r0x0001004795f8:
    pppppppuVar29 = (ulong *******)0x800000000000006e;
    pppppppuVar24 = pppppppuStack_88;
    pppppppuStack_120 = pppppppuVar32;
code_r0x000100479608:
    *pppppppuStack_360 = (ulong ******)pppppppuVar29;
    pppppppuStack_360[1] = (ulong ******)pppppppuVar24;
code_r0x000100479610:
    unaff_x23 = (ulong *******)0x8000000000000001;
code_r0x000100479614:
    unaff_x21 = &ppppppuStack_330;
code_r0x000100479618:
    unaff_x20 = (ulong *******)&pppppppuStack_120;
    goto code_r0x000100479420;
  case 0x80:
  case 0x96:
    goto code_r0x000100479740;
  case 0x9a:
    goto code_r0x0001004798cc;
  case 0x9b:
code_r0x0001004798dc:
    pppppppuStack_118 = pppppppuStack_348;
    pppppppuStack_308 = unaff_x25;
    pppppppuStack_2f0 = pppppppuVar24;
  case 0x9f:
    param_3 = (ulong *******)&UNK_108ca1000;
    pppppppuStack_120 = pppppppuVar32;
code_r0x0001004798f4:
    param_3 = param_3 + 0x153;
    param_5 = &UNK_10b24f848;
    param_4 = (byte *)0x2c;
code_r0x000100479904:
    FUN_107c05cac(param_3,param_4,param_5);
code_r0x000100479978:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10047997c);
    (*pcVar5)();
  case 0x9c:
    goto code_r0x0001004798a4;
  case 0x9d:
    goto code_r0x0001004798bc;
  case 0x9e:
    goto code_r0x000100479868;
  case 0xa0:
    goto code_r0x000100479904;
  case 0xa1:
    goto code_r0x0001004798c4;
  case 0xa2:
    goto code_r0x00010047991c;
  case 0xa3:
code_r0x000100479898:
    pppppppuVar25 = (ulong *******)&UNK_108ca26b0;
    pppppppuVar29 = (ulong *******)0x2;
code_r0x0001004798a4:
    pppppppuVar24 = (ulong *******)&pppppppuStack_90;
    pppppppuStack_90 = pppppppuVar25;
    pppppppuStack_88 = pppppppuVar29;
code_r0x0001004798ac:
    uStack_d8._0_1_ = (byte)pppppppuVar24;
    uStack_d8._1_1_ = (char)((ulong)pppppppuVar24 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)pppppppuVar24 >> 0x10);
    uStack_d0 = 0xa0;
    uStack_cf = 0x100c7b3;
    param_3 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x0001004798bc:
    param_3 = (ulong *******)((long)param_3 + 0x973);
    param_4 = (byte *)&uStack_d8;
code_r0x0001004798c4:
    param_3 = (ulong *******)thunk_FUN_108856088(param_3,param_4);
    pppppppuVar29 = pppppppuStack_360;
code_r0x0001004798cc:
code_r0x0001004799b4:
    unaff_x21 = &ppppppuStack_330;
    unaff_x20 = (ulong *******)&pppppppuStack_120;
    *pppppppuVar29 = (ulong ******)0x800000000000006e;
    pppppppuVar29[1] = (ulong ******)param_3;
    goto code_r0x000100479420;
  case 0xa4:
code_r0x00010047990c:
    pppppppuStack_2f0 = (ulong *******)((long)unaff_x27 + 1);
    pppppppuVar24 = pppppppuStack_348;
    pppppppuStack_308 = unaff_x25;
code_r0x00010047991c:
    pppppppuStack_120 = pppppppuVar32;
    pppppppuStack_118 = pppppppuVar24;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x000100479978;
  case 0xa5:
    goto code_r0x000100479840;
  case 0xa6:
    goto code_r0x000100479870;
  case 0xa7:
    goto code_r0x0001004798f4;
  case 0xa8:
code_r0x000100479818:
    pppppppuStack_2f0 = (ulong *******)((long)unaff_x27 + 1);
    pppppppuStack_118 = pppppppuStack_348;
    pppppppuStack_90 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_88 = (ulong *******)0x6;
    pppppppuStack_308 = unaff_x25;
    pppppppuStack_120 = pppppppuVar32;
code_r0x000100479840:
    uStack_d8._0_1_ = (byte)&pppppppuStack_90;
    uStack_d8._1_1_ = (char)((ulong)&pppppppuStack_90 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)&pppppppuStack_90 >> 0x10);
    uStack_d0 = 0xa0;
    uStack_cf = 0x100c7b3;
    param_3 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
    unaff_x21 = &ppppppuStack_330;
    pppppppuVar29 = pppppppuStack_360;
code_r0x000100479868:
    unaff_x20 = (ulong *******)&pppppppuStack_120;
    pppppppuVar24 = (ulong *******)0x6e;
code_r0x000100479870:
    *pppppppuVar29 = (ulong ******)((ulong)pppppppuVar24 | 0x8000000000000000);
    pppppppuVar29[1] = (ulong ******)param_3;
    unaff_x19 = pppppppuStack_340;
    goto LAB_100479430;
  case 0xa9:
    goto code_r0x0001004798ac;
  case 0xaa:
    goto code_r0x000100479810;
  case 0xac:
code_r0x00010047994c:
    pppppppuStack_118 = pppppppuStack_348;
    pppppppuStack_2f0 = pppppppuVar24;
    pppppppuStack_120 = pppppppuVar32;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x000100479978;
  case 0xad:
    goto code_r0x000100478e80;
  case 0xae:
    goto code_r0x000100478ec4;
  case 0xb1:
    goto code_r0x000100479578;
  case 0xb2:
    goto LAB_100479540;
  case 0xb3:
    goto code_r0x000100479558;
  case 0xb7:
    goto code_r0x000100479560;
  case 0xba:
    goto LAB_1004795a8;
  case 0xbc:
    goto code_r0x00010047950c;
  case 0xbe:
    goto code_r0x0001004794b4;
  case 0xbf:
    goto code_r0x000100479548;
  case 0xc0:
    goto code_r0x0001004794ac;
  case 0xc3:
    goto code_r0x000100479224;
  case 0xc4:
    goto code_r0x000100479268;
  case 0xc6:
    goto code_r0x0001004793a8;
  case 199:
  case 0xf4:
    goto code_r0x0001004793b8;
  case 200:
    goto code_r0x000100479380;
  case 0xc9:
    goto code_r0x000100479398;
  case 0xca:
    goto code_r0x000100479344;
  case 0xcb:
    goto code_r0x0001004793c8;
  case 0xcd:
    goto code_r0x0001004793a0;
  case 0xce:
    goto code_r0x0001004793f8;
  case 0xcf:
    goto code_r0x000100479374;
  case 0xd0:
    goto code_r0x0001004793e8;
  case 0xd1:
code_r0x00010047931c:
    uStack_d8._0_1_ = bVar23;
    uVar26 = *(undefined8 *)((long)unaff_x20 + 1);
    uStack_cf = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
    uStack_d8._1_1_ = (char)uVar26;
    uStack_d8._2_6_ = (undefined6)((ulong)uVar26 >> 8);
    uStack_d0 = (undefined1)((ulong)uVar26 >> 0x38);
    ppppppuStack_c0 = unaff_x20[3];
    uStack_c8 = SUB81(unaff_x20[2],0);
    uStack_c7 = (undefined7)((ulong)unaff_x20[2] >> 8);
    pppppppuStack_100 = (ulong *******)0x1;
    func_0x00010135ba2c(&ppppppuStack_330,&uStack_d8);
code_r0x000100479344:
    unaff_x25 = (ulong *******)CONCAT71(ppppppuStack_330._1_7_,(byte)ppppppuStack_330);
    unaff_x22 = (ulong *******)CONCAT71(uStack_327,uStack_328);
    pppppppuVar24 = (ulong *******)0x8000000000000001;
code_r0x00010047934c:
    if (unaff_x25 == pppppppuVar24) {
code_r0x0001004792cc:
      *param_3 = (ulong ******)0x800000000000006e;
      param_3[1] = (ulong ******)unaff_x22;
      goto code_r0x0001004792d8;
    }
code_r0x000100479354:
    if (unaff_x26 == 1) {
code_r0x000100479374:
      param_4 = &UNK_10b22f5b8;
code_r0x00010047937c:
      param_5 = &UNK_10b20a000;
code_r0x000100479380:
      param_5 = param_5 + 0x590;
code_r0x000100479384:
      pppppppuVar19 = (ulong *******)0x1;
code_r0x000100479388:
      ppppppuVar20 = (ulong ******)thunk_FUN_1087e422c(pppppppuVar19,param_4,param_5);
    }
    else {
      ppppppuVar21 = (ulong ******)CONCAT71(uStack_31f,uStack_320);
      unaff_x21 = unaff_x20 + 8;
      pppppppuStack_118 = unaff_x21;
      if (*(byte *)(unaff_x20 + 4) == 0x16) goto code_r0x000100479374;
      uStack_327 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      ppppppuStack_330._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_328 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
      ppppppuStack_318 = unaff_x20[7];
      uStack_320 = SUB81(unaff_x20[6],0);
      uStack_31f = (undefined7)((ulong)unaff_x20[6] >> 8);
      pppppppuStack_100 = (ulong *******)0x2;
      ppppppuStack_330._0_1_ = *(byte *)(unaff_x20 + 4);
      func_0x000101246a38(&uStack_d8,&ppppppuStack_330);
      ppppppuVar35 = (ulong ******)
                     CONCAT62(uStack_d8._2_6_,CONCAT11(uStack_d8._1_1_,(byte)uStack_d8));
      ppppppuVar20 = (ulong ******)CONCAT71(uStack_cf,uStack_d0);
      if (ppppppuVar35 != (ulong ******)0x8000000000000003) {
        param_3[7] = ppppppuStack_c0;
        param_3[6] = (ulong ******)CONCAT71(uStack_c7,uStack_c8);
        param_3[9] = ppppppuStack_b0;
        param_3[8] = ppppppuStack_b8;
        param_3[0xb] = ppppppuStack_a0;
        param_3[10] = ppppppuStack_a8;
        param_3[0xc] = ppppppuStack_98;
        *param_3 = (ulong ******)0x8000000000000052;
        param_3[1] = (ulong ******)unaff_x25;
        param_3[2] = (ulong ******)unaff_x22;
        param_3[3] = ppppppuVar21;
        param_3[4] = ppppppuVar35;
        param_3[5] = ppppppuVar20;
        _memcpy(&ppppppuStack_2e0,param_3,0x1c0);
        ppppppuVar21 = (ulong ******)FUN_100fbc738(&pppppppuStack_120);
        if (ppppppuVar21 == (ulong ******)0x0) {
          return;
        }
        *param_3 = (ulong ******)0x800000000000006e;
        param_3[1] = ppppppuVar21;
code_r0x00010047980c:
        param_3 = &ppppppuStack_2e0;
code_r0x000100479810:
        FUN_100e44f40(param_3);
        return;
      }
    }
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar20;
code_r0x000100479398:
    if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x0001004793a0:
      _free(unaff_x22);
code_r0x0001004793a8:
    }
code_r0x0001004792d8:
    pppppppuVar32 = (ulong *******)(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1);
    while (pppppppuVar32 = (ulong *******)((long)pppppppuVar32 + -1),
          pppppppuVar32 != (ulong *******)0x0) {
code_r0x0001004792ec:
      param_3 = unaff_x21;
      unaff_x22 = param_3 + 4;
code_r0x0001004792f4:
      unaff_x21 = unaff_x22;
      FUN_100e077ec(param_3);
    }
    if (unaff_x23 == (ulong *******)0x0) {
      return;
    }
    _free(unaff_x20);
    return;
  case 0xd2:
    goto code_r0x00010047934c;
  case 0xd3:
  case 0xf5:
    goto code_r0x0001004793d0;
  case 0xd4:
    goto code_r0x0001004792f4;
  case 0xd5:
    goto code_r0x000100479388;
  case 0xd6:
    goto code_r0x0001004792ec;
  case 0xd8:
    goto code_r0x000100479444;
  case 0xd9:
    goto code_r0x0001004790bc;
  case 0xda:
    goto code_r0x000100479100;
  case 0xe0:
    goto code_r0x000100479594;
  case 0xe5:
    goto LAB_1004795c4;
  case 0xe7:
    goto code_r0x00010047956c;
  case 0xe8:
    goto code_r0x00010047959c;
  case 0xea:
    goto code_r0x000100479544;
  case 0xec:
    goto code_r0x00010047953c;
  case 0xef:
    goto code_r0x0001004791f8;
  case 0xf0:
    goto code_r0x00010047923c;
  case 0xf3:
    goto code_r0x0001004793f0;
  case 0xf6:
    goto code_r0x00010047937c;
  case 0xf7:
    goto code_r0x000100479400;
  case 0xf8:
    goto code_r0x000100479418;
  case 0xf9:
    goto code_r0x0001004793d8;
  case 0xfa:
    goto LAB_100479430;
  case 0xfb:
code_r0x0001004793ac:
    unaff_x25 = unaff_x19;
    unaff_x27 = pppppppuStack_368;
    pppppppuVar4 = unaff_x19;
code_r0x0001004793b8:
    pppppppuStack_308 = pppppppuVar4;
    pppppppuStack_118 = pppppppuStack_348;
    pppppppuStack_2f0 = unaff_x27;
    pppppppuStack_120 = pppppppuVar32;
code_r0x0001004793c8:
    in_ZR = unaff_x23 == (ulong *******)0x8000000000000001;
code_r0x0001004793d0:
    pppppppuVar29 = pppppppuStack_360;
    param_3 = pppppppuStack_360;
    if ((bool)in_ZR) {
code_r0x0001004793d8:
      unaff_x21 = &ppppppuStack_330;
      unaff_x20 = (ulong *******)&pppppppuStack_120;
      goto code_r0x0001004793e0;
    }
    if (unaff_x22 == (ulong *******)0x8000000000000003) {
      pppppppuStack_90 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_88 = (ulong *******)0x6;
      uStack_d8._0_1_ = (byte)&pppppppuStack_90;
      uStack_d8._1_1_ = (char)((ulong)&pppppppuStack_90 >> 8);
      uStack_d8._2_6_ = (undefined6)((ulong)&pppppppuStack_90 >> 0x10);
      uStack_d0 = 0xa0;
      uStack_cf = 0x100c7b3;
      ppppppuVar21 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
      *pppppppuVar29 = (ulong ******)0x800000000000006e;
      pppppppuVar29[1] = ppppppuVar21;
      in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
      unaff_x21 = &ppppppuStack_330;
code_r0x0001004794ac:
      param_3 = pppppppuStack_340;
      if (!(bool)in_ZR) {
code_r0x0001004794b4:
        goto code_r0x0001004795c0;
      }
      goto LAB_1004795c4;
    }
    unaff_x20 = (ulong *******)0x800000000000006e;
    ppppppuVar21 = *pppppppuStack_338;
    ppppppuVar35 = pppppppuStack_338[3];
    ppppppuVar20 = pppppppuStack_338[2];
    pppppppuStack_360[7] = pppppppuStack_338[1];
    pppppppuStack_360[6] = ppppppuVar21;
    pppppppuStack_360[9] = ppppppuVar35;
    pppppppuStack_360[8] = ppppppuVar20;
    ppppppuVar21 = pppppppuStack_338[4];
    pppppppuStack_360[0xb] = pppppppuStack_338[5];
    pppppppuStack_360[10] = ppppppuVar21;
    pppppppuVar24 = pppppppuStack_338;
    pppppppuVar29 = pppppppuStack_340;
code_r0x0001004794d4:
    param_3[0xc] = pppppppuVar24[6];
code_r0x0001004794dc:
    *param_3 = (ulong ******)((long)unaff_x20 + -0x1c);
    param_3[1] = (ulong ******)unaff_x23;
    param_3[2] = (ulong ******)pppppppuVar29;
    param_3[3] = (ulong ******)pppppppuStack_358;
    param_3[4] = (ulong ******)unaff_x22;
    param_3[5] = (ulong ******)pppppppuStack_348;
    _memcpy(&ppppppuStack_2e0,param_3,0x1c0);
    pppppppuVar19 = param_3;
code_r0x000100479504:
    param_3 = (ulong *******)&pppppppuStack_310;
code_r0x00010047950c:
    FUN_100d34830(param_3);
    if (unaff_x19 == unaff_x25) {
      return;
    }
    pppppppuVar24 = (ulong *******)((ulong)((long)unaff_x19 - (long)unaff_x25) >> 6);
    uStack_d8._0_1_ = (byte)unaff_x27;
    uStack_d8._1_1_ = (char)((ulong)unaff_x27 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)unaff_x27 >> 0x10);
    param_5 = &UNK_10b23a190;
code_r0x00010047952c:
    param_3 = (ulong *******)((long)pppppppuVar24 + (long)unaff_x27);
    param_4 = (byte *)&uStack_d8;
code_r0x000100479534:
    ppppppuVar21 = (ulong ******)thunk_FUN_1087e422c(param_3,param_4,param_5);
    *pppppppuVar19 = (ulong ******)unaff_x20;
    pppppppuVar19[1] = ppppppuVar21;
code_r0x00010047953c:
    goto code_r0x00010047980c;
  case 0xfc:
    goto code_r0x000100479420;
  case 0xfd:
    goto code_r0x000100479354;
  case 0xfe:
    goto code_r0x000100479384;
  case 0xff:
    goto code_r0x000100479408;
  }
  ppppppuStack_2e0 = (ulong ******)CONCAT71(ppppppuStack_2e0._1_7_,bVar23);
code_r0x00010047973c:
  param_5 = &UNK_10b219000;
code_r0x000100479740:
  ppppppuVar21 = (ulong ******)FUN_107c05dcc(&ppppppuStack_2e0,&pppppppuStack_90,param_5 + 0xb90);
  *param_3 = (ulong ******)0x800000000000006e;
  param_3[1] = ppppppuVar21;
  return;
}

