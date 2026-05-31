
/* WARNING: Type propagation algorithm not settling */

void FUN_100477430(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  code *pcVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  ulong *******pppppppuVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar20;
  ulong ******ppppppuVar21;
  ulong ******ppppppuVar22;
  uint uVar23;
  byte bVar24;
  ulong *******pppppppuVar25;
  ulong *******pppppppuVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  long lVar32;
  ulong *******unaff_x21;
  undefined8 *puVar33;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  long lVar34;
  ulong *******unaff_x25;
  ulong *******pppppppuVar35;
  ulong *******unaff_x27;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar36;
  undefined8 unaff_x30;
  ulong *******pppppppuVar37;
  ulong ******ppppppuVar38;
  undefined1 auStack_380 [80];
  ulong *******pppppppuStack_330;
  ulong *******pppppppuStack_328;
  ulong ******ppppppuStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  ulong *******pppppppuStack_308;
  ulong ******ppppppuStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  ulong ******ppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong ******ppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong ******ppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong *******pppppppuStack_2a0;
  ulong ******ppppppuStack_298;
  ulong ******ppppppuStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong *******pppppppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  long lStack_98;
  long lStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong *******pppppppuVar11;
  
  ppppppuVar38 = param_2._8_8_;
  ppppppuVar22 = param_2._0_8_;
  ppppppuVar21 = param_1._8_8_;
  pppppppuVar37 = param_1._0_8_;
  puVar36 = &stack0xfffffffffffffff0;
  pppppppuVar10 = (ulong *******)&pppppppuStack_330;
  bVar24 = *(byte *)param_4;
  pppppppuVar25 = (ulong *******)(ulong)bVar24;
  pppppppuVar30 = (ulong *******)&UNK_108c997c6;
  pppppppuVar17 = (ulong *******)&pppppppuStack_330;
  pppppppuVar18 = (ulong *******)&pppppppuStack_330;
  pppppppuVar19 = (ulong *******)&pppppppuStack_330;
  pppppppuVar12 = (ulong *******)&pppppppuStack_330;
  pppppppuVar13 = (ulong *******)&pppppppuStack_330;
  pppppppuVar14 = (ulong *******)&pppppppuStack_330;
  pppppppuVar15 = (ulong *******)&pppppppuStack_330;
  pppppppuVar16 = (ulong *******)&pppppppuStack_330;
  pppppppuVar7 = (ulong *******)&pppppppuStack_330;
  pppppppuVar8 = (ulong *******)&pppppppuStack_330;
  pppppppuVar9 = (ulong *******)&pppppppuStack_330;
  pppppppuVar11 = (ulong *******)&pppppppuStack_330;
  pppppppuVar20 = (ulong *******)param_3;
  pppppppuVar26 = pppppppuVar25;
  pppppppuVar31 =
       (ulong *******)
       (&UNK_100477470 + (ulong)*(ushort *)(&UNK_108c997c6 + (long)pppppppuVar25 * 2) * 4);
  pppppppuVar35 = unaff_x25;
  switch(bVar24) {
  case 0:
  case 0x5d:
    bVar24 = *(byte *)((long)param_4 + 1);
  case 0x9a:
  case 0xb0:
    ppppppuStack_2b0 = (ulong ******)((ulong)CONCAT61(ppppppuStack_2b0._2_6_,bVar24) << 8);
code_r0x000100477d40:
    ppppppuStack_2b0 = (ulong ******)((ulong)ppppppuStack_2b0 & 0xffffffffffffff00);
code_r0x000100477d44:
    goto code_r0x000100477d98;
  case 1:
    pppppppuVar25 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
    break;
  case 2:
  case 0x5f:
    pppppppuVar25 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
  case 0x30:
  case 0x9c:
  case 0xb2:
    break;
  case 3:
  case 0x59:
    pppppppuVar25 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x9d:
  case 0xb3:
    break;
  case 4:
  case 0x4a:
  case 0x76:
    pppppppuVar25 = (ulong *******)param_4[1];
  case 0x1b:
  case 0x9e:
  case 0xb4:
    break;
  case 5:
  case 0x28:
  case 0x3b:
  case 0x62:
    pppppppuVar25 = (ulong *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0x9f:
  case 0xb5:
  case 0xa2:
  case 0xb8:
code_r0x000100477d8c:
    bVar24 = 2;
    pppppppuStack_2a8 = pppppppuVar25;
    goto code_r0x000100477d94;
  case 6:
  case 0x33:
    pppppppuVar25 = (ulong *******)(long)*(short *)((long)param_4 + 2);
  case 0xa0:
  case 0xb6:
    goto code_r0x000100477d8c;
  case 7:
    pppppppuVar25 = (ulong *******)(long)*(int *)((long)param_4 + 4);
  case 0xa1:
  case 0xb7:
    goto code_r0x000100477d8c;
  case 8:
  case 0x2d:
    pppppppuVar25 = (ulong *******)param_4[1];
    goto code_r0x000100477d8c;
  case 9:
    pppppppuVar37 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x1e:
  case 0x5b:
  case 0xa3:
  case 0xb9:
    pppppppuVar37 = (ulong *******)(double)SUB84(pppppppuVar37,0);
  case 0xa4:
  case 0xba:
code_r0x000100477d7c:
    bVar24 = 3;
    pppppppuStack_2a8 = pppppppuVar37;
    goto code_r0x000100477d94;
  case 10:
  case 0x2c:
    pppppppuVar37 = (ulong *******)param_4[1];
    goto code_r0x000100477d7c;
  case 0xb:
  case 0x4f:
  case 0x7b:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x1d:
  case 0xa5:
  case 0xbb:
code_r0x000100477cb4:
    pppppppuVar12 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x000100477cb8:
    puVar36 = *(undefined1 **)((long)pppppppuVar12 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar12 + 0x58);
    pppppppuVar13 = pppppppuVar12;
code_r0x000100477cbc:
    unaff_x20 = *(ulong ********)((long)pppppppuVar13 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar13 + 0x48);
    pppppppuVar14 = pppppppuVar13;
code_r0x000100477cc4:
    pppppppuVar15 = pppppppuVar14;
code_r0x000100477cc8:
    pppppppuVar16 = pppppppuVar15;
code_r0x000100477ccc:
    *(ulong ********)((long)pppppppuVar16 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar16 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar16 + 0x50) = puVar36;
    *(undefined8 *)((long)pppppppuVar16 + 0x58) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar16 + 0x1c) = 0;
    uVar23 = (uint)param_4;
    if (uVar23 < 0x80) {
      *(byte *)((long)pppppppuVar16 + 0x1c) = (byte)param_4;
      uVar27 = 1;
    }
    else {
      bVar24 = (byte)param_4 & 0x3f | 0x80;
      if (uVar23 < 0x800) {
        *(byte *)((long)pppppppuVar16 + 0x1c) = (byte)(uVar23 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar16 + 0x1d) = bVar24;
        uVar27 = 2;
      }
      else {
        bVar1 = (byte)(uVar23 >> 6) & 0x3f | 0x80;
        if (uVar23 < 0x10000) {
          *(byte *)((long)pppppppuVar16 + 0x1c) = (byte)(uVar23 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar16 + 0x1d) = bVar1;
          *(byte *)((long)pppppppuVar16 + 0x1e) = bVar24;
          uVar27 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar16 + 0x1c) = (byte)(uVar23 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar16 + 0x1d) = (byte)(uVar23 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar16 + 0x1e) = bVar1;
          *(byte *)((long)pppppppuVar16 + 0x1f) = bVar24;
          uVar27 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar16 + 0x28) = (undefined1 *)((long)pppppppuVar16 + 0x1c);
    *(undefined8 *)((long)pppppppuVar16 + 0x30) = uVar27;
    *(undefined1 *)((long)pppppppuVar16 + 0x20) = 5;
    ppppppuVar21 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar16 + 0x20),
                                       (undefined1 *)((long)pppppppuVar16 + 0x3f),&UNK_10b2195b0);
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar21;
    return;
  case 0xc:
    param_4 = param_4 + 1;
  case 0x23:
  case 0xa6:
  case 0xbc:
code_r0x000100477ce4:
    pppppppuVar17 = (ulong *******)&stack0xffffffffffffffa0;
    puVar36 = unaff_x29;
code_r0x000100477cec:
    unaff_x20 = *(ulong ********)((long)pppppppuVar17 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar17 + 0x48);
    pppppppuVar18 = pppppppuVar17;
code_r0x000100477cf0:
    unaff_x22 = *(ulong ********)((long)pppppppuVar18 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar18 + 0x38);
    pppppppuVar19 = pppppppuVar18;
code_r0x000100477cf8:
    *(ulong ********)((long)pppppppuVar19 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar19 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar19 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar19 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar19 + 0x50) = puVar36;
    *(undefined8 *)((long)pppppppuVar19 + 0x58) = unaff_x30;
    ppppppuVar21 = param_4[1];
    ppppppuVar22 = param_4[2];
    *(ulong *******)((long)pppppppuVar19 + 0x18) = ppppppuVar21;
    *(ulong *******)((long)pppppppuVar19 + 0x20) = ppppppuVar22;
    *(undefined1 *)((long)pppppppuVar19 + 0x10) = 5;
    ppppppuVar22 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar19 + 0x10),
                                       (undefined1 *)((long)pppppppuVar19 + 0x2f),&UNK_10b2195b0);
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar22;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar21);
    }
    return;
  case 0xd:
    pppppppuVar25 = (ulong *******)param_4[1];
    pppppppuVar30 = (ulong *******)param_4[2];
  case 0xa7:
  case 0xbd:
    pppppppuStack_2a8 = pppppppuVar25;
    pppppppuStack_2a0 = pppppppuVar30;
