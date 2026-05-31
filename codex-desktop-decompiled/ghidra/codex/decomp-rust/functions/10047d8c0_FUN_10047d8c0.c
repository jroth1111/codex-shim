
/* WARNING: Type propagation algorithm not settling */

void FUN_10047d8c0(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar17;
  ulong ******ppppppuVar18;
  uint uVar19;
  byte bVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  ulong *******pppppppuVar26;
  ulong *******pppppppuVar27;
  ulong ******ppppppuVar28;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong ******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar29;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar30;
  undefined8 unaff_x30;
  ulong *****pppppuVar31;
  ulong *******pppppppuVar32;
  ulong ******ppppppuVar33;
  ulong ******ppppppuVar34;
  byte abStack_3b0 [80];
  ulong *******pppppppuStack_360;
  ulong *******pppppppuStack_358;
  ulong *******pppppppuStack_350;
  ulong ******ppppppuStack_348;
  undefined8 *puStack_340;
  ulong *******pppppppuStack_338;
  ulong ******ppppppuStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  ulong ******ppppppuStack_318;
  ulong *******pppppppuStack_310;
  ulong *******pppppppuStack_308;
  ulong ******ppppppuStack_300;
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
  ulong ******ppppppuStack_f8;
  long lStack_f0;
  ulong *******pppppppuStack_e8;
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
  ulong ******ppppppuStack_80;
  ulong *******pppppppuVar14;
  
  ppppppuVar18 = param_1._8_8_;
  pppppppuVar32 = param_1._0_8_;
  puVar30 = &stack0xfffffffffffffff0;
  pppppppuVar13 = (ulong *******)&pppppppuStack_360;
  pppppppuVar8 = (ulong *******)&pppppppuStack_360;
  pppppppuVar29 = (ulong *******)&uStack_d8;
  bVar20 = *(byte *)param_4;
  pppppppuVar21 = (ulong *******)(ulong)bVar20;
  pppppppuVar26 = (ulong *******)&UNK_108c99926;
  ppppppuVar28 = (ulong ******)(ulong)*(ushort *)(&UNK_108c99926 + (long)pppppppuVar21 * 2);
  pppppppuVar27 = (ulong *******)(&UNK_10047d904 + (long)ppppppuVar28 * 4);
  pppppppuVar15 = (ulong *******)&pppppppuStack_360;
  pppppppuVar16 = (ulong *******)&pppppppuStack_360;
  pppppppuVar9 = (ulong *******)&pppppppuStack_360;
  pppppppuVar10 = (ulong *******)&pppppppuStack_360;
  pppppppuVar11 = (ulong *******)&pppppppuStack_360;
  pppppppuVar12 = (ulong *******)&pppppppuStack_360;
  pppppppuVar14 = (ulong *******)&pppppppuStack_360;
  pppppppuVar4 = (ulong *******)&pppppppuStack_360;
  pppppppuVar5 = (ulong *******)&pppppppuStack_360;
  pppppppuVar6 = (ulong *******)&pppppppuStack_360;
  pppppppuVar7 = (ulong *******)&pppppppuStack_360;
  pppppppuVar17 = param_3;
  pppppppuVar22 = pppppppuVar21;
  ppppppuVar33 = param_2._0_8_;
  ppppppuVar34 = param_2._8_8_;
  switch(bVar20) {
  case 0:
    bVar20 = *(byte *)((long)param_4 + 1);
  case 0xa7:
    ppppppuStack_2e0 = (ulong ******)((ulong)CONCAT61(ppppppuStack_2e0._2_6_,bVar20) << 8);
    goto code_r0x00010047e230;
  case 1:
    pppppppuVar21 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
    break;
  case 2:
    pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x9a:
    break;
  case 3:
    pppppppuVar21 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0xee:
    break;
  case 4:
    pppppppuVar21 = (ulong *******)param_4[1];
    break;
  case 5:
    pppppppuVar21 = (ulong *******)(long)*(char *)((long)param_4 + 1);
    goto code_r0x00010047e224;
  case 6:
    pppppppuVar21 = (ulong *******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x00010047e224;
  case 7:
  case 0x6a:
    pppppppuVar21 = (ulong *******)(long)(int)*(uint *)((long)param_4 + 4);
  case 0x9f:
code_r0x00010047e224:
    bVar20 = 2;
    pppppppuStack_2d8 = pppppppuVar21;
    goto code_r0x00010047e22c;
  case 8:
    pppppppuVar21 = (ulong *******)param_4[1];
    goto code_r0x00010047e224;
  case 9:
  case 0x9d:
    pppppppuVar32 = (ulong *******)(double)*(float *)((long)param_4 + 4);
  case 0xa1:
code_r0x00010047e214:
    bVar20 = 3;
    pppppppuStack_2d8 = pppppppuVar32;
    goto code_r0x00010047e22c;
  case 10:
    pppppppuVar32 = (ulong *******)param_4[1];
    goto code_r0x00010047e214;
  case 0xb:
  case 0xe1:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x5d:
  case 0x9e:
code_r0x00010047e14c:
    pppppppuVar9 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010047e150:
    puVar30 = *(undefined1 **)((long)pppppppuVar9 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar9 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar9 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar9 + 0x48);
    pppppppuVar10 = pppppppuVar9;
code_r0x00010047e158:
    pppppppuVar11 = pppppppuVar10;
code_r0x00010047e15c:
    pppppppuVar12 = pppppppuVar11;
code_r0x00010047e160:
    pppppppuVar14 = pppppppuVar12;
code_r0x00010047e164:
    pppppppuVar13 = (ulong *******)((long)pppppppuVar14 + 0x60);
code_r0x00010047e168:
    *(ulong ********)((long)pppppppuVar13 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar13 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar13 + -0x10) = puVar30;
    *(undefined8 *)((long)pppppppuVar13 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar13 + -0x44) = 0;
    uVar19 = (uint)param_4;
    if (uVar19 < 0x80) {
      *(byte *)((long)pppppppuVar13 + -0x44) = (byte)param_4;
      uVar23 = 1;
    }
    else {
      bVar20 = (byte)param_4 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        *(byte *)((long)pppppppuVar13 + -0x44) = (byte)(uVar19 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar13 + -0x43) = bVar20;
        uVar23 = 2;
      }
      else {
        bVar1 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          *(byte *)((long)pppppppuVar13 + -0x44) = (byte)(uVar19 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar13 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar13 + -0x42) = bVar20;
          uVar23 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar13 + -0x44) = (byte)(uVar19 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar13 + -0x43) = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar13 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar13 + -0x41) = bVar20;
          uVar23 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar13 + -0x38) = (undefined1 *)((long)pppppppuVar13 + -0x44);
    *(undefined8 *)((long)pppppppuVar13 + -0x30) = uVar23;
    *(undefined1 *)((long)pppppppuVar13 + -0x40) = 5;
    ppppppuVar28 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar13 + -0x40),
                                       (undefined1 *)((long)pppppppuVar13 + -0x21),&UNK_10b219370);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar28;
    return;
  case 0xc:
  case 0xe4:
    param_4 = param_4 + 1;
  case 0x60:
  case 0xa3:
    pppppppuVar15 = (ulong *******)&stack0xffffffffffffffa0;
    puVar30 = unaff_x29;
