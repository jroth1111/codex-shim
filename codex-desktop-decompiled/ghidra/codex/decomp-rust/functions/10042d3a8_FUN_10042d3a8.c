
/* WARNING: Type propagation algorithm not settling */

void FUN_10042d3a8(ulong *******param_1,char *param_2,byte *param_3,undefined *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  char in_NG;
  byte in_ZR;
  char in_OV;
  ulong ******ppppppuVar8;
  uint uVar9;
  byte bVar10;
  undefined1 uVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  undefined8 uVar14;
  ulong *******pppppppuVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  ulong *******unaff_x19;
  ulong *******pppppppuVar18;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  int iVar19;
  ulong unaff_x23;
  ulong ******unaff_x25;
  ulong *******unaff_x26;
  ulong *******unaff_x27;
  ulong *******pppppppuVar20;
  ulong *******pppppppuVar21;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined8 unaff_x30;
  ulong uStack_250;
  ulong *******pppppppuStack_248;
  ulong *******pppppppuStack_240;
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
  ulong ******ppppppuStack_1d0;
  ulong *******pppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  undefined8 uStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong uStack_1a0;
  ulong ******ppppppuStack_190;
  ulong *******pppppppuStack_188;
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
  ulong ******ppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  undefined8 uStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulong ******ppppppuStack_80;
  byte abStack_71 [17];
  
  pppppppuVar21 = (ulong *******)&uStack_98;
  bVar10 = *param_3;
  pppppppuVar12 = (ulong *******)(ulong)bVar10;
  pppppppuVar15 = (ulong *******)&UNK_108c988d2;
  pppppppuVar16 =
       (ulong *******)
       (&UNK_10042d3ec + (ulong)*(ushort *)(&UNK_108c988d2 + (long)pppppppuVar12 * 2) * 4);
  puVar7 = &uStack_250;
  puVar6 = &uStack_250;
  pppppppuVar18 = (ulong *******)param_2;
  pppppppuVar13 = pppppppuVar12;
  pppppppuVar20 = unaff_x27;
  puVar22 = &stack0xfffffffffffffff0;
  switch(bVar10) {
  case 0:
    ppppppuStack_190 = (ulong ******)((ulong)CONCAT61(ppppppuStack_190._2_6_,param_3[1]) << 8);
  case 0x86:
    ppppppuStack_190 = (ulong ******)((ulong)ppppppuStack_190 & 0xffffffffffffff00);
    goto code_r0x00010042de28;
  case 1:
  case 0x93:
    pppppppuStack_188 = (ulong *******)(ulong)param_3[1];
    goto code_r0x00010042dddc;
  case 2:
    pppppppuStack_188 = (ulong *******)(ulong)*(ushort *)(param_3 + 2);
    goto code_r0x00010042dddc;
  case 3:
    pppppppuStack_188 = (ulong *******)(ulong)*(uint *)(param_3 + 4);
    goto code_r0x00010042dddc;
  case 4:
    pppppppuStack_188 = *(ulong ********)(param_3 + 8);
code_r0x00010042dddc:
    uVar11 = 1;
    break;
  case 5:
  case 0x87:
    pppppppuStack_188 = (ulong *******)(long)(char)param_3[1];
  case 0x91:
code_r0x00010042de20:
    uVar11 = 2;
    break;
  case 6:
    pppppppuStack_188 = (ulong *******)(long)*(short *)(param_3 + 2);
    goto code_r0x00010042de20;
  case 7:
    pppppppuVar12 = (ulong *******)(long)*(int *)(param_3 + 4);
  case 0x8d:
    pppppppuStack_188 = pppppppuVar12;
    goto code_r0x00010042de20;
  case 8:
  case 0x89:
    pppppppuStack_188 = *(ulong ********)(param_3 + 8);
    goto code_r0x00010042de20;
  case 9:
  case 0x88:
    param_1 = (ulong *******)(double)*(float *)(param_3 + 4);
  case 0x90:
code_r0x00010042de0c:
    uVar11 = 3;
    pppppppuStack_188 = param_1;
    break;
  case 10:
  case 0x85:
    param_1 = *(ulong ********)(param_3 + 8);
    goto code_r0x00010042de0c;
  case 0xb:
  case 0x94:
    param_3 = (byte *)(ulong)*(uint *)(param_3 + 4);
  case 0x92:
    puVar7 = (ulong *)&stack0xffffffffffffffa0;
    puVar22 = unaff_x29;
code_r0x00010042dd58:
    *(ulong ********)((long)puVar7 + 0x40) = unaff_x20;
    *(ulong ********)((long)puVar7 + 0x48) = unaff_x19;
    *(undefined1 **)((long)puVar7 + 0x50) = puVar22;
    *(undefined8 *)((long)puVar7 + 0x58) = unaff_x30;
    *(undefined4 *)((long)puVar7 + 0x1c) = 0;
    uVar9 = (uint)param_3;
    if (uVar9 < 0x80) {
      *(byte *)((long)puVar7 + 0x1c) = (byte)param_3;
      uVar14 = 1;
    }
    else {
      bVar10 = (byte)param_3 & 0x3f | 0x80;
      if (uVar9 < 0x800) {
        *(byte *)((long)puVar7 + 0x1c) = (byte)(uVar9 >> 6) | 0xc0;
        *(byte *)((long)puVar7 + 0x1d) = bVar10;
        uVar14 = 2;
      }
      else {
        bVar4 = (byte)(uVar9 >> 6) & 0x3f | 0x80;
        if (uVar9 < 0x10000) {
          *(byte *)((long)puVar7 + 0x1c) = (byte)(uVar9 >> 0xc) | 0xe0;
          *(byte *)((long)puVar7 + 0x1d) = bVar4;
          *(byte *)((long)puVar7 + 0x1e) = bVar10;
          uVar14 = 3;
        }
        else {
          *(byte *)((long)puVar7 + 0x1c) = (byte)(uVar9 >> 0x12) | 0xf0;
          *(byte *)((long)puVar7 + 0x1d) = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)puVar7 + 0x1e) = bVar4;
          *(byte *)((long)puVar7 + 0x1f) = bVar10;
          uVar14 = 4;
        }
      }
    }
    *(undefined1 **)((long)puVar7 + 0x28) = (undefined1 *)((long)puVar7 + 0x1c);
    *(undefined8 *)((long)puVar7 + 0x30) = uVar14;
    *(undefined1 *)((long)puVar7 + 0x20) = 5;
    ppppppuVar8 = (ulong ******)
                  func_0x000108a4a50c((undefined1 *)((long)puVar7 + 0x20),
                                      (undefined1 *)((long)puVar7 + 0x3f),&UNK_10b219b70);
    *(ulong *******)param_2 = (ulong ******)0x11;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar8;
    return;
  case 0xc:
  case 0x8f:
    uVar14 = *(undefined8 *)(param_3 + 0x10);
    ppppppuVar8 = (ulong ******)
                  func_0x000108a4a50c(&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,
                                      &UNK_10b219b70);
    *(ulong *******)param_2 = (ulong ******)0x11;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar8;
    if (*(long *)(param_3 + 8) != 0) {
      _free(uVar14);
    }
    return;
  case 0xd:
  case 0x8b:
    pppppppuStack_188 = *(ulong ********)(param_3 + 8);
    ppppppuStack_180 = *(ulong *******)(param_3 + 0x10);
  case 0x84:
    uVar11 = 5;
    break;
  case 0xe:
    param_3 = param_3 + 8;
    puVar6 = (ulong *)&stack0xffffffffffffffa0;
    puVar22 = unaff_x29;
  case 0xac:
    *(ulong ********)((long)puVar6 + 0x30) = unaff_x22;
    *(ulong ********)((long)puVar6 + 0x38) = unaff_x21;
    *(ulong ********)((long)puVar6 + 0x40) = unaff_x20;
    *(ulong ********)((long)puVar6 + 0x48) = unaff_x19;
    *(undefined1 **)((long)puVar6 + 0x50) = puVar22;
    *(undefined8 *)((long)puVar6 + 0x58) = unaff_x30;
    uVar14 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)((long)puVar6 + 0x18) = uVar14;
    *(undefined8 *)((long)puVar6 + 0x20) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x10) = 6;
    ppppppuVar8 = (ulong ******)
                  func_0x000108a4a50c((undefined1 *)((long)puVar6 + 0x10),
                                      (undefined1 *)((long)puVar6 + 0x2f),&UNK_10b219b70);
    *(ulong *******)param_2 = (ulong ******)0x11;
    *(ulong *******)((long)param_2 + 8) = ppppppuVar8;
    if (*(long *)param_3 != 0) {
      _free(uVar14);
    }
    return;
  case 0xf:
    pppppppuStack_188 = *(ulong ********)(param_3 + 8);
    ppppppuStack_180 = *(ulong *******)(param_3 + 0x10);
    uVar11 = 6;
    break;
  case 0x10:
    uVar11 = 8;
    break;
  default:
    pppppppuVar18 = *(ulong ********)(param_3 + 8);
    pppppppuStack_188 = (ulong *******)pppppppuVar18[1];
    ppppppuStack_190 = *pppppppuVar18;
    ppppppuStack_178 = pppppppuVar18[3];
    ppppppuStack_180 = pppppppuVar18[2];
    func_0x000107c04824(param_2,&ppppppuStack_190);
  case 0x98:
code_r0x00010042d4c0:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppuVar18);
    return;
  case 0x12:
  case 0x8c:
    uVar11 = 7;
    break;
  case 0x13:
    pppppppuVar18 = *(ulong ********)(param_3 + 8);
    pppppppuStack_188 = (ulong *******)pppppppuVar18[1];
    ppppppuStack_190 = *pppppppuVar18;
    ppppppuStack_178 = pppppppuVar18[3];
    ppppppuStack_180 = pppppppuVar18[2];
    func_0x000107c054d8(param_2,&ppppppuStack_190);
    goto code_r0x00010042d4c0;
  case 0x14:
    unaff_x25 = *(ulong *******)(param_3 + 8);
    unaff_x19 = *(ulong ********)(param_3 + 0x10);
    unaff_x27 = *(ulong ********)(param_3 + 0x18);
    unaff_x22 = unaff_x19 + (long)unaff_x27 * 4;
    pppppppuStack_1c0 = (ulong *******)0x0;
    unaff_x20 = unaff_x19;
    pppppppuStack_1e0 = unaff_x19;
    ppppppuStack_1d0 = unaff_x25;
    pppppppuStack_1c8 = unaff_x22;
    if (unaff_x27 != (ulong *******)0x0) {
      unaff_x20 = unaff_x19 + 4;
      bVar10 = *(byte *)unaff_x19;
      pppppppuStack_1d8 = unaff_x20;
      if (bVar10 != 0x16) goto code_r0x00010042da7c;
    }
    pppppppuStack_1d8 = unaff_x20;
    unaff_x21 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22b8f8,&UNK_10b20a590);
    goto code_r0x00010042d520;
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
    uStack_1b0 = *(undefined8 *)(param_3 + 8);
    pppppppuStack_1c0 = *(ulong ********)(param_3 + 0x10);
    lVar17 = *(long *)(param_3 + 0x18);
    unaff_x22 = pppppppuStack_1c0 + lVar17 * 8;
    unaff_x21 = (ulong *******)&pppppppuStack_1e0;
    pppppppuStack_1e0 = (ulong *******)CONCAT71(pppppppuStack_1e0._1_7_,0x16);
    uStack_1a0 = 0;
    unaff_x20 = (ulong *******)0x8000000000000000;
    pppppppuStack_c8 = (ulong *******)0x8000000000000000;
    pppppppuStack_1b8 = pppppppuStack_1c0;
    pppppppuStack_1a8 = unaff_x22;
    if (lVar17 == 0) {
      pppppppuStack_c8 = (ulong *******)0x8000000000000000;
      goto code_r0x00010042da64;
    }
    unaff_x23 = 0;
    unaff_x27 = (ulong *******)((ulong)&uStack_98 | 1);
    unaff_x19 = (ulong *******)((ulong)unaff_x21 | 1);
    uStack_250 = (lVar17 * 0x40 - 0x40U >> 6) + 1;
    pppppppuVar21 = pppppppuStack_1c0 + 8;
    pppppppuVar16 = (ulong *******)0x8000000000000001;
    pppppppuStack_1f0 = (ulong *******)0x8000000000000000;
    pppppppuStack_1e8 = (ulong *******)0x8000000000000000;
    pppppppuStack_230 = (ulong *******)param_2;
  case 0x97:
    pppppppuStack_1f8 = (ulong *******)0x8000000000000000;
    unaff_x21 = (ulong *******)0x8000000000000000;
    pppppppuStack_200 = pppppppuVar16;
    do {
      param_2 = (char *)(pppppppuVar21 + -8);
      bVar10 = *param_2;
      if (bVar10 == 0x16) goto code_r0x00010042db68;
      uStack_98._0_1_ = bVar10;
      ppppppuVar8 = pppppppuVar21[-6];
      *(ulong *******)((long)unaff_x27 + 0x17) = pppppppuVar21[-5];
      *(ulong *******)((long)unaff_x27 + 0xf) = ppppppuVar8;
      ppppppuVar8 = *(ulong *******)((long)pppppppuVar21 + -0x3f);
      unaff_x27[1] = *(ulong *******)((long)pppppppuVar21 + -0x37);
      *unaff_x27 = ppppppuVar8;
      pppppppuStack_1d8 = (ulong *******)pppppppuVar21[-3];
      pppppppuStack_1e0 = (ulong *******)pppppppuVar21[-4];
      pppppppuStack_1c8 = (ulong *******)pppppppuVar21[-1];
      ppppppuStack_1d0 = pppppppuVar21[-2];
      unaff_x25 = (ulong ******)CONCAT71(uStack_8f,uStack_90);
      unaff_x26 = (ulong *******)CONCAT71(uStack_87,uStack_88);
      pppppppuVar18 = (ulong *******)param_2;
      if (bVar10 < 0xd) {
        if (bVar10 == 1) {
          bVar10 = uStack_98._1_1_;
          if (3 < uStack_98._1_1_) {
            bVar10 = 4;
          }
          goto code_r0x00010042d818;
        }
        if (bVar10 == 4) {
          if ((ulong ******)0x3 < unaff_x25) {
            unaff_x25 = (ulong ******)0x4;
          }
          uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,(char)unaff_x25);
          goto code_r0x00010042d81c;
        }
        if (bVar10 == 0xc) {
          if ((long)ppppppuStack_80 < 7) {
            if (ppppppuStack_80 == (ulong ******)0x5) {
              if (*(int *)unaff_x26 == 0x6c6f6f74 && *(byte *)((long)unaff_x26 + 4) == 0x73) {
                uStack_b0 = (ulong *******)CONCAT62(uStack_b0._2_6_,0x300);
                param_2 = (char *)unaff_x26;
              }
              else {
code_r0x00010042d7a8:
                uStack_b0 = (ulong *******)CONCAT62(uStack_b0._2_6_,0x400);
                param_2 = (char *)unaff_x26;
              }
            }
            else {
              if ((ppppppuStack_80 != (ulong ******)0x6) ||
                 (*(int *)unaff_x26 != 0x74617473 || *(short *)((long)unaff_x26 + 4) != 0x7375))
              goto code_r0x00010042d7a8;
              uStack_b0 = (ulong *******)CONCAT62(uStack_b0._2_6_,0x100);
              param_2 = (char *)unaff_x26;
            }
          }
          else if (ppppppuStack_80 == (ulong ******)0x9) {
            if (*unaff_x26 != (ulong ******)0x6f69747563657865 || *(byte *)(unaff_x26 + 1) != 0x6e)
            goto code_r0x00010042d7a8;
            uStack_b0 = (ulong *******)CONCAT62(uStack_b0._2_6_,0x200);
code_r0x00010042da2c:
            pppppppuVar18 = (ulong *******)param_2;
            param_2 = (char *)unaff_x26;
          }
          else {
            if ((ppppppuStack_80 != (ulong ******)0x7) ||
               (*(int *)unaff_x26 != 0x6c6c6163 || *(int *)((long)unaff_x26 + 3) != 0x64695f6c))
            goto code_r0x00010042d7a8;
            uStack_b0 = (ulong *******)((ulong)uStack_b0._2_6_ << 0x10);
            param_2 = (char *)unaff_x26;
          }
joined_r0x00010042da2c:
          if (unaff_x25 != (ulong ******)0x0) {
code_r0x00010042d7bc:
            _free(param_2);
          }
        }
        else {
code_r0x00010042da3c:
          param_2 = (char *)&uStack_98;
          param_3 = abStack_71;
          param_4 = &UNK_10b20d560;
code_r0x00010042da4c:
          pppppppuStack_a8 = (ulong *******)thunk_FUN_108855b04(param_2,param_3,param_4);
          uStack_b0 = (ulong *******)CONCAT71(uStack_b0._1_7_,1);
code_r0x00010042da5c:
        }
      }
      else {
        if (bVar10 == 0xd) {
          if ((long)unaff_x26 < 7) {
            if (unaff_x26 == (ulong *******)0x5) {
              if (*(int *)unaff_x25 == 0x6c6f6f74 && *(char *)((long)unaff_x25 + 4) == 's') {
                bVar10 = 3;
              }
              else {
code_r0x00010042d814:
                bVar10 = 4;
              }
            }
            else {
              if ((unaff_x26 != (ulong *******)0x6) ||
                 (*(int *)unaff_x25 != 0x74617473 || *(short *)((long)unaff_x25 + 4) != 0x7375))
              goto code_r0x00010042d814;
              bVar10 = 1;
            }
          }
          else if (unaff_x26 == (ulong *******)0x9) {
            pppppppuVar12 = (ulong *******)*unaff_x25;
            pppppppuVar15 = (ulong *******)(ulong)*(byte *)(unaff_x25 + 1);
code_r0x00010042d7f4:
            pppppppuVar16 = (ulong *******)0x747563657865;
code_r0x00010042d800:
            if (pppppppuVar12 != (ulong *******)((ulong)pppppppuVar16 | 0x6f69000000000000) ||
                (int)pppppppuVar15 != 0x6e) goto code_r0x00010042d814;
code_r0x00010042da34:
            bVar10 = 2;
          }
          else {
            if ((unaff_x26 != (ulong *******)0x7) ||
               (*(int *)unaff_x25 != 0x6c6c6163 || *(int *)((long)unaff_x25 + 3) != 0x64695f6c))
            goto code_r0x00010042d814;
            bVar10 = 0;
          }
code_r0x00010042d818:
          uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar10);
code_r0x00010042d81c:
          uStack_b0 = (ulong *******)((ulong)uStack_b0._1_7_ << 8);
        }
        else {
          if (bVar10 == 0xe) {
            func_0x000100ac3f68(&uStack_b0,unaff_x26);
            param_2 = (char *)unaff_x26;
            goto joined_r0x00010042da2c;
          }
          if (bVar10 != 0xf) goto code_r0x00010042da3c;
          func_0x000100ac3f68(&uStack_b0,unaff_x25,unaff_x26);
        }
        FUN_100e077ec(&uStack_98);
        pppppppuVar18 = (ulong *******)param_2;
      }
      if (((ulong)uStack_b0 & 1) != 0) {
        uStack_1a0 = unaff_x23 + 1;
        pppppppuStack_c0 = pppppppuStack_208;
        pppppppuStack_b8 = pppppppuStack_218;
        unaff_x22 = pppppppuStack_218;
        pppppppuStack_1b8 = pppppppuVar21;
        pppppppuStack_c8 = unaff_x21;
        goto code_r0x00010042db28;
      }
