
/* WARNING: Type propagation algorithm not settling */

void FUN_1004a98dc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  ulong *******param_4,ulong *******param_5,undefined *param_6)

{
  byte bVar1;
  code *pcVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  undefined1 in_ZR;
  ulong ******ppppppuVar13;
  ulong *******pppppppuVar14;
  ulong ******ppppppuVar15;
  uint uVar16;
  byte bVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  undefined8 uVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  ulong *******pppppppuVar23;
  ulong *******unaff_x19;
  ulong *******pppppppuVar24;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  long lVar25;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  ulong *******unaff_x26;
  uint unaff_w27;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar26;
  undefined8 unaff_x30;
  ulong *******pppppppuVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  byte abStack_330 [80];
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong ******ppppppuStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong *******pppppppuStack_278;
  ulong *******pppppppuStack_270;
  ulong *******pppppppuStack_268;
  long lStack_260;
  ulong ******ppppppuStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
  ulong ******ppppppuStack_238;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  ulong ******ppppppuStack_110;
  ulong ******ppppppuStack_108;
  undefined8 uStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  undefined8 uStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  long lStack_78;
  ulong ******ppppppuStack_69;
  
  pppppppuVar31 = param_3._8_8_;
  pppppppuVar30 = param_3._0_8_;
  ppppppuVar13 = param_2._8_8_;
  pppppppuVar29 = param_2._0_8_;
  pppppppuVar28 = param_1._8_8_;
  pppppppuVar27 = param_1._0_8_;
  puVar26 = &stack0xfffffffffffffff0;
  pppppppuVar7 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar4 = (ulong *******)&pppppppuStack_2e0;
  bVar17 = *(byte *)param_5;
  pppppppuVar18 = (ulong *******)(ulong)bVar17;
  pppppppuVar21 = (ulong *******)&UNK_108c9a258;
  pppppppuVar22 =
       (ulong *******)
       (&UNK_1004a991c + (long)(ulong)*(ushort *)(&UNK_108c9a258 + (long)pppppppuVar18 * 2) * 4);
  pppppppuVar8 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar9 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar10 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar11 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar12 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar5 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar6 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar3 = (ulong *******)&pppppppuStack_2e0;
  pppppppuVar14 = param_4;
  pppppppuVar19 = pppppppuVar18;
  pppppppuVar23 = (ulong *******)(ulong)*(ushort *)(&UNK_108c9a258 + (long)pppppppuVar18 * 2);
  pppppppuVar24 = unaff_x19;
  switch(bVar17) {
  case 0:
  case 0x31:
    bVar17 = *(byte *)((long)param_5 + 1);
  case 0x91:
  case 0xa3:
  case 0xbd:
  case 0xcc:
    ppppppuStack_250 = (ulong ******)((ulong)CONCAT61(ppppppuStack_250._2_6_,bVar17) << 8);
code_r0x0001004aa15c:
    ppppppuStack_250 = (ulong ******)((ulong)ppppppuStack_250 & 0xffffffffffffff00);
code_r0x0001004aa160:
    goto code_r0x0001004aa1b4;
  case 1:
  case 0x50:
  case 0x79:
  case 0x9c:
    pppppppuVar18 = (ulong *******)(ulong)*(byte *)((long)param_5 + 1);
  case 0x8a:
  case 0xb6:
code_r0x0001004aa168:
    pppppppuStack_248 = pppppppuVar18;
code_r0x0001004aa16c:
    bVar17 = 1;
code_r0x0001004aa170:
    break;
  case 2:
  case 0x33:
    pppppppuVar18 = (ulong *******)(ulong)*(ushort *)((long)param_5 + 2);
  case 0x84:
  case 0xa6:
  case 0xb0:
  case 199:
    goto code_r0x0001004aa168;
  case 3:
  case 0x2d:
    pppppppuVar18 = (ulong *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0xd3:
    goto code_r0x0001004aa168;
  case 4:
    pppppppuVar18 = (ulong *******)param_5[1];
    goto code_r0x0001004aa168;
  case 5:
  case 0x36:
    pppppppuStack_248 = (ulong *******)(long)(char)*(byte *)((long)param_5 + 1);
  case 0x9f:
  case 0xec:
code_r0x0001004aa1ac:
    bVar17 = 2;
    break;
  case 6:
  case 0x4d:
  case 0x72:
  case 0x9a:
    pppppppuStack_248 = (ulong *******)(long)*(short *)((long)param_5 + 2);
    goto code_r0x0001004aa1ac;
  case 7:
    pppppppuVar18 = (ulong *******)(long)*(int *)((long)param_5 + 4);
  case 0x89:
  case 0xb5:
    pppppppuStack_248 = pppppppuVar18;
    goto code_r0x0001004aa1ac;
  case 8:
    pppppppuStack_248 = (ulong *******)param_5[1];
    goto code_r0x0001004aa1ac;
  case 9:
  case 0x87:
  case 0xb3:
  case 0xc6:
    pppppppuVar27 = (ulong *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0x2f:
    pppppppuVar27 = (ulong *******)(double)SUB84(pppppppuVar27,0);
code_r0x0001004aa128:
  case 0xf6:
code_r0x0001004aa198:
    pppppppuStack_248 = pppppppuVar27;
code_r0x0001004aa19c:
    bVar17 = 3;
code_r0x0001004aa1a0:
    break;
  case 10:
  case 0x7a:
    pppppppuVar27 = (ulong *******)param_5[1];
    goto code_r0x0001004aa198;
  case 0xb:
    param_5 = (ulong *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0x88:
  case 0xb4:
code_r0x0001004aa0d0:
    pppppppuVar5 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x0001004aa0d4:
    puVar26 = *(undefined1 **)((long)pppppppuVar5 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar5 + 0x58);
    pppppppuVar6 = pppppppuVar5;
code_r0x0001004aa0d8:
    unaff_x20 = *(ulong ********)((long)pppppppuVar6 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar6 + 0x48);
    pppppppuVar7 = (ulong *******)((long)pppppppuVar6 + 0x60);
code_r0x0001004aa0ec:
    *(ulong ********)((long)pppppppuVar7 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar7 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar7 + -0x10) = puVar26;
    *(undefined8 *)((long)pppppppuVar7 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar7 + -0x44) = 0;
    uVar16 = (uint)param_5;
    if (uVar16 < 0x80) {
      *(byte *)((long)pppppppuVar7 + -0x44) = (byte)param_5;
      uVar20 = 1;
    }
    else {
      bVar17 = (byte)param_5 & 0x3f | 0x80;
      if (uVar16 < 0x800) {
        *(byte *)((long)pppppppuVar7 + -0x44) = (byte)(uVar16 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar7 + -0x43) = bVar17;
        uVar20 = 2;
      }
      else {
        bVar1 = (byte)(uVar16 >> 6) & 0x3f | 0x80;
        if (uVar16 < 0x10000) {
          *(byte *)((long)pppppppuVar7 + -0x44) = (byte)(uVar16 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar7 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar7 + -0x42) = bVar17;
          uVar20 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar7 + -0x44) = (byte)(uVar16 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar7 + -0x43) = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar7 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar7 + -0x41) = bVar17;
          uVar20 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar7 + -0x38) = (undefined1 *)((long)pppppppuVar7 + -0x44);
    *(undefined8 *)((long)pppppppuVar7 + -0x30) = uVar20;
    *(undefined1 *)((long)pppppppuVar7 + -0x40) = 5;
    ppppppuVar13 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar7 + -0x40),
                                       (undefined1 *)((long)pppppppuVar7 + -0x21),&UNK_10b21c0f0);
    *param_4 = (ulong ******)0x1d;
    param_4[1] = ppppppuVar13;
    return;
  case 0xc:
  case 200:
    param_5 = param_5 + 1;
  case 0x8d:
  case 0xb9:
code_r0x0001004aa100:
    pppppppuVar8 = (ulong *******)&stack0xffffffffffffffa0;
    puVar26 = unaff_x29;
code_r0x0001004aa108:
    unaff_x20 = *(ulong ********)((long)pppppppuVar8 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar8 + 0x48);
    pppppppuVar9 = pppppppuVar8;
code_r0x0001004aa10c:
    unaff_x22 = *(ulong ********)((long)pppppppuVar9 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar9 + 0x38);
    pppppppuVar10 = pppppppuVar9;
code_r0x0001004aa110:
    pppppppuVar11 = pppppppuVar10;
code_r0x0001004aa114:
    pppppppuVar12 = pppppppuVar11;
code_r0x0001004aa118:
    *(ulong ********)((long)pppppppuVar12 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar12 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar12 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar12 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar12 + 0x50) = puVar26;
    *(undefined8 *)((long)pppppppuVar12 + 0x58) = unaff_x30;
    ppppppuVar13 = param_5[1];
    ppppppuVar15 = param_5[2];
    *(ulong *******)((long)pppppppuVar12 + 0x18) = ppppppuVar13;
    *(ulong *******)((long)pppppppuVar12 + 0x20) = ppppppuVar15;
    *(undefined1 *)((long)pppppppuVar12 + 0x10) = 5;
    ppppppuVar15 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar12 + 0x10),
                                       (undefined1 *)((long)pppppppuVar12 + 0x2f),&UNK_10b21c0f0);
    *param_4 = (ulong ******)0x1d;
    param_4[1] = ppppppuVar15;
    if (*param_5 != (ulong ******)0x0) {
      _free(ppppppuVar13);
    }
    return;
  case 0xd:
  case 0x9d:
    pppppppuVar18 = (ulong *******)param_5[1];
    pppppppuVar21 = (ulong *******)param_5[2];
  case 0x8c:
  case 0xb8:
    pppppppuStack_248 = pppppppuVar18;
    pppppppuStack_240 = pppppppuVar21;
code_r0x0001004aa184:
    bVar17 = 5;
    break;
  case 0xe:
    param_5 = param_5 + 1;
  case 0x8f:
  case 0xbb:
code_r0x0001004aa0a8:
    pppppppuVar3 = (ulong *******)&stack0xffffffffffffffa0;
    puVar26 = unaff_x29;
code_r0x0001004aa0bc:
    pppppppuVar4 = (ulong *******)((long)pppppppuVar3 + 0x60);
code_r0x0001004aa0c4:
    *(ulong ********)((long)pppppppuVar4 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar4 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar4 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar4 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar4 + -0x10) = puVar26;
    *(undefined8 *)((long)pppppppuVar4 + -8) = unaff_x30;
    ppppppuVar13 = param_5[1];
    ppppppuVar15 = param_5[2];
    *(ulong *******)((long)pppppppuVar4 + -0x48) = ppppppuVar13;
    *(ulong *******)((long)pppppppuVar4 + -0x40) = ppppppuVar15;
    *(undefined1 *)((long)pppppppuVar4 + -0x50) = 6;
    ppppppuVar15 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar4 + -0x50),
                                       (undefined1 *)((long)pppppppuVar4 + -0x31),&UNK_10b21c0f0);
    *param_4 = (ulong ******)0x1d;
    param_4[1] = ppppppuVar15;
    if (*param_5 != (ulong ******)0x0) {
      _free(ppppppuVar13);
    }
    return;
  case 0xf:
  case 0x2c:
  case 0x7e:
    pppppppuStack_248 = (ulong *******)param_5[1];
    pppppppuStack_240 = (ulong *******)param_5[2];
  case 0x7c:
    bVar17 = 6;