code_r0x00010047e184:
    unaff_x20 = *(ulong ********)((long)pppppppuVar15 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar15 + 0x48);
    unaff_x22 = *(ulong *******)((long)pppppppuVar15 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar15 + 0x38);
    pppppppuVar16 = pppppppuVar15;
code_r0x00010047e18c:
    *(ulong *******)((long)pppppppuVar16 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar16 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar16 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar16 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar16 + 0x50) = puVar30;
    *(undefined8 *)((long)pppppppuVar16 + 0x58) = unaff_x30;
    ppppppuVar28 = param_4[1];
    ppppppuVar18 = param_4[2];
    *(ulong *******)((long)pppppppuVar16 + 0x18) = ppppppuVar28;
    *(ulong *******)((long)pppppppuVar16 + 0x20) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar16 + 0x10) = 5;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar16 + 0x10),
                                       (undefined1 *)((long)pppppppuVar16 + 0x2f),&UNK_10b219370);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar18;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar28);
    }
    return;
  case 0xd:
    pppppppuVar21 = (ulong *******)param_4[1];
    pppppppuVar26 = (ulong *******)param_4[2];
  case 0xa2:
    bVar20 = 5;
    pppppppuStack_2d8 = pppppppuVar21;
    pppppppuStack_2d0 = pppppppuVar26;
    goto code_r0x00010047e22c;
  case 0xe:
  case 0x96:
  case 0xe3:
    param_4 = param_4 + 1;
  case 0x5f:
  case 0xa5:
  case 0xfc:
code_r0x00010047e124:
    pppppppuVar4 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010047e128:
    puVar30 = *(undefined1 **)((long)pppppppuVar4 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar4 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar4 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar4 + 0x48);
    pppppppuVar5 = pppppppuVar4;
code_r0x00010047e130:
    unaff_x22 = *(ulong *******)((long)pppppppuVar5 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar5 + 0x38);
    pppppppuVar6 = pppppppuVar5;
code_r0x00010047e134:
    pppppppuVar7 = pppppppuVar6;
code_r0x00010047e138:
    pppppppuVar8 = (ulong *******)((long)pppppppuVar7 + 0x60);
code_r0x00010047e140:
    *(ulong *******)((long)pppppppuVar8 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar8 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar8 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar8 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar8 + -0x10) = puVar30;
    *(undefined8 *)((long)pppppppuVar8 + -8) = unaff_x30;
    ppppppuVar28 = param_4[1];
    ppppppuVar18 = param_4[2];
    *(ulong *******)((long)pppppppuVar8 + -0x48) = ppppppuVar28;
    *(ulong *******)((long)pppppppuVar8 + -0x40) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar8 + -0x50) = 6;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar8 + -0x50),
                                       (undefined1 *)((long)pppppppuVar8 + -0x31),&UNK_10b219370);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar18;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar28);
    }
    return;
  case 0xf:
    pppppppuStack_2d8 = (ulong *******)param_4[1];
    pppppppuStack_2d0 = (ulong *******)param_4[2];
  case 0xd8:
    bVar20 = 6;
code_r0x00010047e1bc:
    goto code_r0x00010047e22c;
  case 0x10:
  case 0xdf:
    bVar20 = 8;
  case 0x3e:
  case 0x5b:
  case 0xc6:
  case 0xf8:
    goto code_r0x00010047e22c;
  default:
    pppppppuVar17 = (ulong *******)param_4[1];
    pppppppuStack_2d8 = (ulong *******)pppppppuVar17[1];
    ppppppuStack_2e0 = *pppppppuVar17;
    ppppppuStack_2c8 = pppppppuVar17[3];
    pppppppuStack_2d0 = (ulong *******)pppppppuVar17[2];
    func_0x000107c049a8(param_3,&ppppppuStack_2e0);
    goto code_r0x00010047dd90;
  case 0x12:
    bVar20 = 7;
    goto code_r0x00010047e22c;
  case 0x13:
  case 0x98:
    unaff_x20 = (ulong *******)param_4[1];
  case 0x3f:
    pppppppuStack_2d8 = (ulong *******)unaff_x20[1];
    ppppppuStack_2e0 = *unaff_x20;
    ppppppuVar18 = unaff_x20[3];
    pppppppuVar32 = (ulong *******)unaff_x20[2];
code_r0x00010047dd60:
    pppppppuStack_2d0 = pppppppuVar32;
    ppppppuStack_2c8 = ppppppuVar18;
code_r0x00010047dd64:
    param_4 = &ppppppuStack_2e0;
code_r0x00010047dd6c:
    pppppppuVar17 = unaff_x20;
    func_0x000107c05498(param_3,param_4);
code_r0x00010047dd90:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar17);
    return;
  case 0x14:
    unaff_x23 = (ulong *******)param_4[1];
    unaff_x20 = (ulong *******)param_4[2];
  case 0x40:
    unaff_x26 = (ulong *******)param_4[3];
    unaff_x19 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_100 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_120 = unaff_x20;
    pppppppuStack_110 = unaff_x23;
    pppppppuStack_108 = unaff_x19;
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x00010047ddd0:
      pppppppuStack_118 = unaff_x21;
      unaff_x22 = (ulong ******)thunk_FUN_1087e422c(0,&UNK_10b22f978,&UNK_10b20a590);
code_r0x00010047ddec:
      *param_3 = (ulong ******)0x800000000000006e;
      param_3[1] = unaff_x22;
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      bVar20 = *(byte *)unaff_x20;
      if (bVar20 == 0x16) goto code_r0x00010047ddd0;
      uVar23 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_cf = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_d8._1_1_ = (char)uVar23;
      uStack_d8._2_6_ = (undefined6)((ulong)uVar23 >> 8);
      uStack_d0 = (undefined1)((ulong)uVar23 >> 0x38);
      ppppppuStack_c0 = unaff_x20[3];
      uStack_c8 = SUB81(unaff_x20[2],0);
      uStack_c7 = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_118 = unaff_x21;
code_r0x00010047de4c:
      pppppppuStack_100 = (ulong *******)0x1;
code_r0x00010047de54:
      uStack_d8._0_1_ = bVar20;
      pppppppuVar17 = &ppppppuStack_330;
