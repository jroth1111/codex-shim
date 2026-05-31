
/* WARNING: Type propagation algorithm not settling */

void FUN_10047cb8c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  char *param_4,ulong *******param_5,undefined *param_6)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *******pppppppuVar16;
  ulong ******ppppppuVar17;
  ulong ******ppppppuVar18;
  uint uVar19;
  byte bVar20;
  ulong *******pppppppuVar21;
  ulong *******pppppppuVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong *******pppppppuVar25;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******pppppppuVar26;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined8 unaff_x30;
  ulong *******pppppppuVar28;
  ulong ******ppppppuVar29;
  ulong ******ppppppuVar30;
  ulong ******ppppppuVar31;
  ulong ******ppppppuVar32;
  byte abStack_410 [80];
  ulong *******pppppppuStack_3c0;
  ulong *******pppppppuStack_3b8;
  ulong ******ppppppuStack_3b0;
  ulong *******pppppppuStack_3a8;
  ulong *******pppppppuStack_3a0;
  undefined8 *puStack_398;
  ulong ******ppppppuStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  ulong ******ppppppuStack_378;
  ulong *******pppppppuStack_370;
  ulong *******pppppppuStack_368;
  ulong ******ppppppuStack_360;
  ulong *******pppppppuStack_358;
  ulong *******pppppppuStack_350;
  ulong ******ppppppuStack_340;
  ulong *******pppppppuStack_338;
  ulong *******pppppppuStack_330;
  ulong ******ppppppuStack_328;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  ulong ******ppppppuStack_f0;
  ulong ******ppppppuStack_e8;
  ulong ******ppppppuStack_e0;
  ulong ******ppppppuStack_d8;
  ulong ******ppppppuStack_d0;
  ulong ******ppppppuStack_c8;
  ulong ******ppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong ******ppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong *******pppppppuVar13;
  
  ppppppuVar32 = param_3._8_8_;
  ppppppuVar31 = param_3._0_8_;
  ppppppuVar30 = param_2._8_8_;
  ppppppuVar29 = param_2._0_8_;
  ppppppuVar18 = param_1._8_8_;
  pppppppuVar28 = param_1._0_8_;
  puVar27 = &stack0xfffffffffffffff0;
  pppppppuVar12 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar7 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar26 = (ulong *******)&uStack_108;
  bVar20 = *(byte *)param_5;
  pppppppuVar21 = (ulong *******)(ulong)bVar20;
  pppppppuVar25 = (ulong *******)&UNK_108c998fa;
  ppppppuVar17 = (ulong ******)
                 (&UNK_10047cbd0 + (ulong)*(ushort *)(&UNK_108c998fa + (long)pppppppuVar21 * 2) * 4)
  ;
  pppppppuVar14 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar15 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar8 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar9 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar10 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar11 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar13 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar4 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar5 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar6 = (ulong *******)&pppppppuStack_3c0;
  pppppppuVar16 = (ulong *******)param_4;
  pppppppuVar22 = pppppppuVar21;
  switch(bVar20) {
  case 0:
  case 0x16:
    bVar20 = *(byte *)((long)param_5 + 1);
  case 0xbd:
    ppppppuStack_340 = (ulong ******)((ulong)CONCAT61(ppppppuStack_340._2_6_,bVar20) << 8);
    goto code_r0x00010047d4fc;
  case 1:
  case 0x17:
    pppppppuVar21 = (ulong *******)(ulong)*(byte *)((long)param_5 + 1);
    break;
  case 2:
  case 0x18:
    pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)param_5 + 2);
  case 0xb0:
    break;
  case 3:
  case 0x19:
    pppppppuVar21 = (ulong *******)(ulong)*(uint *)((long)param_5 + 4);
    break;
  case 4:
  case 0x1a:
    pppppppuVar21 = (ulong *******)param_5[1];
    break;
  case 5:
  case 0x1b:
    pppppppuVar21 = (ulong *******)(long)*(char *)((long)param_5 + 1);
    goto code_r0x00010047d4f0;
  case 6:
  case 0x1c:
    pppppppuVar21 = (ulong *******)(long)*(short *)((long)param_5 + 2);
    goto code_r0x00010047d4f0;
  case 7:
  case 0x1d:
  case 0x80:
    pppppppuVar21 = (ulong *******)(long)(int)*(uint *)((long)param_5 + 4);
  case 0xb5:
code_r0x00010047d4f0:
    bVar20 = 2;
    pppppppuStack_338 = pppppppuVar21;
    goto code_r0x00010047d4f8;
  case 8:
  case 0x1e:
    pppppppuVar21 = (ulong *******)param_5[1];
    goto code_r0x00010047d4f0;
  case 9:
  case 0x1f:
  case 0xb3:
    pppppppuVar28 = (ulong *******)(double)*(float *)((long)param_5 + 4);
  case 0xb7:
code_r0x00010047d4e0:
    bVar20 = 3;
    pppppppuStack_338 = pppppppuVar28;
    goto code_r0x00010047d4f8;
  case 10:
  case 0x20:
    pppppppuVar28 = (ulong *******)param_5[1];
    goto code_r0x00010047d4e0;
  case 0xb:
  case 0x21:
  case 0xf7:
    param_5 = (ulong *******)(ulong)*(uint *)((long)param_5 + 4);
  case 0x73:
  case 0xb4:
code_r0x00010047d418:
    pppppppuVar8 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010047d41c:
    puVar27 = *(undefined1 **)((long)pppppppuVar8 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar8 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar8 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar8 + 0x48);
    pppppppuVar9 = pppppppuVar8;
code_r0x00010047d424:
    pppppppuVar10 = pppppppuVar9;
code_r0x00010047d428:
    pppppppuVar11 = pppppppuVar10;
code_r0x00010047d42c:
    pppppppuVar13 = pppppppuVar11;
code_r0x00010047d430:
    pppppppuVar12 = (ulong *******)((long)pppppppuVar13 + 0x60);
code_r0x00010047d434:
    *(ulong ********)((long)pppppppuVar12 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar12 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar12 + -0x10) = puVar27;
    *(undefined8 *)((long)pppppppuVar12 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar12 + -0x44) = 0;
    uVar19 = (uint)param_5;
    if (uVar19 < 0x80) {
      *(byte *)((long)pppppppuVar12 + -0x44) = (byte)param_5;
      uVar23 = 1;
    }
    else {
      bVar20 = (byte)param_5 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        *(byte *)((long)pppppppuVar12 + -0x44) = (byte)(uVar19 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar12 + -0x43) = bVar20;
        uVar23 = 2;
      }
      else {
        bVar1 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          *(byte *)((long)pppppppuVar12 + -0x44) = (byte)(uVar19 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar12 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar12 + -0x42) = bVar20;
          uVar23 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar12 + -0x44) = (byte)(uVar19 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar12 + -0x43) = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar12 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar12 + -0x41) = bVar20;
          uVar23 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar12 + -0x38) = (undefined1 *)((long)pppppppuVar12 + -0x44);
    *(undefined8 *)((long)pppppppuVar12 + -0x30) = uVar23;
    *(undefined1 *)((long)pppppppuVar12 + -0x40) = 5;
    ppppppuVar17 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar12 + -0x40),
                                       (undefined1 *)((long)pppppppuVar12 + -0x21),&UNK_10b21c6f0);
    *(ulong *******)param_4 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_4 + 8) = ppppppuVar17;
    return;
  case 0xc:
  case 0x22:
  case 0xfa:
    param_5 = param_5 + 1;
  case 0x76:
  case 0xb9:
    pppppppuVar14 = (ulong *******)&stack0xffffffffffffffa0;
    puVar27 = unaff_x29;