code_r0x000100477d68:
    bVar24 = 5;
    goto code_r0x000100477d94;
  case 0xe:
  case 0x1f:
  case 0x42:
  case 0x6e:
  case 0xee:
    param_4 = param_4 + 1;
  case 0xa8:
  case 0xbe:
code_r0x000100477c8c:
    pppppppuVar7 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x000100477c90:
    puVar36 = *(undefined1 **)((long)pppppppuVar7 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar7 + 0x58);
    pppppppuVar8 = pppppppuVar7;
code_r0x000100477c94:
    unaff_x20 = *(ulong ********)((long)pppppppuVar8 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar8 + 0x48);
    pppppppuVar9 = pppppppuVar8;
code_r0x000100477c98:
    unaff_x22 = *(ulong ********)((long)pppppppuVar9 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar9 + 0x38);
    pppppppuVar11 = pppppppuVar9;
code_r0x000100477ca4:
    pppppppuVar10 = (ulong *******)((long)pppppppuVar11 + 0x60);
code_r0x000100477ca8:
    *(ulong ********)((long)pppppppuVar10 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar10 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar10 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar10 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar10 + -0x10) = puVar36;
    *(undefined8 *)((long)pppppppuVar10 + -8) = unaff_x30;
    ppppppuVar21 = param_4[1];
    ppppppuVar22 = param_4[2];
    *(ulong *******)((long)pppppppuVar10 + -0x48) = ppppppuVar21;
    *(ulong *******)((long)pppppppuVar10 + -0x40) = ppppppuVar22;
    *(undefined1 *)((long)pppppppuVar10 + -0x50) = 6;
    ppppppuVar22 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar10 + -0x50),
                                       (undefined1 *)((long)pppppppuVar10 + -0x31),&UNK_10b2195b0);
    *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_3 + 8) = ppppppuVar22;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar21);
    }
    return;
  case 0xf:
  case 0x58:
    pppppppuVar25 = (ulong *******)param_4[1];
    pppppppuVar30 = (ulong *******)param_4[2];
  case 0x38:
  case 0xa9:
  case 0xbf:
    bVar24 = 6;
    pppppppuStack_2a8 = pppppppuVar25;
    pppppppuStack_2a0 = pppppppuVar30;