code_r0x00010042d830:
      pppppppuVar12 = (ulong *******)(ulong)uStack_b0._1_1_;
      uVar9 = (uint)uStack_b0._1_1_;
      in_OV = SBORROW4(uVar9,1);
      in_NG = (int)(uVar9 - 1) < 0;
      in_ZR = uVar9 == 1;
      pppppppuVar20 = unaff_x27;
code_r0x00010042d838:
      unaff_x27 = pppppppuStack_1f8;
      unaff_x26 = pppppppuStack_200;
      if ((bool)in_ZR || in_NG != in_OV) {
code_r0x00010042d8b4:
        unaff_x27 = pppppppuStack_1f8;
        unaff_x26 = pppppppuStack_200;
        bVar10 = (byte)pppppppuStack_1e0;
        if ((int)pppppppuVar12 == 0) {
          if (pppppppuStack_200 != (ulong *******)0x8000000000000001) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            uStack_b0 = (ulong *******)&UNK_108caaafb;
            pppppppuStack_a8 = (ulong *******)0x7;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            ppppppuVar8 = (ulong ******)
                          thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            unaff_x22 = pppppppuStack_218;
LAB_10042e37c:
            *pppppppuStack_230 = (ulong ******)0x11;
            pppppppuStack_230[1] = ppppppuVar8;
            unaff_x19 = (ulong *******)0x1;
            unaff_x25 = (ulong ******)0x1;
            unaff_x23 = 1;
            goto LAB_10042db48;
          }
          pppppppuStack_1e0 = (ulong *******)CONCAT71(pppppppuStack_1e0._1_7_,0x16);
          if (bVar10 == 0x16) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010042e508;
          }
          ppppppuVar8 = *unaff_x19;
          pppppppuVar20[1] = unaff_x19[1];
          *pppppppuVar20 = ppppppuVar8;
          uVar14 = *(undefined8 *)((long)unaff_x19 + 0xf);
          *(undefined8 *)((long)pppppppuVar20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
          *(undefined8 *)((long)pppppppuVar20 + 0xf) = uVar14;
          uStack_98._0_1_ = bVar10;
          pppppppuStack_200 = (ulong *******)0x8000000000000001;
          unaff_x27 = pppppppuVar20;
code_r0x00010042d8f8:
          FUN_1004b60cc(&uStack_b0,&uStack_98);
          pppppppuStack_200 = uStack_b0;
          if (uStack_b0 == (ulong *******)0x8000000000000001) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            *pppppppuStack_230 = (ulong ******)0x11;
            pppppppuStack_230[1] = (ulong ******)pppppppuStack_a8;
            unaff_x19 = (ulong *******)0x1;
            unaff_x26 = (ulong *******)0x8000000000000001;
            unaff_x25 = (ulong ******)0x1;
            unaff_x23 = 1;
            unaff_x22 = pppppppuStack_218;
            unaff_x27 = pppppppuStack_1f8;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            goto LAB_10042db48;
          }
          pppppppuStack_228 = pppppppuStack_a8;
          uStack_238 = pppppppuStack_a0;
        }
        else {
          if (pppppppuStack_1e8 != unaff_x20) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            uStack_b0 = (ulong *******)&UNK_108ca105e;
            pppppppuStack_a8 = (ulong *******)0x6;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            ppppppuVar8 = (ulong ******)
                          thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            unaff_x22 = pppppppuStack_218;
            goto LAB_10042e37c;
          }
          pppppppuStack_1e0 = (ulong *******)CONCAT71(pppppppuStack_1e0._1_7_,0x16);
          if (bVar10 == 0x16) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_1e8 = (ulong *******)0x8000000000000000;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010042e508;
          }
code_r0x00010042d9d8:
          ppppppuVar8 = *unaff_x19;
          pppppppuVar20[1] = unaff_x19[1];
          *pppppppuVar20 = ppppppuVar8;
code_r0x00010042d9e0:
          uVar14 = *(undefined8 *)((long)unaff_x19 + 0xf);
          *(undefined8 *)((long)pppppppuVar20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
          *(undefined8 *)((long)pppppppuVar20 + 0xf) = uVar14;
          pppppppuStack_1e8 = (ulong *******)0x8000000000000000;
          uStack_98._0_1_ = bVar10;
          FUN_1004b62d4(&uStack_b0,&uStack_98);
          pppppppuStack_1e8 = uStack_b0;
          pppppppuVar13 = uStack_b0;
code_r0x00010042da08:
          pppppppuVar12 = pppppppuStack_a0;
          pppppppuVar15 = pppppppuStack_a8;
          if (pppppppuVar13 == unaff_x20) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_b8 = pppppppuStack_218;
            pppppppuStack_c0 = pppppppuStack_208;
            *pppppppuStack_230 = (ulong ******)0x11;
            pppppppuStack_230[1] = (ulong ******)pppppppuStack_a8;
            unaff_x19 = (ulong *******)0x1;
            pppppppuStack_1e8 = (ulong *******)0x8000000000000000;
            unaff_x22 = pppppppuStack_218;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            goto code_r0x00010042db3c;
          }
code_r0x00010042da14:
          unaff_x27 = pppppppuVar20;
          pppppppuStack_240 = pppppppuVar12;
          pppppppuStack_210 = pppppppuVar15;