code_r0x00010047d450:
    unaff_x20 = *(ulong ********)((long)pppppppuVar14 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar14 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar14 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar14 + 0x38);
    pppppppuVar15 = pppppppuVar14;
code_r0x00010047d458:
    *(ulong ********)((long)pppppppuVar15 + 0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar15 + 0x38) = unaff_x21;
    *(ulong ********)((long)pppppppuVar15 + 0x40) = unaff_x20;
    *(ulong ********)((long)pppppppuVar15 + 0x48) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar15 + 0x50) = puVar27;
    *(undefined8 *)((long)pppppppuVar15 + 0x58) = unaff_x30;
    ppppppuVar17 = param_5[1];
    ppppppuVar18 = param_5[2];
    *(ulong *******)((long)pppppppuVar15 + 0x18) = ppppppuVar17;
    *(ulong *******)((long)pppppppuVar15 + 0x20) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar15 + 0x10) = 5;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar15 + 0x10),
                                       (undefined1 *)((long)pppppppuVar15 + 0x2f),&UNK_10b21c6f0);
    *(ulong *******)param_4 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_4 + 8) = ppppppuVar18;
    if (*param_5 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xd:
  case 0x23:
    pppppppuVar21 = (ulong *******)param_5[1];
    pppppppuVar25 = (ulong *******)param_5[2];
  case 0xb8:
    bVar20 = 5;
    pppppppuStack_338 = pppppppuVar21;
    pppppppuStack_330 = pppppppuVar25;
    goto code_r0x00010047d4f8;
  case 0xe:
  case 0x24:
  case 0xac:
  case 0xf9:
    param_5 = param_5 + 1;
  case 0x75:
  case 0xbb:
code_r0x00010047d3f0:
    pppppppuVar4 = (ulong *******)&stack0xffffffffffffffa0;
code_r0x00010047d3f4:
    puVar27 = *(undefined1 **)((long)pppppppuVar4 + 0x50);
    unaff_x30 = *(undefined8 *)((long)pppppppuVar4 + 0x58);
    unaff_x20 = *(ulong ********)((long)pppppppuVar4 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar4 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar4 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar4 + 0x38);
    pppppppuVar5 = pppppppuVar4;
code_r0x00010047d400:
    pppppppuVar6 = pppppppuVar5;
code_r0x00010047d404:
    pppppppuVar7 = (ulong *******)((long)pppppppuVar6 + 0x60);
code_r0x00010047d40c:
    *(ulong ********)((long)pppppppuVar7 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar7 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar7 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar7 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar7 + -0x10) = puVar27;
    *(undefined8 *)((long)pppppppuVar7 + -8) = unaff_x30;
    ppppppuVar17 = param_5[1];
    ppppppuVar18 = param_5[2];
    *(ulong *******)((long)pppppppuVar7 + -0x48) = ppppppuVar17;
    *(ulong *******)((long)pppppppuVar7 + -0x40) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar7 + -0x50) = 6;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar7 + -0x50),
                                       (undefined1 *)((long)pppppppuVar7 + -0x31),&UNK_10b21c6f0);
    *(ulong *******)param_4 = (ulong ******)0x800000000000006e;
    *(ulong *******)((long)param_4 + 8) = ppppppuVar18;
    if (*param_5 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xf:
  case 0x25:
    pppppppuStack_338 = (ulong *******)param_5[1];
    pppppppuStack_330 = (ulong *******)param_5[2];
  case 0xee:
    bVar20 = 6;
code_r0x00010047d488:
    goto code_r0x00010047d4f8;
  case 0x10:
  case 0x26:
  case 0xf5:
    bVar20 = 8;
  case 0x54:
  case 0x71:
  case 0xdc:
    goto code_r0x00010047d4f8;
  default:
    pppppppuVar16 = (ulong *******)param_5[1];
    pppppppuStack_338 = (ulong *******)pppppppuVar16[1];
    ppppppuStack_340 = *pppppppuVar16;
    ppppppuStack_328 = pppppppuVar16[3];
    pppppppuStack_330 = (ulong *******)pppppppuVar16[2];
    func_0x000107c04934(param_4,&ppppppuStack_340);
    goto code_r0x00010047d05c;
  case 0x12:
  case 0x28:
    bVar20 = 7;
    goto code_r0x00010047d4f8;
  case 0x13:
    unaff_x20 = (ulong *******)param_5[1];
  case 0xf0:
    pppppppuStack_338 = (ulong *******)unaff_x20[1];
    ppppppuStack_340 = *unaff_x20;
code_r0x00010047d038:
    pppppppuVar16 = unaff_x20;
    ppppppuStack_328 = pppppppuVar16[3];
    pppppppuStack_330 = (ulong *******)pppppppuVar16[2];
    func_0x000107c05458(param_4,&ppppppuStack_340);
    goto code_r0x00010047d05c;
  case 0x14:
    unaff_x23 = (ulong *******)param_5[1];
    unaff_x20 = (ulong *******)param_5[2];
    unaff_x26 = (ulong *******)param_5[3];
    unaff_x19 = unaff_x20 + (long)unaff_x26 * 4;
    pppppppuStack_160 = (ulong *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuStack_180 = unaff_x20;
    pppppppuStack_170 = unaff_x23;
    pppppppuStack_168 = unaff_x19;
    if (unaff_x26 != (ulong *******)0x0) {
      unaff_x21 = unaff_x20 + 4;
      bVar20 = *(byte *)unaff_x20;
      pppppppuStack_178 = unaff_x21;
      if (bVar20 != 0x16) goto code_r0x00010047d118;
    }
    pppppppuStack_178 = unaff_x21;
    unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f728,&UNK_10b20a590);
    goto code_r0x00010047d0c8;
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
    pppppppuStack_368 = (ulong *******)param_5[2];
    ppppppuVar17 = param_5[3];
    pppppppuStack_370 = pppppppuStack_368;
    ppppppuStack_360 = param_5[1];
    pppppppuStack_358 = pppppppuStack_368 + (long)ppppppuVar17 * 8;
    ppppppuStack_390._0_1_ = 0x16;
    pppppppuStack_350 = (ulong *******)0x0;
    if (ppppppuVar17 != (ulong ******)0x0) {
      pppppppuVar26 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_108 | 1);
      unaff_x19 = (ulong *******)((ulong)&ppppppuStack_390 | 1);
      puStack_398 = (undefined8 *)((ulong)&pppppppuStack_90 | 1);
      pppppppuStack_3c0 = (ulong *******)(((long)ppppppuVar17 * 0x40 - 0x40U >> 6) + 1);
      unaff_x21 = (ulong *******)0x8000000000000000;
      unaff_x22 = (ulong *******)0x8000000000000001;
      unaff_x23 = (ulong *******)0x8000000000000000;
      pppppppuVar16 = pppppppuStack_368 + (long)ppppppuVar17 * 8;
      pppppppuVar25 = pppppppuStack_368;
      pppppppuStack_3b8 = (ulong *******)param_4;
      do {
        unaff_x26 = pppppppuVar25;
        unaff_x25 = unaff_x26 + 8;
        pppppppuVar25 = (ulong *******)(ulong)*(byte *)unaff_x26;
code_r0x00010047ccb8:
        param_4 = (char *)pppppppuVar16;
        if ((int)pppppppuVar25 == 0x16) goto code_r0x00010047d1a8;
code_r0x00010047ccc0:
        uVar19 = (uint)pppppppuVar25;
        uStack_108._0_1_ = (byte)pppppppuVar25;
        ppppppuVar17 = unaff_x26[2];
        *(ulong *******)((long)unaff_x20 + 0x17) = unaff_x26[3];
        *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar17;
        ppppppuVar17 = *(ulong *******)((long)unaff_x26 + 1);
        unaff_x20[1] = *(ulong *******)((long)unaff_x26 + 9);
        *unaff_x20 = ppppppuVar17;
        ppppppuStack_378 = unaff_x26[7];
        uStack_388 = SUB81(unaff_x26[5],0);
        uStack_387 = (undefined7)((ulong)unaff_x26[5] >> 8);
        ppppppuStack_390._0_1_ = (byte)unaff_x26[4];
        ppppppuStack_390._1_7_ = (undefined7)((ulong)unaff_x26[4] >> 8);
        uStack_380 = SUB81(unaff_x26[6],0);
        uStack_37f = (undefined7)((ulong)unaff_x26[6] >> 8);
        pppppppuVar21 = (ulong *******)CONCAT71(uStack_ff,uStack_100);
        piVar2 = (int *)CONCAT71(uStack_f7,uStack_f8);
        if (uVar19 < 0xd) {
          if (uVar19 == 1) {
            uVar24 = 1;
            if (uStack_108._1_1_ != '\x01') {
              uVar24 = 2;
            }
            uVar19 = 0;
            if (uStack_108._1_1_ != '\0') {
              uVar19 = uVar24;
            }
          }
          else {
            if (uVar19 != 4) {
              if (uVar19 == 0xc) {
                if (ppppppuStack_f0 == (ulong ******)0x6) {
                  uVar19 = 1;
                  if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
                    uVar19 = 2;
                  }
                }
                else if (ppppppuStack_f0 == (ulong ******)0x2) {
                  uVar19 = 2;
                  if ((short)*piVar2 == 0x6469) {
                    uVar19 = 0;
                  }
                }
                else {
                  uVar19 = 2;
                }
                goto joined_r0x00010047ce88;
              }
code_r0x00010047d744:
              pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + 1);
              goto code_r0x00010047d748;
            }
            uVar24 = 1;
            if (pppppppuVar21 != (ulong *******)0x1) {
              uVar24 = 2;
            }
            uVar19 = 0;
            if (pppppppuVar21 != (ulong *******)0x0) {
              uVar19 = uVar24;
            }
          }
code_r0x00010047cf14:
          FUN_100e077ec(&uStack_108);
        }
        else {
          if (uVar19 == 0xd) {
            if (piVar2 == (int *)0x6) {
              pppppppuVar25 = (ulong *******)(ulong)*(uint *)pppppppuVar21;
              ppppppuVar17 = (ulong ******)0x6170;
code_r0x00010047cef0:
              pppppppuVar25 =
                   (ulong *******)
                   (ulong)((uint)pppppppuVar25 ^ ((uint)ppppppuVar17 & 0xffff | 0x61720000));
              pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)pppppppuVar21 + 4);
code_r0x00010047cefc:
              uVar19 = 1;
              if ((int)pppppppuVar25 != 0 || (int)pppppppuVar21 != 0x736d) {
                uVar19 = 2;
              }
            }
            else {
              if (piVar2 != (int *)0x2) goto code_r0x00010047cee0;
              uVar19 = 2;
              if (*(short *)pppppppuVar21 == 0x6469) {
                uVar19 = 0;
              }
            }
            goto code_r0x00010047cf14;
          }
          if (uVar19 != 0xe) {
            if (uVar19 != 0xf) goto code_r0x00010047d744;
            if (piVar2 == (int *)0x6) {
              if (((*(char *)pppppppuVar21 == 'p') && (*(char *)((long)pppppppuVar21 + 1) == 'a'))
                 && (*(char *)((long)pppppppuVar21 + 2) == 'r')) {
                pppppppuVar25 = (ulong *******)(ulong)*(byte *)((long)pppppppuVar21 + 3);
code_r0x00010047ceb8:
                if ((((int)pppppppuVar25 == 0x61) && (*(char *)((long)pppppppuVar21 + 4) == 'm')) &&
                   (*(char *)((long)pppppppuVar21 + 5) == 's')) {
                  uVar19 = 1;
                  goto code_r0x00010047cf14;
                }
              }
            }
            else if (((piVar2 == (int *)0x2) && (*(char *)pppppppuVar21 == 'i')) &&
                    (*(char *)((long)pppppppuVar21 + 1) == 'd')) {
              uVar19 = 0;
              goto code_r0x00010047cf14;
            }
code_r0x00010047cee0:
            uVar19 = 2;
            goto code_r0x00010047cf14;
          }
          if (ppppppuStack_f0 == (ulong ******)0x6) {
            if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                 (*(char *)((long)piVar2 + 2) != 'r')) ||
                ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
               (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x00010047ce50;
            uVar19 = 1;
          }
          else if (((ppppppuStack_f0 == (ulong ******)0x2) && ((char)*piVar2 == 'i')) &&
                  (*(char *)((long)piVar2 + 1) == 'd')) {
            uVar19 = 0;
          }
          else {
code_r0x00010047ce50:
            uVar19 = 2;
          }