code_r0x0001004aa140:
    break;
  case 0x10:
    bVar17 = 8;
    break;
  default:
    unaff_x20 = (ulong *******)param_5[1];
    pppppppuStack_248 = (ulong *******)unaff_x20[1];
    ppppppuStack_250 = *unaff_x20;
  case 0x21:
    pppppppuVar14 = unaff_x20;
    ppppppuStack_238 = pppppppuVar14[3];
    pppppppuStack_240 = (ulong *******)pppppppuVar14[2];
    thunk_FUN_10880074c(param_4,&ppppppuStack_250);
code_r0x0001004a9e28:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar14);
    return;
  case 0x12:
  case 0xf4:
    bVar17 = 7;
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_5[1];
    pppppppuStack_248 = (ulong *******)unaff_x20[1];
    ppppppuStack_250 = *unaff_x20;
  case 0xf0:
    pppppppuVar14 = unaff_x20;
    ppppppuStack_238 = pppppppuVar14[3];
    pppppppuStack_240 = (ulong *******)pppppppuVar14[2];
    thunk_FUN_1088263dc(param_4,&ppppppuStack_250);
    goto code_r0x0001004a9e28;
  case 0x14:
    pppppppuStack_128 = (ulong *******)param_5[1];
    unaff_x23 = (ulong *******)param_5[2];
    ppppppuVar13 = param_5[3];
    pppppppuVar21 = unaff_x23 + (long)ppppppuVar13 * 4;
    pppppppuStack_118 = (ulong *******)0x0;
    pppppppuVar14 = unaff_x23;
    pppppppuStack_138 = unaff_x23;
    pppppppuStack_120 = pppppppuVar21;
    if (ppppppuVar13 != (ulong ******)0x0) {
      pppppppuVar14 = unaff_x23 + 4;
      if (*(byte *)unaff_x23 == 0x16) goto code_r0x0001004a9f10;
      uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 9);
      ppppppuStack_2a0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x23 + 1);
      uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 1) >> 0x38);
      pppppppuStack_288 = (ulong *******)unaff_x23[3];
      uStack_290 = SUB81(unaff_x23[2],0);
      uStack_28f = (undefined7)((ulong)unaff_x23[2] >> 8);
      pppppppuStack_118 = (ulong *******)0x1;
      ppppppuStack_2a0._0_1_ = *(byte *)unaff_x23;
      pppppppuStack_130 = pppppppuVar14;
      FUN_1004b62d4(&pppppppuStack_c0,&ppppppuStack_2a0);
      if (pppppppuStack_c0 == (ulong *******)0x8000000000000000) goto code_r0x0001004a9f2c;
      unaff_x20 = pppppppuStack_b8;
      unaff_x22 = pppppppuStack_c0;
      if (ppppppuVar13 != (ulong ******)0x1) {
        pppppppuStack_130 = unaff_x23 + 8;
        unaff_x19 = pppppppuStack_b0;
        bVar17 = *(byte *)(unaff_x23 + 4);
        if (*(byte *)(unaff_x23 + 4) != 0x16) goto code_r0x0001004aa378;
      }
      unaff_x21 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22ec18,&UNK_10b20a590);
      goto code_r0x0001004a9ed8;
    }
