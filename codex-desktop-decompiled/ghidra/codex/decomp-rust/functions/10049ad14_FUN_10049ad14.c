
/* WARNING: Type propagation algorithm not settling */

void FUN_10049ad14(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  undefined7 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  ulong *******pppppppuVar17;
  undefined1 in_ZR;
  ulong *******pppppppuVar19;
  ulong ******ppppppuVar20;
  uint uVar21;
  byte bVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  ulong *******pppppppuVar30;
  ulong ******ppppppuVar31;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******pppppppuVar32;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar33;
  ulong *******unaff_x25;
  ulong *******pppppppuVar34;
  ulong *******unaff_x27;
  ulong *******pppppppuVar35;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar36;
  undefined8 unaff_x30;
  ulong *******pppppppuVar37;
  ulong *******pppppppuVar38;
  ulong *******pppppppuVar39;
  ulong *******pppppppuVar40;
  byte abStack_380 [80];
  ulong *******pppppppuStack_330;
  ulong *******pppppppuStack_328;
  ulong *******pppppppuStack_320;
  ulong *******pppppppuStack_318;
  ulong *******pppppppuStack_310;
  undefined8 *puStack_308;
  ulong ******ppppppuStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  ulong *******pppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong ******ppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong ******ppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong ******ppppppuStack_2a0;
  ulong *******pppppppuStack_298;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong *******pppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  undefined8 uStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong ******ppppppuStack_98;
  ulong ******ppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  ulong *******pppppppuStack_78;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar18;
  
  pppppppuVar38 = param_1._8_8_;
  ppppppuVar31 = param_1._0_8_;
  puVar36 = &stack0xfffffffffffffff0;
  pppppppuVar17 = (ulong *******)&pppppppuStack_330;
  pppppppuVar11 = (ulong *******)&pppppppuStack_330;
  bVar22 = *(byte *)param_4;
  pppppppuVar23 = (ulong *******)(ulong)bVar22;
  pppppppuVar28 = (ulong *******)&UNK_108c99f40;
  pppppppuVar13 = (ulong *******)&pppppppuStack_330;
  pppppppuVar14 = (ulong *******)&pppppppuStack_330;
  pppppppuVar15 = (ulong *******)&pppppppuStack_330;
  pppppppuVar16 = (ulong *******)&pppppppuStack_330;
  pppppppuVar18 = (ulong *******)&pppppppuStack_330;
  pppppppuVar9 = (ulong *******)&pppppppuStack_330;
  pppppppuVar10 = (ulong *******)&pppppppuStack_330;
  pppppppuVar12 = (ulong *******)&pppppppuStack_330;
  pppppppuVar6 = (ulong *******)&pppppppuStack_330;
  pppppppuVar7 = (ulong *******)&pppppppuStack_330;
  pppppppuVar8 = (ulong *******)&pppppppuStack_330;
  pppppppuVar19 = param_3;
  pppppppuVar24 = pppppppuVar23;
  pppppppuVar29 = pppppppuVar28;
  pppppppuVar30 =
       (ulong *******)
       (&UNK_10049ad54 + (ulong)*(ushort *)(&UNK_108c99f40 + (long)pppppppuVar23 * 2) * 4);
  pppppppuVar32 = unaff_x22;
  pppppppuVar34 = unaff_x25;
  pppppppuVar35 = unaff_x27;
  ppppppuVar20 = ppppppuVar31;
  pppppppuVar37 = pppppppuVar38;
  pppppppuVar39 = param_2._0_8_;
  pppppppuVar40 = param_2._8_8_;
  switch(bVar22) {
  case 0:
  case 0x5b:
    ppppppuStack_2b0 =
         (ulong ******)((ulong)CONCAT61(ppppppuStack_2b0._2_6_,*(byte *)((long)param_4 + 1)) << 8);
  case 0x5f:
  case 0xe4:
    ppppppuStack_2b0 = (ulong ******)((ulong)ppppppuStack_2b0 & 0xffffffffffffff00);
    goto code_r0x00010049b654;
  case 1:
  case 0x46:
  case 0x58:
    pppppppuVar23 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0xac:
  case 0xc2:
code_r0x00010049b608:
    pppppppuStack_2a8 = pppppppuVar23;
code_r0x00010049b60c:
    bVar22 = 1;
    break;
  case 2:
  case 0xe1:
    pppppppuVar23 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x61:
    goto code_r0x00010049b608;
  case 3:
  case 0x67:
  case 0xe2:
    pppppppuVar23 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x00010049b608;
  case 4:
  case 0xa7:
  case 0xbd:
    pppppppuVar23 = (ulong *******)param_4[1];
    goto code_r0x00010049b608;
  case 5:
  case 0x59:
    pppppppuVar23 = (ulong *******)(long)(char)*(byte *)((long)param_4 + 1);
    goto code_r0x00010049b648;
  case 6:
  case 0x65:
    pppppppuVar23 = (ulong *******)(long)*(short *)((long)param_4 + 2);
  case 0xee:
    goto code_r0x00010049b648;
  case 7:
  case 0xe6:
    pppppppuVar23 = (ulong *******)(long)*(int *)((long)param_4 + 4);
    goto code_r0x00010049b648;
  case 8:
  case 0x62:
    pppppppuVar23 = (ulong *******)param_4[1];
    goto code_r0x00010049b648;
  case 9:
    pppppppuStack_2a8 = (ulong *******)(double)*(float *)((long)param_4 + 4);
  case 0x5e:
code_r0x00010049b63c:
    bVar22 = 3;
code_r0x00010049b640:
    break;
  case 10:
  case 0x4b:
    pppppppuStack_2a8 = (ulong *******)param_4[1];
    goto code_r0x00010049b63c;
  case 0xb:
  case 0x9a:
  case 0xb0:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x3e:
  case 0x96:
  case 0xd8:
    pppppppuVar9 = (ulong *******)&stack0xffffffffffffffa0;
    puVar36 = unaff_x29;
code_r0x00010049b578:
    unaff_x20 = *(ulong ********)((long)pppppppuVar9 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar9 + 0x48);
    pppppppuVar10 = pppppppuVar9;
code_r0x00010049b584:
    pppppppuVar12 = pppppppuVar10;
code_r0x00010049b588:
    pppppppuVar11 = (ulong *******)((long)pppppppuVar12 + 0x60);
code_r0x00010049b58c:
    *(ulong ********)((long)pppppppuVar11 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar11 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar11 + -0x10) = puVar36;
    *(undefined8 *)((long)pppppppuVar11 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar11 + -0x44) = 0;
    uVar21 = (uint)param_4;
    if (uVar21 < 0x80) {
      *(byte *)((long)pppppppuVar11 + -0x44) = (byte)param_4;
      uVar25 = 1;
    }
    else {
      bVar22 = (byte)param_4 & 0x3f | 0x80;
      if (uVar21 < 0x800) {
        *(byte *)((long)pppppppuVar11 + -0x44) = (byte)(uVar21 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar11 + -0x43) = bVar22;
        uVar25 = 2;
      }
      else {
        bVar1 = (byte)(uVar21 >> 6) & 0x3f | 0x80;
        if (uVar21 < 0x10000) {
          *(byte *)((long)pppppppuVar11 + -0x44) = (byte)(uVar21 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar11 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar11 + -0x42) = bVar22;
          uVar25 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar11 + -0x44) = (byte)(uVar21 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar11 + -0x43) = (byte)(uVar21 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar11 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar11 + -0x41) = bVar22;
          uVar25 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar11 + -0x38) = (undefined1 *)((long)pppppppuVar11 + -0x44);
    *(undefined8 *)((long)pppppppuVar11 + -0x30) = uVar25;
    *(undefined1 *)((long)pppppppuVar11 + -0x40) = 5;
    ppppppuVar31 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar11 + -0x40),
                                       (undefined1 *)((long)pppppppuVar11 + -0x21),&UNK_10b21acb0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar31;
    return;
  case 0xc:
    param_4 = param_4 + 1;
  case 0xdf:
code_r0x00010049b5a0:
    pppppppuVar13 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010049b5a4:
    puVar36 = *(undefined1 **)((long)pppppppuVar13 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar13 + 0x58);
    pppppppuVar14 = pppppppuVar13;
code_r0x00010049b5a8:
    unaff_x20 = *(ulong ********)((long)pppppppuVar14 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar14 + 0x48);
    pppppppuVar15 = pppppppuVar14;
code_r0x00010049b5ac:
    unaff_x22 = *(ulong ********)((long)pppppppuVar15 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar15 + 0x38);
    pppppppuVar16 = pppppppuVar15;
code_r0x00010049b5b4:
    pppppppuVar18 = pppppppuVar16;
code_r0x00010049b5b8:
    pppppppuVar17 = (ulong *******)((long)pppppppuVar18 + 0x60);
code_r0x00010049b5bc:
    *(ulong ********)((long)pppppppuVar17 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar17 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar17 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar17 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar17 + -0x10) = puVar36;
    *(undefined8 *)((long)pppppppuVar17 + -8) = unaff_x30;
    ppppppuVar31 = param_4[1];
    ppppppuVar20 = param_4[2];
    *(ulong *******)((long)pppppppuVar17 + -0x48) = ppppppuVar31;
    *(ulong *******)((long)pppppppuVar17 + -0x40) = ppppppuVar20;
    *(undefined1 *)((long)pppppppuVar17 + -0x50) = 5;
    ppppppuVar20 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar17 + -0x50),
                                       (undefined1 *)((long)pppppppuVar17 + -0x31),&UNK_10b21acb0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar20;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar31);
    }
    return;
  case 0xd:
    pppppppuStack_2a8 = (ulong *******)param_4[1];
    ppppppuStack_2a0 = param_4[2];
  case 0x5d:
    bVar22 = 5;
    break;
  case 0xe:
  case 0x9c:
  case 0xb2:
  case 0xfa:
    param_4 = param_4 + 1;
  case 0x68:
  case 0xa9:
  case 0xbf:
  case 0xe0:
    pppppppuVar6 = (ulong *******)&stack0xffffffffffffffa0;
    puVar36 = unaff_x29;
