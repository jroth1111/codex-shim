
/* WARNING: Type propagation algorithm not settling */

void FUN_1004ae288(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
                  undefined *param_4)

{
  uint uVar1;
  byte bVar2;
  ulong *******pppppppuVar3;
  code *pcVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  ulong *******pppppppuVar17;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar18;
  ulong ******ppppppuVar19;
  ulong ******ppppppuVar20;
  uint uVar21;
  byte bVar22;
  ulong *******pppppppuVar23;
  undefined8 uVar24;
  ulong *******pppppppuVar25;
  ulong *******pppppppuVar26;
  ulong uVar27;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong ******ppppppuVar28;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  ulong *******unaff_x27;
  ulong *******pppppppuVar31;
  ulong *******unaff_x28;
  undefined1 *puVar32;
  undefined8 unaff_x30;
  ulong *******pppppppuVar33;
  ulong *******pppppppuVar34;
  undefined1 auStack_390 [80];
  ulong *******pppppppuStack_340;
  ulong *******pppppppuStack_338;
  ulong ******ppppppuStack_330;
  undefined8 uStack_328;
  ulong *******pppppppuStack_320;
  ulong *******pppppppuStack_318;
  ulong ******ppppppuStack_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2f0;
  ulong *******pppppppuStack_2e8;
  ulong ******ppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  ulong *******pppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong ******ppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  undefined8 uStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong ******ppppppuStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  ulong ******ppppppuStack_78;
  
  pppppppuVar34 = param_1._8_8_;
  pppppppuVar33 = param_1._0_8_;
  puVar32 = &stack0xfffffffffffffff0;
  pppppppuVar8 = (ulong *******)&pppppppuStack_340;
  bVar22 = *(byte *)param_3;
  pppppppuVar23 = (ulong *******)(ulong)bVar22;
  pppppppuVar25 = (ulong *******)&UNK_108c9a334;
  uVar27 = (ulong)*(ushort *)(&UNK_108c9a334 + (long)pppppppuVar23 * 2);
  pppppppuVar26 = (ulong *******)(&UNK_1004ae2c8 + uVar27 * 4);
  pppppppuVar14 = (ulong *******)&pppppppuStack_340;
  pppppppuVar15 = (ulong *******)&pppppppuStack_340;
  pppppppuVar16 = (ulong *******)&pppppppuStack_340;
  pppppppuVar17 = (ulong *******)&pppppppuStack_340;
  pppppppuVar9 = (ulong *******)&pppppppuStack_340;
  pppppppuVar10 = (ulong *******)&pppppppuStack_340;
  pppppppuVar11 = (ulong *******)&pppppppuStack_340;
  pppppppuVar12 = (ulong *******)&pppppppuStack_340;
  pppppppuVar13 = (ulong *******)&pppppppuStack_340;
  pppppppuVar5 = (ulong *******)&pppppppuStack_340;
  pppppppuVar6 = (ulong *******)&pppppppuStack_340;
  pppppppuVar7 = (ulong *******)&pppppppuStack_340;
  pppppppuVar18 = param_2;
  pppppppuVar29 = unaff_x25;
  pppppppuVar30 = param_2;
  pppppppuVar31 = unaff_x27;
  pppppppuVar3 = pppppppuStack_2e8;
  switch(bVar22) {
  case 0:
    bVar22 = *(byte *)((long)param_3 + 1);
  case 0x8b:
    pppppppuStack_2c0 = (ulong *******)((ulong)CONCAT61(pppppppuStack_2c0._2_6_,bVar22) << 8);
code_r0x0001004aeba8:
    goto code_r0x0001004aebfc;
  case 1:
    pppppppuVar23 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0x72:
  case 0xa7:
code_r0x0001004aebb0:
    bVar22 = 1;
    pppppppuStack_2b8 = pppppppuVar23;
code_r0x0001004aebb8:
    break;
  case 2:
  case 0x8d:
    pppppppuVar23 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x36:
  case 0x9d:
    goto code_r0x0001004aebb0;
  case 3:
    pppppppuVar23 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    goto code_r0x0001004aebb0;
  case 4:
  case 0x2c:
    pppppppuVar23 = (ulong *******)param_3[1];
    goto code_r0x0001004aebb0;
  case 5:
  case 0x3e:
    pppppppuVar23 = (ulong *******)(long)*(char *)((long)param_3 + 1);
  case 0xa0:
    pppppppuStack_2b8 = pppppppuVar23;
    goto code_r0x0001004aebf4;
  case 6:
    pppppppuVar23 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0xa2:
    pppppppuStack_2b8 = pppppppuVar23;
code_r0x0001004aebf4:
    bVar22 = 2;
    break;
  case 7:
    pppppppuVar23 = (ulong *******)(long)(int)*(uint *)((long)param_3 + 4);
  case 0x87:
  case 0x9b:
    pppppppuStack_2b8 = pppppppuVar23;
    goto code_r0x0001004aebf4;
  case 8:
  case 0x70:
    pppppppuStack_2b8 = (ulong *******)param_3[1];
    goto code_r0x0001004aebf4;
  case 9:
  case 0xa9:
    pppppppuVar33 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x6a:
    pppppppuVar33 = (ulong *******)(double)SUB84(pppppppuVar33,0);
code_r0x0001004aeb70:
  case 0x77:
  case 0x8a:
code_r0x0001004aebe0:
    bVar22 = 3;
    pppppppuStack_2b8 = pppppppuVar33;
code_r0x0001004aebe8:
    break;
  case 10:
    pppppppuVar33 = (ulong *******)param_3[1];
    goto code_r0x0001004aebe0;
  case 0xb:
  case 0x2e:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x1c:
  case 0x48:
code_r0x0001004aeb18:
    pppppppuVar9 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x0001004aeb1c:
    puVar32 = *(undefined1 **)((long)pppppppuVar9 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar9 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar9 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar9 + 0x48);
    pppppppuVar10 = pppppppuVar9;
code_r0x0001004aeb24:
    pppppppuVar11 = pppppppuVar10;
code_r0x0001004aeb28:
    pppppppuVar12 = pppppppuVar11;
code_r0x0001004aeb2c:
    pppppppuVar13 = pppppppuVar12;
code_r0x0001004aeb30:
    *(ulong ********)((long)pppppppuVar13 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar13 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar13 + 0x50) = puVar32;
    *(undefined8 *)((long)pppppppuVar13 + 0x58) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar13 + 0x1c) = 0;
    uVar21 = (uint)param_3;
    if (uVar21 < 0x80) {
      *(byte *)((long)pppppppuVar13 + 0x1c) = (byte)param_3;
      uVar24 = 1;
    }
    else {
      bVar22 = (byte)param_3 & 0x3f | 0x80;
      if (uVar21 < 0x800) {
        *(byte *)((long)pppppppuVar13 + 0x1c) = (byte)(uVar21 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar13 + 0x1d) = bVar22;
        uVar24 = 2;
      }
      else {
        bVar2 = (byte)(uVar21 >> 6) & 0x3f | 0x80;
        if (uVar21 < 0x10000) {
          *(byte *)((long)pppppppuVar13 + 0x1c) = (byte)(uVar21 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar13 + 0x1d) = bVar2;
          *(byte *)((long)pppppppuVar13 + 0x1e) = bVar22;
          uVar24 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar13 + 0x1c) = (byte)(uVar21 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar13 + 0x1d) = (byte)(uVar21 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar13 + 0x1e) = bVar2;
          *(byte *)((long)pppppppuVar13 + 0x1f) = bVar22;
          uVar24 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar13 + 0x28) = (undefined1 *)((long)pppppppuVar13 + 0x1c);
    *(undefined8 *)((long)pppppppuVar13 + 0x30) = uVar24;
    *(undefined1 *)((long)pppppppuVar13 + 0x20) = 5;
    ppppppuVar19 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar13 + 0x20),
                                       (undefined1 *)((long)pppppppuVar13 + 0x3f),&UNK_10b219a90);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar19;
    return;
  case 0xc:
    param_3 = param_3 + 1;
  case 0x88:
