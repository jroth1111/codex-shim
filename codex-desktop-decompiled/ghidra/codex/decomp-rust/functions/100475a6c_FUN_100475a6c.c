
/* WARNING: Type propagation algorithm not settling */

void FUN_100475a6c(undefined1 param_1 [16],int **param_2,int **param_3,undefined *param_4)

{
  byte bVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  code *pcVar5;
  int ***pppiVar6;
  int ***pppiVar7;
  int ***pppiVar8;
  int ***pppiVar9;
  int ***pppiVar11;
  int ***pppiVar12;
  int ***pppiVar13;
  int ***pppiVar14;
  int ***pppiVar15;
  int ***pppiVar17;
  int ***pppiVar18;
  int ***pppiVar19;
  int ***pppiVar20;
  int ***pppiVar21;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int **ppiVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  byte bVar27;
  int **ppiVar28;
  int **ppiVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  int **ppiVar33;
  int **unaff_x19;
  int **unaff_x20;
  int **unaff_x21;
  int **unaff_x22;
  int *unaff_x23;
  int **unaff_x24;
  long lVar34;
  int **unaff_x25;
  int **ppiVar35;
  int **unaff_x27;
  int **unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar36;
  undefined8 unaff_x30;
  int **ppiVar37;
  byte abStack_390 [80];
  int **ppiStack_340;
  int **ppiStack_338;
  int *piStack_330;
  int **ppiStack_328;
  int **ppiStack_320;
  undefined8 *puStack_318;
  int *piStack_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  int *piStack_2f8;
  int **ppiStack_2f0;
  int **ppiStack_2e8;
  int **ppiStack_2e0;
  int **ppiStack_2d8;
  int **ppiStack_2d0;
  int *piStack_2c0;
  int **ppiStack_2b8;
  int **ppiStack_2b0;
  int *piStack_2a8;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  int **ppiStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  undefined8 uStack_c0;
  int **ppiStack_b8;
  int *piStack_b0;
  int **ppiStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int *piStack_88;
  int **ppiStack_80;
  int *piStack_78;
  int ***pppiVar10;
  int ***pppiVar16;
  int ***pppiVar22;
  
  piVar24 = param_1._8_8_;
  ppiVar37 = param_1._0_8_;
  puVar36 = &stack0xfffffffffffffff0;
  pppiVar15 = &ppiStack_340;
  pppiVar21 = &ppiStack_340;
  pppiVar9 = &ppiStack_340;
  bVar27 = *(byte *)param_3;
  ppiVar28 = (int **)(ulong)bVar27;
  ppiVar33 = (int **)&UNK_108c9976e;
  pppiVar17 = &ppiStack_340;
  pppiVar18 = &ppiStack_340;
  pppiVar19 = &ppiStack_340;
  pppiVar20 = &ppiStack_340;
  pppiVar22 = &ppiStack_340;
  pppiVar11 = &ppiStack_340;
  pppiVar12 = &ppiStack_340;
  pppiVar13 = &ppiStack_340;
  pppiVar14 = &ppiStack_340;
  pppiVar16 = &ppiStack_340;
  pppiVar6 = &ppiStack_340;
  pppiVar7 = &ppiStack_340;
  pppiVar8 = &ppiStack_340;
  pppiVar10 = &ppiStack_340;
  ppiVar23 = param_2;
  ppiVar29 = ppiVar28;
  ppiVar35 = unaff_x25;
  switch(bVar27) {
  case 0:
  case 0x1e:
  case 0x3b:
  case 0x84:
    bVar27 = *(byte *)((long)param_3 + 1);
  case 100:
  case 0xd5:
  case 0xeb:
    piStack_2c0 = (int *)((ulong)CONCAT61(piStack_2c0._2_6_,bVar27) << 8);
code_r0x000100476360:
    goto code_r0x0001004763b4;
  case 1:
  case 0x2f:
  case 0x85:
    ppiVar28 = (int **)(ulong)*(byte *)((long)param_3 + 1);
  case 0xc9:
  case 0xdf:
code_r0x000100476368:
    ppiStack_2b8 = ppiVar28;
code_r0x00010047636c:
    bVar27 = 1;
code_r0x000100476370:
    break;
  case 2:
  case 0x23:
  case 0x48:
  case 0x86:
    ppiVar28 = (int **)(ulong)*(ushort *)((long)param_3 + 2);
    goto code_r0x000100476368;
  case 3:
  case 0x20:
  case 0x4a:
  case 0x87:
  case 0xcf:
  case 0xe5:
    ppiVar28 = (int **)(ulong)*(uint *)((long)param_3 + 4);
    goto code_r0x000100476368;
  case 4:
  case 0x88:
    ppiVar28 = (int **)param_3[1];
  case 0x19:
  case 0x42:
    goto code_r0x000100476368;
  case 5:
  case 0x2c:
  case 0x89:
    ppiVar28 = (int **)(long)(char)*(byte *)((long)param_3 + 1);
  case 0xc6:
  case 0xdc:
    ppiStack_2b8 = ppiVar28;
code_r0x0001004763ac:
    bVar27 = 2;
    break;
  case 6:
  case 0x5a:
  case 0x8a:
    ppiStack_2b8 = (int **)(long)*(short *)((long)param_3 + 2);
    goto code_r0x0001004763ac;
  case 7:
  case 0x2e:
  case 0x8b:
    ppiVar28 = (int **)(long)*(int *)((long)param_3 + 4);
  case 0x5c:
  case 200:
  case 0xde:
    ppiStack_2b8 = ppiVar28;
    goto code_r0x0001004763ac;
  case 8:
  case 0x5b:
  case 0x8c:
    ppiStack_2b8 = (int **)param_3[1];
    goto code_r0x0001004763ac;
  case 9:
  case 0x8d:
    ppiVar37 = (int **)(ulong)*(uint *)((long)param_3 + 4);
  case 0x1b:
    ppiVar37 = (int **)(double)SUB84(ppiVar37,0);
code_r0x000100476328:
  case 0xcb:
  case 0xe1:
code_r0x000100476398:
    ppiStack_2b8 = ppiVar37;
code_r0x00010047639c:
    bVar27 = 3;
code_r0x0001004763a0:
    break;
  case 10:
  case 0x31:
  case 0x54:
  case 0x67:
  case 0x8e:
    ppiVar37 = (int **)param_3[1];
    goto code_r0x000100476398;
  case 0xb:
  case 0x8f:
    param_3 = (int **)(ulong)*(uint *)((long)param_3 + 4);
  case 0x44:
code_r0x0001004762d0:
    pppiVar11 = (int ***)&stack0xffffffffffffffa0;
code_r0x0001004762d4:
    puVar36 = *(undefined1 **)((long)pppiVar11 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppiVar11 + 0x58);
    unaff_x20 = *(int ***)((long)pppiVar11 + 0x40);
    unaff_x19 = *(int ***)((long)pppiVar11 + 0x48);
    pppiVar12 = pppiVar11;
code_r0x0001004762dc:
    pppiVar13 = pppiVar12;
code_r0x0001004762e0:
    pppiVar14 = pppiVar13;
code_r0x0001004762e4:
    pppiVar16 = pppiVar14;
code_r0x0001004762e8:
    pppiVar15 = (int ***)((long)pppiVar16 + 0x60);
code_r0x0001004762ec:
    *(int ***)((long)pppiVar15 + -0x20) = unaff_x20;
    *(int ***)((long)pppiVar15 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppiVar15 + -0x10) = puVar36;
    *(undefined8 *)((long)pppiVar15 + -8) = unaff_x30;
    *(undefined4 *)((long)pppiVar15 + -0x44) = 0;
    uVar26 = (uint)param_3;
    if (uVar26 < 0x80) {
      *(byte *)((long)pppiVar15 + -0x44) = (byte)param_3;
      uVar30 = 1;
    }
    else {
      bVar27 = (byte)param_3 & 0x3f | 0x80;
      if (uVar26 < 0x800) {
        *(byte *)((long)pppiVar15 + -0x44) = (byte)(uVar26 >> 6) | 0xc0;
        *(byte *)((long)pppiVar15 + -0x43) = bVar27;
        uVar30 = 2;
      }
      else {
        bVar1 = (byte)(uVar26 >> 6) & 0x3f | 0x80;
        if (uVar26 < 0x10000) {
          *(byte *)((long)pppiVar15 + -0x44) = (byte)(uVar26 >> 0xc) | 0xe0;
          *(byte *)((long)pppiVar15 + -0x43) = bVar1;
          *(byte *)((long)pppiVar15 + -0x42) = bVar27;
          uVar30 = 3;
        }
        else {
          *(byte *)((long)pppiVar15 + -0x44) = (byte)(uVar26 >> 0x12) | 0xf0;
          *(byte *)((long)pppiVar15 + -0x43) = (byte)(uVar26 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppiVar15 + -0x42) = bVar1;
          *(byte *)((long)pppiVar15 + -0x41) = bVar27;
          uVar30 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppiVar15 + -0x38) = (undefined1 *)((long)pppiVar15 + -0x44);
    *(undefined8 *)((long)pppiVar15 + -0x30) = uVar30;
    *(undefined1 *)((long)pppiVar15 + -0x40) = 5;
    piVar24 = (int *)func_0x000108a4a50c((undefined1 *)((long)pppiVar15 + -0x40),
                                         (undefined1 *)((long)pppiVar15 + -0x21),&UNK_10b21bc70);
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar24;
    return;
  case 0xc:
  case 0x68:
  case 0x74:
  case 0x90:
  case 0xa0:
    param_3 = param_3 + 1;
  case 0x1d:
code_r0x000100476300:
    pppiVar17 = (int ***)&stack0xffffffffffffffa0;
code_r0x000100476304:
    puVar36 = *(undefined1 **)((long)pppiVar17 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppiVar17 + 0x58);
    pppiVar18 = pppiVar17;
code_r0x000100476308:
    unaff_x20 = *(int ***)((long)pppiVar18 + 0x40);
    unaff_x19 = *(int ***)((long)pppiVar18 + 0x48);
    unaff_x22 = *(int ***)((long)pppiVar18 + 0x30);
    unaff_x21 = *(int ***)((long)pppiVar18 + 0x38);
    pppiVar19 = pppiVar18;
code_r0x000100476310:
    pppiVar20 = pppiVar19;
code_r0x000100476314:
    pppiVar22 = pppiVar20;
code_r0x000100476318:
    pppiVar21 = (int ***)((long)pppiVar22 + 0x60);
code_r0x00010047631c:
    *(int ***)((long)pppiVar21 + -0x30) = unaff_x22;
    *(int ***)((long)pppiVar21 + -0x28) = unaff_x21;
    *(int ***)((long)pppiVar21 + -0x20) = unaff_x20;
    *(int ***)((long)pppiVar21 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppiVar21 + -0x10) = puVar36;
    *(undefined8 *)((long)pppiVar21 + -8) = unaff_x30;
    piVar24 = param_3[1];
    piVar25 = param_3[2];
    *(int **)((long)pppiVar21 + -0x48) = piVar24;
    *(int **)((long)pppiVar21 + -0x40) = piVar25;
    *(undefined1 *)((long)pppiVar21 + -0x50) = 5;
    piVar25 = (int *)func_0x000108a4a50c((undefined1 *)((long)pppiVar21 + -0x50),
                                         (undefined1 *)((long)pppiVar21 + -0x31),&UNK_10b21bc70);
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar25;
    if (*param_3 != (int *)0x0) {
      _free(piVar24);
    }
    return;
  case 0xd:
  case 0x91:
    ppiVar28 = (int **)param_3[1];
    ppiVar33 = (int **)param_3[2];
  case 0x61:
    ppiStack_2b8 = ppiVar28;
    ppiStack_2b0 = ppiVar33;
code_r0x000100476384:
    bVar27 = 5;
code_r0x000100476388:
    break;
  case 0xe:
  case 0x1a:
  case 0x7d:
  case 0x92:
  case 0xa9:
  case 0xb6:
    param_3 = param_3 + 1;
  case 0x22:
  case 0xba:
    pppiVar6 = (int ***)&stack0xffffffffffffffa0;
    puVar36 = unaff_x29;
code_r0x0001004762b0:
    unaff_x20 = *(int ***)((long)pppiVar6 + 0x40);
    unaff_x19 = *(int ***)((long)pppiVar6 + 0x48);
    unaff_x22 = *(int ***)((long)pppiVar6 + 0x30);
    unaff_x21 = *(int ***)((long)pppiVar6 + 0x38);
    pppiVar7 = pppiVar6;
code_r0x0001004762b8:
    pppiVar8 = pppiVar7;
code_r0x0001004762bc:
    pppiVar10 = pppiVar8;
code_r0x0001004762c0:
    pppiVar9 = (int ***)((long)pppiVar10 + 0x60);
code_r0x0001004762c4:
    *(int ***)((long)pppiVar9 + -0x30) = unaff_x22;
    *(int ***)((long)pppiVar9 + -0x28) = unaff_x21;
    *(int ***)((long)pppiVar9 + -0x20) = unaff_x20;
    *(int ***)((long)pppiVar9 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppiVar9 + -0x10) = puVar36;
    *(undefined8 *)((long)pppiVar9 + -8) = unaff_x30;
    piVar24 = param_3[1];
    piVar25 = param_3[2];
    *(int **)((long)pppiVar9 + -0x48) = piVar24;
    *(int **)((long)pppiVar9 + -0x40) = piVar25;
    *(undefined1 *)((long)pppiVar9 + -0x50) = 6;
    piVar25 = (int *)func_0x000108a4a50c((undefined1 *)((long)pppiVar9 + -0x50),
                                         (undefined1 *)((long)pppiVar9 + -0x31),&UNK_10b21bc70);
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar25;
    if (*param_3 != (int *)0x0) {
      _free(piVar24);
    }
    return;
  case 0xf:
  case 0x4c:
  case 0x93:
    ppiStack_2b8 = (int **)param_3[1];
    ppiStack_2b0 = (int **)param_3[2];
  case 0x1c:
    bVar27 = 6;
code_r0x000100476340:
    break;
  case 0x10:
  case 0x4e:
  case 0x70:
  case 0x94:
  case 0x9c:
    bVar27 = 8;
    break;
  default:
    ppiVar23 = (int **)param_3[1];
    ppiStack_2b8 = (int **)ppiVar23[1];
    piStack_2c0 = *ppiVar23;
    piStack_2a8 = ppiVar23[3];
    ppiStack_2b0 = (int **)ppiVar23[2];
    func_0x000107c046c4(param_2,&piStack_2c0);
    goto code_r0x000100475f24;
  case 0x12:
  case 0x62:
  case 0x96:
    bVar27 = 7;
    break;
  case 0x13:
  case 0x29:
  case 0x97:
  case 0xef:
    unaff_x20 = (int **)param_3[1];
    ppiStack_2b8 = (int **)unaff_x20[1];
    piStack_2c0 = *unaff_x20;
    piVar24 = unaff_x20[3];
    ppiVar37 = (int **)unaff_x20[2];
  case 0x6b:
  case 0xd9:
    ppiStack_2b0 = ppiVar37;
    piStack_2a8 = piVar24;
code_r0x000100475f0c:
    ppiVar23 = unaff_x20;
    func_0x000107c05348(param_2,&piStack_2c0);
code_r0x000100475f24:
code_r0x000100475f2c:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(ppiVar23);
    return;
  case 0x14:
  case 0x2a:
  case 0x98:
  case 0xf0:
    unaff_x23 = param_3[1];
    unaff_x20 = (int **)param_3[2];
    unaff_x25 = (int **)param_3[3];
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    uStack_c0 = unaff_x20;
    ppiStack_b8 = unaff_x20;
  case 0x6c:
  case 0xda:
    piStack_a0 = (int *)0x0;
    unaff_x21 = unaff_x20;
    piStack_b0 = unaff_x23;
    ppiStack_a8 = unaff_x19;
    if (unaff_x25 == (int **)0x0) {
code_r0x000100475f70:
      unaff_x22 = (int **)thunk_FUN_1087e422c(0,&UNK_10b22f7f8,&UNK_10b20a590);
code_r0x000100475f8c:
      *param_2 = (int *)0x800000000000006e;
      param_2[1] = (int *)unaff_x22;
code_r0x000100475f98:
      lVar34 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar34 = lVar34 + -1, lVar34 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (int *)0x0) {
        _free(unaff_x20);
      }
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      ppiStack_b8 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100475f70;
      uStack_307 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      piStack_310._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_308 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      piStack_2f8 = unaff_x20[3];
      uStack_300 = SUB81(unaff_x20[2],0);
      uStack_2ff = (undefined7)((ulong)unaff_x20[2] >> 8);
      piStack_a0 = (int *)0x1;
      piStack_310._0_1_ = *(byte *)unaff_x20;
      func_0x00010135ba2c(&bStack_f8,&piStack_310);
      unaff_x24 = (int **)CONCAT71(uStack_f7,bStack_f8);
      unaff_x22 = (int **)CONCAT71(uStack_ef,uStack_f0);
      if (unaff_x24 == (int **)0x8000000000000001) goto code_r0x000100475f8c;
      if (unaff_x25 == (int **)0x1) {
code_r0x000100476034:
        ppiVar23 = (int **)thunk_FUN_1087e422c(1,&UNK_10b22f7f8,&UNK_10b20a590);
code_r0x00010047604c:
        *param_2 = (int *)0x800000000000006e;
        param_2[1] = (int *)ppiVar23;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x000100475f98;
      }
      unaff_x25 = (int **)CONCAT71(uStack_e7,uStack_e8);
      unaff_x21 = unaff_x20 + 8;
      bVar27 = *(byte *)(unaff_x20 + 4);
      ppiStack_b8 = unaff_x21;
      if (bVar27 == 0x16) goto code_r0x000100476034;
      uStack_ef = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
code_r0x000100476404:
      ppiStack_e0 = (int **)unaff_x20[7];
      uStack_e8 = SUB81(unaff_x20[6],0);
      uStack_e7 = (undefined7)((ulong)unaff_x20[6] >> 8);
      piStack_a0 = (int *)0x2;
code_r0x000100476414:
      bStack_f8 = bVar27;
code_r0x000100476418:
      func_0x0001012933f8(&piStack_310,&bStack_f8);
      ppiVar23 = (int **)CONCAT71(uStack_307,uStack_308);
      if ((int *)CONCAT71(piStack_310._1_7_,(byte)piStack_310) == (int *)0x8000000000000000)
      goto code_r0x00010047604c;
      unaff_x19 = (int **)0x800000000000006e;
      param_2[4] = piStack_2f8;
      param_2[3] = (int *)CONCAT71(uStack_2ff,uStack_300);
      param_2[6] = (int *)ppiStack_2e8;
      param_2[5] = (int *)ppiStack_2f0;
      *param_2 = (int *)0x800000000000005d;
      param_2[1] = (int *)CONCAT71(piStack_310._1_7_,(byte)piStack_310);
      ppiVar33 = ppiStack_2e0;
code_r0x000100476454:
      param_2[2] = (int *)ppiVar23;
      param_2[7] = (int *)ppiVar33;
      param_2[8] = (int *)unaff_x24;
      param_2[9] = (int *)unaff_x22;
      param_2[10] = (int *)unaff_x25;
      _memcpy(&piStack_2c0,param_2,0x1c0);
      piVar24 = (int *)FUN_100fbc738(&uStack_c0);
      if (piVar24 != (int *)0x0) {
        *param_2 = (int *)unaff_x19;
        param_2[1] = piVar24;
code_r0x000100476480:
        FUN_100e44f40(&piStack_2c0);
      }
    }
    goto LAB_1004763d4;
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
    ppiStack_2e0 = (int **)param_3[1];
    ppiStack_2f0 = (int **)param_3[2];
    piVar24 = param_3[3];
    unaff_x19 = ppiStack_2f0 + (long)piVar24 * 8;
    piStack_310._0_1_ = 0x16;
    ppiStack_2d0 = (int **)0x0;
    ppiStack_2d8 = unaff_x19;
    if (piVar24 == (int *)0x0) {
      unaff_x24 = (int **)0x8000000000000000;
      bStack_f8 = 0;
      uStack_f7 = 0x80000000000000;
      ppiStack_2e8 = ppiStack_2f0;
    }
    else {
      unaff_x25 = (int **)0x0;
      unaff_x22 = (int **)((ulong)&uStack_c0 | 1);
      unaff_x21 = (int **)((ulong)&piStack_310 | 1);
      puStack_318 = (undefined8 *)((ulong)&piStack_88 | 1);
      ppiStack_340 = (int **)(((long)piVar24 * 0x40 - 0x40U >> 6) + 1);
      unaff_x24 = (int **)0x8000000000000000;
      unaff_x23 = (int *)0x8000000000000001;
      unaff_x28 = (int **)0x8000000000000000;
      unaff_x27 = ppiStack_2f0;
      ppiStack_338 = param_2;
      ppiStack_2e8 = ppiStack_2f0;
      do {
        ppiVar33 = uStack_c0;
        param_2 = unaff_x27 + 8;
        bVar27 = *(byte *)unaff_x27;
        ppiVar35 = unaff_x25;
        ppiVar23 = param_2;
        if (bVar27 == 0x16) break;
        uStack_c0 = (int **)CONCAT71(uStack_c0._1_7_,bVar27);
        ppiVar23 = uStack_c0;
        piVar24 = unaff_x27[2];
        *(int **)((long)unaff_x22 + 0x17) = unaff_x27[3];
        *(int **)((long)unaff_x22 + 0xf) = piVar24;
        piVar24 = *(int **)((long)unaff_x27 + 1);
        unaff_x22[1] = *(int **)((long)unaff_x27 + 9);
        *unaff_x22 = piVar24;
        piStack_2f8 = unaff_x27[7];
        uStack_308 = SUB81(unaff_x27[5],0);
        uStack_307 = (undefined7)((ulong)unaff_x27[5] >> 8);
        piStack_310._0_1_ = (byte)unaff_x27[4];
        piStack_310._1_7_ = (undefined7)((ulong)unaff_x27[4] >> 8);
        uStack_300 = SUB81(unaff_x27[6],0);
        uStack_2ff = (undefined7)((ulong)unaff_x27[6] >> 8);
        if (bVar27 < 0xd) {
          if (bVar27 == 1) {
            uStack_c0._1_1_ = SUB81(ppiVar33,1);
            iVar32 = 1;
            if (uStack_c0._1_1_ != '\x01') {
              iVar32 = 2;
            }
            iVar31 = 0;
            if (uStack_c0._1_1_ != '\0') {
              iVar31 = iVar32;
            }
          }
          else {
            if (bVar27 != 4) {
              if (bVar27 == 0xc) {
                if (ppiStack_a8 == (int **)0x6) {
                  iVar31 = 1;
                  if (*piStack_b0 != 0x61726170 || (short)piStack_b0[1] != 0x736d) {
                    iVar31 = 2;
                  }
                }
                else if (ppiStack_a8 == (int **)0x2) {
                  iVar31 = 2;
                  if ((short)*piStack_b0 == 0x6469) {
                    iVar31 = 0;
                  }
                }
                else {
                  iVar31 = 2;
                }
                goto joined_r0x000100475d50;
              }
code_r0x0001004765d4:
              ppiVar28 = (int **)((long)unaff_x25 + 1);
              ppiStack_2e8 = param_2;
              goto code_r0x0001004765dc;
            }
            iVar32 = 1;
            if (ppiStack_b8 != (int **)0x1) {
              iVar32 = 2;
            }
            iVar31 = 0;
            if (ppiStack_b8 != (int **)0x0) {
              iVar31 = iVar32;
            }
          }
code_r0x000100475ddc:
          uStack_c0 = ppiVar23;
          FUN_100e077ec(&uStack_c0);
        }
        else {
          if (bVar27 == 0xd) {
            if (piStack_b0 == (int *)0x6) {
              iVar31 = 1;
              if (*(int *)ppiStack_b8 != 0x61726170 || *(short *)((long)ppiStack_b8 + 4) != 0x736d)
              {
                iVar31 = 2;
              }
            }
            else {
              if (piStack_b0 != (int *)0x2) goto code_r0x000100475da8;
              iVar31 = 2;
              if (*(short *)ppiStack_b8 == 0x6469) {
                iVar31 = 0;
              }
            }
            goto code_r0x000100475ddc;
          }
          if (bVar27 != 0xe) {
            if (bVar27 != 0xf) goto code_r0x0001004765d4;
            if (piStack_b0 == (int *)0x6) {
              if (((((*(byte *)ppiStack_b8 != 0x70) || (*(byte *)((long)ppiStack_b8 + 1) != 0x61))
                   || (*(byte *)((long)ppiStack_b8 + 2) != 0x72)) ||
                  ((*(byte *)((long)ppiStack_b8 + 3) != 0x61 ||
                   (*(byte *)((long)ppiStack_b8 + 4) != 0x6d)))) ||
                 (*(byte *)((long)ppiStack_b8 + 5) != 0x73)) goto code_r0x000100475da8;
              iVar31 = 1;
            }
            else if (((piStack_b0 == (int *)0x2) && (*(byte *)ppiStack_b8 == 0x69)) &&
                    (*(byte *)((long)ppiStack_b8 + 1) == 100)) {
              iVar31 = 0;
            }
            else {
code_r0x000100475da8:
              iVar31 = 2;
            }
            goto code_r0x000100475ddc;
          }
          if (ppiStack_a8 == (int **)0x6) {
            if ((((((char)*piStack_b0 != 'p') || (*(char *)((long)piStack_b0 + 1) != 'a')) ||
                 (*(char *)((long)piStack_b0 + 2) != 'r')) ||
                ((*(char *)((long)piStack_b0 + 3) != 'a' || ((char)piStack_b0[1] != 'm')))) ||
               (*(char *)((long)piStack_b0 + 5) != 's')) goto code_r0x000100475d18;
            iVar31 = 1;
          }
          else if (((ppiStack_a8 == (int **)0x2) && ((char)*piStack_b0 == 'i')) &&
                  (*(char *)((long)piStack_b0 + 1) == 'd')) {
            iVar31 = 0;
          }
          else {
code_r0x000100475d18:
            iVar31 = 2;
          }
joined_r0x000100475d50:
          if (ppiStack_b8 != (int **)0x0) {
            _free();
          }
        }
        uVar4 = uStack_ef;
        uVar3 = uStack_f0;
        uVar2 = uStack_f7;
        bVar1 = bStack_f8;
        bVar27 = (byte)piStack_310;
        ppiVar33 = ppiStack_328;
        bStack_f8 = (byte)unaff_x28;
        uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
        uStack_f0 = SUB81(ppiStack_328,0);
        uStack_ef = (undefined7)((ulong)ppiStack_328 >> 8);
        if (iVar31 == 0) {
          if (unaff_x23 != (int *)0x8000000000000001) {
            ppiStack_2d0 = (int **)((long)unaff_x25 + 1);
            piStack_88 = (int *)&UNK_108ca26b0;
            ppiStack_80 = (int **)0x2;
            ppiVar28 = &piStack_88;
            ppiVar33 = (int **)&UNK_100c7b000;
            unaff_x22 = ppiStack_320;
            unaff_x27 = ppiStack_328;
            ppiStack_2e8 = param_2;
            goto code_r0x000100476518;
          }
          piStack_310._0_1_ = 0x16;
          if (bVar27 == 0x16) {
            ppiVar28 = (int **)((long)unaff_x25 + 1);
            goto code_r0x000100476570;
          }
          piVar24 = *unaff_x21;
          unaff_x22[1] = unaff_x21[1];
          *unaff_x22 = piVar24;
          uVar30 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
          uStack_c0 = (int **)CONCAT71(uStack_c0._1_7_,bVar27);
          bStack_f8 = bVar1;
          uStack_f7 = uVar2;
          uStack_f0 = uVar3;
          uStack_ef = uVar4;
          func_0x00010135ba2c(&piStack_88,&uStack_c0);
code_r0x000100475ea4:
          if (piStack_88 == (int *)0x8000000000000001) {
            ppiStack_2d0 = (int **)((long)unaff_x25 + 1);
            bStack_f8 = (byte)unaff_x28;
            uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
            uStack_f0 = SUB81(ppiStack_328,0);
            uStack_ef = (undefined7)((ulong)ppiStack_328 >> 8);
            unaff_x22 = ppiStack_320;
            unaff_x27 = ppiStack_328;
            ppiStack_2e8 = param_2;
            goto code_r0x000100476234;
          }
          ppiStack_320 = ppiStack_80;
          piStack_330 = piStack_78;
          unaff_x23 = piStack_88;
        }
        else if (iVar31 == 1) {
          if (unaff_x24 != (int **)0x8000000000000000) {
            ppiStack_2d0 = (int **)((long)unaff_x25 + 1);
            piStack_88 = (int *)&UNK_108cb9606;
            ppiStack_80 = (int **)0x6;
            uStack_c0 = &piStack_88;
            ppiStack_b8 = (int **)&DAT_100c7b3a0;
            ppiStack_2e8 = param_2;
            piVar24 = (int *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
            unaff_x20 = &piStack_310;
            *ppiStack_338 = (int *)0x800000000000006e;
            ppiStack_338[1] = piVar24;
            unaff_x27 = ppiVar33;
            unaff_x22 = ppiStack_320;
            goto joined_r0x0001004764e4;
          }
          piStack_310._0_1_ = 0x16;
          if (bVar27 == 0x16) {
            ppiVar28 = (int **)((long)unaff_x25 + 1);
            goto code_r0x0001004765a4;
          }
          piVar24 = *unaff_x21;
          puStack_318[1] = unaff_x21[1];
          *puStack_318 = piVar24;
          uVar30 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)puStack_318 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)puStack_318 + 0xf) = uVar30;
          piStack_88 = (int *)CONCAT71(piStack_88._1_7_,bVar27);
          bStack_f8 = bVar1;
          uStack_f7 = uVar2;
          uStack_f0 = uVar3;
          uStack_ef = uVar4;
          func_0x0001012933f8(&uStack_c0,&piStack_88);
          if (uStack_c0 == (int **)0x8000000000000000) {
            ppiStack_2d0 = (int **)((long)unaff_x25 + 1);
            ppiVar28 = ppiStack_b8;
            ppiStack_2e8 = param_2;
            goto code_r0x000100476204;
          }
          ppiStack_328 = ppiStack_b8;
          ppiStack_e0 = ppiStack_a8;
          uStack_e8 = SUB81(piStack_b0,0);
          uStack_e7 = (undefined7)((ulong)piStack_b0 >> 8);
          piStack_d0 = piStack_98;
          piStack_d8 = piStack_a0;
          piStack_c8 = piStack_90;
          unaff_x24 = uStack_c0;
          unaff_x28 = uStack_c0;
        }
        else {
          ppiVar28 = (int **)(ulong)(byte)piStack_310;
          bStack_f8 = bVar1;
          uStack_f7 = uVar2;
          uStack_f0 = uVar3;
          uStack_ef = uVar4;
code_r0x000100475ec8:
          bVar27 = (byte)ppiVar28;
          piStack_310._0_1_ = 0x16;
          if ((int)ppiVar28 == 0x16) {
            ppiVar28 = (int **)((long)unaff_x25 + 1);
            goto code_r0x000100476540;
          }
          piVar24 = *unaff_x21;
          unaff_x22[1] = unaff_x21[1];
          *unaff_x22 = piVar24;
code_r0x000100475ee0:
          uVar30 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar30;
code_r0x000100475ee8:
          uStack_c0 = (int **)CONCAT71(uStack_c0._1_7_,bVar27);
          FUN_100e077ec(&uStack_c0);
        }
        ppiVar33 = unaff_x27 + 8;
        unaff_x25 = (int **)((long)unaff_x25 + 1);
        ppiVar35 = ppiStack_340;
        ppiVar23 = unaff_x19;
        unaff_x27 = param_2;
      } while (ppiVar33 != unaff_x19);
      ppiVar33 = ppiStack_338;
      bStack_f8 = (byte)unaff_x28;
      uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
      uStack_f0 = SUB81(ppiStack_328,0);
      uStack_ef = (undefined7)((ulong)ppiStack_328 >> 8);
      unaff_x22 = ppiStack_320;
      param_2 = ppiStack_338;
      unaff_x27 = ppiStack_328;
      ppiStack_2e8 = ppiVar23;
      ppiStack_2d0 = ppiVar35;
      if (unaff_x23 != (int *)0x8000000000000001) {
        if (unaff_x24 != (int **)0x8000000000000000) {
          unaff_x20 = (int **)0x800000000000006e;
          ppiStack_338[4] = (int *)ppiStack_e0;
          ppiStack_338[3] = (int *)CONCAT71(uStack_e7,uStack_e8);
          ppiStack_338[6] = piStack_d0;
          ppiStack_338[5] = piStack_d8;
          *ppiStack_338 = (int *)0x800000000000005d;
          ppiStack_338[1] = (int *)unaff_x24;
          ppiStack_338[2] = (int *)ppiStack_328;
          ppiStack_338[7] = piStack_c8;
          ppiStack_338[8] = unaff_x23;
          ppiStack_338[9] = (int *)ppiStack_320;
          ppiStack_338[10] = piStack_330;
          param_2 = &piStack_2c0;
          unaff_x21 = ppiStack_338;
          goto code_r0x0001004761ac;
        }
        piStack_88 = (int *)&UNK_108cb9606;
        ppiStack_80 = (int **)0x6;
        uStack_c0 = &piStack_88;
        ppiStack_b8 = (int **)&DAT_100c7b3a0;
        piVar24 = (int *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
        *ppiVar33 = (int *)0x800000000000006e;
        ppiVar33[1] = piVar24;
        if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
          _free(ppiStack_320);
        }
        unaff_x20 = &piStack_310;
        goto LAB_100476278;
      }
    }
    piStack_88 = (int *)&UNK_108ca26b0;
    ppiStack_80 = (int **)0x2;
    uStack_c0 = &piStack_88;
    ppiStack_b8 = (int **)&DAT_100c7b3a0;
    unaff_x23 = (int *)0x8000000000000001;
    piVar24 = (int *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
    goto LAB_1004760cc;
  case 0x16:
  case 0x43:
    goto code_r0x000100476304;
  case 0x17:
  case 0x47:
  case 0xca:
  case 0xe0:
    goto code_r0x000100476314;
  case 0x18:
    goto code_r0x0001004762dc;
  case 0x1f:
  case 0x6f:
  case 0x9b:
    goto code_r0x0001004762d0;
  case 0x21:
  case 0xb1:
    goto LAB_100476278;
  case 0x24:
    goto code_r0x000100476250;
  case 0x25:
  case 0x45:
    goto code_r0x0001004762e4;
  case 0x26:
  case 0xbf:
    goto code_r0x000100476248;
  case 0x28:
  case 199:
  case 0xdd:
    goto code_r0x000100476388;
  case 0x2d:
    goto code_r0x000100476384;
  case 0x30:
  case 0x76:
  case 0xa2:
    goto code_r0x000100476310;
  case 0x32:
  case 0x5f:
    goto code_r0x0001004763ac;
  case 0x33:
    goto code_r0x00010047636c;
  case 0x34:
  case 0x59:
    goto code_r0x0001004763c4;
  case 0x35:
    goto code_r0x000100476340;
  case 0x36:
  case 0x58:
    goto code_r0x0001004763b4;
  case 0x37:
  case 0x7b:
  case 0xa7:
    goto code_r0x0001004762e8;
  case 0x38:
    goto code_r0x000100476318;
  case 0x39:
    goto code_r0x00010047639c;
  case 0x3a:
  case 0x4b:
  case 0x6e:
  case 0x9a:
    goto code_r0x0001004762c0;
  case 0x3c:
  case 0x75:
  case 0xa1:
  case 0xb8:
    goto code_r0x0001004762b8;
  case 0x3e:
    goto code_r0x000100476414;
  case 0x3f:
  case 0xc4:
    goto code_r0x000100475ee8;
  case 0x40:
    goto code_r0x000100475f2c;
  case 0x46:
  case 0xbd:
    goto code_r0x000100476290;
  case 0x49:
  case 0xd1:
  case 0xe7:
    goto code_r0x0001004762ec;
  case 0x4d:
  case 0xb0:
    goto code_r0x000100476268;
  case 0x4f:
  case 0xd2:
  case 0xe8:
    goto code_r0x00010047631c;
  case 0x50:
  case 0xb2:
    goto code_r0x000100476240;
  case 0x51:
    goto code_r0x0001004762d4;
  case 0x52:
    goto code_r0x000100476238;
  case 0x55:
    goto code_r0x000100475ee0;
  case 0x56:
    goto code_r0x000100475f24;
  case 0x5d:
    goto LAB_1004763d4;
  case 0x5e:
    goto code_r0x0001004763ec;
  case 0x60:
    goto code_r0x000100476404;
  case 99:
    goto code_r0x000100476328;
  case 0x65:
    goto code_r0x0001004763dc;
  case 0x66:
  case 0x78:
  case 0xa4:
    goto code_r0x000100476300;
  case 0x6a:
    goto code_r0x000100476454;
  case 0x71:
  case 0x9d:
    goto code_r0x0001004762b0;
  case 0x72:
  case 0x9e:
    goto LAB_10047625c;
  case 0x73:
  case 0x9f:
    goto code_r0x0001004762e0;
  case 0x77:
  case 0xa3:
    goto code_r0x00010047628c;
  case 0x79:
  case 0xa5:
  case 0xb9:
code_r0x000100476234:
    unaff_x23 = (int *)0x8000000000000001;
code_r0x000100476238:
    param_2 = ppiStack_80;
    ppiVar23 = ppiStack_338;
code_r0x000100476240:
    unaff_x20 = &piStack_310;
    ppiVar28 = (int **)0x6e;
code_r0x000100476248:
    *ppiVar23 = (int *)((ulong)ppiVar28 | 0x8000000000000000);
    ppiVar23[1] = (int *)param_2;
code_r0x000100476250:
    in_ZR = unaff_x24 == (int **)0x8000000000000000;
code_r0x000100476258:
    if (!(bool)in_ZR) goto joined_r0x0001004764e4;
    goto LAB_10047625c;
  case 0x7a:
  case 0xa6:
    goto code_r0x000100476264;
  case 0x7c:
  case 0xa8:
  case 0xbc:
    goto code_r0x00010047620c;
  case 0x7e:
  case 0xaa:
  case 0xb4:
code_r0x000100476204:
    ppiVar33 = (int **)0x800000000000006e;
code_r0x00010047620c:
    *ppiStack_338 = (int *)ppiVar33;
    ppiStack_338[1] = (int *)ppiVar28;
    unaff_x20 = &piStack_310;
    unaff_x22 = ppiStack_320;
    goto LAB_10047625c;
  case 0x80:
  case 0xac:
    goto code_r0x000100476360;
  case 0x81:
  case 0xad:
    goto code_r0x000100475ec8;
  case 0x82:
  case 0xae:
    goto code_r0x000100475f0c;
  case 0xb3:
    goto code_r0x000100476258;
  case 0xb5:
    goto code_r0x000100476288;
  case 0xb7:
    goto code_r0x000100476260;
  case 0xbb:
    goto code_r0x0001004761dc;
  case 0xbe:
    goto code_r0x0001004761b4;
  case 0xc0:
code_r0x0001004761ac:
    param_3 = unaff_x21;
    param_4 = (undefined *)0x1c0;
    unaff_x21 = param_3;
code_r0x0001004761b4:
    _memcpy(param_2,param_3,param_4);
    FUN_100d34830(&ppiStack_2f0);
    if (unaff_x19 != ppiVar23) {
      ppiVar28 = (int **)((ulong)((long)unaff_x19 - (long)ppiVar23) >> 6);
      param_4 = &UNK_10b23a000;
      uStack_c0 = ppiVar35;
code_r0x0001004761dc:
      piVar24 = (int *)thunk_FUN_1087e422c((byte *)((long)ppiVar28 + (long)ppiVar35),&uStack_c0,
                                           param_4 + 400);
      *unaff_x21 = (int *)unaff_x20;
      unaff_x21[1] = piVar24;
      goto code_r0x000100476480;
    }
    goto LAB_1004763d4;
  case 0xc2:
    goto code_r0x000100476308;
  case 0xc3:
    goto code_r0x000100475ea4;
  case 0xcc:
  case 0xe2:
    break;
  case 0xcd:
  case 0xe3:
    goto code_r0x000100476370;
  case 0xce:
  case 0xe4:
    goto code_r0x0001004763c8;
  case 0xd0:
  case 0xe6:
    goto code_r0x0001004763b8;
  case 0xd3:
  case 0xe9:
    goto code_r0x0001004763a0;
  case 0xd4:
  case 0xea:
    goto code_r0x0001004762c4;
  case 0xd6:
  case 0xec:
    goto code_r0x0001004762bc;
  case 0xd8:
  case 0xee:
    goto code_r0x000100476418;
  case 0xf2:
code_r0x0001004765a4:
    bStack_f8 = (byte)unaff_x28;
    uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_f0 = SUB81(ppiStack_328,0);
    uStack_ef = (undefined7)((ulong)ppiStack_328 >> 8);
    ppiStack_2e8 = param_2;
    ppiStack_2d0 = ppiVar28;
  case 0xf3:
    param_2 = (int **)&UNK_108ca1a98;
    param_4 = &UNK_10b24f000;
code_r0x0001004765c4:
    param_4 = param_4 + 0x848;
    param_3 = (int **)0x2c;
code_r0x0001004765cc:
    FUN_107c05cac(param_2,param_3,param_4);
code_r0x0001004765d0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1004765d4);
    (*pcVar5)();
  case 0xf4:
    goto code_r0x00010047657c;
  case 0xf5:
    goto code_r0x000100476594;
  case 0xf6:
code_r0x000100476540:
    ppiStack_2e8 = param_2;
    ppiStack_2d0 = ppiVar28;
  case 0xfe:
    bStack_f8 = (byte)unaff_x28;
    uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_f0 = SUB81(ppiStack_328,0);
    uStack_ef = (undefined7)((ulong)ppiStack_328 >> 8);
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x0001004765d0;
  case 0xf7:
    goto code_r0x0001004765c4;
  case 0xf8:
code_r0x0001004765dc:
    unaff_x22 = ppiStack_320;
    unaff_x27 = ppiStack_328;
    ppiStack_2d0 = ppiVar28;
  case 0xfc:
    bStack_f8 = (byte)unaff_x28;
    uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_f0 = SUB81(unaff_x27,0);
    uStack_ef = (undefined7)((ulong)unaff_x27 >> 8);
    param_4 = &UNK_10b20fc80;
    param_2 = (int **)&uStack_c0;
code_r0x0001004765f4:
    piVar24 = (int *)thunk_FUN_108855b04(param_2,&piStack_88,param_4);
    param_2 = ppiStack_338;
    goto LAB_1004760cc;
  case 0xf9:
    goto code_r0x00010047659c;
  case 0xfa:
    goto code_r0x0001004765f4;
  case 0xfb:
code_r0x000100476570:
    ppiVar29 = ppiStack_328;
    ppiStack_2e8 = param_2;
    ppiStack_2d0 = ppiVar28;
code_r0x00010047657c:
    bStack_f8 = (byte)unaff_x28;
    uStack_f7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_f0 = SUB81(ppiVar29,0);
    uStack_ef = (undefined7)((ulong)ppiVar29 >> 8);
    param_2 = (int **)&UNK_108ca1a98;
    param_4 = &UNK_10b24f848;
code_r0x000100476594:
    FUN_107c05cac(param_2,0x2c,param_4);
code_r0x00010047659c:
    goto code_r0x0001004765d0;
  case 0xfd:
code_r0x000100476518:
    ppiStack_b8 = ppiVar33 + 0x74;
    uStack_c0 = ppiVar28;
    piVar24 = (int *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
    param_2 = ppiStack_338;
LAB_1004760cc:
    unaff_x20 = &piStack_310;
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar24;
    if (unaff_x24 != (int **)0x8000000000000000) {
joined_r0x0001004764e4:
      if (unaff_x24 != (int **)0x0) {
        _free(unaff_x27);
      }
      if ((ppiStack_e0 != (int **)0x8000000000000000) && (ppiStack_e0 != (int **)0x0)) {
        _free(piStack_d8);
      }
    }
LAB_10047625c:
    ppiVar28 = (int **)0x2;
code_r0x000100476260:
    ppiVar28 = (int **)((ulong)ppiVar28 | 0x8000000000000000);
code_r0x000100476264:
    in_OV = SBORROW8((long)unaff_x23,(long)ppiVar28);
    in_NG = (long)unaff_x23 - (long)ppiVar28 < 0;
code_r0x000100476268:
    if ((in_NG == in_OV) && (unaff_x23 != (int *)0x0)) {
      _free(unaff_x22);
    }
LAB_100476278:
    FUN_100d34830(unaff_x20 + 4);
    in_ZR = (byte)piStack_310 == 0x16;
code_r0x000100476288:
    if (!(bool)in_ZR) {
code_r0x00010047628c:
      param_2 = &piStack_310;
code_r0x000100476290:
      FUN_100e077ec(param_2);
    }
    goto LAB_1004763d4;
  case 0xff:
    goto code_r0x0001004765cc;
  }
  piStack_2c0 = (int *)CONCAT71(piStack_2c0._1_7_,bVar27);
code_r0x0001004763b4:
  param_4 = &UNK_10b21b000;
code_r0x0001004763b8:
  param_4 = param_4 + 0xc70;
  ppiVar23 = &piStack_2c0;
  param_3 = &piStack_88;
code_r0x0001004763c4:
  ppiVar23 = (int **)FUN_107c05dcc(ppiVar23,param_3,param_4);
code_r0x0001004763c8:
  *param_2 = (int *)0x800000000000006e;
  param_2[1] = (int *)ppiVar23;
LAB_1004763d4:
code_r0x0001004763dc:
code_r0x0001004763ec:
  return;
}

