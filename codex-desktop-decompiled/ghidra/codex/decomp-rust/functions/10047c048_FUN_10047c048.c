
/* WARNING: Type propagation algorithm not settling */

void FUN_10047c048(undefined1 param_1 [16],ulong *******param_2,ulong *******param_3,
                  undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  ulong ******ppppppuVar3;
  ulong ******ppppppuVar4;
  ulong ******ppppppuVar5;
  ulong ******ppppppuVar6;
  ulong ******ppppppuVar7;
  ulong ******ppppppuVar8;
  ulong ******ppppppuVar9;
  ulong ******ppppppuVar10;
  undefined1 in_ZR;
  bool bVar11;
  ulong *******pppppppuVar12;
  ulong ******ppppppuVar13;
  uint uVar14;
  ulong *******extraout_x1;
  byte bVar15;
  ulong *******pppppppuVar16;
  ulong *******pppppppuVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  ulong ******ppppppuVar23;
  ulong *******unaff_x19;
  ulong *******pppppppuVar24;
  undefined8 *puVar25;
  ulong *******unaff_x20;
  undefined8 *puVar26;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar27;
  ulong *******unaff_x24;
  undefined *puVar28;
  ulong *******pppppppuVar29;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong ******unaff_x27;
  ulong ******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar30;
  undefined *unaff_x30;
  ulong *****pppppuVar31;
  ulong *******pppppppuVar32;
  ulong ******ppppppuVar33;
  ulong ******ppppppuVar34;
  ulong ******ppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  undefined8 uStack_2c8;
  ulong *******pppppppuStack_2c0;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong *******pppppppuStack_2a0;
  ulong *******pppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  ulong ******ppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong ******ppppppuStack_258;
  ulong ******ppppppuStack_250;
  ulong ******ppppppuStack_248;
  undefined8 uStack_108;
  ulong *******pppppppuStack_100;
  int *piStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong ******ppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong ******ppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  ulong ******ppppppuStack_78;
  ulong ******ppppppuStack_70;
  ulong ******ppppppuStack_68;
  
  ppppppuVar34 = param_1._8_8_;
  pppppppuVar32 = param_1._0_8_;
  puVar30 = &stack0xfffffffffffffff0;
  ppppppuVar10 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar9 = (ulong ******)&ppppppuStack_2e0;
  pppppppuVar24 = (ulong *******)&uStack_90;
  bVar15 = *(byte *)param_3;
  pppppppuVar16 = (ulong *******)(ulong)bVar15;
  pppppppuVar21 = (ulong *******)&UNK_108c998ce;
  ppppppuVar23 = (ulong ******)
                 (&UNK_10047c08c + (ulong)*(ushort *)(&UNK_108c998ce + (long)pppppppuVar16 * 2) * 4)
  ;
  ppppppuVar13 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar33 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar7 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar8 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar5 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar6 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar3 = (ulong ******)&ppppppuStack_2e0;
  ppppppuVar4 = (ulong ******)&ppppppuStack_2e0;
  pppppppuVar12 = param_2;
  pppppppuVar17 = pppppppuVar16;
  pppppppuVar22 = pppppppuVar21;
  pppppppuVar27 = unaff_x23;
  pppppppuVar29 = unaff_x24;
  switch(bVar15) {
  case 0:
  case 0x65:
    bVar15 = *(byte *)((long)param_3 + 1);
  case 0x88:
    ppppppuStack_270 = (ulong ******)((ulong)CONCAT61(ppppppuStack_270._2_6_,bVar15) << 8);
code_r0x00010047c854:
    goto code_r0x00010047c8a8;
  case 1:
  case 0x5e:
    pppppppuStack_268 = (ulong *******)(ulong)*(byte *)((long)param_3 + 1);
    goto code_r0x00010047c860;
  case 2:
  case 0x58:
    pppppppuVar16 = (ulong *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x8f:
  case 0xb5:
    pppppppuStack_268 = pppppppuVar16;
    goto code_r0x00010047c860;
  case 3:
    pppppppuVar16 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xb6:
  case 0xf6:
    pppppppuStack_268 = pppppppuVar16;
code_r0x00010047c860:
    bVar15 = 1;
    break;
  case 4:
  case 0xbf:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x00010047c860;
  case 5:
    pppppppuVar16 = (ulong *******)(long)*(char *)((long)param_3 + 1);
  case 0xfb:
code_r0x00010047c89c:
    pppppppuStack_268 = pppppppuVar16;
code_r0x00010047c8a0:
    bVar15 = 2;
    break;
  case 6:
  case 0xd4:
    pppppppuVar16 = (ulong *******)(long)*(short *)((long)param_3 + 2);
    goto code_r0x00010047c89c;
  case 7:
  case 0x5d:
    pppppppuVar16 = (ulong *******)(long)(int)*(uint *)((long)param_3 + 4);
  case 0xba:
  case 0xfe:
    goto code_r0x00010047c89c;
  case 8:
  case 0xf9:
    pppppppuVar16 = (ulong *******)param_3[1];
    goto code_r0x00010047c89c;
  case 9:
  case 0xb1:
  case 0xfd:
    pppppppuVar32 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x5f:
    pppppppuStack_268 = (ulong *******)(double)SUB84(pppppppuVar32,0);
  case 0x93:
  case 0xf5:
code_r0x00010047c890:
    bVar15 = 3;
    break;
  case 10:
  case 0x86:
    pppppppuStack_268 = (ulong *******)param_3[1];
    goto code_r0x00010047c890;
  case 0xb:
  case 0x5c:
    param_3 = (ulong *******)(ulong)*(uint *)((long)param_3 + 4);
  case 100:
    ppppppuVar5 = (ulong ******)&stack0xffffffffffffffa0;
    pppppppuVar24 = unaff_x19;
    puVar30 = unaff_x29;
code_r0x00010047c7d0:
    ppppppuVar6 = ppppppuVar5;
code_r0x00010047c7dc:
    *(ulong ********)((long)ppppppuVar6 + 0x40) = unaff_x20;
    *(ulong ********)((long)ppppppuVar6 + 0x48) = pppppppuVar24;
    *(undefined1 **)((long)ppppppuVar6 + 0x50) = puVar30;
    *(undefined **)((long)ppppppuVar6 + 0x58) = unaff_x30;
    *(undefined4 *)((long)ppppppuVar6 + 0x1c) = 0;
    uVar14 = (uint)param_3;
    if (uVar14 < 0x80) {
      *(byte *)((long)ppppppuVar6 + 0x1c) = (byte)param_3;
      uVar18 = 1;
    }
    else {
      bVar15 = (byte)param_3 & 0x3f | 0x80;
      if (uVar14 < 0x800) {
        *(byte *)((long)ppppppuVar6 + 0x1c) = (byte)(uVar14 >> 6) | 0xc0;
        *(byte *)((long)ppppppuVar6 + 0x1d) = bVar15;
        uVar18 = 2;
      }
      else {
        bVar1 = (byte)(uVar14 >> 6) & 0x3f | 0x80;
        if (uVar14 < 0x10000) {
          *(byte *)((long)ppppppuVar6 + 0x1c) = (byte)(uVar14 >> 0xc) | 0xe0;
          *(byte *)((long)ppppppuVar6 + 0x1d) = bVar1;
          *(byte *)((long)ppppppuVar6 + 0x1e) = bVar15;
          uVar18 = 3;
        }
        else {
          *(byte *)((long)ppppppuVar6 + 0x1c) = (byte)(uVar14 >> 0x12) | 0xf0;
          *(byte *)((long)ppppppuVar6 + 0x1d) = (byte)(uVar14 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)ppppppuVar6 + 0x1e) = bVar1;
          *(byte *)((long)ppppppuVar6 + 0x1f) = bVar15;
          uVar18 = 4;
        }
      }
    }
    *(undefined1 **)((long)ppppppuVar6 + 0x28) = (undefined1 *)((long)ppppppuVar6 + 0x1c);
    *(undefined8 *)((long)ppppppuVar6 + 0x30) = uVar18;
    *(undefined1 *)((long)ppppppuVar6 + 0x20) = 5;
    ppppppuVar23 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)ppppppuVar6 + 0x20),
                                       (undefined1 *)((long)ppppppuVar6 + 0x3f),&UNK_10b21b430);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar23;
    return;
  case 0xc:
  case 0x61:
    param_3 = param_3 + 1;
  case 0x94:
  case 0xb3:
    ppppppuVar13 = (ulong ******)&stack0xffffffffffffffa0;
code_r0x00010047c7f8:
    puVar30 = *(undefined1 **)((long)ppppppuVar13 + 0x50);
    unaff_x30 = *(undefined **)((long)ppppppuVar13 + 0x58);
    ppppppuVar33 = ppppppuVar13;
code_r0x00010047c7fc:
    unaff_x20 = *(ulong ********)((long)ppppppuVar33 + 0x40);
    pppppppuVar24 = *(ulong ********)((long)ppppppuVar33 + 0x48);
    ppppppuVar7 = ppppppuVar33;