code_r0x0001004aeb48:
    pppppppuVar14 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x0001004aeb4c:
    puVar32 = *(undefined1 **)((long)pppppppuVar14 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar14 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar14 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar14 + 0x48);
    pppppppuVar15 = pppppppuVar14;
code_r0x0001004aeb54:
    unaff_x22 = *(ulong ********)((long)pppppppuVar15 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar15 + 0x38);
    pppppppuVar16 = pppppppuVar15;
code_r0x0001004aeb58:
    pppppppuVar17 = pppppppuVar16;
code_r0x0001004aeb60:
    *(ulong ********)((long)pppppppuVar17 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar17 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar17 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar17 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar17 + 0x50) = puVar32;
    *(undefined8 *)((long)pppppppuVar17 + 0x58) = unaff_x30;
    ppppppuVar19 = param_3[1];
    ppppppuVar20 = param_3[2];
    *(ulong *******)((long)pppppppuVar17 + 0x18) = ppppppuVar19;
    *(ulong *******)((long)pppppppuVar17 + 0x20) = ppppppuVar20;
    *(undefined1 *)((long)pppppppuVar17 + 0x10) = 5;
    ppppppuVar20 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar17 + 0x10),
                                       (undefined1 *)((long)pppppppuVar17 + 0x2f),&UNK_10b219a90);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar20;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar19);
    }
    return;
  case 0xd:
    pppppppuVar23 = (ulong *******)param_3[1];
    pppppppuVar25 = (ulong *******)param_3[2];
  case 0x89:
  case 0xa4:
    bVar22 = 5;
    pppppppuStack_2b8 = pppppppuVar23;
    pppppppuStack_2b0 = pppppppuVar25;
code_r0x0001004aebd0:
    break;
  case 0xe:
    param_3 = param_3 + 1;
  case 0x17:
  case 0x43:
  case 0x5d:
  case 0x94:
    pppppppuVar5 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x0001004aeaf4:
    puVar32 = *(undefined1 **)((long)pppppppuVar5 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar5 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar5 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar5 + 0x48);
    pppppppuVar6 = pppppppuVar5;
code_r0x0001004aeafc:
    unaff_x22 = *(ulong ********)((long)pppppppuVar6 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar6 + 0x38);
    pppppppuVar7 = pppppppuVar6;
code_r0x0001004aeb04:
    pppppppuVar8 = (ulong *******)((long)pppppppuVar7 + 0x60);
code_r0x0001004aeb0c:
    *(ulong ********)((long)pppppppuVar8 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar8 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar8 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar8 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar8 + -0x10) = puVar32;
    *(undefined8 *)((long)pppppppuVar8 + -8) = unaff_x30;
    ppppppuVar19 = param_3[1];
    ppppppuVar20 = param_3[2];
    *(ulong *******)((long)pppppppuVar8 + -0x48) = ppppppuVar19;
    *(ulong *******)((long)pppppppuVar8 + -0x40) = ppppppuVar20;
    *(undefined1 *)((long)pppppppuVar8 + -0x50) = 6;
    ppppppuVar20 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar8 + -0x50),
                                       (undefined1 *)((long)pppppppuVar8 + -0x31),&UNK_10b219a90);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar20;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar19);
    }
    return;
  case 0xf:
  case 0x28:
  case 0x54:
    pppppppuVar23 = (ulong *******)param_3[1];
    pppppppuVar25 = (ulong *******)param_3[2];
  case 0x86:
  case 0xa1:
    bVar22 = 6;
    pppppppuStack_2b8 = pppppppuVar23;
    pppppppuStack_2b0 = pppppppuVar25;
code_r0x0001004aeb88:
    break;
  case 0x10:
    bVar22 = 8;
    break;
  default:
    pppppppuVar18 = (ulong *******)param_3[1];
    pppppppuStack_2b8 = (ulong *******)pppppppuVar18[1];
    pppppppuStack_2c0 = (ulong *******)*pppppppuVar18;
    pppppppuStack_2a8 = (ulong *******)pppppppuVar18[3];
    pppppppuStack_2b0 = (ulong *******)pppppppuVar18[2];
    func_0x000107c0466c(param_2,&pppppppuStack_2c0);
  case 0xc4:
code_r0x0001004ae730:
code_r0x0001004ae74c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar18);
    return;
  case 0x12:
  case 0x7b:
    bVar22 = 7;
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuVar34 = (ulong *******)unaff_x20[1];
    pppppppuVar33 = (ulong *******)*unaff_x20;
  case 0x3f:
    pppppppuStack_2c0 = pppppppuVar33;
    pppppppuStack_2b8 = pppppppuVar34;
code_r0x0001004ae718:
    pppppppuVar34 = (ulong *******)unaff_x20[3];
    pppppppuVar33 = (ulong *******)unaff_x20[2];
code_r0x0001004ae71c:
    param_3 = (ulong *******)&pppppppuStack_2c0;
    pppppppuStack_2b0 = pppppppuVar33;
    pppppppuStack_2a8 = pppppppuVar34;
code_r0x0001004ae724:
code_r0x0001004ae728:
    pppppppuVar18 = unaff_x20;
    func_0x000107c05334(param_2,param_3);
    goto code_r0x0001004ae730;
  case 0x14:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x25 = (ulong *******)param_3[3];
  case 0x40:
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
code_r0x0001004ae75c:
    uStack_c0 = unaff_x20;
    pppppppuStack_b8 = unaff_x20;
    pppppppuStack_b0 = unaff_x23;
    pppppppuStack_a8 = unaff_x19;
code_r0x0001004ae764:
    ppppppuStack_a0 = (ulong ******)0x0;
    unaff_x21 = unaff_x20;
    if (unaff_x25 == (ulong *******)0x0) {
code_r0x0001004ae784:
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f6d8,&UNK_10b20a590);
code_r0x0001004ae7a0:
      pppppppuVar23 = (ulong *******)0x800000000000006e;
