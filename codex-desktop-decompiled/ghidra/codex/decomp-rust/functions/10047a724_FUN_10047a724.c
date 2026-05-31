
/* WARNING: Type propagation algorithm not settling */

void FUN_10047a724(undefined1 param_1 [16],undefined1 param_2 [16],ulong *******param_3,
                  ulong *******param_4,undefined *param_5)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
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
  ulong *******pppppppuVar26;
  ulong *******unaff_x19;
  ulong *******unaff_x20;
  ulong *******unaff_x21;
  ulong *******unaff_x22;
  ulong *******unaff_x23;
  ulong *******unaff_x24;
  ulong *******unaff_x25;
  ulong *******pppppppuVar27;
  ulong *******unaff_x26;
  undefined8 *unaff_x27;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined8 unaff_x30;
  ulong *******pppppppuVar29;
  ulong ******ppppppuVar30;
  byte abStack_5e0 [80];
  ulong *******pppppppuStack_590;
  ulong *******pppppppuStack_588;
  ulong ******ppppppuStack_580;
  ulong *******pppppppuStack_578;
  ulong *******pppppppuStack_570;
  undefined8 *puStack_568;
  ulong ******ppppppuStack_560;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined7 uStack_54f;
  ulong ******ppppppuStack_548;
  ulong *******pppppppuStack_540;
  ulong *******pppppppuStack_538;
  ulong ******ppppppuStack_530;
  ulong *******pppppppuStack_528;
  ulong *******pppppppuStack_520;
  ulong ******ppppppuStack_510;
  ulong *******pppppppuStack_508;
  ulong *******pppppppuStack_500;
  ulong ******ppppppuStack_4f8;
  ulong *******pppppppuStack_348;
  ulong *******pppppppuStack_340;
  ulong *******pppppppuStack_338;
  ulong *******pppppppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  ulong ******ppppppuStack_1d8;
  ulong ******ppppppuStack_1d0;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar11;
  
  ppppppuVar30 = param_2._8_8_;
  ppppppuVar18 = param_2._0_8_;
  ppppppuVar17 = param_1._8_8_;
  pppppppuVar29 = param_1._0_8_;
  puVar28 = &stack0xfffffffffffffff0;
  pppppppuVar10 = (ulong *******)&pppppppuStack_590;
  pppppppuVar15 = (ulong *******)&pppppppuStack_590;
  pppppppuVar7 = (ulong *******)&pppppppuStack_590;
  pppppppuStack_590 = (ulong *******)0x0;
  bVar20 = *(byte *)param_4;
  pppppppuVar21 = (ulong *******)(ulong)bVar20;
  pppppppuVar25 = (ulong *******)&UNK_108c99876;
  pppppppuVar12 = (ulong *******)&pppppppuStack_590;
  pppppppuVar13 = (ulong *******)&pppppppuStack_590;
  pppppppuVar14 = (ulong *******)&pppppppuStack_590;
  pppppppuVar9 = (ulong *******)&pppppppuStack_590;
  pppppppuVar11 = (ulong *******)&pppppppuStack_590;
  pppppppuVar4 = (ulong *******)&pppppppuStack_590;
  pppppppuVar5 = (ulong *******)&pppppppuStack_590;
  pppppppuVar6 = (ulong *******)&pppppppuStack_590;
  pppppppuVar8 = (ulong *******)&pppppppuStack_590;
  pppppppuVar16 = param_3;
  pppppppuVar22 = pppppppuVar21;
  pppppppuVar26 =
       (ulong *******)
       (&UNK_10047a768 + (ulong)*(ushort *)(&UNK_108c99876 + (long)pppppppuVar21 * 2) * 4);
  pppppppuVar27 = unaff_x25;
  switch(bVar20) {
  case 0:
  case 0xf2:
    bVar20 = *(byte *)((long)param_4 + 1);
  case 0x51:
  case 0x67:
    ppppppuStack_510 = (ulong ******)((ulong)CONCAT61(ppppppuStack_510._2_6_,bVar20) << 8);
code_r0x00010047b01c:
    goto code_r0x00010047b070;
  case 1:
  case 0xf3:
    pppppppuVar21 = (ulong *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0x45:
  case 0x5b:
code_r0x00010047b024:
    bVar20 = 1;
    pppppppuStack_508 = pppppppuVar21;
code_r0x00010047b02c:
    break;
  case 2:
  case 0xf4:
    pppppppuVar21 = (ulong *******)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x00010047b024;
  case 3:
  case 0x4b:
  case 0x61:
  case 0xf5:
    pppppppuVar21 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x00010047b024;
  case 4:
  case 0xb5:
  case 0xf6:
    pppppppuVar21 = (ulong *******)param_4[1];
    goto code_r0x00010047b024;
  case 5:
  case 0xf7:
    pppppppuVar21 = (ulong *******)(long)*(char *)((long)param_4 + 1);
  case 0x42:
  case 0x58:
    goto code_r0x00010047b064;
  case 6:
  case 0xf8:
    pppppppuVar21 = (ulong *******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x00010047b064;
  case 7:
  case 0xf9:
    pppppppuVar21 = (ulong *******)(long)(int)*(uint *)((long)param_4 + 4);
  case 0x44:
  case 0x5a:
code_r0x00010047b064:
    bVar20 = 2;
    pppppppuStack_508 = pppppppuVar21;
    break;
  case 8:
  case 0xfa:
    pppppppuVar21 = (ulong *******)param_4[1];
    goto code_r0x00010047b064;
  case 9:
  case 0xb8:
  case 0xfb:
    pppppppuVar29 = (ulong *******)(double)*(float *)((long)param_4 + 4);
  case 0x47:
  case 0x5d:
code_r0x00010047b054:
    bVar20 = 3;
    pppppppuStack_508 = pppppppuVar29;
code_r0x00010047b05c:
    break;
  case 10:
  case 0xfc:
    pppppppuVar29 = (ulong *******)param_4[1];
    goto code_r0x00010047b054;
  case 0xb:
  case 0xb7:
  case 0xfd:
    param_4 = (ulong *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0x17:
  case 0xb0:
    pppppppuVar9 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
code_r0x00010047af9c:
    pppppppuVar11 = pppppppuVar9;
code_r0x00010047afa4:
    pppppppuVar10 = (ulong *******)((long)pppppppuVar11 + 0x60);
code_r0x00010047afa8:
    *(ulong ********)((long)pppppppuVar10 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar10 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar10 + -0x10) = puVar28;
    *(undefined8 *)((long)pppppppuVar10 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppuVar10 + -0x44) = 0;
    uVar19 = (uint)param_4;
    if (uVar19 < 0x80) {
      *(byte *)((long)pppppppuVar10 + -0x44) = (byte)param_4;
      uVar23 = 1;
    }
    else {
      bVar20 = (byte)param_4 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        *(byte *)((long)pppppppuVar10 + -0x44) = (byte)(uVar19 >> 6) | 0xc0;
        *(byte *)((long)pppppppuVar10 + -0x43) = bVar20;
        uVar23 = 2;
      }
      else {
        bVar1 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          *(byte *)((long)pppppppuVar10 + -0x44) = (byte)(uVar19 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppuVar10 + -0x43) = bVar1;
          *(byte *)((long)pppppppuVar10 + -0x42) = bVar20;
          uVar23 = 3;
        }
        else {
          *(byte *)((long)pppppppuVar10 + -0x44) = (byte)(uVar19 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppuVar10 + -0x43) = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppuVar10 + -0x42) = bVar1;
          *(byte *)((long)pppppppuVar10 + -0x41) = bVar20;
          uVar23 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppuVar10 + -0x38) = (undefined1 *)((long)pppppppuVar10 + -0x44);
    *(undefined8 *)((long)pppppppuVar10 + -0x30) = uVar23;
    *(undefined1 *)((long)pppppppuVar10 + -0x40) = 5;
    ppppppuVar17 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar10 + -0x40),
                                       (undefined1 *)((long)pppppppuVar10 + -0x21),&UNK_10b2197d0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar17;
    return;
  case 0xc:
  case 0x1c:
  case 0xbd:
  case 0xfe:
    param_4 = param_4 + 1;
  case 0x20:
    pppppppuVar12 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
code_r0x00010047afc4:
    unaff_x20 = *(ulong ********)((long)pppppppuVar12 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar12 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar12 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar12 + 0x38);
    pppppppuVar13 = pppppppuVar12;
code_r0x00010047afcc:
    pppppppuVar14 = pppppppuVar13;
code_r0x00010047afd0:
    pppppppuVar15 = (ulong *******)((long)pppppppuVar14 + 0x60);
code_r0x00010047afd8:
    *(ulong ********)((long)pppppppuVar15 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar15 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar15 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar15 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar15 + -0x10) = puVar28;
    *(undefined8 *)((long)pppppppuVar15 + -8) = unaff_x30;
    ppppppuVar17 = param_4[1];
    ppppppuVar18 = param_4[2];
    *(ulong *******)((long)pppppppuVar15 + -0x48) = ppppppuVar17;
    *(ulong *******)((long)pppppppuVar15 + -0x40) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar15 + -0x50) = 5;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar15 + -0x50),
                                       (undefined1 *)((long)pppppppuVar15 + -0x31),&UNK_10b2197d0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar18;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xd:
  case 0xff:
    pppppppuStack_508 = (ulong *******)param_4[1];
    pppppppuStack_500 = (ulong *******)param_4[2];
    bVar20 = 5;
  case 0x43:
  case 0x59:
    break;
  case 0xe:
  case 0x25:
  case 0x32:
    param_4 = param_4 + 1;
  case 0x36:
  case 0xb2:
    pppppppuVar4 = (ulong *******)&stack0xffffffffffffffa0;
    puVar28 = unaff_x29;