code_r0x00010047c800:
    unaff_x22 = *(ulong ********)((long)ppppppuVar7 + 0x30);
    unaff_x21 = *(ulong ********)((long)ppppppuVar7 + 0x38);
    ppppppuVar8 = ppppppuVar7;
code_r0x00010047c804:
    ppppppuVar9 = (ulong ******)((long)ppppppuVar8 + 0x60);
code_r0x00010047c810:
    *(ulong ********)((long)ppppppuVar9 + -0x30) = unaff_x22;
    *(ulong ********)((long)ppppppuVar9 + -0x28) = unaff_x21;
    *(ulong ********)((long)ppppppuVar9 + -0x20) = unaff_x20;
    *(ulong ********)((long)ppppppuVar9 + -0x18) = pppppppuVar24;
    *(undefined1 **)((long)ppppppuVar9 + -0x10) = puVar30;
    *(undefined **)((long)ppppppuVar9 + -8) = unaff_x30;
    ppppppuVar23 = param_3[1];
    ppppppuVar13 = param_3[2];
    *(ulong *******)((long)ppppppuVar9 + -0x48) = ppppppuVar23;
    *(ulong *******)((long)ppppppuVar9 + -0x40) = ppppppuVar13;
    *(undefined1 *)((long)ppppppuVar9 + -0x50) = 5;
    ppppppuVar13 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)ppppppuVar9 + -0x50),
                                       (undefined1 *)((long)ppppppuVar9 + -0x31),&UNK_10b21b430);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar13;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar23);
    }
    return;
  case 0xd:
  case 0x60:
    pppppppuStack_268 = (ulong *******)param_3[1];
    pppppppuStack_260 = (ulong *******)param_3[2];
  case 0xd6:
  case 0xf4:
    bVar15 = 5;
code_r0x00010047c87c:
    break;
  case 0xe:
  case 99:
    param_3 = param_3 + 1;
    ppppppuVar3 = (ulong ******)&stack0xffffffffffffffa0;
  case 0xb4:
    puVar30 = *(undefined1 **)((long)ppppppuVar3 + 0x50);
    unaff_x30 = *(undefined **)((long)ppppppuVar3 + 0x58);
    unaff_x20 = *(ulong ********)((long)ppppppuVar3 + 0x40);
    pppppppuVar24 = *(ulong ********)((long)ppppppuVar3 + 0x48);
    ppppppuVar4 = ppppppuVar3;
code_r0x00010047c7a8:
    *(undefined8 *)((long)ppppppuVar4 + 0x30) = *(undefined8 *)((long)ppppppuVar4 + 0x30);
    *(undefined8 *)((long)ppppppuVar4 + 0x38) = *(undefined8 *)((long)ppppppuVar4 + 0x38);
    *(ulong ********)((long)ppppppuVar4 + 0x40) = unaff_x20;
    *(ulong ********)((long)ppppppuVar4 + 0x48) = pppppppuVar24;
    *(undefined1 **)((long)ppppppuVar4 + 0x50) = puVar30;
    *(undefined **)((long)ppppppuVar4 + 0x58) = unaff_x30;
    ppppppuVar23 = param_3[1];
    ppppppuVar13 = param_3[2];
    *(ulong *******)((long)ppppppuVar4 + 0x18) = ppppppuVar23;
    *(ulong *******)((long)ppppppuVar4 + 0x20) = ppppppuVar13;
    *(undefined1 *)((long)ppppppuVar4 + 0x10) = 6;
    ppppppuVar13 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)ppppppuVar4 + 0x10),
                                       (undefined1 *)((long)ppppppuVar4 + 0x2f),&UNK_10b21b430);
    *param_2 = (ulong ******)0x800000000000006e;
    param_2[1] = ppppppuVar13;
    if (*param_3 != (ulong ******)0x0) {
      _free(ppppppuVar23);
    }
    return;
  case 0xf:
    pppppppuVar16 = (ulong *******)param_3[1];
    pppppppuVar21 = (ulong *******)param_3[2];
  case 0xbd:
    pppppppuStack_268 = pppppppuVar16;
    pppppppuStack_260 = pppppppuVar21;
code_r0x00010047c830:
    bVar15 = 6;
    break;
  case 0x10:
    bVar15 = 8;
    break;
  default:
    ppppppuVar23 = param_3[1];
    pppppppuStack_268 = (ulong *******)ppppppuVar23[1];
    ppppppuStack_270 = (ulong ******)*ppppppuVar23;
    ppppppuStack_258 = (ulong ******)ppppppuVar23[3];
    pppppppuStack_260 = (ulong *******)ppppppuVar23[2];
    func_0x000107c04938(param_2,&ppppppuStack_270);
    goto code_r0x00010047c4b0;
  case 0x12:
  case 0x8a:
    bVar15 = 7;
    break;
  case 0x13:
    ppppppuVar23 = param_3[1];
    pppppppuStack_268 = (ulong *******)ppppppuVar23[1];
    ppppppuStack_270 = (ulong ******)*ppppppuVar23;
    ppppppuVar34 = (ulong ******)ppppppuVar23[3];
    pppppppuVar32 = (ulong *******)ppppppuVar23[2];
  case 0xc3:
    pppppppuStack_260 = pppppppuVar32;
    ppppppuStack_258 = ppppppuVar34;
    func_0x000107c052dc(param_2,&ppppppuStack_270);
code_r0x00010047c4b0:
code_r0x000107c06034:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)();
    return;
  case 0x14:
    unaff_x23 = (ulong *******)param_3[1];
    unaff_x20 = (ulong *******)param_3[2];
    unaff_x26 = (ulong *******)param_3[3];
    unaff_x24 = unaff_x20 + (long)unaff_x26 * 4;
  case 0xd9:
    pppppppuStack_2c0 = unaff_x20;
    pppppppuStack_2b8 = unaff_x20;
code_r0x00010047c4d8:
    pppppppuStack_2b0 = unaff_x23;
    pppppppuStack_2a8 = unaff_x24;
code_r0x00010047c4dc:
    pppppppuStack_2a0 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    if (unaff_x26 == (ulong *******)0x0) {
code_r0x00010047c4fc:
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22fb78,&UNK_10b20a590);
code_r0x00010047c518:
      pppppppuVar16 = (ulong *******)0x6e;
code_r0x00010047c51c:
      pppppppuVar16 = (ulong *******)((ulong)pppppppuVar16 | 0x8000000000000000);
code_r0x00010047c520:
      *param_2 = (ulong ******)pppppppuVar16;
      param_2[1] = (ulong ******)unaff_x22;
code_r0x00010047c524:
      pppppppuVar16 = (ulong *******)((ulong)((long)unaff_x24 - (long)unaff_x21) >> 5);
code_r0x00010047c52c:
      puVar28 = (undefined *)((long)pppppppuVar16 + 1);
      while (puVar28 = puVar28 + -1, puVar28 != (undefined *)0x0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 4;
      }
      if (unaff_x23 != (ulong *******)0x0) {
        _free(unaff_x20);
      }
    }
    else {
code_r0x00010047c4e8:
      unaff_x21 = unaff_x20 + 4;
      pppppppuVar16 = (ulong *******)(ulong)*(byte *)unaff_x20;
      pppppppuStack_2b8 = unaff_x21;
code_r0x00010047c4f4:
      if ((int)pppppppuVar16 == 0x16) goto code_r0x00010047c4fc;
      uVar18 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_90._1_1_ = (char)uVar18;
      uStack_90._2_6_ = (undefined6)((ulong)uVar18 >> 8);
      uStack_88 = (undefined1)((ulong)uVar18 >> 0x38);
      ppppppuStack_78 = unaff_x20[3];
      uStack_80 = SUB81(unaff_x20[2],0);
      uStack_7f = (undefined7)((ulong)unaff_x20[2] >> 8);
      pppppppuStack_2a0 = (ulong *******)0x1;
      uStack_90._0_1_ = (byte)pppppppuVar16;
      func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
      unaff_x22 = pppppppuStack_a0;
      if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) goto code_r0x00010047c518;
      bVar11 = unaff_x26 == (ulong *******)0x1;
      unaff_x25 = pppppppuStack_a8;
      unaff_x26 = pppppppuStack_98;
      if (bVar11) {
code_r0x00010047c5b8:
        pppppppuVar12 = (ulong *******)thunk_FUN_1087e422c(1,&UNK_10b22fb78,&UNK_10b20a590);
code_r0x00010047c5d0:
        pppppppuVar16 = (ulong *******)0x6e;
code_r0x00010047c5d4:
        *param_2 = (ulong ******)((ulong)pppppppuVar16 | 0x8000000000000000);
        param_2[1] = (ulong ******)pppppppuVar12;
code_r0x00010047c5dc:
        if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x00010047c5e4:
          _free(unaff_x22);
        }
        goto code_r0x00010047c524;
      }
code_r0x00010047c5a4:
      unaff_x21 = unaff_x20 + 8;
      pppppppuStack_2b8 = unaff_x21;
code_r0x00010047c5ac:
      bVar15 = *(byte *)(unaff_x20 + 4);
      if (bVar15 == 0x16) goto code_r0x00010047c5b8;