code_r0x0001004ae7a8:
      *param_2 = (ulong ******)pppppppuVar23;
      param_2[1] = (ulong ******)unaff_x22;
code_r0x0001004ae7ac:
      pppppppuVar23 = (ulong *******)((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5);
code_r0x0001004ae7b4:
      unaff_x24 = (ulong *******)((long)pppppppuVar23 + 1);
code_r0x0001004ae7b8:
      while (param_2 = unaff_x20, unaff_x24 = (ulong *******)((long)unaff_x24 + -1),
            unaff_x24 != (ulong *******)0x0) {
        FUN_100e077ec(unaff_x21);
        unaff_x20 = param_2;
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x0001004ae7dc:
        _free(param_2);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      bVar22 = *(byte *)unaff_x20;
      in_ZR = bVar22 == 0x16;
      pppppppuStack_b8 = unaff_x21;
code_r0x0001004ae780:
      if ((bool)in_ZR) goto code_r0x0001004ae784;
      uStack_307 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      ppppppuStack_310._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_308 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      pppppppuVar34 = (ulong *******)unaff_x20[3];
      pppppppuVar33 = (ulong *******)unaff_x20[2];
code_r0x0001004ae7fc:
      uStack_300 = SUB81(pppppppuVar33,0);
      uStack_2ff = (undefined7)((ulong)pppppppuVar33 >> 8);
      pppppppuStack_2f8 = pppppppuVar34;
code_r0x0001004ae800:
      ppppppuStack_310._0_1_ = bVar22;
      ppppppuStack_a0 = (ulong ******)0x1;
      func_0x00010135ba2c(&bStack_f8,&ppppppuStack_310);
      unaff_x24 = (ulong *******)CONCAT71(uStack_f7,bStack_f8);
      unaff_x22 = (ulong *******)CONCAT71(uStack_ef,uStack_f0);
      if (unaff_x24 == (ulong *******)0x8000000000000001) goto code_r0x0001004ae7a0;
      in_ZR = unaff_x25 == (ulong *******)0x1;
code_r0x0001004ae82c:
      if ((bool)in_ZR) {
code_r0x0001004ae848:
        param_3 = (ulong *******)&UNK_10b22f000;
code_r0x0001004ae84c:
        param_3 = param_3 + 0xdb;
        param_4 = &UNK_10b20a590;
        pppppppuVar18 = (ulong *******)0x1;
code_r0x0001004ae85c:
        ppppppuVar19 = (ulong ******)thunk_FUN_1087e422c(pppppppuVar18,param_3,param_4);
code_r0x0001004ae860:
        *param_2 = (ulong ******)0x800000000000006e;
        param_2[1] = ppppppuVar19;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x0001004ae7ac;
      }
      unaff_x25 = (ulong *******)CONCAT71(uStack_e7,uStack_e8);
      unaff_x21 = unaff_x20 + 8;
      bVar22 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_b8 = unaff_x21;
      if (bVar22 == 0x16) goto code_r0x0001004ae848;
      pppppppuVar34 = *(ulong ********)((long)unaff_x20 + 0x29);
      pppppppuVar33 = *(ulong ********)((long)unaff_x20 + 0x21);
code_r0x0001004aec48:
      uStack_ef = SUB87(pppppppuVar34,0);
      uStack_f7 = SUB87(pppppppuVar33,0);
      uStack_f0 = (undefined1)((ulong)pppppppuVar33 >> 0x38);
code_r0x0001004aec4c:
      pppppppuStack_e0 = (ulong *******)unaff_x20[7];
      uStack_e8 = SUB81(unaff_x20[6],0);
      uStack_e7 = (undefined7)((ulong)unaff_x20[6] >> 8);
code_r0x0001004aec54:
      bStack_f8 = bVar22;
      ppppppuStack_a0 = (ulong ******)0x2;
      pppppppuVar18 = &ppppppuStack_310;
code_r0x0001004aec64:
      func_0x00010132b724(pppppppuVar18,&bStack_f8);
      ppppppuVar19 = (ulong ******)CONCAT71(uStack_307,uStack_308);
      if ((ulong ******)CONCAT71(ppppppuStack_310._1_7_,(byte)ppppppuStack_310) ==
          (ulong ******)0x8000000000000000) goto code_r0x0001004ae860;
      unaff_x19 = (ulong *******)0x800000000000006e;
      param_2[4] = (ulong ******)pppppppuStack_2f8;
      param_2[3] = (ulong ******)CONCAT71(uStack_2ff,uStack_300);
      param_2[6] = (ulong ******)pppppppuStack_2e8;
      param_2[5] = (ulong ******)pppppppuStack_2f0;
      *param_2 = (ulong ******)0x8000000000000026;
      param_2[1] = (ulong ******)CONCAT71(ppppppuStack_310._1_7_,(byte)ppppppuStack_310);
      param_2[2] = ppppppuVar19;
      param_2[7] = ppppppuStack_2e0;
      param_2[8] = (ulong ******)unaff_x24;
      param_2[9] = (ulong ******)unaff_x22;
      param_2[10] = (ulong ******)unaff_x25;
      pppppppuVar18 = (ulong *******)&pppppppuStack_2c0;
      param_4 = (undefined *)0x1c0;
      param_3 = param_2;
code_r0x0001004aecb4:
      _memcpy(pppppppuVar18,param_3,param_4);
      ppppppuVar19 = (ulong ******)FUN_100fbc738(&uStack_c0);
      if (ppppppuVar19 != (ulong ******)0x0) {
        *param_2 = (ulong ******)unaff_x19;
        param_2[1] = ppppppuVar19;
code_r0x0001004aecc8:
        FUN_100e44f40(&pppppppuStack_2c0);
      }
    }
    goto code_r0x0001004aec24;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
    ppppppuStack_2e0 = param_3[1];
    pppppppuVar23 = (ulong *******)param_3[2];
    ppppppuVar19 = param_3[3];
    pppppppuVar25 = (ulong *******)((long)ppppppuVar19 * 0x40);
    unaff_x19 = pppppppuVar23 + (long)ppppppuVar19 * 8;
    ppppppuStack_310._0_1_ = 0x16;
    pppppppuStack_2d0 = (ulong *******)0x0;
    pppppppuStack_2f0 = pppppppuVar23;
    pppppppuStack_2e8 = pppppppuVar23;
    pppppppuStack_2d8 = unaff_x19;
    if (ppppppuVar19 != (ulong ******)0x0) {
      unaff_x25 = (ulong *******)0x0;
      unaff_x22 = (ulong *******)((ulong)&uStack_c0 | 1);
      unaff_x21 = (ulong *******)((ulong)&ppppppuStack_310 | 1);
      pppppppuVar26 = (ulong *******)((ulong)&pppppppuStack_88 | 1);
      goto code_r0x0001004ae330;
    }
    unaff_x24 = (ulong *******)0x8000000000000000;
    bStack_f8 = 0;
    uStack_f7 = 0x80000000000000;
    goto code_r0x0001004ae8b0;
  case 0x16:
  case 0x38:
  case 0x42:
  case 0x59:
    goto code_r0x0001004aeadc;
  case 0x18:
  case 0x44:
    goto code_r0x0001004aeab4;
  case 0x19:
  case 0x45:
  case 0x58:
  case 0xaa:
    goto code_r0x0001004aeacc;
  case 0x1a:
  case 0x46:
    goto code_r0x0001004aea78;
  case 0x1b:
  case 0x47:
  case 0xa5:
    goto code_r0x0001004aeafc;
  case 0x1d:
  case 0x30:
  case 0x49:
  case 0xa8:
    goto code_r0x0001004aead4;
  case 0x1e:
  case 0x4a:
  case 0xa6:
    goto code_r0x0001004aeb2c;
  case 0x1f:
  case 0x4b:
    goto code_r0x0001004aeaa8;
  case 0x20:
  case 0x4c:
  case 0x60:
  case 0x8f:
    goto code_r0x0001004aeb1c;
  case 0x21:
  case 0x4d:
    goto code_r0x0001004aea50;
  case 0x22:
  case 0x4e:
    goto code_r0x0001004aea80;
  case 0x23:
  case 0x35:
  case 0x4f:
  case 0x5e:
    goto code_r0x0001004aeb04;
  case 0x24:
  case 0x50:
    goto code_r0x0001004aea28;
  case 0x25:
  case 0x51:
  case 0x5b:
    goto code_r0x0001004aeabc;
  case 0x26:
  case 0x52:
    goto code_r0x0001004aea20;
  case 0x29:
  case 0x55:
  case 199:
    goto code_r0x0001004ae6e4;
  case 0x2a:
  case 0x56:
    goto code_r0x0001004ae728;
  case 0x2d:
    goto code_r0x0001004aeb48;
  case 0x2f:
    goto code_r0x0001004aeb28;
  case 0x31:
  case 0x7e:
    goto code_r0x0001004aeb58;
  case 0x32:
    goto code_r0x0001004aeb70;
  case 0x33:
    goto code_r0x0001004aeb30;
  case 0x34:
  case 0x79:
  case 0x93:
  case 0x9a:
    goto code_r0x0001004aeb88;
  case 0x37:
  case 0x67:
    goto code_r0x0001004aeaac;
  case 0x39:
  case 0x7c:
  case 0x9c:
    goto code_r0x0001004aeb60;
  case 0x3a:
    goto code_r0x0001004aea84;
  case 0x3b:
    goto code_r0x0001004aeb18;
  case 0x3c:
    goto LAB_1004aea7c;
  case 0x5a:
code_r0x0001004aeaa4:
    pppppppuStack_2d0 = pppppppuVar23;
code_r0x0001004aeaa8:
    pppppppuVar23 = pppppppuStack_318;
code_r0x0001004aeaac:
    bStack_f8 = (byte)unaff_x28;
    uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_f0 = SUB81(pppppppuVar23,0);
    uStack_ef = (undefined7)((ulong)pppppppuVar23 >> 8);
    unaff_x23 = (ulong *******)0x8000000000000001;
code_r0x0001004aeab4:
    param_2 = pppppppuStack_80;
    pppppppuVar18 = pppppppuStack_338;
code_r0x0001004aeabc:
    unaff_x22 = uStack_328;
code_r0x0001004aeac0:
    unaff_x27 = &ppppppuStack_310;
code_r0x0001004aeac4:
    pppppppuVar23 = (ulong *******)0x6e;
code_r0x0001004aeac8:
    pppppppuVar23 = (ulong *******)((ulong)pppppppuVar23 | 0x8000000000000000);
code_r0x0001004aeacc:
    *pppppppuVar18 = (ulong ******)pppppppuVar23;
    pppppppuVar18[1] = (ulong ******)param_2;
    pppppppuVar23 = (ulong *******)0x8000000000000000;
code_r0x0001004aead4:
    if (unaff_x24 != pppppppuVar23) {
code_r0x0001004aeadc:
joined_r0x0001004aed30:
      if (unaff_x24 != (ulong *******)0x0) {
LAB_1004ae900:
        _free(pppppppuStack_318);
      }
      ppppppuVar19 = ppppppuStack_d8;
      if (ppppppuStack_d0 != (ulong ******)0x0) {
        ppppppuVar20 = ppppppuStack_d8 + 1;
        ppppppuVar28 = ppppppuStack_d0;
        do {
          if (ppppppuVar20[-1] != (ulong *****)0x0) {
            _free(*ppppppuVar20);
          }
          ppppppuVar20 = ppppppuVar20 + 4;
          ppppppuVar28 = (ulong ******)((long)ppppppuVar28 + -1);
        } while (ppppppuVar28 != (ulong ******)0x0);
      }
      if (pppppppuStack_e0 != (ulong *******)0x0) {
        _free(ppppppuVar19);
      }
    }
LAB_1004ae948:
    in_OV = SBORROW8((long)unaff_x23,-0x7ffffffffffffffe);
    in_NG = (long)unaff_x23 + 0x7ffffffffffffffe < 0;
code_r0x0001004ae954:
    if (in_NG == in_OV) goto code_r0x0001004ae958;
    goto LAB_1004aea7c;
  case 0x5c:
    goto code_r0x0001004aea68;
  case 0x5f:
    goto code_r0x0001004aeac4;
  case 0x61:
  case 0xdc:
    goto code_r0x0001004aea98;
  case 0x62:
    goto code_r0x0001004aeb0c;
  case 99:
    goto code_r0x0001004aea40;
  case 100:
    goto code_r0x0001004aea70;
  case 0x65:
  case 0x92:
    goto code_r0x0001004aeaf4;
  case 0x66:
    goto code_r0x0001004aea18;
  case 0x68:
    goto code_r0x0001004aea10;
  case 0x6b:
    goto code_r0x0001004ae6d8;
  case 0x6c:
    goto code_r0x0001004ae71c;
  case 0x6e:
    goto code_r0x0001004aec14;
  case 0x6f:
    goto code_r0x0001004aec24;
  case 0x71:
    goto code_r0x0001004aec04;
  case 0x73:
    goto code_r0x0001004aec34;
  case 0x74:
    goto code_r0x0001004aec4c;
  case 0x75:
    goto code_r0x0001004aec0c;
  case 0x76:
    goto code_r0x0001004aec64;
  case 0x78:
    goto code_r0x0001004aec54;
  case 0x7a:
  case 0x85:
    goto code_r0x0001004aebb8;
  case 0x7d:
    goto code_r0x0001004aebf4;
  case 0x80:
    goto code_r0x0001004aecb4;
  case 0x81:
    goto code_r0x0001004ae764;
  case 0x82:
    goto code_r0x0001004ae7a8;
  case 0x84:
  case 0x9f:
    goto code_r0x0001004aeba8;
  case 0x8c:
    break;
  case 0x8e:
    goto code_r0x0001004aebe8;
  case 0x90:
    goto code_r0x0001004aeb4c;
  case 0x91:
    goto code_r0x0001004aebd0;
  case 0x96:
    goto code_r0x0001004aec48;
  case 0x97:
  case 0xde:
    goto code_r0x0001004ae708;
  case 0x98:
  case 0xd7:
    goto code_r0x0001004ae74c;
  case 0x9e:
    goto code_r0x0001004aeb24;
  case 0xa3:
    goto code_r0x0001004aeb54;
  case 0xac:
    goto code_r0x0001004aec28;
  case 0xad:
    goto code_r0x0001004ae718;
  case 0xae:
    goto code_r0x0001004ae75c;
  case 0xb0:
    goto code_r0x0001004aea24;
  case 0xb1:
    goto code_r0x0001004aea34;
  case 0xb2:
    goto code_r0x0001004ae9fc;
  case 0xb3:
    goto code_r0x0001004aea14;
  case 0xb4:
    goto code_r0x0001004ae9c0;
  case 0xb5:
code_r0x0001004aea44:
    pppppppuVar23 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_2e8 = pppppppuVar18;
  case 0xbd:
    pppppppuStack_2d0 = pppppppuVar23;
code_r0x0001004aea50:
    pppppppuVar25 = (ulong *******)0x800000000000006e;
    pppppppuVar23 = pppppppuStack_b8;
code_r0x0001004aea5c:
    *pppppppuStack_338 = (ulong ******)pppppppuVar25;
    pppppppuStack_338[1] = (ulong ******)pppppppuVar23;
code_r0x0001004aea64:
    unaff_x22 = uStack_328;
code_r0x0001004aea68:
    unaff_x27 = &ppppppuStack_310;
    pppppppuVar23 = (ulong *******)0x2;
code_r0x0001004aea70:
    pppppppuVar23 = (ulong *******)((ulong)pppppppuVar23 | 0x8000000000000000);
code_r0x0001004aea74:
    in_OV = SBORROW8((long)unaff_x23,(long)pppppppuVar23);
    in_NG = (long)unaff_x23 - (long)pppppppuVar23 < 0;
code_r0x0001004aea78:
    if (in_NG == in_OV) {
code_r0x0001004ae958:
      if (unaff_x23 != (ulong *******)0x0) {
LAB_1004ae95c:
        _free(unaff_x22);
      }
    }
LAB_1004aea7c:
    param_2 = unaff_x27 + 4;
code_r0x0001004aea80:
    FUN_100d34830(param_2);
code_r0x0001004aea84:
    if ((byte)ppppppuStack_310 != 0x16) {
      FUN_100e077ec(&ppppppuStack_310);
code_r0x0001004aea98:
    }
    goto code_r0x0001004aec24;
  case 0xb6:
    goto code_r0x0001004aea5c;
  case 0xb7:
    goto code_r0x0001004aea1c;
  case 0xb8:
    goto code_r0x0001004aea74;
  case 0xb9:
    goto code_r0x0001004ae9f0;
  case 0xba:
    goto code_r0x0001004aea64;
  case 0xbb:
    goto code_r0x0001004ae998;
  case 0xbc:
  case 0xd0:
    goto code_r0x0001004ae9c8;
  case 0xbe:
    goto code_r0x0001004ae970;
  case 0xbf:
    goto code_r0x0001004aea04;
  case 0xc0:
    goto code_r0x0001004ae968;
  case 0xc2:
    goto code_r0x0001004aeac0;
  case 0xc3:
    goto code_r0x0001004ae6ec;
  case 200:
    goto code_r0x0001004ae554;
  case 0xc9:
    goto code_r0x0001004ae620;
  case 0xca:
    goto code_r0x0001004ae444;
  case 0xcb:
    goto code_r0x0001004ae800;
  case 0xcc:
    goto LAB_1004ae900;
  case 0xcd:
    goto code_r0x0001004ae688;
  case 0xce:
    goto code_r0x0001004aea30;
  case 0xcf:
  case 0xe6:
    goto code_r0x0001004ae4f8;
  case 0xd1:
    goto code_r0x0001004ae3dc;
  case 0xd2:
    goto code_r0x0001004ae490;
  case 0xd3:
    goto code_r0x0001004ae8a4;
  case 0xd4:
    goto code_r0x0001004ae38c;
  case 0xd5:
  case 0xec:
    goto code_r0x0001004ae5c4;
  case 0xd6:
code_r0x0001004ae330:
    pppppppuStack_320 = pppppppuVar26;
  case 0xff:
    pppppppuVar25 = pppppppuVar25 + -8;
code_r0x0001004ae338:
    pppppppuStack_340 = (ulong *******)(((ulong)pppppppuVar25 >> 6) + 1);
    unaff_x24 = (ulong *******)0x8000000000000000;
    unaff_x23 = (ulong *******)0x8000000000000001;
    unaff_x28 = (ulong *******)0x8000000000000000;
    pppppppuVar18 = pppppppuVar23 + 8;
    pppppppuVar31 = pppppppuVar23 + 8;
    pppppppuStack_338 = param_2;
code_r0x0001004ae394:
    do {
      pppppppuVar26 = uStack_c0;
      unaff_x27 = pppppppuVar31 + -8;
      bVar22 = *(byte *)unaff_x27;
      pppppppuVar25 = (ulong *******)(ulong)bVar22;
      pppppppuVar29 = unaff_x25;
      pppppppuVar30 = pppppppuVar18;
      pppppppuVar3 = pppppppuVar18;
      if (bVar22 == 0x16) break;
      uStack_c0 = (ulong *******)CONCAT71(uStack_c0._1_7_,bVar22);
      pppppppuVar14 = uStack_c0;
      ppppppuVar19 = pppppppuVar31[-6];
      *(ulong *******)((long)unaff_x22 + 0x17) = pppppppuVar31[-5];
      *(ulong *******)((long)unaff_x22 + 0xf) = ppppppuVar19;
      ppppppuVar19 = *(ulong *******)((long)pppppppuVar31 + -0x3f);
      unaff_x22[1] = *(ulong *******)((long)pppppppuVar31 + -0x37);
      *unaff_x22 = ppppppuVar19;
      pppppppuStack_2f8 = (ulong *******)pppppppuVar31[-1];
      uStack_308 = SUB81(pppppppuVar31[-3],0);
      uStack_307 = (undefined7)((ulong)pppppppuVar31[-3] >> 8);
      ppppppuStack_310._0_1_ = (byte)pppppppuVar31[-4];
      ppppppuStack_310._1_7_ = (undefined7)((ulong)pppppppuVar31[-4] >> 8);
      uStack_300 = SUB81(pppppppuVar31[-2],0);
      uStack_2ff = (undefined7)((ulong)pppppppuVar31[-2] >> 8);
      param_2 = pppppppuStack_b0;
      pppppppuVar23 = pppppppuStack_b8;
      if (bVar22 < 0xd) {
        if (bVar22 == 1) {
          uStack_c0._1_1_ = SUB81(pppppppuVar26,1);
          uVar21 = 1;
          if (uStack_c0._1_1_ != '\x01') {
            uVar21 = 2;
          }
          uVar1 = 0;
          if (uStack_c0._1_1_ != '\0') {
            uVar1 = uVar21;
          }
          unaff_x20 = (ulong *******)(ulong)uVar1;
          uStack_c0 = pppppppuVar14;
        }
        else {
          pppppppuVar26 = pppppppuStack_a8;
          if (bVar22 != 4) {
code_r0x0001004ae3dc:
            if ((int)pppppppuVar25 == 0xc) {
              in_ZR = pppppppuVar26 == (ulong *******)0x6;
code_r0x0001004ae3e8:
              if ((bool)in_ZR) {
                pppppppuVar25 = (ulong *******)(ulong)(*(uint *)param_2 ^ 0x61726170);
                pppppppuVar26 = (ulong *******)(ulong)*(ushort *)((long)param_2 + 4);
                uVar27 = 0x736d;
code_r0x0001004ae554:
                in_ZR = (int)pppppppuVar25 == 0 && (int)pppppppuVar26 == (int)uVar27;
code_r0x0001004ae560:
                uVar21 = 1;
                if (!(bool)in_ZR) {
                  uVar21 = 2;
                }
                unaff_x20 = (ulong *******)(ulong)uVar21;
              }
              else if (pppppppuVar26 == (ulong *******)0x2) {
code_r0x0001004ae3f4:
                uVar21 = 2;
                if (*(short *)param_2 == 0x6469) {
                  uVar21 = 0;
                }
                unaff_x20 = (ulong *******)(ulong)uVar21;
              }
              else {
                unaff_x20 = (ulong *******)0x2;
code_r0x0001004ae604:
              }
              goto joined_r0x0001004ae408;
            }
code_r0x0001004aee30:
            pppppppuStack_2d0 = (ulong *******)((long)unaff_x25 + 1);
            bStack_f8 = (byte)unaff_x28;
            uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
            uStack_f0 = SUB81(pppppppuStack_318,0);
            uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
            pppppppuStack_2e8 = pppppppuVar18;
            ppppppuVar19 = (ulong ******)
                           thunk_FUN_108855b04(&uStack_c0,&pppppppuStack_88,&UNK_10b210ee0);
            unaff_x27 = &ppppppuStack_310;
            param_2 = pppppppuStack_338;
            goto code_r0x0001004ae8e4;
          }
          in_ZR = pppppppuStack_b8 == (ulong *******)0x1;
          pppppppuVar25 = (ulong *******)0x1;
code_r0x0001004ae460:
          uVar21 = (uint)pppppppuVar25;
          if (!(bool)in_ZR) {
            uVar21 = uVar21 + 1;
          }
          uVar1 = 0;
          if (pppppppuVar23 != (ulong *******)0x0) {
            uVar1 = uVar21;
          }
          unaff_x20 = (ulong *******)(ulong)uVar1;
        }
code_r0x0001004ae5f4:
        FUN_100e077ec(&uStack_c0);
      }
      else {
        if (bVar22 == 0xd) {
          if (pppppppuStack_b0 == (ulong *******)0x6) {
            uVar21 = 1;
            if (*(uint *)pppppppuStack_b8 != 0x61726170 ||
                *(short *)((long)pppppppuStack_b8 + 4) != 0x736d) {
              uVar21 = 2;
            }
            unaff_x20 = (ulong *******)(ulong)uVar21;
            uStack_c0 = pppppppuVar14;
          }
          else {
code_r0x0001004ae4c0:
            if (param_2 != (ulong *******)0x2) goto code_r0x0001004ae5c0;
code_r0x0001004ae4c8:
            uVar21 = 2;
            if (*(short *)pppppppuVar23 == 0x6469) {
              uVar21 = 0;
            }
            unaff_x20 = (ulong *******)(ulong)uVar21;
          }
          goto code_r0x0001004ae5f4;
        }
        if (bVar22 != 0xe) {
          if (bVar22 != 0xf) goto code_r0x0001004aee30;
          if (pppppppuStack_b0 == (ulong *******)0x6) {
            if (*(char *)pppppppuStack_b8 == 'p') {
code_r0x0001004ae57c:
              if ((((*(char *)((long)pppppppuVar23 + 1) == 'a') &&
                   (*(char *)((long)pppppppuVar23 + 2) == 'r')) &&
                  (*(char *)((long)pppppppuVar23 + 3) == 'a')) &&
                 ((*(char *)((long)pppppppuVar23 + 4) == 'm' &&
                  (*(char *)((long)pppppppuVar23 + 5) == 's')))) {
                unaff_x20 = (ulong *******)0x1;
                goto code_r0x0001004ae5f4;
              }
            }
          }
          else if ((pppppppuStack_b0 == (ulong *******)0x2) && (*(char *)pppppppuStack_b8 == 'i')) {
code_r0x0001004ae444:
            if (*(char *)((long)pppppppuVar23 + 1) == 'd') {
              unaff_x20 = (ulong *******)0x0;
code_r0x0001004ae454:
              goto code_r0x0001004ae5f4;
            }
          }
code_r0x0001004ae5c0:
          unaff_x20 = (ulong *******)0x2;
code_r0x0001004ae5c4:
          goto code_r0x0001004ae5f4;
        }
        if (pppppppuStack_a8 == (ulong *******)0x6) {
          if ((*(char *)pppppppuStack_b0 == 'p') && (*(char *)((long)pppppppuStack_b0 + 1) == 'a'))
          {
code_r0x0001004ae4f8:
            if ((*(char *)((long)param_2 + 2) == 'r') &&
               ((*(char *)((long)param_2 + 3) == 'a' && (*(char *)((long)param_2 + 4) == 'm')))) {
              pppppppuVar25 = (ulong *******)(ulong)*(byte *)((long)param_2 + 5);
code_r0x0001004ae520:
              if ((int)pppppppuVar25 == 0x73) {
                unaff_x20 = (ulong *******)0x1;
                goto joined_r0x0001004ae408;
              }
            }
          }
code_r0x0001004ae530:
          unaff_x20 = (ulong *******)0x2;
        }
        else {
          if ((pppppppuStack_a8 != (ulong *******)0x2) || (*(char *)pppppppuStack_b0 != 'i'))
          goto code_r0x0001004ae530;
          pppppppuVar25 = (ulong *******)(ulong)*(byte *)((long)pppppppuStack_b0 + 1);
code_r0x0001004ae490:
          if ((int)pppppppuVar25 != 100) goto code_r0x0001004ae530;
          unaff_x20 = (ulong *******)0x0;
        }
joined_r0x0001004ae408:
        if (pppppppuVar23 != (ulong *******)0x0) {
          _free();
        }
      }
      if (((ulong)unaff_x20 & 0xff) == 0) {
        if (unaff_x23 != (ulong *******)0x8000000000000001) {
          pppppppuStack_2d0 = (ulong *******)((long)unaff_x25 + 1);
          bStack_f8 = (byte)unaff_x28;
          uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_f0 = SUB81(pppppppuStack_318,0);
          uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
          pppppppuStack_88 = (ulong *******)&UNK_108ca26b0;
          pppppppuStack_80 = (ulong *******)0x2;
          uStack_c0 = (ulong *******)&pppppppuStack_88;
          pppppppuStack_b8 = (ulong *******)&DAT_100c7b3a0;
          pppppppuStack_2e8 = pppppppuVar18;
          ppppppuVar19 = (ulong ******)
                         thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
          unaff_x27 = &ppppppuStack_310;
          param_2 = pppppppuStack_338;
          goto code_r0x0001004ae8e4;
        }
        pppppppuVar23 = (ulong *******)(ulong)(byte)ppppppuStack_310;
code_r0x0001004ae688:
        bVar22 = (byte)pppppppuVar23;
        ppppppuStack_310._0_1_ = 0x16;
        if ((int)pppppppuVar23 == 0x16) {
          pppppppuStack_2d0 = (ulong *******)((long)unaff_x25 + 1);
          bStack_f8 = (byte)unaff_x28;
          uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_f0 = SUB81(pppppppuStack_318,0);
          uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
          pppppppuStack_2e8 = pppppppuVar18;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004aee2c;
        }
        ppppppuVar19 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar19;
        uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
code_r0x0001004ae6a8:
        uStack_c0 = (ulong *******)CONCAT71(uStack_c0._1_7_,bVar22);
        func_0x00010135ba2c(&pppppppuStack_88,&uStack_c0);
        unaff_x23 = pppppppuStack_88;
        if (pppppppuStack_88 == (ulong *******)0x8000000000000001) {
          pppppppuVar23 = (ulong *******)((long)unaff_x25 + 1);
          pppppppuStack_2e8 = pppppppuVar18;
          goto code_r0x0001004aeaa4;
        }
code_r0x0001004ae6cc:
        uStack_328 = pppppppuStack_80;
        ppppppuStack_330 = ppppppuStack_78;
      }
      else if (((uint)unaff_x20 & 0xff) == 1) {
        pppppppuVar23 = (ulong *******)0x8000000000000000;
code_r0x0001004ae620:
        bVar22 = (byte)ppppppuStack_310;
        if (unaff_x24 != pppppppuVar23) {
          pppppppuStack_2d0 = (ulong *******)((long)unaff_x25 + 1);
          bStack_f8 = (byte)unaff_x28;
          uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_f0 = SUB81(pppppppuStack_318,0);
          uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
          pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
          pppppppuStack_80 = (ulong *******)0x6;
          uStack_c0 = (ulong *******)&pppppppuStack_88;
          pppppppuStack_b8 = (ulong *******)&DAT_100c7b3a0;
          pppppppuStack_2e8 = pppppppuVar18;
          ppppppuVar19 = (ulong ******)
                         thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
          unaff_x27 = &ppppppuStack_310;
          *pppppppuStack_338 = (ulong ******)0x800000000000006e;
          pppppppuStack_338[1] = ppppppuVar19;
          unaff_x22 = uStack_328;
          goto joined_r0x0001004aed30;
        }
        ppppppuStack_310._0_1_ = 0x16;
        in_ZR = bVar22 == 0x16;
code_r0x0001004ae638:
        if ((bool)in_ZR) {
          pppppppuStack_2d0 = (ulong *******)((long)unaff_x25 + 1);
          bStack_f8 = (byte)unaff_x28;
          uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_f0 = SUB81(pppppppuStack_318,0);
          uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
          pppppppuStack_2e8 = pppppppuVar18;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x0001004aee2c;
        }
        ppppppuVar19 = *unaff_x21;
        pppppppuStack_320[1] = unaff_x21[1];
        *pppppppuStack_320 = ppppppuVar19;
        uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)pppppppuStack_320 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)pppppppuStack_320 + 0xf) = uVar24;
        pppppppuStack_88 = (ulong *******)CONCAT71(pppppppuStack_88._1_7_,bVar22);
        param_2 = (ulong *******)&uStack_c0;
        param_3 = (ulong *******)&pppppppuStack_88;