joined_r0x00010047ce88:
          if (pppppppuVar21 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar20 = (byte)ppppppuStack_390;
        pppppppuVar21 = (ulong *******)(ulong)uVar19;
        if (uVar19 == 0) {
          if (unaff_x22 != (ulong *******)0x8000000000000001) goto code_r0x00010047d64c;
          ppppppuStack_390._0_1_ = 0x16;
          if (bVar20 == 0x16) {
            pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + 1);
            goto code_r0x00010047d6d8;
          }
          ppppppuVar17 = *unaff_x19;
          unaff_x20[1] = unaff_x19[1];
          *unaff_x20 = ppppppuVar17;
          uVar23 = *(undefined8 *)((long)unaff_x19 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
          uStack_108._0_1_ = bVar20;
          param_4 = (char *)&pppppppuStack_90;
          param_5 = (ulong *******)&uStack_108;
code_r0x00010047cfd8:
          func_0x00010135ba2c(param_4,param_5);
          unaff_x22 = pppppppuStack_90;
          if (pppppppuStack_90 == (ulong *******)0x8000000000000001) goto code_r0x00010047d39c;
code_r0x00010047cfec:
          ppppppuStack_3b0 = ppppppuStack_80;
          pppppppuStack_3a8 = pppppppuStack_88;
code_r0x00010047cff4:
          pppppppuVar25 = unaff_x25;
          unaff_x25 = pppppppuVar16;
        }
        else {
code_r0x00010047cf34:
          bVar20 = (byte)ppppppuStack_390;
          if ((int)pppppppuVar21 == 1) {
            if (unaff_x21 != (ulong *******)0x8000000000000000) goto code_r0x00010047d5ec;
            ppppppuStack_390._0_1_ = 0x16;
            if (bVar20 == 0x16) {
              pppppppuStack_350 = (ulong *******)((long)pppppppuVar26 + 1);
              pppppppuStack_368 = unaff_x25;
              goto code_r0x00010047d718;
            }
            ppppppuVar17 = *unaff_x19;
            puStack_398[1] = unaff_x19[1];
            *puStack_398 = ppppppuVar17;
            uVar23 = *(undefined8 *)((long)unaff_x19 + 0xf);
            *(undefined8 *)((long)puStack_398 + 0x17) = *(undefined8 *)((long)unaff_x19 + 0x17);
            *(undefined8 *)((long)puStack_398 + 0xf) = uVar23;
            pppppppuStack_90 = (ulong *******)CONCAT71(pppppppuStack_90._1_7_,bVar20);
            func_0x0001012ed038(&uStack_108,&pppppppuStack_90);
            unaff_x23 = (ulong *******)
                        CONCAT62(uStack_108._2_6_,CONCAT11(uStack_108._1_1_,(byte)uStack_108));
            if (unaff_x23 == (ulong *******)0x8000000000000000) goto code_r0x00010047d344;
            pppppppuStack_3a0 = (ulong *******)CONCAT71(uStack_ff,uStack_100);
            ppppppuVar17 = (ulong ******)&uStack_108;
            pppppppuVar25 = (ulong *******)&pppppppuStack_180;
            pppppppuVar28 = pppppppuStack_b8;
            ppppppuVar18 = ppppppuStack_b0;
            ppppppuVar29 = ppppppuStack_a8;
            ppppppuVar30 = ppppppuStack_a0;
code_r0x00010047cc74:
            pppppppuVar25[0xb] = ppppppuVar18;
            pppppppuVar25[10] = (ulong ******)pppppppuVar28;
            pppppppuVar25[0xd] = ppppppuVar30;
            pppppppuVar25[0xc] = ppppppuVar29;
            pppppppuVar21 = (ulong *******)ppppppuVar17[0xe];
code_r0x00010047cc7c:
            unaff_x21 = unaff_x23;
            pppppppuVar25[0xe] = (ulong ******)pppppppuVar21;
            ppppppuVar18 = (ulong ******)ppppppuVar17[2];
            ppppppuVar30 = (ulong ******)ppppppuVar17[5];
            ppppppuVar29 = (ulong ******)ppppppuVar17[4];
            pppppppuVar25[3] = (ulong ******)ppppppuVar17[3];
            pppppppuVar25[2] = ppppppuVar18;
            pppppppuVar25[5] = ppppppuVar30;
            pppppppuVar25[4] = ppppppuVar29;
            ppppppuVar30 = (ulong ******)ppppppuVar17[6];
            ppppppuVar29 = (ulong ******)ppppppuVar17[9];
            ppppppuVar18 = (ulong ******)ppppppuVar17[8];
            pppppppuVar25[7] = (ulong ******)ppppppuVar17[7];
            pppppppuVar25[6] = ppppppuVar30;
            pppppppuVar25[9] = ppppppuVar29;
            pppppppuVar25[8] = ppppppuVar18;
            unaff_x23 = unaff_x21;
            pppppppuVar25 = unaff_x25;
            unaff_x25 = pppppppuVar16;
          }
          else {
            ppppppuStack_390._0_1_ = 0x16;
            if (bVar20 == 0x16) goto code_r0x00010047d6a0;
            ppppppuVar17 = *unaff_x19;
            unaff_x20[1] = unaff_x19[1];
            *unaff_x20 = ppppppuVar17;
            ppppppuVar18 = *(ulong *******)((long)unaff_x19 + 0x17);
            pppppppuVar28 = *(ulong ********)((long)unaff_x19 + 0xf);
code_r0x00010047d018:
            *(ulong *******)((long)unaff_x20 + 0x17) = ppppppuVar18;
            *(ulong ********)((long)unaff_x20 + 0xf) = pppppppuVar28;
code_r0x00010047d01c:
            uStack_108._0_1_ = bVar20;
code_r0x00010047d020:
            FUN_100e077ec(&uStack_108);
            pppppppuVar25 = unaff_x25;
            unaff_x25 = pppppppuVar16;
          }
        }
        pppppppuVar22 = unaff_x26 + 8;
        pppppppuVar26 = (ulong *******)((long)pppppppuVar26 + 1);
        pppppppuVar16 = unaff_x25;
        unaff_x26 = unaff_x25;
      } while (pppppppuVar22 != unaff_x25);
      goto code_r0x00010047d1b4;
    }
    unaff_x21 = (ulong *******)0x8000000000000000;
    pppppppuStack_180 = (ulong *******)0x8000000000000000;
    goto code_r0x00010047d1e0;
  case 0x29:
  case 0xae:
    goto code_r0x00010047d01c;
  case 0x2a:
    goto code_r0x00010047d060;
  case 0x2c:
    goto code_r0x00010047d6c8;
  case 0x2d:
code_r0x00010047d6d8:
    pppppppuStack_178 = pppppppuStack_3a0;
    pppppppuStack_368 = unaff_x25;
    pppppppuStack_350 = pppppppuVar21;
  case 0x31:
    pppppppuStack_180 = unaff_x23;
code_r0x00010047d6f0:
    param_4 = &UNK_108ca1a98;
    param_6 = &UNK_10b24f848;
code_r0x00010047d700:
    FUN_107c05cac(param_4,0x2c,param_6);
code_r0x00010047d708:
    goto code_r0x00010047d740;
  case 0x2e:
code_r0x00010047d6a0:
    pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + 1);
    pppppppuStack_368 = unaff_x25;
  case 0x3b:
    pppppppuStack_178 = pppppppuStack_3a0;
    pppppppuStack_350 = pppppppuVar21;
    pppppppuStack_180 = unaff_x23;
code_r0x00010047d6b8:
    param_4 = &UNK_108ca1a98;
code_r0x00010047d6c0:
    param_6 = &UNK_10b24f848;
code_r0x00010047d6c8:
    FUN_107c05cac(param_4,0x2c,param_6);
code_r0x00010047d740:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10047d744);
    (*pcVar3)();
  case 0x2f:
    goto code_r0x00010047d6b8;
  case 0x30:
  case 0xce:
    goto code_r0x00010047d664;
  case 0x32:
    goto code_r0x00010047d700;
  case 0x33:
    goto code_r0x00010047d6c0;
  case 0x34:
code_r0x00010047d718:
    pppppppuStack_178 = pppppppuStack_3a0;
    pppppppuStack_180 = unaff_x23;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x00010047d740;
  case 0x35:
  case 0xd8:
    goto code_r0x00010047d694;
  case 0x36:
    goto code_r0x00010047d708;
  case 0x37:
  case 0xd3:
    goto code_r0x00010047d63c;
  case 0x38:
    goto code_r0x00010047d66c;
  case 0x39:
    goto code_r0x00010047d6f0;
  case 0x3a:
  case 0xc6:
    goto code_r0x00010047d614;
  case 0x3c:
  case 0xcd:
    goto code_r0x00010047d60c;
  case 0x3e:
code_r0x00010047d748:
    unaff_x20 = pppppppuStack_3a8;
    pppppppuStack_178 = pppppppuStack_3a0;
    pppppppuStack_368 = unaff_x25;
    pppppppuStack_350 = pppppppuVar21;
    pppppppuStack_180 = unaff_x23;
    param_4 = (char *)thunk_FUN_108855b04(&uStack_108,&pppppppuStack_90,&UNK_10b210e20);
    unaff_x19 = &ppppppuStack_390;
    pppppppuVar16 = pppppppuStack_3b8;
    goto code_r0x00010047d214;
  case 0x3f:
    goto code_r0x00010047cc7c;
  case 0x40:
    goto code_r0x00010047ccc0;
  case 0x42:
  case 0xfd:
    goto code_r0x00010047d364;
  case 0x43:
    goto code_r0x00010047d374;
  case 0x44:
    goto code_r0x00010047d33c;
  case 0x45:
    goto code_r0x00010047d354;
  case 0x46:
    goto code_r0x00010047d300;
  case 0x47:
    goto code_r0x00010047d384;
  case 0x48:
code_r0x00010047d39c:
    pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + 1);
    pppppppuStack_368 = unaff_x25;
  case 0x4c:
    pppppppuStack_178 = pppppppuStack_3a0;
    unaff_x20 = pppppppuStack_3a8;
    pppppppuStack_350 = pppppppuVar21;
code_r0x00010047d3b0:
    pppppppuStack_180 = unaff_x23;
code_r0x00010047d3b4:
    unaff_x22 = (ulong *******)0x8000000000000001;
    param_4 = (char *)pppppppuStack_88;
code_r0x00010047d3bc:
    pppppppuVar16 = pppppppuStack_3b8;
code_r0x00010047d3c0:
    unaff_x19 = &ppppppuStack_390;
code_r0x00010047d3c4:
    pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047d3c8:
    pppppppuVar21 = (ulong *******)((ulong)pppppppuVar21 | 0x8000000000000000);
code_r0x00010047d3cc:
    *pppppppuVar16 = (ulong ******)pppppppuVar21;
    pppppppuVar16[1] = (ulong ******)param_4;
    pppppppuVar21 = (ulong *******)0x8000000000000000;
code_r0x00010047d3d4:
    if (unaff_x21 != pppppppuVar21) {
code_r0x00010047d3dc:
      goto LAB_10047d22c;
    }
    goto LAB_10047d234;
  case 0x49:
    goto code_r0x00010047d35c;
  case 0x4a:
    goto code_r0x00010047d3b4;
  case 0x4b:
  case 0xea:
    goto code_r0x00010047d330;
  case 0x4d:
    goto code_r0x00010047d2d8;
  case 0x4e:
    goto code_r0x00010047d308;
  case 0x4f:
  case 0xf6:
    goto code_r0x00010047d38c;
  case 0x50:
    goto code_r0x00010047d2b0;
  case 0x51:
code_r0x00010047d344:
    pppppppuVar22 = (ulong *******)((long)pppppppuVar26 + 1);
  case 0x9a:
    pppppppuVar21 = (ulong *******)CONCAT71(uStack_ff,uStack_100);
    pppppppuStack_368 = unaff_x25;
    pppppppuStack_350 = pppppppuVar22;
code_r0x00010047d354:
    pppppppuVar25 = (ulong *******)0x6e;
code_r0x00010047d358:
    pppppppuVar25 = (ulong *******)((ulong)pppppppuVar25 | 0x8000000000000000);
code_r0x00010047d35c:
    *pppppppuStack_3b8 = (ulong ******)pppppppuVar25;
    pppppppuStack_3b8[1] = (ulong ******)pppppppuVar21;
code_r0x00010047d364:
    unaff_x20 = pppppppuStack_3a8;
code_r0x00010047d368:
    unaff_x19 = &ppppppuStack_390;
    pppppppuVar21 = (ulong *******)0x2;
code_r0x00010047d370:
    pppppppuVar21 = (ulong *******)((ulong)pppppppuVar21 | 0x8000000000000000);
code_r0x00010047d374:
    if ((long)pppppppuVar21 <= (long)unaff_x22) goto code_r0x00010047d244;
    goto LAB_10047d37c;
  case 0x52:
    goto code_r0x00010047d2a8;
  case 0x55:
    goto code_r0x00010047d020;
  case 0x56:
    goto code_r0x00010047d064;
  case 0x58:
    goto code_r0x00010047d1a4;
  case 0x59:
  case 0x86:
code_r0x00010047d1b4:
    pppppppuVar26 = pppppppuStack_3c0;
    goto code_r0x00010047d1b8;
  case 0x5a:
    goto code_r0x00010047d17c;
  case 0x5b:
    goto code_r0x00010047d194;
  case 0x5c:
    goto code_r0x00010047d140;
  case 0x5d:
    goto code_r0x00010047d1c4;
  case 0x5e:
  case 0x84:
    goto code_r0x00010047d1dc;
  case 0x5f:
    goto code_r0x00010047d19c;
  case 0x60:
    goto code_r0x00010047d1f4;
  case 0x61:
    goto code_r0x00010047d170;
  case 0x62:
    goto code_r0x00010047d1e4;
  case 99:
code_r0x00010047d118:
    uVar23 = *(undefined8 *)((long)unaff_x20 + 1);
    uStack_ff = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
    uStack_108._1_1_ = (char)uVar23;
    uStack_108._2_6_ = (undefined6)((ulong)uVar23 >> 8);
    uStack_100 = (undefined1)((ulong)uVar23 >> 0x38);
  case 0x94:
    ppppppuStack_f0 = unaff_x20[3];
    uStack_f8 = SUB81(unaff_x20[2],0);
    uStack_f7 = (undefined7)((ulong)unaff_x20[2] >> 8);
code_r0x00010047d128:
    uStack_108._0_1_ = bVar20;
    pppppppuStack_160 = (ulong *******)0x1;
    func_0x00010135ba2c(&ppppppuStack_390,&uStack_108);
code_r0x00010047d140:
    unaff_x25 = (ulong *******)CONCAT71(ppppppuStack_390._1_7_,(byte)ppppppuStack_390);
    unaff_x22 = (ulong *******)CONCAT71(uStack_387,uStack_388);
    pppppppuVar21 = (ulong *******)0x8000000000000001;
code_r0x00010047d148:
    if (unaff_x25 == pppppppuVar21) {
code_r0x00010047d0c8:
      *(ulong *******)param_4 = (ulong ******)0x800000000000006e;
      *(ulong ********)((long)param_4 + 8) = unaff_x22;
      goto code_r0x00010047d0d4;
    }