code_r0x00010049b550:
    unaff_x20 = *(ulong ********)((long)pppppppuVar6 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar6 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar6 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar6 + 0x38);
    pppppppuVar7 = pppppppuVar6;
code_r0x00010049b558:
    pppppppuVar8 = pppppppuVar7;
code_r0x00010049b560:
    *(ulong ********)((long)pppppppuVar8 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar8 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar8 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar8 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar8 + 0x50) = puVar36;
    *(undefined8 *)((long)pppppppuVar8 + 0x58) = unaff_x30;
    ppppppuVar31 = param_4[1];
    ppppppuVar20 = param_4[2];
    *(ulong *******)((long)pppppppuVar8 + 0x18) = ppppppuVar31;
    *(ulong *******)((long)pppppppuVar8 + 0x20) = ppppppuVar20;
    *(undefined1 *)((long)pppppppuVar8 + 0x10) = 6;
    ppppppuVar20 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar8 + 0x10),
                                       (undefined1 *)((long)pppppppuVar8 + 0x2f),&UNK_10b21acb0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar20;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar31);
    }
    return;
  case 0xf:
  case 0xe9:
    pppppppuStack_2a8 = (ulong *******)param_4[1];
    ppppppuStack_2a0 = param_4[2];
  case 0x4d:
  case 0x5a:
    bVar22 = 6;
    break;
  case 0x10:
    bVar22 = 8;
    break;
  default:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_2a8 = (ulong *******)unaff_x20[1];
    ppppppuStack_2b0 = *unaff_x20;
    pppppppuStack_298 = (ulong *******)unaff_x20[3];
    ppppppuStack_2a0 = unaff_x20[2];
    func_0x000107c04904(param_3,&ppppppuStack_2b0);
    goto code_r0x00010049b1b8;
  case 0x12:
    bVar22 = 7;
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuVar37 = (ulong *******)unaff_x20[1];
    ppppppuVar20 = *unaff_x20;
  case 0x40:
  case 0x98:
  case 0xda:
  case 0xef:
    pppppppuVar38 = (ulong *******)unaff_x20[3];
    ppppppuVar31 = unaff_x20[2];
    ppppppuStack_2b0 = ppppppuVar20;
    pppppppuStack_2a8 = pppppppuVar37;