code_r0x00010047c8f0:
      ppppppuVar34 = *(ulong *******)((long)unaff_x20 + 0x29);
      pppppppuVar32 = *(ulong ********)((long)unaff_x20 + 0x21);
code_r0x00010047c8f4:
      uStack_87 = SUB87(ppppppuVar34,0);
      uStack_90._1_1_ = (char)pppppppuVar32;
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar32 >> 8);
      uStack_88 = (undefined1)((ulong)pppppppuVar32 >> 0x38);
      ppppppuVar34 = unaff_x20[7];
      pppppppuVar32 = (ulong *******)unaff_x20[6];
code_r0x00010047c8fc:
      uStack_80 = SUB81(pppppppuVar32,0);
      uStack_7f = (undefined7)((ulong)pppppppuVar32 >> 8);
      ppppppuStack_78 = ppppppuVar34;
code_r0x00010047c900:
      uStack_90._0_1_ = bVar15;
      pppppppuStack_2a0 = (ulong *******)0x2;
code_r0x00010047c90c:
      pppppppuVar12 = (ulong *******)func_0x0001012a9e04(&uStack_90);
code_r0x00010047c914:
      if (pppppppuVar12 != (ulong *******)0x0) goto code_r0x00010047c5d0;
      pppppppuVar24 = (ulong *******)0x800000000000006e;
      pppppppuVar16 = (ulong *******)0x8000000000000041;
code_r0x00010047c924:
      *param_2 = (ulong ******)pppppppuVar16;
      param_2[1] = (ulong ******)unaff_x25;
      param_2[2] = (ulong ******)unaff_x22;
      param_2[3] = (ulong ******)unaff_x26;
code_r0x00010047c92c:
      pppppppuVar12 = &ppppppuStack_270;
code_r0x00010047c930:
      param_3 = param_2;
code_r0x00010047c934:
      param_4 = (undefined *)0x1c0;
code_r0x00010047c938:
      _memcpy(pppppppuVar12,param_3,param_4);
      pppppppuVar12 = (ulong *******)FUN_100fbc738(&pppppppuStack_2c0);
code_r0x00010047c944:
      if (pppppppuVar12 != (ulong *******)0x0) {
code_r0x00010047c948:
        *param_2 = (ulong ******)pppppppuVar24;
        param_2[1] = (ulong ******)pppppppuVar12;
code_r0x00010047c94c:
        param_2 = &ppppppuStack_270;
code_r0x00010047c950:
        FUN_100e44f40(param_2);
code_r0x00010047c954:
      }
    }
    goto LAB_10047c8c8;
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
    pppppppuStack_290 = (ulong *******)param_3[1];
    pppppppuStack_2a0 = (ulong *******)param_3[2];
    ppppppuVar23 = param_3[3];
    pppppppuVar29 = pppppppuStack_2a0 + (long)ppppppuVar23 * 8;
    pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
    pppppppuStack_280 = (ulong *******)0x0;
    pppppppuStack_288 = pppppppuVar29;
    if (ppppppuVar23 != (ulong ******)0x0) {
      unaff_x23 = (ulong *******)0x0;
      pppppppuVar12 = (ulong *******)0x0;
      unaff_x28 = (ulong ******)((ulong)&uStack_90 | 1);
      unaff_x21 = (ulong *******)((ulong)&pppppppuStack_2c0 | 1);
      pppppppuStack_2d8 = (ulong *******)(((long)ppppppuVar23 * 0x40 - 0x40U >> 6) + 1);
      unaff_x22 = (ulong *******)0x8000000000000001;
      unaff_x25 = pppppppuStack_2a0;
      pppppppuStack_2d0 = param_2;
      do {
        unaff_x24 = unaff_x25 + 8;
        pppppppuVar21 = (ulong *******)(ulong)*(byte *)unaff_x25;
        in_ZR = *(byte *)unaff_x25 == 0x16;
        unaff_x26 = pppppppuVar29;
code_r0x00010047c130:
        pppppppuVar27 = unaff_x23;
        pppppppuVar29 = unaff_x24;
        if ((bool)in_ZR) break;
        uStack_90._0_1_ = (byte)pppppppuVar21;
code_r0x00010047c138:
        ppppppuVar23 = unaff_x25[2];
        *(ulong *******)((long)unaff_x28 + 0x17) = unaff_x25[3];
        *(ulong *******)((long)unaff_x28 + 0xf) = ppppppuVar23;
        pppppuVar31 = *(ulong ******)((long)unaff_x25 + 1);
        unaff_x28[1] = *(ulong ******)((long)unaff_x25 + 9);
        *unaff_x28 = pppppuVar31;
        pppppppuStack_2b8 = (ulong *******)unaff_x25[5];
        pppppppuStack_2c0 = (ulong *******)unaff_x25[4];
        pppppppuStack_2a8 = (ulong *******)unaff_x25[7];
        pppppppuStack_2b0 = (ulong *******)unaff_x25[6];
        pppppppuVar16 = (ulong *******)CONCAT71(uStack_87,uStack_88);
        param_2 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
        uVar14 = (uint)pppppppuVar21;
        if (uVar14 < 0xd) {
          if (uVar14 == 1) {
            iVar20 = 1;
            if (uStack_90._1_1_ != '\x01') {
              iVar20 = 2;
            }
            iVar19 = 0;
            if (uStack_90._1_1_ != '\0') {
              iVar19 = iVar20;
            }
          }
          else {
            if (uVar14 != 4) {
              in_ZR = uVar14 == 0xc;
              ppppppuVar23 = ppppppuStack_78;
code_r0x00010047c174:
              if ((bool)in_ZR) {
                in_ZR = ppppppuVar23 == (ulong ******)0x6;
code_r0x00010047c17c:
                if ((bool)in_ZR) {
                  iVar19 = 1;
                  if (*(uint *)param_2 != 0x61726170 || *(short *)((long)param_2 + 4) != 0x736d) {
                    iVar19 = 2;
                  }
                }
                else if (ppppppuVar23 == (ulong ******)0x2) {
                  iVar19 = 2;
                  if (*(short *)param_2 == 0x6469) {
                    iVar19 = 0;
                  }
                }
                else {
                  iVar19 = 2;
                }
                goto joined_r0x00010047c2c8;
              }
code_r0x00010047ca3c:
              pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
              goto code_r0x00010047ca44;
            }
            iVar20 = 1;
            if (pppppppuVar16 != (ulong *******)0x1) {
              iVar20 = 2;
            }
            iVar19 = 0;
            if (pppppppuVar16 != (ulong *******)0x0) {
              iVar19 = iVar20;
            }
          }
code_r0x00010047c388:
          FUN_100e077ec(&uStack_90);
        }
        else {
          if (uVar14 == 0xd) {
            if (param_2 == (ulong *******)0x6) {
              pppppppuVar21 = (ulong *******)(ulong)(*(uint *)pppppppuVar16 ^ 0x61726170);
              pppppppuVar16 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar16 + 4);
              ppppppuVar23 = (ulong ******)0x736d;
code_r0x00010047c374:
              iVar19 = 1;
              if ((int)pppppppuVar21 != 0 || (int)pppppppuVar16 != (int)ppppppuVar23) {
                iVar19 = 2;
              }
            }
            else {
              if (param_2 != (ulong *******)0x2) goto code_r0x00010047c354;
              iVar19 = 2;
              if (*(short *)pppppppuVar16 == 0x6469) {
                iVar19 = 0;
              }
            }
            goto code_r0x00010047c388;
          }
          if (uVar14 != 0xe) {
            if (uVar14 != 0xf) goto code_r0x00010047ca3c;
            if (param_2 == (ulong *******)0x6) {
              if ((((*(char *)pppppppuVar16 != 'p') || (*(char *)((long)pppppppuVar16 + 1) != 'a'))
                  || (*(char *)((long)pppppppuVar16 + 2) != 'r')) ||
                 (((*(char *)((long)pppppppuVar16 + 3) != 'a' ||
                   (*(char *)((long)pppppppuVar16 + 4) != 'm')) ||
                  (*(char *)((long)pppppppuVar16 + 5) != 's')))) goto code_r0x00010047c354;
              iVar19 = 1;
            }
            else if (((param_2 == (ulong *******)0x2) && (*(char *)pppppppuVar16 == 'i')) &&
                    (*(char *)((long)pppppppuVar16 + 1) == 'd')) {
              iVar19 = 0;
            }
            else {
code_r0x00010047c354:
              iVar19 = 2;
            }
            goto code_r0x00010047c388;
          }
          if (ppppppuStack_78 == (ulong ******)0x6) {
            if (((((*(char *)param_2 != 'p') || (*(char *)((long)param_2 + 1) != 'a')) ||
                 (*(char *)((long)param_2 + 2) != 'r')) ||
                ((*(char *)((long)param_2 + 3) != 'a' || (*(char *)((long)param_2 + 4) != 'm')))) ||
               (*(char *)((long)param_2 + 5) != 's')) goto code_r0x00010047c2c4;
            iVar19 = 1;
          }
          else if (((ppppppuStack_78 == (ulong ******)0x2) && (*(char *)param_2 == 'i')) &&
                  (*(char *)((long)param_2 + 1) == 'd')) {
            iVar19 = 0;
          }
          else {
code_r0x00010047c2c4:
            iVar19 = 2;
          }
joined_r0x00010047c2c8:
          if (pppppppuVar16 != (ulong *******)0x0) {
            _free();
          }
        }
        if (iVar19 == 0) {
code_r0x00010047c3f0:
          if (unaff_x22 != (ulong *******)0x8000000000000001) goto code_r0x00010047c980;
          bVar15 = (byte)pppppppuStack_2c0;
          pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
          if (bVar15 == 0x16) {
            pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
            goto code_r0x00010047ca14;
          }
          ppppppuVar23 = *unaff_x21;
          unaff_x28[1] = (ulong *****)unaff_x21[1];
          *unaff_x28 = (ulong *****)ppppppuVar23;
          uVar18 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x28 + 0xf) = uVar18;
          uStack_90._0_1_ = bVar15;
          func_0x00010135ba2c(&pppppppuStack_a8,&uStack_90);
          unaff_x20 = pppppppuStack_a0;
          if (pppppppuStack_a8 == (ulong *******)0x8000000000000001) {
            pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
            goto code_r0x00010047c778;
          }
          uStack_2c8 = pppppppuStack_98;
          unaff_x22 = pppppppuStack_a8;
          pppppppuVar29 = unaff_x26;
        }
        else {
          in_ZR = iVar19 == 1;
code_r0x00010047c3ac:
          bVar15 = (byte)pppppppuStack_2c0;
          if ((bool)in_ZR) {
            if (((ulong)pppppppuVar12 & 1) != 0) {
              pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
              goto code_r0x00010047c9d4;
            }
            pppppppuVar16 = (ulong *******)((ulong)pppppppuStack_2c0 & 0xff);
code_r0x00010047c3b8:
            pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
            if ((int)pppppppuVar16 == 0x16) goto code_r0x00010047c958;
            ppppppuVar23 = *unaff_x21;
            unaff_x28[1] = (ulong *****)unaff_x21[1];
            *unaff_x28 = (ulong *****)ppppppuVar23;
            uVar18 = *(undefined8 *)((long)unaff_x21 + 0xf);
            *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
            *(undefined8 *)((long)unaff_x28 + 0xf) = uVar18;
            uStack_90._0_1_ = (byte)pppppppuVar16;
            param_2 = (ulong *******)func_0x0001012a9e04(&uStack_90);
            if (param_2 != (ulong *******)0x0) goto code_r0x00010047c734;
            pppppppuVar12 = (ulong *******)0x1;
            pppppppuVar29 = unaff_x26;
          }
          else {
            pppppppuStack_2c0 = (ulong *******)CONCAT71(pppppppuStack_2c0._1_7_,0x16);
            if (bVar15 == 0x16) goto code_r0x00010047c958;
            ppppppuVar23 = *unaff_x21;
            unaff_x28[1] = (ulong *****)unaff_x21[1];
            *unaff_x28 = (ulong *****)ppppppuVar23;
            uVar18 = *(undefined8 *)((long)unaff_x21 + 0xf);
            *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
            *(undefined8 *)((long)unaff_x28 + 0xf) = uVar18;
            uStack_90._0_1_ = bVar15;
            FUN_100e077ec(&uStack_90);
            pppppppuVar29 = unaff_x26;
          }
        }
        pppppppuVar21 = unaff_x25 + 8;
        unaff_x23 = (ulong *******)((long)unaff_x23 + 1);
        pppppppuVar27 = pppppppuStack_2d8;
        unaff_x26 = pppppppuVar29;
        unaff_x25 = unaff_x24;
      } while (pppppppuVar21 != pppppppuVar29);
      goto code_r0x00010047c5fc;
    }
    goto code_r0x00010047c618;
  case 0x16:
  case 0x2c:
code_r0x00010047c958:
    pppppppuVar16 = (ulong *******)((long)unaff_x23 + 1);
  case 0xd3:
    param_2 = (ulong *******)&UNK_108ca1000;
    pppppppuStack_280 = pppppppuVar16;
code_r0x00010047c968:
    param_2 = param_2 + 0x153;
code_r0x00010047c96c:
    param_4 = &UNK_10b24f848;
code_r0x00010047c974:
    param_3 = (ulong *******)0x2c;
code_r0x00010047c978:
    FUN_107c05cac(param_2,param_3,param_4);
code_r0x00010047ca38:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10047ca3c);
    (*pcVar2)();
  case 0x17:
  case 0x2d:
    goto code_r0x00010047c968;
  case 0x18:
  case 0x2e:
    goto code_r0x00010047c930;
  case 0x19:
  case 0x2f:
    goto code_r0x00010047c948;
  case 0x1a:
  case 0x30:
    goto code_r0x00010047c8f4;
  case 0x1b:
  case 0x31:
    goto code_r0x00010047c978;
  case 0x1c:
  case 0x32:
    goto code_r0x00010047c990;
  case 0x1d:
  case 0x33:
  case 0x96:
    goto code_r0x00010047c950;
  case 0x1e:
  case 0x34:
    goto code_r0x00010047c9a8;
  case 0x1f:
  case 0x35:
  case 0xc9:
    goto code_r0x00010047c924;
  case 0x20:
  case 0x36:
    goto code_r0x00010047c998;
  case 0x21:
  case 0x37:
    goto code_r0x00010047c8cc;
  case 0x22:
  case 0x38:
    goto code_r0x00010047c8fc;
  case 0x23:
  case 0x39:
code_r0x00010047c980:
    pppppppuVar17 = (ulong *******)((long)unaff_x23 + 1);
  case 0xce:
    pppppppuVar16 = (ulong *******)&UNK_108ca2000;
    pppppppuStack_280 = pppppppuVar17;
code_r0x00010047c990:
    pppppppuVar17 = pppppppuVar16 + 0xd6;
    pppppppuVar22 = (ulong *******)0x2;
code_r0x00010047c998:
    pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
    pppppppuVar21 = (ulong *******)&DAT_100c7b3a0;
    pppppppuStack_a8 = pppppppuVar17;
    pppppppuStack_a0 = pppppppuVar22;
code_r0x00010047c9a8:
    uStack_90._0_1_ = (byte)pppppppuVar16;
    uStack_90._1_1_ = (char)((ulong)pppppppuVar16 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar16 >> 0x10);
    uStack_88 = SUB81(pppppppuVar21,0);
    uStack_87 = (undefined7)((ulong)pppppppuVar21 >> 8);
    param_2 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar21 = pppppppuStack_2d0;
    goto LAB_10047c748;
  case 0x24:
  case 0x3a:
  case 0xc2:
    break;
  case 0x25:
  case 0x3b:
    goto code_r0x00010047c938;
  case 0x26:
  case 0x3c:
    goto code_r0x00010047c89c;
  case 0x28:
  case 0x3e:
    goto code_r0x00010047c9f8;
  case 0x29:
    goto code_r0x00010047c4e8;
  case 0x2a:
    goto code_r0x00010047c52c;
  case 0x3f:
  case 0xc4:
    goto code_r0x00010047c4d8;
  case 0x40:
    goto code_r0x00010047c51c;
  case 0x42:
    goto code_r0x00010047cb84;
  case 0x43:
    goto code_r0x00010047cb94;
  case 0x44:
    goto code_r0x00010047cb5c;
  case 0x45:
    goto code_r0x00010047cb74;
  case 0x46:
  case 0xe4:
    while( true ) {
      unaff_x24 = (ulong *******)((long)unaff_x24 + -1);
      in_ZR = unaff_x24 == (ulong *******)0x0;
      pppppppuVar24 = param_2;
code_r0x00010047cb28:
      param_2 = pppppppuVar24;
      if ((bool)in_ZR) break;
      unaff_x21 = unaff_x22 + 4;
      FUN_100e077ec(unaff_x22);
      unaff_x22 = unaff_x21;
    }
    pppppppuVar24 = param_2;
    if (unaff_x23 != (ulong *******)0x0) {
      _free();
      goto code_r0x00010047cb50;
    }
    goto code_r0x00010047cb84;
  case 0x47:
    goto code_r0x00010047cba4;
  case 0x48:
    goto code_r0x00010047cbbc;
  case 0x49:
    goto code_r0x00010047cb7c;
  case 0x4a:
    ppppppuStack_258 = unaff_x20[1];
    pppppppuStack_260 = (ulong *******)*unaff_x20;
    ppppppuStack_248 = unaff_x20[3];
    ppppppuStack_250 = unaff_x20[2];
    func_0x000107c04934(param_2,&pppppppuStack_260);
    goto code_r0x000107c06034;
  case 0x4b:
  case 0xee:
code_r0x00010047cb50:
    __Unwind_Resume(param_2);
    pppppppuVar24 = (ulong *******)FUN_107c05ccc();
    goto code_r0x00010047cb5c;
  case 0x4c:
    goto code_r0x00010047cbc4;
  case 0x4d:
  case 0xe9:
    goto code_r0x00010047caf8;
  case 0x4e:
    goto code_r0x00010047cb28;
  case 0x4f:
    goto code_r0x00010047cbac;
  case 0x50:
  case 0xdc:
    goto code_r0x00010047cad4;
  case 0x51:
    goto code_r0x00010047cb64;
  case 0x52:
  case 0xe3:
    goto code_r0x00010047cac8;
  case 0x54:
    pppppppuStack_2b0 = (ulong *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
    ppppppuStack_270 = (ulong ******)0x0;
    pppppppuStack_290 = pppppppuVar16;
    pppppppuStack_288 = pppppppuVar16;
    pppppppuStack_280 = (ulong *******)ppppppuVar23;
    if ((ulong)*(ushort *)(&UNK_108c998ce + (long)pppppppuVar16 * 2) == 0) {
      pppppppuVar21 = (ulong *******)0x8000000000000000;
      pppppppuStack_a0 = (ulong *******)0x8000000000000000;
code_r0x00010047d1e0:
      uStack_90._0_1_ = 0xb0;
      uStack_90._1_1_ = '&';
      uStack_90._2_6_ = 0x108ca;
      uStack_88 = 2;
      uStack_87 = 0;
      uStack_108 = (ulong *******)&uStack_90;
      pppppppuStack_100 = (ulong *******)&DAT_100c7b3a0;
      ppppppuVar13 = (ulong ******)0x8000000000000001;
      ppppppuVar23 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_108);
code_r0x00010047d214:
      *param_2 = (ulong ******)0x800000000000006e;
      param_2[1] = ppppppuVar23;
joined_r0x00010047d3d8:
      if (pppppppuVar21 != (ulong *******)0x8000000000000000) {
LAB_10047d22c:
        FUN_100e4f560(&pppppppuStack_a0);
      }
joined_r0x00010047d378:
      if ((long)ppppppuVar13 < -0x7ffffffffffffffe) goto LAB_10047d37c;
    }
    else {
      ppppppuVar23 = (ulong ******)0x0;
      puVar26 = (undefined8 *)((ulong)&uStack_108 | 1);
      puVar25 = (undefined8 *)((ulong)&pppppppuStack_2b0 | 1);
      pppppppuStack_2b8 = (ulong *******)((ulong)&uStack_90 | 1);
      ppppppuStack_2e0 = (ulong ******)0x4232663;
      pppppppuVar21 = (ulong *******)0x8000000000000000;
      ppppppuVar13 = (ulong ******)0x8000000000000001;
      pppppppuVar24 = (ulong *******)0x8000000000000000;
      pppppppuStack_2d8 = param_2;
      pppppppuVar12 = unaff_x26;
      do {
        pppppppuVar17 = uStack_108;
        unaff_x20 = uStack_2c8;
        pppppppuVar22 = pppppppuVar16 + 8;
        bVar15 = *(byte *)pppppppuVar16;
        ppppppuVar33 = ppppppuVar23;
        pppppppuVar29 = pppppppuVar22;
        if (bVar15 == 0x16) break;
        uStack_108 = (ulong *******)CONCAT71(uStack_108._1_7_,bVar15);
        pppppppuVar29 = uStack_108;
        ppppppuVar33 = pppppppuVar16[2];
        *(ulong *******)((long)puVar26 + 0x17) = pppppppuVar16[3];
        *(ulong *******)((long)puVar26 + 0xf) = ppppppuVar33;
        uVar18 = *(undefined8 *)((long)pppppppuVar16 + 1);
        puVar26[1] = *(undefined8 *)((long)pppppppuVar16 + 9);
        *puVar26 = uVar18;
        pppppppuStack_2a8 = (ulong *******)pppppppuVar16[5];
        pppppppuStack_2b0 = (ulong *******)pppppppuVar16[4];
        pppppppuStack_2a0 = (ulong *******)pppppppuVar16[6];
        if (bVar15 < 0xd) {
          if (bVar15 == 1) {
            uStack_108._1_1_ = SUB81(pppppppuVar17,1);
            iVar20 = 1;
            if (uStack_108._1_1_ != '\x01') {
              iVar20 = 2;
            }
            iVar19 = 0;
            if (uStack_108._1_1_ != '\0') {
              iVar19 = iVar20;
            }
          }
          else {
            if (bVar15 != 4) {
              if (bVar15 == 0xc) {
                if (lStack_f0 == 6) {
                  iVar19 = 1;
                  if (*piStack_f8 != 0x61726170 || (short)piStack_f8[1] != 0x736d) {
                    iVar19 = 2;
                  }
                }
                else if (lStack_f0 == 2) {
                  iVar19 = 2;
                  if ((short)*piStack_f8 == 0x6469) {
                    iVar19 = 0;
                  }
                }
                else {
                  iVar19 = 2;
                }
                goto joined_r0x00010047ce88;
              }
code_r0x00010047d744:
              ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
              pppppppuStack_98 = pppppppuStack_2c0;
              pppppppuStack_288 = pppppppuVar22;
              pppppppuStack_a0 = pppppppuVar24;
              ppppppuVar23 = (ulong ******)
                             thunk_FUN_108855b04(&uStack_108,&uStack_90,&UNK_10b210e20);
              param_2 = pppppppuStack_2d8;
              goto code_r0x00010047d214;
            }
            iVar20 = 1;
            if (pppppppuStack_100 != (ulong *******)0x1) {
              iVar20 = 2;
            }
            iVar19 = 0;
            if (pppppppuStack_100 != (ulong *******)0x0) {
              iVar19 = iVar20;
            }
          }
code_r0x00010047cf14:
          uStack_108 = pppppppuVar29;
          FUN_100e077ec(&uStack_108);
        }
        else {
          if (bVar15 == 0xd) {
            if (piStack_f8 == (int *)0x6) {
              iVar19 = 1;
              if (*(uint *)pppppppuStack_100 != 0x61726170 ||
                  *(short *)((long)pppppppuStack_100 + 4) != 0x736d) {
                iVar19 = 2;
              }
            }
            else {
              if (piStack_f8 != (int *)0x2) goto code_r0x00010047cee0;
              iVar19 = 2;
              if (*(short *)pppppppuStack_100 == 0x6469) {
                iVar19 = 0;
              }
            }
            goto code_r0x00010047cf14;
          }
          if (bVar15 != 0xe) {
            if (bVar15 != 0xf) goto code_r0x00010047d744;
            if (piStack_f8 == (int *)0x6) {
              if (((((*(char *)pppppppuStack_100 != 'p') ||
                    (*(char *)((long)pppppppuStack_100 + 1) != 'a')) ||
                   (*(char *)((long)pppppppuStack_100 + 2) != 'r')) ||
                  ((*(char *)((long)pppppppuStack_100 + 3) != 'a' ||
                   (*(char *)((long)pppppppuStack_100 + 4) != 'm')))) ||
                 (*(char *)((long)pppppppuStack_100 + 5) != 's')) goto code_r0x00010047cee0;
              iVar19 = 1;
            }
            else if (((piStack_f8 == (int *)0x2) && (*(char *)pppppppuStack_100 == 'i')) &&
                    (*(char *)((long)pppppppuStack_100 + 1) == 'd')) {
              iVar19 = 0;
            }
            else {
code_r0x00010047cee0:
              iVar19 = 2;
            }
            goto code_r0x00010047cf14;
          }
          if (lStack_f0 == 6) {
            if ((((((char)*piStack_f8 != 'p') || (*(char *)((long)piStack_f8 + 1) != 'a')) ||
                 (*(char *)((long)piStack_f8 + 2) != 'r')) ||
                ((*(char *)((long)piStack_f8 + 3) != 'a' || ((char)piStack_f8[1] != 'm')))) ||
               (*(char *)((long)piStack_f8 + 5) != 's')) goto code_r0x00010047ce50;
            iVar19 = 1;
          }
          else if (((lStack_f0 == 2) && ((char)*piStack_f8 == 'i')) &&
                  (*(char *)((long)piStack_f8 + 1) == 'd')) {
            iVar19 = 0;
          }
          else {
code_r0x00010047ce50:
            iVar19 = 2;
          }
joined_r0x00010047ce88:
          if (pppppppuStack_100 != (ulong *******)0x0) {
            _free();
          }
        }
        unaff_x20 = uStack_2c8;
        bVar15 = (byte)pppppppuStack_2b0;
        if (iVar19 == 0) {
          if (ppppppuVar13 != (ulong ******)0x8000000000000001) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            pppppppuStack_98 = pppppppuStack_2c0;
            uStack_90._0_1_ = 0xb0;
            uStack_90._1_1_ = '&';
            uStack_90._2_6_ = 0x108ca;
            uStack_88 = 2;
            uStack_87 = 0;
            uStack_108 = (ulong *******)&uStack_90;
            pppppppuStack_100 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_288 = pppppppuVar22;
            pppppppuStack_a0 = pppppppuVar24;
            ppppppuVar23 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_108);
            param_2 = pppppppuStack_2d8;
            goto code_r0x00010047d214;
          }
          pppppppuStack_2b0 = (ulong *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
          if (bVar15 == 0x16) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            pppppppuStack_98 = pppppppuStack_2c0;
            pppppppuStack_288 = pppppppuVar22;
            pppppppuStack_a0 = pppppppuVar24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010047d740;
          }
          uVar18 = *puVar25;
          puVar26[1] = puVar25[1];
          *puVar26 = uVar18;
          uVar18 = *(undefined8 *)((long)puVar25 + 0xf);
          *(undefined8 *)((long)puVar26 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
          *(undefined8 *)((long)puVar26 + 0xf) = uVar18;
          uStack_108 = (ulong *******)CONCAT71(uStack_108._1_7_,bVar15);
          func_0x00010135ba2c(&uStack_90,&uStack_108);
          ppppppuVar13 = (ulong ******)
                         CONCAT62(uStack_90._2_6_,CONCAT11(uStack_90._1_1_,(byte)uStack_90));
          if (ppppppuVar13 == (ulong ******)0x8000000000000001) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            ppppppuVar13 = (ulong ******)0x8000000000000001;
            *pppppppuStack_2d8 = (ulong ******)0x800000000000006e;
            pppppppuStack_2d8[1] = (ulong ******)CONCAT71(uStack_87,uStack_88);
            pppppppuStack_98 = pppppppuStack_2c0;
            pppppppuStack_a0 = pppppppuVar24;
            pppppppuStack_288 = pppppppuVar22;
            unaff_x20 = uStack_2c8;
            goto joined_r0x00010047d3d8;
          }
          uStack_2c8 = (ulong *******)CONCAT71(uStack_87,uStack_88);
          pppppppuStack_2d0 = (ulong *******)CONCAT71(uStack_7f,uStack_80);
        }
        else if (iVar19 == 1) {
          if (pppppppuVar21 != (ulong *******)0x8000000000000000) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            pppppppuStack_98 = pppppppuStack_2c0;
            uStack_90._0_1_ = 6;
            uStack_90._1_1_ = -0x6a;
            uStack_90._2_6_ = 0x108cb;
            uStack_88 = 6;
            uStack_87 = 0;
            uStack_108 = (ulong *******)&uStack_90;
            pppppppuStack_100 = (ulong *******)&DAT_100c7b3a0;
            pppppppuStack_288 = pppppppuVar22;
            pppppppuStack_a0 = pppppppuVar24;
            ppppppuVar23 = (ulong ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_108);
            *pppppppuStack_2d8 = (ulong ******)0x800000000000006e;
            pppppppuStack_2d8[1] = ppppppuVar23;
            goto LAB_10047d22c;
          }
          pppppppuStack_2b0 = (ulong *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
          if (bVar15 == 0x16) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            pppppppuStack_98 = pppppppuStack_2c0;
            pppppppuStack_288 = pppppppuVar22;
            pppppppuStack_a0 = pppppppuVar24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x00010047d740;
          }
          ppppppuVar33 = (ulong ******)*puVar25;
          pppppppuStack_2b8[1] = (ulong ******)puVar25[1];
          *pppppppuStack_2b8 = ppppppuVar33;
          uVar18 = *(undefined8 *)((long)puVar25 + 0xf);
          *(undefined8 *)((long)pppppppuStack_2b8 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
          *(undefined8 *)((long)pppppppuStack_2b8 + 0xf) = uVar18;
          uStack_90._0_1_ = bVar15;
          func_0x0001012ed038(&uStack_108,&uStack_90);
          if (uStack_108 == (ulong *******)0x8000000000000000) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            *pppppppuStack_2d8 = (ulong ******)0x800000000000006e;
            pppppppuStack_2d8[1] = (ulong ******)pppppppuStack_100;
            uStack_108 = (ulong *******)0x8000000000000000;
            pppppppuStack_288 = pppppppuVar22;
            unaff_x20 = uStack_2c8;
            goto joined_r0x00010047d378;
          }
          pppppppuStack_2c0 = pppppppuStack_100;
          uStack_88 = (undefined1)lStack_f0;
          uStack_87 = (undefined7)((ulong)lStack_f0 >> 8);
          uStack_90._0_1_ = (byte)piStack_f8;
          uStack_90._1_1_ = (char)((ulong)piStack_f8 >> 8);
          uStack_90._2_6_ = (undefined6)((ulong)piStack_f8 >> 0x10);
          ppppppuStack_78 = ppppppuStack_e0;
          uStack_80 = (undefined1)uStack_e8;
          uStack_7f = (undefined7)((ulong)uStack_e8 >> 8);
          ppppppuStack_68 = ppppppuStack_d0;
          ppppppuStack_70 = ppppppuStack_d8;
          pppppppuVar21 = uStack_108;
          pppppppuVar24 = uStack_108;
          unaff_x28 = ppppppuStack_c8;
          unaff_x27 = ppppppuStack_c0;
          pppppppuVar12 = pppppppuStack_b8;
          unaff_x25 = pppppppuStack_b0;
          unaff_x24 = pppppppuStack_a8;
          unaff_x23 = pppppppuStack_a0;
          unaff_x22 = pppppppuStack_98;
        }
        else {
          pppppppuStack_2b0 = (ulong *******)CONCAT71(pppppppuStack_2b0._1_7_,0x16);
          if (bVar15 == 0x16) {
            ppppppuStack_270 = (ulong ******)((long)ppppppuVar23 + 1);
            pppppppuStack_98 = pppppppuStack_2c0;
            pppppppuStack_288 = pppppppuVar22;
            pppppppuStack_a0 = pppppppuVar24;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010047d740:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10047d744);
            (*pcVar2)();
          }
          uVar18 = *puVar25;
          puVar26[1] = puVar25[1];
          *puVar26 = uVar18;
          uVar18 = *(undefined8 *)((long)puVar25 + 0xf);
          *(undefined8 *)((long)puVar26 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
          *(undefined8 *)((long)puVar26 + 0xf) = uVar18;
          uStack_108 = (ulong *******)CONCAT71(uStack_108._1_7_,bVar15);
          FUN_100e077ec(&uStack_108);
        }
        ppppppuVar23 = (ulong ******)((long)ppppppuVar23 + 1);
        ppppppuVar33 = ppppppuStack_2e0;
        pppppppuVar29 = unaff_x26;
        pppppppuVar16 = pppppppuVar22;
      } while (pppppppuVar22 != unaff_x26);
      unaff_x20 = uStack_2c8;
      pppppppuVar16 = pppppppuStack_2d8;
      pppppppuStack_98 = pppppppuStack_2c0;
      param_2 = pppppppuStack_2d8;
      pppppppuStack_288 = pppppppuVar29;
      ppppppuStack_270 = ppppppuVar33;
      pppppppuStack_a0 = pppppppuVar24;
      if (ppppppuVar13 == (ulong ******)0x8000000000000001) goto code_r0x00010047d1e0;
      if (pppppppuVar21 != (ulong *******)0x8000000000000000) {
        pppppppuStack_2d8[10] = unaff_x27;
        pppppppuStack_2d8[9] = unaff_x28;
        pppppppuStack_2d8[0xc] = (ulong ******)unaff_x25;
        pppppppuStack_2d8[0xb] = (ulong ******)pppppppuVar12;
        pppppppuStack_2d8[0xe] = (ulong ******)unaff_x23;
        pppppppuStack_2d8[0xd] = (ulong ******)unaff_x24;
        pppppppuStack_2d8[4] = (ulong ******)CONCAT71(uStack_87,uStack_88);
        pppppppuStack_2d8[3] =
             (ulong ******)CONCAT62(uStack_90._2_6_,CONCAT11(uStack_90._1_1_,(byte)uStack_90));
        pppppppuStack_2d8[6] = ppppppuStack_78;
        pppppppuStack_2d8[5] = (ulong ******)CONCAT71(uStack_7f,uStack_80);
        pppppppuStack_2d8[8] = ppppppuStack_68;
        pppppppuStack_2d8[7] = ppppppuStack_70;
        *pppppppuStack_2d8 = (ulong ******)0x8000000000000038;
        pppppppuStack_2d8[1] = (ulong ******)pppppppuVar21;
        pppppppuStack_2d8[2] = (ulong ******)pppppppuStack_2c0;
        pppppppuStack_2d8[0xf] = (ulong ******)unaff_x22;
        pppppppuStack_2d8[0x10] = ppppppuVar13;
        pppppppuStack_2d8[0x11] = (ulong ******)uStack_2c8;
        pppppppuStack_2d8[0x12] = (ulong ******)pppppppuStack_2d0;
        _memcpy(&pppppppuStack_260,pppppppuStack_2d8,0x1c0);
        FUN_100d34830(&pppppppuStack_290);
        if (unaff_x26 == pppppppuVar29) {
          return;
        }
        uStack_108 = (ulong *******)ppppppuVar33;
        ppppppuVar23 = (ulong ******)
                       thunk_FUN_1087e422c(((ulong)((long)unaff_x26 - (long)pppppppuVar29) >> 6) +
                                           (long)ppppppuVar33,&uStack_108,&UNK_10b23a190);
        *pppppppuVar16 = (ulong ******)0x800000000000006e;
        pppppppuVar16[1] = ppppppuVar23;
        FUN_100e44f40(&pppppppuStack_260);
        return;
      }
      uStack_90._0_1_ = 6;
      uStack_90._1_1_ = -0x6a;
      uStack_90._2_6_ = 0x108cb;
      uStack_88 = 6;
      uStack_87 = 0;
      uStack_108 = (ulong *******)&uStack_90;
      pppppppuStack_100 = (ulong *******)&DAT_100c7b3a0;
      ppppppuVar23 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_108);
      *pppppppuVar16 = (ulong ******)0x800000000000006e;
      pppppppuVar16[1] = ppppppuVar23;
      ppppppuVar13 = (ulong ******)((ulong)ppppppuVar13 & 0x7fffffffffffffff);
    }
    if (ppppppuVar13 != (ulong ******)0x0) {
      _free(unaff_x20);
    }