code_r0x0001004ae660:
        func_0x00010132b724(param_2,param_3);
        if (uStack_c0 == (ulong *******)0x8000000000000000) goto code_r0x0001004aea44;
        pppppppuStack_318 = pppppppuStack_b8;
        pppppppuStack_e0 = pppppppuStack_a8;
        uStack_e8 = SUB81(pppppppuStack_b0,0);
        uStack_e7 = (undefined7)((ulong)pppppppuStack_b0 >> 8);
        ppppppuStack_d0 = ppppppuStack_98;
        ppppppuStack_d8 = ppppppuStack_a0;
        pppppppuStack_c8 = pppppppuStack_90;
        unaff_x24 = uStack_c0;
        unaff_x28 = uStack_c0;
      }
      else {
code_r0x0001004ae6d8:
        pppppppuVar23 = (ulong *******)(ulong)(byte)ppppppuStack_310;
        ppppppuStack_310._0_1_ = 0x16;
code_r0x0001004ae6e4:
        bVar22 = (byte)pppppppuVar23;
        if ((int)pppppppuVar23 == 0x16) {
          pppppppuStack_2d0 = (ulong *******)((long)unaff_x25 + 1);
          bStack_f8 = (byte)unaff_x28;
          uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
          uStack_f0 = SUB81(pppppppuStack_318,0);
          uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
          pppppppuStack_2e8 = pppppppuVar18;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004aee2c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004aee30);
          (*pcVar4)();
        }