code_r0x00010049b1a8:
    param_4 = &ppppppuStack_2b0;
    ppppppuStack_2a0 = ppppppuVar31;
    pppppppuStack_298 = pppppppuVar38;
code_r0x00010049b1b0:
code_r0x00010049b1b4:
    func_0x000107c053a4(param_3,param_4);
code_r0x00010049b1b8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x14:
    unaff_x23 = (ulong *******)param_4[1];
    unaff_x20 = (ulong *******)param_4[2];
    unaff_x25 = (ulong *******)param_4[3];
  case 0xf0:
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    uStack_b8 = unaff_x20;
    pppppppuStack_b0 = unaff_x20;
code_r0x00010049b1ec:
    ppppppuStack_98 = (ulong ******)0x0;
    pppppppuStack_a8 = unaff_x23;
    pppppppuStack_a0 = unaff_x19;
code_r0x00010049b1f4:
    unaff_x21 = unaff_x20;
    if (unaff_x25 == (ulong *******)0x0) {
code_r0x00010049b210:
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22fa78,&UNK_10b20a590);
code_r0x00010049b22c:
      *param_3 = (ulong ******)0x800000000000006e;
      param_3[1] = (ulong ******)unaff_x22;
code_r0x00010049b238:
      lVar33 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar33 = lVar33 + -1, lVar33 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_b0 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x00010049b210;
      uStack_2f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      ppppppuStack_300._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_2f8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      pppppppuStack_2e8 = (ulong *******)unaff_x20[3];
      uStack_2f0 = SUB81(unaff_x20[2],0);
      uStack_2ef = (undefined7)((ulong)unaff_x20[2] >> 8);
      ppppppuStack_98 = (ulong ******)0x1;
      ppppppuStack_300._0_1_ = *(byte *)unaff_x20;
      func_0x00010135ba2c(&bStack_e8,&ppppppuStack_300);
      unaff_x24 = (ulong *******)CONCAT71(uStack_e7,bStack_e8);
      unaff_x22 = (ulong *******)CONCAT71(uStack_df,uStack_e0);
      if (unaff_x24 == (ulong *******)0x8000000000000001) goto code_r0x00010049b22c;
      if (unaff_x25 == (ulong *******)0x1) {
code_r0x00010049b2d4:
        pppppppuVar19 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22fa78,&UNK_10b20a590);
code_r0x00010049b2ec:
        *param_3 = (ulong ******)0x800000000000006e;
        param_3[1] = (ulong ******)pppppppuVar19;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x00010049b238;
      }
      unaff_x25 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
      unaff_x21 = unaff_x20 + 8;
      bVar22 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_b0 = unaff_x21;
      if (bVar22 == 0x16) goto code_r0x00010049b2d4;
      pppppppuVar38 = *(ulong ********)((long)unaff_x20 + 0x29);
      ppppppuVar31 = *(ulong *******)((long)unaff_x20 + 0x21);
code_r0x00010049b6a0:
      uStack_df = SUB87(pppppppuVar38,0);
      uStack_e7 = SUB87(ppppppuVar31,0);
      uStack_e0 = (undefined1)((ulong)ppppppuVar31 >> 0x38);
code_r0x00010049b6a4:
      pppppppuVar38 = (ulong *******)unaff_x20[7];
      ppppppuVar31 = unaff_x20[6];
code_r0x00010049b6a8:
      uStack_d8 = SUB81(ppppppuVar31,0);
      uStack_d7 = (undefined7)((ulong)ppppppuVar31 >> 8);
      pppppppuStack_d0 = pppppppuVar38;
code_r0x00010049b6ac:
      bStack_e8 = bVar22;
      ppppppuStack_98 = (ulong ******)0x2;
code_r0x00010049b6b8:
      func_0x000101291ac4(&ppppppuStack_300,&bStack_e8);
      pppppppuVar23 = (ulong *******)CONCAT71(ppppppuStack_300._1_7_,(byte)ppppppuStack_300);
      pppppppuVar19 = (ulong *******)CONCAT71(uStack_2f7,uStack_2f8);
      if (pppppppuVar23 == (ulong *******)0x8000000000000000) goto code_r0x00010049b2ec;
code_r0x00010049b6d4:
      unaff_x19 = (ulong *******)0x800000000000006e;
      ppppppuVar31 = (ulong ******)CONCAT71(uStack_2ef,uStack_2f0);
      pppppppuVar38 = pppppppuStack_2e8;
      pppppppuVar39 = pppppppuStack_2e0;
      pppppppuVar40 = pppppppuStack_2d8;
code_r0x00010049b6e0:
      param_3[4] = (ulong ******)pppppppuVar38;
      param_3[3] = ppppppuVar31;
      param_3[6] = (ulong ******)pppppppuVar40;
      param_3[5] = (ulong ******)pppppppuVar39;
code_r0x00010049b6e8:
      *param_3 = (ulong ******)((long)unaff_x19 + -0x5c);
      param_3[1] = (ulong ******)pppppppuVar23;
      param_3[2] = (ulong ******)pppppppuVar19;
      param_3[7] = (ulong ******)unaff_x24;
      param_3[8] = (ulong ******)unaff_x22;
code_r0x00010049b6f8:
      param_3[9] = (ulong ******)unaff_x25;
      pppppppuVar19 = &ppppppuStack_2b0;
code_r0x00010049b700:
      param_5 = (undefined *)0x1c0;
      param_4 = param_3;