code_r0x000100477d24:
    goto code_r0x000100477d94;
  case 0x10:
  case 0x49:
  case 0x75:
  case 0x8c:
    bVar24 = 8;
  case 0xaa:
  case 0xc0:
    goto code_r0x000100477d94;
  default:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_2a8 = (ulong *******)unaff_x20[1];
    ppppppuStack_2b0 = *unaff_x20;
    ppppppuStack_298 = unaff_x20[3];
    pppppppuStack_2a0 = (ulong *******)unaff_x20[2];
    func_0x000107c049b8(param_3,&ppppppuStack_2b0);
    goto code_r0x0001004778cc;
  case 0x12:
    bVar24 = 7;
  case 0xac:
  case 0xc2:
    goto code_r0x000100477d94;
  case 0x13:
  case 0x98:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_2a8 = (ulong *******)unaff_x20[1];
    ppppppuStack_2b0 = *unaff_x20;
    ppppppuVar21 = unaff_x20[3];
    pppppppuVar37 = (ulong *******)unaff_x20[2];
  case 0x6b:
  case 0xc3:
    pppppppuStack_2a0 = pppppppuVar37;
    ppppppuStack_298 = ppppppuVar21;
code_r0x0001004778c0:
    func_0x000107c052a4(param_3,&ppppppuStack_2b0);
code_r0x0001004778cc:
    param_3 = (char *)unaff_x20;
code_r0x0001004778d0:
code_r0x0001004778e8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_3);
    return;
  case 0x14:
    unaff_x23 = (ulong *******)param_4[1];
    unaff_x20 = (ulong *******)param_4[2];
    unaff_x25 = (ulong *******)param_4[3];
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    uStack_b8 = unaff_x20;
    pppppppuStack_b0 = unaff_x20;
  case 0x6c:
  case 0xc4:
    pppppppuStack_a8 = unaff_x23;
    pppppppuStack_a0 = unaff_x19;
code_r0x000100477904:
    lStack_98 = 0;
    unaff_x21 = unaff_x20;
    if (unaff_x25 == (ulong *******)0x0) {
code_r0x000100477924:
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f688,&UNK_10b20a590);
code_r0x000100477940:
      *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
      *(ulong ********)((long)param_3 + 8) = unaff_x22;
code_r0x00010047794c:
      lVar34 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar34 = lVar34 + -1, lVar34 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100477910:
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_b0 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100477924;
      uStack_2f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      ppppppuStack_300._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_2f8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      ppppppuStack_2e8 = unaff_x20[3];
      uStack_2f0 = SUB81(unaff_x20[2],0);
      uStack_2ef = (undefined7)((ulong)unaff_x20[2] >> 8);
      lStack_98 = 1;
      ppppppuStack_300._0_1_ = *(byte *)unaff_x20;
      func_0x00010135ba2c(&ppppppuStack_e8,&ppppppuStack_300);
code_r0x0001004779b8:
      unaff_x24 = (ulong *******)CONCAT71(ppppppuStack_e8._1_7_,ppppppuStack_e8._0_1_);
      unaff_x22 = (ulong *******)CONCAT71(uStack_df,uStack_e0);
      if (unaff_x24 == (ulong *******)0x8000000000000001) goto code_r0x000100477940;
      if (unaff_x25 == (ulong *******)0x1) {
code_r0x0001004779e8:
        pppppppuVar20 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22f688,&UNK_10b20a590);
code_r0x000100477a00:
        *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
        *(ulong ********)((long)param_3 + 8) = pppppppuVar20;
        in_ZR = ((ulong)unaff_x24 & 0x7fffffffffffffff) == 0;
code_r0x000100477a10:
        if (!(bool)in_ZR) {
          _free(unaff_x22);
code_r0x000100477a1c:
        }
        goto code_r0x00010047794c;
      }
      unaff_x25 = (ulong *******)CONCAT71(uStack_d7,uStack_d8);
      unaff_x21 = unaff_x20 + 8;
      pppppppuVar25 = (ulong *******)(ulong)*(byte *)(unaff_x20 + 4);
      pppppppuStack_b0 = unaff_x21;
code_r0x0001004779e0:
      if ((int)pppppppuVar25 == 0x16) goto code_r0x0001004779e8;
      uStack_df = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      ppppppuStack_e8._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
      pppppppuStack_d0 = (ulong *******)unaff_x20[7];
      uStack_d8 = SUB81(unaff_x20[6],0);
      uStack_d7 = (undefined7)((ulong)unaff_x20[6] >> 8);
      lStack_98 = 2;
      ppppppuStack_e8._0_1_ = SUB81(pppppppuVar25,0);
      func_0x0001013d0fd8(&ppppppuStack_300,&ppppppuStack_e8);
      pppppppuVar25 = (ulong *******)CONCAT71(ppppppuStack_300._1_7_,(byte)ppppppuStack_300);
      pppppppuVar20 = (ulong *******)CONCAT71(uStack_2f7,uStack_2f8);
      if (pppppppuVar25 == (ulong *******)0x8000000000000000) goto code_r0x000100477a00;