code_r0x00010047de5c:
      func_0x00010135ba2c(pppppppuVar17,&uStack_d8);
      unaff_x25 = (ulong *******)CONCAT71(ppppppuStack_330._1_7_,(byte)ppppppuStack_330);
      unaff_x22 = (ulong ******)CONCAT71(uStack_327,uStack_328);
      if (unaff_x25 == (ulong *******)0x8000000000000001) goto code_r0x00010047ddec;
code_r0x00010047de74:
      if (unaff_x26 == (ulong *******)0x1) {
code_r0x00010047de94:
        param_4 = (ulong *******)&UNK_10b22f978;
        param_5 = &UNK_10b20a590;
code_r0x00010047dea4:
        pppppppuVar17 = (ulong *******)thunk_FUN_1087e422c(1,param_4,param_5);
      }
      else {
code_r0x00010047de7c:
        unaff_x26 = (ulong *******)CONCAT71(uStack_31f,uStack_320);
        unaff_x21 = unaff_x20 + 8;
code_r0x00010047de84:
        pppppppuStack_118 = unaff_x21;
        if (*(byte *)(unaff_x20 + 4) == 0x16) goto code_r0x00010047de94;
        uStack_327 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
        ppppppuStack_330._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
        uStack_328 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
        ppppppuStack_318 = unaff_x20[7];
        uStack_320 = SUB81(unaff_x20[6],0);
        uStack_31f = (undefined7)((ulong)unaff_x20[6] >> 8);
        pppppppuVar26 = (ulong *******)0x2;
        bVar20 = *(byte *)(unaff_x20 + 4);
code_r0x00010047e28c:
        ppppppuStack_330._0_1_ = bVar20;
        pppppppuStack_100 = pppppppuVar26;
code_r0x00010047e294:
        func_0x0001013da708(&uStack_d8,&ppppppuStack_330);
        pppppppuVar21 =
             (ulong *******)CONCAT62(uStack_d8._2_6_,CONCAT11(uStack_d8._1_1_,(byte)uStack_d8));
        pppppppuVar17 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
        if (pppppppuVar21 != (ulong *******)0x8000000000000000) {
          param_3[4] = ppppppuStack_c0;
          param_3[3] = (ulong ******)CONCAT71(uStack_c7,uStack_c8);
          unaff_x19 = (ulong *******)0x6e;
          ppppppuVar33 = ppppppuStack_b8;
          ppppppuVar34 = ppppppuStack_b0;
code_r0x00010047e2bc:
          unaff_x19 = (ulong *******)((ulong)unaff_x19 & 0xffffffffffff | 0x8000000000000000);
          param_3[6] = ppppppuVar34;
          param_3[5] = ppppppuVar33;
          param_3[8] = ppppppuStack_a0;
          param_3[7] = ppppppuStack_a8;
          *param_3 = (ulong ******)((long)unaff_x19 + -0x4a);
          param_3[1] = (ulong ******)pppppppuVar21;
          param_3[2] = (ulong ******)pppppppuVar17;
          param_3[9] = ppppppuStack_98;
          param_3[10] = (ulong ******)unaff_x25;
          param_3[0xb] = unaff_x22;
          param_3[0xc] = (ulong ******)unaff_x26;
code_r0x00010047e2e4:
          pppppppuVar17 = &ppppppuStack_2e0;
          param_4 = param_3;
code_r0x00010047e2ec:
          _memcpy(pppppppuVar17,param_4,0x1c0);
          ppppppuVar28 = (ulong ******)FUN_100fbc738(&pppppppuStack_120);
          if (ppppppuVar28 == (ulong ******)0x0) {
            return;
          }
          *param_3 = (ulong ******)unaff_x19;
          param_3[1] = ppppppuVar28;
code_r0x00010047e304:
          FUN_100e44f40(&ppppppuStack_2e0);
          return;
        }
      }
code_r0x00010047deac:
      pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047deb0:
      pppppppuVar21 = (ulong *******)((ulong)pppppppuVar21 | 0x8000000000000000);
code_r0x00010047deb4:
      *param_3 = (ulong ******)pppppppuVar21;
      param_3[1] = (ulong ******)pppppppuVar17;
code_r0x00010047deb8:
      if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x22);
code_r0x00010047dec8:
      }
    }
    pppppppuVar29 = (ulong *******)(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1);
    pppppppuVar26 = unaff_x21;
    while (pppppppuVar29 = (ulong *******)((long)pppppppuVar29 + -1),
          pppppppuVar29 != (ulong *******)0x0) {
      unaff_x21 = pppppppuVar26 + 4;
      FUN_100e077ec(pppppppuVar26);
code_r0x00010047de1c:
      pppppppuVar26 = unaff_x21;
    }
    if (unaff_x23 == (ulong *******)0x0) {
      return;
    }