code_r0x00010049b708:
      _memcpy(pppppppuVar19,param_4,param_5);
      pppppppuVar19 = (ulong *******)FUN_100fbc738(&uStack_b8);
      if (pppppppuVar19 != (ulong *******)0x0) {
code_r0x00010049b718:
        *param_3 = (ulong ******)unaff_x19;
        param_3[1] = (ulong ******)pppppppuVar19;
code_r0x00010049b71c:
        FUN_100e44f40(&ppppppuStack_2b0);
      }
    }
    goto code_r0x00010049b678;
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
    ppppppuStack_2d0 = param_4[1];
    pppppppuStack_2e0 = (ulong *******)param_4[2];
    ppppppuVar31 = param_4[3];
    unaff_x19 = pppppppuStack_2e0 + (long)ppppppuVar31 * 8;
    ppppppuStack_300._0_1_ = 0x16;
    pppppppuStack_2c0 = (ulong *******)0x0;
    pppppppuStack_2c8 = unaff_x19;
    if (ppppppuVar31 == (ulong ******)0x0) {
      unaff_x24 = (ulong *******)0x8000000000000000;
      bStack_e8 = 0;
      uStack_e7 = 0x80000000000000;
      pppppppuStack_2d8 = pppppppuStack_2e0;
    }
    else {
      unaff_x25 = (ulong *******)0x0;
      pppppppuVar32 = (ulong *******)((ulong)&uStack_b8 | 1);
      unaff_x21 = (ulong *******)((ulong)&ppppppuStack_300 | 1);
      puStack_308 = (undefined8 *)((ulong)&pppppppuStack_88 | 1);
      pppppppuStack_330 = (ulong *******)(((long)ppppppuVar31 * 0x40 - 0x40U >> 6) + 1);
      unaff_x24 = (ulong *******)0x8000000000000000;
      unaff_x23 = (ulong *******)0x8000000000000001;
      unaff_x28 = (ulong *******)0x8000000000000000;
      pppppppuVar35 = pppppppuStack_2e0;
      pppppppuStack_328 = param_3;
      pppppppuStack_2d8 = pppppppuStack_2e0;
      do {
        param_3 = pppppppuVar35 + 8;
        bVar22 = *(byte *)pppppppuVar35;
        pppppppuVar28 = (ulong *******)(ulong)bVar22;
        pppppppuVar34 = unaff_x25;
        pppppppuVar19 = param_3;
        if (bVar22 == 0x16) break;
        uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar22);
        ppppppuVar31 = pppppppuVar35[2];
        *(ulong *******)((long)pppppppuVar32 + 0x17) = pppppppuVar35[3];
        *(ulong *******)((long)pppppppuVar32 + 0xf) = ppppppuVar31;
code_r0x00010049ae34:
        uVar2 = uStack_e7;
        bVar22 = bStack_e8;
        unaff_x22 = pppppppuStack_310;
        unaff_x27 = pppppppuStack_318;
        ppppppuVar31 = *(ulong *******)((long)pppppppuVar35 + 1);
        pppppppuVar32[1] = *(ulong *******)((long)pppppppuVar35 + 9);
        *pppppppuVar32 = ppppppuVar31;
        pppppppuStack_2e8 = (ulong *******)pppppppuVar35[7];
        uStack_2f8 = SUB81(pppppppuVar35[5],0);
        uStack_2f7 = (undefined7)((ulong)pppppppuVar35[5] >> 8);
        ppppppuStack_300._0_1_ = (byte)pppppppuVar35[4];
        ppppppuStack_300._1_7_ = (undefined7)((ulong)pppppppuVar35[4] >> 8);
        uStack_2f0 = SUB81(pppppppuVar35[6],0);
        uStack_2ef = (undefined7)((ulong)pppppppuVar35[6] >> 8);
        uVar21 = (uint)pppppppuVar28;
        bStack_e8 = (byte)unaff_x28;
        bVar1 = bStack_e8;
        uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
        uVar3 = uStack_e7;
        if (uVar21 < 0xd) {
          if (uVar21 == 1) {
            iVar27 = 1;
            if (uStack_b8._1_1_ != '\x01') {
              iVar27 = 2;
            }
            iVar26 = 0;
            if (uStack_b8._1_1_ != '\0') {
              iVar26 = iVar27;
            }
          }
          else {
            if (uVar21 != 4) {
              if (uVar21 == 0xc) {
                if (pppppppuStack_a0 == (ulong *******)0x6) {
                  iVar26 = 1;
                  if (*(int *)pppppppuStack_a8 != 0x61726170 ||
                      *(short *)((long)pppppppuStack_a8 + 4) != 0x736d) {
                    iVar26 = 2;
                  }
                }
                else if (pppppppuStack_a0 == (ulong *******)0x2) {
                  iVar26 = 2;
                  if (*(short *)pppppppuStack_a8 == 0x6469) {
                    iVar26 = 0;
                  }
                }
                else {
                  iVar26 = 2;
                }
                goto joined_r0x00010049aff0;
              }
code_r0x00010049b870:
              pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
              uStack_e0 = SUB81(pppppppuStack_318,0);
              uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
              pppppppuStack_2d8 = param_3;
              ppppppuVar31 = (ulong ******)
                             thunk_FUN_108855b04(&uStack_b8,&pppppppuStack_88,&UNK_10b210820);
              param_3 = pppppppuStack_328;
              goto code_r0x00010049b36c;
            }
            iVar27 = 1;
            if (pppppppuStack_b0 != (ulong *******)0x1) {
              iVar27 = 2;
            }
            iVar26 = 0;
            if (pppppppuStack_b0 != (ulong *******)0x0) {
              iVar26 = iVar27;
            }
          }
code_r0x00010049b07c:
          bStack_e8 = bVar22;
          uStack_e7 = uVar2;
          FUN_100e077ec(&uStack_b8);
        }
        else {
          if (uVar21 == 0xd) {
            if (pppppppuStack_a8 == (ulong *******)0x6) {
              iVar26 = 1;
              if (*(int *)pppppppuStack_b0 != 0x61726170 ||
                  *(short *)((long)pppppppuStack_b0 + 4) != 0x736d) {
                iVar26 = 2;
              }
            }
            else {
              if (pppppppuStack_a8 != (ulong *******)0x2) goto code_r0x00010049b048;
              iVar26 = 2;
              if (*(short *)pppppppuStack_b0 == 0x6469) {
                iVar26 = 0;
              }
            }
            goto code_r0x00010049b07c;
          }
          if (uVar21 != 0xe) {
            if (uVar21 != 0xf) goto code_r0x00010049b870;
            if (pppppppuStack_a8 == (ulong *******)0x6) {
              if (((((*(byte *)pppppppuStack_b0 != 0x70) ||
                    (*(byte *)((long)pppppppuStack_b0 + 1) != 0x61)) ||
                   (*(byte *)((long)pppppppuStack_b0 + 2) != 0x72)) ||
                  ((*(byte *)((long)pppppppuStack_b0 + 3) != 0x61 ||
                   (*(byte *)((long)pppppppuStack_b0 + 4) != 0x6d)))) ||
                 (*(byte *)((long)pppppppuStack_b0 + 5) != 0x73)) goto code_r0x00010049b048;
              iVar26 = 1;
            }
            else if (((pppppppuStack_a8 == (ulong *******)0x2) &&
                     (*(byte *)pppppppuStack_b0 == 0x69)) &&
                    (*(byte *)((long)pppppppuStack_b0 + 1) == 100)) {
              iVar26 = 0;
            }
            else {
code_r0x00010049b048:
              iVar26 = 2;
            }
            goto code_r0x00010049b07c;
          }
          if (pppppppuStack_a0 == (ulong *******)0x6) {
            if (((((*(byte *)pppppppuStack_a8 != 0x70) ||
                  (*(byte *)((long)pppppppuStack_a8 + 1) != 0x61)) ||
                 (*(byte *)((long)pppppppuStack_a8 + 2) != 0x72)) ||
                ((*(byte *)((long)pppppppuStack_a8 + 3) != 0x61 ||
                 (*(byte *)((long)pppppppuStack_a8 + 4) != 0x6d)))) ||
               (*(byte *)((long)pppppppuStack_a8 + 5) != 0x73)) goto code_r0x00010049afb8;
            iVar26 = 1;
          }
          else if (((pppppppuStack_a0 == (ulong *******)0x2) && (*(byte *)pppppppuStack_a8 == 0x69))
                  && (*(byte *)((long)pppppppuStack_a8 + 1) == 100)) {
            iVar26 = 0;
          }
          else {
code_r0x00010049afb8:
            iVar26 = 2;
          }
joined_r0x00010049aff0:
          bStack_e8 = bVar22;
          uStack_e7 = uVar2;
          if (pppppppuStack_b0 != (ulong *******)0x0) {
            _free();
          }
        }
        uVar2 = uStack_df;
        uVar4 = uStack_e0;
        bVar22 = (byte)ppppppuStack_300;
        uStack_e0 = SUB81(pppppppuStack_318,0);
        uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
        if (iVar26 == 0) {
          if (unaff_x23 != (ulong *******)0x8000000000000001) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuVar23 = (ulong *******)&UNK_108ca26b0;
            pppppppuVar28 = (ulong *******)0x2;
            unaff_x22 = pppppppuStack_310;
            unaff_x27 = pppppppuStack_318;
            pppppppuStack_2d8 = param_3;
            bStack_e8 = bVar1;
            uStack_e7 = uVar3;
            goto code_r0x00010049b7a8;
          }
          ppppppuStack_300._0_1_ = 0x16;
          if (bVar22 == 0x16) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_2d8 = param_3;
            bStack_e8 = bVar1;
            uStack_e7 = uVar3;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010049b86c;
          }
          ppppppuVar31 = *unaff_x21;
          pppppppuVar32[1] = unaff_x21[1];
          *pppppppuVar32 = ppppppuVar31;
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)pppppppuVar32 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)pppppppuVar32 + 0xf) = uVar25;
          uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar22);
          uStack_e0 = uVar4;
          uStack_df = uVar2;
          func_0x00010135ba2c(&pppppppuStack_88,&uStack_b8);