code_r0x000100477e18:
      *(ulong *******)((long)param_3 + 0x20) = ppppppuStack_2e8;
      *(ulong *******)((long)param_3 + 0x18) = (ulong ******)CONCAT71(uStack_2ef,uStack_2f0);
      *(ulong ********)((long)param_3 + 0x30) = pppppppuStack_2d8;
      *(ulong ********)((long)param_3 + 0x28) = pppppppuStack_2e0;
      *(ulong *******)param_3 = (ulong ******)0x800000000000006b;
      *(ulong ********)((long)param_3 + 8) = pppppppuVar25;
      *(ulong ********)((long)param_3 + 0x10) = pppppppuVar20;
      *(ulong ********)((long)param_3 + 0x38) = unaff_x24;
      *(ulong ********)((long)param_3 + 0x40) = unaff_x22;
      *(ulong ********)((long)param_3 + 0x48) = unaff_x25;
      _memcpy(&ppppppuStack_2b0,param_3,0x1c0);
      ppppppuVar21 = (ulong ******)FUN_100fbc738(&uStack_b8);
      if (ppppppuVar21 != (ulong ******)0x0) {
        *(ulong *******)param_3 = (ulong ******)0x800000000000006e;
        *(ulong *******)((long)param_3 + 8) = ppppppuVar21;
code_r0x000100477e60:
        FUN_100e44f40(&ppppppuStack_2b0);
      }
    }
    goto LAB_100477db8;
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
    pppppppuStack_2d8 = (ulong *******)param_4[2];
    ppppppuVar21 = param_4[3];
    unaff_x19 = pppppppuStack_2d8 + (long)ppppppuVar21 * 8;
    pppppppuStack_2e0 = pppppppuStack_2d8;
    ppppppuStack_2d0 = param_4[1];
    pppppppuStack_2c8 = unaff_x19;
    ppppppuStack_300._0_1_ = 0x16;
    pppppppuStack_2c0 = (ulong *******)0x0;
    if (ppppppuVar21 != (ulong ******)0x0) {
      unaff_x25 = (ulong *******)0x0;
      unaff_x22 = (ulong *******)((ulong)&uStack_b8 | 1);
      unaff_x21 = (ulong *******)((ulong)&ppppppuStack_300 | 1);
      puStack_310 = (undefined8 *)((ulong)&pppppppuStack_88 | 1);
      pppppppuStack_330 = (ulong *******)(((long)ppppppuVar21 * 0x40 - 0x40U >> 6) + 1);
      unaff_x24 = (ulong *******)0x8000000000000000;
      unaff_x23 = (ulong *******)0x8000000000000001;
      unaff_x28 = (ulong *******)0x8000000000000000;
      unaff_x27 = pppppppuStack_2d8;
      pppppppuStack_328 = (ulong *******)param_3;
      do {
        pppppppuVar20 = unaff_x27 + 8;
        bVar24 = *(byte *)unaff_x27;
        pppppppuVar30 = (ulong *******)(ulong)bVar24;
        pppppppuVar35 = unaff_x25;
        param_3 = (char *)pppppppuVar20;
        if (bVar24 == 0x16) break;
        uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar24);
        ppppppuVar21 = unaff_x27[2];
        *(ulong *******)((long)unaff_x22 + 0x17) = unaff_x27[3];
        *(ulong *******)((long)unaff_x22 + 0xf) = ppppppuVar21;
        ppppppuVar21 = *(ulong *******)((long)unaff_x27 + 1);
        unaff_x22[1] = *(ulong *******)((long)unaff_x27 + 9);
        *unaff_x22 = ppppppuVar21;
        ppppppuStack_2e8 = unaff_x27[7];
        uStack_2f8 = SUB81(unaff_x27[5],0);
        uStack_2f7 = (undefined7)((ulong)unaff_x27[5] >> 8);
        ppppppuStack_300._0_1_ = (byte)unaff_x27[4];
        ppppppuStack_300._1_7_ = (undefined7)((ulong)unaff_x27[4] >> 8);
        uStack_2f0 = SUB81(unaff_x27[6],0);
        uStack_2ef = (undefined7)((ulong)unaff_x27[6] >> 8);
        param_3 = (char *)pppppppuStack_a8;
        pppppppuVar25 = pppppppuStack_b0;
code_r0x000100477560:
        uVar4 = ppppppuStack_e8._1_7_;
        uVar2 = ppppppuStack_e8._0_1_;
        uVar23 = (uint)pppppppuVar30;
        ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
        uVar3 = ppppppuStack_e8._0_1_;
        ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
        uVar5 = ppppppuStack_e8._1_7_;
        if (uVar23 < 0xd) {
          if (uVar23 == 1) {
            iVar29 = 1;
            if (uStack_b8._1_1_ != '\x01') {
              iVar29 = 2;
            }
            iVar28 = 0;
            if (uStack_b8._1_1_ != '\0') {
              iVar28 = iVar29;
            }
          }
          else {
            if (uVar23 != 4) {
              if (uVar23 == 0xc) {
                if (pppppppuStack_a0 == (ulong *******)0x6) {
                  iVar28 = 1;
                  if (*(int *)param_3 != 0x61726170 || *(short *)((long)param_3 + 4) != 0x736d) {
                    iVar28 = 2;
                  }
                }
                else if (pppppppuStack_a0 == (ulong *******)0x2) {
                  iVar28 = 2;
                  if (*(short *)param_3 == 0x6469) {
                    iVar28 = 0;
                  }
                }
                else {
                  iVar28 = 2;
                }
                goto joined_r0x000100477708;
              }
code_r0x000100477fc8:
              pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
              uStack_e0 = SUB81(pppppppuStack_308,0);
              uStack_df = (undefined7)((ulong)pppppppuStack_308 >> 8);
              param_5 = &UNK_10b20f7a0;
              param_3 = (char *)&uStack_b8;
              pppppppuStack_2d8 = pppppppuVar20;
              goto code_r0x000100477fe8;
            }
            iVar29 = 1;
            if (pppppppuVar25 != (ulong *******)0x1) {
              iVar29 = 2;
            }
            iVar28 = 0;
            if (pppppppuVar25 != (ulong *******)0x0) {
              iVar28 = iVar29;
            }
          }
code_r0x000100477794:
          ppppppuStack_e8._0_1_ = uVar2;
          ppppppuStack_e8._1_7_ = uVar4;
          FUN_100e077ec(&uStack_b8);
        }
        else {
          if (uVar23 == 0xd) {
            if ((ulong *******)param_3 == (ulong *******)0x6) {
              iVar28 = 1;
              if (*(int *)pppppppuVar25 != 0x61726170 ||
                  *(short *)((long)pppppppuVar25 + 4) != 0x736d) {
                iVar28 = 2;
              }
            }
            else {
              if ((ulong *******)param_3 != (ulong *******)0x2) goto code_r0x000100477760;
              iVar28 = 2;
              if (*(short *)pppppppuVar25 == 0x6469) {
                iVar28 = 0;
              }
            }
            goto code_r0x000100477794;
          }
          if (uVar23 != 0xe) {
            if (uVar23 != 0xf) goto code_r0x000100477fc8;
            if ((ulong *******)param_3 == (ulong *******)0x6) {
              if (((((*(byte *)pppppppuVar25 != 0x70) ||
                    (*(byte *)((long)pppppppuVar25 + 1) != 0x61)) ||
                   (*(byte *)((long)pppppppuVar25 + 2) != 0x72)) ||
                  ((*(byte *)((long)pppppppuVar25 + 3) != 0x61 ||
                   (*(byte *)((long)pppppppuVar25 + 4) != 0x6d)))) ||
                 (*(byte *)((long)pppppppuVar25 + 5) != 0x73)) goto code_r0x000100477760;
              iVar28 = 1;
            }
            else if ((((ulong *******)param_3 == (ulong *******)0x2) &&
                     (*(byte *)pppppppuVar25 == 0x69)) &&
                    (*(byte *)((long)pppppppuVar25 + 1) == 100)) {
              iVar28 = 0;
            }
            else {
code_r0x000100477760:
              iVar28 = 2;
            }
            goto code_r0x000100477794;
          }
          if (pppppppuStack_a0 == (ulong *******)0x6) {
            if (((((*param_3 != 0x70) || (*(byte *)((long)param_3 + 1) != 0x61)) ||
                 (*(byte *)((long)param_3 + 2) != 0x72)) ||
                ((*(byte *)((long)param_3 + 3) != 0x61 || (*(byte *)((long)param_3 + 4) != 0x6d))))
               || (*(byte *)((long)param_3 + 5) != 0x73)) goto code_r0x0001004776d0;
            iVar28 = 1;
          }
          else if (((pppppppuStack_a0 == (ulong *******)0x2) && (*param_3 == 0x69)) &&
                  (*(byte *)((long)param_3 + 1) == 100)) {
            iVar28 = 0;
          }
          else {
code_r0x0001004776d0:
            iVar28 = 2;
          }
joined_r0x000100477708:
          ppppppuStack_e8._0_1_ = uVar2;
          ppppppuStack_e8._1_7_ = uVar4;
          if (pppppppuVar25 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar24 = (byte)ppppppuStack_300;
        if (iVar28 == 0) {
          if (unaff_x23 != (ulong *******)0x8000000000000001) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuStack_2d8 = pppppppuVar20;
            goto code_r0x000100477edc;
          }
          ppppppuStack_300._0_1_ = 0x16;
          if (bVar24 == 0x16) goto code_r0x000100477f58;
          ppppppuVar21 = *unaff_x21;
          unaff_x22[1] = unaff_x21[1];
          *unaff_x22 = ppppppuVar21;
          uVar27 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar27;
          uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar24);
          func_0x00010135ba2c(&pppppppuStack_88,&uStack_b8);
          in_ZR = pppppppuStack_88 == (ulong *******)0x8000000000000001;
          unaff_x23 = pppppppuStack_88;
code_r0x000100477868:
          if ((bool)in_ZR) {
            pppppppuVar25 = (ulong *******)((long)unaff_x25 + 1);
            goto code_r0x000100477c3c;
          }
          uStack_318 = pppppppuStack_80;
          ppppppuStack_320 = ppppppuStack_78;
        }
        else if (iVar28 == 1) {
          if (unaff_x24 != (ulong *******)0x8000000000000000) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            uStack_e0 = SUB81(pppppppuStack_308,0);
            uStack_df = (undefined7)((ulong)pppppppuStack_308 >> 8);
            pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
            pppppppuStack_80 = (ulong *******)0x6;
            uStack_b8 = (ulong *******)&pppppppuStack_88;
            pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
            param_3 = s_duplicate_field_____108ac2973;
            param_4 = (ulong *******)&uStack_b8;
            pppppppuStack_2d8 = pppppppuVar20;
            ppppppuStack_e8._0_1_ = uVar3;
            ppppppuStack_e8._1_7_ = uVar5;
            goto code_r0x000100477eac;
          }
          ppppppuStack_300._0_1_ = 0x16;
          if (bVar24 == 0x16) goto code_r0x000100477f90;
          ppppppuVar21 = *unaff_x21;
          puStack_310[1] = unaff_x21[1];
          *puStack_310 = ppppppuVar21;
          uVar27 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)puStack_310 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)puStack_310 + 0xf) = uVar27;
          pppppppuStack_88 = (ulong *******)CONCAT71(pppppppuStack_88._1_7_,bVar24);
          func_0x0001013d0fd8(&uStack_b8,&pppppppuStack_88);
          if (uStack_b8 == (ulong *******)0x8000000000000000) {
            pppppppuVar25 = (ulong *******)((long)unaff_x25 + 1);
            goto code_r0x000100477be4;
          }
          pppppppuStack_308 = pppppppuStack_b0;
          pppppppuStack_d0 = pppppppuStack_a0;
          uStack_d8 = SUB81(pppppppuStack_a8,0);
          uStack_d7 = (undefined7)((ulong)pppppppuStack_a8 >> 8);
          lStack_c0 = lStack_90;
          lStack_c8 = lStack_98;
          unaff_x24 = uStack_b8;
          unaff_x28 = uStack_b8;
        }
        else {
          ppppppuStack_300._0_1_ = 0x16;
          if (bVar24 == 0x16) {
            pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
            pppppppuVar25 = pppppppuStack_308;
            pppppppuStack_2d8 = pppppppuVar20;
            goto code_r0x000100477f34;
          }
code_r0x00010047788c:
          ppppppuVar21 = *unaff_x21;
          unaff_x22[1] = unaff_x21[1];
          *unaff_x22 = ppppppuVar21;
          uVar27 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar27;
          uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,bVar24);
          param_3 = (char *)&uStack_b8;