code_r0x00010047de24:
    _free(unaff_x20);
    return;
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
    pppppppuStack_308 = (ulong *******)param_4[2];
    ppppppuVar28 = param_4[3];
    unaff_x19 = pppppppuStack_308 + (long)ppppppuVar28 * 8;
    unaff_x21 = &ppppppuStack_330;
    pppppppuStack_310 = pppppppuStack_308;
    ppppppuStack_300 = param_4[1];
    pppppppuStack_2f8 = unaff_x19;
    ppppppuStack_330._0_1_ = 0x16;
    pppppppuStack_2f0 = (ulong *******)0x0;
    if (ppppppuVar28 != (ulong ******)0x0) {
      unaff_x25 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_d8 | 1);
      unaff_x22 = (ulong ******)((ulong)unaff_x21 | 1);
      puStack_340 = (undefined8 *)((ulong)&pppppppuStack_90 | 1);
      pppppppuStack_360 = (ulong *******)(((long)ppppppuVar28 * 0x40 - 0x40U >> 6) + 1);
      pppppppuVar29 = (ulong *******)0x8000000000000000;
      unaff_x23 = (ulong *******)0x8000000000000001;
      unaff_x28 = (ulong *******)0x8000000000000000;
      pppppppuVar26 = pppppppuStack_308;
      pppppppuStack_358 = param_3;
      do {
        param_3 = pppppppuVar26;
        unaff_x26 = param_3 + 8;
        bVar20 = *(byte *)param_3;
        pppppppuVar26 = (ulong *******)(ulong)bVar20;
        if (bVar20 == 0x16) goto code_r0x00010047ded4;
        ppppppuVar18 = param_3[3];
        pppppppuVar32 = (ulong *******)param_3[2];
        uStack_d8._0_1_ = bVar20;
code_r0x00010047d9ec:
        *(ulong *******)((long)unaff_x20 + 0x17) = ppppppuVar18;
        *(ulong ********)((long)unaff_x20 + 0xf) = pppppppuVar32;
        ppppppuVar18 = *(ulong *******)((long)param_3 + 9);
        pppppppuVar32 = *(ulong ********)((long)param_3 + 1);
code_r0x00010047d9f4:
        unaff_x20[1] = ppppppuVar18;
        *unaff_x20 = (ulong ******)pppppppuVar32;
        ppppppuStack_318 = param_3[7];
        uStack_328 = SUB81(param_3[5],0);
        uStack_327 = (undefined7)((ulong)param_3[5] >> 8);
        ppppppuStack_330._0_1_ = (byte)param_3[4];
        ppppppuStack_330._1_7_ = (undefined7)((ulong)param_3[4] >> 8);
        uStack_320 = SUB81(param_3[6],0);
        uStack_31f = (undefined7)((ulong)param_3[6] >> 8);
        pppppppuVar21 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
        piVar2 = (int *)CONCAT71(uStack_c7,uStack_c8);
        uVar19 = (uint)pppppppuVar26;
        if (uVar19 < 0xd) {
          if (uVar19 == 1) {
            iVar25 = 1;
            if (uStack_d8._1_1_ != '\x01') {
              iVar25 = 2;
            }
            iVar24 = 0;
            if (uStack_d8._1_1_ != '\0') {
              iVar24 = iVar25;
            }
          }
          else {
            if (uVar19 != 4) {
              if (uVar19 == 0xc) {
                if (ppppppuStack_c0 == (ulong ******)0x6) {
                  iVar24 = 1;
                  if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
                    iVar24 = 2;
                  }
                }
                else if (ppppppuStack_c0 == (ulong ******)0x2) {
                  iVar24 = 2;
                  if ((short)*piVar2 == 0x6469) {
                    iVar24 = 0;
                  }
                }
                else {
                  iVar24 = 2;
                }
                goto joined_r0x00010047dbac;
              }
code_r0x00010047e46c:
              pppppppuStack_2f0 = (ulong *******)((long)unaff_x25 + 1);
              pppppppuVar21 = pppppppuStack_338;
              pppppppuStack_308 = unaff_x26;
              goto code_r0x00010047e47c;
            }
            iVar25 = 1;
            if (pppppppuVar21 != (ulong *******)0x1) {
              iVar25 = 2;
            }
            iVar24 = 0;
            if (pppppppuVar21 != (ulong *******)0x0) {
              iVar24 = iVar25;
            }
          }
code_r0x00010047dc38:
          FUN_100e077ec(&uStack_d8);
        }
        else {
          if (uVar19 == 0xd) {
            if (piVar2 == (int *)0x6) {
              pppppppuVar26 = (ulong *******)(ulong)(*(uint *)pppppppuVar21 ^ 0x61726170);
              pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar21 + 4);
              pppppppuVar27 = (ulong *******)0x736d;
code_r0x00010047dc24:
              in_ZR = (int)pppppppuVar26 == 0 && (int)pppppppuVar21 == (int)pppppppuVar27;
code_r0x00010047dc30:
              iVar24 = 1;
              if (!(bool)in_ZR) {
                iVar24 = 2;
              }
            }
            else {
              if (piVar2 != (int *)0x2) goto code_r0x00010047dc04;
              iVar24 = 2;
              if (*(short *)pppppppuVar21 == 0x6469) {
                iVar24 = 0;
              }
            }
            goto code_r0x00010047dc38;
          }
          if (uVar19 != 0xe) {
            if (uVar19 != 0xf) goto code_r0x00010047e46c;
            if (piVar2 == (int *)0x6) {
              if ((((*(char *)pppppppuVar21 == 'p') && (*(char *)((long)pppppppuVar21 + 1) == 'a'))
                  && (*(char *)((long)pppppppuVar21 + 2) == 'r')) &&
                 (*(char *)((long)pppppppuVar21 + 3) == 'a')) {
                in_ZR = *(char *)((long)pppppppuVar21 + 4) == 'm';
code_r0x00010047dbec:
                if (((bool)in_ZR) && (*(char *)((long)pppppppuVar21 + 5) == 's')) {
                  iVar24 = 1;
                  goto code_r0x00010047dc38;
                }
              }
            }
            else if (((piVar2 == (int *)0x2) && (*(char *)pppppppuVar21 == 'i')) &&
                    (*(char *)((long)pppppppuVar21 + 1) == 'd')) {
              iVar24 = 0;
              goto code_r0x00010047dc38;
            }
code_r0x00010047dc04:
            iVar24 = 2;
            goto code_r0x00010047dc38;
          }
          if (ppppppuStack_c0 == (ulong ******)0x6) {
            if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                 (*(char *)((long)piVar2 + 2) != 'r')) ||
                ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
               (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x00010047db74;
            iVar24 = 1;
          }
          else if (((ppppppuStack_c0 == (ulong ******)0x2) && ((char)*piVar2 == 'i')) &&
                  (*(char *)((long)piVar2 + 1) == 'd')) {
            iVar24 = 0;
          }
          else {
code_r0x00010047db74:
            iVar24 = 2;
          }
joined_r0x00010047dbac:
          if (pppppppuVar21 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar20 = (byte)ppppppuStack_330;
        if (iVar24 == 0) {
          if (unaff_x23 != (ulong *******)0x8000000000000001) {
            pppppppuStack_2f0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_308 = unaff_x26;
            goto code_r0x00010047e380;
          }
          ppppppuStack_330._0_1_ = 0x16;
          if (bVar20 == 0x16) goto code_r0x00010047e3fc;
          ppppppuVar28 = (ulong ******)*unaff_x22;
          unaff_x20[1] = (ulong ******)unaff_x22[1];
          *unaff_x20 = ppppppuVar28;
          uVar23 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
          uStack_d8._0_1_ = bVar20;
          func_0x00010135ba2c(&pppppppuStack_90,&uStack_d8);
          in_ZR = pppppppuStack_90 == (ulong *******)0x8000000000000001;
          unaff_x23 = pppppppuStack_90;
code_r0x00010047dd0c:
          if ((bool)in_ZR) goto code_r0x00010047e0d0;
          pppppppuStack_350 = pppppppuStack_88;
          ppppppuStack_348 = ppppppuStack_80;
          pppppppuVar26 = unaff_x26;
        }
        else if (iVar24 == 1) {
          in_ZR = pppppppuVar29 == (ulong *******)0x8000000000000000;
code_r0x00010047dc68:
          bVar20 = (byte)ppppppuStack_330;
          if (!(bool)in_ZR) {
            pppppppuVar21 = (ulong *******)((long)unaff_x25 + 1);
            goto code_r0x00010047e314;
          }
          ppppppuStack_330._0_1_ = 0x16;
          if (bVar20 == 0x16) goto code_r0x00010047e434;
          pppppuVar31 = *unaff_x22;
          puStack_340[1] = unaff_x22[1];
          *puStack_340 = pppppuVar31;
          uVar23 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)puStack_340 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)puStack_340 + 0xf) = uVar23;
          pppppppuStack_90 = (ulong *******)CONCAT71(pppppppuStack_90._1_7_,bVar20);
          func_0x0001013da708(&uStack_d8,&pppppppuStack_90);
          unaff_x28 = (ulong *******)
                      CONCAT62(uStack_d8._2_6_,CONCAT11(uStack_d8._1_1_,(byte)uStack_d8));
          if (unaff_x28 == (ulong *******)0x8000000000000000) goto code_r0x00010047e07c;
          pppppppuStack_338 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
          pppppppuVar21 = (ulong *******)&uStack_d8;
          pppppppuVar32 = (ulong *******)CONCAT71(uStack_c7,uStack_c8);
          pppppppuVar26 = (ulong *******)&pppppppuStack_120;
          ppppppuVar18 = ppppppuStack_c0;
          ppppppuVar33 = ppppppuStack_b8;
          ppppppuVar34 = ppppppuStack_b0;
