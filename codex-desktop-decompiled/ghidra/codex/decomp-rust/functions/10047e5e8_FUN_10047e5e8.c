
/* WARNING: Type propagation algorithm not settling */

void FUN_10047e5e8(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  byte *param_4,undefined *param_5)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  byte in_ZR;
  ulong *******pppppppuVar10;
  undefined8 uVar11;
  ulong *******pppppppuVar12;
  uint uVar13;
  byte bVar14;
  undefined1 uVar15;
  int iVar16;
  ulong *******pppppppuVar17;
  ulong *******pppppppuVar18;
  ulong ******ppppppuVar19;
  ulong ******ppppppuVar20;
  long lVar21;
  ulong *******pppppppuVar22;
  ulong uVar23;
  ulong *******pppppppuVar24;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******pppppppuVar25;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******pppppppuVar26;
  ulong *******unaff_x27;
  ulong *******pppppppuVar27;
  ulong *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined8 unaff_x30;
  ulong ******ppppppuVar29;
  ulong ******ppppppuVar30;
  ulong *******pppppppuStack_250;
  ulong *******pppppppuStack_248;
  ulong ******ppppppuStack_240;
  undefined8 uStack_238;
  ulong *******pppppppuStack_230;
  ulong *******pppppppuStack_228;
  ulong *******pppppppuStack_220;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  ulong *******pppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  ulong *******pppppppuStack_1f0;
  ulong *******pppppppuStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  ulong *******pppppppuStack_1d0;
  ulong *******pppppppuStack_1c8;
  undefined8 uStack_1c0;
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  ulong ******ppppppuStack_1a0;
  ulong ******ppppppuStack_198;
  ulong ******ppppppuStack_190;
  ulong ******ppppppuStack_188;
  ulong ******ppppppuStack_180;
  ulong ******ppppppuStack_178;
  ulong ******ppppppuStack_170;
  ulong ******ppppppuStack_168;
  ulong ******ppppppuStack_160;
  ulong ******ppppppuStack_158;
  ulong ******ppppppuStack_150;
  ulong ******ppppppuStack_148;
  ulong ******ppppppuStack_140;
  ulong ******ppppppuStack_138;
  ulong ******ppppppuStack_130;
  ulong ******ppppppuStack_128;
  ulong ******ppppppuStack_120;
  ulong ******ppppppuStack_118;
  ulong ******ppppppuStack_110;
  ulong ******ppppppuStack_108;
  ulong ******ppppppuStack_100;
  ulong ******ppppppuStack_f8;
  ulong ******ppppppuStack_f0;
  ulong ******ppppppuStack_e8;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  undefined8 uStack_c0;
  ulong *******pppppppuStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  ulong ******ppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong ******ppppppuStack_78;
  
  ppppppuVar30 = param_2._8_8_;
  ppppppuVar29 = param_2._0_8_;
  ppppppuVar20 = param_1._8_8_;
  ppppppuVar19 = param_1._0_8_;
  puVar28 = &stack0xfffffffffffffff0;
  pppppppuVar25 = (ulong *******)&pppppppuStack_d8;
  bVar14 = *param_4;
  pppppppuVar17 = (ulong *******)(ulong)bVar14;
  pppppppuVar22 = (ulong *******)&UNK_108c99952;
  pppppppuVar24 =
       (ulong *******)
       (&UNK_10047e62c + (ulong)*(ushort *)(&UNK_108c99952 + (long)pppppppuVar17 * 2) * 4);
  pppppppuVar8 = (ulong *******)&pppppppuStack_250;
  pppppppuVar9 = (ulong *******)&pppppppuStack_250;
  pppppppuVar6 = (ulong *******)&pppppppuStack_250;
  pppppppuVar7 = (ulong *******)&pppppppuStack_250;
  pppppppuVar12 = param_3;
  pppppppuVar10 = param_3;
  pppppppuVar18 = pppppppuVar17;
  pppppppuVar26 = unaff_x26;
  pppppppuVar27 = unaff_x27;
  switch(bVar14) {
  case 0:
    ppppppuStack_1a0 = (ulong ******)((ulong)CONCAT61(ppppppuStack_1a0._2_6_,param_4[1]) << 8);
    goto code_r0x00010047f184;
  case 1:
    ppppppuStack_198 = (ulong ******)(ulong)param_4[1];
    goto code_r0x00010047f138;
  case 2:
    ppppppuStack_198 = (ulong ******)(ulong)*(ushort *)(param_4 + 2);
    goto code_r0x00010047f138;
  case 3:
    ppppppuStack_198 = (ulong ******)(ulong)*(uint *)(param_4 + 4);
    goto code_r0x00010047f138;
  case 4:
  case 0xa2:
    ppppppuStack_198 = *(ulong *******)(param_4 + 8);
code_r0x00010047f138:
    uVar15 = 1;
    break;
  case 5:
    ppppppuStack_198 = (ulong ******)(long)(char)param_4[1];
    goto code_r0x00010047f178;
  case 6:
    ppppppuStack_198 = (ulong ******)(long)*(short *)(param_4 + 2);
    goto code_r0x00010047f178;
  case 7:
    ppppppuStack_198 = (ulong ******)(long)*(int *)(param_4 + 4);
    goto code_r0x00010047f178;
  case 8:
    ppppppuStack_198 = *(ulong *******)(param_4 + 8);
code_r0x00010047f178:
    uVar15 = 2;
    break;
  case 9:
  case 0xac:
    ppppppuStack_198 = (ulong ******)(double)*(float *)(param_4 + 4);
    goto code_r0x00010047f168;
  case 10:
    ppppppuStack_198 = *(ulong *******)(param_4 + 8);
code_r0x00010047f168:
    uVar15 = 3;
    break;
  case 0xb:
  case 0xa7:
    param_4 = (byte *)(ulong)*(uint *)(param_4 + 4);
    pppppppuVar8 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
  case 0xa0:
    unaff_x20 = *(ulong ********)((long)pppppppuVar8 + 0x40);
    pppppppuVar12 = *(ulong ********)((long)pppppppuVar8 + 0x48);
    pppppppuVar9 = pppppppuVar8;
code_r0x00010047f0b0:
    *(ulong ********)((long)pppppppuVar9 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar9 + 0x48) = pppppppuVar12;
    *(undefined1 **)((long)pppppppuVar9 + 0x50) = puVar28;
    *(undefined8 *)((long)pppppppuVar9 + 0x58) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar9 + 0x1c) = 0;
    uVar13 = (uint)param_4;
    if (uVar13 < 0x80) {
      *(byte *)((long)pppppppuVar9 + 0x1c) = (byte)param_4;
      uVar11 = 1;
    }
    else {
      bVar14 = (byte)param_4 & 0x3f | 0x80;
      if (uVar13 < 0x800) {
        *(byte *)((long)pppppppuVar9 + 0x1c) = (byte)(uVar13 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar9 + 0x1d) = bVar14;
        uVar11 = 2;
      }
      else {
        bVar3 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        if (uVar13 < 0x10000) {
          *(byte *)((long)pppppppuVar9 + 0x1c) = (byte)(uVar13 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar9 + 0x1d) = bVar3;
          *(byte *)((long)pppppppuVar9 + 0x1e) = bVar14;
          uVar11 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar9 + 0x1c) = (byte)(uVar13 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar9 + 0x1d) = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar9 + 0x1e) = bVar3;
          *(byte *)((long)pppppppuVar9 + 0x1f) = bVar14;
          uVar11 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar9 + 0x28) = (undefined1 *)((long)pppppppuVar9 + 0x1c);
    *(undefined8 *)((long)pppppppuVar9 + 0x30) = uVar11;
    *(undefined1 *)((long)pppppppuVar9 + 0x20) = 5;
    ppppppuVar19 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar9 + 0x20),
                                       (undefined1 *)((long)pppppppuVar9 + 0x3f),&UNK_10b2199f0);
    *param_3 = (ulong ******)0x11;
    param_3[1] = ppppppuVar19;
    return;
  case 0xc:
    uVar11 = *(undefined8 *)(param_4 + 0x10);
    ppppppuVar19 = (ulong ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b2199f0);
    *param_3 = (ulong ******)0x11;
    param_3[1] = ppppppuVar19;
    if (*(long *)(param_4 + 8) != 0) {
      _free(uVar11);
    }
    return;
  case 0xd:
    ppppppuStack_198 = *(ulong *******)(param_4 + 8);
    ppppppuStack_190 = *(ulong *******)(param_4 + 0x10);
    uVar15 = 5;
    break;
  case 0xe:
  case 0x9a:
    param_4 = param_4 + 8;
    pppppppuVar6 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
  case 0x9b:
    unaff_x20 = *(ulong ********)((long)pppppppuVar6 + 0x40);
    pppppppuVar12 = *(ulong ********)((long)pppppppuVar6 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar6 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar6 + 0x38);
    pppppppuVar7 = pppppppuVar6;