code_r0x00010049b144:
          if (pppppppuStack_88 == (ulong *******)0x8000000000000001) goto code_r0x00010049b4f8;
          pppppppuStack_310 = pppppppuStack_80;
          pppppppuVar23 = pppppppuStack_78;
          unaff_x23 = pppppppuStack_88;
code_r0x00010049b15c:
          pppppppuStack_320 = pppppppuVar23;
        }
        else if (iVar26 == 1) {
          if (unaff_x24 != (ulong *******)0x8000000000000000) goto code_r0x00010049b728;
          ppppppuStack_300._0_1_ = 0x16;
          if (bVar22 == 0x16) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_2d8 = param_3;
            bStack_e8 = bVar1;
            uStack_e7 = uVar3;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010049b86c:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10049b870);
            (*pcVar5)();
          }
          ppppppuVar31 = *unaff_x21;
          puStack_308[1] = unaff_x21[1];
          *puStack_308 = ppppppuVar31;
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)puStack_308 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)puStack_308 + 0xf) = uVar25;
          pppppppuStack_88 = (ulong *******)CONCAT71(pppppppuStack_88._1_7_,bVar22);
          uStack_e0 = uVar4;
          uStack_df = uVar2;
          func_0x000101291ac4(&uStack_b8,&pppppppuStack_88);
          if (uStack_b8 == (ulong *******)0x8000000000000000) {
            pppppppuVar23 = (ulong *******)((long)unaff_x25 + 1);
            goto code_r0x00010049b4a4;
          }
          pppppppuStack_318 = pppppppuStack_b0;
          unaff_x28 = uStack_b8;