code_r0x00010047d9a8:
          pppppppuVar26[3] = ppppppuVar18;
          pppppppuVar26[2] = (ulong ******)pppppppuVar32;
          pppppppuVar26[5] = ppppppuVar34;
          pppppppuVar26[4] = ppppppuVar33;
          ppppppuVar18 = pppppppuVar21[7];
          pppppppuVar32 = (ulong *******)pppppppuVar21[6];
code_r0x00010047d9b0:
          pppppppuVar29 = unaff_x28;
          pppppppuVar26[7] = ppppppuVar18;
          pppppppuVar26[6] = (ulong ******)pppppppuVar32;
          pppppppuVar26[8] = pppppppuVar21[8];
          pppppppuVar26 = unaff_x26;
          unaff_x28 = pppppppuVar29;
        }
        else {
code_r0x00010047dd1c:
          pppppppuVar21 = (ulong *******)(ulong)(byte)ppppppuStack_330;
code_r0x00010047dd20:
          ppppppuStack_330._0_1_ = 0x16;
code_r0x00010047dd28:
          if ((int)pppppppuVar21 == 0x16) goto code_r0x00010047e3c8;
          ppppppuVar28 = (ulong ******)*unaff_x22;
          unaff_x20[1] = (ulong ******)unaff_x22[1];
          *unaff_x20 = ppppppuVar28;
          uVar23 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
          uStack_d8._0_1_ = (byte)pppppppuVar21;
          FUN_100e077ec(&uStack_d8);
code_r0x00010047dd4c:
          pppppppuVar26 = unaff_x26;
        }
        unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
        unaff_x26 = unaff_x19;
      } while (param_3 + 8 != unaff_x19);
      goto code_r0x00010047ded0;
    }
    pppppppuVar29 = (ulong *******)0x8000000000000000;
    pppppppuStack_120 = (ulong *******)0x8000000000000000;
  case 0x4f:
  case 0x71:
code_r0x00010047df00:
    pppppppuVar21 = (ulong *******)&UNK_108ca26b0;
code_r0x00010047df08:
    pppppppuStack_88 = (ulong *******)0x2;
    pppppppuStack_90 = pppppppuVar21;
code_r0x00010047df10:
    pppppppuVar21 = (ulong *******)&pppppppuStack_90;
    pppppppuVar26 = (ulong *******)&UNK_100c7b000;
code_r0x00010047df18:
    uStack_d8._0_1_ = (byte)pppppppuVar21;
    uStack_d8._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_d0 = SUB81(pppppppuVar26 + 0x74,0);
    uStack_cf = (undefined7)((ulong)(pppppppuVar26 + 0x74) >> 8);
    pppppppuVar17 = param_3;
code_r0x00010047df20:
    unaff_x23 = (ulong *******)0x8000000000000001;
    param_3 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010047df28:
    param_3 = (ulong *******)((long)param_3 + 0x8f7);
    param_4 = (ulong *******)&uStack_d8;
code_r0x00010047df30:
    param_3 = (ulong *******)thunk_FUN_108856088(param_3,param_4);
code_r0x00010047df34:
    pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047df38:
    *pppppppuVar17 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
    pppppppuVar17[1] = (ulong ******)param_3;
    in_ZR = pppppppuVar29 == (ulong *******)0x8000000000000000;
code_r0x00010047df48:
    if (!(bool)in_ZR) {
code_r0x00010047df4c:
      if (pppppppuVar29 != (ulong *******)0x0) {
LAB_10047df50:
        _free(pppppppuStack_338);
      }
LAB_10047df58:
      if (pppppppuStack_108 != (ulong *******)0x0) {
code_r0x00010047df60:
        _free(pppppppuStack_100);
      }
      param_3 = pppppppuStack_e8;
      if (lStack_f0 != 0) {
code_r0x00010047df74:
        _free(param_3);
      }
    }
LAB_10047df78:
    if (-0x7fffffffffffffff < (long)unaff_x23) {
code_r0x00010047df88:
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x00010047df8c:
        _free(pppppppuStack_350);
      }
    }
LAB_10047e0b0:
    param_3 = unaff_x21 + 4;
code_r0x00010047e0b4:
    FUN_100d34830(param_3);
code_r0x00010047e0b8:
    pppppppuVar21 = (ulong *******)(ulong)(byte)ppppppuStack_330;
code_r0x00010047e0bc:
    in_ZR = (int)pppppppuVar21 == 0x16;
code_r0x00010047e0c0:
    if ((bool)in_ZR) {
      return;
    }
code_r0x00010047e0c4:
    param_3 = &ppppppuStack_330;
code_r0x00010047e0c8:
    FUN_100e077ec(param_3);
code_r0x00010047e0cc:
    return;
  case 0x16:
code_r0x00010047e3fc:
    pppppppuStack_2f0 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuVar21 = pppppppuStack_338;
    pppppppuStack_308 = unaff_x26;
  case 0x17:
    param_3 = (ulong *******)&UNK_108ca1000;
    pppppppuStack_120 = unaff_x28;
    pppppppuStack_118 = pppppppuVar21;
code_r0x00010047e41c:
    param_3 = param_3 + 0x153;
    param_5 = &UNK_10b24f000;
code_r0x00010047e424:
    FUN_107c05cac(param_3,0x2c,param_5 + 0x848);
    goto code_r0x00010047e468;
  case 0x18:
    goto code_r0x00010047e3d4;
  case 0x19:
    goto code_r0x00010047e3ec;
  case 0x1a:
  case 0xb8:
    goto code_r0x00010047e398;
  case 0x1b:
    goto code_r0x00010047e41c;
  case 0x1c:
code_r0x00010047e434:
    pppppppuVar21 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_308 = unaff_x26;
  case 0x20:
    pppppppuStack_118 = pppppppuStack_338;
    pppppppuStack_2f0 = pppppppuVar21;
    pppppppuStack_120 = unaff_x28;
code_r0x00010047e44c:
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010047e468:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10047e46c);
    (*pcVar3)();
  case 0x1d:
    goto code_r0x00010047e3f4;
  case 0x1e:
    goto code_r0x00010047e44c;
  case 0x1f:
  case 0xc2:
code_r0x00010047e3c8:
    pppppppuStack_2f0 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_308 = unaff_x26;
code_r0x00010047e3d4:
    pppppppuStack_118 = pppppppuStack_338;
code_r0x00010047e3dc:
    param_3 = (ulong *******)&UNK_108ca1a98;
    param_5 = &UNK_10b24f000;
    pppppppuStack_120 = unaff_x28;
code_r0x00010047e3ec:
    param_5 = param_5 + 0x848;
    param_4 = (ulong *******)0x2c;
code_r0x00010047e3f4:
    FUN_107c05cac(param_3,param_4,param_5);
    goto code_r0x00010047e468;
  case 0x21:
  case 0xbd:
    goto code_r0x00010047e370;
  case 0x22:
    goto code_r0x00010047e3a0;
  case 0x23:
    goto code_r0x00010047e424;
  case 0x24:
  case 0xb0:
    goto FUN_10047e348;
  case 0x25:
    goto code_r0x00010047e3dc;
  case 0x26:
  case 0xb7:
    goto code_r0x00010047e340;
  case 0x28:
code_r0x00010047e47c:
    pppppppuStack_120 = unaff_x28;
    pppppppuStack_118 = pppppppuVar21;
    param_3 = (ulong *******)thunk_FUN_108855b04(&uStack_d8,&pppppppuStack_90,&UNK_10b210f80);
    unaff_x21 = &ppppppuStack_330;
    pppppppuVar17 = pppppppuStack_358;
    goto code_r0x00010047df34;
  case 0x29:
    goto code_r0x00010047d9b0;
  case 0x2a:
    goto code_r0x00010047d9f4;
  case 0x2c:
  case 0xe7:
    goto code_r0x00010047e098;
  case 0x2d:
    goto code_r0x00010047e0a8;
  case 0x2e:
  case 0xea:
    goto code_r0x00010047e070;
  case 0x2f:
    goto code_r0x00010047e088;
  case 0x30:
    goto code_r0x00010047e034;
  case 0x31:
  case 0xf4:
    goto code_r0x00010047e0b8;
  case 0x32:
  case 0xf5:
code_r0x00010047e0d0:
    pppppppuVar21 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_308 = unaff_x26;
  case 0x36:
  case 0xf9:
    pppppppuVar22 = pppppppuStack_338;
    pppppppuStack_2f0 = pppppppuVar21;
code_r0x00010047e0e0:
    pppppppuStack_118 = pppppppuVar22;
code_r0x00010047e0e4:
    pppppppuStack_120 = unaff_x28;
code_r0x00010047e0e8:
    unaff_x23 = (ulong *******)0x8000000000000001;
    param_3 = pppppppuStack_88;
code_r0x00010047e0f0:
    pppppppuVar17 = pppppppuStack_358;
code_r0x00010047e0f4:
    unaff_x21 = &ppppppuStack_330;
code_r0x00010047e0f8:
    pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047e0fc:
    pppppppuVar21 = (ulong *******)((ulong)pppppppuVar21 | 0x8000000000000000);
code_r0x00010047e100:
    *pppppppuVar17 = (ulong ******)pppppppuVar21;
    pppppppuVar17[1] = (ulong ******)param_3;
code_r0x00010047e104:
    pppppppuVar21 = (ulong *******)0x8000000000000000;
code_r0x00010047e108:
    if (pppppppuVar29 != pppppppuVar21) {
code_r0x00010047e110:
      goto code_r0x00010047df4c;
    }
    goto LAB_10047df78;
  case 0x33:
    goto code_r0x00010047e090;
  case 0x34:
    goto code_r0x00010047e0e8;
  case 0x35:
  case 0xd4:
    goto code_r0x00010047e064;
  case 0x37:
    goto code_r0x00010047e00c;
  case 0x38:
    goto code_r0x00010047e03c;
  case 0x39:
  case 0xe0:
    goto code_r0x00010047e0c0;
  case 0x3a:
    goto code_r0x00010047dfe4;
  case 0x3b:
    goto code_r0x00010047e078;
  case 0x3c:
    goto code_r0x00010047dfdc;
  case 0x42:
    goto code_r0x00010047ded8;
  case 0x43:
  case 0x70:
    goto code_r0x00010047dee8;
  case 0x44:
    goto code_r0x00010047deb0;
  case 0x45:
    goto code_r0x00010047dec8;
  case 0x46:
    goto code_r0x00010047de74;
  case 0x47:
    goto code_r0x00010047def8;
  case 0x48:
  case 0x6e:
    goto code_r0x00010047df10;
  case 0x49:
code_r0x00010047ded0:
    unaff_x25 = pppppppuStack_360;
code_r0x00010047ded4:
    pppppppuStack_308 = unaff_x26;
code_r0x00010047ded8:
    pppppppuStack_2f0 = unaff_x25;
code_r0x00010047dedc:
    pppppppuStack_118 = pppppppuStack_338;
    pppppppuStack_120 = unaff_x28;
    pppppppuVar27 = pppppppuStack_338;
code_r0x00010047dee8:
    in_ZR = unaff_x23 == (ulong *******)0x8000000000000001;