code_r0x00010042da1c:
        }
      }
      else {
        bVar10 = (byte)pppppppuStack_1e0;
        if ((int)pppppppuVar12 == 2) {
          if (pppppppuStack_1f8 != unaff_x20) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            uStack_b0 = (ulong *******)&UNK_108cae4ad;
            pppppppuStack_a8 = (ulong *******)0x9;
            uStack_98._0_1_ = (byte)&uStack_b0;
            uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
            uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            ppppppuVar8 = (ulong ******)
                          thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
            unaff_x22 = pppppppuStack_218;
            goto LAB_10042e37c;
          }
          pppppppuStack_1e0 = (ulong *******)CONCAT71(pppppppuStack_1e0._1_7_,0x16);
          if (bVar10 == 0x16) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_c0 = pppppppuStack_208;
            pppppppuStack_b8 = pppppppuStack_218;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010042e508;
          }
          ppppppuVar8 = *unaff_x19;
          pppppppuVar20[1] = unaff_x19[1];
          *pppppppuVar20 = ppppppuVar8;
          uVar14 = *(undefined8 *)((long)unaff_x19 + 0xf);
          *(undefined8 *)((long)pppppppuVar20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
          *(undefined8 *)((long)pppppppuVar20 + 0xf) = uVar14;
          uStack_98._0_1_ = bVar10;
          pppppppuStack_1f8 = (ulong *******)0x8000000000000000;
          FUN_1004b62d4(&uStack_b0,&uStack_98);
          pppppppuStack_1f8 = uStack_b0;
          if (uStack_b0 == unaff_x20) {
            uStack_1a0 = unaff_x23 + 1;
            pppppppuStack_b8 = pppppppuStack_218;
            pppppppuStack_c0 = pppppppuStack_208;
            *pppppppuStack_230 = (ulong ******)0x11;
            pppppppuStack_230[1] = (ulong ******)pppppppuStack_a8;
            unaff_x19 = (ulong *******)0x1;
            unaff_x27 = (ulong *******)0x0;
            unaff_x25 = (ulong ******)0x1;
            unaff_x23 = 1;
            unaff_x22 = pppppppuStack_218;
            unaff_x26 = pppppppuStack_200;
            pppppppuStack_1b8 = pppppppuVar21;
            pppppppuStack_c8 = unaff_x21;
            goto LAB_10042db48;
          }
          pppppppuStack_220 = pppppppuStack_a8;
          pppppppuStack_248 = pppppppuStack_a0;
code_r0x00010042d980:
          unaff_x27 = pppppppuVar20;
        }
        else {
          pppppppuVar13 = pppppppuStack_1f0;
          if ((int)pppppppuVar12 == 3) {
code_r0x00010042d850:
            unaff_x27 = pppppppuStack_1f8;
            unaff_x26 = pppppppuStack_200;
            if (pppppppuVar13 != unaff_x20) {
              uStack_1a0 = unaff_x23 + 1;
              pppppppuStack_c0 = pppppppuStack_208;
              pppppppuStack_b8 = pppppppuStack_218;
              uStack_b0 = (ulong *******)&UNK_108ca26d4;
              pppppppuStack_a8 = (ulong *******)0x5;
              uStack_98._0_1_ = (byte)&uStack_b0;
              uStack_98._1_1_ = (byte)((ulong)&uStack_b0 >> 8);
              uStack_98._2_6_ = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_90 = 0xa0;
              uStack_8f = 0x100c7b3;
              pppppppuStack_1b8 = pppppppuVar21;
              pppppppuStack_c8 = unaff_x21;
              ppppppuVar8 = (ulong ******)
                            thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_98);
              *pppppppuStack_230 = (ulong ******)0x11;
              pppppppuStack_230[1] = ppppppuVar8;
              unaff_x23 = 1;
              unaff_x25 = (ulong ******)0x1;
              unaff_x19 = (ulong *******)0x1;
              unaff_x21 = (ulong *******)&pppppppuStack_1e0;
              unaff_x22 = pppppppuStack_218;
              pppppppuVar21 = pppppppuStack_1f0;
              goto LAB_10042dc0c;
            }
code_r0x00010042d858:
            bVar10 = (byte)pppppppuStack_1e0;
            pppppppuStack_1e0 = (ulong *******)CONCAT71(pppppppuStack_1e0._1_7_,0x16);
            if (bVar10 == 0x16) {
              uStack_1a0 = unaff_x23 + 1;
              pppppppuStack_1f0 = (ulong *******)0x8000000000000000;
              pppppppuStack_c0 = pppppppuStack_208;
              pppppppuStack_b8 = pppppppuStack_218;
              pppppppuStack_1b8 = pppppppuVar21;
              pppppppuStack_c8 = unaff_x21;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x00010042e508;
            }
            ppppppuVar8 = *unaff_x19;
            pppppppuVar20[1] = unaff_x19[1];
            *pppppppuVar20 = ppppppuVar8;
code_r0x00010042d874:
            uVar14 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)pppppppuVar20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)pppppppuVar20 + 0xf) = uVar14;
            pppppppuStack_1f0 = (ulong *******)0x8000000000000000;
            uStack_98._0_1_ = bVar10;
            func_0x00010132fb4c(&uStack_b0,&uStack_98);
code_r0x00010042d894:
            if (uStack_b0 == unaff_x20) {
              uStack_1a0 = unaff_x23 + 1;
              *pppppppuStack_230 = (ulong ******)0x11;
              pppppppuStack_230[1] = (ulong ******)pppppppuStack_a8;
              iVar19 = 1;
              uVar9 = 1;
              unaff_x19 = (ulong *******)0x1;
              unaff_x21 = (ulong *******)&pppppppuStack_1e0;
              unaff_x26 = pppppppuStack_200;
              unaff_x27 = pppppppuStack_1f8;
              pppppppuStack_1b8 = pppppppuVar21;
              goto LAB_10042dfac;
            }
            pppppppuStack_208 = pppppppuStack_a8;
            pppppppuStack_218 = pppppppuStack_a0;
            unaff_x21 = uStack_b0;
            unaff_x27 = pppppppuVar20;
            pppppppuStack_1f0 = uStack_b0;
          }
          else {
            pppppppuVar12 = (ulong *******)((ulong)pppppppuStack_1e0 & 0xff);
code_r0x00010042d988:
            pppppppuStack_1e0 = (ulong *******)CONCAT71(pppppppuStack_1e0._1_7_,0x16);
            if ((int)pppppppuVar12 == 0x16) {
              uStack_1a0 = unaff_x23 + 1;
              pppppppuStack_c0 = pppppppuStack_208;
              pppppppuStack_b8 = pppppppuStack_218;
              pppppppuStack_1b8 = pppppppuVar21;
              pppppppuStack_c8 = unaff_x21;
              FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010042e508:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10042e50c);
              (*pcVar5)();
            }
            ppppppuVar8 = *unaff_x19;
            pppppppuVar20[1] = unaff_x19[1];
            *pppppppuVar20 = ppppppuVar8;
            uVar14 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)pppppppuVar20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)pppppppuVar20 + 0xf) = uVar14;
            uStack_98._0_1_ = (byte)pppppppuVar12;
            param_2 = (char *)&uStack_98;
code_r0x00010042d9b0:
            FUN_100e077ec(param_2);
            unaff_x27 = pppppppuVar20;
          }
        }
      }
      pppppppuVar21 = pppppppuVar21 + 8;
      unaff_x23 = unaff_x23 + 1;
    } while (pppppppuVar18 + 8 != unaff_x22);
code_r0x00010042db60:
    pppppppuVar21 = unaff_x22;
code_r0x00010042db64:
    unaff_x23 = uStack_250;
code_r0x00010042db68:
    pppppppuStack_1b8 = pppppppuVar21;
code_r0x00010042db6c:
    unaff_x22 = pppppppuStack_218;
    uStack_1a0 = unaff_x23;
code_r0x00010042db74:
    pppppppuVar12 = pppppppuStack_208;
    unaff_x26 = pppppppuStack_200;
code_r0x00010042db78:
    pppppppuStack_c0 = pppppppuVar12;
    pppppppuStack_b8 = unaff_x22;
code_r0x00010042db7c:
    pppppppuStack_c8 = unaff_x21;
code_r0x00010042db80:
    pppppppuVar15 = (ulong *******)0x8000000000000001;
code_r0x00010042db84:
    pppppppuVar12 = (ulong *******)0x8000000000000000;
    in_ZR = unaff_x26 == pppppppuVar15;
code_r0x00010042db8c:
    unaff_x20 = pppppppuVar12;
    if (!(bool)in_ZR) {
      unaff_x20 = unaff_x26;
    }
code_r0x00010042db90:
    unaff_x23 = (ulong)in_ZR;
code_r0x00010042db94:
    in_ZR = pppppppuStack_1e8 == pppppppuVar12;
code_r0x00010042db9c:
    param_2 = (char *)pppppppuStack_230;
code_r0x00010042dba0:
    unaff_x27 = pppppppuStack_1f8;