code_r0x00010049adf0:
          unaff_x24 = unaff_x28;
          pppppppuStack_d0 = pppppppuStack_a0;
          uStack_d8 = SUB81(pppppppuStack_a8,0);
          uStack_d7 = (undefined7)((ulong)pppppppuStack_a8 >> 8);
          ppppppuStack_c0 = ppppppuStack_90;
          ppppppuStack_c8 = ppppppuStack_98;
          unaff_x28 = unaff_x24;
        }
        else {
          pppppppuVar23 = (ulong *******)(ulong)(byte)ppppppuStack_300;
          ppppppuStack_300._0_1_ = 0x16;
          uStack_e0 = uVar4;
          uStack_df = uVar2;
code_r0x00010049b170:
          bVar22 = (byte)pppppppuVar23;
          if ((int)pppppppuVar23 == 0x16) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            bStack_e8 = (byte)unaff_x28;
            uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
            uStack_e0 = SUB81(pppppppuStack_318,0);
            uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
            pppppppuStack_2d8 = param_3;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010049b86c;
          }
          ppppppuVar31 = *unaff_x21;
          pppppppuVar32[1] = unaff_x21[1];
          *pppppppuVar32 = ppppppuVar31;
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)pppppppuVar32 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)pppppppuVar32 + 0xf) = uVar25;
code_r0x00010049b188:
          uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar22);
          FUN_100e077ec(&uStack_b8);
        }
        pppppppuVar28 = pppppppuVar35 + 8;
        unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
        pppppppuVar34 = pppppppuStack_330;
        pppppppuVar19 = unaff_x19;
        pppppppuVar35 = param_3;
      } while (pppppppuVar28 != unaff_x19);
      bStack_e8 = (byte)unaff_x28;
      uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
      uStack_e0 = SUB81(pppppppuStack_318,0);
      uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
      unaff_x22 = pppppppuStack_310;
      param_3 = pppppppuStack_328;
      unaff_x27 = pppppppuStack_318;
      pppppppuStack_2d8 = pppppppuVar19;
      pppppppuStack_2c0 = pppppppuVar34;
      if (unaff_x23 != (ulong *******)0x8000000000000001) goto code_r0x00010049b3c0;
    }
    pppppppuStack_88 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_80 = (ulong *******)0x2;
    uStack_b8 = (ulong *******)&pppppppuStack_88;
    pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
    unaff_x23 = (ulong *******)0x8000000000000001;
    ppppppuVar31 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
    goto code_r0x00010049b36c;
  case 0x16:
    goto code_r0x00010049b474;
  case 0x17:
    goto code_r0x00010049b484;
  case 0x18:
    goto code_r0x00010049b44c;
  case 0x19:
  case 0xfd:
    goto code_r0x00010049b464;
  case 0x1a:
  case 0x3c:
  case 0x94:
  case 0xd6:
    goto code_r0x00010049b410;
  case 0x1b:
  case 0xfe:
    goto code_r0x00010049b494;
  case 0x1c:
  case 0x3b:
  case 0x93:
  case 0xaa:
  case 0xc0:
  case 0xd5:
    goto code_r0x00010049b4ac;
  case 0x1d:
    goto code_r0x00010049b46c;
  case 0x1e:
  case 0x33:
  case 0x8b:
  case 0xcd:
    goto code_r0x00010049b4c4;
  case 0x1f:
  case 0x37:
  case 0x8f:
  case 0xd1:
code_r0x00010049b440:
    *unaff_x21 = (ulong ******)pppppppuVar23;
    unaff_x21[1] = (ulong ******)unaff_x24;
    unaff_x21[2] = (ulong ******)unaff_x27;
    unaff_x21[7] = (ulong ******)unaff_x23;
    unaff_x21[8] = (ulong ******)unaff_x22;
code_r0x00010049b44c:
    unaff_x21[9] = (ulong ******)pppppppuStack_320;
code_r0x00010049b454:
    _memcpy(&ppppppuStack_2b0,unaff_x21,0x1c0);
code_r0x00010049b464:
    pppppppuVar23 = &ppppppuStack_300;
code_r0x00010049b468:
    param_3 = pppppppuVar23 + 4;
code_r0x00010049b46c:
    FUN_100d34830(param_3);
code_r0x00010049b470:
    in_ZR = unaff_x19 == pppppppuVar19;
code_r0x00010049b474:
    if (!(bool)in_ZR) {
      pppppppuVar23 = (ulong *******)((ulong)((long)unaff_x19 - (long)pppppppuVar19) >> 6);
      uStack_b8 = pppppppuVar34;
code_r0x00010049b484:
      param_5 = &UNK_10b23a190;
code_r0x00010049b48c:
      param_3 = (ulong *******)((long)pppppppuVar23 + (long)pppppppuVar34);
      param_4 = (ulong *******)&uStack_b8;
code_r0x00010049b494:
      param_3 = (ulong *******)thunk_FUN_1087e422c(param_3,param_4,param_5);
code_r0x00010049b498:
      *unaff_x21 = (ulong ******)unaff_x20;
      unaff_x21[1] = (ulong ******)param_3;
code_r0x00010049b49c:
      goto code_r0x00010049b71c;
    }
    goto code_r0x00010049b678;
  case 0x20:
  case 0xa8:
  case 0xbe:
    goto code_r0x00010049b4b4;
  case 0x21:
    goto code_r0x00010049b3e8;
  case 0x22:
  case 0x3a:
  case 0x92:
  case 0xd4:
    goto code_r0x00010049b418;
  case 0x23:
    goto code_r0x00010049b49c;
  case 0x24:
code_r0x00010049b3c0:
    unaff_x21 = pppppppuStack_328;
    if (unaff_x24 != (ulong *******)0x8000000000000000) {
      unaff_x20 = (ulong *******)0x800000000000006e;
      pppppppuStack_328[4] = (ulong ******)pppppppuStack_d0;
      pppppppuStack_328[3] = (ulong ******)CONCAT71(uStack_d7,uStack_d8);
      pppppppuStack_328[6] = ppppppuStack_c0;
      pppppppuStack_328[5] = ppppppuStack_c8;
      pppppppuVar23 = (ulong *******)0x8000000000000012;
      goto code_r0x00010049b440;
    }
    pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_80 = (ulong *******)0x6;
    pppppppuVar23 = (ulong *******)&pppppppuStack_88;
    pppppppuVar28 = (ulong *******)&UNK_100c7b000;
code_r0x00010049b3e8:
    pppppppuStack_b0 = pppppppuVar28 + 0x74;
    uStack_b8 = pppppppuVar23;
    ppppppuVar31 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
    *unaff_x21 = (ulong ******)0x800000000000006e;
    unaff_x21[1] = ppppppuVar31;
    in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
