
/* WARNING: Type propagation algorithm not settling */

void FUN_100438adc(undefined1 param_1 [16],char *param_2,ulong *******param_3,undefined *param_4)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  ulong *******pppppppuVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 in_ZR;
  bool bVar16;
  ulong *******pppppppuVar17;
  ulong ******ppppppuVar18;
  ulong ******ppppppuVar19;
  uint uVar20;
  ulong *******extraout_x1;
  byte bVar21;
  undefined1 uVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  ulong *******pppppppuVar28;
  ulong *******pppppppuVar29;
  ulong *******in_x15;
  ulong *******unaff_x19;
  ulong *******pppppppuVar30;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  undefined8 *puVar31;
  ulong *******unaff_x22;
  ulong ******unaff_x23;
  undefined8 *puVar32;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******pppppppuVar33;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar34;
  code *unaff_x30;
  ulong *******pppppppuVar35;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 auStack_330 [88];
  ulong ******ppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  undefined8 uStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong ******ppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong *******pppppppuStack_2a0;
  long lVar36;
  ulong ******ppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong ******ppppppuStack_280;
  long lStack_278;
  ulong ******ppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong ******ppppppuStack_260;
  ulong ******ppppppuStack_258;
  ulong ******ppppppuStack_250;
  ulong ******ppppppuStack_248;
  ulong ******ppppppuStack_210;
  ulong ******ppppppuStack_208;
  ulong *******pppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  ulong ******ppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  long lStack_1d8;
  ulong *******pppppppuStack_1d0;
  ulong ******ppppppuStack_1c8;
  ulong ******ppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong ******ppppppuStack_108;
  ulong *******pppppppuStack_100;
  long lStack_f0;
  ulong *******pppppppuStack_e8;
  ulong ******ppppppuStack_e0;
  long lStack_d8;
  ulong *******pppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong ******ppppppuStack_b8;
  undefined8 uStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong *******pppppppuStack_78;
  ulong ******ppppppuStack_70;
  ulong *******pppppppuStack_68;
  
  uVar25 = param_1._8_8_;
  pppppppuVar35 = param_1._0_8_;
  puVar34 = &stack0xfffffffffffffff0;
  puVar14 = auStack_330 + 0x50;
  puVar13 = auStack_330 + 0x50;
  pppppppuVar30 = (ulong *******)&uStack_90;
  bVar21 = *(byte *)param_3;
  pppppppuVar23 = (ulong *******)(ulong)bVar21;
  pppppppuVar28 = (ulong *******)&UNK_108c98b3a;
  pppppppuVar29 =
       (ulong *******)
       (&UNK_100438b20 + (ulong)*(ushort *)(&UNK_108c98b3a + (long)pppppppuVar23 * 2) * 4);
  puVar15 = auStack_330 + 0x50;
  puVar10 = auStack_330 + 0x50;
  puVar11 = auStack_330 + 0x50;
  puVar12 = auStack_330 + 0x50;
  puVar8 = auStack_330 + 0x50;
  puVar9 = auStack_330 + 0x50;
  puVar7 = auStack_330 + 0x50;
  pppppppuVar17 = (ulong *******)param_2;
  pppppppuVar24 = pppppppuVar23;
  pppppppuVar5 = unaff_x22;
  pppppppuVar33 = (ulong *******)param_2;
  switch(bVar21) {
  case 0:
  case 0xe9:
    ppppppuStack_270 =
         (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,*(char *)((long)param_3 + 1)) << 8);
  case 0xf8:
    ppppppuStack_270 = (ulong ******)((ulong)ppppppuStack_270 & 0xffffffffffffff00);
    goto code_r0x0001004392f8;
  case 1:
  case 0x77:
  case 0x8f:
  case 0xe2:
  case 0xfc:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0xe6:
code_r0x0001004392b0:
    bVar21 = 1;
code_r0x0001004392b4:
    break;
  case 2:
  case 0xdc:
    pppppppuStack_268 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
    goto code_r0x0001004392b0;
  case 3:
  case 0xf7:
    pppppppuStack_268 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
    goto code_r0x0001004392b0;
  case 4:
  case 0xfb:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x0001004392b0;
  case 5:
  case 0xfa:
    pppppppuVar23 = (ulong *******)(long)*(char *)((long)param_3 + 1);
  case 0x7d:
code_r0x0001004392ec:
    pppppppuStack_268 = pppppppuVar23;
code_r0x0001004392f0:
    bVar21 = 2;
    break;
  case 6:
  case 0x88:
    pppppppuVar23 = (ulong *******)(long)*(short *)((long)param_3 + 2);
  case 0x75:
  case 0xaa:
    goto code_r0x0001004392ec;
  case 7:
  case 0xe1:
  case 0xff:
    pppppppuVar23 = (ulong *******)(long)(int)*(uint *)((long)param_3 + 4);
    goto code_r0x0001004392ec;
  case 8:
    pppppppuVar23 = (ulong *******)param_3[1];
    goto code_r0x0001004392ec;
  case 9:
    pppppppuVar35 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xe3:
  case 0xf2:
    pppppppuVar35 = (ulong *******)(double)SUB84(pppppppuVar35,0);
code_r0x0001004392dc:
    bVar21 = 3;
    pppppppuStack_268 = pppppppuVar35;
    break;
  case 10:
  case 0x90:
    pppppppuVar35 = (ulong *******)param_3[1];
    goto code_r0x0001004392dc;
  case 0xb:
  case 0xe0:
  case 0xfe:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xe8:
    puVar8 = &stack0xffffffffffffffa0;
    pppppppuVar30 = unaff_x19;
    puVar34 = unaff_x29;
code_r0x000100439220:
    puVar9 = puVar8;
code_r0x000100439228:
    *(ulong ********)(puVar9 + 0x40) = unaff_x20;
    *(ulong ********)(puVar9 + 0x48) = pppppppuVar30;
    *(undefined1 **)(puVar9 + 0x50) = puVar34;
    *(code **)(puVar9 + 0x58) = unaff_x30;
    *(undefined4 *)(puVar9 + 0x1c) = 0;
    uVar20 = (uint)param_3;
    if (uVar20 < 0x80) {
      puVar9[0x1c] = (byte)param_3;
      uVar25 = 1;
    }
    else {
      bVar21 = (byte)param_3 & 0x3f | 0x80;
      if (uVar20 < 0x800) {
        puVar9[0x1c] = (byte)(uVar20 >> 6) | 0xc0;
        puVar9[0x1d] = bVar21;
        uVar25 = 2;
      }
      else {
        bVar2 = (byte)(uVar20 >> 6) & 0x3f | 0x80;
        if (uVar20 < 0x10000) {
          puVar9[0x1c] = (byte)(uVar20 >> 0xc) | 0xe0;
          puVar9[0x1d] = bVar2;
          puVar9[0x1e] = bVar21;
          uVar25 = 3;
        }
        else {
          puVar9[0x1c] = (byte)(uVar20 >> 0x12) | 0xf0;
          puVar9[0x1d] = (byte)(uVar20 >> 0xc) & 0x3f | 0x80;
          puVar9[0x1e] = bVar2;
          puVar9[0x1f] = bVar21;
          uVar25 = 4;
        }
      }
    }
    *(undefined1 **)(puVar9 + 0x28) = puVar9 + 0x1c;
    *(undefined8 *)(puVar9 + 0x30) = uVar25;
    puVar9[0x20] = 5;
    ppppppuVar18 = (ulong ******)func_0x000108a4a50c(puVar9 + 0x20,puVar9 + 0x3f,&UNK_10b21c610);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
    return;
  case 0xc:
  case 0xe5:
    param_3 = param_3 + 1;
  case 0xf4:
    puVar10 = &stack0xffffffffffffffa0;
code_r0x000100439248:
    puVar34 = *(undefined1 **)(puVar10 + 0x50);
    unaff_x30 = *(code **)(puVar10 + 0x58);
    unaff_x20 = *(ulong ********)(puVar10 + 0x40);
    pppppppuVar30 = *(ulong ********)(puVar10 + 0x48);
    puVar11 = puVar10;
code_r0x000100439250:
    unaff_x22 = *(ulong ********)(puVar11 + 0x30);
    unaff_x21 = *(ulong ********)(puVar11 + 0x38);
    puVar12 = puVar11;
code_r0x000100439258:
    puVar13 = puVar12 + 0x60;