LAB_10047d37c:
    FUN_100d34830(&pppppppuStack_290);
    if ((byte)pppppppuStack_2b0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_2b0);
    }
    return;
  case 0x55:
    goto code_r0x00010047c138;
  case 0x56:
    goto code_r0x00010047c17c;
  case 0x59:
    goto code_r0x00010047c830;
  case 0x5a:
    goto code_r0x00010047c7f8;
  case 0x5b:
    goto code_r0x00010047c810;
  case 0x62:
    goto code_r0x00010047c860;
  case 0x66:
    goto code_r0x00010047c76c;
  case 0x67:
    goto code_r0x00010047c800;
  case 0x68:
    goto code_r0x00010047c764;
  case 0x6a:
  case 0x87:
  case 0xf2:
    goto code_r0x00010047c8a0;
  case 0x6b:
    goto code_r0x00010047c4dc;
  case 0x6c:
    goto code_r0x00010047c520;
  case 0x6e:
    goto code_r0x00010047c660;
  case 0x6f:
  case 0x9c:
    goto code_r0x00010047c670;
  case 0x70:
    goto code_r0x00010047c638;
  case 0x71:
    goto code_r0x00010047c650;
  case 0x72:
code_r0x00010047c5fc:
    pppppppuVar16 = (ulong *******)0x8000000000000001;
    pppppppuStack_280 = pppppppuVar27;
  case 0x7a:
    in_ZR = unaff_x22 == pppppppuVar16;
    pppppppuVar21 = uStack_2c8;