code_r0x00010047def0:
    if ((bool)in_ZR) {
code_r0x00010047def8:
      unaff_x21 = &ppppppuStack_330;
      param_3 = pppppppuStack_358;
      goto code_r0x00010047df00;
    }
    unaff_x21 = pppppppuStack_358;
    if (pppppppuVar29 != (ulong *******)0x8000000000000000) {
      pppppppuVar21 = (ulong *******)&pppppppuStack_120;
      pppppppuStack_358[4] = (ulong ******)pppppppuStack_108;
      pppppppuStack_358[3] = (ulong ******)pppppppuStack_110;
      unaff_x20 = (ulong *******)0x800000000000006e;
      pppppppuStack_358[6] = ppppppuStack_f8;
      pppppppuStack_358[5] = (ulong ******)pppppppuStack_100;
      ppppppuVar28 = ppppppuStack_348;
code_r0x00010047e00c:
      ppppppuVar18 = pppppppuVar21[6];
      unaff_x21[8] = pppppppuVar21[7];
      unaff_x21[7] = ppppppuVar18;
      pppppppuVar21 = (ulong *******)pppppppuVar21[8];
code_r0x00010047e018:
      *unaff_x21 = (ulong ******)((long)unaff_x20 + -0x4a);
      unaff_x21[1] = (ulong ******)pppppppuVar29;
code_r0x00010047e020:
      unaff_x21[2] = (ulong ******)pppppppuVar27;
      unaff_x21[9] = (ulong ******)pppppppuVar21;
      unaff_x21[10] = (ulong ******)unaff_x23;
      unaff_x21[0xb] = (ulong ******)pppppppuStack_350;
      unaff_x21[0xc] = ppppppuVar28;
      param_3 = &ppppppuStack_2e0;
code_r0x00010047e034:
      param_4 = unaff_x21;
      param_5 = (undefined *)0x1c0;
      unaff_x21 = param_4;
code_r0x00010047e03c:
      _memcpy(param_3,param_4,param_5);
      param_3 = (ulong *******)&pppppppuStack_310;
code_r0x00010047e048:
      FUN_100d34830(param_3);
      if (unaff_x19 == unaff_x26) {
        return;
      }
code_r0x00010047e054:
      pppppppuVar21 = (ulong *******)((ulong)((long)unaff_x19 - (long)unaff_x26) >> 6);
code_r0x00010047e05c:
      uStack_d8._0_1_ = (byte)unaff_x25;
      uStack_d8._1_1_ = (char)((ulong)unaff_x25 >> 8);
      uStack_d8._2_6_ = (undefined6)((ulong)unaff_x25 >> 0x10);
      param_5 = &UNK_10b23a000;
code_r0x00010047e064:
      param_5 = param_5 + 400;
code_r0x00010047e068:
      param_3 = (ulong *******)((long)pppppppuVar21 + (long)unaff_x25);
code_r0x00010047e06c:
      param_4 = (ulong *******)&uStack_d8;
code_r0x00010047e070:
      param_3 = (ulong *******)thunk_FUN_1087e422c(param_3,param_4,param_5);
code_r0x00010047e074:
      *unaff_x21 = (ulong ******)unaff_x20;
      unaff_x21[1] = (ulong ******)param_3;
code_r0x00010047e078:
      goto code_r0x00010047e304;
    }
    pppppppuVar21 = (ulong *******)&UNK_108cb9000;
code_r0x00010047dfac:
    pppppppuStack_90 = (ulong *******)((long)pppppppuVar21 + 0x606);
    pppppppuStack_88 = (ulong *******)0x6;
    pppppppuVar21 = (ulong *******)&pppppppuStack_90;
    pppppppuVar26 = (ulong *******)&UNK_100c7b000;
code_r0x00010047dfc0:
    uStack_d8._0_1_ = (byte)pppppppuVar21;
    uStack_d8._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_d0 = SUB81(pppppppuVar26 + 0x74,0);
    uStack_cf = (undefined7)((ulong)(pppppppuVar26 + 0x74) >> 8);
code_r0x00010047dfc8:
    param_3 = (ulong *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
    pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047dfdc:
    *unaff_x21 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
    unaff_x21[1] = (ulong ******)param_3;
code_r0x00010047dfe4:
    unaff_x21 = &ppppppuStack_330;
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
code_r0x00010047dff0:
      goto code_r0x00010047df8c;
    }
    goto LAB_10047e0b0;
  case 0x4a:
    goto code_r0x00010047df28;
  case 0x4b:
    goto code_r0x00010047dea4;
  case 0x4c:
    goto code_r0x00010047df18;
  case 0x4d:
    goto code_r0x00010047de4c;
  case 0x4e:
    goto code_r0x00010047de7c;
  case 0x50:
    goto code_r0x00010047de24;
  case 0x51:
    goto code_r0x00010047deb8;
  case 0x52:
    goto code_r0x00010047de1c;
  case 0x54:
    goto code_r0x00010047df74;
  case 0x55:
    goto code_r0x00010047dbec;
  case 0x56:
    goto code_r0x00010047dc30;
  case 0x58:
  case 199:
    goto code_r0x00010047e128;
  case 0x59:
  case 0xcb:
    goto code_r0x00010047e138;
  case 0x5a:
  case 0xf7:
    goto code_r0x00010047e100;
  case 0x5c:
    goto code_r0x00010047e0c4;
  case 0x5e:
    goto code_r0x00010047e160;
  case 0x61:
    goto code_r0x00010047e0f4;
  case 0x62:
  case 0xce:
    goto code_r0x00010047e168;
  case 99:
  case 0x89:
    goto code_r0x00010047e09c;
  case 100:
  case 0x8c:
    goto code_r0x00010047e0cc;
  case 0x65:
  case 0xa6:
  case 0xcc:
    goto code_r0x00010047e150;
  case 0x66:
  case 0x8b:
    goto code_r0x00010047e074;
  case 0x67:
  case 0xc9:
  case 0xff:
    goto code_r0x00010047e108;
  case 0x68:
  case 0x87:
    goto code_r0x00010047e06c;
  case 0x6b:
    goto code_r0x00010047dd28;
  case 0x6c:
    goto code_r0x00010047dd6c;
  case 0x6f:
    goto code_r0x00010047df20;
  case 0x72:
    goto code_r0x00010047deac;
  case 0x73:
    goto code_r0x00010047df30;
  case 0x74:
    goto code_r0x00010047df48;
  case 0x75:
    goto code_r0x00010047df08;
  case 0x76:
    goto code_r0x00010047df60;
  case 0x77:
    goto code_r0x00010047dedc;
  case 0x78:
    goto LAB_10047df50;
  case 0x79:
    goto code_r0x00010047de84;
  case 0x7a:
    goto code_r0x00010047deb4;
  case 0x7b:
    goto code_r0x00010047df38;
  case 0x7c:
    goto code_r0x00010047de5c;
  case 0x7d:
    goto code_r0x00010047def0;
  case 0x7e:
    goto code_r0x00010047de54;
  case 0x80:
    goto code_r0x00010047dfac;
  case 0x81:
    goto code_r0x00010047dc24;
  case 0x82:
    goto code_r0x00010047dc68;
  case 0x84:
  case 0xf6:
code_r0x00010047e07c:
    pppppppuVar21 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_308 = unaff_x26;
  case 0xfe:
    pppppppuStack_2f0 = pppppppuVar21;
code_r0x00010047e088:
    pppppppuVar21 = (ulong *******)CONCAT71(uStack_cf,uStack_d0);
code_r0x00010047e08c:
    pppppppuVar26 = (ulong *******)0x6e;
code_r0x00010047e090:
    pppppppuVar26 = (ulong *******)((ulong)pppppppuVar26 | 0x8000000000000000);
    pppppppuVar27 = pppppppuStack_358;
code_r0x00010047e098:
    *pppppppuVar27 = (ulong ******)pppppppuVar26;
    pppppppuVar27[1] = (ulong ******)pppppppuVar21;
code_r0x00010047e09c:
    unaff_x21 = &ppppppuStack_330;
    pppppppuVar21 = (ulong *******)0x2;
code_r0x00010047e0a4:
    pppppppuVar21 = (ulong *******)((ulong)pppppppuVar21 | 0x8000000000000000);
code_r0x00010047e0a8:
    in_OV = SBORROW8((long)unaff_x23,(long)pppppppuVar21);
    in_NG = (long)unaff_x23 - (long)pppppppuVar21 < 0;