code_r0x00010047af6c:
    unaff_x20 = *(ulong ********)((long)pppppppuVar4 + 0x40);
    unaff_x19 = *(ulong ********)((long)pppppppuVar4 + 0x48);
    unaff_x22 = *(ulong ********)((long)pppppppuVar4 + 0x30);
    unaff_x21 = *(ulong ********)((long)pppppppuVar4 + 0x38);
    pppppppuVar5 = pppppppuVar4;
code_r0x00010047af74:
    pppppppuVar6 = pppppppuVar5;
code_r0x00010047af78:
    pppppppuVar8 = pppppppuVar6;
code_r0x00010047af7c:
    pppppppuVar7 = (ulong *******)((long)pppppppuVar8 + 0x60);
code_r0x00010047af80:
    *(ulong ********)((long)pppppppuVar7 + -0x30) = unaff_x22;
    *(ulong ********)((long)pppppppuVar7 + -0x28) = unaff_x21;
    *(ulong ********)((long)pppppppuVar7 + -0x20) = unaff_x20;
    *(ulong ********)((long)pppppppuVar7 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppuVar7 + -0x10) = puVar28;
    *(undefined8 *)((long)pppppppuVar7 + -8) = unaff_x30;
    ppppppuVar17 = param_4[1];
    ppppppuVar18 = param_4[2];
    *(ulong *******)((long)pppppppuVar7 + -0x48) = ppppppuVar17;
    *(ulong *******)((long)pppppppuVar7 + -0x40) = ppppppuVar18;
    *(undefined1 *)((long)pppppppuVar7 + -0x50) = 6;
    ppppppuVar18 = (ulong ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppuVar7 + -0x50),
                                       (undefined1 *)((long)pppppppuVar7 + -0x31),&UNK_10b2197d0);
    *param_3 = (ulong ******)0x800000000000006e;
    param_3[1] = ppppppuVar18;
    if (*param_4 != (ulong ******)0x0) {
      _free(ppppppuVar17);
    }
    return;
  case 0xf:
    pppppppuStack_508 = (ulong *******)param_4[1];
    pppppppuStack_500 = (ulong *******)param_4[2];
    bVar20 = 6;
    break;
  case 0x10:
  case 0x18:
    bVar20 = 8;
  case 0xb9:
    break;
  default:
    unaff_x20 = (ulong *******)param_4[1];
    pppppppuStack_508 = (ulong *******)unaff_x20[1];
    ppppppuStack_510 = *unaff_x20;
    ppppppuStack_4f8 = unaff_x20[3];
    pppppppuStack_500 = (ulong *******)unaff_x20[2];
    func_0x000107c047e0(param_3,&ppppppuStack_510);
    goto code_r0x00010047abd4;
  case 0x12:
    bVar20 = 7;
    break;
  case 0x13:
  case 0x6b:
  case 0xf0:
    unaff_x20 = (ulong *******)param_4[1];
  case 0x97:
    pppppppuStack_508 = (ulong *******)unaff_x20[1];
    ppppppuStack_510 = *unaff_x20;
    ppppppuVar17 = unaff_x20[3];
    pppppppuVar29 = (ulong *******)unaff_x20[2];
code_r0x00010047abc4:
    pppppppuStack_500 = pppppppuVar29;
    ppppppuStack_4f8 = ppppppuVar17;
code_r0x00010047abc8:
    param_4 = &ppppppuStack_510;
code_r0x00010047abd0:
    func_0x000107c055ac(param_3,param_4);
code_r0x00010047abd4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x14:
  case 0x6c:
    unaff_x23 = (ulong *******)param_4[1];
    unaff_x20 = (ulong *******)param_4[2];
  case 0x98:
    unaff_x25 = (ulong *******)param_4[3];
    unaff_x19 = unaff_x20 + (long)unaff_x25 * 4;
    pppppppuStack_348 = unaff_x20;