code_r0x000100439260:
    *(ulong ********)(puVar13 + -0x30) = unaff_x22;
    *(ulong ********)(puVar13 + -0x28) = unaff_x21;
    *(ulong ********)(puVar13 + -0x20) = unaff_x20;
    *(ulong ********)(puVar13 + -0x18) = pppppppuVar30;
    *(undefined1 **)(puVar13 + -0x10) = puVar34;
    *(code **)(puVar13 + -8) = unaff_x30;
    ppppppuVar18 = param_3[1];
    ppppppuVar19 = param_3[2];
    *(ulong *******)(puVar13 + -0x48) = ppppppuVar18;
    *(ulong *******)(puVar13 + -0x40) = ppppppuVar19;
    puVar13[-0x50] = 5;
    ppppppuVar19 = (ulong ******)func_0x000108a4a50c(puVar13 + -0x50,puVar13 + -0x31,&UNK_10b21c610)
    ;
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar19;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar18);
    }
    return;
  case 0xd:
  case 0xe4:
    pppppppuStack_268 = (ulong *******)param_3[1];
    ppppppuStack_260 = param_3[2];
    bVar21 = 5;
  case 0x71:
    break;
  case 0xe:
  case 0x54:
  case 0xe7:
    param_3 = param_3 + 1;
    puVar7 = &stack0xffffffffffffffa0;
    pppppppuVar30 = unaff_x19;
    puVar34 = unaff_x29;
  case 0xf6:
    *(ulong ********)(puVar7 + 0x30) = unaff_x22;
    *(ulong ********)(puVar7 + 0x38) = unaff_x21;
    *(ulong ********)(puVar7 + 0x40) = unaff_x20;
    *(ulong ********)(puVar7 + 0x48) = pppppppuVar30;
    *(undefined1 **)(puVar7 + 0x50) = puVar34;
    *(code **)(puVar7 + 0x58) = unaff_x30;
    ppppppuVar18 = param_3[1];
    ppppppuVar19 = param_3[2];
    *(ulong *******)(puVar7 + 0x18) = ppppppuVar18;
    *(ulong *******)(puVar7 + 0x20) = ppppppuVar19;
    puVar7[0x10] = 6;
    ppppppuVar19 = (ulong ******)func_0x000108a4a50c(puVar7 + 0x10,puVar7 + 0x2f,&UNK_10b21c610);
    *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar19;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar18);
    }
    return;
  case 0xf:
  case 0x72:
  case 0x94:
  case 0xf3:
    pppppppuStack_268 = (ulong *******)param_3[1];
    ppppppuStack_260 = param_3[2];
  case 0x7a:
  case 0x92:
  case 0xdd:
    bVar21 = 6;
    break;
  case 0x10:
  case 0xfd:
    bVar21 = 8;
    break;
  default:
    pppppppuVar17 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)pppppppuVar17[1];
    ppppppuStack_270 = *pppppppuVar17;
    ppppppuStack_258 = pppppppuVar17[3];
    ppppppuStack_260 = pppppppuVar17[2];
    func_0x000107c04768(param_2,&ppppppuStack_270);
    goto code_r0x000100438f5c;
  case 0x12:
    bVar21 = 7;
    break;
  case 0x13:
    unaff_x20 = (ulong *******)param_3[1];
    pppppppuStack_268 = (ulong *******)unaff_x20[1];
    ppppppuStack_270 = *unaff_x20;
    ppppppuStack_258 = unaff_x20[3];
    ppppppuStack_260 = unaff_x20[2];
  case 0x97:
    param_3 = &ppppppuStack_270;
code_r0x000100438f40:
    pppppppuVar17 = unaff_x20;
    func_0x000107c05548(param_2,param_3);
code_r0x000100438f5c:
code_r0x000100438f64:
code_r0x000107c06034:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar17);
    return;
  case 0x14:
  case 0xad:
    unaff_x23 = param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x26 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
    ppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
  case 0x98:
    pppppppuStack_2a0 = (ulong *******)0x0;
code_r0x000100438f84:
    unaff_x21 = unaff_x20;
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x000100438fa0:
      param_3 = (ulong *******)&UNK_10b22fb08;
code_r0x000100438fa8:
      param_4 = &UNK_10b20a590;
code_r0x000100438fb0:
      pppppppuStack_a0 = (ulong *******)thunk_FUN_1087e422c(0,param_3,param_4);
code_r0x000100438fbc:
      *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
      *(ulong ********)((long)param_2 + 8) = pppppppuStack_a0;
code_r0x000100438fc8:
      lVar36 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
      while (lVar36 = lVar36 + -1, lVar36 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong ******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      pppppppuStack_2b8 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100438fa0;
      uVar25 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (byte)uVar25;
      uStack_90._2_6_ = (undefined6)((ulong)uVar25 >> 8);
      uStack_88 = (undefined1)((ulong)uVar25 >> 0x38);
      pppppppuStack_78 = (ulong *******)unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
      uStack_90._0_1_ = *(byte *)unaff_x20;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x000100438fbc;
      if (unaff_x26 == (ulong *******)0x1) {
code_r0x00010043905c:
        ppppppuVar18 = (ulong ******)thunk_FUN_1087e422c(1,&UNK_10b22fb08,&UNK_10b20a590);
        *(ulong *******)param_2 = (ulong ******)0x800000000000006e;
        *(ulong *******)((long)param_2 + 8) = ppppppuVar18;
        if (((ulong)pppppppuStack_a8 & 0x7fffffffffffffff) != 0) {
code_r0x000100439088:
          _free(pppppppuStack_a0);
code_r0x000100439090:
        }
        goto code_r0x000100438fc8;
      }
      unaff_x21 = unaff_x20 + 8;
      bVar21 = *(byte *)(unaff_x20 + 4);
      pppppppuStack_2b8 = unaff_x21;
      if (bVar21 == 0x16) goto code_r0x00010043905c;
      uVar25 = *(undefined8 *)((long)unaff_x20 + 0x29);
      pppppppuVar35 = *(ulong ********)((long)unaff_x20 + 0x21);
      unaff_x22 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      unaff_x26 = pppppppuStack_98;
code_r0x000100439344:
      uStack_87 = (undefined7)uVar25;
      uStack_90._1_1_ = (byte)pppppppuVar35;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar35 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar35 >> 0x38);
      pppppppuStack_78 = (ulong *******)unaff_x20[7];
      uStack_80 = SUB81(unaff_x20[6],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[6] >> 8);
      pppppppuVar28 = (ulong *******)0x2;
code_r0x000100439354:
      pppppppuStack_2a0 = pppppppuVar28;
code_r0x000100439358:
      uStack_90._0_1_ = bVar21;
code_r0x00010043935c:
      pppppppuVar17 = (ulong *******)&pppppppuStack_a8;
      param_3 = (ulong *******)&uStack_90;
code_r0x000100439364:
      func_0x0001013d74b4(pppppppuVar17,param_3);
code_r0x000100439368:
      pppppppuVar23 = (ulong *******)((ulong)pppppppuStack_a8 & 0xff);
code_r0x00010043936c:
      if (((ulong)pppppppuVar23 & 1) != 0) {
code_r0x000100439370:
        pppppppuVar17 = pppppppuStack_a0;
code_r0x000100439374:
        pppppppuVar23 = (ulong *******)0x800000000000006e;
code_r0x00010043937c:
        *(ulong ********)param_2 = pppppppuVar23;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar17;
code_r0x000100439380:
        in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x000100439384:
        pppppppuVar5 = unaff_x22;
        if (!(bool)in_ZR) {
code_r0x000100439388:
          pppppppuStack_a0 = pppppppuVar5;
          goto code_r0x000100439088;
        }
        goto code_r0x000100438fc8;
      }
code_r0x00010043938c:
      pppppppuVar30 = (ulong *******)0x6e;
code_r0x000100439390:
      pppppppuVar30 = (ulong *******)((ulong)pppppppuVar30 & 0xffffffffffff | 0x8000000000000000);
      bVar21 = (byte)((ulong)pppppppuStack_a8 >> 8);
code_r0x000100439398:
      *(ulong *******)param_2 = (ulong ******)((long)pppppppuVar30 + -0x1a);
      *(ulong ********)((long)param_2 + 8) = unaff_x25;
code_r0x0001004393a0:
      *(ulong ********)((long)param_2 + 0x10) = unaff_x22;
      *(ulong ********)((long)param_2 + 0x18) = unaff_x26;
      *(byte *)((long)param_2 + 0x20) = bVar21;
      pppppppuVar17 = &ppppppuStack_270;
      param_3 = (ulong *******)param_2;
code_r0x0001004393b0:
      _memcpy(pppppppuVar17,param_3,0x1c0);
code_r0x0001004393b8:
      pppppppuVar17 = (ulong *******)&pppppppuStack_2c0;
code_r0x0001004393bc:
      pppppppuVar17 = (ulong *******)FUN_100fbc738(pppppppuVar17);