code_r0x00010042dba4:
    if ((bool)in_ZR) {
code_r0x00010042dba8:
      unaff_x21 = (ulong *******)&pppppppuStack_1e0;
code_r0x00010042dbac:
      pppppppuVar12 = (ulong *******)&UNK_108ca105e;
code_r0x00010042dbb4:
      pppppppuVar15 = (ulong *******)0x6;
      pppppppuVar13 = pppppppuVar12;
code_r0x00010042dbb8:
      pppppppuVar12 = (ulong *******)&uStack_b0;
      uStack_b0 = pppppppuVar13;
      pppppppuStack_a8 = pppppppuVar15;
code_r0x00010042dbc0:
      pppppppuVar15 = (ulong *******)&UNK_100c7b000;
      pppppppuVar18 = (ulong *******)param_2;
code_r0x00010042dbc4:
      uStack_98._0_1_ = (byte)pppppppuVar12;
      uStack_98._1_1_ = (byte)((ulong)pppppppuVar12 >> 8);
      uStack_98._2_6_ = (undefined6)((ulong)pppppppuVar12 >> 0x10);
      uStack_90 = SUB81(pppppppuVar15 + 0x74,0);
      uStack_8f = (undefined7)((ulong)(pppppppuVar15 + 0x74) >> 8);
      param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010042dbd0:
      param_2 = (char *)((long)param_2 + 0x8f7);
code_r0x00010042dbd4:
      param_3 = (byte *)&uStack_98;
code_r0x00010042dbd8:
      param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
code_r0x00010042dbdc:
      *pppppppuVar18 = (ulong ******)0x11;
      pppppppuVar18[1] = (ulong ******)param_2;
code_r0x00010042dbe4:
      pppppppuVar12 = (ulong *******)0x8000000000000000;
code_r0x00010042dbe8:
      pppppppuStack_1e8 = pppppppuVar12;
code_r0x00010042dbec:
      unaff_x25 = (ulong ******)0x1;
      unaff_x19 = (ulong *******)0x1;
    }
    else {
code_r0x00010042dc58:
      in_ZR = unaff_x27 == pppppppuVar12;
code_r0x00010042dc5c:
      unaff_x19 = (ulong *******)(ulong)in_ZR;
code_r0x00010042dc60:
      unaff_x21 = (ulong *******)&pppppppuStack_1e0;
code_r0x00010042dc64:
      pppppppuVar15 = pppppppuStack_1f0;
      if ((bool)in_ZR) {
        pppppppuVar12 = (ulong *******)&UNK_108cae000;
code_r0x00010042dc6c:
        uStack_b0 = (ulong *******)((long)pppppppuVar12 + 0x4ad);
        pppppppuStack_a8 = (ulong *******)0x9;
        pppppppuVar12 = (ulong *******)&uStack_b0;
code_r0x00010042dc7c:
        pppppppuVar15 = (ulong *******)&DAT_100c7b3a0;
        pppppppuVar18 = (ulong *******)param_2;
code_r0x00010042dc84:
        uStack_98._0_1_ = (byte)pppppppuVar12;
        uStack_98._1_1_ = (byte)((ulong)pppppppuVar12 >> 8);
        uStack_98._2_6_ = (undefined6)((ulong)pppppppuVar12 >> 0x10);
        uStack_90 = SUB81(pppppppuVar15,0);
        uStack_8f = (undefined7)((ulong)pppppppuVar15 >> 8);
        param_2 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010042dc8c:
        param_2 = (char *)((long)param_2 + 0x8f7);
code_r0x00010042dc90:
        param_2 = (char *)thunk_FUN_108856088(param_2,&uStack_98);
code_r0x00010042dc98:
        pppppppuVar12 = (ulong *******)0x11;
code_r0x00010042dc9c:
        *pppppppuVar18 = (ulong ******)pppppppuVar12;
        pppppppuVar18[1] = (ulong ******)param_2;
code_r0x00010042dca0:
        pppppppuVar12 = pppppppuStack_1e8;
      }
      else {
code_r0x00010042dca8:
        in_ZR = pppppppuVar15 == pppppppuVar12;
code_r0x00010042dcac:
        if (!(bool)in_ZR) {
          *(ulong *******)param_2 = (ulong ******)0xa;
          *(ulong ********)((long)param_2 + 8) = pppppppuStack_1e8;
          *(ulong ********)((long)param_2 + 0x10) = pppppppuStack_210;
          *(ulong ********)((long)param_2 + 0x18) = pppppppuStack_240;
          *(ulong ********)((long)param_2 + 0x20) = unaff_x27;
          pppppppuVar12 = pppppppuStack_248;
code_r0x00010042de78:
          *(ulong ********)((long)param_2 + 0x28) = pppppppuStack_220;
          *(ulong ********)((long)param_2 + 0x30) = pppppppuVar12;
          *(ulong ********)((long)param_2 + 0x38) = pppppppuVar15;
          *(ulong ********)((long)param_2 + 0x40) = pppppppuStack_208;
          *(ulong ********)((long)param_2 + 0x48) = unaff_x22;
          *(ulong ********)((long)param_2 + 0x50) = unaff_x20;
          *(ulong ********)((long)param_2 + 0x58) = pppppppuStack_228;
          *(ulong ********)((long)param_2 + 0x60) = uStack_238;
          pppppppuStack_188 = *(ulong ********)((long)param_2 + 8);
          ppppppuStack_190 = *(ulong *******)param_2;
          ppppppuStack_178 = *(ulong *******)((long)param_2 + 0x18);
          ppppppuStack_180 = *(ulong *******)((long)param_2 + 0x10);
          ppppppuStack_168 = *(ulong *******)((long)param_2 + 0x28);
          ppppppuStack_170 = *(ulong *******)((long)param_2 + 0x20);
          ppppppuStack_158 = *(ulong *******)((long)param_2 + 0x38);
          ppppppuStack_160 = *(ulong *******)((long)param_2 + 0x30);
          ppppppuStack_148 = *(ulong *******)((long)param_2 + 0x48);
          ppppppuStack_150 = *(ulong *******)((long)param_2 + 0x40);
          ppppppuStack_138 = *(ulong *******)((long)param_2 + 0x58);
          ppppppuStack_140 = *(ulong *******)((long)param_2 + 0x50);
          ppppppuStack_128 = *(ulong *******)((long)param_2 + 0x68);
          ppppppuStack_130 = *(ulong *******)((long)param_2 + 0x60);
          ppppppuStack_118 = *(ulong *******)((long)param_2 + 0x78);
          ppppppuStack_120 = *(ulong *******)((long)param_2 + 0x70);
          ppppppuStack_108 = *(ulong *******)((long)param_2 + 0x88);
          ppppppuStack_110 = *(ulong *******)((long)param_2 + 0x80);
          ppppppuStack_f8 = *(ulong *******)((long)param_2 + 0x98);
          ppppppuStack_100 = *(ulong *******)((long)param_2 + 0x90);
          ppppppuStack_e8 = *(ulong *******)((long)param_2 + 0xa8);
          ppppppuStack_f0 = *(ulong *******)((long)param_2 + 0xa0);
          ppppppuStack_d8 = *(ulong *******)((long)param_2 + 0xb8);
          ppppppuStack_e0 = *(ulong *******)((long)param_2 + 0xb0);
          ppppppuVar8 = (ulong ******)FUN_100fbc67c(&pppppppuStack_1e0);
          goto code_r0x00010042ded0;
        }
code_r0x00010042dcb0:
        pppppppuVar12 = (ulong *******)&UNK_108ca2000;
code_r0x00010042dcb4:
        pppppppuVar13 = (ulong *******)((long)pppppppuVar12 + 0x6d4);
code_r0x00010042dcb8:
        pppppppuStack_a8 = (ulong *******)0x5;
        pppppppuVar12 = (ulong *******)&uStack_b0;
        uStack_b0 = pppppppuVar13;
code_r0x00010042dcc4:
        pppppppuVar15 = (ulong *******)&UNK_100c7b000;
code_r0x00010042dcc8:
        pppppppuVar15 = pppppppuVar15 + 0x74;
        pppppppuVar18 = (ulong *******)param_2;
code_r0x00010042dccc:
        uStack_98._0_1_ = (byte)pppppppuVar12;
        uStack_98._1_1_ = (byte)((ulong)pppppppuVar12 >> 8);
        uStack_98._2_6_ = (undefined6)((ulong)pppppppuVar12 >> 0x10);
        uStack_90 = SUB81(pppppppuVar15,0);
        uStack_8f = (undefined7)((ulong)pppppppuVar15 >> 8);
        param_2 = s_missing_field_____108ac28f7;
code_r0x00010042dcd8:
        param_3 = (byte *)&uStack_98;
code_r0x00010042dcdc:
        param_2 = (char *)thunk_FUN_108856088(param_2,param_3);
code_r0x00010042dce0:
        *pppppppuVar18 = (ulong ******)0x11;
        pppppppuVar18[1] = (ulong ******)param_2;
        param_2 = (char *)pppppppuStack_220;
        pppppppuVar12 = pppppppuStack_1e8;
        if (unaff_x27 != (ulong *******)0x0) {
code_r0x00010042dcf0:
          _free(param_2);
          pppppppuVar12 = pppppppuStack_1e8;
        }
      }
code_r0x00010042dcf8:
      if (pppppppuVar12 == (ulong *******)0x0) {
        unaff_x25 = (ulong ******)0x0;
        pppppppuStack_1e8 = (ulong *******)0x0;
      }
      else {
        _free(pppppppuStack_210);
        unaff_x25 = (ulong ******)0x0;
code_r0x00010042dd08:
      }
    }
