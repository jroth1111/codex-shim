
/* WARNING: Type propagation algorithm not settling */

void FUN_10046f538(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  undefined1 param_4 [16],uint *******param_5,uint ******param_6,undefined *param_7)

{
  int iVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined7 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined7 uVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  uint *******pppppppuVar11;
  code *pcVar12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint ******ppppppuVar13;
  byte bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  uint *******pppppppuVar19;
  uint *****pppppuVar20;
  bool bVar21;
  uint *******unaff_x19;
  int iVar22;
  uint *******unaff_x20;
  uint *******unaff_x21;
  uint *******unaff_x22;
  uint *******unaff_x23;
  uint *******unaff_x24;
  uint ******unaff_x25;
  uint *******unaff_x26;
  uint *******unaff_x27;
  uint *******pppppppuVar23;
  undefined8 uVar24;
  uint ******ppppppuVar25;
  uint *******pppppppuVar26;
  uint ******ppppppuVar27;
  uint ******ppppppuVar28;
  uint ******ppppppuVar29;
  uint ******ppppppuVar30;
  uint ******ppppppuVar31;
  uint ******ppppppuVar32;
  uint *******pppppppuStack_238;
  uint *******pppppppuStack_230;
  uint ******ppppppuStack_228;
  uint ******ppppppuStack_220;
  uint *******pppppppuStack_218;
  uint *******pppppppuStack_210;
  undefined8 *puStack_208;
  uint *******pppppppuStack_200;
  uint *******pppppppuStack_1f8;
  byte bStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  uint *******pppppppuStack_1d8;
  uint *******pppppppuStack_1d0;
  uint *******pppppppuStack_1c8;
  uint *****pppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  uint ******ppppppuStack_1a0;
  uint *******pppppppuStack_198;
  uint ******ppppppuStack_190;
  uint ******ppppppuStack_188;
  uint ******ppppppuStack_180;
  uint ******ppppppuStack_178;
  uint ******ppppppuStack_170;
  uint ******ppppppuStack_168;
  uint ******ppppppuStack_160;
  uint *******pppppppuStack_158;
  uint ******ppppppuStack_150;
  uint ******ppppppuStack_148;
  uint ******ppppppuStack_140;
  uint ******ppppppuStack_138;
  uint ******ppppppuStack_130;
  uint ******ppppppuStack_128;
  uint ******ppppppuStack_120;
  uint *******pppppppuStack_118;
  uint ******ppppppuStack_110;
  uint ******ppppppuStack_108;
  uint ******ppppppuStack_100;
  uint ******ppppppuStack_f8;
  uint ******ppppppuStack_f0;
  uint ******ppppppuStack_e8;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  undefined8 uStack_b0;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  uint *******pppppppuStack_90;
  uint *******pppppppuStack_88;
  uint *******pppppppuStack_80;
  uint ******ppppppuStack_78;
  
  ppppppuVar32 = param_4._8_8_;
  ppppppuVar31 = param_4._0_8_;
  ppppppuVar30 = param_3._8_8_;
  ppppppuVar29 = param_3._0_8_;
  ppppppuVar28 = param_2._8_8_;
  ppppppuVar27 = param_2._0_8_;
  pppppppuVar26 = param_1._8_8_;
  ppppppuVar25 = param_1._0_8_;
  bVar14 = *(byte *)param_6;
  pppppppuVar17 = (uint *******)(ulong)bVar14;
  pppppppuVar19 = (uint *******)&UNK_108c9960e;
  ppppppuVar13 = (uint ******)
                 (&UNK_10046f578 + (ulong)*(ushort *)(&UNK_108c9960e + (long)pppppppuVar17 * 2) * 4)
  ;
  pppppppuVar23 = param_5;
  pppppppuVar18 = pppppppuVar17;
  pppppppuVar9 = unaff_x24;
  pppppppuVar10 = pppppppuStack_1c8;
  pppppppuVar11 = pppppppuStack_1b0;
  switch(bVar14) {
  case 0:
    ppppppuStack_1a0 =
         (uint ******)((ulong)CONCAT61(ppppppuStack_1a0._2_6_,*(byte *)((long)param_6 + 1)) << 8);
    goto code_r0x0001004700c4;
  case 1:
    pppppppuStack_198 = (uint *******)(ulong)*(byte *)((long)param_6 + 1);
    goto code_r0x000100470078;
  case 2:
    pppppppuStack_198 = (uint *******)(ulong)*(ushort *)((long)param_6 + 2);
    goto code_r0x000100470078;
  case 3:
    pppppppuStack_198 = (uint *******)(ulong)*(uint *)((long)param_6 + 4);
    goto code_r0x000100470078;
  case 4:
    pppppppuStack_198 = (uint *******)param_6[1];
code_r0x000100470078:
    uVar15 = 1;
    break;
  case 5:
    pppppppuStack_198 = (uint *******)(long)(char)*(byte *)((long)param_6 + 1);
    goto code_r0x0001004700b8;
  case 6:
    pppppppuStack_198 = (uint *******)(long)*(short *)((long)param_6 + 2);
    goto code_r0x0001004700b8;
  case 7:
    pppppppuStack_198 = (uint *******)(long)*(int *)((long)param_6 + 4);
    goto code_r0x0001004700b8;
  case 8:
    pppppppuStack_198 = (uint *******)param_6[1];
code_r0x0001004700b8:
    uVar15 = 2;
    break;
  case 9:
    pppppppuStack_198 = (uint *******)(double)*(float *)((long)param_6 + 4);
    goto code_r0x0001004700a8;
  case 10:
    pppppppuStack_198 = (uint *******)param_6[1];
code_r0x0001004700a8:
    uVar15 = 3;
    break;
  case 0xb:
    ppppppuVar13 = (uint ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffc0,&stack0xffffffffffffffdf,
                                       &UNK_10b219b10);
    *param_5 = (uint ******)0x11;
    param_5[1] = ppppppuVar13;
    return;
  case 0xc:
    pppppuVar20 = param_6[2];
    ppppppuVar13 = (uint ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b219b10);
    *param_5 = (uint ******)0x11;
    param_5[1] = ppppppuVar13;
    if (param_6[1] != (uint *****)0x0) {
      _free(pppppuVar20);
    }
    return;
  case 0xd:
    pppppppuStack_198 = (uint *******)param_6[1];
    ppppppuStack_190 = (uint ******)param_6[2];
    uVar15 = 5;
    break;
  case 0xe:
    pppppuVar20 = param_6[2];
    ppppppuVar13 = (uint ******)
                   func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                       &UNK_10b219b10);
    *param_5 = (uint ******)0x11;
    param_5[1] = ppppppuVar13;
    if (param_6[1] != (uint *****)0x0) {
      _free(pppppuVar20);
    }
    return;
  case 0xf:
    pppppppuStack_198 = (uint *******)param_6[1];
    ppppppuStack_190 = (uint ******)param_6[2];
    uVar15 = 6;
    break;
  case 0x10:
    uVar15 = 8;
    break;
  default:
    pppppuVar20 = param_6[1];
    pppppppuStack_198 = (uint *******)pppppuVar20[1];
    ppppppuStack_1a0 = (uint ******)*pppppuVar20;
    ppppppuStack_188 = (uint ******)pppppuVar20[3];
    ppppppuStack_190 = (uint ******)pppppuVar20[2];
    func_0x000107c04670(param_5,&ppppppuStack_1a0);
    goto code_r0x00010046fb9c;
  case 0x12:
    uVar15 = 7;
    break;
  case 0x13:
    pppppuVar20 = param_6[1];
    pppppppuStack_198 = (uint *******)pppppuVar20[1];
    ppppppuStack_1a0 = (uint ******)*pppppuVar20;
    ppppppuStack_188 = (uint ******)pppppuVar20[3];
    ppppppuStack_190 = (uint ******)pppppuVar20[2];
    func_0x000107c053f8(param_5,&ppppppuStack_1a0);
code_r0x00010046fb9c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppuVar20);
    return;
  case 0x14:
    unaff_x24 = (uint *******)param_6[1];
    unaff_x20 = (uint *******)param_6[2];
    unaff_x23 = (uint *******)param_6[3];
    unaff_x19 = unaff_x20 + (long)unaff_x23 * 4;
    pppppppuStack_90 = (uint *******)0x0;
    unaff_x22 = unaff_x20;
    uStack_b0 = unaff_x20;
    pppppppuStack_a0 = unaff_x24;
    pppppppuStack_98 = unaff_x19;
    if (unaff_x23 != (uint *******)0x0) {
      unaff_x22 = unaff_x20 + 4;
      bVar14 = *(byte *)unaff_x20;
      if (bVar14 != 0x16) {
        uStack_1e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
        uStack_1ef = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
        uStack_1e8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
        pppppppuVar26 = (uint *******)unaff_x20[3];
        ppppppuVar25 = unaff_x20[2];
        pppppppuStack_a8 = unaff_x22;
        goto code_r0x00010046fc78;
      }
    }
    param_6 = (uint ******)&UNK_10b22b8d8;
    param_7 = &UNK_10b20a590;
    pppppppuStack_a8 = unaff_x22;
  case 0x68:
    pppppppuVar23 = (uint *******)thunk_FUN_1087e422c(0,param_6,param_7);
