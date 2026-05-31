
/* WARNING: Type propagation algorithm not settling */

void FUN_1004734a0(undefined1 param_1 [16],int **param_2,int **param_3,undefined *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  code *pcVar6;
  int ***pppiVar7;
  int ***pppiVar8;
  int ***pppiVar9;
  int ***pppiVar10;
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
  int *piVar23;
  int **ppiVar24;
  int *piVar25;
  uint uVar26;
  byte bVar27;
  int **ppiVar28;
  undefined8 uVar29;
  int iVar30;
  int iVar31;
  int **ppiVar32;
  int **unaff_x19;
  int **unaff_x20;
  long lVar33;
  int **unaff_x21;
  int **unaff_x22;
  int *unaff_x23;
  int **unaff_x24;
  int **unaff_x25;
  int **ppiVar34;
  int **unaff_x27;
  int **unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar35;
  undefined8 unaff_x30;
  int **ppiVar36;
  byte abStack_380 [80];
  int **ppiStack_330;
  int **ppiStack_328;
  int *piStack_320;
  int **ppiStack_318;
  undefined8 *puStack_310;
  int **ppiStack_308;
  int *piStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  int *piStack_2e8;
  int **ppiStack_2e0;
  int **ppiStack_2d8;
  int *piStack_2d0;
  int **ppiStack_2c8;
  int **ppiStack_2c0;
  int *piStack_2b0;
  int **ppiStack_2a8;
  int **ppiStack_2a0;
  int *piStack_298;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  int **ppiStack_d0;
  int **ppiStack_c8;
  int *piStack_c0;
  undefined8 uStack_b8;
  int **ppiStack_b0;
  int *piStack_a8;
  int **ppiStack_a0;
  int **ppiStack_98;
  int *piStack_90;
  int *piStack_88;
  int **ppiStack_80;
  int *piStack_78;
  int ***pppiVar16;
  int ***pppiVar22;
  
  piVar23 = param_1._8_8_;
  ppiVar36 = param_1._0_8_;
  puVar35 = &stack0xfffffffffffffff0;
  pppiVar15 = &ppiStack_330;
  pppiVar10 = &ppiStack_330;
  pppiVar21 = &ppiStack_330;
  bVar27 = *(byte *)param_3;
  ppiVar28 = (int **)(ulong)bVar27;
  ppiVar32 = (int **)&UNK_108c996ea;
  pppiVar17 = &ppiStack_330;
  pppiVar18 = &ppiStack_330;
  pppiVar19 = &ppiStack_330;
  pppiVar20 = &ppiStack_330;
  pppiVar22 = &ppiStack_330;
  pppiVar11 = &ppiStack_330;
  pppiVar12 = &ppiStack_330;
  pppiVar13 = &ppiStack_330;
  pppiVar14 = &ppiStack_330;
  pppiVar16 = &ppiStack_330;
  pppiVar7 = &ppiStack_330;
  pppiVar8 = &ppiStack_330;
  pppiVar9 = &ppiStack_330;
  ppiVar24 = param_2;
  ppiVar34 = unaff_x25;
  uVar4 = uStack_e0;
  uVar5 = uStack_df;
  switch(bVar27) {
  case 0:
  case 0xa6:
    piStack_2b0 = (int *)((ulong)CONCAT61(piStack_2b0._2_6_,*(byte *)((long)param_3 + 1)) << 8);
  case 0xc2:
  case 0xee:
    piStack_2b0 = (int *)((ulong)piStack_2b0 & 0xffffffffffffff00);
code_r0x000100473d98:
    goto code_r0x000100473dec;
  case 1:
    ppiVar28 = (int **)(ulong)*(byte *)((long)param_3 + 1);
  case 0x75:
code_r0x000100473da0:
    ppiStack_2a8 = ppiVar28;
code_r0x000100473da4:
    bVar27 = 1;
code_r0x000100473da8:
    break;
  case 2:
    ppiVar28 = (int **)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x51:
  case 0x8e:
  case 0xd5:
    goto code_r0x000100473da0;
  case 3:
    ppiVar28 = (int **)(ulong)*(uint *)((long)param_3 + 4);
  case 0x49:
  case 0x70:
  case 0xcd:
    goto code_r0x000100473da0;
  case 4:
  case 0x5b:
  case 0x84:
    ppiVar28 = (int **)param_3[1];
  case 0x23:
  case 0x4e:
  case 0xaa:
  case 0xb6:
  case 0xd2:
  case 0xe2:
    goto code_r0x000100473da0;
  case 5:
    ppiVar28 = (int **)(long)(char)*(byte *)((long)param_3 + 1);
  case 0x4f:
  case 0xd3:
  case 0x74:
  case 0xa1:
code_r0x000100473de0:
    bVar27 = 2;
    ppiStack_2a8 = ppiVar28;
    break;
  case 6:
    ppiVar28 = (int **)(long)*(short *)((long)param_3 + 2);
  case 0x4c:
  case 0x73:
  case 0x96:
  case 0xa9:
  case 0xd0:
    goto code_r0x000100473de0;
  case 7:
  case 0x9e:
    ppiVar28 = (int **)(long)*(int *)((long)param_3 + 4);
  case 0x42:
  case 0x60:
  case 0x7d:
  case 0xc6:
    goto code_r0x000100473de0;
  case 8:
    ppiVar28 = (int **)param_3[1];
    goto code_r0x000100473de0;
  case 9:
  case 0x5d:
    ppiVar36 = (int **)(ulong)*(uint *)((long)param_3 + 4);
  case 0xa5:
    ppiVar36 = (int **)(double)SUB84(ppiVar36,0);
code_r0x000100473d60:
code_r0x000100473dd0:
    bVar27 = 3;
    ppiStack_2a8 = ppiVar36;
code_r0x000100473dd8:
    break;
  case 10:
    ppiVar36 = (int **)param_3[1];
    goto code_r0x000100473dd0;
  case 0xb:
  case 0x86:
    param_3 = (int **)(ulong)*(uint *)((long)param_3 + 4);
  case 0x16:
  case 0x61:
  case 0xb1:
  case 0xdd:
code_r0x000100473d08:
    pppiVar11 = (int ***)&stack0xffffffffffffffa0;
    puVar35 = unaff_x29;
code_r0x000100473d10:
    unaff_x20 = *(int ***)((long)pppiVar11 + 0x40);
    unaff_x19 = *(int ***)((long)pppiVar11 + 0x48);
    pppiVar12 = pppiVar11;
code_r0x000100473d14:
    pppiVar13 = pppiVar12;
code_r0x000100473d18:
    pppiVar14 = pppiVar13;
code_r0x000100473d1c:
    pppiVar16 = pppiVar14;
code_r0x000100473d20:
    pppiVar15 = (int ***)((long)pppiVar16 + 0x60);
code_r0x000100473d24:
    *(int ***)((long)pppiVar15 + -0x20) = unaff_x20;
    *(int ***)((long)pppiVar15 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppiVar15 + -0x10) = puVar35;
    *(undefined8 *)((long)pppiVar15 + -8) = unaff_x30;
    *(undefined4 *)((long)pppiVar15 + -0x44) = 0;
    uVar26 = (uint)param_3;
    if (uVar26 < 0x80) {
      *(byte *)((long)pppiVar15 + -0x44) = (byte)param_3;
      uVar29 = 1;
    }
    else {
      bVar27 = (byte)param_3 & 0x3f | 0x80;
      if (uVar26 < 0x800) {
        *(byte *)((long)pppiVar15 + -0x44) = (byte)(uVar26 >> 6) | 0xc0;
        *(byte *)((long)pppiVar15 + -0x43) = bVar27;
        uVar29 = 2;
      }
      else {
        bVar1 = (byte)(uVar26 >> 6) & 0x3f | 0x80;
        if (uVar26 < 0x10000) {
          *(byte *)((long)pppiVar15 + -0x44) = (byte)(uVar26 >> 0xc) | 0xe0;
          *(byte *)((long)pppiVar15 + -0x43) = bVar1;
          *(byte *)((long)pppiVar15 + -0x42) = bVar27;
          uVar29 = 3;
        }
        else {
          *(byte *)((long)pppiVar15 + -0x44) = (byte)(uVar26 >> 0x12) | 0xf0;
          *(byte *)((long)pppiVar15 + -0x43) = (byte)(uVar26 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppiVar15 + -0x42) = bVar1;
          *(byte *)((long)pppiVar15 + -0x41) = bVar27;
          uVar29 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppiVar15 + -0x38) = (undefined1 *)((long)pppiVar15 + -0x44);
    *(undefined8 *)((long)pppiVar15 + -0x30) = uVar29;
    *(undefined1 *)((long)pppiVar15 + -0x40) = 5;
    piVar23 = (int *)func_0x000108a4a50c((undefined1 *)((long)pppiVar15 + -0x40),
                                         (undefined1 *)((long)pppiVar15 + -0x21),&UNK_10b21c210);
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar23;
    return;
  case 0xc:
  case 0x5f:
    param_3 = param_3 + 1;
  case 0xa8:
  case 0xba:
  case 0xe6:
code_r0x000100473d38:
    pppiVar17 = (int ***)&stack0xffffffffffffffa0;
code_r0x000100473d3c:
    puVar35 = *(undefined1 **)((long)pppiVar17 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppiVar17 + 0x58);
    unaff_x20 = *(int ***)((long)pppiVar17 + 0x40);
    unaff_x19 = *(int ***)((long)pppiVar17 + 0x48);
    pppiVar18 = pppiVar17;
code_r0x000100473d44:
    unaff_x22 = *(int ***)((long)pppiVar18 + 0x30);
    unaff_x21 = *(int ***)((long)pppiVar18 + 0x38);
    pppiVar19 = pppiVar18;
code_r0x000100473d48:
    pppiVar20 = pppiVar19;
code_r0x000100473d4c:
    pppiVar22 = pppiVar20;
code_r0x000100473d50:
    pppiVar21 = (int ***)((long)pppiVar22 + 0x60);
code_r0x000100473d54:
    *(int ***)((long)pppiVar21 + -0x30) = unaff_x22;
    *(int ***)((long)pppiVar21 + -0x28) = unaff_x21;
    *(int ***)((long)pppiVar21 + -0x20) = unaff_x20;
    *(int ***)((long)pppiVar21 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppiVar21 + -0x10) = puVar35;
    *(undefined8 *)((long)pppiVar21 + -8) = unaff_x30;
    piVar23 = param_3[1];
    piVar25 = param_3[2];
    *(int **)((long)pppiVar21 + -0x48) = piVar23;
    *(int **)((long)pppiVar21 + -0x40) = piVar25;
    *(undefined1 *)((long)pppiVar21 + -0x50) = 5;
    piVar25 = (int *)func_0x000108a4a50c((undefined1 *)((long)pppiVar21 + -0x50),
                                         (undefined1 *)((long)pppiVar21 + -0x31),&UNK_10b21c210);
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar25;
    if (*param_3 != (int *)0x0) {
      _free(piVar23);
    }
    return;
  case 0xd:
  case 0xa3:
    ppiVar28 = (int **)param_3[1];
    ppiVar32 = (int **)param_3[2];
  case 0x6f:
    ppiStack_2a8 = ppiVar28;
    ppiStack_2a0 = ppiVar32;
code_r0x000100473dbc:
    bVar27 = 5;
code_r0x000100473dc0:
    break;
  case 0xe:
    param_3 = param_3 + 1;
  case 0x18:
  case 0x32:
  case 100:
  case 0xfc:
    pppiVar7 = (int ***)&stack0xffffffffffffffa0;
code_r0x000100473ce4:
    puVar35 = *(undefined1 **)((long)pppiVar7 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppiVar7 + 0x58);
    unaff_x20 = *(int ***)((long)pppiVar7 + 0x40);
    unaff_x19 = *(int ***)((long)pppiVar7 + 0x48);
    pppiVar8 = pppiVar7;
code_r0x000100473cec:
    unaff_x22 = *(int ***)((long)pppiVar8 + 0x30);
    unaff_x21 = *(int ***)((long)pppiVar8 + 0x38);
    pppiVar9 = pppiVar8;
code_r0x000100473cf4:
    pppiVar10 = (int ***)((long)pppiVar9 + 0x60);
code_r0x000100473cfc:
    *(int ***)((long)pppiVar10 + -0x30) = unaff_x22;
    *(int ***)((long)pppiVar10 + -0x28) = unaff_x21;
    *(int ***)((long)pppiVar10 + -0x20) = unaff_x20;
    *(int ***)((long)pppiVar10 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppiVar10 + -0x10) = puVar35;
    *(undefined8 *)((long)pppiVar10 + -8) = unaff_x30;
    piVar23 = param_3[1];
    piVar25 = param_3[2];
    *(int **)((long)pppiVar10 + -0x48) = piVar23;
    *(int **)((long)pppiVar10 + -0x40) = piVar25;
    *(undefined1 *)((long)pppiVar10 + -0x50) = 6;
    piVar25 = (int *)func_0x000108a4a50c((undefined1 *)((long)pppiVar10 + -0x50),
                                         (undefined1 *)((long)pppiVar10 + -0x31),&UNK_10b21c210);
    *param_2 = (int *)0x800000000000006e;
    param_2[1] = piVar25;
    if (*param_3 != (int *)0x0) {
      _free(piVar23);
    }
    return;
  case 0xf:
    ppiVar28 = (int **)param_3[1];
    ppiVar32 = (int **)param_3[2];
  case 0x5e:
    ppiStack_2a8 = ppiVar28;
    ppiStack_2a0 = ppiVar32;
code_r0x000100473d74:
    bVar27 = 6;
code_r0x000100473d78:
    break;
  case 0x10:
  case 0x1f:
    bVar27 = 8;
  case 0x50:
  case 0x5c:
  case 0xbf:
  case 0xd4:
  case 0xeb:
  case 0xf8:
    break;
  default:
    unaff_x20 = (int **)param_3[1];
    ppiStack_2a8 = (int **)unaff_x20[1];
    piStack_2b0 = *unaff_x20;
    piStack_298 = unaff_x20[3];
    ppiStack_2a0 = (int **)unaff_x20[2];
    func_0x000107c04728(param_2,&piStack_2b0);
  case 0xad:
code_r0x00010047393c:
    param_2 = unaff_x20;
code_r0x000100473940:
code_r0x000100473948:
code_r0x000100473958:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_2);
    return;
  case 0x12:
    bVar27 = 7;
    break;
  case 0x13:
  case 0x81:
    unaff_x20 = (int **)param_3[1];
    ppiStack_2a8 = (int **)unaff_x20[1];
    piStack_2b0 = *unaff_x20;
    piVar23 = unaff_x20[3];
    ppiVar36 = (int **)unaff_x20[2];
  case 0x55:
  case 0x6b:
  case 0xd9:
    ppiStack_2a0 = ppiVar36;
    piStack_298 = piVar23;
    func_0x000107c055d0(param_2,&piStack_2b0);
    goto code_r0x00010047393c;
  case 0x14:
  case 0x3f:
  case 0x82:
    unaff_x23 = param_3[1];
    unaff_x20 = (int **)param_3[2];
    unaff_x25 = (int **)param_3[3];
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    uStack_b8 = unaff_x20;
    ppiStack_b0 = unaff_x20;
  case 0x56:
  case 0x6c:
  case 0xda:
    ppiStack_98 = (int **)0x0;
    unaff_x21 = unaff_x20;
    piStack_a8 = unaff_x23;
    ppiStack_a0 = unaff_x19;
    if (unaff_x25 == (int **)0x0) {
code_r0x000100473994:
      param_3 = (int **)&UNK_10b22f9d8;
      param_4 = &UNK_10b20a590;
code_r0x0001004739a4:
      unaff_x22 = (int **)thunk_FUN_1087e422c(0,param_3,param_4);
code_r0x0001004739b0:
      *param_2 = (int *)0x800000000000006e;
      param_2[1] = (int *)unaff_x22;
code_r0x0001004739bc:
      lVar33 = ((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1;
      while (lVar33 = lVar33 + -1, lVar33 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (int *)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x000100473980:
      unaff_x21 = unaff_x20 + 4;
      ppiStack_b0 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x000100473994;
      uStack_2f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      piStack_300._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 1);
      uStack_2f8 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 1) >> 0x38);
      piStack_2e8 = unaff_x20[3];
      uStack_2f0 = SUB81(unaff_x20[2],0);
      uStack_2ef = (undefined7)((ulong)unaff_x20[2] >> 8);
      ppiStack_98 = (int **)0x1;
      piStack_300._0_1_ = *(byte *)unaff_x20;
      func_0x00010135ba2c(&bStack_e8,&piStack_300);
      unaff_x24 = (int **)CONCAT71(uStack_e7,bStack_e8);
      unaff_x22 = (int **)CONCAT71(uStack_df,uStack_e0);
      if (unaff_x24 == (int **)0x8000000000000001) goto code_r0x0001004739b0;
      if (unaff_x25 == (int **)0x1) {
code_r0x000100473a58:
        ppiVar24 = (int **)thunk_FUN_1087e422c(1,&UNK_10b22f9d8,&UNK_10b20a590);
code_r0x000100473a70:
        *param_2 = (int *)0x800000000000006e;
        param_2[1] = (int *)ppiVar24;
        if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
          _free(unaff_x22);
        }
        goto code_r0x0001004739bc;
      }
      unaff_x25 = (int **)CONCAT71(uStack_d7,uStack_d8);
      unaff_x21 = unaff_x20 + 8;
      bVar27 = *(byte *)(unaff_x20 + 4);
      ppiStack_b0 = unaff_x21;
      if (bVar27 == 0x16) goto code_r0x000100473a58;
      piVar23 = *(int **)((long)unaff_x20 + 0x29);
      ppiVar36 = *(int ***)((long)unaff_x20 + 0x21);
code_r0x000100473e38:
      uStack_df = SUB87(piVar23,0);
      uStack_e7 = SUB87(ppiVar36,0);
      uStack_e0 = (undefined1)((ulong)ppiVar36 >> 0x38);
      ppiStack_d0 = (int **)unaff_x20[7];
      uStack_d8 = SUB81(unaff_x20[6],0);
      uStack_d7 = (undefined7)((ulong)unaff_x20[6] >> 8);
      ppiVar32 = (int **)0x2;
code_r0x000100473e48:
      bStack_e8 = bVar27;
      ppiStack_98 = ppiVar32;
      func_0x00010134f328(&piStack_300,&bStack_e8);
      ppiVar24 = (int **)CONCAT71(uStack_2f7,uStack_2f8);
      if ((int *)CONCAT71(piStack_300._1_7_,(byte)piStack_300) == (int *)0x8000000000000000)
      goto code_r0x000100473a70;
      unaff_x19 = (int **)0x800000000000006e;
      param_2[4] = piStack_2e8;
      param_2[3] = (int *)CONCAT71(uStack_2ef,uStack_2f0);
      param_2[6] = (int *)ppiStack_2d8;
      param_2[5] = (int *)ppiStack_2e0;
      *param_2 = (int *)0x800000000000001b;
      param_2[1] = (int *)CONCAT71(piStack_300._1_7_,(byte)piStack_300);
code_r0x000100473e88:
      param_2[2] = (int *)ppiVar24;
      param_2[7] = (int *)unaff_x24;
      param_2[8] = (int *)unaff_x22;
      param_2[9] = (int *)unaff_x25;
      _memcpy(&piStack_2b0,param_2,0x1c0);
      piVar23 = (int *)FUN_100fbc738(&uStack_b8);
      if (piVar23 != (int *)0x0) {
        *param_2 = (int *)unaff_x19;
        param_2[1] = piVar23;
code_r0x000100473eb4:
        FUN_100e44f40(&piStack_2b0);
      }
    }
    goto code_r0x000100473e10;
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
    piStack_2d0 = param_3[1];
    ppiStack_2e0 = (int **)param_3[2];
    piVar23 = param_3[3];
    unaff_x19 = ppiStack_2e0 + (long)piVar23 * 8;
    piStack_300._0_1_ = 0x16;
    ppiStack_2c0 = (int **)0x0;
    ppiStack_2c8 = unaff_x19;
    if (piVar23 == (int *)0x0) {
      unaff_x22 = (int **)0x8000000000000000;
      bStack_e8 = 0;
      uStack_e7 = 0x80000000000000;
      ppiStack_2d8 = ppiStack_2e0;
code_r0x000100473ac0:
      piStack_88 = (int *)&UNK_108ca26b0;
      ppiStack_80 = (int **)0x2;
      uStack_b8 = &piStack_88;
      ppiStack_b0 = (int **)&DAT_100c7b3a0;
      unaff_x23 = (int *)0x8000000000000001;
      piVar23 = (int *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
      ppiStack_318 = unaff_x24;
LAB_100473af4:
      unaff_x27 = &piStack_300;
      *param_2 = (int *)0x800000000000006e;
      param_2[1] = piVar23;
      unaff_x24 = ppiStack_318;
      if (unaff_x22 == (int **)0x8000000000000000) goto LAB_100473c94;
      goto joined_r0x000100473f1c;
    }
    unaff_x25 = (int **)0x0;
    unaff_x24 = (int **)((ulong)&uStack_b8 | 1);
    unaff_x21 = (int **)((ulong)&piStack_300 | 1);
    puStack_310 = (undefined8 *)((ulong)&piStack_88 | 1);
    ppiStack_330 = (int **)(((long)piVar23 * 0x40 - 0x40U >> 6) + 1);
    unaff_x22 = (int **)0x8000000000000000;
    unaff_x23 = (int *)0x8000000000000001;
    unaff_x28 = (int **)0x8000000000000000;
    unaff_x27 = ppiStack_2e0;
    ppiStack_328 = param_2;
    ppiStack_2d8 = ppiStack_2e0;
    do {
      ppiVar32 = uStack_b8;
      uVar5 = uStack_e7;
      bVar1 = bStack_e8;
      param_2 = unaff_x27 + 8;
      bVar27 = *(byte *)unaff_x27;
      ppiVar34 = unaff_x25;
      ppiVar24 = param_2;
      if (bVar27 == 0x16) break;
      uStack_b8 = (int **)CONCAT71(uStack_b8._1_7_,bVar27);
      ppiVar24 = uStack_b8;
      piVar23 = unaff_x27[2];
      *(int **)((long)unaff_x24 + 0x17) = unaff_x27[3];
      *(int **)((long)unaff_x24 + 0xf) = piVar23;
      piVar23 = *(int **)((long)unaff_x27 + 1);
      unaff_x24[1] = *(int **)((long)unaff_x27 + 9);
      *unaff_x24 = piVar23;
      piStack_2e8 = unaff_x27[7];
      uStack_2f8 = SUB81(unaff_x27[5],0);
      uStack_2f7 = (undefined7)((ulong)unaff_x27[5] >> 8);
      piStack_300._0_1_ = (byte)unaff_x27[4];
      piStack_300._1_7_ = (undefined7)((ulong)unaff_x27[4] >> 8);
      uStack_2f0 = SUB81(unaff_x27[6],0);
      uStack_2ef = (undefined7)((ulong)unaff_x27[6] >> 8);
      bStack_e8 = (byte)unaff_x28;
      bVar2 = bStack_e8;
      uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
      uVar3 = uStack_e7;
      if (bVar27 < 0xd) {
        if (bVar27 == 1) {
          uStack_b8._1_1_ = SUB81(ppiVar32,1);
          iVar31 = 1;
          if (uStack_b8._1_1_ != '\x01') {
            iVar31 = 2;
          }
          iVar30 = 0;
          if (uStack_b8._1_1_ != '\0') {
            iVar30 = iVar31;
          }
        }
        else {
          if (bVar27 != 4) {
            if (bVar27 == 0xc) {
              if (ppiStack_a0 == (int **)0x6) {
                iVar30 = 1;
                if (*piStack_a8 != 0x61726170 || (short)piStack_a8[1] != 0x736d) {
                  iVar30 = 2;
                }
              }
              else if (ppiStack_a0 == (int **)0x2) {
                iVar30 = 2;
                if ((short)*piStack_a8 == 0x6469) {
                  iVar30 = 0;
                }
              }
              else {
                iVar30 = 2;
              }
              goto joined_r0x000100473778;
            }
code_r0x00010047401c:
            ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
            uStack_e0 = SUB81(ppiStack_308,0);
            uStack_df = (undefined7)((ulong)ppiStack_308 >> 8);
            ppiStack_2d8 = param_2;
            piVar23 = (int *)thunk_FUN_108855b04(&uStack_b8,&piStack_88,&UNK_10b20e6e0);
            param_2 = ppiStack_328;
            goto LAB_100473af4;
          }
          iVar31 = 1;
          if (ppiStack_b0 != (int **)0x1) {
            iVar31 = 2;
          }
          iVar30 = 0;
          if (ppiStack_b0 != (int **)0x0) {
            iVar30 = iVar31;
          }
        }
code_r0x000100473804:
        bStack_e8 = bVar1;
        uStack_e7 = uVar5;
        uStack_b8 = ppiVar24;
        FUN_100e077ec(&uStack_b8);
      }
      else {
        if (bVar27 == 0xd) {
          if (piStack_a8 == (int *)0x6) {
            iVar30 = 1;
            if (*(int *)ppiStack_b0 != 0x61726170 || *(short *)((long)ppiStack_b0 + 4) != 0x736d) {
              iVar30 = 2;
            }
          }
          else {
            if (piStack_a8 != (int *)0x2) goto code_r0x0001004737d0;
            iVar30 = 2;
            if (*(short *)ppiStack_b0 == 0x6469) {
              iVar30 = 0;
            }
          }
          goto code_r0x000100473804;
        }
        if (bVar27 != 0xe) {
          if (bVar27 != 0xf) goto code_r0x00010047401c;
          if (piStack_a8 == (int *)0x6) {
            if (((((*(byte *)ppiStack_b0 != 0x70) || (*(byte *)((long)ppiStack_b0 + 1) != 0x61)) ||
                 (*(byte *)((long)ppiStack_b0 + 2) != 0x72)) ||
                ((*(byte *)((long)ppiStack_b0 + 3) != 0x61 ||
                 (*(byte *)((long)ppiStack_b0 + 4) != 0x6d)))) ||
               (*(byte *)((long)ppiStack_b0 + 5) != 0x73)) goto code_r0x0001004737d0;
            iVar30 = 1;
          }
          else if (((piStack_a8 == (int *)0x2) && (*(byte *)ppiStack_b0 == 0x69)) &&
                  (*(byte *)((long)ppiStack_b0 + 1) == 100)) {
            iVar30 = 0;
          }
          else {
code_r0x0001004737d0:
            iVar30 = 2;
          }
          goto code_r0x000100473804;
        }
        if (ppiStack_a0 == (int **)0x6) {
          if ((((((char)*piStack_a8 != 'p') || (*(char *)((long)piStack_a8 + 1) != 'a')) ||
               (*(char *)((long)piStack_a8 + 2) != 'r')) ||
              ((*(char *)((long)piStack_a8 + 3) != 'a' || ((char)piStack_a8[1] != 'm')))) ||
             (*(char *)((long)piStack_a8 + 5) != 's')) goto code_r0x000100473740;
          iVar30 = 1;
        }
        else if (((ppiStack_a0 == (int **)0x2) && ((char)*piStack_a8 == 'i')) &&
                (*(char *)((long)piStack_a8 + 1) == 'd')) {
          iVar30 = 0;
        }
        else {
code_r0x000100473740:
          iVar30 = 2;
        }
joined_r0x000100473778:
        bStack_e8 = bVar1;
        uStack_e7 = uVar5;
        if (ppiStack_b0 != (int **)0x0) {
          _free();
        }
      }
      uVar5 = uStack_df;
      uVar4 = uStack_e0;
      bVar27 = (byte)piStack_300;
      uStack_e0 = SUB81(ppiStack_308,0);
      uStack_df = (undefined7)((ulong)ppiStack_308 >> 8);
      if (iVar30 == 0) {
        if (unaff_x23 != (int *)0x8000000000000001) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          piStack_88 = (int *)&UNK_108ca26b0;
          ppiStack_80 = (int **)0x2;
          uStack_b8 = &piStack_88;
          ppiStack_b0 = (int **)&DAT_100c7b3a0;
          ppiStack_2d8 = param_2;
          bStack_e8 = bVar2;
          uStack_e7 = uVar3;
          piVar23 = (int *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
          param_2 = ppiStack_328;
          goto LAB_100473af4;
        }
        piStack_300._0_1_ = 0x16;
        if (bVar27 == 0x16) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          ppiStack_2d8 = param_2;
          bStack_e8 = bVar2;
          uStack_e7 = uVar3;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100474018;
        }
        piVar23 = *unaff_x21;
        unaff_x24[1] = unaff_x21[1];
        *unaff_x24 = piVar23;
        uVar29 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x24 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x24 + 0xf) = uVar29;
        uStack_b8 = (int **)CONCAT71(uStack_b8._1_7_,bVar27);
        uStack_e0 = uVar4;
        uStack_df = uVar5;
        func_0x00010135ba2c(&piStack_88,&uStack_b8);
        if (piStack_88 == (int *)0x8000000000000001) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          uStack_e0 = SUB81(ppiStack_308,0);
          uStack_df = (undefined7)((ulong)ppiStack_308 >> 8);
          ppiStack_2d8 = param_2;
          bStack_e8 = bVar2;
          uStack_e7 = uVar3;
          goto code_r0x000100473c68;
        }
        ppiStack_318 = ppiStack_80;
        piStack_320 = piStack_78;
        unaff_x23 = piStack_88;
      }
      else if (iVar30 == 1) {
        if (unaff_x22 != (int **)0x8000000000000000) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          piStack_88 = (int *)&UNK_108cb9606;
          ppiStack_80 = (int **)0x6;
          uStack_b8 = &piStack_88;
          ppiStack_b0 = (int **)&DAT_100c7b3a0;
          ppiStack_2d8 = param_2;
          bStack_e8 = bVar2;
          uStack_e7 = uVar3;
          piVar23 = (int *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
          unaff_x27 = &piStack_300;
          *ppiStack_328 = (int *)0x800000000000006e;
          ppiStack_328[1] = piVar23;
          unaff_x24 = ppiStack_318;
          goto joined_r0x000100473f1c;
        }
        piStack_300._0_1_ = 0x16;
        if (bVar27 == 0x16) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          ppiStack_2d8 = param_2;
          bStack_e8 = bVar2;
          uStack_e7 = uVar3;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100474018;
        }
        piVar23 = *unaff_x21;
        puStack_310[1] = unaff_x21[1];
        *puStack_310 = piVar23;
        uVar29 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)puStack_310 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)puStack_310 + 0xf) = uVar29;
        piStack_88 = (int *)CONCAT71(piStack_88._1_7_,bVar27);
        uStack_e0 = uVar4;
        uStack_df = uVar5;
        func_0x00010134f328(&uStack_b8,&piStack_88);
        if (uStack_b8 == (int **)0x8000000000000000) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          ppiVar28 = ppiStack_b0;
          ppiStack_2d8 = param_2;
          goto code_r0x000100473c38;
        }
        ppiStack_308 = ppiStack_b0;
        ppiStack_d0 = ppiStack_a0;
        uStack_d8 = SUB81(piStack_a8,0);
        uStack_d7 = (undefined7)((ulong)piStack_a8 >> 8);
        piStack_c0 = piStack_90;
        ppiStack_c8 = ppiStack_98;
        unaff_x22 = uStack_b8;
        unaff_x28 = uStack_b8;
      }
      else {
        piStack_300._0_1_ = 0x16;
        if (bVar27 == 0x16) {
          ppiStack_2c0 = (int **)((long)unaff_x25 + 1);
          ppiStack_2d8 = param_2;
          bStack_e8 = bVar2;
          uStack_e7 = uVar3;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100474018:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10047401c);
          (*pcVar6)();
        }
