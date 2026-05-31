
/* WARNING: Type propagation algorithm not settling */

void FUN_10043b838(undefined1 param_1 [16],undefined1 param_2 [16],byte *******param_3,
                  byte *******param_4,byte *******param_5,undefined *param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  char cVar5;
  byte bVar6;
  undefined7 uVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined7 uVar11;
  code *pcVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  undefined1 in_ZR;
  bool bVar16;
  byte *******pppppppbVar17;
  byte *******extraout_x1;
  undefined1 uVar18;
  byte *******pppppppbVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  byte ******ppppppbVar27;
  long lVar28;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******unaff_x22;
  byte *******unaff_x23;
  byte *******unaff_x24;
  byte *******unaff_x25;
  byte *******unaff_x26;
  byte *******pppppppbVar29;
  byte *******unaff_x27;
  byte *******unaff_x28;
  code *unaff_x30;
  byte ******ppppppbVar30;
  undefined8 uVar31;
  byte *******pppppppbVar32;
  byte *******pppppppbVar33;
  byte *******pppppppbVar34;
  byte *******pppppppbVar35;
  byte *******pppppppbVar36;
  byte *******pppppppbStack_180;
  byte *******in_stack_fffffffffffffe88;
  byte *******pppppppbStack_170;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******apppppppbStack_100 [2];
  byte *******pppppppbStack_f0;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  undefined8 uStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  char cStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *******pppppppbStack_78;
  
  pppppppbVar36 = param_2._8_8_;
  pppppppbVar35 = param_2._0_8_;
  pppppppbVar34 = param_1._8_8_;
  pppppppbVar32 = param_1._0_8_;
  pppppppbVar13 = (byte *******)&pppppppbStack_180;
  pppppppbVar19 = (byte *******)(ulong)*(byte *)param_4;
  pppppppbVar23 = (byte *******)&UNK_108c98bbe;
  ppppppbVar27 = (byte ******)(ulong)*(ushort *)(&UNK_108c98bbe + (long)pppppppbVar19 * 2);
  pppppppbVar26 = (byte *******)(&UNK_10043b87c + (long)ppppppbVar27 * 4);
  pppppppbVar14 = (byte *******)&pppppppbStack_180;
  pppppppbVar15 = (byte *******)&pppppppbStack_180;
  pppppppbVar17 = param_3;
  pppppppbVar24 = pppppppbVar23;
  pppppppbVar25 = pppppppbVar26;
  pppppppbVar29 = unaff_x26;
  pppppppbVar33 = pppppppbVar32;
  switch(*(byte *)param_4) {
  case 0:
    pppppppbStack_f0 =
         (byte *******)((ulong)CONCAT61(pppppppbStack_f0._2_6_,*(byte *)((long)param_4 + 1)) << 8);
    goto code_r0x00010043bf08;
  case 1:
    ppppppbVar27 = (byte ******)(ulong)*(byte *)((long)param_4 + 1);
    goto code_r0x00010043bebc;
  case 2:
    ppppppbVar27 = (byte ******)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x00010043bebc;
  case 3:
    ppppppbVar27 = (byte ******)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x00010043bebc;
  case 4:
    ppppppbVar27 = param_4[1];
code_r0x00010043bebc:
    bStack_e8 = (byte)ppppppbVar27;
    uStack_e7 = (undefined7)((ulong)ppppppbVar27 >> 8);
    uVar18 = 1;
    break;
  case 5:
    ppppppbVar27 = (byte ******)(long)(char)*(byte *)((long)param_4 + 1);
    goto code_r0x00010043befc;
  case 6:
    ppppppbVar27 = (byte ******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x00010043befc;
  case 7:
    ppppppbVar27 = (byte ******)(long)*(int *)((long)param_4 + 4);
    goto code_r0x00010043befc;
  case 8:
    ppppppbVar27 = param_4[1];
code_r0x00010043befc:
    bStack_e8 = (byte)ppppppbVar27;
    uStack_e7 = (undefined7)((ulong)ppppppbVar27 >> 8);
    uVar18 = 2;
    break;
  case 9:
    ppppppbVar27 = (byte ******)(double)*(float *)((long)param_4 + 4);
    goto code_r0x00010043beec;
  case 10:
    ppppppbVar27 = param_4[1];
code_r0x00010043beec:
    bStack_e8 = (byte)ppppppbVar27;
    uStack_e7 = (undefined7)((ulong)ppppppbVar27 >> 8);
    uVar18 = 3;
    break;
  case 0xb:
    FUN_1087e3db0(param_3,&stack0xffffffffffffffd0,&stack0xffffffffffffffef,&UNK_10b219950);
    return;
  case 0xc:
    ppppppbVar27 = param_4[2];
    FUN_1087e3db0(param_3,&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,&UNK_10b219950);
    if (param_4[1] != (byte ******)0x0) {
      _free(ppppppbVar27);
    }
    return;
  case 0xd:
    bStack_e8 = (byte)param_4[1];
    uStack_e7 = (undefined7)((ulong)param_4[1] >> 8);
    uStack_e0 = SUB81(param_4[2],0);
    uStack_df = (undefined7)((ulong)param_4[2] >> 8);
    uVar18 = 5;
    break;
  case 0xe:
    ppppppbVar27 = param_4[2];
    FUN_1087e3db0(param_3,&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,&UNK_10b219950);
    if (param_4[1] != (byte ******)0x0) {
      _free(ppppppbVar27);
    }
    return;
  case 0xf:
    bStack_e8 = (byte)param_4[1];
    uStack_e7 = (undefined7)((ulong)param_4[1] >> 8);
    uStack_e0 = SUB81(param_4[2],0);
    uStack_df = (undefined7)((ulong)param_4[2] >> 8);
    uVar18 = 6;
    break;
  case 0x10:
    uVar18 = 8;
    break;
  default:
    ppppppbVar27 = param_4[1];
    pppppppbStack_f0 = (byte *******)*ppppppbVar27;
    bStack_e8 = (byte)ppppppbVar27[1];
    uStack_e7 = (undefined7)((ulong)ppppppbVar27[1] >> 8);
    uStack_d8 = SUB81(ppppppbVar27[3],0);
    uStack_d7 = (undefined7)((ulong)ppppppbVar27[3] >> 8);
    uStack_e0 = SUB81(ppppppbVar27[2],0);
    uStack_df = (undefined7)((ulong)ppppppbVar27[2] >> 8);
    func_0x000107c04808(param_3,&pppppppbStack_f0);
    goto code_r0x000107c06034;
  case 0x12:
  case 0xa5:
    uVar18 = 7;
    break;
  case 0x13:
    ppppppbVar27 = param_4[1];
    pppppppbStack_f0 = (byte *******)*ppppppbVar27;
    bStack_e8 = (byte)ppppppbVar27[1];
    uStack_e7 = (undefined7)((ulong)ppppppbVar27[1] >> 8);
    uStack_d8 = SUB81(ppppppbVar27[3],0);
    uStack_d7 = (undefined7)((ulong)ppppppbVar27[3] >> 8);
    uStack_e0 = SUB81(ppppppbVar27[2],0);
    uStack_df = (undefined7)((ulong)ppppppbVar27[2] >> 8);
    func_0x000107c054a8(param_3,&pppppppbStack_f0);
    goto code_r0x000107c06034;
  case 0x14:
    unaff_x23 = (byte *******)param_4[1];
    unaff_x20 = (byte *******)param_4[2];
    unaff_x22 = unaff_x20 + (long)param_4[3] * 4;
    pppppppbStack_120 = (byte *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppbStack_140 = unaff_x20;
    pppppppbStack_138 = unaff_x20;
    pppppppbStack_130 = unaff_x23;
    pppppppbStack_128 = unaff_x22;
    if (param_4[3] != (byte ******)0x0) {
      unaff_x21 = unaff_x20 + 4;
      pppppppbStack_138 = unaff_x21;
      if (*(byte *)unaff_x20 == 0x16) goto code_r0x00010043bb9c;
      uVar31 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      cStack_8f = (char)uVar31;
      uStack_8e = (undefined6)((ulong)uVar31 >> 8);
      cStack_88 = (char)((ulong)uVar31 >> 0x38);
      pppppppbStack_78 = (byte *******)unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppbStack_120 = (byte *******)0x1;
      bStack_90 = *(byte *)unaff_x20;
      FUN_100618608(&pppppppbStack_f0,&bStack_90);
      unaff_x24 = (byte *******)CONCAT71(uStack_e7,bStack_e8);
      pppppppbStack_148 = (byte *******)CONCAT71(uStack_d7,uStack_d8);
      pppppppbStack_150 = (byte *******)CONCAT71(uStack_df,uStack_e0);
      if (pppppppbStack_f0 != (byte *******)0x2) {
        param_3[7] = (byte ******)uStack_b8;
        param_3[6] = (byte ******)pppppppbStack_c0;
        param_3[9] = (byte ******)pppppppbStack_a8;
        param_3[8] = (byte ******)pppppppbStack_b0;
        pppppppbVar19 = pppppppbStack_f0;
        pppppppbVar32 = pppppppbStack_d0;
        pppppppbVar34 = pppppppbStack_c8;
        goto code_r0x00010043bd04;
      }
      if (unaff_x24 == (byte *******)0x8000000000000000) goto code_r0x00010043bb9c;
      param_3[3] = (byte ******)pppppppbStack_148;
      param_3[2] = (byte ******)pppppppbStack_150;
      *param_3 = (byte ******)0x2;
      param_3[1] = (byte ******)unaff_x24;
code_r0x00010043bc30:
      unaff_x20 = (byte *******)param_3[2];
      func_0x000100fbc814(&pppppppbStack_f0,&pppppppbStack_140);
      if (pppppppbStack_f0 == (byte *******)0x2) goto code_r0x00010043bdb0;
      param_3[5] = (byte ******)pppppppbStack_c8;
      param_3[4] = (byte ******)pppppppbStack_d0;
      param_3[7] = (byte ******)uStack_b8;
      param_3[6] = (byte ******)pppppppbStack_c0;
      param_3[9] = (byte ******)pppppppbStack_a8;
      param_3[8] = (byte ******)pppppppbStack_b0;
      param_3[10] = (byte ******)pppppppbStack_a0;
      param_3[1] = (byte ******)CONCAT71(uStack_e7,bStack_e8);
      *param_3 = (byte ******)pppppppbStack_f0;
      param_3[3] = (byte ******)CONCAT71(uStack_d7,uStack_d8);
      param_3[2] = (byte ******)CONCAT71(uStack_df,uStack_e0);
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) == 0) {
        return;
      }
      goto code_r0x00010043bc74;
    }
code_r0x00010043bb9c:
    thunk_FUN_1087e427c(param_3,0,&UNK_10b22d5d0,&UNK_10b20a590);
    if (*param_3 == (byte ******)0x2) {
      unaff_x24 = (byte *******)param_3[1];
      goto code_r0x00010043bc30;
    }
    goto code_r0x00010043bd1c;
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
    pppppppbStack_120 = (byte *******)param_4[2];
    ppppppbVar27 = param_4[3];
    unaff_x28 = pppppppbStack_120 + (long)ppppppbVar27 * 8;
    pppppppbStack_140 = (byte *******)CONCAT71(pppppppbStack_140._1_7_,0x16);
    apppppppbStack_100[0] = (byte *******)0x0;
    if (ppppppbVar27 != (byte ******)0x0) {
      unaff_x25 = (byte *******)0x0;
      unaff_x21 = (byte *******)((ulong)&bStack_90 | 1);
      unaff_x23 = (byte *******)((ulong)&pppppppbStack_140 | 1);
      unaff_x20 = (byte *******)((ulong)&pppppppbStack_f0 | 1);
      pppppppbStack_180 = (byte *******)(((long)ppppppbVar27 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (byte *******)0x8000000000000000;
      pppppppbVar19 = (byte *******)0x16;
      unaff_x26 = pppppppbStack_120;
      do {
        unaff_x27 = unaff_x26 + 8;
        ppppppbVar27 = (byte ******)0x6469;
        bVar1 = *(byte *)unaff_x26;
        pppppppbVar23 = (byte *******)(ulong)bVar1;
        pppppppbVar24 = unaff_x25;
        param_3 = pppppppbVar17;
        if (bVar1 == 0x16) break;
        ppppppbVar30 = unaff_x26[2];
        pppppppbVar36 = (byte *******)unaff_x26[5];
        pppppppbVar35 = (byte *******)unaff_x26[4];
        *(byte *******)((long)unaff_x21 + 0x17) = unaff_x26[3];
        *(byte *******)((long)unaff_x21 + 0xf) = ppppppbVar30;
        ppppppbVar30 = *(byte *******)((long)unaff_x26 + 1);
        unaff_x21[1] = *(byte *******)((long)unaff_x26 + 9);
        *unaff_x21 = ppppppbVar30;
        param_3 = pppppppbVar19;
        in_stack_fffffffffffffe88 = pppppppbVar17;
        bStack_90 = bVar1;
code_r0x00010043b950:
        pppppppbVar17 = in_stack_fffffffffffffe88;
        pppppppbStack_128 = (byte *******)unaff_x26[7];
        pppppppbStack_130 = (byte *******)unaff_x26[6];
        puVar3 = (ushort *)CONCAT71(uStack_87,cStack_88);
        puVar4 = (ushort *)CONCAT71(uStack_7f,uStack_80);
        uVar20 = (uint)pppppppbVar23;
        in_stack_fffffffffffffe88 = pppppppbVar17;
        pppppppbStack_140 = pppppppbVar35;
        pppppppbStack_138 = pppppppbVar36;
        if (uVar20 < 0xd) {
          if (uVar20 == 1) {
            bVar16 = cStack_8f == '\0';
code_r0x00010043ba34:
            bVar16 = !bVar16;
code_r0x00010043ba40:
            FUN_100e077ec(&bStack_90);
            goto joined_r0x00010043ba88;
          }
          if (uVar20 == 4) {
            bVar16 = puVar3 == (ushort *)0x0;
            goto code_r0x00010043ba34;
          }
          if (uVar20 != 0xc) {
code_r0x00010043baf4:
            func_0x000107c058c8(&pppppppbStack_f0,&bStack_90,&pppppppbStack_150,&UNK_10b20ef60);
            pppppppbVar19 = pppppppbStack_f0;
            if (pppppppbStack_f0 == (byte *******)0x2) {
              if ((bStack_e8 & 1) == 0) goto code_r0x00010043baa4;
              goto code_r0x00010043ba4c;
            }
            goto code_r0x00010043bffc;
          }
          if (pppppppbStack_78 != (byte *******)0x2) {
            if (puVar3 != (ushort *)0x0) {
              _free();
            }
            goto code_r0x00010043ba4c;
          }
          uVar2 = *puVar4;
          if (puVar3 == (ushort *)0x0) {
            param_3 = (byte *******)0x16;
            if ((uint)uVar2 != (uint)ppppppbVar27) goto code_r0x00010043ba4c;
          }
          else {
            _free();
            param_3 = (byte *******)0x16;
            if (uVar2 != 0x6469) goto code_r0x00010043ba4c;
          }
code_r0x00010043baa4:
          if (unaff_x22 != (byte *******)0x8000000000000000) {
            pppppppbVar19 = (byte *******)((long)unaff_x25 + 1);
            goto code_r0x00010043bf7c;
          }
          bVar1 = (byte)pppppppbStack_140;
          pppppppbStack_140 = (byte *******)CONCAT71(pppppppbStack_140._1_7_,(char)param_3);
          if (bVar1 == 0x16) goto code_r0x00010043bfcc;
          ppppppbVar27 = *unaff_x23;
          unaff_x21[1] = unaff_x23[1];
          *unaff_x21 = ppppppbVar27;
          uVar31 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x21 + 0xf) = uVar31;
          bStack_90 = bVar1;
          FUN_100618608(&pppppppbStack_f0,&bStack_90);
          if (pppppppbStack_f0 != (byte *******)0x2) {
            apppppppbStack_100[0] = (byte *******)((long)unaff_x25 + 1);
            pppppppbVar17[5] = (byte ******)pppppppbStack_c8;
            pppppppbVar17[4] = (byte ******)pppppppbStack_d0;
            pppppppbVar17[7] = (byte ******)uStack_b8;
            pppppppbVar17[6] = (byte ******)pppppppbStack_c0;
            pppppppbVar17[9] = (byte ******)pppppppbStack_a8;
            pppppppbVar17[8] = (byte ******)pppppppbStack_b0;
            pppppppbVar17[10] = (byte ******)pppppppbStack_a0;
            *pppppppbVar17 = (byte ******)pppppppbStack_f0;
            pppppppbVar17[2] = (byte ******)CONCAT71(uStack_df,uStack_e0);
            pppppppbVar17[1] = (byte ******)CONCAT71(uStack_e7,bStack_e8);
            pppppppbVar17[3] = (byte ******)CONCAT71(uStack_d7,uStack_d8);
            goto code_r0x00010043bd88;
          }
          unaff_x22 = (byte *******)CONCAT71(uStack_e7,bStack_e8);
          pppppppbVar23 = (byte *******)CONCAT71(uStack_df,uStack_e0);
code_r0x00010043b90c:
          pppppppbStack_170 = (byte *******)CONCAT71(uStack_d7,uStack_d8);
          pppppppbVar17 = in_stack_fffffffffffffe88;
          pppppppbStack_168 = pppppppbVar23;
        }
        else {
          if (uVar20 == 0xd) {
            if (puVar4 == (ushort *)0x2) {
              bVar16 = (uint)*puVar3 == (uint)ppppppbVar27;
              goto code_r0x00010043ba34;
            }
code_r0x00010043ba3c:
            bVar16 = true;
            goto code_r0x00010043ba40;
          }
          if (uVar20 != 0xe) {
            if (uVar20 != 0xf) goto code_r0x00010043baf4;
            if ((puVar4 != (ushort *)0x2) || ((char)*puVar3 != 'i')) goto code_r0x00010043ba3c;
            bVar16 = *(char *)((long)puVar3 + 1) == 'd';
            goto code_r0x00010043ba34;
          }
          if ((pppppppbStack_78 == (byte *******)0x2) && ((char)*puVar4 == 'i')) {
            bVar16 = *(char *)((long)puVar4 + 1) != 'd';
          }
          else {
            bVar16 = true;
          }
          if (puVar3 != (ushort *)0x0) {
            _free();
          }
joined_r0x00010043ba88:
          if (!bVar16) goto code_r0x00010043baa4;
code_r0x00010043ba4c:
          cVar5 = (byte)pppppppbStack_140;
          pppppppbStack_140 = (byte *******)CONCAT71(pppppppbStack_140._1_7_,(char)param_3);
          if (cVar5 == '\x16') {
            apppppppbStack_100[0] = (byte *******)((long)unaff_x25 + 1);
            param_3 = (byte *******)&UNK_108ca1a98;
            param_5 = (byte *******)&UNK_10b24f000;
            goto code_r0x00010043bf60;
          }
          ppppppbVar27 = *unaff_x23;
          unaff_x20[1] = unaff_x23[1];
          *unaff_x20 = ppppppbVar27;
          uVar31 = *(undefined8 *)((long)unaff_x23 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar31;
          pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,cVar5);
          FUN_100e077ec(&pppppppbStack_f0);
        }
        pppppppbVar23 = unaff_x26 + 8;
        unaff_x25 = (byte *******)((long)unaff_x25 + 1);
        pppppppbVar19 = param_3;
        pppppppbVar24 = pppppppbStack_180;
        unaff_x26 = unaff_x27;
        param_3 = pppppppbVar17;
      } while (pppppppbVar23 != unaff_x28);
      in_ZR = unaff_x22 == (byte *******)0x8000000000000000;
      pppppppbVar26 = pppppppbStack_170;
      apppppppbStack_100[0] = pppppppbVar24;
      goto code_r0x00010043bc94;
    }
  case 0xad:
code_r0x00010043bc9c:
    thunk_FUN_1087e4020(&pppppppbStack_f0,&UNK_108ca26b0,2);
    unaff_x22 = (byte *******)CONCAT71(uStack_e7,bStack_e8);
    pppppppbVar19 = pppppppbStack_f0;
code_r0x00010043bcb8:
    unaff_x20 = (byte *******)CONCAT71(uStack_df,uStack_e0);
    pppppppbVar26 = (byte *******)CONCAT71(uStack_d7,uStack_d8);
    in_ZR = pppppppbVar19 == (byte *******)0x2;
code_r0x00010043bcc0:
    pppppppbVar32 = pppppppbStack_d0;
    pppppppbVar34 = pppppppbStack_c8;
    pppppppbVar35 = pppppppbStack_c0;
    pppppppbVar36 = uStack_b8;
    if ((bool)in_ZR) {
code_r0x00010043bcc4:
      param_3[2] = (byte ******)unaff_x20;
      param_3[3] = (byte ******)pppppppbVar26;
code_r0x00010043bcc8:
      pppppppbVar19 = (byte *******)0x2;
      pppppppbVar17 = param_3;
code_r0x00010043bccc:
      *pppppppbVar17 = (byte ******)pppppppbVar19;
      pppppppbVar17[1] = (byte ******)unaff_x22;
    }
    else {
code_r0x00010043bcd8:
      param_3[5] = (byte ******)pppppppbVar34;
      param_3[4] = (byte ******)pppppppbVar32;
      param_3[7] = (byte ******)pppppppbVar36;
      param_3[6] = (byte ******)pppppppbVar35;
code_r0x00010043bcdc:
      pppppppbVar17 = param_3;
      pppppppbVar32 = pppppppbStack_b0;
      pppppppbVar34 = pppppppbStack_a8;
code_r0x00010043bce0:
      pppppppbVar17[9] = (byte ******)pppppppbVar34;
      pppppppbVar17[8] = (byte ******)pppppppbVar32;
      pppppppbVar17[10] = (byte ******)pppppppbStack_a0;
      *pppppppbVar17 = (byte ******)pppppppbVar19;
      pppppppbVar17[1] = (byte ******)unaff_x22;
      pppppppbVar17[2] = (byte ******)unaff_x20;
      pppppppbVar17[3] = (byte ******)pppppppbVar26;
code_r0x00010043bd88:
      if (*pppppppbVar17 != (byte ******)0x2) {
code_r0x00010043c050:
        param_3 = (byte *******)&pppppppbStack_120;
code_r0x00010043c058:
        FUN_100d34830(param_3);
code_r0x00010043c05c:
        pppppppbVar19 = (byte *******)((ulong)pppppppbStack_140 & 0xff);
code_r0x00010043c060:
        if ((int)pppppppbVar19 == 0x16) {
          return;
        }
code_r0x00010043c068:
        FUN_100e077ec(&pppppppbStack_140);
code_r0x00010043c070:
        return;
      }
      unaff_x22 = (byte *******)pppppppbVar17[1];
      unaff_x20 = (byte *******)pppppppbVar17[2];
    }
    func_0x000100fbc59c(&pppppppbStack_f0,&pppppppbStack_140);
    param_3 = pppppppbVar17;
    if (pppppppbStack_f0 == (byte *******)0x2) {
code_r0x00010043bdb0:
      *param_3 = (byte ******)pppppppbStack_f0;
      return;
    }
    pppppppbVar17[5] = (byte ******)pppppppbStack_c8;
    pppppppbVar17[4] = (byte ******)pppppppbStack_d0;
    pppppppbVar17[7] = (byte ******)uStack_b8;
    pppppppbVar17[6] = (byte ******)pppppppbStack_c0;
    pppppppbVar17[9] = (byte ******)pppppppbStack_a8;
    pppppppbVar17[8] = (byte ******)pppppppbStack_b0;
    pppppppbVar17[10] = (byte ******)pppppppbStack_a0;
    pppppppbVar17[1] = (byte ******)CONCAT71(uStack_e7,bStack_e8);
    *pppppppbVar17 = (byte ******)pppppppbStack_f0;
    pppppppbVar17[3] = (byte ******)CONCAT71(uStack_d7,uStack_d8);
    pppppppbVar17[2] = (byte ******)CONCAT71(uStack_df,uStack_e0);
    if (((ulong)unaff_x22 & 0x7fffffffffffffff) == 0) {
      return;
    }
    goto code_r0x00010043bde0;
  case 0x16:
  case 0xdd:
  case 0xf7:
    goto code_r0x00010043c140;
  case 0x17:
  case 0xe1:
    goto code_r0x00010043c150;
  case 0x18:
  case 0xf9:
    while( true ) {
      pppppppbVar17 = unaff_x22;
code_r0x00010043c11c:
      FUN_100e077ec(pppppppbVar17);
code_r0x00010043c120:
      unaff_x22 = unaff_x21;
code_r0x00010043c124:
code_r0x00010043c10c:
      unaff_x24 = (byte *******)((long)unaff_x24 + -1);
      in_ZR = unaff_x24 == (byte *******)0x0;
code_r0x00010043c110:
      if ((bool)in_ZR) break;
code_r0x00010043c114:
      unaff_x21 = unaff_x22 + 4;
    }
  case 0xe3:
    if (unaff_x23 != (byte *******)0x0) goto code_r0x00010043c12c;
    goto code_r0x00010043c15c;
  case 0x19:
  case 0x54:
  case 0xdc:
  case 0xf3:
    goto code_r0x00010043c130;
  case 0x1a:
  case 0x5b:
    goto code_r0x00010043c0dc;
  case 0x1b:
  case 0xd4:
  case 0xfc:
    goto code_r0x00010043c160;
  case 0x1c:
    goto code_r0x00010043c178;
  case 0x1d:
    goto code_r0x00010043c138;
  case 0x1e:
    goto code_r0x00010043c190;
  case 0x1f:
  case 0x5d:
  case 0x71:
  case 0x87:
    goto code_r0x00010043c10c;
  case 0x20:
  case 0xe4:
    goto code_r0x00010043c180;
  case 0x21:
  case 0x4f:
  case 0x61:
  case 0x72:
  case 0x88:
code_r0x00010043c0bc:
    _free();
code_r0x00010043c0c0:
code_r0x00010043c0c4:
    param_3 = (byte *******)__Unwind_Resume(param_3);
code_r0x00010043c0c8:
    pppppppbVar17 = param_3;
code_r0x00010043c0cc:
    param_3 = (byte *******)&pppppppbStack_140;
code_r0x00010043c0d0:
    FUN_100e81e80(param_3);
    param_3 = pppppppbVar17;
code_r0x00010043c0d4:
    goto code_r0x00010043c15c;
  case 0x22:
  case 0x5f:
    goto code_r0x00010043c0e4;
  case 0x23:
  case 0xe2:
    goto code_r0x00010043c168;
  case 0x24:
    goto code_r0x00010043c08c;
  case 0x25:
  case 0xdf:
  case 0xf2:
    goto code_r0x00010043c120;
  case 0x26:
    goto code_r0x00010043c084;
  case 0x28:
  case 0xcf:
    goto code_r0x00010043c1e0;
  case 0x29:
  case 0x81:
  case 0x97:
    goto code_r0x00010043bcc0;
  case 0x2a:
  case 0x82:
  case 0x98:
code_r0x00010043bd04:
    param_3[10] = (byte ******)pppppppbStack_a0;
  case 0x6c:
    pppppppbVar35 = pppppppbStack_150;
    pppppppbVar36 = pppppppbStack_148;
code_r0x00010043bd10:
    param_3[3] = (byte ******)pppppppbVar36;
    param_3[2] = (byte ******)pppppppbVar35;
    param_3[5] = (byte ******)pppppppbVar34;
    param_3[4] = (byte ******)pppppppbVar32;
    *param_3 = (byte ******)pppppppbVar19;
    param_3[1] = (byte ******)unaff_x24;
code_r0x00010043bd1c:
    lVar28 = ((ulong)((long)unaff_x22 - (long)unaff_x21) >> 5) + 1;
    while (lVar28 = lVar28 + -1, lVar28 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 4;
    }
    if (unaff_x23 == (byte *******)0x0) {
      return;
    }
code_r0x00010043bde0:
    _free(unaff_x20);
    return;
  case 0x2c:
  case 0x66:
    goto code_r0x00010043c038;
  case 0x2d:
    goto code_r0x00010043c048;
  case 0x2e:
    goto code_r0x00010043c010;
  case 0x2f:
    goto code_r0x00010043c028;
  case 0x30:
  case 0x52:
  case 0xb1:
    goto code_r0x00010043bfd4;
  case 0x31:
    goto code_r0x00010043c058;
  case 0x32:
  case 0x51:
    goto code_r0x00010043c070;
  case 0x33:
  case 0x68:
    goto code_r0x00010043c030;
  case 0x34:
  case 0x49:
  case 0x5c:
    goto code_r0x00010043c088;
  case 0x35:
  case 0x4d:
  case 0xa0:
  case 0xba:
    goto code_r0x00010043c004;
  case 0x36:
    goto code_r0x00010043c078;
  case 0x37:
  case 0xa9:
    goto code_r0x00010043bfac;
  case 0x38:
  case 0x50:
  case 0x9b:
    goto code_r0x00010043bfdc;
  case 0x39:
  case 99:
  case 0x7e:
  case 0x94:
    goto code_r0x00010043c060;
  case 0x3a:
    goto code_r0x00010043bf84;
  case 0x3b:
    goto code_r0x00010043c018;
  case 0x3c:
code_r0x00010043bf7c:
    param_4 = (byte *******)&UNK_108ca2000;
    apppppppbStack_100[0] = pppppppbVar19;
code_r0x00010043bf84:
    param_4 = param_4 + 0xd6;
    param_3 = (byte *******)&pppppppbStack_f0;
    param_5 = (byte *******)0x2;
code_r0x00010043bf90:
    thunk_FUN_1087e4364(param_3,param_4,param_5);
    unaff_x20 = pppppppbStack_168;
code_r0x00010043bf98:
    param_3 = in_stack_fffffffffffffe88;
code_r0x00010043bf9c:
    param_3[5] = (byte ******)pppppppbStack_c8;
    param_3[4] = (byte ******)pppppppbStack_d0;
    param_3[7] = (byte ******)uStack_b8;
    param_3[6] = (byte ******)pppppppbStack_c0;
code_r0x00010043bfa4:
    param_3[9] = (byte ******)pppppppbStack_a8;
    param_3[8] = (byte ******)pppppppbStack_b0;
code_r0x00010043bfac:
    param_3[10] = (byte ******)pppppppbStack_a0;
code_r0x00010043bfb4:
    param_3[1] = (byte ******)CONCAT71(uStack_e7,bStack_e8);
    *param_3 = (byte ******)pppppppbStack_f0;
    param_3[3] = (byte ******)CONCAT71(uStack_d7,uStack_d8);
    param_3[2] = (byte ******)CONCAT71(uStack_df,uStack_e0);
    pppppppbVar17 = param_3;
code_r0x00010043bfbc:
    param_3 = unaff_x20;
    if (unaff_x22 != (byte *******)0x0) {
code_r0x00010043bfc4:
      _free(param_3);
    }
    goto code_r0x00010043bd88;
  case 0x3e:
    param_3 = (byte *******)FUN_107c05ccc();
code_r0x00010043c0dc:
code_r0x00010043c0e0:
code_r0x00010043c0e4:
    _free();
code_r0x00010043c0e8:
code_r0x00010043c0ec:
    param_3 = (byte *******)__Unwind_Resume(param_3);
code_r0x00010043c0f4:
    pppppppbVar19 = (byte *******)((long)unaff_x25 + 1);
code_r0x00010043c0f8:
code_r0x00010043c0fc:
    unaff_x20 = pppppppbStack_168;
    apppppppbStack_100[0] = pppppppbVar19;
    goto code_r0x00010043c144;
  case 0x3f:
code_r0x00010043bc74:
    goto code_r0x00010043bde0;
  case 0x40:
    goto code_r0x00010043bcb8;
  case 0x42:
  case 100:
  case 0x79:
  case 0x8f:
    param_3 = (byte *******)FUN_107c05ccc();
  case 0xfd:
    if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
code_r0x00010043c0a0:
      goto code_r0x00010043c12c;
    }
code_r0x00010043c15c:
code_r0x00010043c160:
    __Unwind_Resume(param_3);
    unaff_x30 = FUN_10043c168;
    FUN_107c05ccc();
    param_4 = extraout_x1;
code_r0x00010043c168:
    pppppppbVar13 = (byte *******)&stack0xfffffffffffffe20;
code_r0x00010043c16c:
    *(byte ********)((long)pppppppbVar13 + 0x10) = unaff_x26;
    *(byte ********)((long)pppppppbVar13 + 0x18) = unaff_x25;
    pppppppbVar14 = pppppppbVar13;
code_r0x00010043c170:
    *(byte ********)((long)pppppppbVar14 + 0x20) = unaff_x24;
    *(byte ********)((long)pppppppbVar14 + 0x28) = unaff_x23;
    *(byte ********)((long)pppppppbVar14 + 0x30) = unaff_x22;
    *(byte ********)((long)pppppppbVar14 + 0x38) = unaff_x21;
    pppppppbVar15 = pppppppbVar14;
code_r0x00010043c178:
    *(byte ********)((long)pppppppbVar15 + 0x40) = unaff_x20;
    *(byte ********)((long)pppppppbVar15 + 0x48) = param_3;
    *(undefined1 **)((long)pppppppbVar15 + 0x50) = &stack0xfffffffffffffff0;
    *(code **)((long)pppppppbVar15 + 0x58) = unaff_x30;
code_r0x00010043c180:
code_r0x00010043c188:
    pppppppbVar19 = (byte *******)(ulong)*(byte *)param_4;
code_r0x00010043c190:
                    /* WARNING: Could not recover jumptable at 0x00010043c1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10043c1a8 + (ulong)*(ushort *)(&UNK_108c98bea + (long)pppppppbVar19 * 2) * 4))()
    ;
    return;
  case 0x43:
    goto code_r0x00010043c0a0;
  case 0x44:
  case 0x7c:
  case 0x92:
    goto code_r0x00010043c068;
  case 0x45:
    goto code_r0x00010043c080;
  case 0x46:
    goto code_r0x00010043c02c;
  case 0x47:
code_r0x00010043c0b0:
  case 0x62:
  case 0x6f:
  case 0x85:
code_r0x00010043c12c:
code_r0x00010043c130:
    _free();
code_r0x00010043c138:
    __Unwind_Resume(param_3);
code_r0x00010043c13c:
    param_3 = (byte *******)FUN_107c05ccc();
code_r0x00010043c140:
code_r0x00010043c144:
    in_ZR = ((ulong)unaff_x22 & 0x7fffffffffffffff) == 0;
    pppppppbVar17 = param_3;
code_r0x00010043c148:
    param_3 = unaff_x20;
    unaff_x20 = param_3;
    if (!(bool)in_ZR) {
code_r0x00010043c150:
      _free(param_3);
    }
code_r0x00010043c154:
    param_3 = (byte *******)&pppppppbStack_140;
code_r0x00010043c158:
    FUN_100e7b998(param_3);
    param_3 = pppppppbVar17;
    goto code_r0x00010043c15c;
  case 0x48:
    goto code_r0x00010043c0c8;
  case 0x4a:
    goto code_r0x00010043c0e0;
  case 0x4b:
    goto code_r0x00010043c05c;
  case 0x4c:
    goto code_r0x00010043c0d0;
  case 0x4e:
    goto code_r0x00010043c034;
  case 0x55:
    goto code_r0x00010043bc98;
  case 0x56:
    goto code_r0x00010043bcdc;
  case 0x58:
  case 0xfb:
    goto code_r0x00010043c0ec;
  case 0x59:
  case 0x7d:
  case 0x93:
  case 0xe5:
    goto code_r0x00010043c0fc;
  case 0x5a:
  case 0xfe:
    goto code_r0x00010043c0c4;
  case 0x5e:
    goto code_r0x00010043c124;
  case 0x60:
  case 0x73:
  case 0x89:
    goto code_r0x00010043c13c;
  case 0x65:
  case 0x75:
  case 0x8b:
    goto code_r0x00010043c114;
  case 0x67:
  case 0xe0:
    goto code_r0x00010043c0cc;
  case 0x6a:
  case 0xe6:
  case 0xfa:
    goto code_r0x00010043c170;
  case 0x6b:
    goto code_r0x00010043bcc8;
  case 0x6e:
  case 0x84:
    goto code_r0x00010043c11c;
  case 0x70:
  case 0x86:
    goto code_r0x00010043c0f4;
  case 0x74:
  case 0x8a:
    goto code_r0x00010043c154;
  case 0x76:
  case 0x8c:
    goto code_r0x00010043c16c;
  case 0x77:
  case 0x8d:
    goto code_r0x00010043c0e8;
  case 0x78:
  case 0x8e:
    goto code_r0x00010043c15c;
  case 0x7a:
  case 0x90:
    goto code_r0x00010043c0c0;
  case 0x7b:
  case 0x91:
    goto code_r0x00010043c144;
  case 0x80:
  case 0x96:
    goto code_r0x00010043c1bc;
  case 0x9a:
code_r0x00010043bfcc:
    pppppppbVar19 = (byte *******)((long)unaff_x25 + 1);
code_r0x00010043bfd4:
    apppppppbStack_100[0] = pppppppbVar19;
code_r0x00010043bfdc:
    param_3 = (byte *******)&UNK_108ca1a98;
code_r0x00010043bfe4:
    param_5 = (byte *******)&UNK_10b24f848;
code_r0x00010043bfec:
    param_4 = (byte *******)0x2c;
code_r0x00010043bff4:
    FUN_107c05cac(param_3,param_4,param_5);
code_r0x00010043bff8:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10043bffc);
    (*pcVar12)();
  case 0x9c:
  case 0xbf:
    goto code_r0x00010043bfa4;
  case 0x9d:
  case 0xb7:
    goto code_r0x00010043bfbc;
  case 0x9e:
  case 0xbc:
    goto code_r0x00010043bf68;
  case 0x9f:
  case 0xbd:
    goto code_r0x00010043bfec;
  case 0xa1:
  case 0xb0:
    goto code_r0x00010043bfc4;
  case 0xa2:
    goto code_r0x00010043c01c;
  case 0xa3:
    goto code_r0x00010043bf98;
  case 0xa4:
    goto code_r0x00010043c00c;
  case 0xa6:
    goto code_r0x00010043bf70;
  case 0xa7:
    goto code_r0x00010043bff4;
  case 0xa8:
    goto code_r0x00010043bf18;
  case 0xaa:
  case 0xbe:
    goto code_r0x00010043bf10;
  case 0xac:
    goto code_r0x00010043c04c;
  case 0xae:
    goto code_r0x00010043bce0;
  case 0xb2:
    goto code_r0x00010043bf9c;
  case 0xb3:
    goto code_r0x00010043bfb4;
  case 0xb4:
code_r0x00010043bf60:
    param_5 = param_5 + 0x109;
    param_4 = (byte *******)0x2c;
code_r0x00010043bf68:
    FUN_107c05cac(param_3,param_4,param_5);
code_r0x00010043bf70:
    goto code_r0x00010043bff8;
  case 0xb5:
    goto code_r0x00010043bfe4;
  case 0xb6:
code_r0x00010043bffc:
    pppppppbVar24 = (byte *******)((long)unaff_x25 + 1);
code_r0x00010043c004:
    pppppppbVar23 = (byte *******)(ulong)bStack_e8;
    apppppppbStack_100[0] = pppppppbVar24;
code_r0x00010043c00c:
    pppppppbVar26 = (byte *******)&pppppppbStack_f0;
code_r0x00010043c010:
    pppppppbVar34 = *(byte ********)((long)pppppppbVar26 + 0x21);
    pppppppbVar32 = *(byte ********)((long)pppppppbVar26 + 0x19);
code_r0x00010043c014:
    param_3 = in_stack_fffffffffffffe88;
code_r0x00010043c018:
    *(byte ********)((long)param_3 + 0x21) = pppppppbVar34;
    *(byte ********)((long)param_3 + 0x19) = pppppppbVar32;
code_r0x00010043c01c:
    uVar31 = *(undefined8 *)((long)pppppppbVar26 + 0x29);
    *(undefined8 *)((long)param_3 + 0x31) = *(undefined8 *)((long)pppppppbVar26 + 0x31);
    *(undefined8 *)((long)param_3 + 0x29) = uVar31;
    pppppppbVar34 = *(byte ********)((long)pppppppbVar26 + 0x41);
    pppppppbVar32 = *(byte ********)((long)pppppppbVar26 + 0x39);
code_r0x00010043c028:
    *(byte ********)((long)param_3 + 0x41) = pppppppbVar34;
    *(byte ********)((long)param_3 + 0x39) = pppppppbVar32;
code_r0x00010043c02c:
    pppppppbVar34 = (byte *******)pppppppbVar26[10];
    pppppppbVar32 = (byte *******)pppppppbVar26[9];
code_r0x00010043c030:
    param_3[10] = (byte ******)pppppppbVar34;
    param_3[9] = (byte ******)pppppppbVar32;
code_r0x00010043c034:
    pppppppbVar34 = (byte *******)CONCAT17(uStack_d8,uStack_df);
    pppppppbVar32 = (byte *******)CONCAT17(uStack_e0,uStack_e7);
code_r0x00010043c038:
    *(byte ********)((long)param_3 + 0x11) = pppppppbVar34;
    *(byte ********)((long)param_3 + 9) = pppppppbVar32;
    *param_3 = (byte ******)pppppppbVar19;
    *(byte *)(param_3 + 1) = (byte)pppppppbVar23;
code_r0x00010043c044:
    in_ZR = ((ulong)unaff_x22 & 0x7fffffffffffffff) == 0;
code_r0x00010043c048:
    pppppppbVar17 = param_3;
    unaff_x20 = pppppppbStack_168;
code_r0x00010043c04c:
    param_3 = unaff_x20;
    if (!(bool)in_ZR) goto code_r0x00010043bfc4;
    goto code_r0x00010043c050;
  case 0xb8:
    goto code_r0x00010043c014;
  case 0xb9:
    goto code_r0x00010043bf90;
  case 0xbb:
    goto code_r0x00010043bf38;
  case 0xc0:
    goto code_r0x00010043bf08;
  case 0xc2:
    goto code_r0x00010043c044;
  case 0xc3:
code_r0x00010043bc94:
    unaff_x20 = pppppppbStack_168;
code_r0x00010043bc98:
    if ((bool)in_ZR) goto code_r0x00010043bc9c;
    goto code_r0x00010043bcc4;
  case 0xc4:
    goto code_r0x00010043bcd8;
  case 0xc6:
    goto code_r0x00010043c214;
  case 199:
    goto code_r0x00010043c224;
  case 200:
    goto code_r0x00010043c1ec;
  case 0xc9:
    goto code_r0x00010043c204;
  case 0xca:
    pppppppbVar34 = (byte *******)unaff_x20[3];
    pppppppbVar33 = (byte *******)unaff_x20[2];
    apppppppbStack_100[0] = pppppppbVar32;
  case 0xd2:
    bStack_e8 = (byte)pppppppbVar34;
    uStack_e7 = (undefined7)((ulong)pppppppbVar34 >> 8);
    pppppppbStack_f0 = pppppppbVar33;
code_r0x00010043c1bc:
    func_0x000107c04680();
code_r0x000107c06034:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)();
    return;
  case 0xcb:
    goto code_r0x00010043c234;
  case 0xcc:
    goto code_r0x00010043c24c;
  case 0xcd:
    goto code_r0x00010043c20c;
  case 0xce:
    goto code_r0x00010043c264;
  case 0xd0:
    goto code_r0x00010043c254;
  case 0xd1:
    goto code_r0x00010043c188;
  case 0xd3:
    goto code_r0x00010043c23c;
  case 0xd5:
    goto code_r0x00010043c1f4;
  case 0xd6:
  case 0xe9:
  case 0xf8:
    goto code_r0x00010043c158;
  case 0xd8:
    goto code_r0x00010043c2b0;
  case 0xd9:
    goto code_r0x00010043b90c;
  case 0xda:
    goto code_r0x00010043b950;
  case 0xde:
    goto code_r0x00010043c10c;
  case 0xe7:
    if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) goto code_r0x00010043c0b0;
    goto code_r0x00010043c15c;
  case 0xe8:
    goto code_r0x00010043c0d4;
  case 0xea:
    goto code_r0x00010043c07c;
  case 0xeb:
  case 0xf5:
    goto code_r0x00010043c110;
  case 0xec:
code_r0x00010043c078:
    pppppppbVar19 = (byte *******)((ulong)pppppppbStack_140 & 0xff);
code_r0x00010043c07c:
    in_ZR = (int)pppppppbVar19 == 0x16;
code_r0x00010043c080:
    if (!(bool)in_ZR) {
code_r0x00010043c084:
      pppppppbVar17 = (byte *******)&pppppppbStack_140;
code_r0x00010043c088:
      FUN_100e077ec(pppppppbVar17);
code_r0x00010043c08c:
    }
    goto code_r0x00010043c15c;
  case 0xee:
    ppppppbVar27 = param_4[3];
    pppppppbVar23 = (byte *******)((long)ppppppbVar27 * 0x40);
    param_3 = pppppppbVar19 + (long)ppppppbVar27 * 8;
    unaff_x21 = (byte *******)&pppppppbStack_150;
code_r0x00010043c1e0:
    pppppppbVar25 = (byte *******)0x16;
    pppppppbStack_130 = pppppppbVar19;
    pppppppbStack_128 = pppppppbVar19;
    pppppppbStack_120 = pppppppbVar26;
code_r0x00010043c1ec:
    pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,(char)pppppppbVar25);
code_r0x00010043c1f4:
    if (ppppppbVar27 == (byte ******)0x0) {
      unaff_x24 = (byte *******)0x8000000000000001;
      bStack_e8 = 1;
      uStack_e7 = 0x80000000000000;
      pppppppbStack_160 = unaff_x22;
      pppppppbStack_168 = unaff_x27;
    }
    else {
      unaff_x25 = (byte *******)0x0;
      unaff_x22 = (byte *******)((ulong)&uStack_b8 | 1);
code_r0x00010043c204:
      unaff_x21 = (byte *******)((ulong)&pppppppbStack_150 | 1);
code_r0x00010043c20c:
      pppppppbVar26 = (byte *******)((ulong)&cStack_88 | 1);
code_r0x00010043c214:
      pppppppbVar23 = (byte *******)(((ulong)(pppppppbVar23 + -8) >> 6) + 1);
      pppppppbStack_158 = pppppppbVar26;
code_r0x00010043c224:
      unaff_x24 = (byte *******)0x8000000000000001;
      unaff_x23 = (byte *******)0x8000000000000001;
      pppppppbVar29 = pppppppbVar19 + 8;
      pppppppbStack_180 = pppppppbVar23;
      in_stack_fffffffffffffe88 = unaff_x26;
code_r0x00010043c234:
      unaff_x26 = pppppppbVar29;
      unaff_x28 = (byte *******)0x8000000000000001;
      pppppppbVar17 = param_3;
      do {
        pppppppbVar24 = uStack_b8;
        unaff_x27 = unaff_x26 + -8;
        bVar1 = *(byte *)unaff_x27;
        pppppppbVar23 = (byte *******)(ulong)bVar1;
        pppppppbVar26 = unaff_x25;
        pppppppbVar32 = unaff_x26;
        if (bVar1 == 0x16) break;
        uStack_b8 = (byte *******)CONCAT71(uStack_b8._1_7_,bVar1);
        pppppppbVar32 = uStack_b8;
        ppppppbVar27 = unaff_x26[-6];
        *(byte *******)((long)unaff_x22 + 0x17) = unaff_x26[-5];
        *(byte *******)((long)unaff_x22 + 0xf) = ppppppbVar27;
        ppppppbVar27 = *(byte *******)((long)unaff_x26 + -0x3f);
        unaff_x22[1] = *(byte *******)((long)unaff_x26 + -0x37);
        *unaff_x22 = ppppppbVar27;
        pppppppbStack_148 = (byte *******)unaff_x26[-3];
        pppppppbStack_150 = (byte *******)unaff_x26[-4];
        pppppppbStack_138 = (byte *******)unaff_x26[-1];
        pppppppbStack_140 = (byte *******)unaff_x26[-2];
        pppppppbVar19 = pppppppbStack_b0;
        if (bVar1 < 0xd) {
          param_3 = pppppppbStack_a8;
          pppppppbVar26 = pppppppbStack_a0;
          if (bVar1 == 1) {
            uStack_b8._1_1_ = SUB81(pppppppbVar24,1);
            iVar22 = 1;
            if (uStack_b8._1_1_ != '\x01') {
              iVar22 = 2;
            }
            bVar16 = uStack_b8._1_1_ != '\0';
            iVar21 = 0;
            uStack_b8 = pppppppbVar32;
            if (bVar16) {
              iVar21 = iVar22;
            }
          }
          else {
code_r0x00010043c2b0:
            if ((int)pppppppbVar23 != 4) {
              pppppppbVar24 = unaff_x26;
              if ((int)pppppppbVar23 == 0xc) {
                pppppppbVar29 = unaff_x26;
                if (pppppppbVar26 == (byte *******)0x6) {
                  iVar21 = 1;
                  if (*(int *)param_3 != 0x61726170 || *(short *)((long)param_3 + 4) != 0x736d) {
                    iVar21 = 2;
                  }
                }
                else if (pppppppbVar26 == (byte *******)0x2) {
                  iVar21 = 2;
                  if (*(short *)param_3 == 0x6469) {
                    iVar21 = 0;
                  }
                }
                else {
                  iVar21 = 2;
                }
                goto joined_r0x00010043c444;
              }
code_r0x00010043cce8:
              unaff_x26 = in_stack_fffffffffffffe88;
              bStack_e8 = (byte)unaff_x28;
              uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
              uStack_e0 = SUB81(pppppppbStack_168,0);
              uStack_df = (undefined7)((ulong)pppppppbStack_168 >> 8);
              pppppppbStack_128 = pppppppbVar24;
              ppppppbVar27 = (byte ******)thunk_FUN_108855b04(&uStack_b8,&cStack_88,&UNK_10b210840);
              unaff_x21 = (byte *******)&pppppppbStack_150;
              goto LAB_10043c7c0;
            }
            iVar22 = 1;
            if (pppppppbVar19 != (byte *******)0x1) {
              iVar22 = 2;
            }
            iVar21 = 0;
            if (pppppppbVar19 != (byte *******)0x0) {
              iVar21 = iVar22;
            }
          }
code_r0x00010043c4d0:
          FUN_100e077ec(&uStack_b8);
          pppppppbVar29 = unaff_x26;
          unaff_x26 = in_stack_fffffffffffffe88;
        }
        else {
          if (bVar1 == 0xd) {
            if (pppppppbStack_a8 == (byte *******)0x6) {
              iVar21 = 1;
              uStack_b8 = pppppppbVar32;
              if (*(int *)pppppppbStack_b0 != 0x61726170 ||
                  *(short *)((long)pppppppbStack_b0 + 4) != 0x736d) {
                iVar21 = 2;
              }
            }
            else {
              if (pppppppbStack_a8 != (byte *******)0x2) goto code_r0x00010043c49c;
              iVar21 = 2;
              uStack_b8 = pppppppbVar32;
              if (*(short *)pppppppbStack_b0 == 0x6469) {
                iVar21 = 0;
              }
            }
            goto code_r0x00010043c4d0;
          }
          if (bVar1 != 0xe) {
            pppppppbVar24 = unaff_x26;
            if (bVar1 != 0xf) goto code_r0x00010043cce8;
            if (pppppppbStack_a8 == (byte *******)0x6) {
              if (((((*(byte *)pppppppbStack_b0 != 0x70) ||
                    (*(byte *)((long)pppppppbStack_b0 + 1) != 0x61)) ||
                   (*(byte *)((long)pppppppbStack_b0 + 2) != 0x72)) ||
                  ((*(byte *)((long)pppppppbStack_b0 + 3) != 0x61 ||
                   (*(byte *)((long)pppppppbStack_b0 + 4) != 0x6d)))) ||
                 (*(byte *)((long)pppppppbStack_b0 + 5) != 0x73)) goto code_r0x00010043c49c;
              iVar21 = 1;
              uStack_b8 = pppppppbVar32;
            }
            else if (((pppppppbStack_a8 == (byte *******)0x2) && (*(byte *)pppppppbStack_b0 == 0x69)
                     ) && (*(byte *)((long)pppppppbStack_b0 + 1) == 100)) {
              iVar21 = 0;
              uStack_b8 = pppppppbVar32;
            }
            else {
code_r0x00010043c49c:
              iVar21 = 2;
              uStack_b8 = pppppppbVar32;
            }
            goto code_r0x00010043c4d0;
          }
          pppppppbVar29 = unaff_x26;
          if (pppppppbStack_a0 == (byte *******)0x6) {
            if (((((*(byte *)pppppppbStack_a8 != 0x70) ||
                  (*(byte *)((long)pppppppbStack_a8 + 1) != 0x61)) ||
                 (*(byte *)((long)pppppppbStack_a8 + 2) != 0x72)) ||
                ((*(byte *)((long)pppppppbStack_a8 + 3) != 0x61 ||
                 (*(byte *)((long)pppppppbStack_a8 + 4) != 0x6d)))) ||
               (*(byte *)((long)pppppppbStack_a8 + 5) != 0x73)) goto code_r0x00010043c40c;
            iVar21 = 1;
          }
          else if (((pppppppbStack_a0 == (byte *******)0x2) && (*(byte *)pppppppbStack_a8 == 0x69))
                  && (*(byte *)((long)pppppppbStack_a8 + 1) == 100)) {
            iVar21 = 0;
          }
          else {
code_r0x00010043c40c:
            iVar21 = 2;
          }
joined_r0x00010043c444:
          unaff_x26 = in_stack_fffffffffffffe88;
          if (pppppppbVar19 != (byte *******)0x0) {
            _free();
          }
        }
        uVar10 = uStack_df;
        uVar18 = uStack_e0;
        uVar7 = uStack_e7;
        bVar1 = bStack_e8;
        cVar5 = (char)pppppppbStack_150;
        bStack_e8 = (byte)unaff_x28;
        bVar6 = bStack_e8;
        uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
        uVar8 = uStack_e7;
        uStack_e0 = SUB81(pppppppbStack_168,0);
        uVar9 = uStack_e0;
        uStack_df = (undefined7)((ulong)pppppppbStack_168 >> 8);
        uVar11 = uStack_df;
        in_stack_fffffffffffffe88 = unaff_x26;
        if (iVar21 == 0) {
          if (unaff_x23 != (byte *******)0x8000000000000001) {
            cStack_88 = -0x50;
            uStack_87 = 0x108ca26;
            uStack_80 = 2;
            uStack_7f = 0;
            uStack_b8 = (byte *******)&cStack_88;
            pppppppbStack_b0 = (byte *******)&DAT_100c7b3a0;
            pppppppbStack_128 = pppppppbVar29;
            ppppppbVar27 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
            unaff_x21 = (byte *******)&pppppppbStack_150;
            goto LAB_10043c7c0;
          }
          pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
          if (cVar5 == '\x16') {
            pppppppbStack_128 = pppppppbVar29;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010043cce4;
          }
          ppppppbVar27 = *unaff_x21;
          unaff_x22[1] = unaff_x21[1];
          *unaff_x22 = ppppppbVar27;
          uVar31 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar31;
          uStack_b8 = (byte *******)CONCAT71(uStack_b8._1_7_,cVar5);
          bStack_e8 = bVar1;
          uStack_e7 = uVar7;
          uStack_e0 = uVar18;
          uStack_df = uVar10;
          FUN_10135ba2c(&cStack_88,&uStack_b8);
          unaff_x23 = (byte *******)CONCAT71(uStack_87,cStack_88);
          if (unaff_x23 == (byte *******)0x8000000000000001) {
            unaff_x23 = (byte *******)0x8000000000000001;
            unaff_x21 = (byte *******)&pppppppbStack_150;
            *unaff_x26 = (byte ******)0x800000000000006e;
            unaff_x26[1] = (byte ******)CONCAT71(uStack_7f,uStack_80);
            pppppppbStack_128 = pppppppbVar29;
            bStack_e8 = bVar6;
            uStack_e7 = uVar8;
            uStack_e0 = uVar9;
            uStack_df = uVar11;
            goto joined_r0x00010043c970;
          }
          pppppppbStack_160 = (byte *******)CONCAT71(uStack_7f,uStack_80);
          pppppppbStack_170 = pppppppbStack_78;
        }
        else if (iVar21 == 1) {
          if (unaff_x24 != (byte *******)0x8000000000000001) {
            cStack_88 = '\x06';
            uStack_87 = 0x108cb96;
            uStack_80 = 6;
            uStack_7f = 0;
            uStack_b8 = (byte *******)&cStack_88;
            pppppppbStack_b0 = (byte *******)&DAT_100c7b3a0;
            pppppppbStack_128 = pppppppbVar29;
            ppppppbVar27 = (byte ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b8);
            unaff_x21 = (byte *******)&pppppppbStack_150;
            *unaff_x26 = (byte ******)0x800000000000006e;
            unaff_x26[1] = ppppppbVar27;
            goto joined_r0x00010043cbf8;
          }
          pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
          if (cVar5 == '\x16') {
            pppppppbStack_128 = pppppppbVar29;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010043cce4;
          }
          ppppppbVar27 = *unaff_x21;
          pppppppbStack_158[1] = unaff_x21[1];
          *pppppppbStack_158 = ppppppbVar27;
          uVar31 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)pppppppbStack_158 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)pppppppbStack_158 + 0xf) = uVar31;
          cStack_88 = cVar5;
          bStack_e8 = bVar1;
          uStack_e7 = uVar7;
          uStack_e0 = uVar18;
          uStack_df = uVar10;
          func_0x0001013bfab0(&uStack_b8,&cStack_88);
          unaff_x28 = uStack_b8;
          if (uStack_b8 == (byte *******)0x8000000000000001) {
            *unaff_x26 = (byte ******)0x800000000000006e;
            unaff_x26[1] = (byte ******)pppppppbStack_b0;
            unaff_x21 = (byte *******)&pppppppbStack_150;
            pppppppbStack_128 = pppppppbVar29;
            goto LAB_10043c974;
          }
code_r0x00010043c23c:
          pppppppbStack_168 = pppppppbStack_b0;
          pppppppbVar36 = (byte *******)CONCAT62(uStack_8e,CONCAT11(cStack_8f,bStack_90));
          pppppppbVar32 = pppppppbStack_a8;
          pppppppbVar34 = pppppppbStack_a0;
          pppppppbVar35 = pppppppbStack_98;
code_r0x00010043c24c:
          uStack_d8 = SUB81(pppppppbVar32,0);
          uStack_d7 = (undefined7)((ulong)pppppppbVar32 >> 8);
          pppppppbStack_d0 = pppppppbVar34;
          pppppppbStack_c8 = pppppppbVar35;
          pppppppbStack_c0 = pppppppbVar36;
code_r0x00010043c254:
          unaff_x24 = unaff_x28;
          unaff_x28 = unaff_x24;
        }
        else {
          pppppppbStack_150 = (byte *******)CONCAT71(pppppppbStack_150._1_7_,0x16);
          if (cVar5 == '\x16') {
            pppppppbStack_128 = pppppppbVar29;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010043cce4:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10043cce8);
            (*pcVar12)();
          }
          ppppppbVar27 = *unaff_x21;
          unaff_x22[1] = unaff_x21[1];
          *unaff_x22 = ppppppbVar27;
          uVar31 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x22 + 0xf) = uVar31;
          uStack_b8 = (byte *******)CONCAT71(uStack_b8._1_7_,cVar5);
          bStack_e8 = bVar1;
          uStack_e7 = uVar7;
          uStack_e0 = uVar18;
          uStack_df = uVar10;
          FUN_100e077ec(&uStack_b8);
        }
        unaff_x26 = pppppppbVar29 + 8;
        pppppppbVar19 = unaff_x27 + 8;
        unaff_x25 = (byte *******)((long)unaff_x25 + 1);
code_r0x00010043c264:
        pppppppbVar26 = pppppppbStack_180;
        pppppppbVar32 = pppppppbVar17;
      } while (pppppppbVar19 != pppppppbVar17);
      unaff_x26 = in_stack_fffffffffffffe88;
      bStack_e8 = (byte)unaff_x28;
      uStack_e7 = (undefined7)((ulong)unaff_x28 >> 8);
      uStack_e0 = SUB81(pppppppbStack_168,0);
      uStack_df = (undefined7)((ulong)pppppppbStack_168 >> 8);
      pppppppbStack_128 = pppppppbVar32;
      if (unaff_x23 != (byte *******)0x8000000000000001) {
        if (unaff_x24 != (byte *******)0x8000000000000001) {
          unaff_x26[7] = (byte ******)pppppppbStack_d0;
          unaff_x26[6] = (byte ******)CONCAT71(uStack_d7,uStack_d8);
          unaff_x26[9] = (byte ******)pppppppbStack_c0;
          unaff_x26[8] = (byte ******)pppppppbStack_c8;
          *unaff_x26 = (byte ******)0x8000000000000021;
          unaff_x26[1] = (byte ******)unaff_x23;
          unaff_x26[2] = (byte ******)pppppppbStack_160;
          unaff_x26[3] = (byte ******)pppppppbStack_170;
          unaff_x26[4] = (byte ******)unaff_x24;
          unaff_x26[5] = (byte ******)pppppppbStack_168;
          _memcpy(apppppppbStack_100,unaff_x26,0x1c0);
          FUN_100d34830(&pppppppbStack_130);
          if (pppppppbVar17 == pppppppbVar32) {
            return;
          }
          uStack_b8 = pppppppbVar26;
          ppppppbVar27 = (byte ******)
                         thunk_FUN_1087e422c((byte *)((long)pppppppbVar26 +
                                                     ((ulong)((long)pppppppbVar17 -
                                                             (long)pppppppbVar32) >> 6)),&uStack_b8,
                                             &UNK_10b23a190);
          *unaff_x26 = (byte ******)0x800000000000006e;
          unaff_x26[1] = ppppppbVar27;
          FUN_100e44f40(apppppppbStack_100);
          return;
        }
        cStack_88 = '\x06';
        uStack_87 = 0x108cb96;
        uStack_80 = 6;
        uStack_7f = 0;
        uStack_b8 = (byte *******)&cStack_88;
        pppppppbStack_b0 = (byte *******)&DAT_100c7b3a0;
        ppppppbVar27 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
        *unaff_x26 = (byte ******)0x800000000000006e;
        unaff_x26[1] = ppppppbVar27;
        if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
          _free(pppppppbStack_160);
        }
        unaff_x21 = (byte *******)&pppppppbStack_150;
        goto LAB_10043c990;
      }
      unaff_x21 = (byte *******)&pppppppbStack_150;
    }
    cStack_88 = -0x50;
    uStack_87 = 0x108ca26;
    uStack_80 = 2;
    uStack_7f = 0;
    uStack_b8 = (byte *******)&cStack_88;
    pppppppbStack_b0 = (byte *******)&DAT_100c7b3a0;
    unaff_x23 = (byte *******)0x8000000000000001;
    ppppppbVar27 = (byte ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_b8);
LAB_10043c7c0:
    *unaff_x26 = (byte ******)0x800000000000006e;
    unaff_x26[1] = ppppppbVar27;
joined_r0x00010043c970:
    if (unaff_x24 != (byte *******)0x8000000000000001) {
joined_r0x00010043cbf8:
      if (unaff_x24 != (byte *******)0x8000000000000000) {
        lVar28 = CONCAT71(uStack_d7,uStack_d8);
        if (lVar28 != 0) {
          pppppppbVar23 = pppppppbStack_168 + 1;
          do {
            if (pppppppbVar23[-1] != (byte ******)0x0) {
              _free(*pppppppbVar23);
            }
            pppppppbVar23 = pppppppbVar23 + 3;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
        }
        if (unaff_x24 != (byte *******)0x0) {
          _free(pppppppbStack_168);
        }
      }
      if (((ulong)pppppppbStack_d0 & 0x7fffffffffffffff) != 0) {
        _free(pppppppbStack_c8);
      }
    }
LAB_10043c974:
    if ((-0x7fffffffffffffff < (long)unaff_x23) && (unaff_x23 != (byte *******)0x0)) {
      _free(pppppppbStack_160);
    }
LAB_10043c990:
    FUN_100d34830(unaff_x21 + 4);
    if ((char)pppppppbStack_150 != '\x16') {
      FUN_100e077ec(&pppppppbStack_150);
    }
    return;
  case 0xef:
    goto code_r0x00010043bccc;
  case 0xf0:
    goto code_r0x00010043bd10;
  case 0xf4:
    goto code_r0x00010043c0f8;
  case 0xf6:
    goto code_r0x00010043c0bc;
  case 0xff:
    goto code_r0x00010043c148;
  }
  pppppppbStack_f0 = (byte *******)CONCAT71(pppppppbStack_f0._1_7_,uVar18);
code_r0x00010043bf08:
  param_6 = &UNK_10b219950;
code_r0x00010043bf10:
  param_4 = (byte *******)&pppppppbStack_f0;
  param_5 = (byte *******)&pppppppbStack_150;
code_r0x00010043bf18:
  thunk_FUN_1087e3db0(param_3,param_4,param_5,param_6);
code_r0x00010043bf38:
  return;
}