LAB_10042dbf4:
    if (((ulong)unaff_x20 & 0x7fffffffffffffff) == 0) {
code_r0x00010042dbfc:
      pppppppuVar12 = (ulong *******)0x8000000000000000;
code_r0x00010042dc00:
      pppppppuVar21 = pppppppuStack_1f0;
code_r0x00010042dc04:
      in_ZR = pppppppuVar21 == pppppppuVar12;
code_r0x00010042dc08:
      iVar19 = (int)unaff_x23;
      uVar9 = (uint)unaff_x25;
      if ((bool)in_ZR) goto LAB_10042dfac;
    }
    else {
LAB_10042dc3c:
      _free(pppppppuStack_228);
code_r0x00010042dc44:
      pppppppuVar12 = (ulong *******)0x8000000000000000;
code_r0x00010042dc48:
      in_ZR = pppppppuStack_1f0 == pppppppuVar12;
      pppppppuVar21 = pppppppuStack_1f0;
code_r0x00010042dc50:
      if ((bool)in_ZR) {
code_r0x00010042dc54:
        iVar19 = (int)unaff_x23;
        uVar9 = (uint)unaff_x25;
        goto LAB_10042dfac;
      }
    }
    goto LAB_10042dc0c;
  case 0x16:
  case 0x54:
  case 0x66:
  case 0x80:
  case 0xe4:
    goto code_r0x00010042dc04;
  case 0x17:
  case 0xcd:
    goto LAB_10042dc14;
  case 0x18:
  case 0xe9:
  case 0xfb:
    goto code_r0x00010042dbdc;
  case 0x19:
  case 200:
  case 0xe6:
    goto LAB_10042dbf4;
  case 0x1a:
    goto code_r0x00010042dba0;
  case 0x1b:
    goto code_r0x00010042dc24;
  case 0x1c:
  case 0xcb:
    goto LAB_10042dc3c;
  case 0x1d:
  case 0x68:
  case 0xc2:
  case 0xd5:
    goto code_r0x00010042dbfc;
  case 0x1e:
  case 0x5c:
  case 0xcc:
  case 0xee:
    goto code_r0x00010042dc54;
  case 0x1f:
  case 0xaa:
    goto code_r0x00010042dbd0;
  case 0x20:
  case 0xd3:
    goto code_r0x00010042dc44;
  case 0x21:
    goto code_r0x00010042db78;
  case 0x22:
    goto code_r0x00010042dba8;
  case 0x23:
  case 99:
  case 199:
    goto LAB_10042dc2c;
  case 0x24:
  case 0xe0:
    goto code_r0x00010042db50;
  case 0x25:
    goto code_r0x00010042dbe4;
  case 0x26:
    goto LAB_10042db48;
  case 0x28:
  case 0x61:
  case 0xa1:
    goto code_r0x00010042dc84;
  case 0x29:
    goto code_r0x00010042d8b4;
  case 0x2a:
    goto code_r0x00010042d8f8;
  case 0x2c:
    goto code_r0x00010042da3c;
  case 0x2d:
    goto code_r0x00010042da4c;
  case 0x2e:
    goto code_r0x00010042da14;
  case 0x2f:
    goto code_r0x00010042da2c;
  case 0x30:
    goto code_r0x00010042d9d8;
  case 0x31:
    goto code_r0x00010042da5c;
  case 0x32:
    goto code_r0x00010042da74;
  case 0x33:
    goto code_r0x00010042da34;
  case 0x34:
    goto code_r0x00010042da8c;
  case 0x35:
    goto code_r0x00010042da08;
  case 0x36:
code_r0x00010042da7c:
    uVar14 = *(undefined8 *)((long)unaff_x19 + 1);
    uStack_8f = (undefined7)*(undefined8 *)((long)unaff_x19 + 9);
    uStack_98._1_1_ = (byte)uVar14;
    uStack_98._2_6_ = (undefined6)((ulong)uVar14 >> 8);
    uStack_90 = (undefined1)((ulong)uVar14 >> 0x38);
    ppppppuStack_80 = unaff_x19[3];
    uStack_88 = SUB81(unaff_x19[2],0);
    uStack_87 = (undefined7)((ulong)unaff_x19[2] >> 8);
code_r0x00010042da8c:
    uStack_98._0_1_ = bVar10;
    pppppppuStack_1c0 = (ulong *******)0x1;
    pppppppuVar18 = (ulong *******)&uStack_b0;
    param_3 = (byte *)&uStack_98;
code_r0x00010042daa0:
    FUN_1004b60cc(pppppppuVar18,param_3);
    unaff_x21 = pppppppuStack_a8;
    unaff_x26 = uStack_b0;
code_r0x00010042daa8:
    in_ZR = unaff_x26 == (ulong *******)0x8000000000000001;