code_r0x0001004393c0:
      if (pppppppuVar17 != (ulong *******)0x0) {
code_r0x0001004393c4:
        *(ulong ********)param_2 = pppppppuVar30;
        *(ulong ********)((long)param_2 + 8) = pppppppuVar17;
code_r0x0001004393c8:
        FUN_100e44f40(&ppppppuStack_270);
code_r0x0001004393d0:
      }
    }
    goto code_r0x00010043931c;
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
    pppppppuStack_2a0 = (ulong *******)param_3[2];
    ppppppuVar18 = param_3[3];
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    if (ppppppuVar18 != (ulong ******)0x0) {
      unaff_x23 = (ulong ******)0x0;
      unaff_x28 = (undefined8 *)((ulong)&uStack_90 | 1);
      pppppppuVar17 = (ulong *******)((ulong)&pppppppuStack_2c0 | 1);
      ppppppuStack_2d8 = (ulong ******)(((long)ppppppuVar18 * 0x40 - 0x40U >> 6) + 1);
      unaff_x21 = (ulong *******)0x2;
      unaff_x22 = (ulong *******)0x8000000000000001;
      unaff_x26 = pppppppuStack_2a0 + (long)ppppppuVar18 * 8;
      unaff_x25 = pppppppuStack_2a0;
      pppppppuStack_2d0 = (ulong *******)param_2;
      do {
        unaff_x24 = unaff_x25 + 8;
        bVar21 = *(byte *)unaff_x25;
        pppppppuVar28 = (ulong *******)(ulong)bVar21;
        if (bVar21 == 0x16) goto code_r0x00010043909c;
        ppppppuVar18 = unaff_x25[2];
        *(ulong *******)((long)unaff_x28 + 0x17) = unaff_x25[3];
        *(ulong *******)((long)unaff_x28 + 0xf) = ppppppuVar18;
        uVar25 = *(undefined8 *)((long)unaff_x25 + 9);
        pppppppuVar35 = *(ulong ********)((long)unaff_x25 + 1);
        uStack_90._0_1_ = bVar21;
code_r0x000100438bdc:
        unaff_x28[1] = uVar25;
        *unaff_x28 = pppppppuVar35;
        pppppppuStack_2b8 = (ulong *******)unaff_x25[5];
        pppppppuStack_2c0 = (ulong *******)unaff_x25[4];
        pppppppuStack_2a8 = (ulong *******)unaff_x25[7];
        ppppppuStack_2b0 = unaff_x25[6];
        pppppppuVar23 = (ulong *******)CONCAT71(uStack_87,uStack_88);
        param_2 = (char *)CONCAT71(uStack_7f,uStack_80);
        uVar20 = (uint)pppppppuVar28;
        if (uVar20 < 0xd) {
          if (uVar20 == 1) {
            iVar27 = 1;
            if (uStack_90._1_1_ != 1) {
              iVar27 = 2;
            }
            iVar26 = 0;
            if (uStack_90._1_1_ != 0) {
              iVar26 = iVar27;
            }
          }
          else {
            if (uVar20 != 4) {
              if (uVar20 == 0xc) {
                if (pppppppuStack_78 == (ulong *******)0x6) {
                  iVar26 = 1;
                  if (*(uint *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                    iVar26 = 2;
                  }
                }
                else if (pppppppuStack_78 == (ulong *******)0x2) {
code_r0x000100438c20:
                  iVar26 = 2;
                  if (*(short *)param_2 == 0x6469) {
                    iVar26 = 0;
                  }
                }
                else {
                  iVar26 = 2;
                }
                goto joined_r0x000100438d94;
              }
code_r0x0001004394cc:
              param_2 = (char *)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b210de0);
              goto LAB_100439198;
            }
            iVar27 = 1;
            if (pppppppuVar23 != (ulong *******)0x1) {
              iVar27 = 2;
            }
            iVar26 = 0;
            if (pppppppuVar23 != (ulong *******)0x0) {
              iVar26 = iVar27;
            }
          }
code_r0x000100438e20:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (uVar20 == 0xd) {
            if ((ulong *******)param_2 == (ulong *******)0x6) {
              pppppppuVar28 = (ulong *******)(ulong)(*(uint *)pppppppuVar23 ^ 0x61726170);
              pppppppuVar23 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar23 + 4);
              pppppppuVar29 = (ulong *******)0x736d;
code_r0x000100438e0c:
              iVar26 = 1;
              if ((int)pppppppuVar28 != 0 || (int)pppppppuVar23 != (int)pppppppuVar29) {
                iVar26 = 2;
              }
            }
            else {
              if ((ulong *******)param_2 != (ulong *******)0x2) goto code_r0x000100438dec;
              iVar26 = 2;
              if (*(short *)pppppppuVar23 == 0x6469) {
                iVar26 = 0;
              }
            }
            goto code_r0x000100438e20;
          }
          if (uVar20 != 0xe) {
            if (uVar20 != 0xf) goto code_r0x0001004394cc;
            if ((ulong *******)param_2 == (ulong *******)0x6) {
              if (((*(char *)pppppppuVar23 == 'p') && (*(char *)((long)pppppppuVar23 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar23 + 2) == 'r')) {
                in_ZR = *(char *)((long)pppppppuVar23 + 3) == 'a';
code_r0x000100438dc8:
                if ((((bool)in_ZR) && (*(char *)((long)pppppppuVar23 + 4) == 'm')) &&
                   (*(char *)((long)pppppppuVar23 + 5) == 's')) {
                  iVar26 = 1;
                  goto code_r0x000100438e20;
                }
              }
            }
            else if ((((ulong *******)param_2 == (ulong *******)0x2) &&
                     (*(char *)pppppppuVar23 == 'i')) && (*(char *)((long)pppppppuVar23 + 1) == 'd')
                    ) {
              iVar26 = 0;
              goto code_r0x000100438e20;
            }
code_r0x000100438dec:
            iVar26 = 2;
            goto code_r0x000100438e20;
          }
          if (pppppppuStack_78 == (ulong *******)0x6) {
            if (((((*param_2 != 'p') || (*(char *)((long)param_2 + 1) != 'a')) ||
                 (*(char *)((long)param_2 + 2) != 'r')) ||
                ((*(char *)((long)param_2 + 3) != 'a' || (*(char *)((long)param_2 + 4) != 'm')))) ||
               (*(char *)((long)param_2 + 5) != 's')) goto code_r0x000100438d5c;
            iVar26 = 1;
          }
          else if (((pppppppuStack_78 == (ulong *******)0x2) && (*param_2 == 'i')) &&
                  (*(char *)((long)param_2 + 1) == 'd')) {
            iVar26 = 0;
          }
          else {
code_r0x000100438d5c:
            iVar26 = 2;
          }
joined_r0x000100438d94:
          if (pppppppuVar23 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar21 = (byte)pppppppuStack_2c0;
        pppppppuVar28 = unaff_x24;
        if (iVar26 == 0) {
          if (unaff_x22 != (ulong *******)0x8000000000000001) goto code_r0x000100439400;
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar21 == 0x16) {
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004394c8;
          }
          ppppppuVar18 = *pppppppuVar17;
          unaff_x28[1] = pppppppuVar17[1];
          *unaff_x28 = ppppppuVar18;
          uVar25 = *(undefined8 *)((long)pppppppuVar17 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar17 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar25;
          uStack_90._0_1_ = bVar21;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          unaff_x20 = pppppppuStack_a0;
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
            pppppppuVar30 = (ulong *******)&pppppppuStack_2c0;
            pppppppuVar17 = pppppppuStack_2d0;
            goto code_r0x0001004390f0;
          }
          uStack_2c8 = pppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
          unaff_x24 = unaff_x26;
        }
        else if (iVar26 == 1) {
          if ((int)unaff_x21 != 2) goto code_r0x000100439460;
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar21 == 0x16) goto code_r0x0001004393d4;
          ppppppuVar18 = *pppppppuVar17;
          unaff_x28[1] = pppppppuVar17[1];
          *unaff_x28 = ppppppuVar18;
          uVar25 = *(undefined8 *)((long)pppppppuVar17 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar17 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar25;
          uStack_90._0_1_ = bVar21;
          func_0x0001013d74b4(&pppppppuStack_a8,&uStack_90);
          if ((char)pppppppuStack_a8 == '\x01') goto code_r0x000100439184;
          unaff_x21 = (ulong *******)((ulong)pppppppuStack_a8 >> 8 & 0xff);
          unaff_x24 = unaff_x26;
        }
        else {
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar21 == 0x16) goto code_r0x0001004393d4;
          ppppppuVar18 = *pppppppuVar17;
          unaff_x28[1] = pppppppuVar17[1];
          *unaff_x28 = ppppppuVar18;
          uVar25 = *(undefined8 *)((long)pppppppuVar17 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)pppppppuVar17 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar25;
code_r0x000100438f18:
          uStack_90._0_1_ = bVar21;
          FUN_100e077ec(&uStack_90);
          pppppppuVar28 = unaff_x24;
          unaff_x24 = unaff_x26;
        }
        pppppppuVar30 = unaff_x25 + 8;
        unaff_x23 = (ulong ******)((long)unaff_x23 + 1);
        unaff_x26 = unaff_x24;
        unaff_x25 = pppppppuVar28;
      } while (pppppppuVar30 != unaff_x24);
      goto code_r0x000100439098;
    }
    goto code_r0x0001004390b8;
  case 0x16:
    goto code_r0x000100439600;
  case 0x17:
    goto code_r0x000100439610;
  case 0x18:
    goto code_r0x0001004395d8;
  case 0x19:
    goto code_r0x0001004395f0;
  case 0x1a:
    goto code_r0x00010043959c;
  case 0x1b:
    goto code_r0x000100439620;
  case 0x1c:
    goto code_r0x000100439638;
  case 0x1d:
    goto code_r0x0001004395f8;
  case 0x1e:
    pppppppuVar17 = (ulong *******)param_3[1];
    ppppppuStack_208 = pppppppuVar17[1];
    ppppppuStack_210 = *pppppppuVar17;
    pppppppuStack_1f8 = (ulong *******)pppppppuVar17[3];
    pppppppuStack_200 = (ulong *******)pppppppuVar17[2];
    func_0x000107c04740(pppppppuVar30,&ppppppuStack_210);
    goto code_r0x000107c06034;
  case 0x1f:
code_r0x0001004395cc:
    __Unwind_Resume(pppppppuVar30);
    param_2 = (char *)FUN_107c05ccc();
code_r0x0001004395d8:
code_r0x0001004395dc:
    pppppppuVar23 = (ulong *******)0x2;
    pppppppuVar30 = (ulong *******)param_2;
code_r0x0001004395e0:
    if (((long)((ulong)pppppppuVar23 | 0x8000000000000000) <= (long)unaff_x22) &&
       (unaff_x22 != (ulong *******)0x0)) {
code_r0x0001004395f0:
      _free();
    }
code_r0x0001004395f8:
    FUN_100e7b998(&pppppppuStack_2c0);
    goto code_r0x000100439600;
  case 0x20:
    goto code_r0x000100439640;
  case 0x21:
    uVar25 = __Unwind_Resume();
    _free();
    pppppppuVar30 = (ulong *******)__Unwind_Resume(uVar25);
code_r0x00010043959c:
    param_2 = (char *)pppppppuVar30;
    goto code_r0x0001004395dc;
  case 0x22:
    while (unaff_x24 = (ulong *******)((long)unaff_x24 + -1), unaff_x24 != (ulong *******)0x0) {
      unaff_x21 = unaff_x22 + 4;
      FUN_100e077ec(unaff_x22);
      unaff_x22 = unaff_x21;
    }
    unaff_x24 = (ulong *******)0x0;
    if (unaff_x23 != (ulong ******)0x0) {
      _free();
      goto code_r0x0001004395cc;
    }
    goto code_r0x000100439600;
  case 0x23:
    goto code_r0x000100439628;
  case 0x24:
    pppppppuVar30 = (ulong *******)FUN_107c05ccc();
    FUN_100e81e80(&pppppppuStack_2c0);
    goto code_r0x000100439600;
  case 0x25:
    goto code_r0x0001004395e0;
  case 0x26:
    FUN_100e077ec();
code_r0x000100439600:
    __Unwind_Resume(pppppppuVar30);
    unaff_x30 = FUN_10043960c;
    FUN_107c05ccc();
    puVar14 = &stack0xfffffffffffffcc0;
    param_3 = extraout_x1;
code_r0x000100439610:
    *(ulong ********)(puVar14 + 0x10) = unaff_x26;
    *(ulong ********)(puVar14 + 0x18) = unaff_x25;
    *(ulong ********)(puVar14 + 0x20) = unaff_x24;
    *(ulong *******)(puVar14 + 0x28) = unaff_x23;
    *(ulong ********)(puVar14 + 0x30) = unaff_x22;
    *(ulong ********)(puVar14 + 0x38) = unaff_x21;
    *(ulong ********)(puVar14 + 0x40) = unaff_x20;
    *(ulong ********)(puVar14 + 0x48) = pppppppuVar30;
    puVar15 = puVar14;
code_r0x000100439620:
    *(undefined1 **)(puVar15 + 0x50) = puVar34;
    *(code **)(puVar15 + 0x58) = unaff_x30;
code_r0x000100439628:
    pppppppuVar23 = (ulong *******)(ulong)*(byte *)param_3;
code_r0x000100439638:
    pppppppuVar28 = (ulong *******)&UNK_108c98b66;