code_r0x00010047f090:
    *(ulong ********)((long)pppppppuVar7 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar7 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar7 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar7 + 0x48) = pppppppuVar12;
    *(undefined1 **)((long)pppppppuVar7 + 0x50) = puVar28;
    *(undefined8 *)((long)pppppppuVar7 + 0x58) = unaff_x30;
    uVar11 = *(undefined8 *)(param_4 + 8);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)((long)pppppppuVar7 + 0x18) = uVar11;
    *(undefined8 *)((long)pppppppuVar7 + 0x20) = uVar2;
    *(undefined1 *)((long)pppppppuVar7 + 0x10) = 6;
    ppppppuVar19 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar7 + 0x10),
                                       (undefined1 *)((long)pppppppuVar7 + 0x2f),&UNK_10b2199f0);
    *param_3 = (ulong ******)0x11;
    param_3[1] = ppppppuVar19;
    if (*(long *)param_4 != 0) {
      _free(uVar11);
    }
    return;
  case 0xf:
    ppppppuStack_198 = *(ulong *******)(param_4 + 8);
    ppppppuStack_190 = *(ulong *******)(param_4 + 0x10);
    uVar15 = 6;
    break;
  case 0x10:
  case 0xa1:
    uVar15 = 8;
    break;
  default:
    pppppppuVar12 = *(ulong ********)(param_4 + 8);
    ppppppuStack_198 = pppppppuVar12[1];
    ppppppuStack_1a0 = *pppppppuVar12;
    ppppppuStack_188 = pppppppuVar12[3];
    ppppppuStack_190 = pppppppuVar12[2];
    func_0x000107c047b0(param_3,&ppppppuStack_1a0);
  case 0xae:
code_r0x00010047e714:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar12);
    return;
  case 0x12:
    uVar15 = 7;
    break;
  case 0x13:
    pppppppuVar12 = *(ulong ********)(param_4 + 8);
    ppppppuStack_198 = pppppppuVar12[1];
    ppppppuStack_1a0 = *pppppppuVar12;
    ppppppuStack_188 = pppppppuVar12[3];
    ppppppuStack_190 = pppppppuVar12[2];
    func_0x000107c05404(param_3,&ppppppuStack_1a0);
    goto code_r0x00010047e714;
  case 0x14:
    unaff_x25 = *(ulong ********)(param_4 + 8);
    unaff_x20 = *(ulong ********)(param_4 + 0x10);
    unaff_x27 = unaff_x20 + *(long *)(param_4 + 0x18) * 4;
    pppppppuStack_1d0 = (ulong *******)0x0;
    pppppppuStack_1f0 = unaff_x20;
    pppppppuStack_1e8 = unaff_x20;
    pppppppuStack_1e0 = unaff_x25;
    pppppppuStack_1d8 = unaff_x27;
    if (*(long *)(param_4 + 0x18) == 0) goto code_r0x00010047ec88;
    pppppppuVar18 = unaff_x20 + 4;
    pppppppuVar22 = (ulong *******)(ulong)*(byte *)unaff_x20;
    pppppppuStack_1e8 = pppppppuVar18;
    if (*(byte *)unaff_x20 != 0x16) {
      uVar11 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (byte)uVar11;
      uStack_90._2_6_ = (undefined6)((ulong)uVar11 >> 8);
      uStack_88 = (undefined1)((ulong)uVar11 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuVar17 = (ulong *******)0x1;
      unaff_x21 = pppppppuVar18;
      goto code_r0x00010047ed34;
    }
    unaff_x24 = (ulong *******)0x0;
    unaff_x26 = (ulong *******)0x8000000000000000;
    unaff_x28 = unaff_x27;
    if (pppppppuVar18 != unaff_x27) goto code_r0x00010047ec9c;
    goto code_r0x00010047ecb0;
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
    uStack_1c0 = *(undefined8 *)(param_4 + 8);
    pppppppuStack_1d0 = *(ulong ********)(param_4 + 0x10);
    lVar21 = *(long *)(param_4 + 0x18);
    pppppppuVar25 = pppppppuStack_1d0 + lVar21 * 8;
    unaff_x26 = (ulong *******)&pppppppuStack_1f0;
    pppppppuStack_1f0 = (ulong *******)CONCAT71(pppppppuStack_1f0._1_7_,0x16);
    pppppppuStack_1b0 = (ulong *******)0x0;
    unaff_x22 = (ulong *******)0x0;
    pppppppuStack_d8 = (ulong *******)0x8000000000000000;
    pppppppuStack_1c8 = pppppppuStack_1d0;
    pppppppuStack_1b8 = pppppppuVar25;
    if (lVar21 == 0) {
      pppppppuStack_d8 = (ulong *******)0x8000000000000000;
      goto code_r0x00010047ec78;
    }
    unaff_x21 = (ulong *******)0x0;
    unaff_x27 = (ulong *******)((ulong)&uStack_90 | 1);
    unaff_x28 = (ulong *******)((ulong)unaff_x26 | 1);
    pppppppuVar24 = (ulong *******)((ulong)&uStack_b0 | 1);
    pppppppuStack_250 = (ulong *******)((lVar21 * 0x40 - 0x40U >> 6) + 1);
    unaff_x26 = pppppppuStack_1d0 + 8;
    pppppppuStack_210 = (ulong *******)CONCAT44(pppppppuStack_210._4_4_,3);
    pppppppuStack_208 = (ulong *******)0x8000000000000000;
    pppppppuStack_200 = (ulong *******)0x8000000000000001;
    pppppppuStack_1f8 = (ulong *******)0x8000000000000000;
    pppppppuVar17 = (ulong *******)0x8000000000000000;
  case 0xad:
    pppppppuStack_220 = pppppppuVar24;
    pppppppuStack_218 = pppppppuVar17;
    do {
      unaff_x22 = unaff_x26 + -8;
      bVar14 = *(byte *)unaff_x22;
      if (bVar14 == 0x16) goto code_r0x00010047ee80;
      ppppppuVar19 = unaff_x26[-6];
      *(ulong *******)((long)unaff_x27 + 0x17) = unaff_x26[-5];
      *(ulong *******)((long)unaff_x27 + 0xf) = ppppppuVar19;
      ppppppuVar19 = *(ulong *******)((long)unaff_x26 + -0x3f);
      unaff_x27[1] = *(ulong *******)((long)unaff_x26 + -0x37);
      *unaff_x27 = ppppppuVar19;
      pppppppuStack_1e8 = (ulong *******)unaff_x26[-3];
      pppppppuStack_1f0 = (ulong *******)unaff_x26[-4];
      pppppppuStack_1d8 = (ulong *******)unaff_x26[-1];
      pppppppuStack_1e0 = (ulong *******)unaff_x26[-2];
      unaff_x24 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      unaff_x25 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
      pppppppuVar27 = unaff_x27;
      uStack_90._0_1_ = bVar14;
      if (bVar14 < 0xd) {
        if (bVar14 == 1) {
          uStack_b0._1_1_ = uStack_90._1_1_;
          if (3 < uStack_90._1_1_) {
            uStack_b0._1_1_ = 4;
          }
code_r0x00010047e9e8:
          uStack_b0._0_1_ = 0;
          pppppppuVar27 = unaff_x27;
          goto code_r0x00010047e9ec;
        }
        if (bVar14 == 4) {
          if ((ulong *******)0x3 < unaff_x24) {
            unaff_x24 = (ulong *******)0x4;
          }
          uStack_b0._1_1_ = (byte)unaff_x24;
          goto code_r0x00010047e9e8;
        }
        if (bVar14 == 0xc) {
          if ((long)ppppppuStack_78 < 5) {
            if (ppppppuStack_78 == (ulong ******)0x2) {
              pppppppuVar17 = (ulong *******)(ulong)*(ushort *)unaff_x25;
code_r0x00010047e94c:
              if ((int)pppppppuVar17 == 0x6469) {
code_r0x00010047e958:
                uStack_b0._1_1_ = 0;
                uStack_b0._0_1_ = 0;
                pppppppuVar27 = unaff_x27;
                goto joined_r0x00010047ec40;
              }
code_r0x00010047e98c:
              bVar14 = 4;
code_r0x00010047e990:
              uStack_b0._1_1_ = bVar14;
              bVar14 = (byte)uStack_90;
            }
            else {
              if ((ppppppuStack_78 != (ulong ******)0x4) || (*(int *)unaff_x25 != 0x656c6f72))
              goto code_r0x00010047e98c;
              uStack_b0._1_1_ = 1;
            }
            uStack_b0._0_1_ = 0;
            pppppppuVar27 = unaff_x27;
            uStack_90._0_1_ = bVar14;
          }
          else if (ppppppuStack_78 == (ulong ******)0x5) {
            if (*(int *)unaff_x25 != 0x73616870 || *(byte *)((long)unaff_x25 + 4) != 0x65)
            goto code_r0x00010047e98c;
            bVar14 = 3;
code_r0x00010047ec38:
            uStack_b0._0_1_ = 0;
            uStack_b0._1_1_ = bVar14;
code_r0x00010047ec40:
            pppppppuVar27 = unaff_x27;
          }
          else {
            if ((ppppppuStack_78 != (ulong ******)0x7) ||
               (*(int *)unaff_x25 != 0x746e6f63 || *(int *)((long)unaff_x25 + 3) != 0x746e6574))
            goto code_r0x00010047e98c;
            uStack_b0._1_1_ = 2;
            uStack_b0._0_1_ = 0;
          }
joined_r0x00010047ec40:
          if (unaff_x24 != (ulong *******)0x0) {
            _free(unaff_x25);
          }
        }
        else {
code_r0x00010047ec50:
          pppppppuVar12 = (ulong *******)&uStack_90;
          param_4 = (byte *)&uStack_c0;
code_r0x00010047ec58:
          param_5 = &UNK_10b211740;
code_r0x00010047ec60:
          uVar11 = thunk_FUN_108855b04(pppppppuVar12,param_4,param_5);
          uStack_a8 = (undefined1)uVar11;
          uStack_a7 = (undefined7)((ulong)uVar11 >> 8);
          uStack_b0._0_1_ = 1;
          pppppppuVar27 = unaff_x27;
code_r0x00010047ec70:
        }
      }
      else {
        if (bVar14 == 0xd) {
          if ((long)unaff_x25 < 5) {
            if (unaff_x25 == (ulong *******)0x2) {
              if (*(ushort *)unaff_x24 != 0x6469) goto code_r0x00010047e9e0;
              uStack_b0._1_1_ = 0;
            }
            else if ((unaff_x25 == (ulong *******)0x4) && (*(int *)unaff_x24 == 0x656c6f72)) {
              uStack_b0._1_1_ = 1;
            }
            else {
code_r0x00010047e9e0:
              uStack_b0._1_1_ = 4;
            }
          }
          else {
            in_ZR = unaff_x25 == (ulong *******)0x5;
code_r0x00010047e914:
            if ((bool)in_ZR) {
              if (*(int *)unaff_x24 != 0x73616870 || *(byte *)((long)unaff_x24 + 4) != 0x65)
              goto code_r0x00010047e9e0;
code_r0x00010047ec48:
              uStack_b0._1_1_ = 3;
            }
            else {
              if ((unaff_x25 != (ulong *******)0x7) ||
                 (*(int *)unaff_x24 != 0x746e6f63 || *(int *)((long)unaff_x24 + 3) != 0x746e6574))
              goto code_r0x00010047e9e0;
              uStack_b0._1_1_ = 2;
            }
          }
          goto code_r0x00010047e9e8;
        }
        if (bVar14 == 0xe) {
          func_0x000100ac4eac(&uStack_b0,unaff_x25);
          goto joined_r0x00010047ec40;
        }
        if (bVar14 != 0xf) goto code_r0x00010047ec50;
        func_0x000100ac4eac(&uStack_b0,unaff_x24,unaff_x25);
code_r0x00010047e9ec:
        FUN_100e077ec(&uStack_90);
      }
      unaff_x24 = pppppppuStack_1f8;
      pppppppuVar24 = pppppppuStack_200;
      unaff_x25 = pppppppuStack_208;
      unaff_x27 = pppppppuStack_228;
      if (((byte)uStack_b0 & 1) != 0) goto code_r0x00010047ee08;
      pppppppuVar17 = (ulong *******)(ulong)uStack_b0._1_1_;
      if (uStack_b0._1_1_ < 2) {
code_r0x00010047ea78:
        unaff_x24 = pppppppuStack_1f8;
        pppppppuVar24 = pppppppuStack_200;
        unaff_x25 = pppppppuStack_208;
        unaff_x27 = pppppppuStack_228;
        if ((int)pppppppuVar17 == 0) {
code_r0x00010047ea7c:
          pppppppuVar24 = pppppppuStack_200;
code_r0x00010047ea80:
          in_ZR = pppppppuVar24 == (ulong *******)0x8000000000000001;
code_r0x00010047ea88:
          unaff_x24 = pppppppuStack_1f8;
          unaff_x25 = pppppppuStack_208;
          unaff_x27 = pppppppuStack_228;
          if (!(bool)in_ZR) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            uStack_b0._0_1_ = 0xb0;
            uStack_b0._1_1_ = 0x26;
            uStack_b0._2_6_ = 0x108ca;
            uStack_a8 = 2;
            uStack_a7 = 0;
            uStack_90._0_1_ = (byte)&uStack_b0;
            uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_1c8 = unaff_x26;
            ppppppuVar19 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
LAB_10047f6ac:
            *param_3 = (ulong ******)0x11;
            param_3[1] = ppppppuVar19;
            param_3 = (ulong *******)0x1;
            unaff_x21 = (ulong *******)0x1;
            pppppppuVar25 = pppppppuVar24;
            goto LAB_10047ee44;
          }
code_r0x00010047ea8c:
          pppppppuVar17 = (ulong *******)((ulong)pppppppuStack_1f0 & 0xff);
          pppppppuVar22 = (ulong *******)0x16;
code_r0x00010047ea94:
          pppppppuStack_1f0 = (ulong *******)CONCAT71(pppppppuStack_1f0._1_7_,(char)pppppppuVar22);
          if ((int)pppppppuVar17 == 0x16) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            pppppppuStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010047f780;
          }
          ppppppuVar19 = *unaff_x28;
          pppppppuVar27[1] = unaff_x28[1];
          *pppppppuVar27 = ppppppuVar19;
          uVar11 = *(undefined8 *)((long)unaff_x28 + 0xf);
          *(undefined8 *)((long)pppppppuVar27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
          *(undefined8 *)((long)pppppppuVar27 + 0xf) = uVar11;
          uStack_90._0_1_ = (byte)pppppppuVar17;
          pppppppuVar17 = (ulong *******)0x8000000000000001;
code_r0x00010047eab8:
          pppppppuVar12 = (ulong *******)&uStack_b0;
          unaff_x27 = pppppppuVar27;
          pppppppuStack_200 = pppppppuVar17;
code_r0x00010047eac0:
          FUN_1004b60cc(pppppppuVar12,&uStack_90);
          pppppppuStack_200 =
               (ulong *******)CONCAT62(uStack_b0._2_6_,CONCAT11(uStack_b0._1_1_,(byte)uStack_b0));
          if (pppppppuStack_200 == (ulong *******)0x8000000000000001) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            *param_3 = (ulong ******)0x11;
            param_3[1] = (ulong ******)CONCAT71(uStack_a7,uStack_a8);
            param_3 = (ulong *******)0x1;
            pppppppuVar25 = (ulong *******)0x8000000000000001;
            unaff_x21 = (ulong *******)0x1;
            unaff_x27 = pppppppuStack_228;
            pppppppuStack_1c8 = unaff_x26;
            goto code_r0x00010047ee3c;
          }
          uStack_238 = (ulong ******)CONCAT71(uStack_a7,uStack_a8);
          ppppppuStack_240 = (ulong ******)CONCAT71(uStack_9f,uStack_a0);
        }
        else {
          if (pppppppuStack_1f8 != (ulong *******)0x8000000000000000) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            uStack_b0._0_1_ = 0x74;
            uStack_b0._1_1_ = 0xe3;
            uStack_b0._2_6_ = 0x108cd;
            uStack_a8 = 4;
            uStack_a7 = 0;
            uStack_90._0_1_ = (byte)&uStack_b0;
            uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_1c8 = unaff_x26;
            ppppppuVar19 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            goto LAB_10047f6ac;
          }
code_r0x00010047eb9c:
          pppppppuVar17 = (ulong *******)((ulong)pppppppuStack_1f0 & 0xff);
          pppppppuVar22 = (ulong *******)0x16;
code_r0x00010047eba4:
          bVar14 = (byte)pppppppuVar17;
          pppppppuStack_1f0 = (ulong *******)CONCAT71(pppppppuStack_1f0._1_7_,(char)pppppppuVar22);
          in_ZR = (int)pppppppuVar17 == 0x16;
code_r0x00010047ebac:
          if ((bool)in_ZR) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            pppppppuStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010047f780;
          }
          ppppppuVar19 = *unaff_x28;
          pppppppuVar27[1] = unaff_x28[1];
          *pppppppuVar27 = ppppppuVar19;
          uVar11 = *(undefined8 *)((long)unaff_x28 + 0xf);
          *(undefined8 *)((long)pppppppuVar27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
          *(undefined8 *)((long)pppppppuVar27 + 0xf) = uVar11;
          pppppppuStack_1f8 = (ulong *******)0x8000000000000000;
          uStack_90._0_1_ = bVar14;
code_r0x00010047ebcc:
          pppppppuVar12 = (ulong *******)&uStack_b0;
          param_4 = (byte *)&uStack_90;
code_r0x00010047ebd4:
          FUN_1004b62d4(pppppppuVar12,param_4);
code_r0x00010047ebd8:
          pppppppuVar17 =
               (ulong *******)CONCAT62(uStack_b0._2_6_,CONCAT11(uStack_b0._1_1_,(byte)uStack_b0));
code_r0x00010047ebdc:
          pppppppuStack_1f8 = pppppppuVar17;
code_r0x00010047ebe0:
          if (pppppppuVar17 == (ulong *******)0x8000000000000000) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            *param_3 = (ulong ******)0x11;
            param_3[1] = (ulong ******)CONCAT71(uStack_a7,uStack_a8);
            param_3 = (ulong *******)0x1;
            unaff_x24 = (ulong *******)0x0;
            unaff_x21 = (ulong *******)0x1;
            pppppppuVar25 = pppppppuStack_200;
            unaff_x25 = pppppppuStack_208;
            unaff_x27 = pppppppuStack_228;
            pppppppuStack_1c8 = unaff_x26;
            goto LAB_10047ee44;
          }
          pppppppuVar22 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
          pppppppuVar17 = (ulong *******)CONCAT71(uStack_9f,uStack_a0);