code_r0x00010042dab0:
    if ((bool)in_ZR) {
code_r0x00010042d520:
      *(ulong *******)param_2 = (ulong ******)0x11;
      *(ulong ********)((long)param_2 + 8) = unaff_x21;
      goto code_r0x00010042d528;
    }
    if (unaff_x27 == (ulong *******)0x1) {
code_r0x00010042dad4:
      param_3 = &UNK_10b22b000;
code_r0x00010042dad8:
      pppppppuStack_a8 = (ulong *******)thunk_FUN_1087e422c(1,param_3 + 0x8f8,&UNK_10b20a590);
code_r0x00010042daf0:
      *(ulong *******)param_2 = (ulong ******)0x11;
      *(ulong ********)((long)param_2 + 8) = pppppppuStack_a8;
    }
    else {
      unaff_x20 = unaff_x19 + 8;
      bVar10 = *(byte *)(unaff_x19 + 4);
      in_ZR = bVar10 == 0x16;
      pppppppuVar15 = pppppppuStack_a0;
      pppppppuStack_1d8 = unaff_x20;
code_r0x00010042dad0:
      if ((bool)in_ZR) goto code_r0x00010042dad4;
      uVar14 = *(undefined8 *)((long)unaff_x19 + 0x21);
      uStack_8f = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x29);
      uStack_98._1_1_ = (byte)uVar14;
      uStack_98._2_6_ = (undefined6)((ulong)uVar14 >> 8);
      uStack_90 = (undefined1)((ulong)uVar14 >> 0x38);
      ppppppuStack_80 = unaff_x19[7];
      uStack_88 = SUB81(unaff_x19[6],0);
      uStack_87 = (undefined7)((ulong)unaff_x19[6] >> 8);
      pppppppuStack_1c0 = (ulong *******)0x2;
      pppppppuStack_1f0 = pppppppuVar15;
      uStack_98._0_1_ = bVar10;
      FUN_1004b62d4(&uStack_b0,&uStack_98);
      pppppppuVar15 = pppppppuStack_a8;
      pppppppuStack_1e8 = uStack_b0;
      if (uStack_b0 == (ulong *******)0x8000000000000000) goto code_r0x00010042daf0;
      if (unaff_x27 == (ulong *******)0x2) {
code_r0x00010042df48:
        pppppppuStack_a8 = (ulong *******)thunk_FUN_1087e422c(2,&UNK_10b22b8f8,&UNK_10b20a590);
code_r0x00010042df60:
        *(ulong *******)param_2 = (ulong ******)0x11;
        *(ulong ********)((long)param_2 + 8) = pppppppuStack_a8;
      }
      else {
        unaff_x20 = unaff_x19 + 0xc;
        pppppppuStack_1d8 = unaff_x20;
        if (*(byte *)(unaff_x19 + 8) == 0x16) goto code_r0x00010042df48;
        pppppppuStack_208 = pppppppuStack_a0;
        uVar14 = *(undefined8 *)((long)unaff_x19 + 0x41);
        uStack_8f = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x49);
        uStack_98._1_1_ = (byte)uVar14;
        uStack_98._2_6_ = (undefined6)((ulong)uVar14 >> 8);
        uStack_90 = (undefined1)((ulong)uVar14 >> 0x38);
        ppppppuStack_80 = unaff_x19[0xb];
        uStack_88 = SUB81(unaff_x19[10],0);
        uStack_87 = (undefined7)((ulong)unaff_x19[10] >> 8);
        pppppppuStack_1c0 = (ulong *******)0x3;
        uStack_98._0_1_ = *(byte *)(unaff_x19 + 8);
        FUN_1004b62d4(&uStack_b0,&uStack_98);
        pppppppuVar21 = pppppppuStack_a0;
        pppppppuStack_200 = uStack_b0;
        pppppppuStack_1f8 = pppppppuStack_a8;
        if (uStack_b0 == (ulong *******)0x8000000000000000) goto code_r0x00010042df60;
        if (unaff_x27 == (ulong *******)0x3) {
code_r0x00010042e160:
          pppppppuStack_a8 = (ulong *******)thunk_FUN_1087e422c(3,&UNK_10b22b8f8,&UNK_10b20a590);
        }
        else {
          unaff_x20 = unaff_x19 + 0x10;
          pppppppuStack_1d8 = unaff_x20;
          if (*(byte *)(unaff_x19 + 0xc) == 0x16) goto code_r0x00010042e160;
          uVar14 = *(undefined8 *)((long)unaff_x19 + 0x61);
          uStack_8f = (undefined7)*(undefined8 *)((long)unaff_x19 + 0x69);
          uStack_98._1_1_ = (byte)uVar14;
          uStack_98._2_6_ = (undefined6)((ulong)uVar14 >> 8);
          uStack_90 = (undefined1)((ulong)uVar14 >> 0x38);
          ppppppuStack_80 = unaff_x19[0xf];
          uStack_88 = SUB81(unaff_x19[0xe],0);
          uStack_87 = (undefined7)((ulong)unaff_x19[0xe] >> 8);
          pppppppuStack_1c0 = (ulong *******)0x4;
          uStack_98._0_1_ = *(byte *)(unaff_x19 + 0xc);
          func_0x00010132fb4c(&uStack_b0,&uStack_98);
          if (uStack_b0 != (ulong *******)0x8000000000000000) {
            *(ulong *******)param_2 = (ulong ******)0xa;
            *(ulong ********)((long)param_2 + 8) = pppppppuStack_1e8;
            *(ulong ********)((long)param_2 + 0x10) = pppppppuVar15;
            *(ulong ********)((long)param_2 + 0x18) = pppppppuStack_208;
            *(ulong ********)((long)param_2 + 0x20) = pppppppuStack_200;
            *(ulong ********)((long)param_2 + 0x28) = pppppppuStack_1f8;
            *(ulong ********)((long)param_2 + 0x30) = pppppppuVar21;
            *(ulong ********)((long)param_2 + 0x38) = uStack_b0;
            *(ulong ********)((long)param_2 + 0x40) = pppppppuStack_a8;
            *(ulong ********)((long)param_2 + 0x48) = pppppppuStack_a0;
            *(ulong ********)((long)param_2 + 0x50) = unaff_x26;
            *(ulong ********)((long)param_2 + 0x58) = unaff_x21;
            *(ulong ********)((long)param_2 + 0x60) = pppppppuStack_1f0;
            ppppppuStack_108 = *(ulong *******)((long)param_2 + 0x88);
            ppppppuStack_110 = *(ulong *******)((long)param_2 + 0x80);
            ppppppuStack_f8 = *(ulong *******)((long)param_2 + 0x98);
            ppppppuStack_100 = *(ulong *******)((long)param_2 + 0x90);
            ppppppuStack_e8 = *(ulong *******)((long)param_2 + 0xa8);
            ppppppuStack_f0 = *(ulong *******)((long)param_2 + 0xa0);
            ppppppuStack_d8 = *(ulong *******)((long)param_2 + 0xb8);
            ppppppuStack_e0 = *(ulong *******)((long)param_2 + 0xb0);
            pppppppuStack_188 = *(ulong ********)((long)param_2 + 8);
            ppppppuStack_190 = *(ulong *******)param_2;
            ppppppuStack_178 = *(ulong *******)((long)param_2 + 0x18);
            ppppppuStack_180 = *(ulong *******)((long)param_2 + 0x10);
            ppppppuStack_168 = *(ulong *******)((long)param_2 + 0x28);
            ppppppuStack_170 = *(ulong *******)((long)param_2 + 0x20);
            ppppppuStack_158 = *(ulong *******)((long)param_2 + 0x38);
            ppppppuStack_160 = *(ulong *******)((long)param_2 + 0x30);
            ppppppuStack_148 = *(ulong *******)((long)param_2 + 0x48);
            ppppppuStack_150 = *(ulong *******)((long)param_2 + 0x40);
            ppppppuStack_138 = *(ulong *******)((long)param_2 + 0x58);
            ppppppuStack_140 = *(ulong *******)((long)param_2 + 0x50);
            ppppppuStack_128 = *(ulong *******)((long)param_2 + 0x68);
            ppppppuStack_130 = *(ulong *******)((long)param_2 + 0x60);
            ppppppuStack_118 = *(ulong *******)((long)param_2 + 0x78);
            ppppppuStack_120 = *(ulong *******)((long)param_2 + 0x70);
            ppppppuVar8 = (ulong ******)FUN_100fbc738(&pppppppuStack_1e0);
code_r0x00010042ded0:
            if (ppppppuVar8 == (ulong ******)0x0) {
              return;
            }
            *(ulong *******)param_2 = (ulong ******)0x11;
            *(ulong *******)((long)param_2 + 8) = ppppppuVar8;
            FUN_100e02a24(&ppppppuStack_190);
            return;
          }
        }
        *(ulong *******)param_2 = (ulong ******)0x11;
        *(ulong ********)((long)param_2 + 8) = pppppppuStack_a8;
        if (pppppppuStack_200 != (ulong *******)0x0) {
          _free(pppppppuStack_1f8);
        }
      }
      if (pppppppuStack_1e8 != (ulong *******)0x0) {
        _free(pppppppuVar15);
      }
    }
code_r0x00010042daf8:
    if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
code_r0x00010042db00:
      _free(unaff_x21);
code_r0x00010042db08:
    }
code_r0x00010042d528:
    lVar17 = ((ulong)((long)unaff_x22 - (long)unaff_x20) >> 5) + 1;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      FUN_100e077ec(unaff_x20);
      unaff_x20 = unaff_x20 + 4;
    }
    if (unaff_x25 == (ulong ******)0x0) {
      return;
    }
    _free(unaff_x19);
    return;
  case 0x37:
    goto code_r0x00010042d9b0;
  case 0x38:
    goto code_r0x00010042d9e0;
  case 0x39:
code_r0x00010042da64:
    unaff_x26 = (ulong *******)0x8000000000000001;
    unaff_x23 = 1;
    pppppppuStack_1f0 = (ulong *******)0x8000000000000000;