code_r0x0001004ae6ec:
        ppppppuVar19 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar19;
        uVar24 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar24;
        uStack_c0 = (ulong *******)CONCAT71(uStack_c0._1_7_,bVar22);
        FUN_100e077ec(&uStack_c0);
code_r0x0001004ae708:
      }
code_r0x0001004ae37c:
      param_2 = pppppppuVar18 + 8;
      unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
      in_ZR = unaff_x27 + 8 == unaff_x19;
code_r0x0001004ae38c:
      pppppppuVar29 = pppppppuStack_340;
      pppppppuVar30 = unaff_x19;
      pppppppuVar18 = param_2;
      pppppppuVar31 = param_2;
      pppppppuVar3 = unaff_x19;
    } while (!(bool)in_ZR);
code_r0x0001004ae88c:
    pppppppuStack_2e8 = pppppppuVar3;
    bStack_f8 = (byte)unaff_x28;
    uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_f0 = SUB81(pppppppuStack_318,0);
    uStack_ef = (undefined7)((ulong)pppppppuStack_318 >> 8);
    in_ZR = unaff_x23 == (ulong *******)0x8000000000000001;
    unaff_x22 = uStack_328;
    pppppppuStack_2d0 = pppppppuVar29;
code_r0x0001004ae8a4:
    param_2 = pppppppuStack_338;
    if ((bool)in_ZR) {
code_r0x0001004ae8b0:
      unaff_x27 = &ppppppuStack_310;
      pppppppuVar23 = (ulong *******)&UNK_108ca26b0;
code_r0x0001004ae8b8:
      pppppppuStack_80 = (ulong *******)0x2;
      uStack_c0 = (ulong *******)&pppppppuStack_88;
      pppppppuStack_b8 = (ulong *******)&DAT_100c7b3a0;
      unaff_x23 = (ulong *******)0x8000000000000001;
      pppppppuStack_88 = pppppppuVar23;
      ppppppuVar19 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
      uStack_328 = unaff_x22;
code_r0x0001004ae8e4:
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = ppppppuVar19;
      pppppppuVar23 = (ulong *******)0x8000000000000000;
      unaff_x22 = uStack_328;
code_r0x0001004ae8f4:
      if (unaff_x24 != pppppppuVar23) goto joined_r0x0001004aed30;
      goto LAB_1004ae948;
    }