code_r0x0001004a9f10:
    pppppppuStack_130 = pppppppuVar14;
    pppppppuStack_b8 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22ec18,&UNK_10b20a590);
code_r0x0001004a9f2c:
    *param_4 = (ulong ******)0x1d;
    param_4[1] = (ulong ******)pppppppuStack_b8;
    goto code_r0x0001004a9f34;
  case 0x15:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    pppppppuVar21 = (ulong *******)param_5[1];
    pppppppuVar18 = (ulong *******)param_5[2];
  case 0x1a:
    pppppppuVar22 = (ulong *******)param_5[3];
    unaff_x21 = pppppppuVar18 + (long)pppppppuVar22 * 8;
code_r0x0001004a994c:
    unaff_x20 = &ppppppuStack_2a0;
    pppppppuStack_280 = pppppppuVar18;
    pppppppuStack_270 = pppppppuVar21;
    pppppppuStack_268 = unaff_x21;
    ppppppuStack_2a0._0_1_ = 0x16;
    lStack_260 = 0;
    pppppppuVar21 = (ulong *******)0x8000000000000001;
    pppppppuStack_278 = pppppppuVar18;
code_r0x0001004a9968:
    pppppppuStack_138 = pppppppuVar21;
    if (pppppppuVar22 == (ulong *******)0x0) {
      pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
      pppppppuVar21 = (ulong *******)0x8000000000000001;
code_r0x0001004a9f90:
      uStack_90 = (ulong *******)&UNK_108ca2143;
      pppppppuStack_88 = (ulong *******)0x9;
      uStack_100 = (ulong *******)&uStack_90;
      pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
      unaff_x26 = (ulong *******)0x0;
      ppppppuVar13 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
      *param_4 = (ulong ******)0x1d;
      param_4[1] = ppppppuVar13;
      unaff_x19 = (ulong *******)0x1;
      pppppppuVar18 = pppppppuStack_2a8;
      pppppppuVar14 = unaff_x22;
      if (pppppppuVar21 == (ulong *******)0x8000000000000001) goto code_r0x0001004aa308;
      goto joined_r0x0001004aa574;
    }
    unaff_x23 = (ulong *******)((ulong)&uStack_90 | 1);
    unaff_x22 = (ulong *******)((ulong)unaff_x20 | 1);
    unaff_x20 = (ulong *******)((ulong)&uStack_100 | 1);
    pppppppuVar22 = (ulong *******)0x8000000000000001;
    unaff_x26 = (ulong *******)0x8000000000000000;
    pppppppuStack_2e0 = param_4;
code_r0x0001004a9990:
    pppppppuStack_2b0 = pppppppuVar22;
    pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
code_r0x0001004a9998:
    unaff_x28 = (ulong *******)0x8000000000000001;
    pppppppuVar24 = pppppppuVar18;
code_r0x0001004a99a0:
    do {
      unaff_x19 = pppppppuVar24 + 8;
      unaff_w27 = (uint)*(byte *)pppppppuVar24;
      pppppppuStack_278 = unaff_x19;
      if (*(byte *)pppppppuVar24 == 0x16) break;
      lStack_260 = lStack_260 + 1;
code_r0x0001004a99f0:
      uStack_90 = (ulong *******)CONCAT71(uStack_90._1_7_,(char)unaff_w27);
code_r0x0001004a99f4:
      pppppppuVar28 = *(ulong ********)((long)pppppppuVar18 + 9);
      pppppppuVar27 = *(ulong ********)((long)pppppppuVar18 + 1);
      ppppppuVar13 = pppppppuVar18[3];
      pppppppuVar29 = (ulong *******)pppppppuVar18[2];
      pppppppuVar31 = (ulong *******)pppppppuVar18[5];
      pppppppuVar30 = (ulong *******)pppppppuVar18[4];
code_r0x0001004a99fc:
      unaff_x23[1] = (ulong ******)pppppppuVar28;
      *unaff_x23 = (ulong ******)pppppppuVar27;
      *(ulong *******)((long)unaff_x23 + 0x17) = ppppppuVar13;
      *(ulong ********)((long)unaff_x23 + 0xf) = pppppppuVar29;
      pppppppuStack_e8 = (ulong *******)pppppppuVar18[7];
      pppppppuStack_f0 = (ulong *******)pppppppuVar18[6];
      uStack_100 = pppppppuVar30;
      pppppppuStack_f8 = pppppppuVar31;
      if ((byte)ppppppuStack_2a0 != 0x16) {
code_r0x0001004a9a18:
        FUN_100e077ec(&ppppppuStack_2a0);
      }
code_r0x0001004a9a20:
      uStack_298 = SUB81(pppppppuStack_f8,0);
      uStack_297 = (undefined7)((ulong)pppppppuStack_f8 >> 8);
      ppppppuStack_2a0._0_1_ = (byte)uStack_100;
      ppppppuStack_2a0._1_7_ = (undefined7)((ulong)uStack_100 >> 8);
      pppppppuStack_288 = pppppppuStack_e8;
      uStack_290 = SUB81(pppppppuStack_f0,0);
      uStack_28f = (undefined7)((ulong)pppppppuStack_f0 >> 8);
      unaff_x24 = pppppppuStack_88;
      param_4 = pppppppuStack_80;
      if ((int)unaff_w27 < 0xd) {
        if (unaff_w27 == 1) {
          bVar17 = uStack_90._1_1_;
          if (2 < uStack_90._1_1_) {
            bVar17 = 3;
          }
          goto code_r0x0001004a9c40;
        }
        if (unaff_w27 == 4) {
          pppppppuVar21 = pppppppuStack_88;
          if ((ulong *******)0x2 < pppppppuStack_88) {
            pppppppuVar21 = (ulong *******)0x3;
          }
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,(char)pppppppuVar21);
          goto code_r0x0001004a9c44;
        }
        if (unaff_w27 != 0xc) {
code_r0x0001004a9dcc:
          pppppppuStack_f8 =
               (ulong *******)thunk_FUN_108855b04(&uStack_90,&ppppppuStack_69,&UNK_10b20eba0);
code_r0x0001004a9de4:
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,1);
          goto code_r0x0001004a9c50;
        }
        if (lStack_78 == 0x10) {
          if (*pppppppuStack_80 != (ulong ******)0x617461646174656d ||
              pppppppuStack_80[1] != (ulong ******)0x64616f6c7961705f) goto code_r0x0001004a9bc0;
          uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x200);