code_r0x0001004778a4:
          FUN_100e077ec(param_3);
        }
code_r0x00010047751c:
        pppppppuVar30 = unaff_x27 + 8;
        unaff_x25 = (ulong *******)((long)unaff_x25 + 1);
        pppppppuVar35 = pppppppuStack_330;
        param_3 = (char *)unaff_x19;
        unaff_x27 = pppppppuVar20;
      } while (pppppppuVar30 != unaff_x19);
      pppppppuStack_2d8 = (ulong *******)param_3;
      pppppppuStack_2c0 = pppppppuVar35;
      pppppppuVar25 = pppppppuStack_308;
      goto code_r0x000100477a34;
    }
    unaff_x24 = (ulong *******)0x8000000000000000;
    ppppppuStack_e8._0_1_ = 0;
    ppppppuStack_e8._1_7_ = 0x80000000000000;
    goto code_r0x000100477a50;
  case 0x16:
    goto code_r0x000100477cb8;
  case 0x17:
    goto code_r0x000100477cc8;
  case 0x18:
    goto code_r0x000100477c90;
  case 0x19:
    goto code_r0x000100477ca8;
  case 0x1a:
  case 0x91:
  case 0xe4:
    goto code_r0x000100477c54;
  case 0x1c:
  case 0x5a:
    goto code_r0x000100477cf0;
  case 0x20:
  case 0x67:
    goto code_r0x000100477cf8;
  case 0x21:
  case 0x84:
  case 0xe9:
    goto code_r0x000100477c2c;
  case 0x22:
  case 0x44:
  case 0x68:
  case 0x70:
    goto code_r0x000100477c5c;
  case 0x24:
  case 0x86:
  case 0xdc:
    goto code_r0x000100477c04;
  case 0x25:
    goto code_r0x000100477c98;
  case 0x26:
  case 0xe3:
    goto code_r0x000100477bfc;
  case 0x29:
    goto code_r0x0001004778a4;
  case 0x2a:
    goto code_r0x0001004778e8;
  case 0x2e:
  case 0x5e:
    goto code_r0x000100477d50;
  case 0x2f:
  case 0x60:
    goto code_r0x000100477d68;
  case 0x31:
    goto code_r0x000100477d98;
  case 0x32:
    goto code_r0x000100477db0;
  case 0x34:
    goto code_r0x000100477dc8;
  case 0x35:
    goto code_r0x000100477d44;
  case 0x36:
  case 0x6a:
    goto LAB_100477db8;
  case 0x37:
    goto code_r0x000100477cec;
  case 0x39:
    goto code_r0x000100477da0;
  case 0x3a:
  case 0x4c:
  case 0x78:
    goto code_r0x000100477cc4;
  case 0x3c:
  case 0x48:
  case 100:
  case 0x74:
    goto code_r0x000100477cbc;
  case 0x3e:
    goto code_r0x000100477e18;
  case 0x3f:
  case 0xad:
    goto code_r0x0001004778cc;
  case 0x40:
  case 0xae:
    goto code_r0x000100477910;
  case 0x43:
  case 0x6f:
    goto code_r0x000100477c94;
  case 0x45:
  case 0x71:
    goto code_r0x000100477c74;
  case 0x46:
  case 0x72:
    goto code_r0x000100477c20;
  case 0x47:
  case 0x73:
    goto code_r0x000100477ca4;
  case 0x4b:
  case 0x77:
    goto code_r0x000100477c50;
  case 0x4d:
  case 0x79:
  case 0x8d:
    goto code_r0x000100477bf8;
  case 0x4e:
  case 0x7a:
    goto code_r0x000100477c28;
  case 0x50:
  case 0x7c:
  case 0x90:
  case 0xe5:
    goto code_r0x000100477bd0;
  case 0x51:
  case 0x66:
  case 0x7d:
  case 0x8a:
    goto code_r0x000100477c64;
  case 0x52:
  case 0x7e:
  case 0x88:
    goto code_r0x000100477bc8;
  case 0x54:
  case 0x80:
    goto code_r0x000100477d24;
  case 0x55:
  case 0x81:
    goto code_r0x00010047788c;
  case 0x56:
  case 0x82:
    goto code_r0x0001004778d0;
  case 0x5c:
    goto code_r0x000100477cb4;
  case 0x61:
    goto code_r0x000100477ce4;
  case 99:
    goto code_r0x000100477c8c;
  case 0x65:
    goto code_r0x000100477d40;
  case 0x85:
  case 0xe2:
code_r0x000100477c3c:
    pppppppuStack_2d8 = pppppppuVar20;
    pppppppuStack_2c0 = pppppppuVar25;
  case 0xe6:
    ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
    ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_308,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_308 >> 8);
code_r0x000100477c4c:
    unaff_x23 = (ulong *******)0x8000000000000001;
code_r0x000100477c50:
    param_3 = (char *)pppppppuStack_80;
code_r0x000100477c54:
    unaff_x22 = uStack_318;
    pppppppuVar20 = pppppppuStack_328;
code_r0x000100477c5c:
    unaff_x27 = &ppppppuStack_300;
    pppppppuVar25 = (ulong *******)0x6e;
code_r0x000100477c64:
    *pppppppuVar20 = (ulong ******)((ulong)pppppppuVar25 | 0x8000000000000000);
    pppppppuVar20[1] = (ulong ******)param_3;
code_r0x000100477c6c:
    in_ZR = unaff_x24 == (ulong *******)0x8000000000000000;
code_r0x000100477c74:
    if (!(bool)in_ZR) goto joined_r0x000100477ec8;
    goto LAB_100477ae8;
  case 0x87:
    goto code_r0x000100477c1c;
  case 0x89:
    goto code_r0x000100477c4c;
  case 0x8b:
  case 0xe1:
    goto code_r0x000100477c24;
  case 0x8e:
    goto code_r0x000100477c6c;
  case 0x8f:
  case 0xe0:
    goto code_r0x000100477ba0;
  case 0x92:
  case 0xe7:
    goto code_r0x000100477b78;
  case 0x93:
    goto code_r0x000100477c0c;
  case 0x94:
    goto code_r0x000100477b70;
  case 0x96:
    goto code_r0x000100477ccc;
  case 0x97:
    goto code_r0x000100477868;
  case 0x9b:
  case 0xb1:
    break;
  case 0xc6:
    goto code_r0x000100477f68;
  case 199:
    goto code_r0x000100477f78;
  case 200:
    goto code_r0x000100477f40;
  case 0xc9:
code_r0x000100477f58:
    pppppppuVar25 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuStack_2d8 = pppppppuVar20;
  case 0xcd:
    pppppppuVar26 = pppppppuStack_308;
    pppppppuStack_2c0 = pppppppuVar25;
code_r0x000100477f68:
    ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
    ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuVar26,0);
    uStack_df = (undefined7)((ulong)pppppppuVar26 >> 8);
    param_3 = &UNK_108ca1a98;
code_r0x000100477f78:
    param_5 = &UNK_10b24f848;
    param_4 = (ulong *******)0x2c;
code_r0x000100477f88:
    FUN_107c05cac(param_3,param_4,param_5);
    goto code_r0x000100477fc4;
  case 0xca:
    goto FUN_100477f04;
  case 0xcb:
    goto code_r0x000100477f88;
  case 0xcc:
    goto code_r0x000100477fa0;
  case 0xce:
    goto code_r0x000100477fb8;
  case 0xcf:
code_r0x000100477f34:
    ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
    ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuVar25,0);
    uStack_df = (undefined7)((ulong)pppppppuVar25 >> 8);
    param_3 = &UNK_108ca1a98;
code_r0x000100477f40:
    param_5 = &UNK_10b24f848;
code_r0x000100477f48:
    FUN_107c05cac(param_3,0x2c,param_5);
    goto code_r0x000100477fc4;
  case 0xd0:
    goto code_r0x000100477fa8;
  case 0xd1:
code_r0x000100477edc:
    ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
    ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuStack_308,0);
    uStack_df = (undefined7)((ulong)pppppppuStack_308 >> 8);
    pppppppuStack_88 = (ulong *******)&UNK_108ca26b0;
    pppppppuStack_80 = (ulong *******)0x2;
    uStack_b8 = (ulong *******)&pppppppuStack_88;
    pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
FUN_100477f04:
    param_3 = s_duplicate_field_____108ac2973;
code_r0x000100477f0c:
    param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_b8);
    unaff_x27 = &ppppppuStack_300;
    unaff_x22 = uStack_318;
    pppppppuVar20 = pppppppuStack_328;
  case 0xfc:
LAB_100477a84:
    *pppppppuVar20 = (ulong ******)0x800000000000006e;
    pppppppuVar20[1] = (ulong ******)param_3;
    pppppppuVar25 = (ulong *******)0x8000000000000000;
code_r0x000100477a94:
    if (unaff_x24 != pppppppuVar25) {
joined_r0x000100477ec8:
      if (unaff_x24 != (ulong *******)0x0) {
        _free(pppppppuStack_308);
      }
      lVar34 = lStack_c8;
      if (lStack_c0 != 0) {
        puVar33 = (undefined8 *)(lStack_c8 + 8);
        lVar32 = lStack_c0;
        do {
          if (puVar33[-1] != 0) {
            _free(*puVar33);
          }
          puVar33 = puVar33 + 3;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
      if (pppppppuStack_d0 != (ulong *******)0x0) {
        _free(lVar34);
      }
    }
LAB_100477ae8:
    if (-0x7fffffffffffffff < (long)unaff_x23) {
joined_r0x000100477b5c:
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x22);
      }
    }
LAB_100477c18:
    param_3 = (char *)(unaff_x27 + 4);
code_r0x000100477c1c:
    FUN_100d34830(param_3);
code_r0x000100477c20:
    pppppppuVar25 = (ulong *******)(ulong)(byte)ppppppuStack_300;
code_r0x000100477c24:
    in_ZR = (int)pppppppuVar25 == 0x16;
code_r0x000100477c28:
    if (!(bool)in_ZR) {
code_r0x000100477c2c:
      FUN_100e077ec(&ppppppuStack_300);
    }
    goto LAB_100477db8;
  case 0xd2:
    goto code_r0x000100477f0c;
  case 0xd3:
code_r0x000100477f90:
    pppppppuStack_2c0 = (ulong *******)((long)unaff_x25 + 1);
    pppppppuVar25 = pppppppuStack_308;
    pppppppuStack_2d8 = pppppppuVar20;
code_r0x000100477fa0:
    ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
    ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuVar25,0);
    uStack_df = (undefined7)((ulong)pppppppuVar25 >> 8);
code_r0x000100477fa8:
    param_3 = &UNK_108ca1a98;
    param_5 = &UNK_10b24f848;
code_r0x000100477fb8:
    FUN_107c05cac(param_3,0x2c,param_5);
code_r0x000100477fc4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100477fc8);
    (*pcVar6)();
  case 0xd4:
    goto code_r0x000100477eb4;
  case 0xd5:
    goto code_r0x000100477f48;
  case 0xd6:
code_r0x000100477eac:
    param_3 = (char *)thunk_FUN_108856088(param_3,param_4);
    unaff_x22 = uStack_318;
code_r0x000100477eb4:
    unaff_x27 = &ppppppuStack_300;
    *pppppppuStack_328 = (ulong ******)0x800000000000006e;
    pppppppuStack_328[1] = (ulong ******)param_3;
    goto joined_r0x000100477ec8;
  case 0xd8:
code_r0x000100477fe8:
    param_3 = (char *)thunk_FUN_108855b04(param_3,&pppppppuStack_88,param_5);
    unaff_x27 = &ppppppuStack_300;
    unaff_x22 = uStack_318;
    pppppppuVar20 = pppppppuStack_328;
    goto LAB_100477a84;
  case 0xd9:
    goto code_r0x00010047751c;
  case 0xda:
    goto code_r0x000100477560;
  case 0xdd:
    goto code_r0x000100477c14;
  case 0xde:
    goto code_r0x000100477bdc;
  case 0xdf:
    goto code_r0x000100477bf4;
  case 0xe8:
    goto code_r0x000100477ba8;
  case 0xea:
    goto code_r0x000100477b50;
  case 0xeb:
code_r0x000100477be4:
    pppppppuVar30 = (ulong *******)0x6e;
    pppppppuVar26 = pppppppuStack_b0;
    pppppppuStack_2d8 = pppppppuVar20;
    pppppppuStack_2c0 = pppppppuVar25;
code_r0x000100477bf4:
    pppppppuVar30 = (ulong *******)((ulong)pppppppuVar30 | 0x8000000000000000);
code_r0x000100477bf8:
    pppppppuVar31 = pppppppuStack_328;
code_r0x000100477bfc:
    *pppppppuVar31 = (ulong ******)pppppppuVar30;
    pppppppuVar31[1] = (ulong ******)pppppppuVar26;
    unaff_x22 = uStack_318;
code_r0x000100477c04:
    unaff_x27 = &ppppppuStack_300;
    pppppppuVar25 = (ulong *******)0x2;
code_r0x000100477c0c:
    in_OV = SBORROW8((long)unaff_x23,(ulong)pppppppuVar25 | 0x8000000000000000);
    in_NG = (long)((long)unaff_x23 - ((ulong)pppppppuVar25 | 0x8000000000000000)) < 0;
code_r0x000100477c14:
    if (in_NG == in_OV) goto joined_r0x000100477b5c;
    goto LAB_100477c18;
  case 0xec:
    goto code_r0x000100477b48;
  case 0xef:
    goto code_r0x0001004778c0;
  case 0xf0:
    goto code_r0x000100477904;
  case 0xf2:
    goto code_r0x000100477a44;
  case 0xf3:
    goto code_r0x000100477a54;
  case 0xf4:
    goto code_r0x000100477a1c;
  case 0xf5:
code_r0x000100477a34:
    ppppppuStack_e8._0_1_ = SUB81(unaff_x28,0);
    ppppppuStack_e8._1_7_ = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(pppppppuVar25,0);
    uStack_df = (undefined7)((ulong)pppppppuVar25 >> 8);
    pppppppuVar25 = (ulong *******)0x8000000000000001;
  case 0xf9:
    in_ZR = unaff_x23 == pppppppuVar25;
    unaff_x22 = uStack_318;
    pppppppuVar20 = (ulong *******)param_3;
code_r0x000100477a44:
    param_3 = (char *)pppppppuStack_328;
    if ((bool)in_ZR) {
code_r0x000100477a50:
      unaff_x27 = &ppppppuStack_300;
      pppppppuVar25 = (ulong *******)&UNK_108ca2000;
code_r0x000100477a54:
      pppppppuStack_88 = pppppppuVar25 + 0xd6;
      pppppppuStack_80 = (ulong *******)0x2;
      pppppppuVar25 = (ulong *******)&pppppppuStack_88;
code_r0x000100477a64:
      pppppppuVar30 = (ulong *******)&DAT_100c7b3a0;
      pppppppuVar20 = (ulong *******)param_3;
code_r0x000100477a6c:
      unaff_x23 = (ulong *******)0x8000000000000001;
      param_3 = s_missing_field_____108ac28f7;
      uStack_b8 = pppppppuVar25;
      pppppppuStack_b0 = pppppppuVar30;
code_r0x000100477a7c:
      param_3 = (char *)thunk_FUN_108856088(param_3,&uStack_b8);
      goto LAB_100477a84;
    }
    unaff_x27 = &ppppppuStack_300;
    unaff_x21 = pppppppuStack_328;
    if (unaff_x24 == (ulong *******)0x8000000000000000) {
      pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_80 = (ulong *******)0x6;
      uStack_b8 = (ulong *******)&pppppppuStack_88;
      pppppppuStack_b0 = (ulong *******)&DAT_100c7b3a0;
      param_3 = s_missing_field_____108ac28f7;
      param_4 = (ulong *******)&uStack_b8;
code_r0x000100477b48:
      param_3 = (char *)thunk_FUN_108856088(param_3,param_4);
      pppppppuVar25 = (ulong *******)0x6e;
code_r0x000100477b50:
      *unaff_x21 = (ulong ******)((ulong)pppppppuVar25 | 0x8000000000000000);
      unaff_x21[1] = (ulong ******)param_3;
      unaff_x23 = (ulong *******)((ulong)unaff_x23 & 0x7fffffffffffffff);
      goto joined_r0x000100477b5c;
    }
    unaff_x20 = (ulong *******)0x800000000000006e;
    pppppppuVar25 = &ppppppuStack_e8;
code_r0x000100477b70:
    ppppppuVar21 = pppppppuVar25[2];
    ppppppuVar38 = pppppppuVar25[5];
    ppppppuVar22 = pppppppuVar25[4];
    unaff_x21[4] = pppppppuVar25[3];
    unaff_x21[3] = ppppppuVar21;
code_r0x000100477b78:
    param_4 = unaff_x21;
    param_4[6] = ppppppuVar38;
    param_4[5] = ppppppuVar22;
    *param_4 = (ulong ******)((long)unaff_x20 + -3);
    param_4[1] = (ulong ******)unaff_x24;
    param_4[2] = (ulong ******)pppppppuStack_308;
    param_4[7] = (ulong ******)unaff_x23;
    param_4[8] = (ulong ******)unaff_x22;
    param_4[9] = ppppppuStack_320;
    param_3 = (char *)&ppppppuStack_2b0;
    unaff_x21 = param_4;
code_r0x000100477ba0:
    _memcpy(param_3,param_4,0x1c0);
code_r0x000100477ba8:
    FUN_100d34830(unaff_x27 + 4);
    if (unaff_x19 != pppppppuVar20) {
      pppppppuVar25 = (ulong *******)((ulong)((long)unaff_x19 - (long)pppppppuVar20) >> 6);
      param_5 = &UNK_10b23a000;
      uStack_b8 = pppppppuVar35;
code_r0x000100477bc8:
      param_5 = param_5 + 400;
      param_3 = (char *)((long)pppppppuVar25 + (long)pppppppuVar35);
code_r0x000100477bd0:
      ppppppuVar21 = (ulong ******)thunk_FUN_1087e422c(param_3,&uStack_b8,param_5);
      *unaff_x21 = (ulong ******)unaff_x20;
      unaff_x21[1] = ppppppuVar21;
code_r0x000100477bdc:
      goto code_r0x000100477e60;
    }
    goto LAB_100477db8;
  case 0xf6:
    goto code_r0x0001004779e0;
  case 0xf7:
    goto code_r0x000100477a64;
  case 0xf8:
    goto code_r0x000100477a7c;
  case 0xfa:
    goto code_r0x000100477a94;
  case 0xfb:
    goto code_r0x000100477a10;
  case 0xfd:
    goto code_r0x0001004779b8;
  case 0xfe:
    goto code_r0x0001004779e8;
  case 0xff:
    goto code_r0x000100477a6c;
  }
  pppppppuStack_2a8 = pppppppuVar25;
code_r0x000100477d50:
  bVar24 = 1;
code_r0x000100477d94:
  ppppppuStack_2b0 = (ulong ******)CONCAT71(ppppppuStack_2b0._1_7_,bVar24);
code_r0x000100477d98:
  param_5 = &UNK_10b2195b0;
code_r0x000100477da0:
  pppppppuVar20 = (ulong *******)FUN_107c05dcc(&ppppppuStack_2b0,&pppppppuStack_88,param_5);
  pppppppuVar25 = (ulong *******)0x6e;
code_r0x000100477db0:
  *(ulong *******)param_3 = (ulong ******)((ulong)pppppppuVar25 | 0x8000000000000000);
  *(ulong ********)((long)param_3 + 8) = pppppppuVar20;
LAB_100477db8:
code_r0x000100477dc8:
  return;
}