code_r0x00010047e0ac:
    if (in_NG == in_OV) goto code_r0x00010047df88;
    goto LAB_10047e0b0;
  case 0x85:
  case 0xd1:
    goto code_r0x00010047e08c;
  case 0x86:
  case 0xfd:
    goto code_r0x00010047e054;
  case 0x88:
    goto code_r0x00010047e018;
  case 0x8a:
  case 0xca:
    goto code_r0x00010047e0b4;
  case 0x8d:
    goto code_r0x00010047e048;
  case 0x8e:
  case 0xd2:
    goto code_r0x00010047e0bc;
  case 0x8f:
    goto code_r0x00010047dff0;
  case 0x90:
    goto code_r0x00010047e020;
  case 0x91:
    goto code_r0x00010047e0a4;
  case 0x92:
    goto code_r0x00010047dfc8;
  case 0x93:
  case 0xd6:
    goto code_r0x00010047e05c;
  case 0x94:
    goto code_r0x00010047dfc0;
  case 0x97:
    goto code_r0x00010047dd0c;
  case 0x9b:
    goto code_r0x00010047e1bc;
  case 0x9c:
    goto code_r0x00010047e184;
  case 0xa0:
    break;
  case 0xa4:
    goto code_r0x00010047e1ec;
  case 0xa8:
  case 0xd5:
    goto code_r0x00010047e0f8;
  case 0xa9:
    goto code_r0x00010047e18c;
  case 0xaa:
  case 200:
  case 0xe5:
  case 0xf3:
    goto code_r0x00010047e0f0;
  case 0xac:
    goto code_r0x00010047e24c;
  case 0xad:
    goto code_r0x00010047dd4c;
  case 0xae:
    goto code_r0x00010047dd90;
  case 0xb1:
    goto code_r0x00010047e358;
  case 0xb2:
    goto code_r0x00010047e320;
  case 0xb3:
    goto code_r0x00010047e338;
  case 0xb4:
    goto code_r0x00010047e2e4;
  case 0xb5:
    goto code_r0x00010047e368;
  case 0xb6:
code_r0x00010047e380:
    pppppppuStack_118 = pppppppuStack_338;
  case 0xba:
    pppppppuVar22 = (ulong *******)&UNK_108ca26b0;
    pppppppuVar26 = (ulong *******)0x2;
    pppppppuStack_120 = unaff_x28;
code_r0x00010047e398:
    pppppppuVar21 = (ulong *******)&pppppppuStack_90;
    pppppppuStack_90 = pppppppuVar22;
    pppppppuStack_88 = pppppppuVar26;
code_r0x00010047e3a0:
    uStack_d8._0_1_ = (byte)pppppppuVar21;
    uStack_d8._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_d0 = 0xa0;
    uStack_cf = 0x100c7b3;
    param_3 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
    unaff_x21 = &ppppppuStack_330;
    pppppppuVar17 = pppppppuStack_358;
    goto code_r0x00010047df34;
  case 0xb9:
code_r0x00010047e314:
    pppppppuVar22 = pppppppuStack_338;
    pppppppuStack_308 = unaff_x26;
    pppppppuStack_2f0 = pppppppuVar21;
code_r0x00010047e320:
    pppppppuStack_120 = unaff_x28;
    pppppppuStack_118 = pppppppuVar22;
code_r0x00010047e328:
    pppppppuStack_90 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_88 = (ulong *******)0x6;
code_r0x00010047e338:
    pppppppuVar21 = (ulong *******)&pppppppuStack_90;
    pppppppuVar26 = (ulong *******)&UNK_100c7b000;
code_r0x00010047e340:
    uStack_d8._0_1_ = (byte)pppppppuVar21;
    uStack_d8._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
    uStack_d8._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
    uStack_d0 = SUB81(pppppppuVar26 + 0x74,0);
    uStack_cf = (undefined7)((ulong)(pppppppuVar26 + 0x74) >> 8);
FUN_10047e348:
    param_3 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d8);
code_r0x00010047e358:
    unaff_x21 = &ppppppuStack_330;
    pppppppuVar21 = (ulong *******)0x800000000000006e;
    pppppppuVar26 = pppppppuStack_358;
code_r0x00010047e368:
    *pppppppuVar26 = (ulong ******)pppppppuVar21;
    pppppppuVar26[1] = (ulong ******)param_3;
    if (pppppppuVar29 != (ulong *******)0x0) goto LAB_10047df50;
code_r0x00010047e370:
    goto LAB_10047df58;
  case 0xbb:
    goto code_r0x00010047e2bc;
  case 0xbc:
    goto code_r0x00010047e2ec;
  case 0xbe:
    goto code_r0x00010047e294;
  case 0xbf:
    goto code_r0x00010047e328;
  case 0xc0:
    goto code_r0x00010047e28c;
  case 0xc3:
    goto code_r0x00010047d9a8;
  case 0xc4:
    goto code_r0x00010047d9ec;
  case 0xcd:
    goto code_r0x00010047e110;
  case 0xcf:
    goto code_r0x00010047e0e4;
  case 0xd0:
    goto code_r0x00010047e158;
  case 0xd3:
    goto code_r0x00010047e140;
  case 0xd9:
    goto code_r0x00010047dd20;
  case 0xda:
    goto code_r0x00010047dd64;
  case 0xdc:
    goto code_r0x00010047e124;
  case 0xdd:
    goto code_r0x00010047e134;
  case 0xde:
    goto code_r0x00010047e0fc;
  case 0xe2:
    goto code_r0x00010047e15c;
  case 0xe6:
    goto code_r0x00010047e164;
  case 0xe8:
    goto code_r0x00010047e0c8;
  case 0xe9:
    goto code_r0x00010047e14c;
  case 0xeb:
    goto code_r0x00010047e104;
  case 0xec:
    goto code_r0x00010047e068;
  case 0xef:
    goto code_r0x00010047dd1c;
  case 0xf0:
    goto code_r0x00010047dd60;
  case 0xf2:
    goto code_r0x00010047e0e0;
  case 0xfa:
    goto code_r0x00010047e130;
  case 0xfb:
    goto code_r0x00010047e0ac;
  }
  bVar20 = 1;
  pppppppuStack_2d8 = pppppppuVar21;
code_r0x00010047e1ec:
code_r0x00010047e22c:
  ppppppuStack_2e0 = (ulong ******)CONCAT71(ppppppuStack_2e0._1_7_,bVar20);
code_r0x00010047e230:
  pppppppuVar17 = (ulong *******)FUN_107c05dcc(&ppppppuStack_2e0,&pppppppuStack_90,&UNK_10b219370);
  pppppppuVar21 = (ulong *******)0x800000000000006e;
code_r0x00010047e24c:
  *param_3 = (ulong ******)pppppppuVar21;
  param_3[1] = (ulong ******)pppppppuVar17;
  return;
}