code_r0x0001004a9db8:
          uStack_100 = (ulong *******)((ulong)uStack_100 & 0xffffffffffffff00);
        }
        else {
          if (lStack_78 == 10) {
            if (*pppppppuStack_80 == (ulong ******)0x61705f746e656761 &&
                *(short *)(pppppppuStack_80 + 1) == 0x6874) {
              uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x100);
              goto joined_r0x0001004a9b88;
            }
          }
          else if (lStack_78 == 9) {
code_r0x0001004a9a68:
            if (*param_4 == (ulong ******)0x695f646165726874 && *(byte *)(param_4 + 1) == 100) {
              uStack_100 = (ulong *******)((ulong)uStack_100 & 0xffffffffffff0000);
              goto joined_r0x0001004a9b88;
            }
          }
code_r0x0001004a9bc0:
          uStack_100 = (ulong *******)CONCAT62(uStack_100._2_6_,0x300);
        }
joined_r0x0001004a9b88:
        if (unaff_x24 != (ulong *******)0x0) {
          _free(param_4);
        }
      }
      else {
code_r0x0001004a9aa4:
        if (unaff_w27 == 0xd) {
          if (param_4 == (ulong *******)0x10) {
            if (*unaff_x24 != (ulong ******)0x617461646174656d ||
                unaff_x24[1] != (ulong ******)0x64616f6c7961705f) goto code_r0x0001004a9c3c;
            bVar17 = 2;
          }
          else if (param_4 == (ulong *******)0xa) {
            pppppppuVar21 = (ulong *******)(ulong)*(ushort *)(unaff_x24 + 1);
            in_ZR = *unaff_x24 == (ulong ******)0x61705f746e656761;
code_r0x0001004a9bf8:
            if (!(bool)in_ZR || (int)pppppppuVar21 != 0x6874) goto code_r0x0001004a9c3c;
            bVar17 = 1;
          }
          else if ((param_4 == (ulong *******)0x9) &&
                  (*unaff_x24 == (ulong ******)0x695f646165726874 && *(byte *)(unaff_x24 + 1) == 100
                  )) {
            bVar17 = 0;
          }
          else {
code_r0x0001004a9c3c:
            bVar17 = 3;
          }
code_r0x0001004a9c40:
          uStack_100._1_7_ = CONCAT61(uStack_100._2_6_,bVar17);
code_r0x0001004a9c44:
          uStack_100 = (ulong *******)((ulong)uStack_100._1_7_ << 8);
        }
        else {
          if (unaff_w27 == 0xe) {
code_r0x0001004a9ae4:
            FUN_100b49f84(&uStack_100,param_4);
            goto joined_r0x0001004a9b88;
          }
          if (unaff_w27 != 0xf) goto code_r0x0001004a9dcc;
          FUN_100b49f84(&uStack_100,unaff_x24,param_4);
        }
        FUN_100e077ec(&uStack_90);
      }
code_r0x0001004a9c50:
      bVar17 = (byte)ppppppuStack_2a0;
      pppppppuVar21 = pppppppuStack_2b0;
      pppppppuVar14 = pppppppuStack_2b8;
      if (((ulong)uStack_100 & 1) != 0) {
        pppppppuStack_130 = pppppppuStack_2b8;
        *pppppppuStack_2e0 = (ulong ******)0x1d;
        pppppppuStack_2e0[1] = (ulong ******)pppppppuStack_f8;
        unaff_x19 = (ulong *******)0x1;
        unaff_x20 = &ppppppuStack_2a0;
        pppppppuStack_138 = unaff_x28;
        if (pppppppuStack_2b0 == (ulong *******)0x8000000000000001) goto code_r0x0001004aa00c;
        goto joined_r0x0001004aa574;
      }
      if (uStack_100._1_1_ < 2) {
        if (uStack_100._1_1_ == 0) {
          if (unaff_x26 != (ulong *******)0x8000000000000000) {
            pppppppuStack_130 = pppppppuStack_2b8;
            uStack_90 = (ulong *******)&UNK_108ca2143;
            pppppppuStack_88 = (ulong *******)0x9;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = unaff_x28;
            ppppppuVar13 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
LAB_1004aa504:
            *pppppppuStack_2e0 = (ulong ******)0x1d;
            pppppppuStack_2e0[1] = ppppppuVar13;
            unaff_x19 = (ulong *******)0x1;
            unaff_x22 = pppppppuVar14;
            unaff_x21 = pppppppuVar21;
            goto joined_r0x0001004aa518;
          }
          ppppppuStack_2a0._0_1_ = 0x16;
          if (bVar17 == 0x16) {
            pppppppuStack_130 = pppppppuStack_2b8;
            pppppppuStack_138 = unaff_x28;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004aa5cc:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004aa5d0);
            (*pcVar2)();
          }
          ppppppuVar13 = *unaff_x22;
          unaff_x20[1] = unaff_x22[1];
          *unaff_x20 = ppppppuVar13;
          uVar20 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar20;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar17);
          FUN_1004b62d4(&uStack_90,&uStack_100);
          if (uStack_90 == (ulong *******)0x8000000000000000) {
            pppppppuStack_130 = pppppppuStack_2b8;
            pppppppuVar18 = pppppppuStack_88;
            unaff_x21 = pppppppuStack_2b0;
            unaff_x22 = pppppppuStack_2b8;
            pppppppuStack_138 = unaff_x28;
            goto code_r0x0001004aa2b8;
          }
          pppppppuStack_2c0 = pppppppuStack_88;
          pppppppuStack_2d0 = pppppppuStack_80;
          pppppppuVar18 = unaff_x19;
          unaff_x26 = uStack_90;
        }
        else {
          if (pppppppuStack_2a8 != (ulong *******)0x8000000000000000) {
            pppppppuStack_130 = pppppppuStack_2b8;
            uStack_90 = (ulong *******)&UNK_108cafcd1;
            pppppppuStack_88 = (ulong *******)0xa;
            uStack_100 = (ulong *******)&uStack_90;
            pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_138 = unaff_x28;
            ppppppuVar13 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
            goto LAB_1004aa504;
          }
          ppppppuStack_2a0._0_1_ = 0x16;
          in_ZR = bVar17 == 0x16;
code_r0x0001004a9d2c:
          if ((bool)in_ZR) {
            pppppppuStack_130 = pppppppuStack_2b8;
            pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
            pppppppuStack_138 = unaff_x28;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004aa5cc;
          }
          ppppppuVar13 = *unaff_x22;
          unaff_x20[1] = unaff_x22[1];
          *unaff_x20 = ppppppuVar13;
code_r0x0001004a9d38:
          uVar20 = *(undefined8 *)((long)unaff_x22 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar20;
          uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar17);
          pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_90,&uStack_100);
          pppppppuVar21 = (ulong *******)0x8000000000000000;
          pppppppuVar18 = uStack_90;