code_r0x00010049b410:
    param_3 = unaff_x22;
    if (!(bool)in_ZR) {
code_r0x00010049b418:
      _free(param_3);
    }
    unaff_x20 = &ppppppuStack_300;
    goto LAB_10049b4d8;
  case 0x25:
    goto code_r0x00010049b454;
  case 0x26:
    goto code_r0x00010049b3b8;
  case 0x28:
  case 0x39:
  case 0x91:
  case 0xd3:
    goto code_r0x00010049b4f4;
  case 0x29:
    goto code_r0x00010049b144;
  case 0x2a:
    goto code_r0x00010049b188;
  case 0x2c:
  case 0x84:
  case 0xc6:
    goto code_r0x00010049b4cc;
  case 0x2d:
  case 0x85:
  case 0xa5:
  case 0xbb:
  case 199:
    goto code_r0x00010049b4dc;
  case 0x2e:
  case 0x86:
  case 200:
code_r0x00010049b4a4:
    pppppppuStack_2d8 = param_3;
    pppppppuStack_2c0 = pppppppuVar23;
code_r0x00010049b4ac:
    pppppppuVar28 = (ulong *******)0x6e;
    pppppppuVar23 = pppppppuStack_b0;
code_r0x00010049b4b4:
    pppppppuVar28 = (ulong *******)((ulong)pppppppuVar28 | 0x8000000000000000);
    pppppppuVar30 = pppppppuStack_328;
code_r0x00010049b4bc:
    *pppppppuVar30 = (ulong ******)pppppppuVar28;
    pppppppuVar30[1] = (ulong ******)pppppppuVar23;
    unaff_x22 = pppppppuStack_310;
code_r0x00010049b4c4:
    unaff_x20 = &ppppppuStack_300;
code_r0x00010049b4c8:
    pppppppuVar23 = (ulong *******)0x2;
code_r0x00010049b4cc:
    param_3 = unaff_x22;
    if ((long)((ulong)pppppppuVar23 | 0x8000000000000000) <= (long)unaff_x23)
    goto code_r0x00010049b3b0;
    goto LAB_10049b4d8;
  case 0x2f:
  case 0x87:
  case 0xc9:
  case 0xfb:
    goto code_r0x00010049b4bc;
  case 0x30:
  case 0x88:
  case 0xca:
    goto code_r0x00010049b468;
  case 0x31:
  case 0x89:
  case 0xcb:
    goto code_r0x00010049b4ec;
  case 0x32:
  case 0x8a:
  case 0x9e:
  case 0xb4:
  case 0xcc:
    goto code_r0x00010049b504;
  case 0x34:
  case 0x8c:
  case 0xce:
    goto code_r0x00010049b51c;
  case 0x35:
  case 0x8d:
  case 0xcf:
    goto code_r0x00010049b498;
  case 0x36:
  case 0x8e:
  case 0xa6:
  case 0xbc:
  case 0xd0:
    goto code_r0x00010049b50c;
  case 0x38:
  case 0x90:
  case 0xd2:
    goto code_r0x00010049b470;
  case 0x3f:
  case 0x97:
  case 0xd9:
    goto code_r0x00010049b15c;
  case 0x42:
    goto code_r0x00010049b668;
  case 0x43:
    goto code_r0x00010049b678;
  case 0x44:
    goto code_r0x00010049b640;
  case 0x45:
    goto code_r0x00010049b658;
  case 0x47:
    goto code_r0x00010049b688;
  case 0x48:
    goto code_r0x00010049b6a0;
  case 0x49:
    goto code_r0x00010049b660;
  case 0x4a:
    goto code_r0x00010049b6b8;
  case 0x4c:
    goto code_r0x00010049b6a8;
  case 0x4e:
    goto code_r0x00010049b60c;
  case 0x4f:
    goto code_r0x00010049b690;
  case 0x50:
    goto code_r0x00010049b5b4;
  case 0x51:
    goto code_r0x00010049b648;
  case 0x52:
  case 0xdc:
    goto code_r0x00010049b5ac;
  case 0x54:
  case 0x6e:
    goto code_r0x00010049b708;
  case 0x55:
    goto code_r0x00010049b1a8;
  case 0x56:
    goto code_r0x00010049b1ec;
  case 0x5c:
  case 0xa0:
  case 0xb6:
    goto code_r0x00010049b5a0;
  case 0x60:
  case 0x7c:
    goto code_r0x00010049b654;
  case 99:
  case 0x9b:
  case 0xb1:
  case 0xe5:
    goto code_r0x00010049b578;
  case 100:
  case 0xa4:
  case 0xba:
    goto code_r0x00010049b5a8;
  case 0x66:
  case 0xe8:
    goto code_r0x00010049b550;
  case 0x6a:
  case 0x72:
    goto code_r0x00010049b6a4;
  case 0x6b:
    goto code_r0x00010049b1b0;
  case 0x6c:
    goto code_r0x00010049b1f4;
  case 0x6f:
    goto code_r0x00010049b718;
  case 0x70:
    goto code_r0x00010049b6e0;
  case 0x71:
    goto code_r0x00010049b6f8;
  case 0x73:
code_r0x00010049b728:
    pppppppuVar24 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_2d8 = param_3;
  case 0x7b:
    bStack_e8 = (byte)unaff_x28;
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_318,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
    pppppppuVar23 = (ulong *******)&UNK_108cb9000;
    unaff_x22 = pppppppuStack_310;
    unaff_x27 = pppppppuStack_318;
    pppppppuStack_2c0 = pppppppuVar24;
code_r0x00010049b740:
    pppppppuVar24 = (ulong *******)((long)pppppppuVar23 + 0x606);
    pppppppuVar29 = (ulong *******)0x6;
code_r0x00010049b748:
    pppppppuVar23 = (ulong *******)&pppppppuStack_88;
    pppppppuVar28 = (ulong *******)&DAT_100c7b3a0;
    pppppppuStack_88 = pppppppuVar24;
    pppppppuStack_80 = pppppppuVar29;
