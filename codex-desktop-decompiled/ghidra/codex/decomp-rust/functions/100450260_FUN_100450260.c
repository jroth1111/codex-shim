
/* WARNING: Type propagation algorithm not settling */

void FUN_100450260(undefined1 param_1 [16],byte *******param_2,byte *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  byte *******pppppppbVar10;
  char *pcVar11;
  byte ******ppppppbVar12;
  uint uVar13;
  byte bVar14;
  byte *******pppppppbVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte ******ppppppbVar21;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******unaff_x22;
  byte *******unaff_x23;
  byte *******unaff_x24;
  long lVar22;
  byte *******unaff_x25;
  byte *******pppppppbVar23;
  byte *******unaff_x27;
  byte *******pppppppbVar24;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  byte *******pppppppbVar26;
  undefined1 auStack_2f0 [8];
  byte *******pppppppbStack_2e8;
  byte *******pppppppbStack_2e0;
  undefined8 uStack_2d8;
  byte *******pppppppbStack_2d0;
  byte *******pppppppbStack_2c8;
  byte *******pppppppbStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******pppppppbStack_2a8;
  byte *******pppppppbStack_2a0;
  byte *******pppppppbStack_298;
  byte ******ppppppbStack_290;
  byte *******pppppppbStack_288;
  byte *******pppppppbStack_280;
  byte ******ppppppbStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  byte ******ppppppbStack_258;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte ******ppppppbStack_78;
  
  ppppppbVar21 = param_1._8_8_;
  pppppppbVar26 = param_1._0_8_;
  puVar25 = &stack0xfffffffffffffff0;
  pppppppbVar23 = (byte *******)&bStack_90;
  bVar14 = *(byte *)param_3;
  pppppppbVar15 = (byte *******)(ulong)bVar14;
  pppppppbVar19 = (byte *******)&UNK_108c98ff4;
  pppppppbVar20 =
       (byte *******)
       (&UNK_1004502a4 + (ulong)*(ushort *)(&UNK_108c98ff4 + (long)pppppppbVar15 * 2) * 4);
  puVar7 = auStack_2f0;
  puVar8 = auStack_2f0;
  puVar9 = auStack_2f0;
  puVar6 = auStack_2f0;
  puVar5 = auStack_2f0;
  pppppppbVar10 = param_2;
  pcVar11 = (char *)param_2;
  pppppppbVar24 = unaff_x27;
  switch(bVar14) {
  case 0:
  case 0x42:
  case 0x84:
  case 0xbb:
    bVar14 = *(byte *)((long)param_3 + 1);
  case 0x1d:
    ppppppbStack_270 = (byte ******)((ulong)CONCAT61(ppppppbStack_270._2_6_,bVar14) << 8);
code_r0x000100450ac4:
    goto code_r0x000100450b18;
  case 1:
  case 0x30:
  case 0x43:
  case 0x85:
    pppppppbStack_268 = (byte *******)(ulong)*(byte *)((long)param_3 + 1);
  case 0x38:
code_r0x000100450ad0:
    bVar14 = 1;
code_r0x000100450ad4:
    break;
  case 2:
  case 0x1f:
  case 0x44:
  case 0x86:
  case 0xbe:
    pppppppbVar15 = (byte *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x68:
    pppppppbStack_268 = pppppppbVar15;
    goto code_r0x000100450ad0;
  case 3:
  case 0x45:
  case 0x87:
    pppppppbStack_268 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
    goto code_r0x000100450ad0;
  case 4:
  case 0x46:
  case 0x88:
    pppppppbStack_268 = (byte *******)param_3[1];
    goto code_r0x000100450ad0;
  case 5:
  case 0x47:
  case 0x89:
    pppppppbVar15 = (byte *******)(long)(char)*(byte *)((long)param_3 + 1);
    goto code_r0x000100450b0c;
  case 6:
  case 0x48:
  case 0x8a:
    pppppppbVar15 = (byte *******)(long)*(short *)((long)param_3 + 2);
  case 100:
code_r0x000100450b0c:
    pppppppbStack_268 = pppppppbVar15;
code_r0x000100450b10:
    bVar14 = 2;
    break;
  case 7:
  case 0x49:
  case 0x8b:
    pppppppbVar15 = (byte *******)(long)*(int *)((long)param_3 + 4);
  case 0x19:
    goto code_r0x000100450b0c;
  case 8:
  case 0x4a:
  case 0x8c:
    pppppppbVar15 = (byte *******)param_3[1];
    goto code_r0x000100450b0c;
  case 9:
  case 0x4b:
  case 0x8d:
    pppppppbVar26 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xc0:
    pppppppbVar26 = (byte *******)(double)SUB84(pppppppbVar26,0);
code_r0x000100450afc:
    bVar14 = 3;
    pppppppbStack_268 = pppppppbVar26;
code_r0x000100450b04:
    break;
  case 10:
  case 0x35:
  case 0x4c:
  case 0x8e:
    pppppppbVar26 = (byte *******)param_3[1];
    goto code_r0x000100450afc;
  case 0xb:
  case 0x4d:
  case 0x8f:
    param_3 = (byte *******)(ulong)*(uint *)((long)param_3 + 4);
    puVar6 = &stack0xffffffffffffffa0;
  case 0x21:
    *(undefined8 *)(puVar6 + 0x40) = *(undefined8 *)(puVar6 + 0x40);
    *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(puVar6 + 0x48);
    *(undefined8 *)(puVar6 + 0x50) = *(undefined8 *)(puVar6 + 0x50);
    *(undefined8 *)(puVar6 + 0x58) = *(undefined8 *)(puVar6 + 0x58);
    *(undefined4 *)(puVar6 + 0x1c) = 0;
    uVar13 = (uint)param_3;
    if (uVar13 < 0x80) {
      puVar6[0x1c] = (byte)param_3;
      uVar16 = 1;
    }
    else {
      bVar14 = (byte)param_3 & 0x3f | 0x80;
      if (uVar13 < 0x800) {
        puVar6[0x1c] = (byte)(uVar13 >> 6) | 0xc0;
        puVar6[0x1d] = bVar14;
        uVar16 = 2;
      }
      else {
        bVar1 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        if (uVar13 < 0x10000) {
          puVar6[0x1c] = (byte)(uVar13 >> 0xc) | 0xe0;
          puVar6[0x1d] = bVar1;
          puVar6[0x1e] = bVar14;
          uVar16 = 3;
        }
        else {
          puVar6[0x1c] = (byte)(uVar13 >> 0x12) | 0xf0;
          puVar6[0x1d] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
          puVar6[0x1e] = bVar1;
          puVar6[0x1f] = bVar14;
          uVar16 = 4;
        }
      }
    }
    *(undefined1 **)(puVar6 + 0x28) = puVar6 + 0x1c;
    *(undefined8 *)(puVar6 + 0x30) = uVar16;
    puVar6[0x20] = 5;
    ppppppbVar21 = (byte ******)func_0x000108a4a50c(puVar6 + 0x20,puVar6 + 0x3f,&UNK_10b21a3f0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar21;
    return;
  case 0xc:
  case 0x4e:
  case 0x90:
    param_3 = param_3 + 1;
  case 0x1a:
    puVar7 = &stack0xffffffffffffffa0;
code_r0x000100450a68:
    puVar25 = *(undefined1 **)(puVar7 + 0x50);
    unaff_x30 = *(undefined8 *)(puVar7 + 0x58);
    unaff_x20 = *(byte ********)(puVar7 + 0x40);
    pppppppbVar10 = *(byte ********)(puVar7 + 0x48);
    puVar8 = puVar7;
code_r0x000100450a70:
    unaff_x22 = *(byte ********)(puVar8 + 0x30);
    unaff_x21 = *(byte ********)(puVar8 + 0x38);
    puVar9 = puVar8;
code_r0x000100450a78:
    *(byte ********)(puVar9 + 0x30) = unaff_x22;
    *(byte ********)(puVar9 + 0x38) = unaff_x21;
    *(byte ********)(puVar9 + 0x40) = unaff_x20;
    *(byte ********)(puVar9 + 0x48) = pppppppbVar10;
    *(undefined1 **)(puVar9 + 0x50) = puVar25;
    *(undefined8 *)(puVar9 + 0x58) = unaff_x30;
    ppppppbVar21 = param_3[1];
    ppppppbVar12 = param_3[2];
    *(byte *******)(puVar9 + 0x18) = ppppppbVar21;
    *(byte *******)(puVar9 + 0x20) = ppppppbVar12;
    puVar9[0x10] = 5;
    ppppppbVar12 = (byte ******)func_0x000108a4a50c(puVar9 + 0x10,puVar9 + 0x2f,&UNK_10b21a3f0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar12;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar21);
    }
    return;
  case 0xd:
  case 0x4f:
  case 0x7e:
  case 0x91:
  case 0xb4:
    pppppppbVar15 = (byte *******)param_3[1];
    pppppppbVar19 = (byte *******)param_3[2];
  case 0x1b:
  case 0xec:
    pppppppbStack_268 = pppppppbVar15;
    pppppppbStack_260 = pppppppbVar19;
code_r0x000100450ae8:
    bVar14 = 5;
code_r0x000100450aec:
    break;
  case 0xe:
  case 0x50:
  case 0x92:
    param_3 = param_3 + 1;
  case 0x26:
    puVar5 = &stack0xffffffffffffffa0;
code_r0x000100450a10:
    *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar5 + 0x30);
    *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(puVar5 + 0x38);
    *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(puVar5 + 0x40);
    *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(puVar5 + 0x48);
    *(undefined8 *)(puVar5 + 0x50) = *(undefined8 *)(puVar5 + 0x50);
    *(undefined8 *)(puVar5 + 0x58) = *(undefined8 *)(puVar5 + 0x58);
    ppppppbVar21 = param_3[1];
    ppppppbVar12 = param_3[2];
    *(byte *******)(puVar5 + 0x18) = ppppppbVar21;
    *(byte *******)(puVar5 + 0x20) = ppppppbVar12;
    puVar5[0x10] = 6;
    ppppppbVar12 = (byte ******)func_0x000108a4a50c(puVar5 + 0x10,puVar5 + 0x2f,&UNK_10b21a3f0);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar12;
    if (*param_3 != (byte ******)0x0) {
      _free(ppppppbVar21);
    }
    return;
  case 0xf:
  case 0x51:
  case 0x93:
    pppppppbVar15 = (byte *******)param_3[1];
    pppppppbVar19 = (byte *******)param_3[2];
  case 0x18:
  case 0x66:
    pppppppbStack_268 = pppppppbVar15;
    pppppppbStack_260 = pppppppbVar19;
code_r0x000100450aa0:
    bVar14 = 6;
code_r0x000100450aa4:
    break;
  case 0x10:
  case 0x52:
  case 0x94:
    bVar14 = 8;
    break;
  default:
    pppppppbVar10 = (byte *******)param_3[1];
    pppppppbStack_268 = (byte *******)pppppppbVar10[1];
    ppppppbStack_270 = *pppppppbVar10;
    ppppppbStack_258 = pppppppbVar10[3];
    pppppppbStack_260 = (byte *******)pppppppbVar10[2];
    func_0x000107c047d8(param_2,&ppppppbStack_270);
  case 0xc3:
code_r0x0001004506e8:
code_r0x0001004506f0:
code_r0x0001004506f4:
code_r0x000100450700:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(pppppppbVar10);
    return;
  case 0x12:
  case 0x54:
  case 0x96:
    bVar14 = 7;
  case 0xd2:
    break;
  case 0x13:
  case 0x55:
  case 0x97:
    pppppppbVar10 = (byte *******)param_3[1];
    pppppppbStack_268 = (byte *******)pppppppbVar10[1];
    ppppppbStack_270 = *pppppppbVar10;
    ppppppbStack_258 = pppppppbVar10[3];
    pppppppbStack_260 = (byte *******)pppppppbVar10[2];
    func_0x000107c05280(param_2,&ppppppbStack_270);
    goto code_r0x0001004506e8;
  case 0x14:
  case 0x56:
  case 0x98:
    unaff_x23 = (byte *******)param_3[1];
    unaff_x20 = (byte *******)param_3[2];
    unaff_x27 = (byte *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x27 * 4;
    pppppppbStack_2a0 = (byte *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppbStack_2c0 = unaff_x20;
    pppppppbStack_2b8 = unaff_x20;
    pppppppbStack_2b0 = unaff_x23;
    pppppppbStack_2a8 = unaff_x24;
    if (unaff_x27 != (byte *******)0x0) {
      unaff_x21 = unaff_x20 + 4;
      pppppppbVar15 = (byte *******)(ulong)*(byte *)unaff_x20;
      goto code_r0x00010045072c;
    }
  case 0x6c:
  case 0x82:
  case 0xda:
code_r0x000100450738:
    param_3 = (byte *******)&UNK_10b22f798;
    param_4 = &UNK_10b20a590;
code_r0x000100450748:
    pppppppbStack_a0 = (byte *******)thunk_FUN_1087e422c(0,param_3,param_4);
code_r0x000100450754:
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = (byte ******)pppppppbStack_a0;
code_r0x000100450760:
    lVar22 = ((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5) + 1;
    while (lVar22 = lVar22 + -1, lVar22 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 4;
    }
    if (unaff_x23 != (byte *******)0x0) {
code_r0x00010045078c:
      _free(unaff_x20);
code_r0x000100450794:
    }
    goto LAB_100450b38;
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
    pppppppbStack_2a0 = (byte *******)param_3[2];
    ppppppbVar21 = param_3[3];
    unaff_x23 = pppppppbStack_2a0 + (long)ppppppbVar21 * 8;
    pppppppbStack_298 = pppppppbStack_2a0;
    ppppppbStack_290 = param_3[1];
    pppppppbStack_288 = unaff_x23;
    pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
    pppppppbStack_280 = (byte *******)0x0;
    if (ppppppbVar21 == (byte ******)0x0) {
      unaff_x24 = (byte *******)0x0;
code_r0x000100450854:
      pppppppbStack_a8 = (byte *******)&UNK_108ca26b0;
      pppppppbStack_a0 = (byte *******)0x2;
      bStack_90 = (byte)&pppppppbStack_a8;
      cStack_8f = (char)((ulong)&pppppppbStack_a8 >> 8);
      uStack_8e = (undefined6)((ulong)&pppppppbStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x22 = (byte *******)0x8000000000000001;
      ppppppbVar21 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
      pppppppbStack_2c8 = unaff_x21;
      goto LAB_100450888;
    }
    unaff_x25 = (byte *******)0x0;
    unaff_x20 = (byte *******)((ulong)&bStack_90 | 1);
    unaff_x21 = (byte *******)((ulong)&pppppppbStack_2c0 | 1);
    pppppppbStack_2e8 = (byte *******)(((long)ppppppbVar21 * 0x40 - 0x40U >> 6) + 1);
    unaff_x22 = (byte *******)0x8000000000000001;
    unaff_x24 = (byte *******)0x8000000000000000;
    pppppppbVar24 = pppppppbStack_2a0;
    do {
      unaff_x27 = pppppppbStack_2d0;
      pppppppbVar23 = pppppppbVar24 + 8;
      bVar14 = *(byte *)pppppppbVar24;
      pppppppbVar19 = unaff_x25;
      pppppppbVar10 = pppppppbVar23;
      if (bVar14 == 0x16) break;
      bStack_90 = bVar14;
      ppppppbVar21 = pppppppbVar24[2];
      *(byte *******)((long)unaff_x20 + 0x17) = pppppppbVar24[3];
      *(byte *******)((long)unaff_x20 + 0xf) = ppppppbVar21;
      ppppppbVar21 = *(byte *******)((long)pppppppbVar24 + 1);
      unaff_x20[1] = *(byte *******)((long)pppppppbVar24 + 9);
      *unaff_x20 = ppppppbVar21;
      pppppppbStack_2b8 = (byte *******)pppppppbVar24[5];
      pppppppbStack_2c0 = (byte *******)pppppppbVar24[4];
      pppppppbStack_2a8 = (byte *******)pppppppbVar24[7];
      pppppppbStack_2b0 = (byte *******)pppppppbVar24[6];
      piVar2 = (int *)CONCAT71(uStack_87,uStack_88);
      piVar3 = (int *)CONCAT71(uStack_7f,uStack_80);
      if (bVar14 < 0xd) {
        if (bVar14 == 1) {
          iVar18 = 1;
          if (cStack_8f != '\x01') {
            iVar18 = 2;
          }
          iVar17 = 0;
          if (cStack_8f != '\0') {
            iVar17 = iVar18;
          }
        }
        else {
          if (bVar14 != 4) {
            if (bVar14 == 0xc) {
              if (ppppppbStack_78 == (byte ******)0x6) {
                iVar17 = 1;
                if (*piVar3 != 0x61726170 || (short)piVar3[1] != 0x736d) {
                  iVar17 = 2;
                }
              }
              else if (ppppppbStack_78 == (byte ******)0x2) {
                iVar17 = 2;
                if ((short)*piVar3 == 0x6469) {
                  iVar17 = 0;
                }
              }
              else {
                iVar17 = 2;
              }
              goto joined_r0x00010045051c;
            }
code_r0x000100450d10:
            pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
            pppppppbStack_298 = pppppppbVar23;
            ppppppbVar21 = (byte ******)
                           thunk_FUN_108855b04(&bStack_90,&pppppppbStack_a8,&UNK_10b20d000);
            goto LAB_100450888;
          }
          iVar18 = 1;
          if (piVar2 != (int *)0x1) {
            iVar18 = 2;
          }
          iVar17 = 0;
          if (piVar2 != (int *)0x0) {
            iVar17 = iVar18;
          }
        }
code_r0x0001004505a8:
        FUN_100e077ec(&bStack_90);
      }
      else {
        if (bVar14 == 0xd) {
          if (piVar3 == (int *)0x6) {
            iVar17 = 1;
            if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
              iVar17 = 2;
            }
          }
          else {
            if (piVar3 != (int *)0x2) goto code_r0x000100450574;
            iVar17 = 2;
            if ((short)*piVar2 == 0x6469) {
              iVar17 = 0;
            }
          }
          goto code_r0x0001004505a8;
        }
        if (bVar14 != 0xe) {
          if (bVar14 != 0xf) goto code_r0x000100450d10;
          if (piVar3 == (int *)0x6) {
            if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                 (*(char *)((long)piVar2 + 2) != 'r')) ||
                ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
               (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x000100450574;
            iVar17 = 1;
          }
          else if (((piVar3 == (int *)0x2) && ((char)*piVar2 == 'i')) &&
                  (*(char *)((long)piVar2 + 1) == 'd')) {
            iVar17 = 0;
          }
          else {
code_r0x000100450574:
            iVar17 = 2;
          }
          goto code_r0x0001004505a8;
        }
        if (ppppppbStack_78 == (byte ******)0x6) {
          if ((((((char)*piVar3 != 'p') || (*(char *)((long)piVar3 + 1) != 'a')) ||
               (*(char *)((long)piVar3 + 2) != 'r')) ||
              ((*(char *)((long)piVar3 + 3) != 'a' || ((char)piVar3[1] != 'm')))) ||
             (*(char *)((long)piVar3 + 5) != 's')) goto code_r0x0001004504e4;
          iVar17 = 1;
        }
        else if (((ppppppbStack_78 == (byte ******)0x2) && ((char)*piVar3 == 'i')) &&
                (*(char *)((long)piVar3 + 1) == 'd')) {
          iVar17 = 0;
        }
        else {
code_r0x0001004504e4:
          iVar17 = 2;
        }
joined_r0x00010045051c:
        if (piVar2 != (int *)0x0) {
          _free();
        }
      }
      bVar14 = (byte)pppppppbStack_2c0;
      if (iVar17 == 0) {
        if (unaff_x22 != (byte *******)0x8000000000000001) goto code_r0x000100450c3c;
        pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
        if (bVar14 == 0x16) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_298 = pppppppbVar23;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100450d0c;
        }
        ppppppbVar21 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppbVar21;
        uVar16 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar16;
        bStack_90 = bVar14;
        func_0x00010135ba2c(&pppppppbStack_a8,&bStack_90);
        if (pppppppbStack_a8 == (byte *******)0x8000000000000001) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          unaff_x22 = (byte *******)0x8000000000000001;
          *param_2 = (byte ******)0x800000000000006e;
          param_2[1] = (byte ******)pppppppbStack_a0;
          unaff_x24 = (byte *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
          pppppppbVar19 = (byte *******)&pppppppbStack_2c0;
          pppppppbStack_298 = pppppppbVar23;
          unaff_x27 = pppppppbStack_2d0;
          pppppppbVar10 = pppppppbStack_2c8;
          goto joined_r0x0001004509bc;
        }
        pppppppbStack_2c8 = pppppppbStack_a0;
        uStack_2d8 = pppppppbStack_98;
        unaff_x22 = pppppppbStack_a8;
      }
      else if (iVar17 == 1) {
        if (unaff_x24 != (byte *******)0x8000000000000000) goto code_r0x000100450be4;
        pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
        if (bVar14 == 0x16) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_298 = pppppppbVar23;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100450d0c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100450d10);
          (*pcVar4)();
        }
        ppppppbVar21 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppbVar21;
        uVar16 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar16;
        bStack_90 = bVar14;
        func_0x0001013238f0(&pppppppbStack_a8,&bStack_90);
        if (pppppppbStack_a8 == (byte *******)0x8000000000000000) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          *param_2 = (byte ******)0x800000000000006e;
          param_2[1] = (byte ******)pppppppbStack_a0;
          pppppppbVar19 = (byte *******)&pppppppbStack_2c0;
          pppppppbVar10 = pppppppbStack_2c8;
          pppppppbStack_298 = pppppppbVar23;
          goto LAB_1004509c0;
        }
        pppppppbStack_2d0 = pppppppbStack_a0;
        pppppppbStack_2e0 = pppppppbStack_98;
        unaff_x24 = pppppppbStack_a8;
      }
      else {
        pppppppbStack_2c0 = (byte *******)CONCAT71(pppppppbStack_2c0._1_7_,0x16);
        if (bVar14 == 0x16) {
          pppppppbStack_280 = (byte *******)((long)unaff_x25 + 1);
          pppppppbStack_298 = pppppppbVar23;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x000100450d0c;
        }
        ppppppbVar21 = *unaff_x21;
        unaff_x20[1] = unaff_x21[1];
        *unaff_x20 = ppppppbVar21;
        uVar16 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar16;
        bStack_90 = bVar14;
        FUN_100e077ec(&bStack_90);
code_r0x0001004506bc:
      }
      pppppppbVar15 = pppppppbVar24 + 8;
      unaff_x25 = (byte *******)((long)unaff_x25 + 1);
      pppppppbVar19 = pppppppbStack_2e8;
      pppppppbVar10 = unaff_x23;
      pppppppbVar24 = pppppppbVar23;
    } while (pppppppbVar15 != unaff_x23);
    unaff_x21 = pppppppbStack_2c8;
    unaff_x27 = pppppppbStack_2d0;
    pppppppbStack_298 = pppppppbVar10;
    pppppppbStack_280 = pppppppbVar19;
    if (unaff_x22 == (byte *******)0x8000000000000001) goto code_r0x000100450854;
    if (unaff_x24 != (byte *******)0x8000000000000000) {
      unaff_x20 = (byte *******)0x800000000000006e;
      *param_2 = (byte ******)0x8000000000000036;
      param_2[1] = (byte ******)unaff_x24;
      param_2[2] = (byte ******)pppppppbStack_2d0;
      param_2[3] = (byte ******)pppppppbStack_2e0;
      param_2[4] = (byte ******)unaff_x22;
      param_2[5] = (byte ******)pppppppbStack_2c8;
      param_2[6] = (byte ******)uStack_2d8;
      _memcpy(&ppppppbStack_270,param_2,0x1c0);
      FUN_100d34830(&pppppppbStack_2a0);
      if (unaff_x23 != pppppppbVar10) {
        bStack_90 = (byte)pppppppbVar19;
        cStack_8f = (char)((ulong)pppppppbVar19 >> 8);
        uStack_8e = (undefined6)((ulong)pppppppbVar19 >> 0x10);
        pppppppbVar10 =
             (byte *******)
             thunk_FUN_1087e422c((byte *)((long)pppppppbVar19 +
                                         ((ulong)((long)unaff_x23 - (long)pppppppbVar10) >> 6)),
                                 &bStack_90,&UNK_10b23a190);
        goto code_r0x000100450bd4;
      }
      goto LAB_100450b38;
    }
    pppppppbStack_a8 = (byte *******)&UNK_108cb9606;
    pppppppbStack_a0 = (byte *******)0x6;
    bStack_90 = (byte)&pppppppbStack_a8;
    cStack_8f = (char)((ulong)&pppppppbStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&pppppppbStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    ppppppbVar21 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar21;
    unaff_x22 = (byte *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
    pppppppbVar19 = (byte *******)&pppppppbStack_2c0;
    pppppppbVar10 = pppppppbStack_2c8;
    goto joined_r0x0001004509d0;
  case 0x16:
  case 99:
    goto code_r0x000100450ac4;
  case 0x17:
    goto code_r0x000100450ad4;
  case 0x1c:
  case 0xd6:
    goto code_r0x000100450afc;
  case 0x1e:
  case 0xe7:
    break;
  case 0x20:
  case 0x2e:
  case 0xd4:
    goto code_r0x000100450b04;
  case 0x22:
    goto code_r0x000100450a68;
  case 0x23:
  case 0x5c:
  case 0xea:
    goto code_r0x000100450aec;
  case 0x24:
    goto code_r0x000100450a10;
  case 0x25:
    goto code_r0x000100450aa4;
  case 0x28:
  case 0x32:
  case 0xb5:
    goto code_r0x000100450b64;
  case 0x29:
    goto code_r0x0001004506bc;
  case 0x2a:
    goto code_r0x000100450700;
  case 0x2c:
  case 0xa8:
  case 0xd1:
    goto code_r0x000100450b2c;
  case 0x2d:
  case 0xb7:
  case 0xe0:
    goto code_r0x000100450b3c;
  case 0x2f:
  case 0x61:
  case 0xb2:
    goto code_r0x000100450b1c;
  case 0x31:
  case 0xf6:
    goto code_r0x000100450b4c;
  case 0x33:
  case 0xaa:
  case 0xbf:
  case 0xfd:
    goto code_r0x000100450b24;
  case 0x34:
  case 0x7d:
  case 0x9e:
  case 0xb6:
  case 0xfb:
    goto code_r0x000100450b7c;
  case 0x36:
  case 0xbd:
  case 0xe5:
    goto code_r0x000100450b6c;
  case 0x37:
    goto code_r0x000100450aa0;
  case 0x39:
  case 0xa5:
  case 0xb1:
  case 0xca:
  case 0xfe:
    goto code_r0x000100450b54;
  case 0x3a:
    goto code_r0x000100450a78;
  case 0x3b:
    goto code_r0x000100450b0c;
  case 0x3c:
    goto code_r0x000100450a70;
  case 0x3e:
  case 0xcd:
  case 0xdd:
  case 0xf2:
    goto code_r0x000100450bb0;
  case 0x3f:
    goto code_r0x000100450748;
  case 0x40:
    goto code_r0x00010045078c;
  case 0x58:
    goto code_r0x000100450b50;
  case 0x59:
    goto code_r0x000100450b60;
  case 0x5a:
    goto code_r0x000100450b28;
  case 0x5b:
  case 0x7a:
    goto code_r0x000100450b40;
  case 0x5d:
    goto code_r0x000100450b70;
  case 0x5e:
  case 0xf4:
    goto code_r0x000100450b88;
  case 0x5f:
    goto code_r0x000100450b48;
  case 0x60:
  case 0xdc:
  case 0xf5:
    goto code_r0x000100450ba0;
  case 0x62:
  case 200:
  case 0xdf:
    goto code_r0x000100450b90;
  case 0x65:
  case 0xde:
    goto code_r0x000100450b78;
  case 0x67:
    goto code_r0x000100450b30;
  case 0x6a:
  case 0x9b:
  case 0xcc:
  case 0xe4:
  case 0xfc:
    goto code_r0x000100450bf0;
  case 0x6b:
  case 0x81:
  case 0xd9:
    goto code_r0x0001004506f4;
  case 0x6e:
    goto code_r0x000100450b9c;
  case 0x6f:
  case 0xa3:
    goto code_r0x000100450bac;
  case 0x70:
    goto code_r0x000100450b74;
  case 0x71:
    goto code_r0x000100450b8c;
  case 0x72:
    goto LAB_100450b38;
  case 0x73:
    goto code_r0x000100450bbc;
  case 0x74:
    goto code_r0x000100450bd4;
  case 0x75:
  case 0xb8:
    goto code_r0x000100450b94;
  case 0x76:
    goto code_r0x000100450bec;
  case 0x77:
    goto code_r0x000100450b68;
  case 0x78:
    goto code_r0x000100450bdc;
  case 0x79:
  case 0xb9:
    goto code_r0x000100450b10;
  case 0x7b:
    goto code_r0x000100450bc4;
  case 0x7c:
  case 0xbc:
    goto code_r0x000100450ae8;
  case 0x80:
code_r0x000100450c3c:
    pppppppbVar15 = (byte *******)((long)unaff_x25 + 1);
  case 0xee:
    pppppppbStack_a8 = (byte *******)&UNK_108ca26b0;
    pppppppbStack_a0 = (byte *******)0x2;
    pppppppbStack_298 = pppppppbVar23;
    pppppppbStack_280 = pppppppbVar15;
code_r0x000100450c58:
    pppppppbVar15 = (byte *******)&pppppppbStack_a8;
    pppppppbVar19 = (byte *******)&UNK_100c7b000;
code_r0x000100450c60:
    unaff_x27 = pppppppbStack_2d0;
    bStack_90 = (byte)pppppppbVar15;
    cStack_8f = (char)((ulong)pppppppbVar15 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar15 >> 0x10);
    uStack_88 = SUB81(pppppppbVar19 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppbVar19 + 0x74) >> 8);
    ppppppbVar21 = (byte ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
LAB_100450888:
    pppppppbVar19 = (byte *******)&pppppppbStack_2c0;
    *param_2 = (byte ******)0x800000000000006e;
    param_2[1] = ppppppbVar21;
    unaff_x24 = (byte *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
    pppppppbVar10 = pppppppbStack_2c8;
    goto joined_r0x0001004509bc;
  case 0x9a:
  case 0xd3:
  case 0xe6:
    goto code_r0x000100450be0;
  case 0x9c:
  case 0xc6:
    goto code_r0x000100450bb8;
  case 0x9d:
  case 0xf7:
    goto code_r0x000100450bd0;
  case 0x9f:
  case 0xfa:
    goto code_r0x000100450c00;
  case 0xa0:
    goto code_r0x000100450c18;
  case 0xa1:
  case 0xcb:
  case 0xe2:
  case 0xff:
    goto code_r0x000100450bd8;
  case 0xa2:
    goto code_r0x000100450c30;
  case 0xa4:
    goto code_r0x000100450c20;
  case 0xa6:
  case 0xba:
  case 0xcf:
    goto code_r0x000100450b84;
  case 0xa7:
  case 0xce:
    goto code_r0x000100450c08;
  case 0xa9:
  case 0xe1:
  case 0xf3:
    goto code_r0x000100450bc0;
  case 0xac:
    goto code_r0x000100450c60;
  case 0xad:
    goto code_r0x000100450794;
  case 0xae:
    goto code_r0x0001004507d8;
  case 0xb0:
  case 0xe8:
    goto code_r0x000100450b44;
  case 0xb3:
    goto code_r0x000100450b34;
  case 0xc2:
code_r0x000100450be4:
    pppppppbVar15 = (byte *******)((long)unaff_x25 + 1);
  case 0xf8:
    pppppppbStack_298 = pppppppbVar23;
code_r0x000100450bec:
    pppppppbStack_280 = pppppppbVar15;
code_r0x000100450bf0:
    pppppppbVar15 = (byte *******)&UNK_108cb9606;
code_r0x000100450bf8:
    pppppppbStack_a0 = (byte *******)0x6;
    pppppppbStack_a8 = pppppppbVar15;
code_r0x000100450c00:
    pppppppbVar15 = (byte *******)&pppppppbStack_a8;
    pppppppbVar19 = (byte *******)&UNK_100c7b000;
code_r0x000100450c08:
    bStack_90 = (byte)pppppppbVar15;
    cStack_8f = (char)((ulong)pppppppbVar15 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppbVar15 >> 0x10);
    uStack_88 = SUB81(pppppppbVar19 + 0x74,0);
    uStack_87 = (undefined7)((ulong)(pppppppbVar19 + 0x74) >> 8);
    pcVar11 = s_duplicate_field_____108ac2973;
code_r0x000100450c18:
    param_3 = (byte *******)&bStack_90;
    unaff_x21 = pppppppbStack_2c8;
    unaff_x27 = pppppppbStack_2d0;
code_r0x000100450c20:
    pppppppbVar10 = (byte *******)thunk_FUN_108856088(pcVar11,param_3);
    pppppppbVar23 = (byte *******)&pppppppbStack_2c0;
    pppppppbVar15 = (byte *******)0x800000000000006e;
code_r0x000100450c30:
    *param_2 = (byte ******)pppppppbVar15;
    param_2[1] = (byte ******)pppppppbVar10;
    pppppppbVar19 = pppppppbVar23;
    pppppppbVar10 = unaff_x21;
joined_r0x0001004509bc:
    if (unaff_x24 != (byte *******)0x0) {
      _free(unaff_x27);
    }
LAB_1004509c0:
    if (-0x7fffffffffffffff < (long)unaff_x22) {
joined_r0x0001004509d0:
      if (unaff_x22 != (byte *******)0x0) {
        _free(pppppppbVar10);
      }
    }
    FUN_100d34830(pppppppbVar19 + 4);
    if ((byte)pppppppbStack_2c0 != '\x16') {
      FUN_100e077ec(&pppppppbStack_2c0);
    }
    goto LAB_100450b38;
  case 0xc4:
code_r0x00010045072c:
    bVar14 = (byte)pppppppbVar15;
    in_ZR = (int)pppppppbVar15 == 0x16;
    pppppppbStack_2b8 = unaff_x21;
  case 0xf0:
    if ((bool)in_ZR) goto code_r0x000100450738;
    uVar16 = *(undefined8 *)((long)unaff_x20 + 1);
    uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
    cStack_8f = (char)uVar16;
    uStack_8e = (undefined6)((ulong)uVar16 >> 8);
    uStack_88 = (undefined1)((ulong)uVar16 >> 0x38);
    ppppppbStack_78 = unaff_x20[3];
    uStack_80 = SUB81(unaff_x20[2],0);
    uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
    pppppppbStack_2a0 = (byte *******)0x1;
    bStack_90 = bVar14;
    func_0x00010135ba2c(&pppppppbStack_a8,&bStack_90);
    unaff_x22 = pppppppbStack_a0;
    unaff_x25 = pppppppbStack_a8;
    if (pppppppbStack_a8 == (byte *******)0x8000000000000001) goto code_r0x000100450754;
code_r0x0001004507d8:
    if (unaff_x27 == (byte *******)0x1) {
code_r0x0001004507f8:
      pppppppbVar10 = (byte *******)thunk_FUN_1087e422c(1,&UNK_10b22f798,&UNK_10b20a590);
code_r0x000100450810:
      *param_2 = (byte ******)0x800000000000006e;
      param_2[1] = (byte ******)pppppppbVar10;
      if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
        _free(unaff_x22);
      }
      goto code_r0x000100450760;
    }
    unaff_x21 = unaff_x20 + 8;
    bVar14 = *(byte *)(unaff_x20 + 4);
    unaff_x27 = pppppppbStack_98;
    pppppppbStack_2b8 = unaff_x21;
    if (bVar14 == 0x16) goto code_r0x0001004507f8;
code_r0x000100450b60:
    ppppppbVar21 = *(byte *******)((long)unaff_x20 + 0x29);
    pppppppbVar26 = *(byte ********)((long)unaff_x20 + 0x21);
code_r0x000100450b64:
    uStack_87 = SUB87(ppppppbVar21,0);
    cStack_8f = (char)pppppppbVar26;
    uStack_8e = (undefined6)((ulong)pppppppbVar26 >> 8);
    uStack_88 = (undefined1)((ulong)pppppppbVar26 >> 0x38);
code_r0x000100450b68:
    ppppppbVar21 = unaff_x20[7];
    pppppppbVar26 = (byte *******)unaff_x20[6];
code_r0x000100450b6c:
    uStack_80 = SUB81(pppppppbVar26,0);
    uStack_7f = (undefined7)((ulong)pppppppbVar26 >> 8);
    ppppppbStack_78 = ppppppbVar21;
code_r0x000100450b70:
    pppppppbVar19 = (byte *******)0x2;
code_r0x000100450b74:
    pppppppbStack_2a0 = pppppppbVar19;
code_r0x000100450b78:
    bStack_90 = bVar14;
code_r0x000100450b7c:
    pppppppbVar10 = (byte *******)&pppppppbStack_a8;
code_r0x000100450b80:
    param_3 = (byte *******)&bStack_90;
code_r0x000100450b84:
    func_0x0001013238f0(pppppppbVar10,param_3);
code_r0x000100450b88:
    pppppppbVar10 = pppppppbStack_a0;
    pppppppbVar15 = pppppppbStack_a8;
code_r0x000100450b8c:
    pppppppbVar19 = (byte *******)0x8000000000000000;
code_r0x000100450b90:
    in_ZR = pppppppbVar15 == pppppppbVar19;
code_r0x000100450b94:
    if ((bool)in_ZR) goto code_r0x000100450810;
code_r0x000100450b98:
    unaff_x20 = (byte *******)0x6e;
code_r0x000100450b9c:
    unaff_x20 = (byte *******)((ulong)unaff_x20 & 0xffffffffffff | 0x8000000000000000);
code_r0x000100450ba0:
    pppppppbVar20 = unaff_x20 + -7;
    pppppppbVar19 = pppppppbStack_98;
code_r0x000100450ba8:
    *param_2 = (byte ******)pppppppbVar20;
    param_2[1] = (byte ******)pppppppbVar15;
code_r0x000100450bac:
    param_2[2] = (byte ******)pppppppbVar10;
    param_2[3] = (byte ******)pppppppbVar19;
code_r0x000100450bb0:
    param_2[4] = (byte ******)unaff_x25;
    param_2[5] = (byte ******)unaff_x22;
    param_2[6] = (byte ******)unaff_x27;
code_r0x000100450bb8:
    pppppppbVar10 = &ppppppbStack_270;
code_r0x000100450bbc:
    param_3 = param_2;
code_r0x000100450bc0:
    param_4 = (undefined *)0x1c0;
code_r0x000100450bc4:
    _memcpy(pppppppbVar10,param_3,param_4);
code_r0x000100450bc8:
    pppppppbVar10 = (byte *******)FUN_100fbc738(&pppppppbStack_2c0);
code_r0x000100450bd0:
    if (pppppppbVar10 != (byte *******)0x0) {
code_r0x000100450bd4:
      *param_2 = (byte ******)unaff_x20;
      param_2[1] = (byte ******)pppppppbVar10;
code_r0x000100450bd8:
      param_2 = &ppppppbStack_270;
code_r0x000100450bdc:
      FUN_100e44f40(param_2);
code_r0x000100450be0:
    }
    goto LAB_100450b38;
  case 199:
  case 0xe9:
    goto code_r0x000100450bc8;
  case 0xc9:
  case 0xf9:
    goto code_r0x000100450ba8;
  case 0xd0:
    goto code_r0x000100450bf8;
  case 0xd5:
  case 0xe3:
    goto code_r0x000100450b98;
  case 0xd8:
    goto code_r0x000100450c58;
  case 0xeb:
    goto code_r0x000100450b80;
  case 0xef:
    goto code_r0x0001004506f0;
  }
  ppppppbStack_270 = (byte ******)CONCAT71(ppppppbStack_270._1_7_,bVar14);
code_r0x000100450b18:
  param_4 = &UNK_10b21a000;
code_r0x000100450b1c:
  param_4 = param_4 + 0x3f0;
  pppppppbVar10 = &ppppppbStack_270;
code_r0x000100450b24:
  param_3 = (byte *******)&pppppppbStack_a8;
code_r0x000100450b28:
  pppppppbVar10 = (byte *******)FUN_107c05dcc(pppppppbVar10,param_3,param_4);
code_r0x000100450b2c:
  pppppppbVar15 = (byte *******)0x6e;
code_r0x000100450b30:
  pppppppbVar15 = (byte *******)((ulong)pppppppbVar15 | 0x8000000000000000);
code_r0x000100450b34:
  *param_2 = (byte ******)pppppppbVar15;
  param_2[1] = (byte ******)pppppppbVar10;
LAB_100450b38:
code_r0x000100450b3c:
code_r0x000100450b40:
code_r0x000100450b44:
code_r0x000100450b48:
code_r0x000100450b4c:
code_r0x000100450b50:
code_r0x000100450b54:
  return;
}