code_r0x0001004a9d60:
          in_ZR = pppppppuVar18 == pppppppuVar21;
code_r0x0001004a9d64:
          if ((bool)in_ZR) goto code_r0x0001004aa274;
code_r0x0001004a9d68:
          pppppppuStack_2a8 = pppppppuVar18;
          pppppppuVar19 = pppppppuStack_80;
          pppppppuVar21 = pppppppuStack_88;
code_r0x0001004a9d70:
          pppppppuVar18 = unaff_x19;
          pppppppuStack_2d8 = pppppppuVar19;
          pppppppuStack_2c8 = pppppppuVar21;
        }
      }
      else if (uStack_100._1_1_ == 2) {
        if (pppppppuStack_2b0 != (ulong *******)0x8000000000000001) {
          pppppppuStack_130 = pppppppuStack_2b8;
          uStack_90 = (ulong *******)&UNK_108cdd030;
          pppppppuStack_88 = (ulong *******)0x10;
          uStack_100 = (ulong *******)&uStack_90;
          pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
          pppppppuStack_138 = unaff_x28;
          ppppppuVar13 = (ulong ******)
                         thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100);
          unaff_x20 = &ppppppuStack_2a0;
          *pppppppuStack_2e0 = (ulong ******)0x1d;
          pppppppuStack_2e0[1] = ppppppuVar13;
          unaff_x19 = (ulong *******)0x1;
          goto joined_r0x0001004aa574;
        }
        pppppppuStack_2b0 = (ulong *******)0x8000000000000001;
        func_0x000100f1ec38(&uStack_100,&ppppppuStack_2a0);
        pppppppuStack_2b8 = pppppppuStack_f8;
        if (uStack_100 == (ulong *******)0x8000000000000001) goto code_r0x0001004aa258;
        pppppppuVar18 = (ulong *******)&uStack_100;
        unaff_x28 = uStack_100;
code_r0x0001004a99a8:
        pppppppuVar28 = (ulong *******)pppppppuVar18[3];
        pppppppuVar27 = (ulong *******)pppppppuVar18[2];
        ppppppuVar13 = pppppppuVar18[5];
        pppppppuVar29 = (ulong *******)pppppppuVar18[4];
code_r0x0001004a99ac:
        pppppppuStack_120 = pppppppuVar28;
        pppppppuStack_128 = pppppppuVar27;
        ppppppuStack_110 = ppppppuVar13;
        pppppppuStack_118 = pppppppuVar29;
        ppppppuStack_108 = pppppppuVar18[6];
code_r0x0001004a99bc:
        pppppppuStack_2b0 = unaff_x28;
        pppppppuVar18 = pppppppuStack_278;
        unaff_x21 = pppppppuStack_268;
      }
      else {
code_r0x0001004a9d7c:
        bVar17 = (byte)ppppppuStack_2a0;
        ppppppuStack_2a0._0_1_ = 0x16;
        if (bVar17 == 0x16) {
          pppppppuStack_130 = pppppppuStack_2b8;
          pppppppuStack_138 = unaff_x28;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004aa5cc;
        }
        ppppppuVar13 = *unaff_x22;
        unaff_x20[1] = unaff_x22[1];
        *unaff_x20 = ppppppuVar13;
        uVar20 = *(undefined8 *)((long)unaff_x22 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x22 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar20;
        uStack_100 = (ulong *******)CONCAT71(uStack_100._1_7_,bVar17);
code_r0x0001004a9da4:
        param_4 = (ulong *******)&uStack_100;
code_r0x0001004a9da8:
        FUN_100e077ec(param_4);
code_r0x0001004a9dac:
        pppppppuVar18 = unaff_x19;
      }
      in_ZR = pppppppuVar18 == unaff_x21;
      pppppppuVar24 = pppppppuVar18;
code_r0x0001004a99d0:
    } while (!(bool)in_ZR);
    pppppppuStack_138 = unaff_x28;
    pppppppuStack_130 = pppppppuStack_2b8;
    unaff_x22 = pppppppuStack_2b8;
    if (unaff_x26 == (ulong *******)0x8000000000000000) {
      unaff_x20 = &ppppppuStack_2a0;
      pppppppuVar21 = pppppppuStack_2b0;
      param_4 = pppppppuStack_2e0;
      goto code_r0x0001004a9f90;
    }
    unaff_x20 = &ppppppuStack_2a0;
    unaff_x19 = pppppppuStack_2e0;
    unaff_x21 = pppppppuStack_2b0;
    if (pppppppuStack_2a8 == (ulong *******)0x8000000000000000) {
      uStack_90 = (ulong *******)&UNK_108cafcd1;
      pppppppuStack_88 = (ulong *******)0xa;
      pppppppuVar18 = (ulong *******)&uStack_90;
code_r0x0001004aa038:
      pppppppuStack_f8 = (ulong *******)&DAT_100c7b3a0;
      uStack_100 = pppppppuVar18;
      ppppppuVar13 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
      *unaff_x19 = (ulong ******)0x1d;
      unaff_x19[1] = ppppppuVar13;
      param_4 = pppppppuStack_2c0;
      if (unaff_x26 != (ulong *******)0x0) {
code_r0x0001004aa064:
        _free(param_4);
      }
      unaff_x19 = (ulong *******)0x0;
code_r0x0001004aa06c:
      pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
code_r0x0001004aa074:
      pppppppuVar18 = (ulong *******)0x8000000000000001;
code_r0x0001004aa078:
      in_ZR = unaff_x21 == pppppppuVar18;
code_r0x0001004aa07c:
      pppppppuVar14 = unaff_x22;
      pppppppuVar21 = unaff_x21;
      if ((bool)in_ZR) {
code_r0x0001004aa080:
        pppppppuVar18 = pppppppuStack_2a8;
        goto code_r0x0001004aa308;
      }
      goto joined_r0x0001004aa574;
    }
    if (pppppppuStack_2b0 == (ulong *******)0x8000000000000001) {
      unaff_x21 = (ulong *******)0x8000000000000000;
code_r0x0001004aa094:
    }
    else {
code_r0x0001004aa1dc:
      pppppppuVar18 = (ulong *******)&pppppppuStack_138;
code_r0x0001004aa1e0:
      pppppppuVar28 = (ulong *******)pppppppuVar18[3];
      pppppppuVar27 = (ulong *******)pppppppuVar18[2];
      ppppppuVar13 = pppppppuVar18[5];
      pppppppuVar29 = (ulong *******)pppppppuVar18[4];
code_r0x0001004aa1e4:
      pppppppuStack_b8 = pppppppuVar28;
      pppppppuStack_c0 = pppppppuVar27;
      ppppppuStack_a8 = ppppppuVar13;
      pppppppuStack_b0 = pppppppuVar29;
code_r0x0001004aa1e8:
      pppppppuVar18 = (ulong *******)pppppppuVar18[6];
code_r0x0001004aa1ec:
      pppppppuStack_a0 = pppppppuVar18;
    }