code_r0x0001004ae968:
    in_ZR = unaff_x24 == (ulong *******)0x8000000000000000;
code_r0x0001004ae970:
    unaff_x27 = &ppppppuStack_310;
    unaff_x21 = pppppppuStack_338;
    if ((bool)in_ZR) {
      pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_80 = (ulong *******)0x6;
      pppppppuVar23 = (ulong *******)&pppppppuStack_88;
      pppppppuVar25 = (ulong *******)&DAT_100c7b3a0;
code_r0x0001004ae998:
      uStack_c0 = pppppppuVar23;
      pppppppuStack_b8 = pppppppuVar25;
      param_2 = (ulong *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
      pppppppuVar23 = (ulong *******)0x6e;
code_r0x0001004ae9b0:
      *unaff_x21 = (ulong ******)((ulong)pppppppuVar23 | 0x8000000000000000);
      unaff_x21[1] = (ulong ******)param_2;
      if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
code_r0x0001004ae9c0:
        goto LAB_1004ae95c;
      }
      goto LAB_1004aea7c;
    }
    unaff_x20 = (ulong *******)0x6e;
code_r0x0001004ae9c8:
    unaff_x20 = (ulong *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
    unaff_x21[4] = (ulong ******)pppppppuStack_e0;
    unaff_x21[3] = (ulong ******)CONCAT71(uStack_e7,uStack_e8);
    unaff_x21[6] = ppppppuStack_d0;
    unaff_x21[5] = ppppppuStack_d8;
    *unaff_x21 = (ulong ******)(unaff_x20 + -9);
    unaff_x21[1] = (ulong ******)unaff_x24;
    unaff_x21[2] = (ulong ******)pppppppuStack_318;
    pppppppuVar23 = pppppppuStack_c8;
code_r0x0001004ae9f0:
    unaff_x21[7] = (ulong ******)pppppppuVar23;
    unaff_x21[8] = (ulong ******)unaff_x23;
    unaff_x21[9] = (ulong ******)unaff_x22;
    unaff_x21[10] = ppppppuStack_330;
code_r0x0001004ae9fc:
    param_3 = unaff_x21;
    param_2 = (ulong *******)&pppppppuStack_2c0;
    unaff_x21 = param_3;
code_r0x0001004aea04:
    _memcpy(param_2,param_3,0x1c0);
    param_2 = unaff_x27 + 4;
code_r0x0001004aea10:
    FUN_100d34830(param_2);
code_r0x0001004aea14:
    in_ZR = unaff_x19 == pppppppuVar30;
code_r0x0001004aea18:
    if (!(bool)in_ZR) {
code_r0x0001004aea1c:
      pppppppuVar23 = (ulong *******)((long)unaff_x19 - (long)pppppppuVar30);
code_r0x0001004aea20:
      pppppppuVar23 = (ulong *******)((ulong)pppppppuVar23 >> 6);
code_r0x0001004aea24:
      uStack_c0 = pppppppuVar29;
code_r0x0001004aea28:
      param_4 = &UNK_10b23a190;
code_r0x0001004aea30:
      param_2 = (ulong *******)((long)pppppppuVar23 + (long)pppppppuVar29);
code_r0x0001004aea34:
      ppppppuVar19 = (ulong ******)thunk_FUN_1087e422c(param_2,&uStack_c0,param_4);
      *unaff_x21 = (ulong ******)unaff_x20;
      unaff_x21[1] = ppppppuVar19;
code_r0x0001004aea40:
      goto code_r0x0001004aecc8;
    }
    goto code_r0x0001004aec24;
  case 0xd8:
    goto LAB_1004ae95c;
  case 0xd9:
    goto code_r0x0001004aeac8;
  case 0xda:
    goto code_r0x0001004ae7b8;
  case 0xdb:
    goto code_r0x0001004ae85c;
  case 0xdf:
    goto code_r0x0001004ae560;
  case 0xe0:
    goto code_r0x0001004ae638;
  case 0xe1:
    goto code_r0x0001004ae460;
  case 0xe2:
    goto code_r0x0001004ae7b4;
  case 0xe3:
    goto code_r0x0001004ae82c;
  case 0xe4:
    goto code_r0x0001004ae6a8;
  case 0xe5:
    goto code_r0x0001004ae8f4;
  case 0xe7:
    goto code_r0x0001004ae88c;
  case 0xe8:
    goto code_r0x0001004ae3f4;
  case 0xe9:
    goto code_r0x0001004ae4c8;
  case 0xea:
    goto code_r0x0001004ae7fc;
  case 0xeb:
    goto code_r0x0001004ae394;
  case 0xed:
    goto code_r0x0001004ae338;
  case 0xee:
    goto code_r0x0001004ae780;
  case 0xf0:
    goto code_r0x0001004ae724;
  case 0xf1:
    goto code_r0x0001004ae57c;
  case 0xf2:
    goto code_r0x0001004ae660;
  case 0xf3:
    goto code_r0x0001004ae454;
  case 0xf4:
    goto code_r0x0001004ae7dc;
  case 0xf5:
    goto code_r0x0001004ae8b8;
  case 0xf6:
    goto code_r0x0001004ae6cc;
  case 0xf7:
    goto code_r0x0001004ae9b0;
  case 0xf8:
    goto code_r0x0001004ae520;
  case 0xf9:
    goto code_r0x0001004ae954;
  case 0xfa:
    goto code_r0x0001004ae3e8;
  case 0xfb:
    goto code_r0x0001004ae4c0;
  case 0xfc:
    goto code_r0x0001004ae84c;
  case 0xfd:
    goto code_r0x0001004ae37c;
  case 0xfe:
    goto code_r0x0001004ae604;
  }
  pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,bVar22);
code_r0x0001004aebfc:
  param_4 = &UNK_10b219a90;
code_r0x0001004aec04:
  pppppppuVar18 = (ulong *******)&pppppppuStack_2c0;
  param_3 = (ulong *******)&pppppppuStack_88;
code_r0x0001004aec0c:
  pppppppuVar18 = (ulong *******)FUN_107c05dcc(pppppppuVar18,param_3,param_4);
  pppppppuVar23 = (ulong *******)0x6e;
code_r0x0001004aec14:
  *param_2 = (ulong ******)((ulong)pppppppuVar23 | 0x8000000000000000);
  param_2[1] = (ulong ******)pppppppuVar18;
code_r0x0001004aec24:
code_r0x0001004aec28:
code_r0x0001004aec34:
  return;
}