code_r0x00010047ac08:
    uStack_328 = 0;
    unaff_x21 = unaff_x20;
    pppppppuStack_338 = unaff_x23;
    pppppppuStack_330 = unaff_x19;
    if (unaff_x25 == (ulong *******)0x0) {
code_r0x00010047ac34:
      pppppppuStack_340 = unaff_x21;
      unaff_x22 = (ulong *******)thunk_FUN_1087e422c(0,&UNK_10b22f7d8,&UNK_10b20a590);
code_r0x00010047ac50:
      *param_3 = (ulong ******)0x800000000000006e;
      param_3[1] = (ulong ******)unaff_x22;
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      bVar20 = *(byte *)unaff_x20;
      if (bVar20 == 0x16) goto code_r0x00010047ac34;
      uVar23 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack_1df = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      uStack_1e8._1_1_ = (char)uVar23;
      uStack_1e8._2_6_ = (undefined6)((ulong)uVar23 >> 8);
      uStack_1e0 = (undefined1)((ulong)uVar23 >> 0x38);
      ppppppuVar17 = unaff_x20[3];
      pppppppuVar29 = (ulong *******)unaff_x20[2];
      pppppppuStack_340 = unaff_x21;
code_r0x00010047acb0:
      ppppppuStack_1d8._0_1_ = SUB81(pppppppuVar29,0);
      ppppppuStack_1d8._1_7_ = (undefined7)((ulong)pppppppuVar29 >> 8);
      ppppppuStack_1d0 = ppppppuVar17;
code_r0x00010047acb8:
      uStack_328 = 1;
code_r0x00010047acc0:
      uStack_1e8._0_1_ = bVar20;
      func_0x00010135ba2c(&ppppppuStack_560,&uStack_1e8);
      unaff_x24 = (ulong *******)CONCAT71(ppppppuStack_560._1_7_,(byte)ppppppuStack_560);
      unaff_x22 = (ulong *******)CONCAT71(uStack_557,uStack_558);
      pppppppuVar21 = (ulong *******)0x8000000000000001;
code_r0x00010047acd8:
      if (unaff_x24 == pppppppuVar21) goto code_r0x00010047ac50;
code_r0x00010047ace0:
      if (unaff_x25 == (ulong *******)0x1) {
code_r0x00010047ad00:
        param_4 = (ulong *******)&UNK_10b22f7d8;
code_r0x00010047ad08:
        param_5 = &UNK_10b20a590;
code_r0x00010047ad10:
        pppppppuVar16 = (ulong *******)0x1;
code_r0x00010047ad14:
        pppppppuVar16 = (ulong *******)thunk_FUN_1087e422c(pppppppuVar16,param_4,param_5);
      }
      else {
code_r0x00010047ace8:
        unaff_x25 = (ulong *******)CONCAT71(uStack_54f,uStack_550);
        unaff_x21 = unaff_x20 + 8;
        pppppppuStack_340 = unaff_x21;
        if (*(byte *)(unaff_x20 + 4) == 0x16) goto code_r0x00010047ad00;
        uStack_557 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
        ppppppuStack_560._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x21);
        uStack_558 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x21) >> 0x38);
        ppppppuStack_548 = unaff_x20[7];
        uStack_550 = SUB81(unaff_x20[6],0);
        uStack_54f = (undefined7)((ulong)unaff_x20[6] >> 8);
        uStack_328 = 2;
        ppppppuStack_560._0_1_ = *(byte *)(unaff_x20 + 4);
code_r0x00010047b0d4:
        func_0x0001004b8c50(&uStack_1e8,&ppppppuStack_560);
        ppppppuVar17 = (ulong ******)
                       CONCAT62(uStack_1e8._2_6_,CONCAT11(uStack_1e8._1_1_,(byte)uStack_1e8));
        pppppppuVar16 = (ulong *******)CONCAT71(uStack_1df,uStack_1e0);
        if (ppppppuVar17 != (ulong ******)0x8000000000000001) {
          _memcpy(param_3 + 6,&ppppppuStack_1d8,0x150);
          *param_3 = (ulong ******)0x8000000000000001;
          param_3[1] = (ulong ******)unaff_x24;
          param_3[2] = (ulong ******)unaff_x22;
          param_3[3] = (ulong ******)unaff_x25;
          param_3[4] = ppppppuVar17;
          param_3[5] = (ulong ******)pppppppuVar16;
          _memcpy(&ppppppuStack_510,param_3,0x1c0);
          ppppppuVar17 = (ulong ******)FUN_100fbc738(&pppppppuStack_348);
          if (ppppppuVar17 == (ulong ******)0x0) {
            return;
          }
          *param_3 = (ulong ******)0x800000000000006e;
          param_3[1] = ppppppuVar17;
code_r0x00010047b140:
          FUN_100e44f40(&ppppppuStack_510);
          return;
        }
      }
code_r0x00010047ad18:
      pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047ad1c:
      *param_3 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
      param_3[1] = (ulong ******)pppppppuVar16;
      if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
code_r0x00010047ad2c:
        _free(unaff_x22);
code_r0x00010047ad34:
      }
    }
    unaff_x24 = (ulong *******)(((ulong)((long)unaff_x19 - (long)unaff_x21) >> 5) + 1);
    pppppppuVar25 = unaff_x21;
    while (unaff_x24 = (ulong *******)((long)unaff_x24 + -1), unaff_x24 != (ulong *******)0x0) {
      unaff_x21 = pppppppuVar25 + 4;
      FUN_100e077ec(pppppppuVar25);
code_r0x00010047ac80:
      pppppppuVar25 = unaff_x21;
    }
    if (unaff_x23 == (ulong *******)0x0) {
      return;
    }