code_r0x000100439640:
                    /* WARNING: Could not recover jumptable at 0x00010043964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100439650 +
              (ulong)*(ushort *)((long)pppppppuVar28 + (long)pppppppuVar23 * 2) * 4))();
    return;
  case 0x28:
    pppppppuVar28 = (ulong *******)((long)unaff_x26 + (long)pppppppuVar23);
    ppppppuStack_260 = (ulong ******)CONCAT71(ppppppuStack_260._1_7_,0x16);
    ppppppuStack_108 = (ulong ******)0x8000000000000000;
    pppppppuVar30 = (ulong *******)0x8000000000000001;
    lStack_f0 = -0x7fffffffffffffff;
    ppppppuVar18 = (ulong ******)0x0;
    if (pppppppuVar29 == (ulong *******)0x0) {
      ppppppuStack_290 = (ulong ******)0x8000000000000000;
      lVar36 = -0x7fffffffffffffff;
      pppppppuStack_268 = (ulong *******)0x8000000000000000;
      ppppppuStack_280 = (ulong ******)0x8000000000000001;
      lStack_278 = -0x7fffffffffffffff;
      ppppppuStack_1f0 = (ulong ******)0x8000000000000000;
      pppppppuStack_2d0 = in_x15;
    }
    else {
      puVar32 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar31 = (undefined8 *)((ulong)&ppppppuStack_260 | 1);
      pppppppuStack_2a0 = (ulong *******)((ulong)&uStack_b0 | 1);
      ppppppuStack_2d8 = (ulong ******)(((ulong)(pppppppuVar23 + -8) >> 6) + 1);
      lStack_278 = -0x7fffffffffffffff;
      ppppppuStack_270 = (ulong ******)0x8000000000000000;
      pppppppuStack_268 = (ulong *******)0x8000000000000000;
      ppppppuStack_280 = (ulong ******)0x8000000000000001;
      lVar36 = -0x7fffffffffffffff;
      ppppppuStack_290 = (ulong ******)0x8000000000000000;
      pppppppuVar30 = unaff_x26;
      do {
        pppppppuVar17 = pppppppuVar30 + 8;
        uStack_90._0_1_ = *(byte *)pppppppuVar30;
        unaff_x26 = pppppppuVar17;
        ppppppuVar19 = ppppppuVar18;
        if ((byte)uStack_90 == 0x16) break;
        ppppppuVar19 = pppppppuVar30[2];
        *(ulong *******)((long)puVar32 + 0x17) = pppppppuVar30[3];
        *(ulong *******)((long)puVar32 + 0xf) = ppppppuVar19;
        uVar25 = *(undefined8 *)((long)pppppppuVar30 + 1);
        puVar32[1] = *(undefined8 *)((long)pppppppuVar30 + 9);
        *puVar32 = uVar25;
        ppppppuStack_258 = pppppppuVar30[5];
        ppppppuStack_260 = pppppppuVar30[4];
        ppppppuStack_248 = pppppppuVar30[7];
        ppppppuStack_250 = pppppppuVar30[6];
        plVar1 = (long *)CONCAT71(uStack_87,uStack_88);
        plVar3 = (long *)CONCAT71(uStack_7f,uStack_80);
        if (0xc < (byte)uStack_90) {
          if ((byte)uStack_90 == 0xd) {
            if (plVar3 == (long *)0x11) {
              if ((*plVar1 == 0x6574707972636e65 && plVar1[1] == 0x6e65746e6f635f64) &&
                  (char)plVar1[2] == 't') {
                bVar21 = 3;
              }
              else {
code_r0x000100439a34:
                bVar21 = 4;
              }
            }
            else if (plVar3 == (long *)0x7) {
              if ((int)*plVar1 == 0x6d6d7573 && *(int *)((long)plVar1 + 3) == 0x7972616d) {
                bVar21 = 1;
              }
              else {
                if ((int)*plVar1 != 0x746e6f63 || *(int *)((long)plVar1 + 3) != 0x746e6574)
                goto code_r0x000100439a34;
                bVar21 = 2;
              }
            }
            else {
              if ((plVar3 != (long *)0x2) || ((short)*plVar1 != 0x6469)) goto code_r0x000100439a34;
              bVar21 = 0;
            }
            goto code_r0x000100439a3c;
          }
          if ((byte)uStack_90 != 0xe) {
            if ((byte)uStack_90 != 0xf) goto code_r0x000100439cb8;
            func_0x000100ac4ffc(&uStack_b0,plVar1,plVar3);
            goto code_r0x000100439a40;
          }
          func_0x000100ac4ffc(&uStack_b0,plVar3);
          if (plVar1 != (long *)0x0) goto code_r0x000100439998;
code_r0x000100439a48:
          if (((ulong)uStack_b0 & 1) == 0) goto code_r0x000100439a50;
code_r0x000100439ce0:
          pppppppuStack_e8 = pppppppuStack_2a8;
          ppppppuStack_e0 = ppppppuStack_2b0;
          pppppppuVar28 = pppppppuStack_a8;
code_r0x000100439d10:
          uStack_88 = SUB81(pppppppuVar28,0);
          uStack_87 = (undefined7)((ulong)pppppppuVar28 >> 8);
          ppppppuStack_2b0 = ppppppuStack_e0;
          pppppppuStack_2a8 = pppppppuStack_e8;
          ppppppuStack_108 = ppppppuStack_290;
          pppppppuStack_100 = pppppppuStack_288;
joined_r0x00010043a7d8:
          bVar16 = true;
          uStack_90._2_6_ = 0;
          uStack_90._1_1_ = 0;
          uStack_90._0_1_ = 0x11;
          pppppppuVar30 = pppppppuStack_2b8;
          lStack_f0 = lVar36;
          goto joined_r0x00010043a7d8;
        }
        if ((byte)uStack_90 == 1) {
          bVar21 = uStack_90._1_1_;
          if (3 < uStack_90._1_1_) {
            bVar21 = 4;
          }
code_r0x000100439a3c:
          uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar21);
          uStack_b0 = (ulong ******)((ulong)uStack_b0._1_7_ << 8);
code_r0x000100439a40:
          FUN_100e077ec(&uStack_90);
          goto code_r0x000100439a48;
        }
        if ((byte)uStack_90 == 4) {
          if ((long *)0x3 < plVar1) {
            plVar1 = (long *)0x4;
          }
          bVar21 = (byte)plVar1;
          goto code_r0x000100439a3c;
        }
        if ((byte)uStack_90 != 0xc) {
code_r0x000100439cb8:
          pppppppuStack_a8 =
               (ulong *******)thunk_FUN_108855b04(&uStack_90,&lStack_d8,&UNK_10b20e580);
          uStack_b0 = (ulong ******)CONCAT71(uStack_b0._1_7_,1);
          goto code_r0x000100439ce0;
        }
        if (pppppppuStack_78 == (ulong *******)0x11) {
          if ((*plVar3 == 0x6574707972636e65 && plVar3[1] == 0x6e65746e6f635f64) &&
              (char)plVar3[2] == 't') {
            uVar22 = 3;
          }
          else {
code_r0x000100439988:
            uVar22 = 4;
          }
        }
        else if (pppppppuStack_78 == (ulong *******)0x7) {
          if ((int)*plVar3 == 0x6d6d7573 && *(int *)((long)plVar3 + 3) == 0x7972616d) {
            uVar22 = 1;
          }
          else {
            if ((int)*plVar3 != 0x746e6f63 || *(int *)((long)plVar3 + 3) != 0x746e6574)
            goto code_r0x000100439988;
            uVar22 = 2;
          }
        }
        else {
          if ((pppppppuStack_78 != (ulong *******)0x2) || ((short)*plVar3 != 0x6469))
          goto code_r0x000100439988;
          uVar22 = 0;
        }
        uStack_b0 = (ulong ******)((ulong)CONCAT61(uStack_b0._2_6_,uVar22) << 8);
        if (plVar1 == (long *)0x0) goto code_r0x000100439a48;
code_r0x000100439998:
        _free(plVar3);
        if (((ulong)uStack_b0 & 1) != 0) goto code_r0x000100439ce0;
code_r0x000100439a50:
        pppppppuVar30 = pppppppuStack_a8;
        bVar21 = (byte)ppppppuStack_260;
        if (uStack_b0._1_1_ < 2) {
          if (uStack_b0._1_1_ == 0) {
            if (pppppppuStack_268 != (ulong *******)0x8000000000000000) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              ppppppuStack_108 = ppppppuStack_290;
              pppppppuStack_100 = pppppppuStack_288;
              uStack_b0 = (ulong ******)&UNK_108ca26b0;
              pppppppuStack_a8 = (ulong *******)0x2;
              uStack_90._0_1_ = (byte)&uStack_b0;
              uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
              uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              lStack_f0 = lVar36;
              uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_10043a7bc;
            }
            ppppppuStack_260 = (ulong ******)CONCAT71(ppppppuStack_260._1_7_,0x16);
            if (bVar21 == 0x16) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              pppppppuStack_268 = (ulong *******)0x8000000000000000;
              ppppppuStack_108 = ppppppuStack_290;
              pppppppuStack_100 = pppppppuStack_288;
              lStack_f0 = lVar36;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010043a950;
            }
            uVar25 = *puVar31;
            puVar32[1] = puVar31[1];
            *puVar32 = uVar25;
            uVar25 = *(undefined8 *)((long)puVar31 + 0xf);
            *(undefined8 *)((long)puVar32 + 0x17) = *(undefined8 *)((long)puVar31 + 0x17);
            *(undefined8 *)((long)puVar32 + 0xf) = uVar25;
            uStack_90._0_1_ = bVar21;
            pppppppuStack_268 = (ulong *******)0x8000000000000000;
            FUN_1004b62d4(&uStack_b0,&uStack_90);
            pppppppuStack_268 = (ulong *******)uStack_b0;
            if (uStack_b0 == (ulong ******)0x8000000000000000) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              pppppppuStack_268 = (ulong *******)0x8000000000000000;
              pppppppuVar28 = pppppppuStack_a8;
              goto code_r0x000100439d10;
            }
            pppppppuStack_2b8 = pppppppuStack_a8;
            pppppppuStack_2d0 = pppppppuStack_a0;
          }
          else {
            if (ppppppuStack_270 != (ulong ******)0x8000000000000000) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              ppppppuStack_108 = ppppppuStack_290;
              pppppppuStack_100 = pppppppuStack_288;
              uStack_b0 = (ulong ******)&UNK_108cae499;
              pppppppuStack_a8 = (ulong *******)0x7;
              uStack_90._0_1_ = (byte)&uStack_b0;
              uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
              uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              lStack_f0 = lVar36;
              uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
LAB_10043a7bc:
              uStack_88 = (undefined1)uVar25;
              uStack_87 = (undefined7)((ulong)uVar25 >> 8);
              lVar36 = lStack_f0;
              goto joined_r0x00010043a7d8;
            }
            ppppppuStack_260 = (ulong ******)CONCAT71(ppppppuStack_260._1_7_,0x16);
            if (bVar21 == 0x16) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              ppppppuStack_270 = (ulong ******)0x8000000000000000;
              ppppppuStack_108 = ppppppuStack_290;
              pppppppuStack_100 = pppppppuStack_288;
              lStack_f0 = lVar36;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010043a950;
            }
            uVar25 = *puVar31;
            puVar32[1] = puVar31[1];
            *puVar32 = uVar25;
            uVar25 = *(undefined8 *)((long)puVar31 + 0xf);
            *(undefined8 *)((long)puVar32 + 0x17) = *(undefined8 *)((long)puVar31 + 0x17);
            *(undefined8 *)((long)puVar32 + 0xf) = uVar25;
            uStack_90._0_1_ = bVar21;
            ppppppuStack_270 = (ulong ******)0x8000000000000000;
            func_0x0001012b8234(&uStack_b0,&uStack_90);
            ppppppuStack_270 = uStack_b0;
            if (uStack_b0 == (ulong ******)0x8000000000000000) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              ppppppuStack_270 = (ulong ******)0x8000000000000000;
              pppppppuVar28 = pppppppuStack_a8;
              goto code_r0x000100439d10;
            }
            pppppppuStack_288 = pppppppuStack_a8;
            unaff_x20 = pppppppuStack_a0;
            ppppppuStack_290 = ppppppuStack_270;
          }
        }
        else if (uStack_b0._1_1_ == 2) {
          if (lStack_278 != -0x7fffffffffffffff) {
            pppppppuStack_e8 = pppppppuStack_2a8;
            ppppppuStack_e0 = ppppppuStack_2b0;
            ppppppuStack_108 = ppppppuStack_290;
            pppppppuStack_100 = pppppppuStack_288;
            uStack_b0 = (ulong ******)&UNK_108ca1095;
            pppppppuStack_a8 = (ulong *******)0x7;
            uStack_90._0_1_ = (byte)&uStack_b0;
            uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            lStack_f0 = lVar36;
            uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            goto LAB_10043a7bc;
          }
          ppppppuStack_260 = (ulong ******)CONCAT71(ppppppuStack_260._1_7_,0x16);
          if (bVar21 == 0x16) {
            pppppppuStack_e8 = pppppppuStack_2a8;
            ppppppuStack_e0 = ppppppuStack_2b0;
            ppppppuStack_108 = ppppppuStack_290;
            pppppppuStack_100 = pppppppuStack_288;
            lStack_f0 = lVar36;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010043a950;
          }
          ppppppuVar19 = (ulong ******)*puVar31;
          pppppppuStack_2a0[1] = (ulong ******)puVar31[1];
          *pppppppuStack_2a0 = ppppppuVar19;
          uVar25 = *(undefined8 *)((long)puVar31 + 0xf);
          *(undefined8 *)((long)pppppppuStack_2a0 + 0x17) = *(undefined8 *)((long)puVar31 + 0x17);
          *(undefined8 *)((long)pppppppuStack_2a0 + 0xf) = uVar25;
          uStack_b0 = (ulong ******)CONCAT71(uStack_b0._1_7_,bVar21);
          if (bVar21 == 0x10) {
code_r0x0001004397a0:
            lStack_d8 = -0x8000000000000000;
            FUN_100e077ec(&uStack_b0);
            lStack_278 = -0x8000000000000000;
          }
          else {
            if (bVar21 == 0x11) {
              ppppppuVar19 = *pppppppuStack_a8;
              uStack_88 = SUB81(pppppppuStack_a8[1],0);
              uStack_87 = (undefined7)((ulong)pppppppuStack_a8[1] >> 8);
              uStack_90._0_1_ = (byte)ppppppuVar19;
              uStack_90._1_1_ = (byte)((ulong)ppppppuVar19 >> 8);
              uStack_90._2_6_ = (undefined6)((ulong)ppppppuVar19 >> 0x10);
              pppppppuStack_78 = (ulong *******)pppppppuStack_a8[3];
              uStack_80 = SUB81(pppppppuStack_a8[2],0);
              uStack_7f = (undefined7)((ulong)pppppppuStack_a8[2] >> 8);
              func_0x000101410e54(&lStack_d8,&uStack_90);
              _free(pppppppuVar30);
            }
            else {
              if (bVar21 == 0x12) goto code_r0x0001004397a0;
              func_0x000101410e54(&lStack_d8,&uStack_b0);
            }
            lStack_278 = lStack_d8;
            if (lStack_d8 == -0x7fffffffffffffff) {
              ppppppuStack_e0 = ppppppuStack_2b0;
              pppppppuStack_e8 = pppppppuStack_2a8;
              lStack_278 = -0x7fffffffffffffff;
              pppppppuVar28 = pppppppuStack_d0;
              goto code_r0x000100439d10;
            }
          }
          ppppppuStack_2b0 = ppppppuStack_c8;
          pppppppuStack_2a8 = pppppppuStack_d0;
          lVar36 = lStack_278;
        }
        else {
          if (uStack_b0._1_1_ != 3) {
            ppppppuStack_260 = (ulong ******)CONCAT71(ppppppuStack_260._1_7_,0x16);
            if (bVar21 == 0x16) {
              pppppppuStack_e8 = pppppppuStack_2a8;
              ppppppuStack_e0 = ppppppuStack_2b0;
              ppppppuStack_108 = ppppppuStack_290;
              pppppppuStack_100 = pppppppuStack_288;
              lStack_f0 = lVar36;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010043a950:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10043a954);
              (*pcVar6)();
            }
            uVar25 = *puVar31;
            puVar32[1] = puVar31[1];
            *puVar32 = uVar25;
            uVar25 = *(undefined8 *)((long)puVar31 + 0xf);
            *(undefined8 *)((long)puVar32 + 0x17) = *(undefined8 *)((long)puVar31 + 0x17);
            *(undefined8 *)((long)puVar32 + 0xf) = uVar25;
            uStack_90._0_1_ = bVar21;
            FUN_100e077ec(&uStack_90);
            goto code_r0x0001004397d0;
          }
          if (ppppppuStack_280 != (ulong ******)0x8000000000000001) {
            pppppppuStack_e8 = pppppppuStack_2a8;
            ppppppuStack_e0 = ppppppuStack_2b0;
            ppppppuStack_108 = ppppppuStack_290;
            pppppppuStack_100 = pppppppuStack_288;
            uStack_b0 = (ulong ******)&UNK_108cae3d3;
            pppppppuStack_a8 = (ulong *******)0x11;
            uStack_90._0_1_ = (byte)&uStack_b0;
            uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            lStack_f0 = lVar36;
            uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            uStack_90._0_1_ = 0x11;
            uStack_90._1_1_ = 0;
            uStack_90._2_6_ = 0;
            uStack_88 = (undefined1)uVar25;
            uStack_87 = (undefined7)((ulong)uVar25 >> 8);
            bVar16 = true;
            pppppppuVar30 = pppppppuStack_2b8;
            goto joined_r0x00010043a6a4;
          }
          ppppppuStack_260 = (ulong ******)CONCAT71(ppppppuStack_260._1_7_,0x16);
          if (bVar21 == 0x16) {
            pppppppuStack_e8 = pppppppuStack_2a8;
            ppppppuStack_e0 = ppppppuStack_2b0;
            ppppppuStack_108 = ppppppuStack_290;
            pppppppuStack_100 = pppppppuStack_288;
            lStack_f0 = lVar36;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010043a950;
          }
          uVar25 = *puVar31;
          puVar32[1] = puVar31[1];
          *puVar32 = uVar25;
          uVar25 = *(undefined8 *)((long)puVar31 + 0xf);
          *(undefined8 *)((long)puVar32 + 0x17) = *(undefined8 *)((long)puVar31 + 0x17);
          *(undefined8 *)((long)puVar32 + 0xf) = uVar25;
          uStack_90._0_1_ = bVar21;
          FUN_1004b60cc(&uStack_b0,&uStack_90);
          ppppppuStack_280 = uStack_b0;
          if (uStack_b0 == (ulong ******)0x8000000000000001) {
            pppppppuStack_e8 = pppppppuStack_2a8;
            ppppppuStack_e0 = ppppppuStack_2b0;
            pppppppuStack_100 = pppppppuStack_288;
            ppppppuStack_108 = ppppppuStack_290;
            uStack_90._0_1_ = 0x11;
            uStack_90._1_1_ = 0;
            uStack_90._2_6_ = 0;
            uStack_88 = SUB81(pppppppuStack_a8,0);
            uStack_87 = (undefined7)((ulong)pppppppuStack_a8 >> 8);
            bVar16 = true;
            pppppppuVar30 = pppppppuStack_2b8;
            goto LAB_10043a438;
          }
          pppppppuStack_2c0 = pppppppuStack_a8;
          uStack_2c8 = pppppppuStack_a0;
        }
code_r0x0001004397d0:
        ppppppuVar18 = (ulong ******)((long)ppppppuVar18 + 1);
        unaff_x26 = pppppppuVar28;
        ppppppuVar19 = ppppppuStack_2d8;
        pppppppuVar30 = pppppppuVar17;
      } while (pppppppuVar17 != pppppppuVar28);
      pppppppuStack_e8 = pppppppuStack_2a8;
      ppppppuStack_e0 = ppppppuStack_2b0;
      pppppppuStack_100 = pppppppuStack_288;
      pppppppuVar30 = pppppppuStack_2b8;
      ppppppuStack_1f0 = ppppppuStack_270;
      ppppppuVar18 = ppppppuVar19;
    }
    bVar16 = pppppppuStack_268 == (ulong *******)0x8000000000000000;
    pppppppuVar17 = pppppppuVar30;
    pppppppuStack_1f8 = pppppppuStack_2d0;
    if (bVar16) {
      pppppppuVar17 = (ulong *******)0x1;
      pppppppuStack_1f8 = (ulong *******)0x0;
    }
    ppppppuVar19 = (ulong ******)0x0;
    if (!bVar16) {
      ppppppuVar19 = (ulong ******)pppppppuStack_268;
    }
    ppppppuStack_108 = ppppppuStack_290;
    lStack_f0 = lVar36;
    if (ppppppuStack_1f0 == (ulong ******)0x8000000000000000) {
      uStack_b0 = (ulong ******)&UNK_108cae499;
      pppppppuStack_a8 = (ulong *******)0x7;
      uStack_90._0_1_ = (byte)&uStack_b0;
      uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      uVar25 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      uStack_90._0_1_ = 0x11;
      uStack_90._1_1_ = 0;
      uStack_90._2_6_ = 0;
      uStack_88 = (undefined1)uVar25;
      uStack_87 = (undefined7)((ulong)uVar25 >> 8);
      if (ppppppuVar19 != (ulong ******)0x0) {
        _free(pppppppuVar17);
      }
      ppppppuStack_270 = (ulong ******)0x8000000000000000;
joined_r0x00010043a7d8:
      if (ppppppuStack_280 != (ulong ******)0x8000000000000001) {
joined_r0x00010043a6a4:
        if (((ulong)ppppppuStack_280 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_2c0);
        }
      }
LAB_10043a438:
      pppppppuVar28 = pppppppuStack_e8;
      if ((lStack_278 != -0x7fffffffffffffff) && (lStack_278 != -0x8000000000000000)) {
        if (ppppppuStack_e0 != (ulong ******)0x0) {
          pppppppuVar17 = pppppppuStack_e8 + 2;
          ppppppuVar18 = ppppppuStack_e0;
          do {
            if (pppppppuVar17[-1] != (ulong ******)0x0) {
              _free(*pppppppuVar17);
            }
            pppppppuVar17 = pppppppuVar17 + 4;
            ppppppuVar18 = (ulong ******)((long)ppppppuVar18 + -1);
          } while (ppppppuVar18 != (ulong ******)0x0);
        }
        if (lStack_278 != 0) {
          _free(pppppppuVar28);
        }
      }
      if (ppppppuStack_270 != (ulong ******)0x8000000000000000) {
        if (unaff_x20 != (ulong *******)0x0) {
          pppppppuVar28 = pppppppuStack_288 + 1;
          do {
            if (pppppppuVar28[-1] != (ulong ******)0x0) {
              _free(*pppppppuVar28);
            }
            pppppppuVar28 = pppppppuVar28 + 3;
            unaff_x20 = (ulong *******)((long)unaff_x20 + -1);
          } while (unaff_x20 != (ulong *******)0x0);
        }
        if (ppppppuStack_270 != (ulong ******)0x0) {
          _free(pppppppuStack_288);
        }
      }
      bVar4 = false;
      if (((ulong)pppppppuStack_268 & 0x7fffffffffffffff) != 0) {
        bVar4 = bVar16;
      }
      if (bVar4) {
        _free(pppppppuVar30);
      }
      FUN_100d34830(&stack0xfffffffffffffdc0);
      if ((byte)ppppppuStack_260 != '\x16') {
        FUN_100e077ec(&ppppppuStack_260);
      }
    }
    else {
      lStack_1d8 = -0x8000000000000000;
      if (lStack_278 != -0x7fffffffffffffff) {
        ppppppuStack_b8 = ppppppuStack_e0;
        pppppppuStack_c0 = pppppppuStack_e8;
        lStack_1d8 = lStack_278;
      }
      ppppppuStack_1c0 = (ulong ******)0x8000000000000000;
      if (ppppppuStack_280 != (ulong ******)0x8000000000000001) {
        ppppppuStack_1c0 = ppppppuStack_280;
      }
      uStack_90._0_1_ = 3;
      uStack_90._1_1_ = 0;
      uStack_90._2_6_ = 0;
      uStack_88 = SUB81(ppppppuVar19,0);
      uStack_87 = (undefined7)((ulong)ppppppuVar19 >> 8);
      uStack_80 = SUB81(pppppppuVar17,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar17 >> 8);
      pppppppuStack_68 = pppppppuStack_288;
      ppppppuStack_210 = (ulong ******)0x3;
      pppppppuStack_1e8 = pppppppuStack_288;
      pppppppuStack_1b0 = uStack_2c8;
      ppppppuStack_1c8 = ppppppuStack_b8;
      pppppppuStack_1d0 = pppppppuStack_c0;
      pppppppuStack_1b8 = pppppppuStack_2c0;
      uStack_168 = in_stack_00000018;
      uStack_170 = in_stack_00000010;
      uStack_158 = in_stack_00000028;
      uStack_160 = in_stack_00000020;
      uStack_178 = in_stack_00000008;
      uStack_180 = in_stack_00000000;
      ppppppuStack_208 = ppppppuVar19;
      pppppppuStack_200 = pppppppuVar17;
      pppppppuStack_78 = pppppppuStack_1f8;
      ppppppuStack_70 = ppppppuStack_1f0;
      FUN_100d34830(&stack0xfffffffffffffdc0);
      if (pppppppuVar28 != unaff_x26) {
        uStack_90._0_1_ = (byte)ppppppuVar18;
        uStack_90._1_1_ = (byte)((ulong)ppppppuVar18 >> 8);
        uStack_90._2_6_ = (undefined6)((ulong)ppppppuVar18 >> 0x10);
        uVar25 = thunk_FUN_1087e422c(((ulong)((long)pppppppuVar28 - (long)unaff_x26) >> 6) +
                                     (long)ppppppuVar18,&uStack_90,&UNK_10b23a190);
        uStack_90._0_1_ = 0x11;
        uStack_90._1_1_ = 0;
        uStack_90._2_6_ = 0;
        uStack_88 = (undefined1)uVar25;
        uStack_87 = (undefined7)((ulong)uVar25 >> 8);
        FUN_100e02a24(&ppppppuStack_210);
      }
    }
    return;
  case 0x29:
    goto code_r0x000100438bdc;
  case 0x2a:
    goto code_r0x000100438c20;
  case 0x2c:
  case 0xb0:
  case 0xc6:
    goto code_r0x0001004393c0;
  case 0x2d:
  case 0xa4:
  case 0xb1:
  case 199:
    goto code_r0x0001004393d0;
  case 0x2e:
  case 0xb2:
  case 200:
    goto code_r0x000100439398;
  case 0x2f:
  case 0x61:
  case 0x9f:
  case 0xb3:
  case 0xc9:
    goto code_r0x0001004393b0;
  case 0x30:
  case 0x91:
  case 0xa3:
  case 0xb4:
  case 0xca:
    goto code_r0x00010043935c;
  case 0x31:
  case 0xa2:
  case 0xb5:
  case 0xcb:
    goto code_r0x0001004393e0;
  case 0x32:
  case 0xb6:
  case 0xcc:
    goto code_r0x0001004393f8;
  case 0x33:
  case 0xa7:
  case 0xb7:
  case 0xcd:
    goto code_r0x0001004393b8;
  case 0x34:
  case 0xb8:
  case 0xce:
    goto code_r0x000100439410;
  case 0x35:
  case 0xb9:
  case 0xcf:
    goto code_r0x00010043938c;
  case 0x36:
  case 0xba:
  case 0xd0:
code_r0x000100439400:
  case 0x5d:
    pppppppuVar23 = (ulong *******)&UNK_108ca2000;
code_r0x00010043940c:
    pppppppuVar23 = pppppppuVar23 + 0xd6;
code_r0x000100439410:
    pppppppuVar28 = (ulong *******)0x2;
    pppppppuVar24 = pppppppuVar23;
code_r0x000100439414:
    pppppppuVar23 = (ulong *******)&pppppppuStack_a8;
    pppppppuStack_a8 = pppppppuVar24;
    pppppppuStack_a0 = pppppppuVar28;
code_r0x00010043941c:
    pppppppuVar28 = (ulong *******)&DAT_100c7b3a0;
code_r0x000100439424:
    uStack_90._0_1_ = (byte)pppppppuVar23;
    uStack_90._1_1_ = (byte)((ulong)pppppppuVar23 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar23 >> 0x10);
    uStack_88 = SUB81(pppppppuVar28,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar28 >> 8);
    param_2 = s_duplicate_field_____108ac2973;
    param_3 = (ulong *******)&uStack_90;
code_r0x000100439434:
    ppppppuVar18 = (ulong ******)thunk_FUN_108856088(param_2,param_3);
    pppppppuVar30 = (ulong *******)&pppppppuStack_2c0;
    *pppppppuStack_2d0 = (ulong ******)0x800000000000006e;
    pppppppuStack_2d0[1] = ppppppuVar18;
    unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    param_2 = (char *)unaff_x20;
    goto joined_r0x000100439450;
  case 0x37:
  case 0x84:
  case 0xa6:
  case 0xbb:
  case 0xd1:
    goto code_r0x000100439334;
  case 0x38:
  case 0xbc:
  case 0xd2:
    goto code_r0x000100439364;
  case 0x39:
  case 0xbd:
  case 0xd3:
    goto code_r0x0001004393e8;
  case 0x3a:
  case 0x86:
  case 0xbe:
  case 0xd4:
    goto code_r0x00010043930c;
  case 0x3b:
  case 0x9b:
  case 0xbf:
  case 0xd5:
    goto code_r0x0001004393a0;
  case 0x3c:
  case 0x7b:
  case 0xa5:
  case 0xc0:
  case 0xd6:
    goto code_r0x000100439304;
  case 0x3e:
  case 0xc2:
  case 0xd8:
code_r0x000100439460:
    pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a0 = (ulong *******)0x6;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (byte)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
  case 0x6a:
    param_2 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    goto LAB_100439198;
  case 0x3f:
  case 0x6b:
  case 0xc3:
  case 0xd9:
    goto code_r0x000100438f64;
  case 0x40:
  case 0x6c:
  case 0xc4:
  case 0xda:
    goto code_r0x000100438fa8;
  case 0x42:
    goto code_r0x00010043914c;
  case 0x43:
    goto code_r0x00010043915c;
  case 0x44:
code_r0x000100439124:
    bVar21 = (byte)unaff_x21 & 1;
    pppppppuVar28 = (ulong *******)((long)pppppppuVar30 + -0x1a);
    pppppppuVar17 = (ulong *******)param_2;
  case 0x51:
    *pppppppuVar17 = (ulong ******)pppppppuVar28;
    pppppppuVar17[1] = (ulong ******)unaff_x22;
    pppppppuVar17[2] = (ulong ******)unaff_x20;
    pppppppuVar17[3] = (ulong ******)pppppppuVar29;
    *(byte *)(pppppppuVar17 + 4) = bVar21;
    param_2 = (char *)&ppppppuStack_270;
code_r0x00010043913c:
    param_3 = pppppppuVar17;
    param_4 = (undefined *)0x1c0;
    pppppppuVar33 = param_3;
code_r0x000100439144:
    _memcpy(param_2,param_3,param_4);
    pppppppuVar23 = (ulong *******)&pppppppuStack_2c0;
code_r0x00010043914c:
    FUN_100d34830(pppppppuVar23 + 4);
    if (unaff_x26 != unaff_x24) {
code_r0x00010043915c:
      pppppppuVar23 = (ulong *******)((ulong)((long)unaff_x26 - (long)unaff_x24) >> 6);
      uStack_90._0_1_ = (byte)unaff_x23;
      uStack_90._1_1_ = (byte)((ulong)unaff_x23 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)unaff_x23 >> 0x10);
      param_4 = &UNK_10b23a000;
code_r0x00010043916c:
      param_4 = param_4 + 400;
      param_2 = (char *)((long)pppppppuVar23 + (long)unaff_x23);
code_r0x000100439174:
      pppppppuVar17 = (ulong *******)thunk_FUN_1087e422c(param_2,&uStack_90,param_4);
      param_2 = (char *)pppppppuVar33;
      goto code_r0x0001004393c4;
    }
    goto code_r0x00010043931c;
  case 0x45:
    goto code_r0x00010043913c;
  case 0x46:
    goto code_r0x0001004390e8;
  case 0x47:
    goto code_r0x00010043916c;
  case 0x48:
code_r0x000100439184:
  case 0x4c:
    param_2 = (char *)pppppppuStack_a0;
LAB_100439198:
    pppppppuVar30 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar23 = (ulong *******)0x6e;
    pppppppuVar28 = pppppppuStack_2d0;
code_r0x00010043919c:
    *pppppppuVar28 = (ulong ******)((ulong)pppppppuVar23 | 0x8000000000000000);
    pppppppuVar28[1] = (ulong ******)param_2;
    if (-0x7fffffffffffffff < (long)unaff_x22) {
code_r0x0001004391b4:
      param_2 = (char *)unaff_x20;
joined_r0x000100439450:
      if (unaff_x22 != (ulong *******)0x0) {
code_r0x0001004391bc:
        _free(param_2);
      }
    }
    goto LAB_1004390fc;
  case 0x49:
    goto code_r0x000100439144;
  case 0x4a:
    goto code_r0x00010043919c;
  case 0x4b:
    goto code_r0x000100439118;
  case 0x4d:
    goto code_r0x0001004390c0;
  case 0x4e:
    goto code_r0x0001004390f0;
  case 0x4f:
    goto code_r0x000100439174;
  case 0x50:
code_r0x000100439098:
    unaff_x23 = ppppppuStack_2d8;
code_r0x00010043909c:
    pppppppuVar17 = pppppppuStack_2d0;
    if (unaff_x22 != (ulong *******)0x8000000000000001) {
      pppppppuVar30 = (ulong *******)0x800000000000006e;
      pppppppuVar29 = uStack_2c8;
      param_2 = (char *)pppppppuStack_2d0;
      goto code_r0x000100439124;
    }
code_r0x0001004390b8:
    pppppppuVar30 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar23 = (ulong *******)&UNK_108ca26b0;
code_r0x0001004390c0:
    pppppppuStack_a0 = (ulong *******)0x2;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (byte)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = s_missing_field_____108ac28f7;
    param_3 = (ulong *******)&uStack_90;
    pppppppuStack_a8 = pppppppuVar23;
code_r0x0001004390e8:
    unaff_x20 = (ulong *******)thunk_FUN_108856088(param_2,param_3);
code_r0x0001004390f0:
    *pppppppuVar17 = (ulong ******)0x800000000000006e;
    pppppppuVar17[1] = (ulong ******)unaff_x20;
LAB_1004390fc:
    FUN_100d34830(pppppppuVar30 + 4);
    if ((byte)pppppppuStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2c0);
code_r0x000100439118:
    }
    goto code_r0x00010043931c;
  case 0x52:
    goto code_r0x000100439090;
  case 0x55:
    goto code_r0x000100438dc8;
  case 0x56:
    goto code_r0x000100438e0c;
  case 0x58:
    goto code_r0x0001004393e4;
  case 0x59:
    goto code_r0x0001004393f4;
  case 0x5a:
    goto code_r0x0001004393bc;
  case 0x5b:
  case 0x96:
code_r0x0001004393d4:
  case 0x5f:
code_r0x0001004393e0:
    param_2 = &UNK_108ca1000;
code_r0x0001004393e4:
    param_2 = (char *)((long)param_2 + 0xa98);
code_r0x0001004393e8:
    param_4 = &UNK_10b24f848;
    param_3 = (ulong *******)0x2c;
code_r0x0001004393f4:
    FUN_107c05cac(param_2,param_3,param_4);
code_r0x0001004393f8:
code_r0x0001004394c8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1004394cc);
    (*pcVar6)();
  case 0x5c:
  case 0x9d:
    goto code_r0x000100439380;
  case 0x5e:
    goto code_r0x00010043941c;
  case 0x60:
    goto code_r0x000100439434;
  case 0x62:
    goto code_r0x000100439424;
  case 99:
    goto code_r0x000100439358;
  case 100:
  case 0xa1:
    goto code_r0x000100439388;
  case 0x65:
    goto code_r0x00010043940c;
  case 0x66:
    goto code_r0x000100439330;
  case 0x67:
    goto code_r0x0001004393c4;
  case 0x68:
    goto code_r0x000100439328;
  case 0x6e:
  case 0xa8:
    goto code_r0x0001004392dc;
  case 0x6f:
    goto code_r0x0001004392ec;
  case 0x70:
    goto code_r0x0001004392b4;
  case 0x73:
    goto code_r0x0001004392fc;
  case 0x74:
  case 0x93:
    goto code_r0x000100439314;
  case 0x76:
  case 0x8b:
  case 0x9e:
    goto code_r0x00010043932c;
  case 0x78:
    goto code_r0x00010043931c;
  case 0x79:
  case 0xeb:
    goto code_r0x000100439250;
  case 0x7c:
    goto code_r0x000100439228;
  case 0x7e:
    goto code_r0x000100439220;
  case 0x80:
    goto code_r0x00010043937c;
  case 0x81:
    goto code_r0x000100438f18;
  case 0x82:
    goto code_r0x000100438f5c;
  case 0x85:
    goto code_r0x000100439344;
  case 0x87:
    goto code_r0x000100439324;
  case 0x89:
    goto code_r0x000100439354;
  case 0x8a:
    goto code_r0x00010043936c;
  case 0x8c:
    goto code_r0x000100439384;
  case 0x8d:
    goto code_r0x000100439300;
  case 0x8e:
    goto code_r0x000100439374;
  case 0x9a:
    goto code_r0x000100439390;
  case 0x9c:
    goto code_r0x000100439368;
  case 0xa0:
    goto code_r0x0001004393c8;
  case 0xa9:
    goto code_r0x000100439370;
  case 0xac:
    goto code_r0x000100439414;
  case 0xae:
    goto code_r0x000100438fb0;
  case 0xde:
    goto code_r0x000100439248;
  case 0xdf:
  case 0xf9:
    goto code_r0x000100439260;
  case 0xea:
    goto code_r0x0001004391bc;
  case 0xec:
    goto code_r0x0001004391b4;
  case 0xee:
    goto code_r0x0001004392f0;
  case 0xef:
    goto code_r0x000100438f40;
  case 0xf0:
    goto code_r0x000100438f84;
  case 0xf5:
    goto code_r0x000100439258;
  }
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar21);
code_r0x0001004392f8:
  param_4 = &UNK_10b21c000;
code_r0x0001004392fc:
  param_4 = param_4 + 0x610;
code_r0x000100439300:
  pppppppuVar17 = &ppppppuStack_270;
code_r0x000100439304:
  pppppppuVar17 = (ulong *******)FUN_107c05dcc(pppppppuVar17,&pppppppuStack_a8,param_4);
code_r0x00010043930c:
  pppppppuVar23 = (ulong *******)0x800000000000006e;
code_r0x000100439314:
  *(ulong ********)param_2 = pppppppuVar23;
  *(ulong ********)((long)param_2 + 8) = pppppppuVar17;
code_r0x00010043931c:
code_r0x000100439324:
code_r0x000100439328:
code_r0x00010043932c:
code_r0x000100439330:
code_r0x000100439334:
  return;
}