code_r0x00010047ebf0:
          unaff_x27 = pppppppuVar27;
          pppppppuStack_248 = pppppppuVar17;
          pppppppuStack_230 = pppppppuVar22;
code_r0x00010047ebf8:
        }
      }
      else {
        bVar14 = (byte)pppppppuStack_1f0;
        if (uStack_b0._1_1_ == 2) {
          if (pppppppuStack_208 != (ulong *******)0x8000000000000000) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            uStack_b0._0_1_ = 0x95;
            uStack_b0._1_1_ = 0x10;
            uStack_b0._2_6_ = 0x108ca;
            uStack_a8 = 7;
            uStack_a7 = 0;
            uStack_90._0_1_ = (byte)&uStack_b0;
            uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_1c8 = unaff_x26;
            ppppppuVar19 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            *param_3 = (ulong ******)0x11;
            param_3[1] = ppppppuVar19;
            unaff_x21 = (ulong *******)0x1;
            iVar16 = 1;
            pppppppuVar12 = (ulong *******)0x1;
            pppppppuVar26 = (ulong *******)&pppppppuStack_1f0;
            unaff_x22 = unaff_x27;
            pppppppuVar25 = pppppppuVar24;
            goto joined_r0x00010047f524;
          }
          pppppppuStack_1f0 = (ulong *******)CONCAT71(pppppppuStack_1f0._1_7_,0x16);
          if (bVar14 == 0x16) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            pppppppuStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010047f780;
          }
          ppppppuVar19 = *unaff_x28;
          pppppppuVar27[1] = unaff_x28[1];
          *pppppppuVar27 = ppppppuVar19;
          uVar11 = *(undefined8 *)((long)unaff_x28 + 0xf);
          *(undefined8 *)((long)pppppppuVar27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
          *(undefined8 *)((long)pppppppuVar27 + 0xf) = uVar11;
          uStack_90._0_1_ = bVar14;
          pppppppuStack_208 = (ulong *******)0x8000000000000000;
          func_0x00010128c568(&uStack_b0,&uStack_90);
          pppppppuVar22 =
               (ulong *******)CONCAT62(uStack_b0._2_6_,CONCAT11(uStack_b0._1_1_,(byte)uStack_b0));
          if (pppppppuVar22 == (ulong *******)0x8000000000000000) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            *param_3 = (ulong ******)0x11;
            param_3[1] = (ulong ******)CONCAT71(uStack_a7,uStack_a8);
            iVar16 = 1;
            pppppppuVar12 = (ulong *******)0x1;
            pppppppuVar26 = (ulong *******)&pppppppuStack_1f0;
            pppppppuVar25 = pppppppuStack_200;
            unaff_x24 = pppppppuStack_1f8;
            pppppppuStack_1c8 = unaff_x26;
            goto LAB_10047f534;
          }
code_r0x00010047eb44:
          pppppppuStack_228 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
          unaff_x20 = (ulong *******)CONCAT71(uStack_9f,uStack_a0);
          unaff_x27 = pppppppuVar27;
code_r0x00010047eb4c:
          pppppppuStack_218 = pppppppuVar22;
          pppppppuStack_208 = pppppppuVar22;
        }
        else if (uStack_b0._1_1_ == 3) {
          if ((uint)pppppppuStack_210 != 3) {
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            uStack_b0._0_1_ = 0x77;
            uStack_b0._1_1_ = 0xa4;
            uStack_b0._2_6_ = 0x108ca;
            uStack_a8 = 5;
            uStack_a7 = 0;
            uStack_90._0_1_ = (byte)&uStack_b0;
            uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppuStack_1c8 = unaff_x26;
            ppppppuVar19 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
            goto LAB_10047f6ac;
          }
          pppppppuVar17 = (ulong *******)((ulong)pppppppuStack_1f0 & 0xff);
          pppppppuStack_1f0 = (ulong *******)CONCAT71(pppppppuStack_1f0._1_7_,0x16);
          in_ZR = bVar14 == 0x16;
code_r0x00010047ea34:
          if ((bool)in_ZR) goto code_r0x00010047f480;
          ppppppuVar20 = unaff_x28[1];
          ppppppuVar19 = *unaff_x28;
code_r0x00010047ea3c:
          pppppppuStack_220[1] = ppppppuVar20;
          *pppppppuStack_220 = ppppppuVar19;
          pppppppuVar22 = pppppppuStack_220;
code_r0x00010047ea44:
          ppppppuVar20 = *(ulong *******)((long)unaff_x28 + 0x17);
          ppppppuVar19 = *(ulong *******)((long)unaff_x28 + 0xf);
code_r0x00010047ea48:
          *(ulong *******)((long)pppppppuVar22 + 0x17) = ppppppuVar20;
          *(ulong *******)((long)pppppppuVar22 + 0xf) = ppppppuVar19;
          uStack_b0._0_1_ = (byte)pppppppuVar17;
code_r0x00010047ea50:
          iVar16 = (int)pppppppuVar17;
          if (iVar16 == 0x10) {
code_r0x00010047e764:
            uStack_c0._0_2_ = 0x200;
            FUN_100e077ec(&uStack_b0);
code_r0x00010047e774:
            if ((byte)uStack_c0 == 1) goto code_r0x00010047f290;
          }
          else {
            if (iVar16 != 0x11) {
              if (iVar16 == 0x12) goto code_r0x00010047e764;
              func_0x000101439078(&uStack_c0,&uStack_b0);
code_r0x00010047ea74:
              goto code_r0x00010047e774;
            }
            unaff_x24 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
code_r0x00010047ec00:
            ppppppuVar20 = unaff_x24[1];
            ppppppuVar19 = *unaff_x24;
code_r0x00010047ec04:
            uStack_88 = SUB81(ppppppuVar20,0);
            uStack_87 = (undefined7)((ulong)ppppppuVar20 >> 8);
            uStack_90._0_1_ = (byte)ppppppuVar19;
            uStack_90._1_1_ = (byte)((ulong)ppppppuVar19 >> 8);
            uStack_90._2_6_ = (undefined6)((ulong)ppppppuVar19 >> 0x10);
            ppppppuStack_78 = unaff_x24[3];
            uStack_80 = SUB81(unaff_x24[2],0);
            uStack_7f = (undefined7)((ulong)unaff_x24[2] >> 8);
code_r0x00010047ec10:
            pppppppuVar10 = (ulong *******)&uStack_c0;
            param_4 = (byte *)&uStack_90;
code_r0x00010047ec18:
            pppppppuVar12 = unaff_x24;
            func_0x000101439078(pppppppuVar10,param_4);
code_r0x00010047ec20:
            _free(pppppppuVar12);
            pppppppuVar17 = (ulong *******)(ulong)(byte)uStack_c0;
code_r0x00010047ec28:
            if ((int)pppppppuVar17 == 1) goto code_r0x00010047ec30;
          }
          pppppppuStack_210 = (ulong *******)CONCAT44(pppppppuStack_210._4_4_,(uint)uStack_c0._1_1_)
          ;
          unaff_x27 = pppppppuVar27;
        }
        else {
          pppppppuStack_1f0 = (ulong *******)CONCAT71(pppppppuStack_1f0._1_7_,0x16);
          if (bVar14 == 0x16) {
code_r0x00010047f480:
            pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
            pppppppuStack_d0 = pppppppuStack_228;
            pppppppuStack_d8 = pppppppuStack_218;
            pppppppuStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010047f780:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10047f784);
            (*pcVar5)();
          }
          ppppppuVar19 = *unaff_x28;
          pppppppuVar27[1] = unaff_x28[1];
          *pppppppuVar27 = ppppppuVar19;
code_r0x00010047eb74:
          uVar11 = *(undefined8 *)((long)unaff_x28 + 0xf);
          *(undefined8 *)((long)pppppppuVar27 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
          *(undefined8 *)((long)pppppppuVar27 + 0xf) = uVar11;
code_r0x00010047eb7c:
          uStack_90._0_1_ = bVar14;
          pppppppuVar12 = (ulong *******)&uStack_90;
          unaff_x27 = pppppppuVar27;
code_r0x00010047eb84:
          FUN_100e077ec(pppppppuVar12);
        }
      }
      unaff_x26 = unaff_x26 + 8;
      unaff_x21 = (ulong *******)((long)unaff_x21 + 1);
    } while (unaff_x22 + 8 != pppppppuVar25);
code_r0x00010047ee78:
    unaff_x21 = pppppppuStack_250;
    unaff_x26 = pppppppuVar25;
code_r0x00010047ee80:
    pppppppuStack_1c8 = unaff_x26;
code_r0x00010047ee84:
    pppppppuStack_1b0 = unaff_x21;
code_r0x00010047ee88:
    unaff_x27 = pppppppuStack_228;
code_r0x00010047ee8c:
    pppppppuStack_d0 = unaff_x27;
code_r0x00010047ee90:
    pppppppuStack_d8 = pppppppuStack_218;
    pppppppuVar22 = (ulong *******)0x8000000000000001;