code_r0x00010047ac88:
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
    ppppppuStack_530 = param_4[1];
    pppppppuStack_540 = (ulong *******)param_4[2];
    ppppppuVar17 = param_4[3];
    unaff_x19 = pppppppuStack_540 + (long)ppppppuVar17 * 8;
    ppppppuStack_560._0_1_ = 0x16;
    pppppppuStack_520 = (ulong *******)0x0;
    pppppppuStack_538 = pppppppuStack_540;
    pppppppuStack_528 = unaff_x19;
    if (ppppppuVar17 != (ulong ******)0x0) {
      unaff_x24 = (ulong *******)0x0;
      unaff_x20 = (ulong *******)((ulong)&uStack_1e8 | 1);
      unaff_x27 = (undefined8 *)((ulong)&ppppppuStack_560 | 1);
      puStack_568 = (undefined8 *)((ulong)&pppppppuStack_88 | 1);
      pppppppuStack_590 = (ulong *******)(((long)ppppppuVar17 * 0x40 - 0x40U >> 6) + 1);
      unaff_x23 = (ulong *******)0x8000000000000001;
      unaff_x21 = (ulong *******)0x8000000000000001;
      pppppppuVar16 = (ulong *******)0x8000000000000001;
      unaff_x26 = pppppppuStack_540;
      pppppppuStack_588 = param_3;
      do {
        unaff_x25 = unaff_x26 + 8;
        bVar20 = *(byte *)unaff_x26;
        pppppppuVar25 = (ulong *******)(ulong)bVar20;
        if (bVar20 == 0x16) goto code_r0x00010047ad40;
        ppppppuVar17 = unaff_x26[2];
        *(ulong *******)((long)unaff_x20 + 0x17) = unaff_x26[3];
        *(ulong *******)((long)unaff_x20 + 0xf) = ppppppuVar17;
        ppppppuVar17 = *(ulong *******)((long)unaff_x26 + 1);
        unaff_x20[1] = *(ulong *******)((long)unaff_x26 + 9);
        *unaff_x20 = ppppppuVar17;
        ppppppuVar17 = unaff_x26[5];
        pppppppuVar29 = (ulong *******)unaff_x26[4];
        ppppppuVar30 = unaff_x26[7];
        ppppppuVar18 = unaff_x26[6];
        uStack_1e8._0_1_ = bVar20;
code_r0x00010047a858:
        uStack_558 = SUB81(ppppppuVar17,0);
        uStack_557 = (undefined7)((ulong)ppppppuVar17 >> 8);
        ppppppuStack_560._0_1_ = (byte)pppppppuVar29;
        ppppppuStack_560._1_7_ = (undefined7)((ulong)pppppppuVar29 >> 8);
        uStack_550 = SUB81(ppppppuVar18,0);
        uStack_54f = (undefined7)((ulong)ppppppuVar18 >> 8);
        pppppppuVar21 = (ulong *******)CONCAT71(uStack_1df,uStack_1e0);
        piVar2 = (int *)CONCAT71(ppppppuStack_1d8._1_7_,ppppppuStack_1d8._0_1_);
        uVar19 = (uint)pppppppuVar25;
        ppppppuStack_548 = ppppppuVar30;
        if (uVar19 < 0xd) {
          if (uVar19 == 1) {
            uVar24 = 1;
            if (uStack_1e8._1_1_ != '\x01') {
              uVar24 = 2;
            }
            uVar19 = 0;
            if (uStack_1e8._1_1_ != '\0') {
              uVar19 = uVar24;
            }
          }
          else {
            if (uVar19 != 4) {
              if (uVar19 == 0xc) {
                if (ppppppuStack_1d0 == (ulong ******)0x6) {
                  uVar19 = 1;
                  if (*piVar2 != 0x61726170 || (short)piVar2[1] != 0x736d) {
                    uVar19 = 2;
                  }
                }
                else if (ppppppuStack_1d0 == (ulong ******)0x2) {
                  uVar19 = 2;
                  if ((short)*piVar2 == 0x6469) {
                    uVar19 = 0;
                  }
                }
                else {
                  uVar19 = 2;
                }
                goto joined_r0x00010047aa0c;
              }
code_r0x00010047b2ac:
              pppppppuVar21 = (ulong *******)((long)unaff_x24 + 1);
              goto code_r0x00010047b2b0;
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
code_r0x00010047aa98:
          FUN_100e077ec(&uStack_1e8);
        }
        else {
          if (uVar19 == 0xd) {
            if (piVar2 == (int *)0x6) {
              pppppppuVar25 = (ulong *******)(ulong)(*(uint *)pppppppuVar21 ^ 0x61726170);
              pppppppuVar21 = (ulong *******)(ulong)(*(ushort *)((long)pppppppuVar21 + 4) ^ 0x736d);
code_r0x00010047aa88:
              in_ZR = (int)pppppppuVar25 == 0 && (int)pppppppuVar21 == 0;
              pppppppuVar21 = (ulong *******)0x1;
code_r0x00010047aa94:
              uVar19 = (uint)pppppppuVar21;
              if (!(bool)in_ZR) {
                uVar19 = (uint)pppppppuVar21 + 1;
              }
            }
            else {
              if (piVar2 != (int *)0x2) goto code_r0x00010047aa64;
              uVar19 = 2;
              if (*(short *)pppppppuVar21 == 0x6469) {
                uVar19 = 0;
              }
            }
            goto code_r0x00010047aa98;
          }
          if (uVar19 != 0xe) {
            if (uVar19 != 0xf) goto code_r0x00010047b2ac;
            if (piVar2 == (int *)0x6) {
              if ((((*(char *)pppppppuVar21 == 'p') && (*(char *)((long)pppppppuVar21 + 1) == 'a'))
                  && (*(char *)((long)pppppppuVar21 + 2) == 'r')) &&
                 ((*(char *)((long)pppppppuVar21 + 3) == 'a' &&
                  (*(char *)((long)pppppppuVar21 + 4) == 'm')))) {
code_r0x00010047aa50:
                if (*(char *)((long)pppppppuVar21 + 5) == 's') {
                  uVar19 = 1;
                  goto code_r0x00010047aa98;
                }
              }
            }
            else if (((piVar2 == (int *)0x2) && (*(char *)pppppppuVar21 == 'i')) &&
                    (*(char *)((long)pppppppuVar21 + 1) == 'd')) {
              uVar19 = 0;
              goto code_r0x00010047aa98;
            }
code_r0x00010047aa64:
            uVar19 = 2;
            goto code_r0x00010047aa98;
          }
          if (ppppppuStack_1d0 == (ulong ******)0x6) {
            if ((((((char)*piVar2 != 'p') || (*(char *)((long)piVar2 + 1) != 'a')) ||
                 (*(char *)((long)piVar2 + 2) != 'r')) ||
                ((*(char *)((long)piVar2 + 3) != 'a' || ((char)piVar2[1] != 'm')))) ||
               (*(char *)((long)piVar2 + 5) != 's')) goto code_r0x00010047a9d4;
            uVar19 = 1;
          }
          else if (((ppppppuStack_1d0 == (ulong ******)0x2) && ((char)*piVar2 == 'i')) &&
                  (*(char *)((long)piVar2 + 1) == 'd')) {
            uVar19 = 0;
          }
          else {
code_r0x00010047a9d4:
            uVar19 = 2;
          }
joined_r0x00010047aa0c:
          if (pppppppuVar21 != (ulong *******)0x0) {
            _free();
          }
        }
        bVar20 = (byte)ppppppuStack_560;
        unaff_x22 = pppppppuStack_570;
        if ((uVar19 & 0xff) == 0) {
          if (unaff_x21 != (ulong *******)0x8000000000000001) {
            pppppppuStack_520 = (ulong *******)((long)unaff_x24 + 1);
            pppppppuStack_340 = pppppppuStack_578;
            pppppppuVar21 = (ulong *******)&UNK_108ca26b0;
            pppppppuVar25 = (ulong *******)0x2;
            pppppppuStack_538 = unaff_x25;
            pppppppuStack_348 = pppppppuVar16;
            goto code_r0x00010047b1d4;
          }
          ppppppuStack_560._0_1_ = 0x16;
          if (bVar20 == 0x16) {
            pppppppuVar21 = (ulong *******)((long)unaff_x24 + 1);
            goto code_r0x00010047b240;
          }
          ppppppuVar17 = (ulong ******)*unaff_x27;
          unaff_x20[1] = (ulong ******)unaff_x27[1];
          *unaff_x20 = ppppppuVar17;
          uVar23 = *(undefined8 *)((long)unaff_x27 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
          uStack_1e8._0_1_ = bVar20;
          func_0x00010135ba2c(&pppppppuStack_88,&uStack_1e8);
code_r0x00010047ab60:
          unaff_x21 = pppppppuStack_88;
          pppppppuVar27 = unaff_x25;
          if (pppppppuStack_88 == (ulong *******)0x8000000000000001) {
            pppppppuVar21 = (ulong *******)((long)unaff_x24 + 1);
            goto code_r0x00010047af14;
          }
code_r0x00010047ab70:
          pppppppuStack_570 = pppppppuStack_80;
          ppppppuStack_580 = ppppppuStack_78;
        }
        else if ((uVar19 & 0xff) == 1) {
          if (unaff_x23 != (ulong *******)0x8000000000000001) {
            pppppppuStack_520 = (ulong *******)((long)unaff_x24 + 1);
            pppppppuStack_340 = pppppppuStack_578;
            pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
            pppppppuStack_80 = (ulong *******)0x6;
            uStack_1e8._0_1_ = (byte)&pppppppuStack_88;
            uStack_1e8._1_1_ = (char)((ulong)&pppppppuStack_88 >> 8);
            uStack_1e8._2_6_ = (undefined6)((ulong)&pppppppuStack_88 >> 0x10);
            uStack_1e0 = 0xa0;
            uStack_1df = 0x100c7b3;
            pppppppuStack_538 = unaff_x25;
            pppppppuStack_348 = pppppppuVar16;
            param_3 = (ulong *******)
                      thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1e8);
            unaff_x25 = &ppppppuStack_560;
            pppppppuVar21 = (ulong *******)0x6e;
            pppppppuVar25 = pppppppuStack_588;
            goto code_r0x00010047b1a4;
          }
code_r0x00010047aacc:
          bVar20 = (byte)ppppppuStack_560;
          ppppppuStack_560._0_1_ = 0x16;
          if (bVar20 == 0x16) {
            pppppppuStack_520 = (ulong *******)((long)unaff_x24 + 1);
            pppppppuStack_538 = unaff_x25;
            goto code_r0x00010047b280;
          }
          uVar23 = *unaff_x27;
          puStack_568[1] = unaff_x27[1];
          *puStack_568 = uVar23;
          uVar23 = *(undefined8 *)((long)unaff_x27 + 0xf);
          *(undefined8 *)((long)puStack_568 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
          *(undefined8 *)((long)puStack_568 + 0xf) = uVar23;
          pppppppuStack_88 = (ulong *******)CONCAT71(pppppppuStack_88._1_7_,bVar20);
          func_0x0001004b8c50(&uStack_1e8,&pppppppuStack_88);
          pppppppuVar16 =
               (ulong *******)CONCAT62(uStack_1e8._2_6_,CONCAT11(uStack_1e8._1_1_,(byte)uStack_1e8))
          ;
          if (pppppppuVar16 == (ulong *******)0x8000000000000001) goto code_r0x00010047aeb8;
          pppppppuStack_578 = (ulong *******)CONCAT71(uStack_1df,uStack_1e0);
          param_3 = (ulong *******)&pppppppuStack_338;
          param_4 = &ppppppuStack_1d8;
          param_5 = (undefined *)0x150;
code_r0x00010047a814:
          unaff_x23 = pppppppuVar16;
          _memcpy(param_3,param_4,param_5);
          pppppppuVar27 = unaff_x25;
          pppppppuVar16 = unaff_x23;
        }
        else {
          pppppppuVar21 = (ulong *******)(ulong)(byte)ppppppuStack_560;
code_r0x00010047ab84:
          ppppppuStack_560._0_1_ = 0x16;
code_r0x00010047ab8c:
          if ((int)pppppppuVar21 == 0x16) {
            pppppppuStack_520 = (ulong *******)((long)unaff_x24 + 1);
            pppppppuStack_340 = pppppppuStack_578;
            param_3 = (ulong *******)&UNK_108ca1a98;
            param_5 = &UNK_10b24f000;
            pppppppuStack_538 = unaff_x25;
            pppppppuStack_348 = pppppppuVar16;
            goto code_r0x00010047b22c;
          }
          ppppppuVar17 = (ulong ******)*unaff_x27;
          unaff_x20[1] = (ulong ******)unaff_x27[1];
          *unaff_x20 = ppppppuVar17;
          uVar23 = *(undefined8 *)((long)unaff_x27 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar23;
          pppppppuVar27 = unaff_x25;
          bVar20 = (byte)pppppppuVar21;
code_r0x00010047aba4:
          uStack_1e8._0_1_ = bVar20;
          FUN_100e077ec(&uStack_1e8);
        }
        pppppppuVar25 = unaff_x26 + 8;
        unaff_x24 = (ulong *******)((long)unaff_x24 + 1);
        unaff_x25 = unaff_x19;
        unaff_x26 = pppppppuVar27;
      } while (pppppppuVar25 != unaff_x19);
      goto code_r0x00010047ad3c;
    }
    unaff_x23 = (ulong *******)0x8000000000000001;
    pppppppuStack_348 = (ulong *******)0x8000000000000001;
    goto code_r0x00010047ad68;
  case 0x16:
  case 0x96:
  case 0xb3:
    goto code_r0x00010047af7c;
  case 0x19:
  case 0xbf:
    goto code_r0x00010047af6c;
  case 0x1a:
  case 0xe2:
    goto code_r0x00010047af18;
  case 0x1b:
  case 0xb1:
    goto code_r0x00010047af9c;
  case 0x1d:
  case 0x34:
    goto code_r0x00010047af74;
  case 0x1e:
  case 0xba:
    goto code_r0x00010047afcc;
  case 0x1f:
    goto code_r0x00010047af48;
  case 0x21:
  case 0x35:
  case 0xdd:
    goto LAB_10047aef0;
  case 0x22:
  case 0xe6:
    goto code_r0x00010047af20;
  case 0x23:
    goto code_r0x00010047afa4;
  case 0x24:
  case 0x38:
  case 0x8d:
    goto code_r0x00010047aec8;
  case 0x26:
  case 0x30:
  case 0xeb:
    goto code_r0x00010047aec0;
  case 0x28:
    goto code_r0x00010047b01c;
  case 0x29:
    goto code_r0x00010047ab84;
  case 0x2a:
    goto code_r0x00010047abc8;
  case 0x2c:
  case 0x91:
    goto code_r0x00010047af24;
  case 0x2d:
  case 0x8a:
    goto code_r0x00010047af34;
  case 0x2e:
  case 0x84:
    goto code_r0x00010047aefc;
  case 0x2f:
code_r0x00010047af14:
    pppppppuStack_538 = unaff_x25;
code_r0x00010047af18:
    pppppppuStack_520 = pppppppuVar21;
code_r0x00010047af1c:
    pppppppuVar21 = pppppppuStack_578;
    unaff_x22 = pppppppuStack_570;
code_r0x00010047af20:
    pppppppuStack_340 = pppppppuVar21;
code_r0x00010047af24:
    pppppppuStack_348 = pppppppuVar16;
code_r0x00010047af28:
    unaff_x21 = (ulong *******)0x8000000000000001;
    param_3 = pppppppuStack_80;
code_r0x00010047af30:
    pppppppuVar16 = pppppppuStack_588;
code_r0x00010047af34:
    unaff_x25 = &ppppppuStack_560;
    pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047af3c:
    *pppppppuVar16 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
    pppppppuVar16[1] = (ulong ******)param_3;
code_r0x00010047af44:
    pppppppuVar21 = (ulong *******)0x8000000000000001;
code_r0x00010047af48:
    in_ZR = unaff_x23 == pppppppuVar21;
code_r0x00010047af4c:
    goto joined_r0x00010047af4c;
  case 0x31:
    goto code_r0x00010047af44;
  case 0x33:
  case 0x89:
    goto code_r0x00010047af1c;
  case 0x37:
  case 0x88:
    goto code_r0x00010047ae98;
  case 0x39:
  case 0x8c:
    goto code_r0x00010047af4c;
  case 0x3a:
  case 0x8f:
    goto code_r0x00010047ae70;
  case 0x3b:
    goto code_r0x00010047af04;
  case 0x3c:
    goto code_r0x00010047ae68;
  case 0x3e:
  case 0xb6:
    goto code_r0x00010047afc4;
  case 0x3f:
    goto code_r0x00010047ab60;
  case 0x40:
    goto code_r0x00010047aba4;
  case 0x46:
  case 0x5c:
    goto code_r0x00010047afd0;
  case 0x48:
  case 0x5e:
    break;
  case 0x49:
  case 0x5f:
  case 0xc2:
    goto code_r0x00010047b02c;
  case 0x4a:
  case 0x60:
    goto code_r0x00010047b084;
  case 0x4c:
  case 0x62:
    goto code_r0x00010047b074;
  case 0x4d:
  case 99:
    goto code_r0x00010047afa8;
  case 0x4e:
  case 100:
    goto code_r0x00010047afd8;
  case 0x4f:
  case 0x65:
    goto code_r0x00010047b05c;
  case 0x50:
  case 0x66:
  case 0xee:
    goto code_r0x00010047af80;
  case 0x52:
  case 0x68:
    goto code_r0x00010047af78;
  case 0x54:
  case 0x6a:
    goto code_r0x00010047b0d4;
  case 0x55:
    goto code_r0x00010047abc4;
  case 0x56:
    goto code_r0x00010047ac08;
  case 0x6e:
    goto code_r0x00010047b260;
  case 0x6f:
    goto code_r0x00010047b270;
  case 0x70:
    goto code_r0x00010047b238;
  case 0x71:
    goto code_r0x00010047b250;
  case 0x72:
    goto code_r0x00010047b1fc;
  case 0x73:
code_r0x00010047b280:
    pppppppuStack_340 = pppppppuStack_578;
  case 0x7b:
    param_3 = (ulong *******)&UNK_108ca1a98;
    pppppppuStack_348 = pppppppuVar16;
code_r0x00010047b298:
    param_5 = &UNK_10b24f848;
code_r0x00010047b2a0:
    FUN_107c05cac(param_3,0x2c,param_5);
code_r0x00010047b2a8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10047b2ac);
    (*pcVar3)();
  case 0x74:
    goto code_r0x00010047b298;
  case 0x75:
    goto code_r0x00010047b258;
  case 0x76:
code_r0x00010047b2b0:
    pppppppuStack_340 = pppppppuStack_578;
    pppppppuStack_538 = unaff_x25;
    pppppppuStack_520 = pppppppuVar21;
    pppppppuStack_348 = pppppppuVar16;
    param_3 = (ulong *******)thunk_FUN_108855b04(&uStack_1e8,&pppppppuStack_88,&UNK_10b20f9e0);
    unaff_x25 = &ppppppuStack_560;
    unaff_x22 = pppppppuStack_570;
    pppppppuVar16 = pppppppuStack_588;
  case 0x80:
    goto code_r0x00010047ada0;
  case 0x77:
code_r0x00010047b22c:
    FUN_107c05cac(param_3,0x2c,param_5 + 0x848);
code_r0x00010047b238:
    goto code_r0x00010047b2a8;
  case 0x78:
    goto code_r0x00010047b2a0;
  case 0x79:
code_r0x00010047b1d4:
    uStack_1e8._0_1_ = (byte)&pppppppuStack_88;
    uStack_1e8._1_1_ = (char)((ulong)&pppppppuStack_88 >> 8);
    uStack_1e8._2_6_ = (undefined6)((ulong)&pppppppuStack_88 >> 0x10);
    uStack_1e0 = 0xa0;
    uStack_1df = 0x100c7b3;
    pppppppuStack_88 = pppppppuVar21;
    pppppppuStack_80 = pppppppuVar25;
    param_3 = (ulong *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1e8);
code_r0x00010047b1fc:
    unaff_x25 = &ppppppuStack_560;
    pppppppuVar16 = pppppppuStack_588;
code_r0x00010047b204:
    goto code_r0x00010047ada0;
  case 0x7a:
    goto code_r0x00010047b204;
  case 0x7c:
    goto code_r0x00010047b1ac;
  case 0x7d:
code_r0x00010047b240:
    pppppppuStack_340 = pppppppuStack_578;
    pppppppuStack_538 = unaff_x25;
    pppppppuStack_520 = pppppppuVar21;
code_r0x00010047b250:
    pppppppuStack_348 = pppppppuVar16;
code_r0x00010047b258:
    param_3 = (ulong *******)&UNK_108ca1a98;
code_r0x00010047b260:
    FUN_107c05cac(param_3,0x2c,&UNK_10b24f848);
code_r0x00010047b270:
    goto code_r0x00010047b2a8;
  case 0x7e:
code_r0x00010047b1a4:
    *pppppppuVar25 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
    pppppppuVar25[1] = (ulong ******)param_3;
code_r0x00010047b1ac:
    goto LAB_10047adb8;
  case 0x81:
    goto code_r0x00010047a814;
  case 0x82:
    goto code_r0x00010047a858;
  case 0x85:
    goto code_r0x00010047af0c;
  case 0x86:
    goto code_r0x00010047aed4;
  case 0x87:
    goto code_r0x00010047aeec;
  case 0x8b:
    goto code_r0x00010047aef4;
  case 0x8e:
    goto code_r0x00010047af3c;
  case 0x90:
    goto code_r0x00010047aea0;
  case 0x92:
    goto code_r0x00010047ae48;
  case 0x93:
    goto code_r0x00010047aedc;
  case 0x94:
    goto code_r0x00010047ae40;
  case 0x9a:
code_r0x00010047ad3c:
    unaff_x24 = pppppppuStack_590;
  case 0xcf:
code_r0x00010047ad40:
    unaff_x22 = pppppppuStack_570;
    unaff_x26 = pppppppuStack_578;
    pppppppuStack_538 = unaff_x25;
    pppppppuStack_520 = unaff_x24;
code_r0x00010047ad4c:
    pppppppuStack_348 = pppppppuVar16;
    pppppppuStack_340 = unaff_x26;
code_r0x00010047ad54:
    pppppppuVar21 = (ulong *******)0x8000000000000001;
    in_ZR = unaff_x21 == (ulong *******)0x8000000000000001;
code_r0x00010047ad5c:
    param_3 = pppppppuStack_588;
    if ((bool)in_ZR) {
code_r0x00010047ad64:
code_r0x00010047ad68:
      unaff_x25 = &ppppppuStack_560;
      pppppppuVar21 = (ulong *******)&UNK_108ca2000;
code_r0x00010047ad6c:
      pppppppuVar22 = pppppppuVar21 + 0xd6;
      pppppppuVar25 = (ulong *******)0x2;
code_r0x00010047ad74:
      pppppppuVar21 = (ulong *******)&pppppppuStack_88;
      pppppppuStack_88 = pppppppuVar22;
      pppppppuStack_80 = pppppppuVar25;
code_r0x00010047ad7c:
      pppppppuVar25 = (ulong *******)&DAT_100c7b3a0;
code_r0x00010047ad84:
      uStack_1e8._0_1_ = (byte)pppppppuVar21;
      uStack_1e8._1_1_ = (char)((ulong)pppppppuVar21 >> 8);
      uStack_1e8._2_6_ = (undefined6)((ulong)pppppppuVar21 >> 0x10);
      uStack_1e0 = SUB81(pppppppuVar25,0);
      uStack_1df = (undefined7)((ulong)pppppppuVar25 >> 8);
      pppppppuVar16 = param_3;
code_r0x00010047ad8c:
      unaff_x21 = (ulong *******)0x8000000000000001;
      param_3 = (ulong *******)(s_eRolled_the_thread_back__but_fai_108ac1fff + 1);
code_r0x00010047ad94:
      param_3 = (ulong *******)((long)param_3 + 0x8f7);
      param_4 = (ulong *******)&uStack_1e8;
code_r0x00010047ad9c:
      param_3 = (ulong *******)thunk_FUN_108856088(param_3,param_4);
code_r0x00010047ada0:
      *pppppppuVar16 = (ulong ******)0x800000000000006e;
      pppppppuVar16[1] = (ulong ******)param_3;
code_r0x00010047adac:
      in_ZR = unaff_x23 == (ulong *******)0x8000000000000001;
code_r0x00010047adb4:
joined_r0x00010047af4c:
      if (!(bool)in_ZR) {
LAB_10047adb8:
        FUN_100e5d5c4(&pppppppuStack_348);
      }
      pppppppuVar21 = (ulong *******)0x2;
code_r0x00010047adc4:
      param_3 = unaff_x22;
      if ((long)((ulong)pppppppuVar21 | 0x8000000000000000) <= (long)unaff_x21)
      goto joined_r0x00010047ae34;
    }
    else {
      unaff_x20 = pppppppuStack_588;
      if (unaff_x23 != pppppppuVar21) {
        param_3 = pppppppuStack_588 + 6;
code_r0x00010047ae40:
        param_4 = (ulong *******)&pppppppuStack_338;
code_r0x00010047ae48:
        _memcpy(param_3,param_4,0x150);
        pppppppuVar21 = (ulong *******)0x8000000000000001;
code_r0x00010047ae54:
        *unaff_x20 = (ulong ******)pppppppuVar21;
        unaff_x20[1] = (ulong ******)unaff_x21;
        unaff_x20[2] = (ulong ******)unaff_x22;
        unaff_x20[3] = ppppppuStack_580;
        unaff_x20[4] = (ulong ******)unaff_x23;
        unaff_x20[5] = (ulong ******)unaff_x26;
        param_3 = &ppppppuStack_510;
code_r0x00010047ae68:
        param_4 = unaff_x20;
        param_5 = (undefined *)0x1c0;
        unaff_x20 = param_4;
code_r0x00010047ae70:
        _memcpy(param_3,param_4,param_5);
        param_3 = (ulong *******)&pppppppuStack_540;
code_r0x00010047ae7c:
        FUN_100d34830(param_3);
        in_ZR = unaff_x19 == unaff_x25;
code_r0x00010047ae84:
        if ((bool)in_ZR) {
          return;
        }
        pppppppuVar21 = (ulong *******)((ulong)((long)unaff_x19 - (long)unaff_x25) >> 6);
        uStack_1e8._0_1_ = (byte)unaff_x24;
        uStack_1e8._1_1_ = (char)((ulong)unaff_x24 >> 8);
        uStack_1e8._2_6_ = (undefined6)((ulong)unaff_x24 >> 0x10);
        param_5 = &UNK_10b23a000;
code_r0x00010047ae98:
        param_5 = param_5 + 400;
        param_3 = (ulong *******)((long)pppppppuVar21 + (long)unaff_x24);
code_r0x00010047aea0:
        param_3 = (ulong *******)thunk_FUN_1087e422c(param_3,&uStack_1e8,param_5);
        pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047aeac:
        *unaff_x20 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
        unaff_x20[1] = (ulong ******)param_3;
        goto code_r0x00010047b140;
      }
      pppppppuStack_88 = (ulong *******)&UNK_108cb9606;
      pppppppuStack_80 = (ulong *******)0x6;
      uStack_1e8._0_1_ = (byte)&pppppppuStack_88;
      uStack_1e8._1_1_ = (char)((ulong)&pppppppuStack_88 >> 8);
      uStack_1e8._2_6_ = (undefined6)((ulong)&pppppppuStack_88 >> 0x10);
      uStack_1e0 = 0xa0;
      uStack_1df = 0x100c7b3;
FUN_10047ae10:
      param_3 = (ulong *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_1e8);
      pppppppuVar21 = (ulong *******)0x6e;
code_r0x00010047ae24:
      *unaff_x20 = (ulong ******)((ulong)pppppppuVar21 | 0x8000000000000000);
      unaff_x20[1] = (ulong ******)param_3;
code_r0x00010047ae2c:
      unaff_x21 = (ulong *******)((ulong)unaff_x21 & 0x7fffffffffffffff);
      unaff_x25 = &ppppppuStack_560;
      param_3 = unaff_x22;
joined_r0x00010047ae34:
      if (unaff_x21 != (ulong *******)0x0) {
code_r0x00010047add8:
        _free(param_3);
      }
    }
LAB_10047aef0:
    param_3 = unaff_x25 + 4;
code_r0x00010047aef4:
    FUN_100d34830(param_3);
    pppppppuVar21 = (ulong *******)(ulong)(byte)ppppppuStack_560;
code_r0x00010047aefc:
    in_ZR = (int)pppppppuVar21 == 0x16;
code_r0x00010047af00:
    if ((bool)in_ZR) {
      return;
    }
code_r0x00010047af04:
    param_3 = &ppppppuStack_560;
code_r0x00010047af08:
    FUN_100e077ec(param_3);
code_r0x00010047af0c:
    return;
  case 0x9b:
  case 200:
    goto code_r0x00010047ad4c;
  case 0x9c:
    goto code_r0x00010047ad14;
  case 0x9d:
    goto code_r0x00010047ad2c;
  case 0x9e:
    goto code_r0x00010047acd8;
  case 0x9f:
    goto code_r0x00010047ad5c;
  case 0xa0:
  case 0xc6:
    goto code_r0x00010047ad74;
  case 0xa1:
    goto code_r0x00010047ad34;
  case 0xa2:
    goto code_r0x00010047ad8c;
  case 0xa3:
    goto code_r0x00010047ad08;
  case 0xa4:
    goto code_r0x00010047ad7c;
  case 0xa5:
    goto code_r0x00010047acb0;
  case 0xa6:
    goto code_r0x00010047ace0;
  case 0xa7:
  case 0xc9:
    goto code_r0x00010047ad64;
  case 0xa8:
    goto code_r0x00010047ac88;
  case 0xa9:
    goto code_r0x00010047ad1c;
  case 0xaa:
    goto code_r0x00010047ac80;
  case 0xac:
    goto code_r0x00010047add8;
  case 0xad:
    goto code_r0x00010047aa50;
  case 0xae:
    goto code_r0x00010047aa94;
  case 0xb4:
    goto code_r0x00010047af28;
  case 0xbb:
  case 0xe1:
    goto code_r0x00010047af00;
  case 0xbc:
  case 0xe4:
    goto code_r0x00010047af30;
  case 0xbe:
  case 0xe3:
    goto code_r0x00010047aed8;
  case 0xc0:
  case 0xdf:
    goto code_r0x00010047aed0;
  case 0xc3:
    goto code_r0x00010047ab8c;
  case 0xc4:
    goto code_r0x00010047abd0;
  case 199:
    goto code_r0x00010047ad84;
  case 0xca:
    goto code_r0x00010047ad10;
  case 0xcb:
    goto code_r0x00010047ad94;
  case 0xcc:
    goto code_r0x00010047adac;
  case 0xcd:
    goto code_r0x00010047ad6c;
  case 0xce:
    goto code_r0x00010047adc4;
  case 0xd0:
    goto code_r0x00010047adb4;
  case 0xd1:
    goto code_r0x00010047ace8;
  case 0xd2:
    goto code_r0x00010047ad18;
  case 0xd3:
    goto code_r0x00010047ad9c;
  case 0xd4:
    goto code_r0x00010047acc0;
  case 0xd5:
    goto code_r0x00010047ad54;
  case 0xd6:
    goto code_r0x00010047acb8;
  case 0xd8:
    goto FUN_10047ae10;
  case 0xd9:
    goto code_r0x00010047aa88;
  case 0xda:
    goto code_r0x00010047aacc;
  case 0xdc:
    goto code_r0x00010047aee0;
  case 0xde:
code_r0x00010047aeb8:
    pppppppuVar22 = (ulong *******)((long)unaff_x24 + 1);
    pppppppuStack_538 = unaff_x25;
code_r0x00010047aec0:
    pppppppuVar21 = (ulong *******)CONCAT71(uStack_1df,uStack_1e0);
    pppppppuStack_520 = pppppppuVar22;
code_r0x00010047aec8:
    pppppppuVar25 = (ulong *******)0x800000000000006e;
code_r0x00010047aed0:
    pppppppuVar26 = pppppppuStack_588;
code_r0x00010047aed4:
    *pppppppuVar26 = (ulong ******)pppppppuVar25;
    pppppppuVar26[1] = (ulong ******)pppppppuVar21;
code_r0x00010047aed8:
    unaff_x22 = pppppppuStack_570;
code_r0x00010047aedc:
    unaff_x25 = &ppppppuStack_560;
code_r0x00010047aee0:
    in_OV = SBORROW8((long)unaff_x21,-0x7ffffffffffffffe);
    in_NG = (long)((long)unaff_x21 + 0x7ffffffffffffffe) < 0;
code_r0x00010047aeec:
    param_3 = unaff_x22;
    if (in_NG == in_OV) goto joined_r0x00010047ae34;
    goto LAB_10047aef0;
  case 0xe0:
    goto code_r0x00010047ae7c;
  case 0xe5:
    goto code_r0x00010047aeac;
  case 0xe7:
    goto code_r0x00010047ae54;
  case 0xe8:
    goto code_r0x00010047ae84;
  case 0xe9:
    goto code_r0x00010047af08;
  case 0xea:
    goto code_r0x00010047ae2c;
  case 0xec:
    goto code_r0x00010047ae24;
  case 0xef:
    goto code_r0x00010047ab70;
  }
  ppppppuStack_510 = (ulong ******)CONCAT71(ppppppuStack_510._1_7_,bVar20);
code_r0x00010047b070:
  param_5 = &UNK_10b219000;
code_r0x00010047b074:
  pppppppuVar16 = (ulong *******)FUN_107c05dcc(&ppppppuStack_510,&pppppppuStack_88,param_5 + 2000);
code_r0x00010047b084:
  *param_3 = (ulong ******)0x800000000000006e;
  param_3[1] = (ulong ******)pppppppuVar16;
  return;
}