code_r0x00010049b758:
    uStack_b8 = pppppppuVar23;
    pppppppuStack_b0 = pppppppuVar28;
    ppppppuVar31 = (ulong ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
    unaff_x20 = &ppppppuStack_300;
    *pppppppuStack_328 = (ulong ******)0x800000000000006e;
    pppppppuStack_328[1] = ppppppuVar31;
    goto joined_r0x00010049b780;
  case 0x74:
    goto code_r0x00010049b740;
  case 0x75:
    goto code_r0x00010049b700;
  case 0x76:
    goto code_r0x00010049b758;
  case 0x77:
    goto code_r0x00010049b6d4;
  case 0x78:
    goto code_r0x00010049b748;
  case 0x79:
    goto code_r0x00010049b67c;
  case 0x7a:
    goto code_r0x00010049b6ac;
  case 0x7d:
    goto code_r0x00010049b6e8;
  case 0x7e:
    goto code_r0x00010049b64c;
  case 0x80:
code_r0x00010049b7a8:
    uStack_b8 = (ulong *******)&pppppppuStack_88;
    pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
    pppppppuStack_88 = pppppppuVar23;
    pppppppuStack_80 = pppppppuVar28;
    ppppppuVar31 = (ulong ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
    param_3 = pppppppuStack_328;
code_r0x00010049b36c:
    unaff_x20 = &ppppppuStack_300;
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar31;
    if (unaff_x24 != (ulong *******)0x8000000000000000) {
joined_r0x00010049b780:
      if (unaff_x24 != (ulong *******)0x0) {
        _free(unaff_x27);
      }
      if (pppppppuStack_d0 != (ulong *******)0x0) {
        _free(ppppppuStack_c8);
      }
    }
LAB_10049b3a0:
    param_3 = unaff_x22;
    if (-0x7fffffffffffffff < (long)unaff_x23) {
code_r0x00010049b3b0:
      if (unaff_x23 != (ulong *******)0x0) {
code_r0x00010049b3b8:
        _free(param_3);
      }
    }
LAB_10049b4d8:
    param_3 = unaff_x20 + 4;
code_r0x00010049b4dc:
    FUN_100d34830(param_3);
code_r0x00010049b4e0:
    in_ZR = (byte)ppppppuStack_300 == 0x16;
code_r0x00010049b4e8:
    if (!(bool)in_ZR) {
code_r0x00010049b4ec:
      param_3 = &ppppppuStack_300;
code_r0x00010049b4f0:
      FUN_100e077ec(param_3);
code_r0x00010049b4f4:
    }
    goto code_r0x00010049b678;
  case 0x81:
    goto code_r0x00010049adf0;
  case 0x82:
    goto code_r0x00010049ae34;
  case 0x9d:
  case 0xb3:
    goto code_r0x00010049b558;
  case 0x9f:
  case 0xb5:
    goto code_r0x00010049b588;
  case 0xa1:
  case 0xb7:
    goto code_r0x00010049b560;
  case 0xa2:
  case 0xb8:
    goto code_r0x00010049b5b8;
  case 0xa3:
  case 0xb9:
    goto code_r0x00010049b534;
  case 0xad:
  case 0xc3:
    goto code_r0x00010049b170;
  case 0xae:
  case 0xc4:
    goto code_r0x00010049b1b4;
  case 0xdd:
    goto code_r0x00010049b5bc;
  case 0xde:
    goto code_r0x00010049b584;
  case 0xe3:
    goto code_r0x00010049b5a4;
  case 0xe7:
    goto code_r0x00010049b520;
  case 0xea:
code_r0x00010049b4f8:
    pppppppuVar23 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_2d8 = param_3;
  case 0xf3:
    pppppppuStack_2c0 = pppppppuVar23;
code_r0x00010049b504:
    bStack_e8 = (byte)unaff_x28;
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_318,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_318 >> 8);
    unaff_x22 = pppppppuStack_310;
    unaff_x27 = pppppppuStack_318;
code_r0x00010049b50c:
    unaff_x23 = (ulong *******)0x8000000000000001;
code_r0x00010049b510:
    param_3 = pppppppuStack_80;
    pppppppuVar19 = pppppppuStack_328;
code_r0x00010049b518:
    unaff_x20 = &ppppppuStack_300;
code_r0x00010049b51c:
    pppppppuVar23 = (ulong *******)0x6e;
code_r0x00010049b520:
    *pppppppuVar19 = (ulong ******)((ulong)pppppppuVar23 | 0x8000000000000000);
    pppppppuVar19[1] = (ulong ******)param_3;
code_r0x00010049b528:
    in_ZR = unaff_x24 == (ulong *******)0x8000000000000000;
code_r0x00010049b530:
    if (!(bool)in_ZR) {
code_r0x00010049b534:
      goto joined_r0x00010049b780;
    }
    goto LAB_10049b3a0;
  case 0xeb:
    goto code_r0x00010049b58c;
  case 0xec:
  case 0xf2:
    goto code_r0x00010049b4f0;
  case 0xf4:
    goto code_r0x00010049b4c8;
  case 0xf5:
    goto code_r0x00010049b4e0;
  case 0xf6:
    goto code_r0x00010049b48c;
  case 0xf7:
    goto code_r0x00010049b510;
  case 0xf8:
    goto code_r0x00010049b528;
  case 0xf9:
    goto code_r0x00010049b4e8;
  case 0xfc:
    goto code_r0x00010049b530;
  case 0xff:
    goto code_r0x00010049b518;
  }
code_r0x00010049b650:
  ppppppuStack_2b0 = (ulong ******)CONCAT71(ppppppuStack_2b0._1_7_,bVar22);
code_r0x00010049b654:
  param_5 = &UNK_10b21a000;
code_r0x00010049b658:
  param_5 = param_5 + 0xcb0;
  pppppppuVar19 = &ppppppuStack_2b0;
code_r0x00010049b660:
  pppppppuVar19 = (ulong *******)FUN_107c05dcc(pppppppuVar19,&pppppppuStack_88,param_5);
code_r0x00010049b668:
  *param_3 = (ulong ******)0x800000000000006e;
  param_3[1] = (ulong ******)pppppppuVar19;
code_r0x00010049b678:
code_r0x00010049b67c:
code_r0x00010049b688:
code_r0x00010049b690:
  return;
code_r0x00010049b648:
  pppppppuStack_2a8 = pppppppuVar23;
code_r0x00010049b64c:
  bVar22 = 2;
  goto code_r0x00010049b650;
}