code_r0x00010047ee9c:
    pppppppuVar17 = (ulong *******)0x8000000000000000;
code_r0x00010047eea0:
    in_ZR = pppppppuStack_200 == pppppppuVar22;
    pppppppuVar25 = pppppppuStack_200;
    unaff_x24 = pppppppuStack_1f8;
code_r0x00010047eea8:
    unaff_x22 = pppppppuVar17;
    if (!(bool)in_ZR) {
      unaff_x22 = pppppppuVar25;
    }
code_r0x00010047eeac:
    unaff_x21 = (ulong *******)(ulong)in_ZR;
    in_ZR = unaff_x24 == pppppppuVar17;
code_r0x00010047eeb4:
    unaff_x25 = pppppppuStack_208;
    if ((bool)in_ZR) {
      unaff_x26 = (ulong *******)&pppppppuStack_1f0;
code_r0x00010047eec0:
      pppppppuVar17 = (ulong *******)&UNK_108cde000;
code_r0x00010047eec4:
      pppppppuVar17 = (ulong *******)((long)pppppppuVar17 + 0x374);
      pppppppuVar22 = (ulong *******)0x4;
code_r0x00010047eecc:
      uStack_b0._0_1_ = (byte)pppppppuVar17;
      uStack_b0._1_1_ = (byte)((ulong)pppppppuVar17 >> 8);
      uStack_b0._2_6_ = (undefined6)((ulong)pppppppuVar17 >> 0x10);
      uStack_a8 = SUB81(pppppppuVar22,0);
      uStack_a7 = (undefined7)((ulong)pppppppuVar22 >> 8);
      pppppppuVar17 = (ulong *******)&uStack_b0;
code_r0x00010047eed4:
      uStack_90._0_1_ = (byte)pppppppuVar17;
      uStack_90._1_1_ = (byte)((ulong)pppppppuVar17 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar17 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
FUN_10047eee0:
      pppppppuVar12 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010047eee4:
      pppppppuVar12 = (ulong *******)((long)pppppppuVar12 + 0x8f7);
      param_4 = (byte *)&uStack_90;
code_r0x00010047eeec:
      pppppppuVar12 = (ulong *******)thunk_FUN_108856088(pppppppuVar12,param_4);
code_r0x00010047eef0:
      pppppppuVar17 = (ulong *******)0x11;
code_r0x00010047eef4:
      *param_3 = (ulong ******)pppppppuVar17;
      param_3[1] = (ulong ******)pppppppuVar12;
      unaff_x24 = (ulong *******)0x0;
code_r0x00010047eefc:
      pppppppuVar12 = (ulong *******)0x1;
      pppppppuVar26 = unaff_x26;
joined_r0x00010047ef04:
      if (((ulong)unaff_x22 & 0x7fffffffffffffff) == 0) {
        pppppppuVar17 = (ulong *******)0x8000000000000000;
code_r0x00010047ef0c:
        iVar16 = (int)unaff_x21;
        if (unaff_x25 == pppppppuVar17) goto LAB_10047f534;
        goto LAB_10047ef14;
      }
      iVar16 = (int)unaff_x21;
      _free(uStack_238);
      if (unaff_x25 != (ulong *******)0x8000000000000000) goto LAB_10047ef14;
      goto LAB_10047f534;
    }
    in_ZR = pppppppuStack_208 == pppppppuVar17;
    unaff_x26 = (ulong *******)&pppppppuStack_1f0;
code_r0x00010047ef74:
    if ((bool)in_ZR) {
      uStack_b0._0_1_ = 0x95;
      uStack_b0._1_1_ = 0x10;
      uStack_b0._2_6_ = 0x108ca;
      uStack_a8 = 7;
      uStack_a7 = 0;
      uStack_90._0_1_ = (byte)&uStack_b0;
      uStack_90._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      ppppppuVar19 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      *param_3 = (ulong ******)0x11;
      param_3[1] = ppppppuVar19;
      if (unaff_x24 != (ulong *******)0x0) {
code_r0x00010047efb4:
        _free(pppppppuStack_230);
      }
LAB_10047efbc:
      pppppppuVar12 = (ulong *******)0x0;
      unaff_x25 = (ulong *******)0x8000000000000000;
      pppppppuVar26 = unaff_x26;
      goto joined_r0x00010047ef04;
    }
code_r0x00010047efe4:
    uVar13 = 2;
    if ((uint)pppppppuStack_210 != 3) {
      uVar13 = (uint)pppppppuStack_210;
    }
    pppppppuVar22 = (ulong *******)(ulong)uVar13;
    *param_3 = (ulong ******)0x2;
    param_3[1] = (ulong ******)unaff_x24;
    param_3[2] = (ulong ******)pppppppuStack_230;
    param_3[3] = (ulong ******)pppppppuStack_248;
    param_3[4] = (ulong ******)unaff_x25;
    param_3[5] = (ulong ******)unaff_x27;
    param_3[6] = (ulong ******)unaff_x20;
    param_3[7] = (ulong ******)unaff_x22;
code_r0x00010047f00c:
    param_3[8] = uStack_238;
    param_3[9] = ppppppuStack_240;
code_r0x00010047f014:
    *(byte *)(param_3 + 10) = (byte)pppppppuVar22;
    ppppppuStack_118 = param_3[0x11];
    ppppppuStack_120 = param_3[0x10];
    ppppppuStack_108 = param_3[0x13];
    ppppppuStack_110 = param_3[0x12];
    ppppppuStack_f8 = param_3[0x15];
    ppppppuStack_100 = param_3[0x14];
    ppppppuStack_e8 = param_3[0x17];
    ppppppuStack_f0 = param_3[0x16];
    ppppppuStack_158 = param_3[9];
    ppppppuStack_160 = param_3[8];
    ppppppuStack_148 = param_3[0xb];
    ppppppuStack_150 = param_3[10];
    ppppppuStack_138 = param_3[0xd];
    ppppppuStack_140 = param_3[0xc];
    ppppppuStack_128 = param_3[0xf];
    ppppppuStack_130 = param_3[0xe];
    ppppppuVar20 = param_3[1];
    ppppppuVar19 = *param_3;
    ppppppuVar30 = param_3[3];
    ppppppuVar29 = param_3[2];
code_r0x00010047f03c:
    ppppppuStack_178 = param_3[5];
    ppppppuStack_180 = param_3[4];
    ppppppuStack_168 = param_3[7];
    ppppppuStack_170 = param_3[6];
    ppppppuStack_1a0 = ppppppuVar19;
    ppppppuStack_198 = ppppppuVar20;
    ppppppuStack_190 = ppppppuVar29;
    ppppppuStack_188 = ppppppuVar30;
code_r0x00010047f048:
    pppppppuVar12 = (ulong *******)FUN_100fbc67c(&pppppppuStack_1f0);
    goto code_r0x00010047f050;
  case 0x16:
  case 0xd1:
    goto code_r0x00010047edc0;
  case 0x17:
    goto code_r0x00010047edd0;
  case 0x18:
  case 0xd4:
    goto code_r0x00010047ed98;
  case 0x19:
    goto code_r0x00010047edb0;
  case 0x1a:
    goto code_r0x00010047ed5c;
  case 0x1b:
  case 0xde:
    goto code_r0x00010047ede0;
  case 0x1c:
  case 0xdf:
    goto code_r0x00010047edf8;
  case 0x1d:
    goto code_r0x00010047edb8;
  case 0x1e:
  case 0xf4:
    goto code_r0x00010047ee10;
  case 0x1f:
  case 0xbe:
    goto code_r0x00010047ed8c;
  case 0x20:
  case 0xe3:
    goto code_r0x00010047ee00;
  case 0x21:
code_r0x00010047ed34:
    uStack_90._0_1_ = (byte)pppppppuVar22;
    pppppppuVar12 = (ulong *******)&uStack_b0;
    pppppppuStack_1d0 = pppppppuVar17;
  case 0x72:
    FUN_1004b60cc(pppppppuVar12,&uStack_90);
code_r0x00010047ed48:
    unaff_x26 = (ulong *******)CONCAT62(uStack_b0._2_6_,CONCAT11(uStack_b0._1_1_,(byte)uStack_b0));
    pppppppuVar22 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
code_r0x00010047ed4c:
    in_ZR = unaff_x26 == (ulong *******)0x8000000000000001;
code_r0x00010047ed54:
    if (!(bool)in_ZR) {
code_r0x00010047ee58:
      pppppppuStack_1f8 = pppppppuVar22;
code_r0x00010047ee5c:
      pppppppuVar17 = (ulong *******)CONCAT71(uStack_9f,uStack_a0);
code_r0x00010047ee60:
      unaff_x24 = (ulong *******)0x1;
      pppppppuStack_208 = pppppppuVar17;
code_r0x00010047ee68:
      pppppppuVar17 = unaff_x21;
      unaff_x21 = pppppppuVar17;
code_r0x00010047ee6c:
      in_ZR = unaff_x21 == unaff_x27;
      pppppppuVar18 = pppppppuVar17;
code_r0x00010047ee70:
      if ((bool)in_ZR) {
code_r0x00010047ee74:
        unaff_x28 = unaff_x27;
        goto code_r0x00010047ecb0;
      }
code_r0x00010047ec9c:
      unaff_x28 = pppppppuVar18 + 4;
      pppppppuVar22 = (ulong *******)(ulong)*(byte *)pppppppuVar18;
      pppppppuStack_1e8 = unaff_x28;
      if (*(byte *)pppppppuVar18 == 0x16) goto code_r0x00010047ecb0;
      uVar11 = *(undefined8 *)((long)pppppppuVar18 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)pppppppuVar18 + 9);
      uStack_90._1_1_ = (byte)uVar11;
      uStack_90._2_6_ = (undefined6)((ulong)uVar11 >> 8);
      uStack_88 = (undefined1)((ulong)uVar11 >> 0x38);
      pppppppuStack_1e8 = unaff_x28;
code_r0x00010047ed70:
      ppppppuStack_78 = pppppppuVar18[3];
      uStack_80 = SUB81(pppppppuVar18[2],0);
      uStack_7f = (undefined7)((ulong)pppppppuVar18[2] >> 8);
      unaff_x21 = pppppppuVar18;
code_r0x00010047ed7c:
      pppppppuStack_1d0 = (ulong *******)((long)unaff_x24 + 1);
code_r0x00010047ed84:
      uStack_90._0_1_ = (byte)pppppppuVar22;
      pppppppuVar12 = (ulong *******)&uStack_b0;
code_r0x00010047ed8c:
      param_4 = (byte *)&uStack_90;
code_r0x00010047ed90:
      FUN_1004b62d4(pppppppuVar12,param_4);
code_r0x00010047ed94:
      pppppppuVar22 =
           (ulong *******)CONCAT62(uStack_b0._2_6_,CONCAT11(uStack_b0._1_1_,(byte)uStack_b0));
      unaff_x22 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
code_r0x00010047ed98:
      pppppppuVar17 = (ulong *******)0x8000000000000000;
code_r0x00010047ed9c:
      pppppppuStack_200 = pppppppuVar22;
code_r0x00010047eda0:
      in_ZR = pppppppuVar22 == pppppppuVar17;
code_r0x00010047eda4:
      if ((bool)in_ZR) goto code_r0x00010047eccc;
      in_ZR = unaff_x28 == unaff_x27;
code_r0x00010047edac:
      unaff_x28 = unaff_x27;
code_r0x00010047edb0:
      if ((bool)in_ZR) {
code_r0x00010047edcc:
        param_4 = &UNK_10b22b000;
code_r0x00010047edd0:
        param_4 = param_4 + 0x928;
code_r0x00010047edd4:
        param_5 = &UNK_10b20a590;
code_r0x00010047eddc:
        pppppppuVar12 = (ulong *******)0x2;
code_r0x00010047ede0:
        pppppppuVar12 = (ulong *******)thunk_FUN_1087e422c(pppppppuVar12,param_4,param_5);
code_r0x00010047ede4:
        pppppppuVar17 = (ulong *******)0x11;
code_r0x00010047ede8:
        *param_3 = (ulong ******)pppppppuVar17;
        param_3[1] = (ulong ******)pppppppuVar12;
code_r0x00010047edec:
        param_3 = pppppppuStack_1f8;
        pppppppuVar17 = pppppppuStack_200;
code_r0x00010047edf0:
      }
      else {
code_r0x00010047edb4:
        pppppppuVar24 = (ulong *******)CONCAT71(uStack_9f,uStack_a0);
code_r0x00010047edb8:
        unaff_x28 = unaff_x21 + 8;
        pppppppuStack_1e8 = unaff_x28;
code_r0x00010047edc0:
        pppppppuVar17 = (ulong *******)(ulong)*(byte *)(unaff_x21 + 4);
code_r0x00010047edc4:
        if ((int)pppppppuVar17 == 0x16) goto code_r0x00010047edcc;
        uVar11 = *(undefined8 *)((long)unaff_x21 + 0x21);
        uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x29);
        uStack_90._1_1_ = (byte)uVar11;
        uStack_90._2_6_ = (undefined6)((ulong)uVar11 >> 8);
        uStack_88 = (undefined1)((ulong)uVar11 >> 0x38);
        ppppppuStack_78 = unaff_x21[7];
        uStack_80 = SUB81(unaff_x21[6],0);
        uStack_7f = (undefined7)((ulong)unaff_x21[6] >> 8);
        pppppppuStack_1d0 = (ulong *******)((ulong)unaff_x24 | 2);
        uStack_90._0_1_ = (byte)pppppppuVar17;
        pppppppuStack_210 = pppppppuVar24;
        func_0x00010128c568(&uStack_b0,&uStack_90);
        pppppppuVar22 = pppppppuStack_1f8;
        pppppppuStack_d8 =
             (ulong *******)CONCAT62(uStack_b0._2_6_,CONCAT11(uStack_b0._1_1_,(byte)uStack_b0));
        pppppppuVar12 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
        if (pppppppuStack_d8 == (ulong *******)0x8000000000000000) goto code_r0x00010047ede4;
        ppppppuVar19 = (ulong ******)CONCAT71(uStack_9f,uStack_a0);
        pppppppuStack_218 = pppppppuVar12;
        pppppppuStack_d0 = pppppppuVar12;
        ppppppuStack_c8 = ppppppuVar19;
        if (unaff_x28 == unaff_x27) {
code_r0x00010047f218:
          bVar14 = 2;
code_r0x00010047f220:
          param_3[5] = (ulong ******)pppppppuStack_d0;
          param_3[4] = (ulong ******)pppppppuStack_d8;
          *param_3 = (ulong ******)0x2;
          param_3[1] = (ulong ******)pppppppuStack_200;
          param_3[2] = (ulong ******)unaff_x22;
          param_3[3] = (ulong ******)pppppppuStack_210;
          param_3[6] = ppppppuStack_c8;
          param_3[7] = (ulong ******)unaff_x26;
          param_3[8] = (ulong ******)pppppppuVar22;
          param_3[9] = (ulong ******)pppppppuStack_208;
          *(byte *)(param_3 + 10) = bVar14;
          ppppppuStack_198 = param_3[1];
          ppppppuStack_1a0 = *param_3;
          ppppppuStack_188 = param_3[3];
          ppppppuStack_190 = param_3[2];
          ppppppuStack_178 = param_3[5];
          ppppppuStack_180 = param_3[4];
          ppppppuStack_168 = param_3[7];
          ppppppuStack_170 = param_3[6];
          ppppppuStack_158 = param_3[9];
          ppppppuStack_160 = param_3[8];
          ppppppuStack_148 = param_3[0xb];
          ppppppuStack_150 = param_3[10];
          ppppppuStack_138 = param_3[0xd];
          ppppppuStack_140 = param_3[0xc];
          ppppppuStack_128 = param_3[0xf];
          ppppppuStack_130 = param_3[0xe];
          ppppppuStack_118 = param_3[0x11];
          ppppppuStack_120 = param_3[0x10];
          ppppppuStack_108 = param_3[0x13];
          ppppppuStack_110 = param_3[0x12];
          ppppppuStack_f8 = param_3[0x15];
          ppppppuStack_100 = param_3[0x14];
          ppppppuStack_e8 = param_3[0x17];
          ppppppuStack_f0 = param_3[0x16];
          pppppppuVar12 = (ulong *******)FUN_100fbc738(&pppppppuStack_1f0);
code_r0x00010047f050:
          if (pppppppuVar12 == (ulong *******)0x0) {
            return;
          }
          *param_3 = (ulong ******)0x11;
          param_3[1] = (ulong ******)pppppppuVar12;
          param_3 = &ppppppuStack_1a0;
code_r0x00010047f060:
          FUN_100e02a24(param_3);
          return;
        }
        unaff_x28 = unaff_x21 + 0xc;
        bVar14 = *(byte *)(unaff_x21 + 8);
        pppppppuStack_1e8 = unaff_x28;
        if (bVar14 == 0x16) goto code_r0x00010047f218;
        uVar11 = *(undefined8 *)((long)unaff_x21 + 0x41);
        uStack_a7 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x49);
        uStack_b0._1_1_ = (byte)uVar11;
        uStack_b0._2_6_ = (undefined6)((ulong)uVar11 >> 8);
        uStack_a8 = (undefined1)((ulong)uVar11 >> 0x38);
        ppppppuStack_98 = unaff_x21[0xb];
        uStack_a0 = SUB81(unaff_x21[10],0);
        uStack_9f = (undefined7)((ulong)unaff_x21[10] >> 8);
        pppppppuStack_1d0 = (ulong *******)((long)unaff_x24 + 3);
        pppppppuStack_220 = pppppppuStack_d8;
        uStack_b0._0_1_ = bVar14;
        if (bVar14 == 0x10) {
code_r0x00010047f390:
          uStack_c0._0_2_ = 0x200;
          FUN_100e077ec(&uStack_b0);
        }
        else if (bVar14 == 0x11) {
          puVar4 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          uVar11 = *puVar4;
          uStack_88 = (undefined1)puVar4[1];
          uStack_87 = (undefined7)((ulong)puVar4[1] >> 8);
          uStack_90._0_1_ = (byte)uVar11;
          uStack_90._1_1_ = (byte)((ulong)uVar11 >> 8);
          uStack_90._2_6_ = (undefined6)((ulong)uVar11 >> 0x10);
          ppppppuStack_78 = (ulong ******)puVar4[3];
          uStack_80 = (undefined1)puVar4[2];
          uStack_7f = (undefined7)((ulong)puVar4[2] >> 8);
          func_0x000101439078(&uStack_c0,&uStack_90);
          _free(puVar4);
          pppppppuVar22 = pppppppuStack_1f8;
        }
        else {
          if (bVar14 == 0x12) goto code_r0x00010047f390;
          func_0x000101439078(&uStack_c0,&uStack_b0);
        }
        if (((ushort)uStack_c0 & 1) == 0) {
          bVar14 = uStack_c0._1_1_;
          goto code_r0x00010047f220;
        }
        *param_3 = (ulong ******)0x11;
        param_3[1] = (ulong ******)pppppppuStack_b8;
        pppppppuVar17 = pppppppuStack_218;
        for (; ppppppuVar19 != (ulong ******)0x0;
            ppppppuVar19 = (ulong ******)((long)ppppppuVar19 + -1)) {
          ppppppuVar20 = *pppppppuVar17;
          uVar23 = (ulong)ppppppuVar20 ^ 0x8000000000000000;
          if (-1 < (long)ppppppuVar20) {
            uVar23 = 1;
          }
          if ((uVar23 == 0) || (uVar23 != 1)) {
            if (pppppppuVar17[1] != (ulong ******)0x0) {
              lVar21 = 0x10;
              goto code_r0x00010047f40c;
            }
          }
          else if (ppppppuVar20 != (ulong ******)0x0) {
            lVar21 = 8;
code_r0x00010047f40c:
            _free(*(undefined8 *)((long)pppppppuVar17 + lVar21));
          }
          pppppppuVar17 = pppppppuVar17 + 4;
        }
        param_3 = pppppppuVar22;
        pppppppuVar17 = pppppppuStack_200;
        if (pppppppuStack_220 != (ulong *******)0x0) {
          _free(pppppppuStack_218);
          pppppppuVar17 = pppppppuStack_200;
        }
      }
      pppppppuVar12 = param_3;
      if (pppppppuVar17 != (ulong *******)0x0) {
code_r0x00010047edf4:
code_r0x00010047edf8:
        _free(unaff_x22);
        pppppppuVar12 = param_3;
code_r0x00010047ee00:
code_r0x00010047ee04:
      }
      goto code_r0x00010047ecd8;
    }
    pppppppuVar17 = (ulong *******)0x11;