code_r0x00010047c60c:
    param_2 = pppppppuStack_2d0;
    if ((bool)in_ZR) {
code_r0x00010047c618:
      pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
      pppppppuStack_a8 = (ulong *******)&UNK_108ca26b0;
      pppppppuStack_a0 = (ulong *******)0x2;
      pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
code_r0x00010047c62c:
      pppppppuVar21 = (ulong *******)&DAT_100c7b3a0;
code_r0x00010047c634:
      uStack_90._0_1_ = (byte)pppppppuVar16;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar16 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar16 >> 0x10);
      uStack_88 = SUB81(pppppppuVar21,0);
      uStack_87 = (undefined7)((ulong)pppppppuVar21 >> 8);
code_r0x00010047c638:
      pppppppuVar12 = param_2;
FUN_10047c63c:
      param_2 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010047c640:
      unaff_x20 = (ulong *******)thunk_FUN_108856088((long)param_2 + 0x8f7,&uStack_90);
      goto code_r0x00010047c650;
    }
    if (((ulong)pppppppuVar12 & 1) == 0) {
      pppppppuVar16 = (ulong *******)&UNK_108cb9000;
code_r0x00010047c6e8:
      pppppppuStack_a8 = (ulong *******)((long)pppppppuVar16 + 0x606);
      pppppppuStack_a0 = (ulong *******)0x6;
      pppppppuVar16 = (ulong *******)&pppppppuStack_a8;
      pppppppuVar21 = (ulong *******)&UNK_100c7b000;
code_r0x00010047c6fc:
      uStack_90._0_1_ = (byte)pppppppuVar16;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar16 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar16 >> 0x10);
      uStack_88 = SUB81(pppppppuVar21 + 0x74,0);
      uStack_87 = (undefined7)((ulong)(pppppppuVar21 + 0x74) >> 8);
      ppppppuVar23 = (ulong ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      *pppppppuStack_2d0 = (ulong ******)0x800000000000006e;
      pppppppuStack_2d0[1] = ppppppuVar23;
      unaff_x22 = (ulong *******)((ulong)unaff_x22 & 0x7fffffffffffffff);
      pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
      param_2 = unaff_x20;
      goto joined_r0x00010047c764;
    }
code_r0x00010047c680:
    pppppppuVar24 = (ulong *******)0x800000000000006e;
code_r0x00010047c688:
    pppppppuVar16 = (ulong *******)((long)pppppppuVar24 + -0x2d);
    unaff_x21 = pppppppuStack_2d0;
code_r0x00010047c690:
    *unaff_x21 = (ulong ******)pppppppuVar16;
    unaff_x21[1] = (ulong ******)unaff_x22;
    unaff_x21[2] = (ulong ******)unaff_x20;
    unaff_x21[3] = (ulong ******)pppppppuVar21;
code_r0x00010047c698:
    param_3 = unaff_x21;
    param_2 = &ppppppuStack_270;
    unaff_x21 = param_3;
code_r0x00010047c6a0:
    _memcpy(param_2,param_3,0x1c0);
code_r0x00010047c6a8:
    param_2 = (ulong *******)&pppppppuStack_2a0;
code_r0x00010047c6b0:
    FUN_100d34830(param_2);
    in_ZR = unaff_x26 == pppppppuVar29;
code_r0x00010047c6b8:
    if (!(bool)in_ZR) {
      pppppppuVar16 = (ulong *******)((long)unaff_x26 - (long)pppppppuVar29);
code_r0x00010047c6c0:
      pppppppuVar16 = (ulong *******)((ulong)pppppppuVar16 >> 6);
      uStack_90._0_1_ = (byte)pppppppuVar27;
      uStack_90._1_1_ = (char)((ulong)pppppppuVar27 >> 8);
      uStack_90._2_6_ = (undefined6)((ulong)pppppppuVar27 >> 0x10);
      param_4 = &UNK_10b23a190;
code_r0x00010047c6d0:
      param_2 = (ulong *******)((long)pppppppuVar16 + (long)pppppppuVar27);
      param_3 = (ulong *******)&uStack_90;
code_r0x00010047c6d8:
      ppppppuVar23 = (ulong ******)thunk_FUN_1087e422c(param_2,param_3,param_4);
      *unaff_x21 = (ulong ******)pppppppuVar24;
      unaff_x21[1] = ppppppuVar23;
      goto code_r0x00010047c94c;
    }
    goto LAB_10047c8c8;
  case 0x73:
    goto code_r0x00010047c680;
  case 0x74:
  case 0x9a:
    goto code_r0x00010047c698;
  case 0x75:
    goto code_r0x00010047c658;
  case 0x76:
    goto code_r0x00010047c6b0;
  case 0x77:
    goto code_r0x00010047c62c;
  case 0x78:
    goto code_r0x00010047c6a0;
  case 0x79:
    goto code_r0x00010047c5d4;
  case 0x7b:
  case 0x9d:
    goto code_r0x00010047c688;
  case 0x7c:
    goto code_r0x00010047c5ac;
  case 0x7d:
    goto code_r0x00010047c640;
  case 0x7e:
    goto code_r0x00010047c5a4;
  case 0x80:
    goto code_r0x00010047c6fc;
  case 0x81:
    goto code_r0x00010047c374;
  case 0x82:
    goto code_r0x00010047c3b8;
  case 0x84:
  case 0xf3:
    goto code_r0x00010047c8b0;
  case 0x85:
  case 0xf7:
    goto code_r0x00010047c8c0;
  case 0x89:
  case 0xca:
    goto code_r0x00010047c8d0;
  case 0x8b:
  case 0xd1:
    goto code_r0x00010047c8a8;
  case 0x8c:
  case 0xcf:
    goto code_r0x00010047c900;
  case 0x8d:
    goto code_r0x00010047c87c;
  case 0x8e:
  case 0xfa:
    goto code_r0x00010047c8f0;
  case 0x90:
  case 0xb8:
    goto code_r0x00010047c854;
  case 0x91:
  case 0xd2:
  case 0xf8:
    goto code_r0x00010047c8d8;
  case 0x92:
  case 0xb7:
    goto code_r0x00010047c7fc;
  case 0x97:
    goto code_r0x00010047c4b0;
  case 0x98:
    goto code_r0x00010047c4f4;
  case 0x9b:
    goto code_r0x00010047c6a8;
  case 0x9e:
    goto code_r0x00010047c634;
  case 0x9f:
    goto code_r0x00010047c6b8;
  case 0xa0:
    goto code_r0x00010047c6d0;
  case 0xa1:
    goto code_r0x00010047c690;
  case 0xa2:
    goto code_r0x00010047c6e8;
  case 0xa3:
    goto code_r0x00010047c664;
  case 0xa4:
    goto code_r0x00010047c6d8;
  case 0xa5:
    goto code_r0x00010047c60c;
  case 0xa6:
    goto FUN_10047c63c;
  case 0xa7:
    goto code_r0x00010047c6c0;
  case 0xa8:
    goto code_r0x00010047c5e4;
  case 0xa9:
    goto code_r0x00010047c678;
  case 0xaa:
    goto code_r0x00010047c5dc;
  case 0xac:
code_r0x00010047c734:
    pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar21 = pppppppuStack_2d0;
    goto LAB_10047c748;
  case 0xad:
    goto code_r0x00010047c3ac;
  case 0xae:
    goto code_r0x00010047c3f0;
  case 0xb0:
    goto code_r0x00010047c804;
  case 0xb2:
    goto code_r0x00010047c7dc;
  case 0xb9:
    goto code_r0x00010047c7d0;
  case 0xbb:
code_r0x00010047c778:
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar12 = pppppppuStack_2d0;
    pppppppuStack_280 = pppppppuVar16;
code_r0x00010047c650:
    pppppppuVar16 = (ulong *******)0x800000000000006e;
code_r0x00010047c658:
    *pppppppuVar12 = (ulong ******)pppppppuVar16;
    pppppppuVar12[1] = (ulong ******)unaff_x20;
    goto LAB_10047c65c;
  case 0xbc:
    goto code_r0x00010047c7a8;
  case 0xbe:
    goto code_r0x00010047c750;
  case 0xc0:
    goto LAB_10047c748;
  case 0xc6:
    goto code_r0x00010047c934;
  case 199:
    goto code_r0x00010047c944;
  case 200:
    goto code_r0x00010047c90c;
  case 0xcb:
    goto code_r0x00010047c954;
  case 0xcc:
    goto code_r0x00010047c96c;
  case 0xcd:
    goto code_r0x00010047c92c;
  case 0xd0:
    goto code_r0x00010047c974;
  case 0xd5:
    goto code_r0x00010047c914;
  case 0xd8:
code_r0x00010047c9d4:
    pppppppuStack_a8 = (ulong *******)&UNK_108cb9606;
    pppppppuStack_a0 = (ulong *******)0x6;
    uStack_90._0_1_ = (byte)&pppppppuStack_a8;
    uStack_90._1_1_ = (char)((ulong)&pppppppuStack_a8 >> 8);
    uStack_90._2_6_ = (undefined6)((ulong)&pppppppuStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    param_2 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010047c9f8:
    param_2 = (ulong *******)thunk_FUN_108856088((undefined *)((long)param_2 + 0x973),&uStack_90);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar21 = pppppppuStack_2d0;
    goto LAB_10047c748;
  case 0xda:
    goto code_r0x00010047c518;
  case 0xdd:
    pppppppuVar24 = (ulong *******)FUN_107c05ccc();
    _free();
  case 0xe1:
    param_2 = (ulong *******)__Unwind_Resume(pppppppuVar24);
code_r0x00010047caf8:
    _free();
code_r0x00010047cb08:
    pppppppuVar24 = (ulong *******)__Unwind_Resume(param_2);
code_r0x00010047cb10:
    pppppppuStack_280 = (ulong *******)((long)unaff_x23 + 1);
code_r0x00010047cb5c:
    pppppppuVar16 = (ulong *******)0x8000000000000002;
code_r0x00010047cb64:
    if (((long)pppppppuVar16 <= (long)unaff_x22) && (unaff_x22 != (ulong *******)0x0)) {
code_r0x00010047cb74:
      _free();
    }
    param_2 = (ulong *******)&pppppppuStack_2c0;
code_r0x00010047cb7c:
    FUN_100e7b998(param_2);
    param_2 = pppppppuVar24;
    goto code_r0x00010047cb84;
  case 0xde:
code_r0x00010047caa8:
    _free();
    param_2 = pppppppuVar24;
    goto code_r0x00010047cad4;
  case 0xdf:
code_r0x00010047cac0:
    FUN_100e077ec(&pppppppuStack_2c0);
code_r0x00010047cac8:
    param_2 = pppppppuVar24;
    goto code_r0x00010047cb84;
  case 0xe0:
    FUN_100e44f40(&ppppppuStack_270);
  case 0xe8:
    param_2 = pppppppuVar24;
    goto code_r0x00010047cb84;
  case 0xe2:
    goto code_r0x00010047cb08;
  case 0xe5:
    param_2 = pppppppuVar24;
    if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) goto code_r0x00010047caa8;
code_r0x00010047cad4:
    FUN_100e81e80(&pppppppuStack_2c0);
    pppppppuVar24 = param_2;
    goto code_r0x00010047cb84;
  case 0xe6:
    goto code_r0x00010047cb10;
  case 0xe7:
code_r0x00010047ca44:
    pppppppuStack_280 = pppppppuVar16;
    param_2 = (ulong *******)thunk_FUN_108855b04(&uStack_90,&pppppppuStack_a8,&UNK_10b20f5c0);
    pppppppuVar24 = (ulong *******)&pppppppuStack_2c0;
    pppppppuVar21 = pppppppuStack_2d0;
LAB_10047c748:
    pppppppuVar16 = (ulong *******)0x800000000000006e;
code_r0x00010047c750:
    *pppppppuVar21 = (ulong ******)pppppppuVar16;
    pppppppuVar21[1] = (ulong ******)param_2;
    if (-0x7fffffffffffffff < (long)unaff_x22) {
code_r0x00010047c764:
      param_2 = unaff_x20;
joined_r0x00010047c764:
      if (unaff_x22 != (ulong *******)0x0) {
code_r0x00010047c76c:
        _free(param_2);
      }
    }
LAB_10047c65c:
    param_2 = pppppppuVar24 + 4;
code_r0x00010047c660:
    FUN_100d34830(param_2);
code_r0x00010047c664:
    if ((byte)pppppppuStack_2c0 != '\x16') {
code_r0x00010047c670:
      FUN_100e077ec(&pppppppuStack_2c0);
code_r0x00010047c678:
    }
    goto LAB_10047c8c8;
  case 0xea:
    goto code_r0x00010047ca1c;
  case 0xeb:
    pppppppuVar24 = param_2;
    if ((byte)pppppppuStack_2c0 != '\x16') goto code_r0x00010047cac0;
code_r0x00010047cb84:
    __Unwind_Resume(param_2);
    unaff_x30 = &DAT_10047cb8c;
    FUN_107c05ccc();
    ppppppuVar10 = (ulong ******)&stack0xfffffffffffffcc0;
    param_3 = extraout_x1;
code_r0x00010047cb94:
    *(ulong ********)((long)ppppppuVar10 + 0x20) = unaff_x24;
    *(ulong ********)((long)ppppppuVar10 + 0x28) = unaff_x23;
    *(ulong ********)((long)ppppppuVar10 + 0x30) = unaff_x22;
    *(ulong ********)((long)ppppppuVar10 + 0x38) = unaff_x21;
    *(ulong ********)((long)ppppppuVar10 + 0x40) = unaff_x20;
    *(ulong ********)((long)ppppppuVar10 + 0x48) = pppppppuVar24;
    *(undefined1 **)((long)ppppppuVar10 + 0x50) = puVar30;
    *(undefined **)((long)ppppppuVar10 + 0x58) = unaff_x30;
code_r0x00010047cba4:
code_r0x00010047cbac:
    pppppppuVar16 = (ulong *******)(ulong)*(byte *)param_3;
    pppppppuVar21 = (ulong *******)&UNK_108c99000;
code_r0x00010047cbbc:
    pppppppuVar21 = (ulong *******)((long)pppppppuVar21 + 0x8fa);
    ppppppuVar23 = (ulong ******)&UNK_10047cbd0;
code_r0x00010047cbc4:
                    /* WARNING: Could not recover jumptable at 0x00010047cbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)ppppppuVar23 +
              (ulong)*(ushort *)((long)pppppppuVar21 + (long)pppppppuVar16 * 2) * 4))();
    return;
  case 0xec:
code_r0x00010047ca14:
    pppppppuStack_280 = pppppppuVar16;
code_r0x00010047ca1c:
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x00010047ca38;
  case 0xef:
    goto code_r0x00010047c130;
  case 0xf0:
    goto code_r0x00010047c174;
  case 0xfc:
    goto code_r0x00010047c8e0;
  case 0xff:
    goto LAB_10047c8c8;
  }
  ppppppuStack_270 = (ulong ******)CONCAT71(ppppppuStack_270._1_7_,bVar15);
code_r0x00010047c8a8:
  param_4 = &UNK_10b21b430;
code_r0x00010047c8b0:
  pppppppuVar12 = (ulong *******)FUN_107c05dcc(&ppppppuStack_270,&pppppppuStack_a8,param_4);
  pppppppuVar16 = (ulong *******)0x6e;
code_r0x00010047c8c0:
  *param_2 = (ulong ******)((ulong)pppppppuVar16 | 0x8000000000000000);
  param_2[1] = (ulong ******)pppppppuVar12;
LAB_10047c8c8:
code_r0x00010047c8cc:
code_r0x00010047c8d0:
code_r0x00010047c8d8:
code_r0x00010047c8e0:
  return;
}