code_r0x00010047d150:
    if (unaff_x26 == (ulong *******)0x1) {
code_r0x00010047d170:
      param_5 = (ulong *******)&UNK_10b22f728;
code_r0x00010047d178:
      param_6 = &UNK_10b20a000;
code_r0x00010047d17c:
      param_6 = param_6 + 0x590;
code_r0x00010047d180:
      pppppppuVar16 = (ulong *******)0x1;
code_r0x00010047d184:
      pppppppuVar16 = (ulong *******)thunk_FUN_1087e422c(pppppppuVar16,param_5,param_6);
    }
    else {
      unaff_x26 = (ulong *******)CONCAT71(uStack_37f,uStack_380);
      unaff_x21 = unaff_x20 + 8;
      pppppppuStack_178 = unaff_x21;
      if (*(byte *)(unaff_x20 + 4) == 0x16) goto code_r0x00010047d170;
      uStack_387 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      ppppppuStack_390._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
      uStack_388 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
      ppppppuStack_378 = unaff_x20[7];
      uStack_380 = SUB81(unaff_x20[6],0);
      uStack_37f = (undefined7)((ulong)unaff_x20[6] >> 8);
      pppppppuVar25 = (ulong *******)0x2;
      bVar20 = *(byte *)(unaff_x20 + 4);
code_r0x00010047d558:
      ppppppuStack_390._0_1_ = bVar20;
      pppppppuStack_160 = pppppppuVar25;
code_r0x00010047d560:
      func_0x0001012ed038(&uStack_108,&ppppppuStack_390);
      pppppppuVar21 =
           (ulong *******)CONCAT62(uStack_108._2_6_,CONCAT11(uStack_108._1_1_,(byte)uStack_108));
      pppppppuVar16 = (ulong *******)CONCAT71(uStack_ff,uStack_100);
      if (pppppppuVar21 != (ulong *******)0x8000000000000000) {
        *(ulong *******)((long)param_4 + 0x50) = ppppppuStack_c0;
        *(ulong *******)((long)param_4 + 0x48) = ppppppuStack_c8;
        pppppppuVar28 = pppppppuStack_b8;
        ppppppuVar18 = ppppppuStack_b0;
        ppppppuVar29 = ppppppuStack_d8;
        ppppppuVar30 = ppppppuStack_d0;
        ppppppuVar31 = ppppppuStack_a8;
        ppppppuVar32 = ppppppuStack_a0;
code_r0x00010047d588:
        *(ulong *******)((long)param_4 + 0x60) = ppppppuVar18;
        *(ulong ********)((long)param_4 + 0x58) = pppppppuVar28;
        *(ulong *******)((long)param_4 + 0x70) = ppppppuVar32;
        *(ulong *******)((long)param_4 + 0x68) = ppppppuVar31;
        *(ulong *******)((long)param_4 + 0x20) = ppppppuStack_f0;
        *(ulong *******)((long)param_4 + 0x18) = (ulong ******)CONCAT71(uStack_f7,uStack_f8);
        *(ulong *******)((long)param_4 + 0x30) = ppppppuStack_e0;
        *(ulong *******)((long)param_4 + 0x28) = ppppppuStack_e8;
        unaff_x19 = (ulong *******)0x800000000000006e;
        *(ulong *******)((long)param_4 + 0x40) = ppppppuVar30;
        *(ulong *******)((long)param_4 + 0x38) = ppppppuVar29;
        ppppppuVar17 = (ulong ******)0x8000000000000038;
        pppppppuVar25 = pppppppuStack_98;
code_r0x00010047d5b0:
        *(ulong *******)param_4 = ppppppuVar17;
        *(ulong ********)((long)param_4 + 8) = pppppppuVar21;
        *(ulong ********)((long)param_4 + 0x10) = pppppppuVar16;
code_r0x00010047d5b8:
        *(ulong ********)((long)param_4 + 0x78) = pppppppuVar25;
        *(ulong ********)((long)param_4 + 0x80) = unaff_x25;
        *(ulong ********)((long)param_4 + 0x88) = unaff_x22;
        *(ulong ********)((long)param_4 + 0x90) = unaff_x26;
        _memcpy(&ppppppuStack_340,param_4,0x1c0);
        pppppppuVar25 = (ulong *******)FUN_100fbc738(&pppppppuStack_180);
        if (pppppppuVar25 == (ulong *******)0x0) {
          return;
        }
code_r0x00010047d5dc:
        *(ulong ********)param_4 = unaff_x19;
        *(ulong ********)((long)param_4 + 8) = pppppppuVar25;
code_r0x00010047d5e0:
        FUN_100e44f40(&ppppppuStack_340);
        return;
      }
    }
    *(ulong *******)param_4 = (ulong ******)0x800000000000006e;
    *(ulong ********)((long)param_4 + 8) = pppppppuVar16;
code_r0x00010047d194:
    if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
code_r0x00010047d19c:
      _free(unaff_x22);
code_r0x00010047d1a4:
    }
code_r0x00010047d0d4:
    pppppppuVar26 = (ulong *******)(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1);
    while (pppppppuVar26 = (ulong *******)((long)pppppppuVar26 + -1),
          pppppppuVar26 != (ulong *******)0x0) {
code_r0x00010047d0e8:
      param_4 = (char *)unaff_x21;
      unaff_x22 = (ulong *******)((long)param_4 + 0x20);
code_r0x00010047d0f0:
      unaff_x21 = unaff_x22;
      FUN_100e077ec(param_4);
    }
    if (unaff_x23 == (ulong *******)0x0) {
      return;
    }
    _free(unaff_x20);
    return;
  case 100:
    goto code_r0x00010047d148;
  case 0x65:
  case 0x87:
    goto code_r0x00010047d1cc;
  case 0x66:
    goto code_r0x00010047d0f0;
  case 0x67:
    goto code_r0x00010047d184;
  case 0x68:
    goto code_r0x00010047d0e8;
  case 0x6a:
    goto code_r0x00010047d240;
  case 0x6b:
    goto code_r0x00010047ceb8;
  case 0x6c:
    goto code_r0x00010047cefc;
  case 0x6e:
  case 0xdd:
    goto code_r0x00010047d3f4;
  case 0x6f:
  case 0xe1:
    goto code_r0x00010047d404;
  case 0x70:
    goto code_r0x00010047d3cc;
  case 0x72:
    goto code_r0x00010047d390;
  case 0x74:
    goto code_r0x00010047d42c;
  case 0x77:
    goto code_r0x00010047d3c0;
  case 0x78:
  case 0xe4:
    goto code_r0x00010047d434;
  case 0x79:
  case 0x9f:
    goto code_r0x00010047d368;
  case 0x7a:
  case 0xa2:
    goto code_r0x00010047d398;
  case 0x7b:
  case 0xbc:
  case 0xe2:
    goto code_r0x00010047d41c;
  case 0x7c:
  case 0xa1:
    goto code_r0x00010047d340;
  case 0x7d:
  case 0xdf:
    goto code_r0x00010047d3d4;
  case 0x7e:
  case 0x9d:
    goto code_r0x00010047d338;
  case 0x81:
    goto code_r0x00010047cff4;
  case 0x82:
    goto code_r0x00010047d038;
  case 0x85:
    goto code_r0x00010047d1ec;
  case 0x88:
    goto code_r0x00010047d178;
  case 0x89:
    goto code_r0x00010047d1fc;
  case 0x8a:
    goto code_r0x00010047d214;
  case 0x8b:
    goto code_r0x00010047d1d4;
  case 0x8c:
    goto LAB_10047d22c;
  case 0x8d:
code_r0x00010047d1a8:
    unaff_x26 = (ulong *******)param_4;
code_r0x00010047d1b8:
    pppppppuStack_368 = unaff_x25;
code_r0x00010047d1bc:
    pppppppuStack_350 = pppppppuVar26;
    pppppppuVar21 = pppppppuStack_3a0;
    unaff_x20 = pppppppuStack_3a8;
code_r0x00010047d1c4:
    pppppppuStack_178 = pppppppuVar21;
    pppppppuStack_180 = unaff_x23;
code_r0x00010047d1cc:
    in_ZR = unaff_x22 == (ulong *******)0x8000000000000001;