code_r0x0001004aa1f0:
    pppppppuVar21 = pppppppuStack_2d0;
    pppppppuVar22 = pppppppuStack_2d8;
code_r0x0001004aa1f4:
    pppppppuVar27 = pppppppuStack_c0;
    pppppppuVar28 = pppppppuStack_b8;
    pppppppuVar29 = pppppppuStack_b0;
    ppppppuVar13 = ppppppuStack_a8;
code_r0x0001004aa1f8:
    unaff_x19[10] = (ulong ******)pppppppuVar28;
    unaff_x19[9] = (ulong ******)pppppppuVar27;
code_r0x0001004aa1fc:
    pppppppuVar18 = (ulong *******)0x6;
code_r0x0001004aa200:
    *unaff_x19 = (ulong ******)pppppppuVar18;
    unaff_x19[1] = (ulong ******)unaff_x26;
code_r0x0001004aa204:
    pppppppuVar18 = pppppppuStack_2c8;
    pppppppuVar23 = pppppppuStack_2c0;
code_r0x0001004aa208:
    unaff_x19[2] = (ulong ******)pppppppuVar23;
    unaff_x19[3] = (ulong ******)pppppppuVar21;
code_r0x0001004aa20c:
    pppppppuVar21 = pppppppuStack_2a8;
code_r0x0001004aa210:
    unaff_x19[4] = (ulong ******)pppppppuVar21;
    unaff_x19[5] = (ulong ******)pppppppuVar18;
    unaff_x19[6] = (ulong ******)pppppppuVar22;
    unaff_x19[7] = (ulong ******)unaff_x21;
code_r0x0001004aa218:
    unaff_x19[8] = (ulong ******)unaff_x22;
code_r0x0001004aa21c:
    unaff_x19[0xc] = ppppppuVar13;
    unaff_x19[0xb] = (ulong ******)pppppppuVar29;
    pppppppuVar18 = pppppppuStack_a0;
code_r0x0001004aa224:
    unaff_x19[0xd] = (ulong ******)pppppppuVar18;
code_r0x0001004aa228:
    param_5 = unaff_x19;
    param_4 = &ppppppuStack_250;
    unaff_x19 = param_5;
code_r0x0001004aa230:
    param_6 = (undefined *)0x118;
code_r0x0001004aa234:
    _memcpy(param_4,param_5,param_6);
code_r0x0001004aa238:
    param_4 = &ppppppuStack_2a0;
code_r0x0001004aa23c:
    param_4 = (ulong *******)FUN_100fbc67c(param_4);
code_r0x0001004aa240:
    if (param_4 != (ulong *******)0x0) {
      pppppppuVar18 = (ulong *******)0x1d;
code_r0x0001004aa248:
      *unaff_x19 = (ulong ******)pppppppuVar18;
      unaff_x19[1] = (ulong ******)param_4;
      goto code_r0x0001004aa24c;
    }
    goto code_r0x0001004aa348;
  case 0x16:
    goto code_r0x0001004a99a8;
  case 0x17:
    goto code_r0x0001004a99bc;
  case 0x18:
    goto code_r0x0001004a9990;
  case 0x19:
    goto code_r0x0001004a9998;
  case 0x1b:
    goto code_r0x0001004a99f4;
  case 0x1c:
    goto code_r0x0001004a9a18;
  case 0x1d:
    goto code_r0x0001004a99a0;
  case 0x1e:
    goto code_r0x0001004a9aa4;
  case 0x1f:
    goto code_r0x0001004a9968;
  case 0x20:
    goto code_r0x0001004a9a68;
  case 0x22:
    goto code_r0x0001004a994c;
  case 0x23:
    goto code_r0x0001004a99fc;
  case 0x24:
code_r0x0001004aa00c:
    pppppppuVar18 = pppppppuStack_2a8;
    goto code_r0x0001004aa308;
  case 0x25:
    goto code_r0x0001004aa038;
  case 0x27:
    goto code_r0x0001004a99d0;
  case 0x29:
    goto code_r0x0001004a9a20;
  case 0x2a:
    goto code_r0x0001004a9ae4;
  case 0x2b:
    goto code_r0x0001004a9bf8;
  case 0x2e:
    goto code_r0x0001004aa10c;
  case 0x30:
  case 0xaa:
    goto code_r0x0001004aa0d0;
  case 0x32:
  case 0xa9:
    goto code_r0x0001004aa16c;
  case 0x34:
  case 0xa1:
    goto code_r0x0001004aa184;
  case 0x35:
  case 0xa5:
  case 0xd5:
    goto code_r0x0001004aa100;
  case 0x37:
    goto code_r0x0001004aa0a8;
  case 0x38:
  case 0xa8:
    goto code_r0x0001004aa0d8;
  case 0x39:
  case 0x52:
    goto code_r0x0001004aa15c;
  case 0x3a:
    goto code_r0x0001004aa080;
  case 0x3b:
    goto code_r0x0001004aa114;
  case 0x3c:
    goto code_r0x0001004aa078;
  case 0x3e:
  case 0x46:
  case 0xa7:
  case 0xea:
    goto code_r0x0001004aa1b4;
  case 0x3f:
    goto code_r0x0001004a9de4;
  case 0x40:
    goto code_r0x0001004a9e28;
  case 0x42:
  case 0x7b:
    goto code_r0x0001004aa218;
  case 0x43:
  case 0x74:
    goto code_r0x0001004aa228;
  case 0x44:
  case 0x6e:
    goto code_r0x0001004aa1f0;
  case 0x45:
    goto code_r0x0001004aa208;
  case 0x47:
    goto code_r0x0001004aa238;
  case 0x48:
    goto code_r0x0001004aa250;
  case 0x49:
  case 0x73:
  case 0xac:
    goto code_r0x0001004aa210;
  case 0x4a:
  case 0xdc:
    goto code_r0x0001004aa268;
  case 0x4b:
    goto code_r0x0001004aa1e4;
  case 0x4c:
  case 0xdf:
code_r0x0001004aa258:
    pppppppuVar18 = (ulong *******)0x1d;
    pppppppuVar21 = pppppppuStack_2e0;
  case 0xe3:
    *pppppppuVar21 = (ulong ******)pppppppuVar18;
    pppppppuVar21[1] = (ulong ******)pppppppuStack_2b8;
code_r0x0001004aa268:
    unaff_x19 = (ulong *******)0x1;
code_r0x0001004aa26c:
    unaff_x20 = &ppppppuStack_2a0;
    pppppppuVar18 = pppppppuStack_2a8;
code_r0x0001004aa308:
    if (((ulong)pppppppuVar18 & 0x7fffffffffffffff) == 0) {
      uVar16 = 0;
      if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
        uVar16 = (uint)unaff_x19;
      }
      pppppppuVar18 = (ulong *******)(ulong)uVar16;