code_r0x00010046fc0c:
code_r0x00010046fc10:
    *param_5 = (uint ******)0x11;
    param_5[1] = (uint ******)pppppppuVar23;
code_r0x00010046fc18:
    unaff_x23 = (uint *******)(((ulong)((long)unaff_x19 - (long)unaff_x22) >> 5) + 1);
    param_5 = unaff_x22;
    while (unaff_x23 = (uint *******)((long)unaff_x23 + -1), unaff_x23 != (uint *******)0x0) {
      unaff_x21 = param_5 + 4;
code_r0x00010046fc34:
      FUN_100e077ec(param_5);
      param_5 = unaff_x21;
    }
    if (unaff_x24 == (uint *******)0x0) {
      return;
    }
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
    pppppuStack_1c0 = param_6[1];
    pppppppuStack_1d0 = (uint *******)param_6[2];
    pppppuVar20 = param_6[3];
    unaff_x19 = pppppppuStack_1d0 + (long)pppppuVar20 * 8;
    unaff_x25 = (uint ******)&bStack_1f0;
    bStack_1f0 = 0x16;
    pppppppuStack_1b0 = (uint *******)0x0;
    pppppppuStack_1c8 = pppppppuStack_1d0;
    pppppppuStack_1b8 = unaff_x19;
    if (pppppuVar20 == (uint *****)0x0) {
      pppppppuVar19 = (uint *******)0x2;
      pppppppuStack_1f8 = (uint *******)0x2;
      goto code_r0x00010046fc5c;
    }
    pppppppuVar23 = (uint *******)0x0;
    unaff_x20 = (uint *******)((ulong)&uStack_b0 | 1);
    unaff_x25 = (uint ******)((ulong)&bStack_1f0 | 1);
    puStack_208 = (undefined8 *)((ulong)&pppppppuStack_88 | 1);
    pppppppuStack_238 = (uint *******)(((long)pppppuVar20 * 0x40 - 0x40U >> 6) + 1);
    unaff_x27 = (uint *******)0x2;
    unaff_x23 = (uint *******)0x8000000000000000;
    unaff_x22 = (uint *******)0x8000000000000001;
    pppppppuStack_1f8 = (uint *******)0x2;
    unaff_x24 = pppppppuStack_1d0;
    pppppppuStack_230 = param_5;
    do {
      pppppppuVar19 = uStack_b0;
      unaff_x21 = unaff_x24 + 8;
      bVar14 = *(byte *)unaff_x24;
      pppppppuVar10 = unaff_x21;
      pppppppuVar11 = pppppppuVar23;
      if (bVar14 == 0x16) goto code_r0x00010046fda8;
      uStack_b0 = (uint *******)CONCAT71(uStack_b0._1_7_,bVar14);
      pppppppuVar18 = uStack_b0;
      ppppppuVar13 = unaff_x24[2];
      *(uint *******)((long)unaff_x20 + 0x17) = unaff_x24[3];
      *(uint *******)((long)unaff_x20 + 0xf) = ppppppuVar13;
      ppppppuVar13 = *(uint *******)((long)unaff_x24 + 1);
      unaff_x20[1] = *(uint *******)((long)unaff_x24 + 9);
      *unaff_x20 = ppppppuVar13;
      uStack_1e8 = SUB81(unaff_x24[5],0);
      uStack_1e7 = (undefined7)((ulong)unaff_x24[5] >> 8);
      bStack_1f0 = (byte)unaff_x24[4];
      uStack_1ef = (undefined7)((ulong)unaff_x24[4] >> 8);
      pppppppuStack_1d8 = (uint *******)unaff_x24[7];
      uStack_1e0 = SUB81(unaff_x24[6],0);
      uStack_1df = (undefined7)((ulong)unaff_x24[6] >> 8);
      if (bVar14 < 0xd) {
        if (bVar14 == 1) {
          uStack_b0._1_1_ = SUB81(pppppppuVar19,1);
          uVar16 = (uint)uStack_b0._1_1_;
          if (2 < uVar16) {
            uVar16 = 3;
          }
          unaff_x26 = (uint *******)(ulong)uVar16;
          uStack_b0 = pppppppuVar18;
        }
        else {
          if (bVar14 != 4) {
            if (bVar14 == 0xc) {
              if (pppppppuStack_98 == (uint *******)0x4) {
                if (*(uint *)pppppppuStack_a0 != 0x656d616e) goto code_r0x00010046f954;
                unaff_x26 = (uint *******)0x1;
              }
              else if (pppppppuStack_98 == (uint *******)0x6) {
                if (*(uint *)pppppppuStack_a0 != 0x7074756f ||
                    *(short *)((long)pppppppuStack_a0 + 4) != 0x7475) goto code_r0x00010046f954;
                unaff_x26 = (uint *******)0x2;
              }
              else if ((pppppppuStack_98 == (uint *******)0x7) &&
                      (*(uint *)pppppppuStack_a0 == 0x6c6c6163 &&
                       *(int *)((long)pppppppuStack_a0 + 3) == 0x64695f6c)) {
                unaff_x26 = (uint *******)0x0;
              }
              else {
code_r0x00010046f954:
                unaff_x26 = (uint *******)0x3;
              }
              goto joined_r0x00010046fb74;
            }
code_r0x00010047048c:
            pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
            uStack_d8 = SUB81(pppppppuStack_1f8,0);
            uStack_d7 = (undefined7)((ulong)pppppppuStack_1f8 >> 8);
            uStack_d0 = SUB81(pppppppuStack_200,0);
            uStack_cf = (undefined7)((ulong)pppppppuStack_200 >> 8);
            pppppppuStack_1c8 = unaff_x21;
            param_5 = (uint *******)thunk_FUN_108855b04(&uStack_b0,&pppppppuStack_88,&UNK_10b211b60)
            ;
            unaff_x25 = (uint ******)&bStack_1f0;
            unaff_x24 = pppppppuStack_210;
            pppppppuVar23 = pppppppuStack_230;
            goto LAB_10046fdfc;
          }
          unaff_x26 = pppppppuStack_a8;
          uStack_b0 = pppppppuVar18;
          if ((uint *******)0x2 < pppppppuStack_a8) {
            unaff_x26 = (uint *******)0x3;
          }
        }
code_r0x00010046f9d8:
        FUN_100e077ec(&uStack_b0);
      }
      else {
        pppppppuVar17 = pppppppuStack_a8;
        if (bVar14 == 0xd) {
          if (pppppppuStack_a0 == (uint *******)0x4) {
            pppppppuVar17 = (uint *******)(ulong)*(uint *)pppppppuStack_a8;
code_r0x00010046f9c4:
            in_ZR = (int)pppppppuVar17 == 0x656d616e;
code_r0x00010046f9d0:
            if (!(bool)in_ZR) goto code_r0x00010046f9d4;
code_r0x00010046fb68:
            unaff_x26 = (uint *******)0x1;
          }
          else if (pppppppuStack_a0 == (uint *******)0x6) {
            pppppppuVar19 = (uint *******)(ulong)*(uint *)pppppppuStack_a8;
code_r0x00010046f99c:
            in_ZR = false;
            if ((int)pppppppuVar19 == 0x7074756f) {
              in_ZR = *(short *)((long)pppppppuVar17 + 4) == 0x7475;
            }
code_r0x00010046f9b4:
            if (!(bool)in_ZR) goto code_r0x00010046f9d4;
code_r0x00010046f9b8:
            unaff_x26 = (uint *******)0x2;
          }
          else if ((pppppppuStack_a0 == (uint *******)0x7) &&
                  (*(uint *)pppppppuStack_a8 == 0x6c6c6163 &&
                   *(int *)((long)pppppppuStack_a8 + 3) == 0x64695f6c)) {
code_r0x00010046f82c:
            unaff_x26 = (uint *******)0x0;
            uStack_b0 = pppppppuVar18;
          }
          else {
code_r0x00010046f9d4:
            unaff_x26 = (uint *******)0x3;
          }
          goto code_r0x00010046f9d8;
        }
        if (bVar14 != 0xe) {
          if (bVar14 != 0xf) goto code_r0x00010047048c;
          if (pppppppuStack_a0 == (uint *******)0x4) {
            if (*(char *)pppppppuStack_a8 == 'n') {
code_r0x00010046f970:
              if ((*(char *)((long)pppppppuVar17 + 1) == 'a') &&
                 (*(char *)((long)pppppppuVar17 + 2) == 'm')) {
                pppppppuVar17 = (uint *******)(ulong)*(byte *)((long)pppppppuVar17 + 3);
code_r0x00010046f98c:
                if ((int)pppppppuVar17 == 0x65) {
code_r0x00010046f994:
                  goto code_r0x00010046fb68;
                }
              }
            }
          }
          else if (pppppppuStack_a0 == (uint *******)0x6) {
            if (((((*(char *)pppppppuStack_a8 == 'o') &&
                  (*(char *)((long)pppppppuStack_a8 + 1) == 'u')) &&
                 (*(char *)((long)pppppppuStack_a8 + 2) == 't')) &&
                ((*(char *)((long)pppppppuStack_a8 + 3) == 'p' &&
                 (*(char *)((long)pppppppuStack_a8 + 4) == 'u')))) &&
               (*(char *)((long)pppppppuStack_a8 + 5) == 't')) goto code_r0x00010046f9b8;
          }
          else if ((((pppppppuStack_a0 == (uint *******)0x7) && (*(char *)pppppppuStack_a8 == 'c'))
                   && ((*(char *)((long)pppppppuStack_a8 + 1) == 'a' &&
                       (((*(char *)((long)pppppppuStack_a8 + 2) == 'l' &&
                         (*(char *)((long)pppppppuStack_a8 + 3) == 'l')) &&
                        (*(char *)((long)pppppppuStack_a8 + 4) == '_')))))) &&
                  ((*(char *)((long)pppppppuStack_a8 + 5) == 'i' &&
                   (*(char *)((long)pppppppuStack_a8 + 6) == 'd')))) goto code_r0x00010046f82c;
          goto code_r0x00010046f9d4;
        }
        if (pppppppuStack_98 == (uint *******)0x4) {
          if (((*(char *)pppppppuStack_a0 != 'n') || (*(char *)((long)pppppppuStack_a0 + 1) != 'a'))
             || ((*(char *)((long)pppppppuStack_a0 + 2) != 'm' ||
                 (*(char *)((long)pppppppuStack_a0 + 3) != 'e')))) goto code_r0x00010046f934;
          unaff_x26 = (uint *******)0x1;
        }
        else if (pppppppuStack_98 == (uint *******)0x6) {
          if (((((*(char *)pppppppuStack_a0 != 'o') ||
                (*(char *)((long)pppppppuStack_a0 + 1) != 'u')) ||
               (*(char *)((long)pppppppuStack_a0 + 2) != 't')) ||
              ((*(char *)((long)pppppppuStack_a0 + 3) != 'p' ||
               (*(char *)((long)pppppppuStack_a0 + 4) != 'u')))) ||
             (*(char *)((long)pppppppuStack_a0 + 5) != 't')) goto code_r0x00010046f934;
          unaff_x26 = (uint *******)0x2;
        }
        else if (((pppppppuStack_98 == (uint *******)0x7) && (*(char *)pppppppuStack_a0 == 'c')) &&
                ((*(char *)((long)pppppppuStack_a0 + 1) == 'a' &&
                 ((((*(char *)((long)pppppppuStack_a0 + 2) == 'l' &&
                    (*(char *)((long)pppppppuStack_a0 + 3) == 'l')) &&
                   (*(char *)((long)pppppppuStack_a0 + 4) == '_')) &&
                  ((*(char *)((long)pppppppuStack_a0 + 5) == 'i' &&
                   (*(char *)((long)pppppppuStack_a0 + 6) == 'd')))))))) {
          unaff_x26 = (uint *******)0x0;
        }
        else {
code_r0x00010046f934:
          unaff_x26 = (uint *******)0x3;
        }
joined_r0x00010046fb74:
        if (pppppppuStack_a8 != (uint *******)0x0) {
          _free();
        }
      }
code_r0x00010046f9e0:
      uVar7 = uStack_cf;
      uVar5 = uStack_d0;
      uVar3 = uStack_d7;
      uVar15 = uStack_d8;
      bVar14 = bStack_1f0;
      uVar16 = (uint)unaff_x26 & 0xff;
      uStack_d8 = SUB81(pppppppuStack_1f8,0);
      uVar2 = uStack_d8;
      uStack_d7 = (undefined7)((ulong)pppppppuStack_1f8 >> 8);
      uVar4 = uStack_d7;
      uStack_d0 = SUB81(pppppppuStack_200,0);
      uVar6 = uStack_d0;
      uStack_cf = (undefined7)((ulong)pppppppuStack_200 >> 8);
      uVar8 = uStack_cf;
      if (uVar16 == 1 || ((ulong)unaff_x26 & 0xff) == 0) {
        if (((ulong)unaff_x26 & 0xff) == 0) {
          in_ZR = unaff_x23 == (uint *******)0x8000000000000000;
          uStack_d8 = uVar15;
          uStack_d7 = uVar3;
          uStack_d0 = uVar5;
          uStack_cf = uVar7;
code_r0x00010046f9f8:
          if (!(bool)in_ZR) {
            pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
            uStack_d8 = SUB81(pppppppuStack_1f8,0);
            uStack_d7 = (undefined7)((ulong)pppppppuStack_1f8 >> 8);
            uStack_d0 = SUB81(pppppppuStack_200,0);
            uStack_cf = (undefined7)((ulong)pppppppuStack_200 >> 8);
            pppppppuStack_88 = (uint *******)&UNK_108caaafb;
            pppppppuStack_80 = (uint *******)0x7;
            uStack_b0 = (uint *******)&pppppppuStack_88;
            pppppppuStack_a8 = (uint *******)&DAT_100c7b3a0;
            pppppppuStack_1c8 = unaff_x21;
            param_5 = (uint *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
            unaff_x25 = (uint ******)&bStack_1f0;
            unaff_x24 = pppppppuStack_210;
            pppppppuVar23 = pppppppuStack_230;
            goto LAB_10046fdfc;
          }
          pppppppuVar17 = (uint *******)(ulong)bStack_1f0;
          bStack_1f0 = 0x16;
code_r0x00010046fa08:
          if ((int)pppppppuVar17 == 0x16) {
            pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
            uStack_d8 = SUB81(pppppppuStack_1f8,0);
            uStack_d7 = (undefined7)((ulong)pppppppuStack_1f8 >> 8);
            uStack_d0 = SUB81(pppppppuStack_200,0);
            uStack_cf = (undefined7)((ulong)pppppppuStack_200 >> 8);
            pppppppuStack_1c8 = unaff_x21;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100470488;
          }
          ppppppuVar13 = (uint ******)*unaff_x25;
          unaff_x20[1] = (uint ******)unaff_x25[1];
          *unaff_x20 = ppppppuVar13;
          uVar24 = *(undefined8 *)((long)unaff_x25 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
          uStack_b0 = (uint *******)CONCAT71(uStack_b0._1_7_,(char)pppppppuVar17);
          FUN_1004b62d4(&pppppppuStack_88,&uStack_b0);
          pppppppuVar17 = (uint *******)0x8000000000000000;
          unaff_x23 = pppppppuStack_88;
code_r0x00010046fa3c:
          if (unaff_x23 == pppppppuVar17) {
            uStack_d8 = SUB81(pppppppuStack_1f8,0);
            uStack_d7 = (undefined7)((ulong)pppppppuStack_1f8 >> 8);
            uStack_d0 = SUB81(pppppppuStack_200,0);
            uStack_cf = (undefined7)((ulong)pppppppuStack_200 >> 8);
            unaff_x23 = (uint *******)0x0;
            pppppppuStack_1c8 = unaff_x21;
code_r0x000100470150:
            pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
            unaff_x25 = (uint ******)&bStack_1f0;
            *pppppppuStack_230 = (uint ******)0x11;
            pppppppuStack_230[1] = (uint ******)pppppppuStack_80;
            unaff_x24 = pppppppuStack_210;
            if (unaff_x27 != (uint *******)0x2) goto code_r0x00010046fe0c;
            goto LAB_1004702e0;
          }
          pppppppuStack_210 = pppppppuStack_80;
          ppppppuStack_220 = ppppppuStack_78;
        }
        else {
          if (unaff_x22 != (uint *******)0x8000000000000001) {
            pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
            pppppppuStack_88 = (uint *******)&UNK_108c61018;
            pppppppuStack_80 = (uint *******)0x4;
            uStack_b0 = (uint *******)&pppppppuStack_88;
            pppppppuStack_a8 = (uint *******)&DAT_100c7b3a0;
            pppppppuStack_1c8 = unaff_x21;
            param_5 = (uint *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
            unaff_x25 = (uint ******)&bStack_1f0;
            unaff_x24 = pppppppuStack_210;
            pppppppuVar23 = pppppppuStack_230;
            goto LAB_10046fdfc;
          }
          bStack_1f0 = 0x16;
          if (bVar14 == 0x16) {
            pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
            pppppppuStack_1c8 = unaff_x21;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x000100470488;
          }
          ppppppuVar13 = (uint ******)*unaff_x25;
          unaff_x20[1] = (uint ******)unaff_x25[1];
          *unaff_x20 = ppppppuVar13;
          uVar24 = *(undefined8 *)((long)unaff_x25 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
          uStack_b0 = (uint *******)CONCAT71(uStack_b0._1_7_,bVar14);
          uStack_d8 = uVar15;
          uStack_d7 = uVar3;
          uStack_d0 = uVar5;
          uStack_cf = uVar7;
          FUN_1004b60cc(&pppppppuStack_88,&uStack_b0);
          if (pppppppuStack_88 == (uint *******)0x8000000000000001) {
            unaff_x22 = (uint *******)0x8000000000000001;
            pppppppuStack_1c8 = unaff_x21;
            uStack_d8 = uVar2;
            uStack_d7 = uVar4;
            uStack_d0 = uVar6;
            uStack_cf = uVar8;
            goto code_r0x000100470150;
          }
          pppppppuStack_218 = pppppppuStack_80;
          ppppppuStack_228 = ppppppuStack_78;
          unaff_x22 = pppppppuStack_88;
        }
      }
      else if (uVar16 == 2) {
        if (unaff_x27 != (uint *******)0x2) {
          pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
          pppppppuStack_88 = (uint *******)&UNK_108ca104d;
          pppppppuStack_80 = (uint *******)0x6;
          uStack_b0 = (uint *******)&pppppppuStack_88;
          pppppppuStack_a8 = (uint *******)&DAT_100c7b3a0;
          pppppppuStack_1c8 = unaff_x21;
          ppppppuVar13 = (uint ******)
                         thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          unaff_x25 = (uint ******)&bStack_1f0;
          *pppppppuStack_230 = (uint ******)0x11;
          pppppppuStack_230[1] = ppppppuVar13;
          unaff_x24 = pppppppuStack_210;
          pppppppuVar17 = pppppppuStack_1f8;
          goto joined_r0x0001004702c8;
        }
        bStack_1f0 = 0x16;
        if (bVar14 == 0x16) {
          pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
          pppppppuStack_1c8 = unaff_x21;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100470488;
        }
        pppppuVar20 = *unaff_x25;
        puStack_208[1] = unaff_x25[1];
        *puStack_208 = pppppuVar20;
        uVar24 = *(undefined8 *)((long)unaff_x25 + 0xf);
        *(undefined8 *)((long)puStack_208 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
        *(undefined8 *)((long)puStack_208 + 0xf) = uVar24;
        pppppppuStack_88 = (uint *******)CONCAT71(pppppppuStack_88._1_7_,bVar14);
        uStack_d8 = uVar15;
        uStack_d7 = uVar3;
        uStack_d0 = uVar5;
        uStack_cf = uVar7;
        func_0x00010130e708(&uStack_b0,&pppppppuStack_88);
        pppppppuStack_1f8 = uStack_b0;
        if (uStack_b0 == (uint *******)0x2) {
          bVar21 = false;
          pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
          *pppppppuStack_230 = (uint ******)0x11;
          pppppppuStack_230[1] = (uint ******)pppppppuStack_a8;
          iVar22 = 1;
          unaff_x25 = (uint ******)&bStack_1f0;
          pppppppuStack_1c8 = unaff_x21;
          goto LAB_1004702e8;
        }
        pppppppuStack_200 = pppppppuStack_a8;
        pppppppuStack_c0 = pppppppuStack_98;
        uStack_c8 = SUB81(pppppppuStack_a0,0);
        uStack_c7 = (undefined7)((ulong)pppppppuStack_a0 >> 8);
        pppppppuStack_b8 = pppppppuStack_90;
        unaff_x27 = uStack_b0;
      }
      else {
        bStack_1f0 = 0x16;
        if (bVar14 == 0x16) {
          pppppppuStack_1b0 = (uint *******)((long)pppppppuVar23 + 1);
          pppppppuStack_1c8 = unaff_x21;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100470488:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10047048c);
          (*pcVar12)();
        }
        ppppppuVar13 = (uint ******)*unaff_x25;
        unaff_x20[1] = (uint ******)unaff_x25[1];
        *unaff_x20 = ppppppuVar13;
        uVar24 = *(undefined8 *)((long)unaff_x25 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar24;
        uStack_b0 = (uint *******)CONCAT71(uStack_b0._1_7_,bVar14);
        uStack_d8 = uVar15;
        uStack_d7 = uVar3;
        uStack_d0 = uVar5;
        uStack_cf = uVar7;
        FUN_100e077ec(&uStack_b0);
      }
      pppppppuVar19 = unaff_x24 + 8;
      pppppppuVar23 = (uint *******)((long)pppppppuVar23 + 1);
      unaff_x24 = unaff_x21;
    } while (pppppppuVar19 != unaff_x19);
  case 0x79:
  case 0xf4:
    unaff_x21 = unaff_x19;
code_r0x00010046fd9c:
    pppppppuVar23 = pppppppuStack_238;
    pppppppuVar10 = unaff_x21;
    pppppppuVar11 = pppppppuStack_238;
code_r0x00010046fda8:
    pppppppuStack_1b0 = pppppppuVar11;
    pppppppuStack_1c8 = pppppppuVar10;
    pppppppuVar17 = pppppppuStack_1f8;
    pppppppuVar19 = pppppppuStack_200;
code_r0x00010046fdac:
    uStack_d8 = SUB81(pppppppuVar17,0);
    uStack_d7 = (undefined7)((ulong)pppppppuVar17 >> 8);
    uStack_d0 = SUB81(pppppppuVar19,0);
    uStack_cf = (undefined7)((ulong)pppppppuVar19 >> 8);
code_r0x00010046fdb0:
    pppppppuVar17 = (uint *******)0x8000000000000000;
code_r0x00010046fdb4:
    in_ZR = unaff_x23 == pppppppuVar17;
code_r0x00010046fdb8:
    unaff_x25 = (uint ******)&bStack_1f0;
code_r0x00010046fdbc:
    if ((bool)in_ZR) {
code_r0x00010046fdc0:
      param_5 = pppppppuStack_230;
code_r0x00010046fdc4:
      unaff_x24 = pppppppuStack_210;
code_r0x00010046fdc8:
      pppppppuVar17 = (uint *******)&UNK_108caa000;
code_r0x00010046fdcc:
      pppppppuVar17 = (uint *******)((long)pppppppuVar17 + 0xafb);
code_r0x00010046fdd0:
      pppppppuVar19 = (uint *******)0x7;
      pppppppuVar18 = pppppppuVar17;
code_r0x00010046fdd4:
      pppppppuVar17 = (uint *******)&pppppppuStack_88;
      pppppppuStack_88 = pppppppuVar18;
      pppppppuStack_80 = pppppppuVar19;
code_r0x00010046fddc:
      pppppppuVar19 = (uint *******)&UNK_100c7b000;
code_r0x00010046fde0:
      pppppppuVar19 = pppppppuVar19 + 0x74;
code_r0x00010046fde4:
      uStack_b0 = pppppppuVar17;
      pppppppuStack_a8 = pppppppuVar19;
code_r0x00010046fde8:
      unaff_x23 = (uint *******)0x0;
      pppppppuVar23 = param_5;
FUN_10046fdec:
      param_5 = (uint *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010046fdf0:
      param_5 = (uint *******)((long)param_5 + 0x8f7);
      param_6 = (uint ******)&uStack_b0;
code_r0x00010046fdf8:
      param_5 = (uint *******)thunk_FUN_108856088(param_5,param_6);
LAB_10046fdfc:
      pppppppuVar17 = (uint *******)0x11;
code_r0x00010046fe00:
      *pppppppuVar23 = (uint ******)pppppppuVar17;
      pppppppuVar23[1] = (uint ******)param_5;
code_r0x00010046fe04:
      in_ZR = unaff_x27 == (uint *******)0x2;
code_r0x00010046fe08:
      pppppppuStack_210 = unaff_x24;
      if (!(bool)in_ZR) {
code_r0x00010046fe0c:
        pppppppuVar17 = pppppppuStack_1f8;
code_r0x00010046fe10:
joined_r0x0001004702c8:
        if (pppppppuVar17 == (uint *******)0x0) {
          pppppppuStack_210 = unaff_x24;
          if (pppppppuStack_200 != (uint *******)0x0) {
            unaff_x19 = (uint *******)CONCAT71(uStack_c7,uStack_c8);
            goto LAB_1004702d8;
          }
        }
        else {
code_r0x00010046fe14:
          unaff_x19 = (uint *******)CONCAT71(uStack_c7,uStack_c8);
          unaff_x20 = pppppppuStack_c0;
code_r0x00010046fe18:
          pppppppuStack_210 = unaff_x24;
          if (unaff_x20 != (uint *******)0x0) {
code_r0x00010046fe1c:
            unaff_x21 = unaff_x19;
code_r0x00010046fe20:
LAB_10046fe38:
            do {
              pppppppuVar17 = (uint *******)*unaff_x21;
code_r0x00010046fe3c:
              pppppppuVar19 = (uint *******)((ulong)pppppppuVar17 ^ 0x8000000000000000);
code_r0x00010046fe40:
              in_OV = '\0';
              in_NG = (long)pppppppuVar17 < 0;
code_r0x00010046fe44:
              if (in_NG == in_OV) {
                pppppppuVar19 = (uint *******)0x1;
              }
code_r0x00010046fe48:
              if (pppppppuVar19 == (uint *******)0x0) {
LAB_10046fe60:
                pppppppuVar17 = (uint *******)unaff_x21[1];
code_r0x00010046fe64:
                if (pppppppuVar17 != (uint *******)0x0) {
code_r0x00010046fe68:
                  pppppppuVar17 = (uint *******)0x10;
LAB_10046fe24:
                  _free(*(undefined8 *)((long)unaff_x21 + (long)pppppppuVar17));
                }
              }
              else {
code_r0x00010046fe4c:
                in_ZR = pppppppuVar19 == (uint *******)0x1;
code_r0x00010046fe50:
                if (!(bool)in_ZR) goto LAB_10046fe60;
code_r0x00010046fe54:
                if (pppppppuVar17 != (uint *******)0x0) {
code_r0x00010046fe58:
                  pppppppuVar17 = (uint *******)0x8;
code_r0x00010046fe5c:
                  goto LAB_10046fe24;
                }
              }
LAB_10046fe2c:
              unaff_x21 = unaff_x21 + 4;
code_r0x00010046fe30:
              unaff_x20 = (uint *******)((long)unaff_x20 + -1);
              in_ZR = unaff_x20 == (uint *******)0x0;
              pppppppuVar9 = unaff_x24;
code_r0x00010046fe34:
              pppppppuStack_210 = pppppppuVar9;
              unaff_x24 = pppppppuStack_210;
            } while (!(bool)in_ZR);
          }
          if (pppppppuStack_200 != (uint *******)0x0) {
LAB_1004702d8:
            _free(unaff_x19);
          }
        }
      }
LAB_1004702e0:
      bVar21 = false;
      iVar22 = 1;
LAB_1004702e8:
      iVar1 = 0;
      if (unaff_x22 != (uint *******)0x8000000000000001) {
        iVar1 = iVar22;
      }
      if ((iVar1 == 1) && (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0)) {
        _free(pppppppuStack_218);
      }
      if (((ulong)unaff_x23 & 0x7fffffffffffffff) == 0) {
        bVar21 = true;
      }
      if (!bVar21) {
        _free(pppppppuStack_210);
      }
      FUN_100d34830(unaff_x25 + 4);
      if (bStack_1f0 == 0x16) {
        return;
      }
      FUN_100e077ec(&bStack_1f0);
      return;
    }
code_r0x00010046fe70:
    pppppppuVar19 = (uint *******)0x8000000000000001;
code_r0x00010046fe74:
    in_ZR = unaff_x22 == pppppppuVar19;
code_r0x00010046fe78:
    unaff_x24 = pppppppuVar17;
    if (!(bool)in_ZR) {
      unaff_x24 = unaff_x22;
    }
    unaff_x20 = (uint *******)(ulong)(byte)in_ZR;
code_r0x00010046fe80:
    if (unaff_x27 == (uint *******)0x2) {
      pppppppuVar17 = (uint *******)&UNK_108ca104d;
code_r0x00010046fe90:
      pppppppuStack_80 = (uint *******)0x6;
      uStack_b0 = (uint *******)&pppppppuStack_88;
      pppppppuStack_a8 = (uint *******)&DAT_100c7b3a0;
      pppppppuStack_88 = pppppppuVar17;
      param_5 = (uint *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
      pppppppuVar17 = (uint *******)0x11;
      pppppppuVar19 = pppppppuStack_230;
code_r0x00010046fec0:
      *pppppppuVar19 = (uint ******)pppppppuVar17;
      pppppppuVar19[1] = (uint ******)param_5;
code_r0x00010046fec4:
      iVar22 = (int)unaff_x20;
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuStack_218);
      }
      param_5 = pppppppuStack_210;
      pppppppuVar9 = pppppppuStack_210;
      if (unaff_x23 != (uint *******)0x0) {
code_r0x00010046fee0:
        pppppppuStack_210 = pppppppuVar9;
        iVar22 = (int)unaff_x20;
        _free(param_5);
      }
      bVar21 = true;
      goto LAB_1004702e8;
    }
    pppppppuStack_230[4] = (uint ******)pppppppuStack_c0;
    pppppppuStack_230[3] = (uint ******)CONCAT71(uStack_c7,uStack_c8);
    *pppppppuStack_230 = (uint ******)0x9;
    pppppppuStack_230[1] = (uint ******)unaff_x27;
    pppppppuStack_230[2] = (uint ******)pppppppuStack_200;
    pppppppuStack_230[5] = (uint ******)pppppppuStack_b8;
    pppppppuStack_230[6] = (uint ******)unaff_x23;
    pppppppuStack_230[7] = (uint ******)pppppppuStack_210;
    pppppppuStack_230[8] = ppppppuStack_220;
    pppppppuStack_230[9] = (uint ******)unaff_x24;
    pppppppuStack_230[10] = (uint ******)pppppppuStack_218;
    pppppppuStack_230[0xb] = ppppppuStack_228;
    pppppppuStack_198 = (uint *******)pppppppuStack_230[1];
    ppppppuStack_1a0 = *pppppppuStack_230;
    ppppppuStack_188 = pppppppuStack_230[3];
    ppppppuStack_190 = pppppppuStack_230[2];
    ppppppuStack_178 = pppppppuStack_230[5];
    ppppppuStack_180 = pppppppuStack_230[4];
    ppppppuStack_168 = pppppppuStack_230[7];
    ppppppuStack_170 = pppppppuStack_230[6];
    pppppppuStack_158 = (uint *******)pppppppuStack_230[9];
    ppppppuStack_160 = pppppppuStack_230[8];
    ppppppuStack_148 = pppppppuStack_230[0xb];
    ppppppuStack_150 = pppppppuStack_230[10];
    ppppppuStack_138 = pppppppuStack_230[0xd];
    ppppppuStack_140 = pppppppuStack_230[0xc];
    ppppppuStack_128 = pppppppuStack_230[0xf];
    ppppppuStack_130 = pppppppuStack_230[0xe];
    pppppppuStack_118 = (uint *******)pppppppuStack_230[0x11];
    ppppppuStack_120 = pppppppuStack_230[0x10];
    ppppppuStack_108 = pppppppuStack_230[0x13];
    ppppppuStack_110 = pppppppuStack_230[0x12];
    ppppppuStack_f8 = pppppppuStack_230[0x15];
    ppppppuStack_100 = pppppppuStack_230[0x14];
    ppppppuStack_e8 = pppppppuStack_230[0x17];
    ppppppuStack_f0 = pppppppuStack_230[0x16];
    FUN_100d34830(unaff_x25 + 4);
    if (unaff_x19 == unaff_x21) {
      return;
    }
    uStack_b0 = pppppppuVar23;
    ppppppuVar13 = (uint ******)
                   thunk_FUN_1087e422c(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 6) +
                                       (long)pppppppuVar23,&uStack_b0,&UNK_10b23a190);
    *pppppppuStack_230 = (uint ******)0x11;
    pppppppuStack_230[1] = ppppppuVar13;
  case 0x16:
  case 0x2f:
  case 0x87:
  case 0xa2:
  case 0xea:
  case 0xfb:
    goto code_r0x00010046fd8c;
  case 0x17:
  case 0x2c:
  case 0x84:
  case 0xcf:
    goto code_r0x00010046fd9c;
  case 0x18:
  case 0xa7:
  case 0xc0:
  case 0xfe:
    goto code_r0x00010046fd64;
  case 0x19:
  case 0x3b:
  case 0x93:
  case 0xa4:
    goto code_r0x00010046fd7c;
  case 0x1a:
    goto code_r0x00010046fd28;
  case 0x1b:
  case 0x2d:
  case 0x85:
    goto code_r0x00010046fdac;
  case 0x1c:
  case 0x39:
  case 0x91:
  case 0xbc:
    goto code_r0x00010046fdc4;
  case 0x1d:
  case 0x4a:
  case 0xec:
    goto code_r0x00010046fd84;
  case 0x1e:
  case 0x36:
  case 0x8e:
  case 0xe0:
    goto code_r0x00010046fddc;
  case 0x1f:
    goto code_r0x00010046fd58;
  case 0x20:
    goto code_r0x00010046fdcc;
  case 0x21:
  case 0x4b:
  case 0x62:
    goto code_r0x00010046fd00;
  case 0x22:
    goto code_r0x00010046fd30;
  case 0x23:
  case 0xe7:
    goto code_r0x00010046fdb4;
  case 0x24:
  case 0x4e:
  case 0x9e:
    goto code_r0x00010046fcd8;
  case 0x25:
  case 0x48:
  case 0xbe:
  case 0xca:
    goto code_r0x00010046fd6c;
  case 0x26:
  case 0x46:
  case 0x59:
    goto code_r0x00010046fcd0;
  case 0x28:
    goto LAB_10046fe2c;
  case 0x29:
    goto code_r0x00010046f994;
  case 0x2a:
    goto code_r0x00010046f9d8;
  case 0x2e:
  case 0x4c:
  case 0x86:
  case 0xa0:
  case 0xd2:
    goto code_r0x00010046fd74;
  case 0x30:
  case 0x88:
    goto code_r0x00010046fd38;
  case 0x31:
  case 0x89:
  case 0xac:
  case 0xb4:
    goto code_r0x00010046fdbc;
  case 0x32:
  case 0x54:
  case 0x8a:
    goto code_r0x00010046fdd4;
  case 0x33:
  case 0x8b:
  case 0xbb:
    goto code_r0x00010046fd94;
  case 0x34:
  case 0x8c:
  case 0xb9:
    goto FUN_10046fdec;
  case 0x35:
  case 0x7e:
  case 0x8d:
    goto code_r0x00010046fd68;
  case 0x37:
  case 0x60:
  case 0x8f:
    goto code_r0x00010046fd10;
  case 0x38:
  case 0x90:
    goto code_r0x00010046fd40;
  case 0x3a:
  case 0x65:
  case 0x92:
    goto code_r0x00010046fce8;
  case 0x3c:
  case 0x5d:
  case 0x94:
  case 0xa6:
    goto code_r0x00010046fce0;
  case 0x3e:
  case 0x96:
    goto code_r0x00010046fe3c;
  case 0x3f:
  case 0x97:
    goto code_r0x00010046f99c;
  case 0x40:
  case 0x98:
    goto code_r0x00010046f9e0;
  case 0x42:
  case 0xa1:
  case 0xfd:
    goto code_r0x00010046fd34;
  case 0x43:
  case 0xd1:
    goto code_r0x00010046fd44;
  case 0x44:
    goto code_r0x00010046fd0c;
  case 0x45:
    goto code_r0x00010046fd24;
  case 0x47:
    goto code_r0x00010046fd54;
  case 0x49:
  case 0x9d:
    goto code_r0x00010046fd2c;
  case 0x4d:
    goto code_r0x00010046fca8;
  case 0x4f:
  case 0x6a:
  case 0x9f:
  case 0xf6:
    goto code_r0x00010046fd5c;
  case 0x50:
  case 0xaa:
    goto code_r0x00010046fc80;
  case 0x51:
  case 0x9c:
  case 0xd6:
    goto code_r0x00010046fd14;
  case 0x52:
code_r0x00010046fc78:
    uStack_1e0 = SUB81(ppppppuVar25,0);
    uStack_1df = (undefined7)((ulong)ppppppuVar25 >> 8);
    pppppppuVar19 = (uint *******)0x1;
    pppppppuStack_1d8 = pppppppuVar26;
code_r0x00010046fc80:
    bStack_1f0 = bVar14;
    pppppppuStack_90 = pppppppuVar19;
code_r0x00010046fc88:
    pppppppuVar23 = (uint *******)&uStack_d8;
code_r0x00010046fc8c:
    FUN_1004b62d4(pppppppuVar23,&bStack_1f0);
    unaff_x25 = (uint ******)CONCAT71(uStack_d7,uStack_d8);
    unaff_x21 = (uint *******)CONCAT71(uStack_cf,uStack_d0);
code_r0x00010046fc98:
    in_ZR = unaff_x25 == (uint ******)0x8000000000000000;
code_r0x00010046fca0:
    pppppppuVar23 = unaff_x21;
    if (!(bool)in_ZR) {
      unaff_x27 = (uint *******)CONCAT71(uStack_c7,uStack_c8);
code_r0x00010046fca8:
      if (unaff_x23 == (uint *******)0x1) {
code_r0x00010046fcc4:
        unaff_x26 = (uint *******)0x8000000000000000;
        pppppppuVar17 = (uint *******)0x2;
        unaff_x23 = param_5;
code_r0x00010046fcd0:
        pppppppuVar23 = unaff_x19;
        if (unaff_x22 == unaff_x19) {
code_r0x0001004701d4:
          param_5 = (uint *******)thunk_FUN_1087e422c(2,&UNK_10b22b8d8,&UNK_10b20a590);
          unaff_x22 = pppppppuVar23;
        }
        else {
code_r0x00010046fcd8:
          param_5 = unaff_x22 + 4;
          pppppppuVar19 = (uint *******)(ulong)*(byte *)unaff_x22;
code_r0x00010046fce0:
          in_ZR = (int)pppppppuVar19 == 0x16;
          pppppppuStack_a8 = param_5;
code_r0x00010046fce8:
          pppppppuVar23 = param_5;
          if ((bool)in_ZR) goto code_r0x0001004701d4;
          uStack_cf = (undefined7)*(undefined8 *)((long)unaff_x22 + 9);
          uStack_d7 = (undefined7)*(undefined8 *)((long)unaff_x22 + 1);
          uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x22 + 1) >> 0x38);
          pppppppuVar26 = (uint *******)unaff_x22[3];
          ppppppuVar25 = unaff_x22[2];
code_r0x00010046fcf8:
          uStack_c8 = SUB81(ppppppuVar25,0);
          uStack_c7 = (undefined7)((ulong)ppppppuVar25 >> 8);
          pppppppuVar23 = param_5;
          pppppppuStack_c0 = pppppppuVar26;
          pppppppuStack_90 = pppppppuVar17;
code_r0x00010046fd00:
          uStack_d8 = SUB81(pppppppuVar19,0);
          param_5 = (uint *******)&bStack_1f0;
code_r0x00010046fd08:
          param_6 = (uint ******)&uStack_d8;
code_r0x00010046fd0c:
          func_0x00010130e708(param_5,param_6);
code_r0x00010046fd10:
          pppppppuVar17 = (uint *******)CONCAT71(uStack_1ef,bStack_1f0);
          param_5 = (uint *******)CONCAT71(uStack_1e7,uStack_1e8);
code_r0x00010046fd14:
          unaff_x22 = pppppppuVar23;
          if (pppppppuVar17 != (uint *******)0x2) {
code_r0x00010046fd1c:
            unaff_x23[4] = (uint ******)pppppppuStack_1d8;
            unaff_x23[3] = (uint ******)CONCAT71(uStack_1df,uStack_1e0);
code_r0x00010046fd24:
            pppppppuVar19 = pppppppuStack_1d0;
code_r0x00010046fd28:
            ppppppuVar13 = (uint ******)0x9;
code_r0x00010046fd2c:
            *unaff_x23 = ppppppuVar13;
            unaff_x23[1] = (uint ******)pppppppuVar17;
code_r0x00010046fd30:
            unaff_x23[2] = (uint ******)param_5;
code_r0x00010046fd34:
            unaff_x23[5] = (uint ******)pppppppuVar19;
            unaff_x23[6] = unaff_x25;
code_r0x00010046fd38:
            unaff_x23[7] = (uint ******)unaff_x21;
            unaff_x23[8] = (uint ******)unaff_x27;
code_r0x00010046fd3c:
            pppppppuVar17 = pppppppuStack_200;
            pppppppuVar19 = pppppppuStack_1f8;
code_r0x00010046fd40:
            unaff_x23[9] = (uint ******)unaff_x26;
            unaff_x23[10] = (uint ******)pppppppuVar19;
code_r0x00010046fd44:
            unaff_x23[0xb] = (uint ******)pppppppuVar17;
            pppppppuVar26 = (uint *******)unaff_x23[0x11];
            ppppppuVar25 = unaff_x23[0x10];
            ppppppuVar28 = unaff_x23[0x13];
            ppppppuVar27 = unaff_x23[0x12];
code_r0x00010046fd4c:
            ppppppuStack_f8 = unaff_x23[0x15];
            ppppppuStack_100 = unaff_x23[0x14];
            ppppppuStack_e8 = unaff_x23[0x17];
            ppppppuStack_f0 = unaff_x23[0x16];
code_r0x00010046fd54:
            ppppppuStack_120 = ppppppuVar25;
            pppppppuStack_118 = pppppppuVar26;
            ppppppuStack_110 = ppppppuVar27;
            ppppppuStack_108 = ppppppuVar28;
code_r0x00010046fd58:
            pppppppuVar26 = (uint *******)unaff_x23[1];
            ppppppuVar25 = *unaff_x23;
            ppppppuVar28 = unaff_x23[3];
            ppppppuVar27 = unaff_x23[2];
code_r0x00010046fd5c:
            ppppppuStack_178 = unaff_x23[5];
            ppppppuStack_180 = unaff_x23[4];
            ppppppuStack_168 = unaff_x23[7];
            ppppppuStack_170 = unaff_x23[6];
code_r0x00010046fd64:
            ppppppuStack_1a0 = ppppppuVar25;
            pppppppuStack_198 = pppppppuVar26;
            ppppppuStack_190 = ppppppuVar27;
            ppppppuStack_188 = ppppppuVar28;
code_r0x00010046fd68:
            pppppppuVar26 = (uint *******)unaff_x23[9];
            ppppppuVar25 = unaff_x23[8];
            ppppppuVar28 = unaff_x23[0xb];
            ppppppuVar27 = unaff_x23[10];
code_r0x00010046fd6c:
            ppppppuVar30 = unaff_x23[0xd];
            ppppppuVar29 = unaff_x23[0xc];
            ppppppuVar32 = unaff_x23[0xf];
            ppppppuVar31 = unaff_x23[0xe];
code_r0x00010046fd70:
            ppppppuStack_140 = ppppppuVar29;
            ppppppuStack_138 = ppppppuVar30;
            ppppppuStack_130 = ppppppuVar31;
            ppppppuStack_128 = ppppppuVar32;
code_r0x00010046fd74:
            param_5 = (uint *******)&uStack_b0;
            ppppppuStack_160 = ppppppuVar25;
            pppppppuStack_158 = pppppppuVar26;
            ppppppuStack_150 = ppppppuVar27;
            ppppppuStack_148 = ppppppuVar28;
code_r0x00010046fd7c:
            param_5 = (uint *******)FUN_100fbc738(param_5);
            if (param_5 == (uint *******)0x0) {
              return;
            }
code_r0x00010046fd84:
            *unaff_x23 = (uint ******)0x11;
            unaff_x23[1] = (uint ******)param_5;
code_r0x00010046fd8c:
            FUN_100e02a24(&ppppppuStack_1a0);
code_r0x00010046fd94:
            return;
          }
        }
        *unaff_x23 = (uint ******)0x11;
        unaff_x23[1] = (uint ******)param_5;
        if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
          _free(pppppppuStack_1f8);
        }
      }
      else {
code_r0x00010046fcb0:
        unaff_x22 = unaff_x20 + 8;
        pppppppuStack_a8 = unaff_x22;
code_r0x00010046fcb8:
        bVar14 = *(byte *)(unaff_x20 + 4);
        in_ZR = bVar14 == 0x16;
code_r0x00010046fcc0:
        if ((bool)in_ZR) goto code_r0x00010046fcc4;
        uStack_1e7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
        uStack_1ef = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
        uStack_1e8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
        pppppppuStack_1d8 = (uint *******)unaff_x20[7];
        uStack_1e0 = SUB81(unaff_x20[6],0);
        uStack_1df = (undefined7)((ulong)unaff_x20[6] >> 8);
        pppppppuStack_90 = (uint *******)0x2;
        bStack_1f0 = bVar14;
        FUN_1004b60cc(&uStack_d8,&bStack_1f0);
        unaff_x26 = (uint *******)CONCAT71(uStack_d7,uStack_d8);
        pppppppuStack_1f8 = (uint *******)CONCAT71(uStack_cf,uStack_d0);
        if (unaff_x26 != (uint *******)0x8000000000000001) {
          pppppppuStack_200 = (uint *******)CONCAT71(uStack_c7,uStack_c8);
          pppppppuVar17 = (uint *******)0x3;
          unaff_x23 = param_5;
          pppppppuVar23 = unaff_x19;
          if (unaff_x22 != unaff_x19) goto code_r0x00010046fcd8;
          goto code_r0x0001004701d4;
        }
        *param_5 = (uint ******)0x11;
        param_5[1] = (uint ******)pppppppuStack_1f8;
      }
      if (unaff_x25 != (uint ******)0x0) {
        _free(unaff_x21);
      }
      goto code_r0x00010046fc18;
    }
    goto code_r0x00010046fc10;
  case 0x55:
    goto code_r0x00010046f970;
  case 0x56:
  case 0x81:
  case 0xef:
    goto code_r0x00010046f9b4;
  case 0x58:
    goto code_r0x00010046fcc0;
  case 0x5a:
    goto code_r0x00010046fc98;
  case 0x5b:
  case 0xa5:
    goto code_r0x00010046fcb0;
  case 0x5c:
code_r0x00010046fc5c:
    uStack_d8 = SUB81(pppppppuVar19,0);
    uStack_d7 = (undefined7)((ulong)pppppppuVar19 >> 8);
    unaff_x22 = (uint *******)0x8000000000000001;
  case 100:
    unaff_x27 = (uint *******)0x2;
    goto code_r0x00010046fdc8;
  case 0x5e:
    goto code_r0x00010046fcf8;
  case 0x5f:
    goto code_r0x00010046fcb8;
  case 0x61:
    goto code_r0x00010046fc8c;
  case 99:
    goto code_r0x00010046fc34;
  case 0x66:
    goto code_r0x00010046fc0c;
  case 0x67:
    goto code_r0x00010046fca0;
  case 0x6b:
    goto code_r0x00010046f98c;
  case 0x6c:
    goto code_r0x00010046f9d0;
  case 0x6e:
    goto LAB_10046fe24;
  case 0x6f:
    goto code_r0x00010046fe34;
  case 0x70:
    goto LAB_10046fdfc;
  case 0x71:
    goto code_r0x00010046fe14;
  case 0x72:
  case 0xc9:
  case 0xf2:
    goto code_r0x00010046fdc0;
  case 0x73:
    goto code_r0x00010046fe44;
  case 0x74:
    goto code_r0x00010046fe5c;
  case 0x75:
    goto code_r0x00010046fe1c;
  case 0x76:
    goto code_r0x00010046fe74;
  case 0x77:
  case 0xcb:
    goto code_r0x00010046fdf0;
  case 0x78:
    goto code_r0x00010046fe64;
  case 0x7a:
  case 0xcd:
    goto code_r0x00010046fdc8;
  case 0x7b:
    goto code_r0x00010046fe4c;
  case 0x7c:
    goto code_r0x00010046fd70;
  case 0x7d:
    goto code_r0x00010046fe04;
  case 0x80:
    goto code_r0x00010046fec4;
  case 0x82:
  case 0xad:
  case 0xf0:
    goto code_r0x00010046f9f8;
  case 0x9a:
    goto code_r0x00010046fd3c;
  case 0x9b:
    goto code_r0x00010046fd4c;
  case 0xa3:
    goto code_r0x00010046fd08;
  case 0xa8:
    goto code_r0x00010046fc88;
  case 0xa9:
  case 0xd4:
    goto code_r0x00010046fd1c;
  case 0xae:
    goto code_r0x00010046fa3c;
  case 0xb0:
  case 0xce:
  case 0xeb:
    goto code_r0x00010046fe20;
  case 0xb1:
  case 0xdf:
    goto code_r0x00010046fe30;
  case 0xb2:
  case 0xd3:
  case 0xf8:
    goto code_r0x00010046fdf8;
  case 0xb3:
  case 0xd0:
  case 0xfa:
    goto code_r0x00010046fe10;
  case 0xb5:
  case 0xdc:
    goto code_r0x00010046fe40;
  case 0xb6:
    goto code_r0x00010046fe58;
  case 0xb7:
  case 0xde:
    goto code_r0x00010046fe18;
  case 0xb8:
    goto code_r0x00010046fe70;
  case 0xba:
  case 0xe1:
    goto LAB_10046fe60;
  case 0xbd:
    goto code_r0x00010046fe48;
  case 0xbf:
  case 0xfc:
    goto code_r0x00010046fe00;
  case 0xc2:
    goto code_r0x00010046fec0;
  case 0xc3:
  case 0xd9:
    goto code_r0x00010046f9c4;
  case 0xc4:
  case 0xda:
    goto code_r0x00010046fa08;
  case 0xc6:
  case 0xf3:
    goto code_r0x00010046fdd0;
  case 199:
  case 0xf7:
    goto code_r0x00010046fde0;
  case 200:
    goto code_r0x00010046fda8;
  case 0xcc:
    goto code_r0x00010046fe08;
  case 0xd5:
  case 0xf5:
    goto code_r0x00010046fdb0;
  case 0xd8:
    goto code_r0x00010046fe54;
  case 0xdd:
    goto code_r0x00010046fe50;
  case 0xe2:
    goto code_r0x00010046fe78;
  case 0xe3:
    goto LAB_10046fe38;
  case 0xe4:
    goto code_r0x00010046fe90;
  case 0xe5:
    goto code_r0x00010046fe0c;
  case 0xe6:
    goto code_r0x00010046fe80;
  case 0xe8:
    goto code_r0x00010046fde4;
  case 0xe9:
    goto code_r0x00010046fe68;
  case 0xee:
    goto code_r0x00010046fee0;
  case 0xf9:
    goto code_r0x00010046fdb8;
  case 0xff:
    goto code_r0x00010046fde8;
  }
  ppppppuStack_1a0 = (uint ******)CONCAT71(ppppppuStack_1a0._1_7_,uVar15);
code_r0x0001004700c4:
  ppppppuVar13 = (uint ******)FUN_107c05dcc(&ppppppuStack_1a0,&pppppppuStack_88,&UNK_10b219b10);
  *param_5 = (uint ******)0x11;
  param_5[1] = ppppppuVar13;
  return;
}