code_r0x00010047d1d4:
    param_4 = (char *)pppppppuStack_3b8;
    if ((bool)in_ZR) {
code_r0x00010047d1dc:
code_r0x00010047d1e0:
      unaff_x19 = &ppppppuStack_390;
      pppppppuVar21 = (ulong *******)&UNK_108ca2000;
code_r0x00010047d1e4:
      pppppppuVar22 = pppppppuVar21 + 0xd6;
      pppppppuVar25 = (ulong *******)0x2;
code_r0x00010047d1ec:
      pppppppuVar21 = (ulong *******)&pppppppuStack_90;
      pppppppuStack_90 = pppppppuVar22;
      pppppppuStack_88 = pppppppuVar25;
code_r0x00010047d1f4:
      pppppppuVar25 = (ulong *******)&DAT_100c7b3a0;
code_r0x00010047d1fc:
      uStack_108._0_1_ = (byte)pppppppuVar21;
      uStack_108._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
      uStack_108._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
      uStack_100 = SUB81(pppppppuVar25,0);
      uStack_ff = (undefined7)((ulong)pppppppuVar25 >> 8);
      unaff_x22 = (ulong *******)0x8000000000000001;
      pppppppuVar16 = (ulong *******)param_4;
FUN_10047d204:
      param_4 = (char *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_108);
      goto code_r0x00010047d214;
    }
    if (unaff_x21 == (ulong *******)0x8000000000000000) {
      pppppppuStack_90 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_88 = (ulong *******)0x6;
      pppppppuVar21 = (ulong *******)&pppppppuStack_90;
      pppppppuVar25 = (ulong *******)&UNK_100c7b000;
      pppppppuVar16 = pppppppuStack_3b8;
code_r0x00010047d278:
      uStack_108._0_1_ = (byte)pppppppuVar21;
      uStack_108._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
      uStack_108._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
      uStack_100 = SUB81(pppppppuVar25 + 0x74,0);
      uStack_ff = (undefined7)((ulong)(pppppppuVar25 + 0x74) >> 8);
      param_4 = s_missing_field_____108ac28f7;
      param_5 = (ulong *******)&uStack_108;
code_r0x00010047d28c:
      param_4 = (char *)thunk_FUN_108856088(param_4,param_5);
      pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047d294:
      *pppppppuVar16 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
      pppppppuVar16[1] = (ulong ******)param_4;
      unaff_x19 = &ppppppuStack_390;
      if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
code_r0x00010047d2a8:
        goto code_r0x00010047d248;
      }
      goto LAB_10047d37c;
    }
    pppppppuVar21 = (ulong *******)&pppppppuStack_180;
code_r0x00010047d2b0:
    ppppppuVar30 = pppppppuVar21[7];
    ppppppuVar29 = pppppppuVar21[6];
    ppppppuVar17 = pppppppuVar21[8];
    *(ulong *******)((long)param_4 + 0x50) = pppppppuVar21[9];
    *(ulong *******)((long)param_4 + 0x48) = ppppppuVar17;
    ppppppuVar18 = pppppppuVar21[0xb];
    pppppppuVar28 = (ulong *******)pppppppuVar21[10];
    ppppppuVar32 = pppppppuVar21[0xd];
    ppppppuVar31 = pppppppuVar21[0xc];
code_r0x00010047d2bc:
    *(ulong *******)((long)param_4 + 0x60) = ppppppuVar18;
    *(ulong ********)((long)param_4 + 0x58) = pppppppuVar28;
    *(ulong *******)((long)param_4 + 0x70) = ppppppuVar32;
    *(ulong *******)((long)param_4 + 0x68) = ppppppuVar31;
    ppppppuVar17 = pppppppuVar21[2];
    ppppppuVar31 = pppppppuVar21[5];
    ppppppuVar18 = pppppppuVar21[4];
    *(ulong *******)((long)param_4 + 0x20) = pppppppuVar21[3];
    *(ulong *******)((long)param_4 + 0x18) = ppppppuVar17;
    *(ulong *******)((long)param_4 + 0x30) = ppppppuVar31;
    *(ulong *******)((long)param_4 + 0x28) = ppppppuVar18;
    unaff_x19 = (ulong *******)0x800000000000006e;
code_r0x00010047d2d8:
    pppppppuVar21 = (ulong *******)pppppppuVar21[0xe];
    *(ulong *******)((long)param_4 + 0x40) = ppppppuVar30;
    *(ulong *******)((long)param_4 + 0x38) = ppppppuVar29;
    pppppppuVar25 = (ulong *******)((long)unaff_x19 + -0x36);
code_r0x00010047d2e4:
    *(ulong ********)param_4 = pppppppuVar25;
    *(ulong ********)((long)param_4 + 8) = unaff_x21;
    pppppppuVar25 = pppppppuStack_3a0;
    pppppppuVar16 = (ulong *******)param_4;
code_r0x00010047d2ec:
    pppppppuVar16[2] = (ulong ******)pppppppuVar25;
    pppppppuVar16[0xf] = (ulong ******)pppppppuVar21;
    pppppppuVar16[0x10] = (ulong ******)unaff_x22;
    pppppppuVar16[0x11] = (ulong ******)unaff_x20;
    pppppppuVar16[0x12] = ppppppuStack_3b0;
    param_4 = (char *)&ppppppuStack_340;
code_r0x00010047d300:
    param_5 = pppppppuVar16;
    param_6 = (undefined *)0x1c0;
    pppppppuVar16 = param_5;
code_r0x00010047d308:
    _memcpy(param_4,param_5,param_6);
    param_4 = (char *)&pppppppuStack_370;
code_r0x00010047d314:
    FUN_100d34830(param_4);
    if (unaff_x26 == unaff_x25) {
      return;
    }
code_r0x00010047d320:
    pppppppuVar21 = (ulong *******)((ulong)((long)unaff_x26 - (long)unaff_x25) >> 6);
code_r0x00010047d328:
    uStack_108._0_1_ = (byte)pppppppuVar26;
    uStack_108._1_1_ = (char)((ulong)pppppppuVar26 >> 8);
    uStack_108._2_6_ = (undefined6)((ulong)pppppppuVar26 >> 0x10);
    param_6 = &UNK_10b23a000;
code_r0x00010047d330:
    param_6 = param_6 + 400;
    param_4 = (char *)((long)pppppppuVar21 + (long)pppppppuVar26);
code_r0x00010047d338:
    param_5 = (ulong *******)&uStack_108;
code_r0x00010047d33c:
    param_4 = (char *)thunk_FUN_1087e422c(param_4,param_5,param_6);
code_r0x00010047d340:
    pppppppuVar25 = (ulong *******)param_4;
    param_4 = (char *)pppppppuVar16;
    goto code_r0x00010047d5dc;
  case 0x8e:
    goto code_r0x00010047d21c;
  case 0x8f:
    goto code_r0x00010047d150;
  case 0x90:
    goto code_r0x00010047d180;
  case 0x91:
    goto FUN_10047d204;
  case 0x92:
    goto code_r0x00010047d128;
  case 0x93:
    goto code_r0x00010047d1bc;
  case 0x96:
    goto code_r0x00010047d278;
  case 0x97:
    goto code_r0x00010047cef0;
  case 0x98:
    goto code_r0x00010047cf34;
  case 0x9b:
  case 0xe7:
    goto code_r0x00010047d358;
  case 0x9c:
    goto code_r0x00010047d320;
  case 0x9e:
    goto code_r0x00010047d2e4;
  case 0xa0:
  case 0xe0:
    goto code_r0x00010047d380;
  case 0xa3:
    goto code_r0x00010047d314;
  case 0xa4:
  case 0xe8:
    goto code_r0x00010047d388;
  case 0xa5:
    goto code_r0x00010047d2bc;
  case 0xa6:
    goto code_r0x00010047d2ec;
  case 0xa7:
    goto code_r0x00010047d370;
  case 0xa8:
    goto code_r0x00010047d294;
  case 0xa9:
  case 0xec:
    goto code_r0x00010047d328;
  case 0xaa:
    goto code_r0x00010047d28c;
  case 0xad:
    goto code_r0x00010047cfd8;
  case 0xb1:
    goto code_r0x00010047d488;
  case 0xb2:
    goto code_r0x00010047d450;
  case 0xb6:
    break;
  case 0xba:
    goto code_r0x00010047d4b8;
  case 0xbe:
  case 0xeb:
    goto code_r0x00010047d3c4;
  case 0xbf:
    goto code_r0x00010047d458;
  case 0xc0:
  case 0xde:
  case 0xfb:
    goto code_r0x00010047d3bc;
  case 0xc2:
    goto code_r0x00010047d518;
  case 0xc3:
    goto code_r0x00010047d018;
  case 0xc4:
    goto code_r0x00010047d05c;
  case 199:
    goto FUN_10047d624;
  case 200:
code_r0x00010047d5ec:
    pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + 1);
    pppppppuStack_368 = unaff_x25;
  case 0xd5:
    pppppppuStack_178 = pppppppuStack_3a0;
    unaff_x20 = pppppppuStack_3a8;
    pppppppuStack_350 = pppppppuVar21;
    pppppppuStack_180 = unaff_x23;
code_r0x00010047d604:
    pppppppuVar21 = (ulong *******)&UNK_108cb9606;
code_r0x00010047d60c:
    pppppppuStack_88 = (ulong *******)0x6;
    pppppppuStack_90 = pppppppuVar21;
code_r0x00010047d614:
    uStack_108._0_1_ = (byte)&pppppppuStack_90;
    uStack_108._1_1_ = (char)((ulong)&pppppppuStack_90 >> 8);
    uStack_108._2_6_ = (undefined6)((ulong)&pppppppuStack_90 >> 0x10);
    uStack_100 = 0xa0;
    uStack_ff = 0x100c7b3;
FUN_10047d624:
    param_4 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_108);
code_r0x00010047d634:
    unaff_x19 = &ppppppuStack_390;
    pppppppuVar25 = pppppppuStack_3b8;
code_r0x00010047d63c:
    *pppppppuVar25 = (ulong ******)0x800000000000006e;
    pppppppuVar25[1] = (ulong ******)param_4;
    goto LAB_10047d22c;
  case 0xc9:
    goto code_r0x00010047d604;
  case 0xca:
    goto code_r0x00010047d5b0;
  case 0xcb:
    goto code_r0x00010047d634;
  case 0xcc:
code_r0x00010047d64c:
    pppppppuVar21 = (ulong *******)((long)pppppppuVar26 + 1);
    pppppppuStack_368 = unaff_x25;
  case 0xd0:
    pppppppuStack_178 = pppppppuStack_3a0;
    unaff_x20 = pppppppuStack_3a8;
    pppppppuStack_350 = pppppppuVar21;
    pppppppuStack_180 = unaff_x23;
code_r0x00010047d664:
    pppppppuVar21 = (ulong *******)&UNK_108ca26b0;
code_r0x00010047d66c:
    pppppppuStack_88 = (ulong *******)0x2;
    uStack_108._0_1_ = (byte)&pppppppuStack_90;
    uStack_108._1_1_ = (char)((ulong)&pppppppuStack_90 >> 8);
    uStack_108._2_6_ = (undefined6)((ulong)&pppppppuStack_90 >> 0x10);
    uStack_100 = 0xa0;
    uStack_ff = 0x100c7b3;
    pppppppuStack_90 = pppppppuVar21;
    param_4 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_108);
code_r0x00010047d694:
    unaff_x19 = &ppppppuStack_390;
    pppppppuVar16 = pppppppuStack_3b8;
code_r0x00010047d214:
    pppppppuVar21 = (ulong *******)0x800000000000006e;
code_r0x00010047d21c:
    *pppppppuVar16 = (ulong ******)pppppppuVar21;
    pppppppuVar16[1] = (ulong ******)param_4;
    if (unaff_x21 != (ulong *******)0x8000000000000000) {
LAB_10047d22c:
      FUN_100e4f560(&pppppppuStack_180);
    }
LAB_10047d234:
    in_OV = SBORROW8((long)unaff_x22,-0x7ffffffffffffffe);
    in_NG = (long)((long)unaff_x22 + 0x7ffffffffffffffe) < 0;
code_r0x00010047d240:
    if (in_NG == in_OV) {
code_r0x00010047d244:
      if (unaff_x22 != (ulong *******)0x0) {
code_r0x00010047d248:
        _free(unaff_x20);
      }
    }
LAB_10047d37c:
    param_4 = (char *)(unaff_x19 + 4);
code_r0x00010047d380:
    FUN_100d34830(param_4);
code_r0x00010047d384:
    pppppppuVar21 = (ulong *******)(ulong)(byte)ppppppuStack_390;
code_r0x00010047d388:
    in_ZR = (int)pppppppuVar21 == 0x16;
code_r0x00010047d38c:
    if ((bool)in_ZR) {
      return;
    }
code_r0x00010047d390:
    param_4 = (char *)&ppppppuStack_390;
code_r0x00010047d394:
    FUN_100e077ec(param_4);
code_r0x00010047d398:
    return;
  case 0xcf:
    goto code_r0x00010047d5e0;
  case 0xd1:
    goto code_r0x00010047d588;
  case 0xd2:
    goto code_r0x00010047d5b8;
  case 0xd4:
    goto code_r0x00010047d560;
  case 0xd6:
    goto code_r0x00010047d558;
  case 0xd9:
    goto code_r0x00010047cc74;
  case 0xda:
    goto code_r0x00010047ccb8;
  case 0xe3:
    goto code_r0x00010047d3dc;
  case 0xe5:
    goto code_r0x00010047d3b0;
  case 0xe6:
    goto code_r0x00010047d424;
  case 0xe9:
    goto code_r0x00010047d40c;
  case 0xef:
    goto code_r0x00010047cfec;
  case 0xf2:
    goto code_r0x00010047d3f0;
  case 0xf3:
    goto code_r0x00010047d400;
  case 0xf4:
    goto code_r0x00010047d3c8;
  case 0xf8:
    goto code_r0x00010047d428;
  case 0xfc:
    goto code_r0x00010047d430;
  case 0xfe:
    goto code_r0x00010047d394;
  case 0xff:
    goto code_r0x00010047d418;
  }
  bVar20 = 1;
  pppppppuStack_338 = pppppppuVar21;
code_r0x00010047d4b8:
code_r0x00010047d4f8:
  ppppppuStack_340 = (ulong ******)CONCAT71(ppppppuStack_340._1_7_,bVar20);
code_r0x00010047d4fc:
  pppppppuVar16 = (ulong *******)FUN_107c05dcc(&ppppppuStack_340,&pppppppuStack_90,&UNK_10b21c6f0);
  pppppppuVar21 = (ulong *******)0x800000000000006e;
code_r0x00010047d518:
  *(ulong ********)param_4 = pppppppuVar21;
  *(ulong ********)((long)param_4 + 8) = pppppppuVar16;
  return;
code_r0x00010047d05c:
code_r0x00010047d060:
code_r0x00010047d064:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(pppppppuVar16);
  return;
}