code_r0x0001004738fc:
        uStack_df = uVar5;
        uStack_e0 = uVar4;
        piVar23 = *unaff_x21;
        unaff_x24[1] = unaff_x21[1];
        *unaff_x24 = piVar23;
        ppiVar24 = param_2;
code_r0x000100473904:
        uVar29 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x24 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x24 + 0xf) = uVar29;
        uStack_b8 = (int **)CONCAT71(uStack_b8._1_7_,bVar27);
        param_2 = (int **)&uStack_b8;
code_r0x000100473914:
        FUN_100e077ec(param_2);
        param_2 = ppiVar24;
      }
      ppiVar32 = unaff_x27 + 8;
      unaff_x25 = (int **)((long)unaff_x25 + 1);
      ppiVar34 = ppiStack_330;
      ppiVar24 = unaff_x19;
      unaff_x27 = param_2;
    } while (ppiVar32 != unaff_x19);
    ppiVar32 = ppiStack_328;
    bStack_e8 = (byte)unaff_x28;
    uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
    uStack_e0 = SUB81(ppiStack_308,0);
    uStack_df = (undefined7)((ulong)ppiStack_308 >> 8);
    unaff_x24 = ppiStack_318;
    param_2 = ppiStack_328;
    ppiStack_2d8 = ppiVar24;
    ppiStack_2c0 = ppiVar34;
    if (unaff_x23 == (int *)0x8000000000000001) goto code_r0x000100473ac0;
    unaff_x27 = &piStack_300;
    if (unaff_x22 != (int **)0x8000000000000000) {
      unaff_x20 = (int **)0x800000000000006e;
      ppiStack_328[4] = (int *)ppiStack_d0;
      ppiStack_328[3] = (int *)CONCAT71(uStack_d7,uStack_d8);
      ppiStack_328[6] = piStack_c0;
      ppiStack_328[5] = (int *)ppiStack_c8;
      *ppiStack_328 = (int *)0x800000000000001b;
      ppiStack_328[1] = (int *)unaff_x22;
      ppiStack_328[2] = (int *)ppiStack_308;
      ppiStack_328[7] = unaff_x23;
      ppiStack_328[8] = (int *)ppiStack_318;
      ppiStack_328[9] = piStack_320;
      param_2 = &piStack_2b0;
      param_3 = ppiStack_328;
      unaff_x21 = ppiStack_328;
      goto code_r0x000100473be8;
    }
    piStack_88 = (int *)&UNK_108cb9606;
    ppiStack_80 = (int **)0x6;
    uStack_b8 = &piStack_88;
    ppiStack_b0 = (int **)&DAT_100c7b3a0;
    piVar23 = (int *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
    *ppiVar32 = (int *)0x800000000000006e;
    ppiVar32[1] = piVar23;
    unaff_x23 = (int *)((ulong)unaff_x23 & 0x7fffffffffffffff);
    goto joined_r0x000100473ca4;
  case 0x17:
  case 0xb5:
  case 0xe1:
    goto code_r0x000100473d14;
  case 0x19:
  case 0x34:
  case 0x7c:
  case 0x8d:
  case 0xb0:
  case 0xdc:
    goto code_r0x000100473cf4;
  case 0x1a:
    goto code_r0x000100473ca0;
  case 0x1b:
  case 0x3e:
  case 0x46:
  case 0xca:
    goto code_r0x000100473d24;
  case 0x1c:
    goto code_r0x000100473d3c;
  case 0x1d:
  case 0x4d:
  case 0xd1:
    goto code_r0x000100473cfc;
  case 0x1e:
  case 0x4b:
  case 0xcf:
    goto code_r0x000100473d54;
  case 0x20:
  case 0x72:
  case 0xb8:
  case 0xe4:
    goto code_r0x000100473d44;
  case 0x21:
    goto code_r0x000100473c78;
  case 0x22:
    goto LAB_100473ca8;
  case 0x24:
    goto code_r0x000100473c50;
  case 0x25:
  case 0x36:
  case 0xb3:
  case 0xdf:
    goto code_r0x000100473ce4;
  case 0x26:
  case 0x38:
    goto code_r0x000100473c48;
  case 0x28:
    goto code_r0x000100473da4;
  case 0x29:
    goto code_r0x000100473904;
  case 0x2a:
    goto code_r0x000100473948;
  case 0x2c:
    goto code_r0x000100473ca4;
  case 0x2d:
    goto code_r0x000100473cb4;
  case 0x2e:
  case 0x68:
    goto code_r0x000100473c7c;
  case 0x2f:
  case 0xf9:
    goto LAB_100473c94;
  case 0x30:
  case 0xbe:
  case 0xea:
  case 0xfe:
    goto code_r0x000100473c40;
  case 0x31:
  case 0x88:
  case 0xff:
    goto code_r0x000100473cc4;
  case 0x33:
  case 0x8f:
  case 0xf2:
    goto code_r0x000100473c9c;
  case 0x35:
    goto code_r0x000100473c70;
  case 0x37:
    goto code_r0x000100473c18;
  case 0x39:
  case 0x52:
  case 0x90:
  case 0xb2:
  case 0xd6:
  case 0xde:
    goto code_r0x000100473ccc;
  case 0x3a:
    goto code_r0x000100473bf0;
  case 0x3b:
  case 0x66:
    goto code_r0x000100473c84;
  case 0x3c:
code_r0x000100473be8:
    _memcpy(param_2,param_3,0x1c0);
code_r0x000100473bf0:
    FUN_100d34830(unaff_x27 + 4);
    if (unaff_x19 != ppiVar24) {
      ppiVar28 = (int **)((ulong)((long)unaff_x19 - (long)ppiVar24) >> 6);
      param_4 = &UNK_10b23a000;
      uStack_b8 = ppiVar34;
code_r0x000100473c10:
      param_4 = param_4 + 400;
      param_2 = (int **)((long)ppiVar28 + (long)ppiVar34);
code_r0x000100473c18:
      piVar23 = (int *)thunk_FUN_1087e422c(param_2,&uStack_b8,param_4);
      *unaff_x21 = (int *)unaff_x20;
      unaff_x21[1] = piVar23;
      goto code_r0x000100473eb4;
    }
    goto code_r0x000100473e10;
  case 0x40:
    goto code_r0x0001004739a4;
  case 0x43:
  case 0x71:
  case 199:
    goto code_r0x000100473d98;
  case 0x44:
  case 0x65:
  case 0x8a:
  case 200:
    goto code_r0x000100473d60;
  case 0x45:
  case 0x62:
  case 0x8c:
  case 0xc9:
    goto code_r0x000100473d78;
  case 0x47:
  case 0x6e:
  case 0xcb:
    goto code_r0x000100473da8;
  case 0x48:
  case 0x9c:
  case 0xcc:
    goto code_r0x000100473dc0;
  case 0x4a:
  case 0x9d:
  case 0xce:
    goto code_r0x000100473dd8;
  case 0x54:
  case 0xa4:
  case 0xd8:
    goto code_r0x000100473e28;
  case 0x58:
  case 0x85:
    goto code_r0x000100473d38;
  case 0x59:
  case 0x89:
    goto code_r0x000100473d48;
  case 0x5a:
    goto code_r0x000100473d10;
  case 99:
  case 0xf3:
    goto code_r0x000100473cac;
  case 0x67:
  case 0x87:
    goto code_r0x000100473d18;
  case 0x6a:
    goto code_r0x000100473dbc;
  case 0x76:
  case 0x9b:
    goto code_r0x000100473df8;
  case 0x77:
    goto code_r0x000100473d74;
  case 0x78:
  case 0x9a:
    break;
  case 0x79:
  case 0xbd:
  case 0xe9:
    goto code_r0x000100473d1c;
  case 0x7a:
    goto code_r0x000100473d4c;
  case 0x7b:
    goto code_r0x000100473dd0;
  case 0x7e:
  case 0xb7:
  case 0xe3:
  case 0xfa:
    goto code_r0x000100473cec;
  case 0x80:
    goto code_r0x000100473e48;
  case 0x8b:
    goto code_r0x000100473d20;
  case 0x91:
    goto code_r0x000100473d50;
  case 0x92:
  case 0xf4:
    goto code_r0x000100473c74;
  case 0x93:
    goto code_r0x000100473d08;
  case 0x94:
    goto code_r0x000100473c6c;
  case 0x97:
    goto code_r0x000100473914;
  case 0x98:
    goto code_r0x000100473958;
  case 0x9f:
    goto code_r0x000100473e08;
  case 0xa0:
    goto code_r0x000100473e20;
  case 0xa2:
    goto code_r0x000100473e38;
  case 0xa7:
    goto code_r0x000100473e10;
  case 0xac:
    goto code_r0x000100473e88;
  case 0xae:
    goto code_r0x000100473980;
  case 0xb4:
  case 0xe0:
    goto code_r0x000100473c90;
  case 0xb9:
  case 0xe5:
    goto code_r0x000100473cc0;
  case 0xbb:
  case 0xe7:
  case 0xfb:
code_r0x000100473c68:
    unaff_x23 = (int *)0x8000000000000001;
code_r0x000100473c6c:
    param_2 = ppiStack_80;
code_r0x000100473c70:
    ppiVar24 = ppiStack_328;
code_r0x000100473c74:
    unaff_x24 = ppiStack_318;
code_r0x000100473c78:
    unaff_x27 = &piStack_300;
code_r0x000100473c7c:
    ppiVar28 = (int **)0x800000000000006e;
code_r0x000100473c84:
    *ppiVar24 = (int *)ppiVar28;
    ppiVar24[1] = (int *)param_2;
    ppiVar28 = (int **)0x8000000000000000;
code_r0x000100473c8c:
    in_ZR = unaff_x22 == ppiVar28;
code_r0x000100473c90:
    if (!(bool)in_ZR) {
joined_r0x000100473f1c:
      if (unaff_x22 != (int **)0x0) {
        _free(ppiStack_308);
      }
      ppiVar32 = ppiStack_c8;
      lVar33 = (long)piStack_c0 + 1;
      ppiVar24 = ppiStack_c8;
      while (lVar33 = lVar33 + -1, lVar33 != 0) {
        FUN_100de6690(ppiVar24);
        ppiVar24 = ppiVar24 + 9;
      }
      if (ppiStack_d0 != (int **)0x0) {
        _free(ppiVar32);
      }
    }
    goto LAB_100473c94;
  case 0xbc:
  case 0xe8:
    goto code_r0x000100473c98;
  case 0xc0:
  case 0xec:
  case 0xf6:
code_r0x000100473c38:
    ppiVar32 = (int **)0x800000000000006e;
code_r0x000100473c40:
    *ppiStack_328 = (int *)ppiVar32;
    ppiStack_328[1] = (int *)ppiVar28;
code_r0x000100473c48:
    unaff_x27 = &piStack_300;
    unaff_x24 = ppiStack_318;
code_r0x000100473c50:
LAB_100473c94:
    ppiVar28 = (int **)0x2;
code_r0x000100473c98:
    ppiVar28 = (int **)((ulong)ppiVar28 | 0x8000000000000000);
code_r0x000100473c9c:
    in_OV = SBORROW8((long)unaff_x23,(long)ppiVar28);
    in_NG = (long)unaff_x23 - (long)ppiVar28 < 0;
code_r0x000100473ca0:
    if (in_NG == in_OV) {
code_r0x000100473ca4:
joined_r0x000100473ca4:
      if (unaff_x23 != (int *)0x0) {
LAB_100473ca8:
        param_2 = unaff_x24;
code_r0x000100473cac:
        _free(param_2);
      }
    }
    param_2 = unaff_x27 + 4;
code_r0x000100473cb4:
    FUN_100d34830(param_2);
    ppiVar28 = (int **)(ulong)(byte)piStack_300;
code_r0x000100473cbc:
    in_ZR = (int)ppiVar28 == 0x16;
code_r0x000100473cc0:
    if (!(bool)in_ZR) {
code_r0x000100473cc4:
      FUN_100e077ec(&piStack_300);
code_r0x000100473ccc:
    }
    goto code_r0x000100473e10;
  case 0xc3:
  case 0xef:
    goto code_r0x0001004738fc;
  case 0xc4:
  case 0xf0:
    goto code_r0x000100473940;
  case 0xf5:
    goto code_r0x000100473c8c;
  case 0xf7:
    goto code_r0x000100473cbc;
  case 0xfd:
    goto code_r0x000100473c10;
  }
  piStack_2b0 = (int *)CONCAT71(piStack_2b0._1_7_,bVar27);
code_r0x000100473dec:
  param_4 = &UNK_10b21c210;
  ppiVar24 = &piStack_2b0;
code_r0x000100473df8:
  ppiVar24 = (int **)FUN_107c05dcc(ppiVar24,&piStack_88,param_4);
  ppiVar28 = (int **)0x800000000000006e;
code_r0x000100473e08:
  *param_2 = (int *)ppiVar28;
  param_2[1] = (int *)ppiVar24;
code_r0x000100473e10:
code_r0x000100473e20:
code_r0x000100473e28:
  return;
}