code_r0x0001004aa318:
      param_4 = pppppppuStack_2c0;
      if (((ulong)pppppppuVar18 & 1) != 0) {
code_r0x0001004aa320:
        _free(param_4);
      }
    }
    else {
LAB_1004aa360:
      _free(pppppppuStack_2c8);
code_r0x0001004aa368:
      uVar16 = 0;
      if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
        uVar16 = (uint)unaff_x19;
      }
      param_4 = pppppppuStack_2c0;
      if ((uVar16 & 1) != 0) goto code_r0x0001004aa320;
    }
    param_4 = unaff_x20 + 4;
code_r0x0001004aa328:
    FUN_100d34830(param_4);
    if ((byte)ppppppuStack_2a0 != 0x16) {
code_r0x0001004aa338:
      FUN_100e077ec(&ppppppuStack_2a0);
    }
    goto code_r0x0001004aa348;
  case 0x4e:
  case 0x77:
    goto code_r0x0001004aa1bc;
  case 0x4f:
  case 0x76:
  case 0xde:
    goto code_r0x0001004aa240;
  case 0x51:
    goto code_r0x0001004aa1f8;
  case 0x54:
  case 0xe4:
code_r0x0001004aa2b8:
    *pppppppuStack_2e0 = (ulong ******)0x1d;
    pppppppuStack_2e0[1] = (ulong ******)pppppppuVar18;
  case 0x5c:
    unaff_x19 = (ulong *******)0x1;
    unaff_x26 = (ulong *******)0x0;
code_r0x0001004aa2cc:
joined_r0x0001004aa518:
    unaff_x20 = &ppppppuStack_2a0;
    pppppppuVar18 = pppppppuStack_2a8;
    pppppppuVar14 = unaff_x22;
    pppppppuVar21 = unaff_x21;
    if (unaff_x21 != (ulong *******)0x8000000000000001) {
joined_r0x0001004aa574:
      pppppppuVar18 = pppppppuStack_2a8;
      if (pppppppuVar21 != (ulong *******)0x8000000000000000) {
        if (pppppppuVar21 != (ulong *******)0x0) {
          _free(pppppppuVar14);
        }
LAB_1004aa2f4:
        param_4 = pppppppuStack_118;
        pppppppuVar18 = pppppppuStack_2a8;
        if (pppppppuStack_120 != (ulong *******)0x0) {
code_r0x0001004aa300:
          _free(param_4);
          pppppppuVar18 = pppppppuStack_2a8;
        }
      }
    }
    goto code_r0x0001004aa308;
  case 0x55:
    goto code_r0x0001004a9d64;
  case 0x56:
    goto code_r0x0001004a9da8;
  case 0x58:
    goto code_r0x0001004aa328;
  case 0x59:
    goto code_r0x0001004aa338;
  case 0x5a:
    goto code_r0x0001004aa300;
  case 0x5b:
    goto code_r0x0001004aa318;
  case 0x5d:
    goto code_r0x0001004aa348;
  case 0x5e:
    goto LAB_1004aa360;
  case 0x5f:
    goto code_r0x0001004aa320;
  case 0x60:
code_r0x0001004aa378:
    ppppppuStack_2a0._0_1_ = bVar17;
    uStack_297 = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x29);
    ppppppuStack_2a0._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x21);
    uStack_298 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x21) >> 0x38);
    pppppppuStack_288 = (ulong *******)unaff_x23[7];
    uStack_290 = SUB81(unaff_x23[6],0);
    uStack_28f = (undefined7)((ulong)unaff_x23[6] >> 8);
    pppppppuStack_118 = (ulong *******)0x2;
    FUN_1004b62d4(&pppppppuStack_c0,&ppppppuStack_2a0);
    pppppppuVar18 = (ulong *******)0x8000000000000000;
    unaff_x21 = pppppppuStack_b8;
    unaff_x23 = pppppppuStack_c0;
  case 0x6a:
    pppppppuVar21 = pppppppuStack_b0;
    if (unaff_x23 == pppppppuVar18) {
code_r0x0001004a9ed8:
      *param_4 = (ulong ******)0x1d;
      param_4[1] = (ulong ******)unaff_x21;
code_r0x0001004a9ee0:
      pppppppuVar21 = pppppppuStack_120;
      pppppppuVar14 = pppppppuStack_130;
      if (unaff_x22 != (ulong *******)0x0) {
        _free(unaff_x20);
        pppppppuVar21 = pppppppuStack_120;
        pppppppuVar14 = pppppppuStack_130;
      }
code_r0x0001004a9f34:
      lVar25 = ((ulong)((long)pppppppuVar21 - (long)pppppppuVar14) >> 5) + 1;
      while (lVar25 = lVar25 + -1, lVar25 != 0) {
        FUN_100e077ec(pppppppuVar14);
        pppppppuVar14 = pppppppuVar14 + 4;
      }
      if (pppppppuStack_128 != (ulong *******)0x0) {
        _free(pppppppuStack_138);
      }
    }
    else {
      FUN_100f28ba8(&ppppppuStack_2a0,&pppppppuStack_138);
      ppppppuVar13 = (ulong ******)CONCAT71(ppppppuStack_2a0._1_7_,(byte)ppppppuStack_2a0);
      ppppppuVar15 = (ulong ******)CONCAT71(uStack_297,uStack_298);
      if (ppppppuVar13 == (ulong ******)0x8000000000000002) {
code_r0x0001004aa3d4:
        *param_4 = (ulong ******)0x1d;
        param_4[1] = ppppppuVar15;
        if (unaff_x23 != (ulong *******)0x0) {
          _free(unaff_x21);
        }
        goto code_r0x0001004a9ee0;
      }
      uStack_100 = (ulong *******)CONCAT71(uStack_28f,uStack_290);
      pppppppuStack_f8 = pppppppuStack_288;
      pppppppuStack_e8 = pppppppuStack_278;
      pppppppuStack_f0 = pppppppuStack_280;
      pppppppuStack_e0 = pppppppuStack_270;
      if (ppppppuVar13 == (ulong ******)0x8000000000000001) {
        ppppppuVar15 = (ulong ******)thunk_FUN_1087e422c(2,&UNK_10b22ec18,&UNK_10b20a590);
        goto code_r0x0001004aa3d4;
      }
      param_4[10] = (ulong ******)pppppppuStack_288;
      param_4[9] = (ulong ******)uStack_100;
      param_4[0xc] = (ulong ******)pppppppuStack_278;
      param_4[0xb] = (ulong ******)pppppppuStack_280;
      param_4[0xd] = (ulong ******)pppppppuStack_270;
      *param_4 = (ulong ******)0x6;
      param_4[1] = (ulong ******)unaff_x22;
      param_4[2] = (ulong ******)unaff_x20;
      param_4[3] = (ulong ******)unaff_x19;
      param_4[4] = (ulong ******)unaff_x23;
      param_4[5] = (ulong ******)unaff_x21;
      param_4[6] = (ulong ******)pppppppuVar21;
      param_4[7] = ppppppuVar13;
      param_4[8] = ppppppuVar15;
      _memcpy(&ppppppuStack_250,param_4,0x118);
      ppppppuVar13 = (ulong ******)FUN_100fbc738(&pppppppuStack_138);
      if (ppppppuVar13 != (ulong ******)0x0) {
        *param_4 = (ulong ******)0x1d;
        param_4[1] = ppppppuVar13;
code_r0x0001004aa24c:
        param_4 = &ppppppuStack_250;
code_r0x0001004aa250:
        FUN_100e35e0c(param_4);
      }
    }
    goto code_r0x0001004aa348;
  case 0x61:
    goto LAB_1004aa2f4;
  case 0x62:
    goto code_r0x0001004aa368;
  case 99:
    goto code_r0x0001004aa29c;
  case 100:
    goto code_r0x0001004aa2cc;
  case 0x65:
    goto code_r0x0001004aa350;
  case 0x66:
code_r0x0001004aa274:
    unaff_x21 = pppppppuStack_2b0;
    unaff_x22 = pppppppuStack_2b8;
  case 0xdd:
    pppppppuVar21 = (ulong *******)0x1d;
    pppppppuVar18 = pppppppuStack_88;
    pppppppuVar22 = pppppppuStack_2e0;
    pppppppuStack_138 = unaff_x28;
    pppppppuStack_130 = unaff_x22;
code_r0x0001004aa288:
    *pppppppuVar22 = (ulong ******)pppppppuVar21;
    pppppppuVar22[1] = (ulong ******)pppppppuVar18;
    unaff_x19 = (ulong *******)0x1;
code_r0x0001004aa290:
    pppppppuStack_2a8 = (ulong *******)0x8000000000000000;
    unaff_x20 = &ppppppuStack_2a0;
code_r0x0001004aa29c:
    pppppppuVar18 = (ulong *******)0x8000000000000001;
code_r0x0001004aa2a0:
    pppppppuVar14 = unaff_x22;
    pppppppuVar21 = unaff_x21;
    if (unaff_x21 == pppppppuVar18) {
code_r0x0001004aa2a8:
      pppppppuVar18 = pppppppuStack_2a8;
      goto code_r0x0001004aa308;
    }
    goto joined_r0x0001004aa574;
  case 0x67:
  case 0xee:
    goto code_r0x0001004aa308;
  case 0x68:
    goto code_r0x0001004aa26c;
  case 0x6b:
    goto code_r0x0001004a99ac;
  case 0x6c:
    goto code_r0x0001004a99f0;
  case 0x6f:
    goto code_r0x0001004aa200;
  case 0x70:
  case 0xfb:
    goto code_r0x0001004aa1c8;
  case 0x71:
    goto code_r0x0001004aa1e0;
  case 0x75:
    goto code_r0x0001004aa1e8;
  case 0x78:
    goto code_r0x0001004aa230;
  case 0x7d:
  case 0x96:
  case 0xc2:
    goto code_r0x0001004aa1d0;
  case 0x80:
  case 0xe9:
    goto code_r0x0001004aa290;
  case 0x81:
    goto code_r0x0001004a9d60;
  case 0x82:
    goto code_r0x0001004a9da4;
  case 0x85:
  case 0xb1:
  case 0xcb:
    goto code_r0x0001004aa140;
  case 0x86:
  case 0xb2:
    goto code_r0x0001004aa108;
  case 0x8b:
  case 0x9e:
  case 0xb7:
    goto code_r0x0001004aa128;
  case 0x8e:
  case 0xba:
  case 0xce:
  case 0xfd:
    goto code_r0x0001004aa170;
  case 0x90:
  case 0xbc:
    goto code_r0x0001004aa0d4;
  case 0x92:
  case 0xbe:
    goto code_r0x0001004aa07c;
  case 0x93:
  case 0xbf:
  case 0xc9:
    goto code_r0x0001004aa110;
  case 0x94:
  case 0xc0:
    goto code_r0x0001004aa074;
  case 0x97:
  case 0xc3:
    goto code_r0x0001004a9d38;
  case 0x98:
  case 0xc4:
    goto code_r0x0001004a9d7c;
  case 0x9b:
    goto code_r0x0001004aa19c;
  case 0xa0:
    goto code_r0x0001004aa1c4;
  case 0xa2:
  case 0xe7:
    goto code_r0x0001004aa1dc;
  case 0xa4:
    goto code_r0x0001004aa1cc;
  case 0xad:
    goto code_r0x0001004a9d68;
  case 0xae:
    goto code_r0x0001004a9dac;
  case 0xca:
    goto code_r0x0001004aa0bc;
  case 0xcd:
    goto code_r0x0001004aa118;
  case 0xcf:
    goto code_r0x0001004aa0ec;
  case 0xd0:
    goto code_r0x0001004aa160;
  case 0xd1:
    goto code_r0x0001004aa094;
  case 0xd2:
    goto code_r0x0001004aa0c4;
  case 0xd4:
    goto code_r0x0001004aa06c;
  case 0xd6:
    goto code_r0x0001004aa064;
  case 0xd8:
    goto code_r0x0001004aa1c0;
  case 0xd9:
    goto code_r0x0001004a9d2c;
  case 0xda:
    goto code_r0x0001004a9d70;
  case 0xe0:
    goto code_r0x0001004aa204;
  case 0xe1:
    goto code_r0x0001004aa288;
  case 0xe2:
    goto code_r0x0001004aa2a0;
  case 0xe5:
  case 0xf8:
    goto code_r0x0001004aa234;
  case 0xe6:
    goto code_r0x0001004aa2a8;
  case 0xe8:
  case 0xf3:
    goto code_r0x0001004aa20c;
  case 0xeb:
    goto code_r0x0001004aa248;
  case 0xef:
    goto code_r0x0001004a9db8;
  case 0xf2:
    goto code_r0x0001004aa1fc;
  case 0xf5:
    goto code_r0x0001004aa1ec;
  case 0xf7:
    goto code_r0x0001004aa21c;
  case 0xf9:
    goto code_r0x0001004aa1f4;
  case 0xfa:
    goto code_r0x0001004aa24c;
  case 0xfc:
    goto code_r0x0001004aa23c;
  case 0xfe:
    goto code_r0x0001004aa1a0;
  case 0xff:
    goto code_r0x0001004aa224;
  }
  ppppppuStack_250 = (ulong ******)CONCAT71(ppppppuStack_250._1_7_,bVar17);
code_r0x0001004aa1b4:
  param_6 = &UNK_10b21c0f0;
code_r0x0001004aa1bc:
  pppppppuVar14 = &ppppppuStack_250;
code_r0x0001004aa1c0:
  param_5 = &ppppppuStack_69;
code_r0x0001004aa1c4:
  pppppppuVar14 = (ulong *******)FUN_107c05dcc(pppppppuVar14,param_5,param_6);
code_r0x0001004aa1c8:
  pppppppuVar18 = (ulong *******)0x1d;
code_r0x0001004aa1cc:
  *param_4 = (ulong ******)pppppppuVar18;
  param_4[1] = (ulong ******)pppppppuVar14;
code_r0x0001004aa1d0:
code_r0x0001004aa348:
code_r0x0001004aa350:
  return;
}