code_r0x00010047ed5c:
    *param_3 = (ulong ******)pppppppuVar17;
    param_3[1] = (ulong ******)pppppppuVar22;
    param_3 = unaff_x21;
code_r0x00010047ed64:
    goto code_r0x00010047ece8;
  case 0x22:
    goto code_r0x00010047ed64;
  case 0x23:
  case 0xca:
  case 0xeb:
    goto code_r0x00010047ede8;
  case 0x24:
    goto code_r0x00010047ed0c;
  case 0x25:
    goto code_r0x00010047eda0;
  case 0x26:
    goto code_r0x00010047ed04;
  case 0x28:
  case 0x45:
  case 0xb0:
  case 0xe2:
    goto code_r0x00010047ee40;
  case 0x29:
    goto code_r0x00010047ea7c;
  case 0x2a:
    goto code_r0x00010047eac0;
  case 0x2c:
    goto code_r0x00010047ec00;
  case 0x2d:
  case 0x5a:
    goto code_r0x00010047ec10;
  case 0x2e:
    goto code_r0x00010047ebd8;
  case 0x2f:
    goto code_r0x00010047ebf0;
  case 0x30:
    goto code_r0x00010047eb9c;
  case 0x31:
    goto code_r0x00010047ec20;
  case 0x32:
  case 0x58:
    goto code_r0x00010047ec38;
  case 0x33:
    goto code_r0x00010047ebf8;
  case 0x34:
    goto code_r0x00010047ec50;
  case 0x35:
    goto code_r0x00010047ebcc;
  case 0x36:
    goto code_r0x00010047ec40;
  case 0x37:
    goto code_r0x00010047eb74;
  case 0x38:
    goto code_r0x00010047eba4;
  case 0x39:
  case 0x5b:
    goto code_r0x00010047ec28;
  case 0x3a:
    goto code_r0x00010047eb4c;
  case 0x3b:
    goto code_r0x00010047ebe0;
  case 0x3c:
    goto code_r0x00010047eb44;
  case 0x3e:
    goto code_r0x00010047ec9c;
  case 0x3f:
    goto code_r0x00010047e914;
  case 0x40:
    goto code_r0x00010047e958;
  case 0x42:
  case 0xb1:
    goto code_r0x00010047ee50;
  case 0x43:
  case 0xb5:
  case 0xff:
    goto code_r0x00010047ee60;
  case 0x44:
  case 0xe1:
  case 0xf5:
    goto code_r0x00010047ee28;
  case 0x46:
    goto code_r0x00010047edec;
  case 0x47:
  case 0x88:
  case 0xf8:
    goto code_r0x00010047ee70;
  case 0x48:
  case 0xfa:
    goto code_r0x00010047ee88;
  case 0x49:
  case 0x8f:
  case 0xe6:
  case 0xf3:
    goto code_r0x00010047ee48;
  case 0x4a:
  case 0x8d:
    goto code_r0x00010047eea0;
  case 0x4b:
    goto code_r0x00010047ee1c;
  case 0x4c:
  case 0xb8:
    goto code_r0x00010047ee90;
  case 0x4d:
  case 0x73:
    goto code_r0x00010047edc4;
  case 0x4e:
  case 0x76:
    goto code_r0x00010047edf4;
  case 0x4f:
  case 0x90:
  case 0xb6:
  case 0xfc:
    goto code_r0x00010047ee78;
  case 0x50:
  case 0x75:
    goto code_r0x00010047ed9c;
  case 0x51:
  case 0xb3:
  case 0xe9:
  case 0xf9:
    goto code_r0x00010047ee30;
  case 0x52:
  case 0x71:
    goto code_r0x00010047ed94;
  case 0x54:
    goto code_r0x00010047eef0;
  case 0x55:
    goto code_r0x00010047ea50;
  case 0x56:
    goto code_r0x00010047ea94;
  case 0x59:
    goto code_r0x00010047ec48;
  case 0x5c:
    goto code_r0x00010047ebd4;
  case 0x5d:
    goto code_r0x00010047ec58;
  case 0x5e:
    goto code_r0x00010047ec70;
  case 0x5f:
code_r0x00010047ec30:
code_r0x00010047f290:
    pppppppuStack_1b0 = (ulong *******)((long)unaff_x21 + 1);
    pppppppuStack_d0 = pppppppuStack_228;
    pppppppuStack_d8 = pppppppuStack_218;
    pppppppuVar17 = pppppppuStack_b8;
    unaff_x27 = pppppppuStack_228;
    pppppppuStack_1c8 = unaff_x26;
    goto code_r0x00010047ee28;
  case 0x60:
code_r0x00010047ec88:
    pppppppuVar18 = unaff_x20;
    unaff_x24 = (ulong *******)0x0;
    unaff_x26 = (ulong *******)0x8000000000000000;
    unaff_x20 = pppppppuVar18;
    unaff_x28 = unaff_x27;
    if (pppppppuVar18 != unaff_x27) goto code_r0x00010047ec9c;
code_r0x00010047ecb0:
    unaff_x22 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22b928,&UNK_10b20a590);
code_r0x00010047eccc:
    *param_3 = (ulong ******)0x11;
    param_3[1] = (ulong ******)unaff_x22;
code_r0x00010047ecd4:
    pppppppuVar12 = pppppppuStack_1f8;
code_r0x00010047ecd8:
    param_3 = unaff_x28;
    if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
      _free(pppppppuVar12);
    }
code_r0x00010047ece8:
    pppppppuVar17 = (ulong *******)((ulong)((long)unaff_x27 - (long)param_3) >> 5);
code_r0x00010047ecf0:
    unaff_x22 = (ulong *******)((long)pppppppuVar17 + 1);
    while (unaff_x22 = (ulong *******)((long)unaff_x22 + -1), unaff_x22 != (ulong *******)0x0) {
      FUN_100e077ec(param_3);
      unaff_x21 = param_3 + 4;
code_r0x00010047ed04:
      param_3 = unaff_x21;
    }
code_r0x00010047ed0c:
    if (unaff_x25 == (ulong *******)0x0) {
      return;
    }
    _free(unaff_x20);
code_r0x00010047ed18:
    return;
  case 0x61:
    goto code_r0x00010047ec04;
  case 0x62:
code_r0x00010047ec78:
    pppppppuVar25 = (ulong *******)0x8000000000000001;
    unaff_x21 = (ulong *******)0x1;
    unaff_x25 = (ulong *******)0x8000000000000000;
    goto code_r0x00010047eec0;
  case 99:
    goto code_r0x00010047ebac;
  case 100:
    goto code_r0x00010047ebdc;
  case 0x65:
    goto code_r0x00010047ec60;
  case 0x66:
    goto code_r0x00010047eb84;
  case 0x67:
    goto code_r0x00010047ec18;
  case 0x68:
    goto code_r0x00010047eb7c;
  case 0x6a:
    goto code_r0x00010047ecd4;
  case 0x6b:
    goto code_r0x00010047e94c;
  case 0x6c:
    goto code_r0x00010047e990;
  case 0x6e:
  case 0xe0:
    goto code_r0x00010047eda4;
  case 0x6f:
  case 0xbb:
    goto code_r0x00010047edb4;
  case 0x70:
  case 0xe7:
    goto code_r0x00010047ed7c;
  case 0x74:
  case 0xb4:
  case 0xfe:
    goto code_r0x00010047eddc;
  case 0x77:
    goto code_r0x00010047ed70;
  case 0x78:
  case 0xbc:
    goto code_r0x00010047ede4;
  case 0x79:
    goto code_r0x00010047ed18;
  case 0x7a:
    goto code_r0x00010047ed48;
  case 0x7b:
    goto code_r0x00010047edcc;
  case 0x7c:
    goto code_r0x00010047ecf0;
  case 0x7d:
  case 0xc0:
    goto code_r0x00010047ed84;
  case 0x7e:
    goto code_r0x00010047ece8;
  case 0x80:
  case 0xcd:
    goto LAB_10047ee44;
  case 0x81:
    goto code_r0x00010047ea34;
  case 0x82:
    goto code_r0x00010047ea78;
  case 0x84:
    goto code_r0x00010047eed4;
  case 0x85:
    goto code_r0x00010047eee4;
  case 0x86:
    goto code_r0x00010047eeac;
  case 0x87:
    goto code_r0x00010047eec4;
  case 0x89:
    goto code_r0x00010047eef4;
  case 0x8a:
    goto code_r0x00010047ef0c;
  case 0x8b:
    goto code_r0x00010047eecc;
  case 0x8c:
    goto code_r0x00010047ef24;
  case 0x8e:
    goto LAB_10047ef14;
  case 0x91:
    goto code_r0x00010047eefc;
  case 0x92:
  case 0xbf:
    goto code_r0x00010047ee20;
  case 0x93:
    goto code_r0x00010047eeb4;
  case 0x94:
  case 0xb2:
  case 0xcf:
  case 0xdd:
    goto code_r0x00010047ee18;
  case 0x96:
    goto code_r0x00010047ef74;
  case 0x97:
    goto code_r0x00010047ea74;
  case 0x98:
    goto code_r0x00010047eab8;
  case 0x9c:
    goto code_r0x00010047f048;
  case 0x9d:
    goto code_r0x00010047f060;
  case 0x9e:
    goto code_r0x00010047f00c;
  case 0x9f:
    goto code_r0x00010047f090;
  case 0xa3:
    goto code_r0x00010047f03c;
  case 0xa4:
    goto code_r0x00010047f0b0;
  case 0xa5:
    goto code_r0x00010047efe4;
  case 0xa6:
    goto code_r0x00010047f014;
  case 0xa8:
    goto LAB_10047efbc;
  case 0xa9:
    goto code_r0x00010047f050;
  case 0xaa:
    goto code_r0x00010047efb4;
  case 0xb7:
  case 0xf2:
    goto code_r0x00010047ee38;
  case 0xb9:
    goto code_r0x00010047ee0c;
  case 0xba:
    goto code_r0x00010047ee80;
  case 0xbd:
    goto code_r0x00010047ee68;
  case 0xc2:
    goto FUN_10047eee0;
  case 0xc3:
    goto code_r0x00010047ea48;
  case 0xc4:
    goto code_r0x00010047ea8c;
  case 0xc6:
    goto code_r0x00010047ee4c;
  case 199:
    goto code_r0x00010047ee5c;
  case 200:
    goto code_r0x00010047ee24;
  case 0xc9:
    goto code_r0x00010047ee3c;
  case 0xcb:
    goto code_r0x00010047ee6c;
  case 0xcc:
    goto code_r0x00010047ee84;
  case 0xce:
    goto code_r0x00010047ee9c;
  case 0xd0:
    goto code_r0x00010047ee8c;
  case 0xd2:
    goto code_r0x00010047edf0;
  case 0xd3:
    goto code_r0x00010047ee74;
  case 0xd5:
    goto code_r0x00010047ee2c;
  case 0xd6:
    goto code_r0x00010047ed90;
  case 0xd8:
    goto code_r0x00010047eeec;
  case 0xd9:
    goto code_r0x00010047ea44;
  case 0xda:
    goto code_r0x00010047ea88;
  case 0xdc:
code_r0x00010047ee08:
    pppppppuVar17 = (ulong *******)((long)unaff_x21 + 1);
code_r0x00010047ee0c:
    pppppppuStack_1c8 = unaff_x26;
code_r0x00010047ee10:
    unaff_x27 = pppppppuStack_228;
    pppppppuStack_1b0 = pppppppuVar17;
code_r0x00010047ee18:
    pppppppuStack_d0 = unaff_x27;
code_r0x00010047ee1c:
    pppppppuVar17 = pppppppuStack_218;
code_r0x00010047ee20:
    pppppppuStack_d8 = pppppppuVar17;
code_r0x00010047ee24:
    pppppppuVar17 = (ulong *******)CONCAT71(uStack_a7,uStack_a8);
code_r0x00010047ee28:
    pppppppuVar22 = (ulong *******)0x11;
code_r0x00010047ee2c:
    *param_3 = (ulong ******)pppppppuVar22;
    param_3[1] = (ulong ******)pppppppuVar17;
code_r0x00010047ee30:
    param_3 = (ulong *******)0x1;
    unaff_x21 = (ulong *******)0x1;
code_r0x00010047ee38:
    pppppppuVar25 = pppppppuStack_200;
code_r0x00010047ee3c:
    unaff_x24 = pppppppuStack_1f8;
code_r0x00010047ee40:
    unaff_x25 = pppppppuStack_208;
LAB_10047ee44:
    unaff_x26 = (ulong *******)&pppppppuStack_1f0;
code_r0x00010047ee48:
    pppppppuVar17 = (ulong *******)0x8000000000000000;
code_r0x00010047ee4c:
    in_ZR = unaff_x25 == pppppppuVar17;
    pppppppuVar12 = param_3;
    pppppppuVar26 = unaff_x26;
code_r0x00010047ee50:
    iVar16 = (int)unaff_x21;
    if (!(bool)in_ZR) {
LAB_10047ef14:
      iVar16 = (int)unaff_x21;
      unaff_x22 = unaff_x27;
joined_r0x00010047f524:
      do {
        if (unaff_x20 == (ulong *******)0x0) goto LAB_10047f528;
        ppppppuVar19 = *unaff_x22;
        uVar23 = (ulong)ppppppuVar19 ^ 0x8000000000000000;
        if (-1 < (long)ppppppuVar19) {
          uVar23 = 1;
        }
        if ((uVar23 == 0) || (uVar23 != 1)) {
          if (unaff_x22[1] != (ulong ******)0x0) {
            lVar21 = 0x10;
            goto LAB_10047ef20;
          }
        }
        else if (ppppppuVar19 != (ulong ******)0x0) {
          lVar21 = 8;
LAB_10047ef20:
          param_3 = *(ulong ********)((long)unaff_x22 + lVar21);
code_r0x00010047ef24:
          _free(param_3);
        }
        iVar16 = (int)unaff_x21;
        unaff_x22 = unaff_x22 + 4;
        unaff_x20 = (ulong *******)((long)unaff_x20 + -1);
      } while( true );
    }
LAB_10047f534:
    if ((((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) && (((ulong)pppppppuVar12 & 1) != 0)) {
      _free(pppppppuStack_230);
    }
    iVar1 = 0;
    if (pppppppuVar25 != (ulong *******)0x8000000000000001) {
      iVar1 = iVar16;
    }
    if ((iVar1 == 1) && (((ulong)pppppppuVar25 & 0x7fffffffffffffff) != 0)) {
      _free(uStack_238);
    }
    FUN_100d34830(pppppppuVar26 + 4);
    if ((byte)pppppppuStack_1f0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_1f0);
      return;
    }
    return;
  case 0xe4:
  case 0xf7:
    goto code_r0x00010047ee58;
  case 0xe5:
  case 0xf6:
    goto code_r0x00010047edd4;
  case 0xe8:
  case 0xfd:
    goto code_r0x00010047edac;
  case 0xea:
    goto code_r0x00010047ed54;
  case 0xec:
    goto code_r0x00010047ed4c;
  case 0xee:
    goto code_r0x00010047eea8;
  case 0xef:
    goto code_r0x00010047ea3c;
  case 0xf0:
    goto code_r0x00010047ea80;
  case 0xfb:
    goto code_r0x00010047ee04;
  }
  ppppppuStack_1a0 = (ulong ******)CONCAT71(ppppppuStack_1a0._1_7_,uVar15);
code_r0x00010047f184:
  ppppppuVar19 = (ulong ******)FUN_107c05dcc(&ppppppuStack_1a0,&uStack_c0,&UNK_10b2199f0);
  *param_3 = (ulong ******)0x11;
  param_3[1] = ppppppuVar19;
  return;
LAB_10047f528:
  if (unaff_x25 != (ulong *******)0x0) {
    _free(unaff_x27);
  }
  goto LAB_10047f534;
}