code_r0x00010042da74:
    unaff_x27 = (ulong *******)0x0;
    goto code_r0x00010042dbac;
  case 0x3a:
    goto code_r0x00010042d988;
  case 0x3b:
    goto code_r0x00010042da1c;
  case 0x3c:
    goto code_r0x00010042d980;
  case 0x3e:
  case 0x4d:
  case 0x79:
    goto code_r0x00010042dad8;
  case 0x3f:
    goto code_r0x00010042d7bc;
  case 0x40:
    goto code_r0x00010042d800;
  case 0x42:
  case 0x6e:
    goto code_r0x00010042db64;
  case 0x43:
  case 0x6f:
    goto code_r0x00010042db74;
  case 0x44:
  case 0x70:
  case 0xbf:
    goto code_r0x00010042db3c;
  case 0x45:
  case 0x71:
  case 0xb7:
    goto code_r0x00010042db54;
  case 0x46:
  case 0x72:
  case 0xbc:
  case 0xea:
    goto code_r0x00010042db00;
  case 0x47:
  case 0x73:
  case 0xbd:
  case 0xfd:
    goto code_r0x00010042db84;
  case 0x48:
  case 0x74:
  case 0xba:
    goto code_r0x00010042db9c;
  case 0x49:
  case 0x75:
  case 0xb0:
    goto code_r0x00010042db5c;
  case 0x4a:
  case 0x76:
  case 0xdc:
  case 0xfe:
    goto code_r0x00010042dbb4;
  case 0x4b:
  case 0x77:
    goto code_r0x00010042db30;
  case 0x4c:
  case 0x78:
  case 0xdf:
    goto code_r0x00010042dba4;
  case 0x4e:
  case 0x7a:
    goto code_r0x00010042db08;
  case 0x4f:
  case 0x7b:
  case 0xde:
    goto code_r0x00010042db8c;
  case 0x50:
  case 0x7c:
    goto code_r0x00010042dab0;
  case 0x51:
  case 0x7d:
    goto code_r0x00010042db44;
  case 0x52:
  case 0x7e:
  case 0xbe:
    goto code_r0x00010042daa8;
  case 0x55:
  case 0x81:
  case 0xc3:
  case 0xef:
    goto code_r0x00010042d7f4;
  case 0x56:
  case 0x82:
  case 0xc4:
  case 0xf0:
    goto code_r0x00010042d838;
  case 0x58:
    goto code_r0x00010042dcb8;
  case 0x59:
    goto code_r0x00010042dcc8;
  case 0x5a:
    goto code_r0x00010042dc90;
  case 0x5b:
    goto code_r0x00010042dca8;
  case 0x5d:
    goto code_r0x00010042dcd8;
  case 0x5e:
    goto code_r0x00010042dcf0;
  case 0x5f:
    goto code_r0x00010042dcb0;
  case 0x60:
    goto code_r0x00010042dd08;
  case 0x62:
    goto code_r0x00010042dcf8;
  case 100:
  case 0xd0:
    goto code_r0x00010042dc5c;
  case 0x65:
    goto code_r0x00010042dce0;
  case 0x67:
    goto code_r0x00010042dc98;
  case 0x6a:
    goto code_r0x00010042dd58;
  case 0x6b:
    goto code_r0x00010042d850;
  case 0x6c:
    goto code_r0x00010042d894;
  case 0x8a:
    goto code_r0x00010042de30;
  case 0x8e:
    goto code_r0x00010042de38;
  case 0x96:
    goto code_r0x00010042de78;
  case 0x9a:
    goto code_r0x00010042dc8c;
  case 0x9b:
    goto code_r0x00010042dc9c;
  case 0x9c:
    goto code_r0x00010042dc64;
  case 0x9d:
    goto code_r0x00010042dc7c;
  case 0x9e:
    goto code_r0x00010042dc28;
  case 0x9f:
    goto code_r0x00010042dcac;
  case 0xa0:
    goto code_r0x00010042dcc4;
  case 0xa2:
    goto code_r0x00010042dcdc;
  case 0xa3:
    goto code_r0x00010042dc58;
  case 0xa4:
    goto code_r0x00010042dccc;
  case 0xa5:
  case 0xf5:
    goto code_r0x00010042dc00;
  case 0xa6:
  case 0xf7:
    goto code_r0x00010042dc30;
  case 0xa7:
    goto code_r0x00010042dcb4;
  case 0xa8:
    goto code_r0x00010042dbd8;
  case 0xa9:
  case 0xce:
    goto code_r0x00010042dc6c;
  case 0xad:
    goto code_r0x00010042d830;
  case 0xae:
    goto code_r0x00010042d874;
  case 0xb1:
    goto code_r0x00010042db6c;
  case 0xb2:
    goto code_r0x00010042db34;
  case 0xb3:
    goto code_r0x00010042db4c;
  case 0xb4:
  case 0xec:
    goto code_r0x00010042daf8;
  case 0xb5:
    goto code_r0x00010042db7c;
  case 0xb6:
  case 0xeb:
    goto code_r0x00010042db94;
  case 0xb8:
  case 0xe3:
  case 0xf6:
    goto code_r0x00010042dbac;
  case 0xb9:
  case 0xe7:
code_r0x00010042db28:
    pppppppuVar15 = (ulong *******)0x11;
    pppppppuVar12 = pppppppuStack_a8;
code_r0x00010042db30:
    pppppppuVar16 = pppppppuStack_230;
code_r0x00010042db34:
    *pppppppuVar16 = (ulong ******)pppppppuVar15;
    pppppppuVar16[1] = (ulong ******)pppppppuVar12;
    unaff_x19 = (ulong *******)0x1;
code_r0x00010042db3c:
    unaff_x25 = (ulong ******)0x1;
    unaff_x23 = 1;
code_r0x00010042db44:
    unaff_x26 = pppppppuStack_200;
    unaff_x27 = pppppppuStack_1f8;
LAB_10042db48:
    unaff_x21 = (ulong *******)&pppppppuStack_1e0;
code_r0x00010042db4c:
    pppppppuVar12 = (ulong *******)0x8000000000000000;
code_r0x00010042db50:
    pppppppuVar21 = pppppppuStack_1f0;
code_r0x00010042db54:
    in_ZR = pppppppuVar21 == pppppppuVar12;
code_r0x00010042db58:
    if ((bool)in_ZR) {
code_r0x00010042db5c:
      iVar19 = (int)unaff_x23;
      uVar9 = (uint)unaff_x25;
    }
    else {
LAB_10042dc0c:
      unaff_x20 = (ulong *******)((long)unaff_x22 + 1);
code_r0x00010042dc10:
      param_2 = (char *)pppppppuStack_208;
LAB_10042dc14:
      while (unaff_x20 = (ulong *******)((long)unaff_x20 + -1), unaff_x20 != (ulong *******)0x0) {
code_r0x00010042dc1c:
        pppppppuVar18 = (ulong *******)((long)param_2 + 0x48);
code_r0x00010042dc20:
        FUN_100de6690(param_2);
        param_2 = (char *)pppppppuVar18;
code_r0x00010042dc24:
code_r0x00010042dc28:
      }
LAB_10042dc2c:
      iVar19 = (int)unaff_x23;
      uVar9 = (uint)unaff_x25;
      if (pppppppuVar21 != (ulong *******)0x0) {
code_r0x00010042dc30:
        _free(pppppppuStack_208);
code_r0x00010042dc38:
        iVar19 = (int)unaff_x23;
        uVar9 = (uint)unaff_x25;
      }
    }
LAB_10042dfac:
    if ((((ulong)unaff_x27 & 0x7fffffffffffffff) != 0) && (((ulong)unaff_x19 & 1) != 0)) {
      _free(pppppppuStack_220);
    }
    uVar1 = 0;
    if (((ulong)pppppppuStack_1e8 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar9;
    }
    if ((uVar1 & 1) != 0) {
      _free(pppppppuStack_210);
    }
    iVar2 = 0;
    if (unaff_x26 != (ulong *******)0x8000000000000001) {
      iVar2 = iVar19;
    }
    if ((iVar2 == 1) && (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0)) {
      _free(pppppppuStack_228);
    }
    FUN_100d34830(unaff_x21 + 4);
    if ((byte)pppppppuStack_1e0 == '\x16') {
      return;
    }
    FUN_100e077ec(&pppppppuStack_1e0);
    return;
  case 0xbb:
    goto code_r0x00010042dad0;
  case 0xc0:
    goto code_r0x00010042daa0;
  case 0xc6:
    goto code_r0x00010042dc1c;
  case 0xc9:
    goto LAB_10042dc0c;
  case 0xca:
    goto code_r0x00010042dbb8;
  case 0xcf:
  case 0xf4:
    goto code_r0x00010042dbe8;
  case 0xd1:
    goto code_r0x00010042db90;
  case 0xd2:
    goto code_r0x00010042dbc0;
  case 0xd4:
    goto code_r0x00010042db68;
  case 0xd6:
    goto code_r0x00010042db60;
  case 0xd8:
    goto code_r0x00010042dca0;
  case 0xd9:
    goto code_r0x00010042d814;
  case 0xda:
    goto code_r0x00010042d858;
  case 0xdd:
    goto code_r0x00010042dbc4;
  case 0xe1:
    goto code_r0x00010042dbd4;
  case 0xe2:
    goto code_r0x00010042dbec;
  case 0xe5:
    goto code_r0x00010042db80;
  case 0xe8:
    goto code_r0x00010042db58;
  case 0xf2:
    goto code_r0x00010042dc10;
  case 0xf3:
    goto code_r0x00010042dc20;
  case 0xf8:
    goto code_r0x00010042dc48;
  case 0xf9:
    goto code_r0x00010042dc08;
  case 0xfa:
    goto code_r0x00010042dc60;
  case 0xfc:
    goto code_r0x00010042dc50;
  case 0xff:
    goto code_r0x00010042dc38;
  }
  ppppppuStack_190 = (ulong ******)CONCAT71(ppppppuStack_190._1_7_,uVar11);
code_r0x00010042de28:
  param_4 = &UNK_10b219b70;
code_r0x00010042de30:
  pppppppuVar18 = &ppppppuStack_190;
  param_3 = abStack_71;
code_r0x00010042de38:
  ppppppuVar8 = (ulong ******)FUN_107c05dcc(pppppppuVar18,param_3,param_4);
  *(ulong *******)param_2 = (ulong ******)0x11;
  *(ulong *******)((long)param_2 + 8) = ppppppuVar8;
  return;
}

