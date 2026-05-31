
/* WARNING: Type propagation algorithm not settling */

void FUN_10078a118(undefined1 param_1 [16],undefined1 param_2 [16],char *param_3,uint *******param_4
                  ,undefined *param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar4;
  uint *******pppppppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint ******ppppppuVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  uint *******extraout_x9;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  uint *******pppppppuVar19;
  undefined *puVar20;
  ulong in_x13;
  ulong uVar21;
  uint *******unaff_x19;
  long lVar22;
  uint *******unaff_x20;
  uint *******pppppppuVar23;
  uint *******unaff_x21;
  uint *******unaff_x22;
  uint *******unaff_x23;
  uint *******unaff_x24;
  uint *******unaff_x25;
  uint *******unaff_x26;
  uint *******unaff_x27;
  uint *******pppppppuVar24;
  char cVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  uint *******pppppppuVar28;
  uint ******ppppppuVar29;
  undefined8 uVar30;
  uint *******pppppppuVar31;
  uint *******pppppppuVar32;
  uint *******pppppppuStack_238;
  uint *******pppppppuStack_230;
  uint *******pppppppuStack_228;
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_218;
  uint *******pppppppuStack_210;
  uint ******ppppppuStack_208;
  byte bStack_200;
  uint7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  uint ******ppppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  uint *******pppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  byte bStack_1a0;
  byte bStack_19f;
  undefined5 uStack_19e;
  byte bStack_199;
  undefined1 uStack_198;
  undefined6 uStack_197;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined6 uStack_18f;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  uint *******pppppppuStack_178;
  uint ******ppppppuStack_170;
  uint *******pppppppuStack_168;
  undefined *puStack_160;
  uint *******pppppppuStack_158;
  undefined8 uStack_140;
  uint *******pppppppuStack_138;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *****pppppuStack_e8;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  uint *******pppppppuStack_b0;
  uint ******ppppppuStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  uint *******pppppppuStack_90;
  uint *******pppppppuStack_88;
  uint *******pppppppuStack_80;
  
  pppppppuVar32 = param_2._8_8_;
  pppppppuVar31 = param_2._0_8_;
  pppppppuVar28 = param_1._8_8_;
  pppppppuVar27 = param_1._0_8_;
  pppppppuVar14 = (uint *******)&UNK_108cde34c;
  ppppppuStack_1e0 = (uint ******)&UNK_108cde34c;
  uStack_1d8 = 4;
  puStack_1d0 = &UNK_108cad8a9;
  uStack_1c8 = 0x20;
  pppppppuVar16 = (uint *******)(ulong)*(byte *)param_4;
  pppppppuVar17 = (uint *******)&UNK_108c9b0b4;
  puVar20 = (undefined *)(ulong)*(ushort *)(&UNK_108c9b0b4 + (long)pppppppuVar16 * 2);
  pppppppuVar5 = (uint *******)param_3;
  pcVar6 = param_3;
  pppppppuVar24 = param_4;
  pppppppuVar15 = pppppppuVar14;
  pppppppuVar19 = (uint *******)(&UNK_10078a178 + (long)puVar20 * 4);
  pppppppuVar18 = unaff_x20;
  pppppppuVar23 = unaff_x21;
  pppppppuVar26 = (uint *******)param_3;
  switch(*(byte *)param_4) {
  case 0:
  case 0xe4:
code_r0x00010078c1b8:
    pppppppuVar14 = (uint *******)(ulong)*(byte *)((long)param_4 + 1);
code_r0x00010078c1bc:
    pppppppuStack_c0 =
         (uint *******)((ulong)CONCAT61(pppppppuStack_c0._2_6_,(char)pppppppuVar14) << 8);
    pppppppuVar26 = (uint *******)pcVar6;
code_r0x00010078c1c4:
    pcVar6 = (char *)pppppppuVar26;
    goto code_r0x00010078c21c;
  case 1:
    pppppppuVar14 = (uint *******)(ulong)*(byte *)((long)param_4 + 1);
    goto code_r0x00010078c1cc;
  case 2:
    pppppppuVar14 = (uint *******)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x00010078c1cc;
  case 3:
    pppppppuVar14 = (uint *******)(ulong)*(uint *)((long)param_4 + 4);
    goto code_r0x00010078c1cc;
  case 4:
    pppppppuVar14 = (uint *******)param_4[1];
code_r0x00010078c1cc:
    param_3 = (char *)pppppppuVar26;
    pppppppuVar15 = (uint *******)0x1;
    pppppppuStack_b8 = pppppppuVar14;
  case 0xc2:
code_r0x00010078c214:
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar15);
    pcVar6 = param_3;
code_r0x00010078c21c:
    param_3 = (char *)&pppppppuStack_c0;
code_r0x00010078c224:
    param_4 = &ppppppuStack_1e0;
    pppppppuVar26 = (uint *******)pcVar6;
code_r0x00010078c228:
code_r0x00010078d08c:
    pcVar6 = (char *)FUN_107c05dcc(param_3,param_4);
LAB_10078d090:
    pppppppuVar26[1] = (uint ******)pcVar6;
code_r0x00010078d094:
    param_3 = (char *)pppppppuVar26;
    pppppppuVar14 = (uint *******)0x5;
code_r0x00010078d098:
    *param_3 = (char)pppppppuVar14;
    break;
  case 5:
  case 0xd8:
    pppppppuStack_b8 = (uint *******)(long)*(char *)((long)param_4 + 1);
    goto code_r0x00010078c210;
  case 6:
    pppppppuVar14 = (uint *******)(long)*(short *)((long)param_4 + 2);
code_r0x00010078c1f4:
    pppppppuStack_b8 = pppppppuVar14;
    goto code_r0x00010078c210;
  case 7:
    pppppppuVar14 = (uint *******)(long)(int)*(uint *)((long)param_4 + 4);
code_r0x00010078c1b4:
    pppppppuStack_b8 = pppppppuVar14;
    goto code_r0x00010078c210;
  case 8:
code_r0x00010078c208:
    pppppppuStack_b8 = (uint *******)param_4[1];
code_r0x00010078c210:
    pppppppuVar15 = (uint *******)0x2;
    param_3 = (char *)pppppppuVar26;
    goto code_r0x00010078c214;
  case 9:
code_r0x00010078c184:
    pppppppuVar27 = (uint *******)(ulong)*(uint *)((long)param_4 + 4);
    pppppppuVar26 = (uint *******)pcVar6;
  case 0xb8:
code_r0x00010078c188:
    pppppppuVar27 = (uint *******)(double)SUB84(pppppppuVar27,0);
code_r0x00010078c1fc:
    pppppppuStack_b8 = pppppppuVar27;
code_r0x00010078c200:
    pppppppuVar14 = (uint *******)0x3;
code_r0x00010078c204:
    param_3 = (char *)pppppppuVar26;
    pppppppuVar15 = pppppppuVar14;
    goto code_r0x00010078c214;
  case 10:
    pppppppuVar27 = (uint *******)param_4[1];
    goto code_r0x00010078c1fc;
  case 0xb:
    param_5 = (undefined *)(ulong)*(uint *)((long)param_4 + 4);
    pppppppuVar5 = &ppppppuStack_208;
  case 0xe2:
    func_0x000107c042f0(pppppppuVar5,&ppppppuStack_1e0,param_5);
code_r0x00010078c160:
LAB_10078a464:
    pcVar6 = (char *)CONCAT71(uStack_1ff,bStack_200);
    if ((byte)ppppppuStack_208 == 5) goto LAB_10078d090;
    pppppppuStack_1b0 = (uint *******)CONCAT71(uStack_1ef,uStack_1f0);
    pppppppuStack_1b8 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
    pppppppuStack_1a8 = (uint *******)CONCAT71(uStack_1e7,uStack_1e8);
    param_4 = (uint *******)(ulong)(uStack_1ff >> 0x18);
    pppppppuVar27 = (uint *******)(ulong)(uStack_1ff >> 0x18);
    pppppppuVar28 = (uint *******)0x0;
    pppppppuVar16 = (uint *******)(ulong)(uStack_1ff >> 8);
    pppppppuVar14 = (uint *******)(ulong)uStack_1ff;
    in_OV = SBORROW4((uint)(byte)ppppppuStack_208,1);
    uVar11 = (uint)(byte)ppppppuStack_208;
    in_NG = (int)(uVar11 - 1) < 0;
    in_ZR = uVar11 == 1;
    param_3 = pcVar6;
    pppppppuStack_1c0 = (uint *******)pcVar6;
    if (uVar11 < 2) {
      if (uVar11 != 0) {
LAB_10078a5c4:
        pppppppuVar17 = (uint *******)((ulong)pcVar6 & 0xff);
code_r0x00010078a5c8:
        puVar20 = &UNK_10078a5e0;
        in_x13 = (ulong)*(ushort *)(&UNK_108c9b164 + (long)pppppppuVar17 * 2);
        goto code_r0x00010078a5d8;
      }
code_r0x00010078a4f8:
      pppppppuVar17 = (uint *******)((ulong)param_3 & 0xff);
      pppppppuVar18 = (uint *******)&UNK_108c9b190;
      uVar21 = (ulong)*(ushort *)(&UNK_108c9b190 + (long)pppppppuVar17 * 2);
      puVar20 = &UNK_10078a514 + uVar21 * 4;
code_r0x00010078a510:
      pcVar6 = param_3;
      pppppppuVar23 = pppppppuStack_1b8;
      param_3 = pcVar6;
      pppppppuVar5 = (uint *******)pcVar6;
      pppppppuVar15 = pppppppuVar14;
      pppppppuVar19 = unaff_x21;
      pppppppuVar24 = pppppppuStack_98;
      switch(puVar20) {
      case (undefined *)0x10078a514:
        pppppppuStack_b8 = (uint *******)pppppppuStack_1b8[1];
        pppppppuStack_c0 = (uint *******)*pppppppuStack_1b8;
        ppppppuStack_a8 = pppppppuStack_1b8[3];
        pppppppuStack_b0 = (uint *******)pppppppuStack_1b8[2];
        thunk_FUN_1087fe1ac(pppppppuVar26,&pppppppuStack_c0);
        goto code_r0x00010078c0cc;
      case (undefined *)0x10078a540:
        goto code_r0x00010078a540;
      case (undefined *)0x10078a558:
        goto code_r0x00010078a558;
      case (undefined *)0x10078a594:
        goto code_r0x00010078a594;
      case (undefined *)0x10078a5a0:
        goto code_r0x00010078a5a0;
      case (undefined *)0x10078a5c4:
        goto LAB_10078a5c4;
      case (undefined *)0x10078a62c:
code_r0x00010078a62c:
        bStack_200 = (byte)pppppppuVar14;
        pppppppuVar14 = (uint *******)pppppppuVar16[0x1b];
        uStack_1e8 = SUB81(pppppppuVar14,0);
        uStack_1e7 = (undefined7)((ulong)pppppppuVar14 >> 8);
        uStack_1ef = (undefined7)((ulong)pppppppuVar16[0x1a] >> 8);
        uStack_1f7 = (undefined7)*(undefined8 *)((long)pppppppuVar16 + 0xc9);
        uStack_1f0 = (undefined1)((ulong)*(undefined8 *)((long)pppppppuVar16 + 0xc9) >> 0x38);
        uStack_1ff = (uint7)*(undefined8 *)((long)pppppppuVar16 + 0xc1);
        uStack_1f8 = (undefined1)((ulong)*(undefined8 *)((long)pppppppuVar16 + 0xc1) >> 0x38);
        pppppppuVar28 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
        pppppppuVar27 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
        pppppppuVar32 = (uint *******)CONCAT71(uStack_1ef,uStack_1f0);
        pppppppuVar31 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078a64c:
        pppppppuVar17 = pppppppuStack_88;
        unaff_x19 = pppppppuStack_98;
        uStack_180 = SUB87(pppppppuVar14,0);
        uStack_179 = (undefined1)((ulong)pppppppuVar14 >> 0x38);
        uStack_198 = SUB81(pppppppuVar28,0);
        uStack_197 = (undefined6)((ulong)pppppppuVar28 >> 8);
        uStack_191 = (undefined1)((ulong)pppppppuVar28 >> 0x38);
        bStack_1a0 = (byte)pppppppuVar27;
        bStack_19f = (byte)((ulong)pppppppuVar27 >> 8);
        uStack_19e = (undefined5)((ulong)pppppppuVar27 >> 0x10);
        bStack_199 = (byte)((ulong)pppppppuVar27 >> 0x38);
        uStack_188 = SUB87(pppppppuVar32,0);
        uStack_181 = (undefined1)((ulong)pppppppuVar32 >> 0x38);
        uStack_190 = SUB81(pppppppuVar31,0);
        uStack_18f = (undefined6)((ulong)pppppppuVar31 >> 8);
        uStack_189 = (undefined1)((ulong)pppppppuVar31 >> 0x38);
        FUN_100d34830(unaff_x21 + 4);
        pppppppuVar26 = pppppppuStack_210;
        if (pppppppuVar17 == unaff_x19) goto code_r0x00010078a670;
        pppppppuStack_120 = pppppppuStack_80;
        unaff_x20 = (uint *******)
                    thunk_FUN_1087e422c((char *)((long)pppppppuStack_80 +
                                                ((ulong)((long)pppppppuVar17 - (long)unaff_x19) >> 6
                                                )),&pppppppuStack_120,&UNK_10b23a190);
        pcVar6 = (char *)pppppppuStack_210;
        if ((byte)pppppppuStack_c0 != '\x16') goto code_r0x00010078a680;
        goto code_r0x00010078a688;
      case (undefined *)0x10078a714:
code_r0x00010078a714:
        ppppppuStack_208._0_1_ = (byte)pppppppuVar14;
        pppppppuVar18 = pppppppuStack_118;
        unaff_x19 = pppppppuStack_108;
        param_3 = (char *)pppppppuVar26;
code_r0x00010078a430:
        lVar22 = ((ulong)((long)unaff_x19 - (long)pppppppuVar18) >> 5) + 1;
        while (lVar22 = lVar22 + -1, lVar22 != 0) {
          pppppppuVar18 = pppppppuVar18 + 4;
          FUN_100e077ec();
          unaff_x21 = pppppppuVar18;
        }
        unaff_x19 = (uint *******)0x0;
        pppppppuVar14 = pppppppuStack_120;
        pppppppuVar26 = (uint *******)param_3;
        if (pppppppuStack_110 != (uint *******)0x0) {
code_r0x00010078a460:
          _free(pppppppuVar14);
          pppppppuVar26 = (uint *******)param_3;
        }
        goto LAB_10078a464;
      case (undefined *)0x10078a72c:
        goto code_r0x00010078a72c;
      case (undefined *)0x10078a74c:
        goto code_r0x00010078a74c;
      case (undefined *)0x10078a7c0:
        goto code_r0x00010078a7c0;
      case (undefined *)0x10078a7f0:
        goto code_r0x00010078a7f0;
      case (undefined *)0x10078a824:
        goto code_r0x00010078a824;
      case (undefined *)0x10078a838:
        goto code_r0x00010078a838;
      case (undefined *)0x10078a84c:
        goto code_r0x00010078a84c;
      case (undefined *)0x10078a8fc:
        goto code_r0x00010078a8fc;
      case (undefined *)0x10078a940:
        goto code_r0x00010078a940;
      case (undefined *)0x10078a948:
        goto code_r0x00010078a948;
      case (undefined *)0x10078a95c:
        goto code_r0x00010078a95c;
      case (undefined *)0x10078a974:
        goto code_r0x00010078a974;
      case (undefined *)0x10078a97c:
        goto code_r0x00010078a97c;
      case (undefined *)0x10078a988:
        goto code_r0x00010078a988;
      case (undefined *)0x10078a998:
        goto code_r0x00010078a998;
      case (undefined *)0x10078a9a0:
        goto code_r0x00010078a9a0;
      case (undefined *)0x10078a9a8:
        goto code_r0x00010078a9a8;
      case (undefined *)0x10078a9c4:
        goto code_r0x00010078a9c4;
      case (undefined *)0x10078a9e0:
        goto code_r0x00010078a9e0;
      case (undefined *)0x10078a9e8:
        goto code_r0x00010078a9e8;
      case (undefined *)0x10078aa04:
        goto code_r0x00010078aa04;
      case (undefined *)0x10078aa0c:
        goto code_r0x00010078aa0c;
      case (undefined *)0x10078aa14:
        goto code_r0x00010078aa14;
      case (undefined *)0x10078aa28:
        goto code_r0x00010078aa28;
      case (undefined *)0x10078aa84:
        goto code_r0x00010078aa84;
      case (undefined *)0x10078aa98:
        goto code_r0x00010078aa98;
      case (undefined *)0x10078aaa0:
        goto code_r0x00010078aaa0;
      case (undefined *)0x10078ab30:
        goto code_r0x00010078ab30;
      case (undefined *)0x10078abbc:
        goto code_r0x00010078abbc;
      case (undefined *)0x10078ac7c:
        goto code_r0x00010078ac7c;
      case (undefined *)0x10078af50:
        goto code_r0x00010078af50;
      case (undefined *)0x10078af74:
code_r0x00010078af74:
        pppppppuVar16 = (uint *******)((long)pppppppuVar18 * 0x40);
        unaff_x21 = pppppppuVar15 + (long)pppppppuVar18 * 8;
        unaff_x19 = (uint *******)&pppppppuStack_c0;
        unaff_x24 = (uint *******)0x16;
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
        pppppppuStack_a0 = pppppppuVar15;
        pppppppuStack_98 = pppppppuVar15;
        pppppppuStack_90 = pppppppuVar17;
        pppppppuStack_88 = unaff_x21;
        goto code_r0x00010078af94;
      case (undefined *)0x10078afbc:
        goto code_r0x00010078afbc;
      case (undefined *)0x10078afe0:
        goto code_r0x00010078afe0;
      case (undefined *)0x10078b024:
        goto code_r0x00010078b024;
      case (undefined *)0x10078b0b0:
        goto code_r0x00010078b0b0;
      case (undefined *)0x10078b384:
        pppppppuVar16 = (uint *******)((long)pppppppuStack_1a8 * 0x40);
        pppppppuStack_218 = pppppppuStack_1b0 + (long)pppppppuStack_1a8 * 8;
        unaff_x25 = (uint *******)&pppppppuStack_c0;
        pppppppuStack_a0 = pppppppuStack_1b0;
        pppppppuStack_98 = pppppppuStack_1b0;
        pppppppuStack_90 = pppppppuStack_1b8;
        pppppppuStack_88 = pppppppuStack_218;
        pppppppuVar17 = (uint *******)0x16;
        pppppppuVar15 = pppppppuStack_1b0;
        pppppppuVar19 = pppppppuStack_1a8;
        goto code_r0x00010078b3a8;
      case (undefined *)0x10078b42c:
        goto code_r0x00010078b42c;
      case (undefined *)0x10078b450:
        goto code_r0x00010078b450;
      case (undefined *)0x10078b70c:
        goto code_r0x00010078b70c;
      case (undefined *)0x10078b714:
        goto code_r0x00010078b714;
      case (undefined *)0x10078b72c:
        goto code_r0x00010078b72c;
      case (undefined *)0x10078b740:
        goto code_r0x00010078b740;
      case (undefined *)0x10078b744:
        goto code_r0x00010078b744;
      case (undefined *)0x10078b748:
        goto code_r0x00010078b748;
      case (undefined *)0x10078b760:
        goto code_r0x00010078b760;
      case (undefined *)0x10078b76c:
        goto code_r0x00010078b76c;
      case (undefined *)0x10078b774:
        goto code_r0x00010078b774;
      case (undefined *)0x10078b77c:
        goto code_r0x00010078b77c;
      case (undefined *)0x10078b784:
        goto code_r0x00010078b784;
      case (undefined *)0x10078b78c:
        goto code_r0x00010078b78c;
      case (undefined *)0x10078b794:
        goto code_r0x00010078b794;
      case (undefined *)0x10078b7a0:
        goto code_r0x00010078b7a0;
      case (undefined *)0x10078b7a4:
        goto code_r0x00010078b7a4;
      case (undefined *)0x10078b7b4:
        goto code_r0x00010078b7b4;
      case (undefined *)0x10078b7bc:
        goto code_r0x00010078b7bc;
      case (undefined *)0x10078b7cc:
        goto code_r0x00010078b7cc;
      case (undefined *)0x10078b7d4:
        goto code_r0x00010078b7d4;
      case (undefined *)0x10078b7e4:
        goto code_r0x00010078b7e4;
      case (undefined *)0x10078b808:
        goto code_r0x00010078b808;
      case (undefined *)0x10078b840:
        goto code_r0x00010078b840;
      case (undefined *)0x10078b874:
        goto code_r0x00010078b874;
      case (undefined *)0x10078b894:
        goto code_r0x00010078b894;
      case (undefined *)0x10078b8a0:
        pppppppuVar16 = (uint *******)((long)pppppppuStack_1a8 << 6);
        pppppppuVar18 = pppppppuStack_1a8;
code_r0x00010078b8a8:
        unaff_x21 = (uint *******)((long)pppppppuVar14 + (long)pppppppuVar16);
code_r0x00010078b8ac:
        unaff_x19 = (uint *******)&pppppppuStack_c0;
        pppppppuStack_a0 = pppppppuVar14;
        pppppppuStack_98 = pppppppuVar14;
        pppppppuStack_90 = pppppppuVar17;
        pppppppuStack_88 = unaff_x21;
code_r0x00010078b8b8:
        pppppppuVar17 = (uint *******)0x16;
code_r0x00010078b8bc:
        param_3 = (char *)pppppppuVar26;
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar17);
        pppppppuStack_80 = (uint *******)0x0;
        pcVar6 = (char *)(uint *******)param_3;
        if (pppppppuVar18 != (uint *******)0x0) {
code_r0x00010078b8c8:
          unaff_x25 = (uint *******)0x0;
          pppppppuVar17 = (uint *******)&bStack_1a0;
          pppppppuStack_210 = (uint *******)param_3;
code_r0x00010078b8d4:
          unaff_x20 = (uint *******)((ulong)pppppppuVar17 | 1);
code_r0x00010078b8d8:
          pppppppuVar26 = (uint *******)((ulong)unaff_x19 | 1);
          pppppppuVar17 = (uint *******)((ulong)&ppppppuStack_208 | 1);
code_r0x00010078b8e4:
          pppppppuVar16 = pppppppuVar16 + -8;
          pppppppuStack_218 = pppppppuVar17;
code_r0x00010078b8ec:
          pppppppuVar16 = (uint *******)(((ulong)pppppppuVar16 >> 6) + 1);
code_r0x00010078b8f4:
          pppppppuStack_228 = pppppppuVar16;
code_r0x00010078b8f8:
          unaff_x27 = pppppppuVar14 + 8;
code_r0x00010078b8fc:
          unaff_x22 = (uint *******)0x3;
code_r0x00010078b900:
          unaff_x26 = unaff_x27;
          unaff_x23 = (uint *******)0x8000000000000000;
          unaff_x27 = unaff_x26;
          goto code_r0x00010078b940;
        }
        goto code_r0x00010078c258;
      case (undefined *)0x10078b8a8:
        goto code_r0x00010078b8a8;
      case (undefined *)0x10078b8b8:
        goto code_r0x00010078b8b8;
      case (undefined *)0x10078b8bc:
        goto code_r0x00010078b8bc;
      case (undefined *)0x10078b8d4:
        goto code_r0x00010078b8d4;
      case (undefined *)0x10078b8e4:
        goto code_r0x00010078b8e4;
      case (undefined *)0x10078b8f4:
        goto code_r0x00010078b8f4;
      case (undefined *)0x10078b8f8:
        goto code_r0x00010078b8f8;
      case (undefined *)0x10078b914:
        goto code_r0x00010078b914;
      case (undefined *)0x10078b920:
        goto code_r0x00010078b920;
      case (undefined *)0x10078b930:
        goto code_r0x00010078b930;
      case (undefined *)0x10078b940:
        goto code_r0x00010078b940;
      case (undefined *)0x10078b944:
        goto code_r0x00010078b944;
      case (undefined *)0x10078b948:
        goto code_r0x00010078b948;
      case (undefined *)0x10078b954:
        goto code_r0x00010078b954;
      case (undefined *)0x10078b964:
        goto code_r0x00010078b964;
      case (undefined *)0x10078b974:
        goto code_r0x00010078b974;
      case (undefined *)0x10078b988:
        goto code_r0x00010078b988;
      case (undefined *)0x10078b998:
        goto code_r0x00010078b998;
      case (undefined *)0x10078b9a8:
        goto code_r0x00010078b9a8;
      case (undefined *)0x10078b9ac:
        goto code_r0x00010078b9ac;
      case (undefined *)0x10078b9bc:
        goto code_r0x00010078b9bc;
      case (undefined *)0x10078b9c4:
        goto code_r0x00010078b9c4;
      case (undefined *)0x10078b9cc:
        goto code_r0x00010078b9cc;
      case (undefined *)0x10078b9d4:
        goto code_r0x00010078b9d4;
      case (undefined *)0x10078b9d8:
        goto code_r0x00010078b9d8;
      case (undefined *)0x10078b9dc:
        goto code_r0x00010078b9dc;
      case (undefined *)0x10078b9e8:
        goto code_r0x00010078b9e8;
      case (undefined *)0x10078ba14:
        goto code_r0x00010078ba14;
      case (undefined *)0x10078ba20:
        goto code_r0x00010078ba20;
      case (undefined *)0x10078ba2c:
        goto code_r0x00010078ba2c;
      case (undefined *)0x10078ba48:
        goto code_r0x00010078ba48;
      case (undefined *)0x10078ba58:
        goto code_r0x00010078ba58;
      case (undefined *)0x10078ba60:
        goto code_r0x00010078ba60;
      case (undefined *)0x10078ba68:
        goto code_r0x00010078ba68;
      case (undefined *)0x10078ba70:
        goto code_r0x00010078ba70;
      case (undefined *)0x10078ba78:
        goto code_r0x00010078ba78;
      case (undefined *)0x10078ba80:
        goto code_r0x00010078ba80;
      case (undefined *)0x10078ba88:
        goto code_r0x00010078ba88;
      case (undefined *)0x10078ba90:
        goto code_r0x00010078ba90;
      case (undefined *)0x10078ba98:
        goto code_r0x00010078ba98;
      case (undefined *)0x10078baa0:
        goto code_r0x00010078baa0;
      case (undefined *)0x10078baac:
        goto code_r0x00010078baac;
      case (undefined *)0x10078babc:
        goto code_r0x00010078babc;
      case (undefined *)0x10078bac4:
        goto code_r0x00010078bac4;
      case (undefined *)0x10078bad4:
        goto code_r0x00010078bad4;
      case (undefined *)0x10078badc:
        goto code_r0x00010078badc;
      case (undefined *)0x10078bae8:
        goto code_r0x00010078bae8;
      case (undefined *)0x10078baec:
        goto code_r0x00010078baec;
      case (undefined *)0x10078bb10:
        goto code_r0x00010078bb10;
      case (undefined *)0x10078bdfc:
        goto code_r0x00010078bdfc;
      case (undefined *)0x10078be04:
        goto code_r0x00010078be04;
      case (undefined *)0x10078be1c:
        goto code_r0x00010078be1c;
      case (undefined *)0x10078be30:
        goto code_r0x00010078be30;
      case (undefined *)0x10078be38:
        goto code_r0x00010078be38;
      case (undefined *)0x10078be50:
        goto code_r0x00010078be50;
      case (undefined *)0x10078be5c:
        goto code_r0x00010078be5c;
      case (undefined *)0x10078be64:
        goto code_r0x00010078be64;
      case (undefined *)0x10078be74:
        goto code_r0x00010078be74;
      case (undefined *)0x10078be7c:
        goto code_r0x00010078be7c;
      case (undefined *)0x10078be84:
        goto code_r0x00010078be84;
      case (undefined *)0x10078be94:
        goto code_r0x00010078be94;
      case (undefined *)0x10078bea4:
        goto code_r0x00010078bea4;
      case (undefined *)0x10078beac:
        goto code_r0x00010078beac;
      case (undefined *)0x10078bebc:
        goto code_r0x00010078bebc;
      case (undefined *)0x10078bec4:
        goto code_r0x00010078bec4;
      case (undefined *)0x10078bed4:
        goto code_r0x00010078bed4;
      case (undefined *)0x10078bef8:
        goto code_r0x00010078bef8;
      case (undefined *)0x10078bfbc:
        goto code_r0x00010078bfbc;
      case (undefined *)0x10078c188:
        goto code_r0x00010078c188;
      case (undefined *)0x10078c1c4:
        goto code_r0x00010078c1c4;
      case (undefined *)0x10078c1cc:
        goto code_r0x00010078c1cc;
      case (undefined *)0x10078c1fc:
        goto code_r0x00010078c1fc;
      case (undefined *)0x10078c200:
        goto code_r0x00010078c200;
      case (undefined *)0x10078c204:
        goto code_r0x00010078c204;
      case (undefined *)0x10078c228:
        goto code_r0x00010078c228;
      case (undefined *)0x10078c22c:
        goto code_r0x00010078c22c;
      case (undefined *)0x10078c23c:
        goto code_r0x00010078c23c;
      case (undefined *)0x10078c244:
        goto code_r0x00010078c244;
      case (undefined *)0x10078c264:
code_r0x00010078c264:
        ppppppuVar8 = unaff_x21[2];
        uStack_188 = SUB87(unaff_x21[3],0);
        uStack_181 = (undefined1)((ulong)unaff_x21[3] >> 0x38);
        uStack_190 = SUB81(ppppppuVar8,0);
        uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
        uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
code_r0x00010078c26c:
        pppppppuVar16 = (uint *******)0x1;
code_r0x00010078c270:
        pppppppuStack_100 = pppppppuVar16;
code_r0x00010078c274:
        bStack_1a0 = (byte)pppppppuVar14;
        pcVar6 = (char *)&ppppppuStack_208;
        param_4 = (uint *******)&bStack_1a0;
code_r0x00010078c280:
        FUN_1004b64d4(pcVar6,param_4);
code_r0x00010078c284:
        unaff_x27 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
        unaff_x22 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
code_r0x00010078c288:
        pppppppuVar14 = (uint *******)0x8000000000000000;
code_r0x00010078c28c:
        unaff_x24 = pppppppuVar26;
        param_3 = (char *)unaff_x24;
        if (unaff_x27 == pppppppuVar14) {
code_r0x00010078b350:
          *(uint ********)((long)param_3 + 8) = unaff_x22;
          *param_3 = '\x05';
code_r0x00010078b35c:
          lVar22 = ((ulong)((long)unaff_x26 - (long)unaff_x20) >> 5) + 1;
          while (lVar22 = lVar22 + -1, pppppppuVar23 = unaff_x21, lVar22 != 0) {
            FUN_100e077ec(unaff_x20);
            unaff_x20 = unaff_x20 + 4;
          }
          goto joined_r0x00010078c0c8;
        }
code_r0x00010078c298:
        unaff_x19 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078c29c:
        pppppppuVar26 = (uint *******)0x2;
code_r0x00010078c2a0:
        pppppppuVar15 = (uint *******)0x2;
        in_ZR = unaff_x23 == (uint *******)0x1;
code_r0x00010078c2a8:
        cVar9 = (char)pppppppuVar15;
        cVar25 = (char)pppppppuVar26;
        if (!(bool)in_ZR) {
code_r0x00010078c2ac:
          unaff_x20 = unaff_x21 + 8;
code_r0x00010078c2b0:
          pppppppuStack_118 = unaff_x20;
code_r0x00010078c2b4:
          pppppppuVar14 = (uint *******)(ulong)*(byte *)(unaff_x21 + 4);
code_r0x00010078c2b8:
          in_ZR = (int)pppppppuVar14 == 0x16;
code_r0x00010078c2bc:
          cVar25 = (char)pppppppuVar26;
          if ((bool)in_ZR) {
            pppppppuVar14 = (uint *******)0x2;
code_r0x00010078c2c4:
            cVar25 = (char)pppppppuVar26;
            cVar9 = (char)pppppppuVar14;
          }
          else {
            uStack_1ff = (uint7)*(undefined8 *)((long)unaff_x21 + 0x29);
            ppppppuStack_208._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x21);
            bStack_200 = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x21) >> 0x38);
            uStack_1f0 = SUB81(unaff_x21[7],0);
            uStack_1ef = (undefined7)((ulong)unaff_x21[7] >> 8);
            uStack_1f8 = SUB81(unaff_x21[6],0);
            uStack_1f7 = (undefined7)((ulong)unaff_x21[6] >> 8);
            pppppppuStack_100 = (uint *******)0x2;
            iVar13 = (int)pppppppuVar14;
            ppppppuStack_208._0_1_ = (byte)pppppppuVar14;
            if (iVar13 == 0x10) {
code_r0x00010078d110:
              cVar25 = (char)pppppppuVar26;
              uStack_140 = (uint *******)CONCAT62(uStack_140._2_6_,0x200);
              FUN_100e077ec(&ppppppuStack_208);
            }
            else if (iVar13 == 0x11) {
              puVar2 = (undefined8 *)CONCAT71(uStack_1ff,bStack_200);
              uVar30 = puVar2[1];
              uVar7 = *puVar2;
              uStack_198 = (undefined1)uVar30;
              uStack_197 = (undefined6)((ulong)uVar30 >> 8);
              uStack_191 = (undefined1)((ulong)uVar30 >> 0x38);
              bStack_1a0 = (byte)uVar7;
              bStack_19f = (byte)((ulong)uVar7 >> 8);
              uStack_19e = (undefined5)((ulong)uVar7 >> 0x10);
              bStack_199 = (byte)((ulong)uVar7 >> 0x38);
              uVar7 = puVar2[2];
              uStack_188 = (undefined7)puVar2[3];
              uStack_181 = (undefined1)((ulong)puVar2[3] >> 0x38);
              uStack_190 = (undefined1)uVar7;
              uStack_18f = (undefined6)((ulong)uVar7 >> 8);
              uStack_189 = (undefined1)((ulong)uVar7 >> 0x38);
              FUN_101429444(&uStack_140,&bStack_1a0);
              _free(puVar2);
            }
            else {
              if (iVar13 == 0x12) goto code_r0x00010078d110;
              FUN_101429444(&uStack_140,&ppppppuStack_208);
            }
            if (((ulong)uStack_140 & 1) != 0) {
              unaff_x24[1] = (uint ******)pppppppuStack_138;
              *(char *)unaff_x24 = '\x05';
              if (unaff_x27 != (uint *******)0x0) {
                _free(unaff_x22);
              }
              goto code_r0x00010078b35c;
            }
            cVar9 = uStack_140._1_1_;
          }
        }
        *(char *)unaff_x24 = cVar25;
        *(char *)((long)unaff_x24 + 1) = cVar9;
        unaff_x24[1] = (uint ******)unaff_x27;
        unaff_x24[2] = (uint ******)unaff_x22;
        unaff_x24[3] = (uint ******)unaff_x19;
        ppppppuStack_a8 = unaff_x24[3];
        pppppppuStack_b0 = (uint *******)unaff_x24[2];
        pppppppuStack_98 = (uint *******)unaff_x24[5];
        pppppppuStack_a0 = (uint *******)unaff_x24[4];
        pppppppuStack_90 = (uint *******)unaff_x24[6];
        pppppppuStack_b8 = (uint *******)unaff_x24[1];
        pppppppuStack_c0 = (uint *******)*unaff_x24;
        ppppppuVar8 = (uint ******)FUN_100fbc738(&pppppppuStack_120);
        if (ppppppuVar8 == (uint ******)0x0) goto code_r0x00010078d0a8;
        unaff_x24[1] = ppppppuVar8;
        *(char *)unaff_x24 = '\x05';
        goto code_r0x00010078d3b4;
      case (undefined *)0x10078c26c:
        goto code_r0x00010078c26c;
      case (undefined *)0x10078c274:
        goto code_r0x00010078c274;
      case (undefined *)0x10078c298:
        goto code_r0x00010078c298;
      case (undefined *)0x10078c29c:
        goto code_r0x00010078c29c;
      case (undefined *)0x10078c2a0:
        goto code_r0x00010078c2a0;
      case (undefined *)0x10078c2b4:
        goto code_r0x00010078c2b4;
      case (undefined *)0x10078c2b8:
        goto code_r0x00010078c2b8;
      case (undefined *)0x10078c2cc:
        goto code_r0x00010078c2cc;
      case (undefined *)0x10078c2d4:
        goto code_r0x00010078c2d4;
      case (undefined *)0x10078c2e4:
        goto code_r0x00010078c2e4;
      case (undefined *)0x10078c2f0:
        goto code_r0x00010078c2f0;
      case (undefined *)0x10078c2f4:
        goto code_r0x00010078c2f4;
      case (undefined *)0x10078c304:
        goto code_r0x00010078c304;
      case (undefined *)0x10078c310:
        goto code_r0x00010078c310;
      case (undefined *)0x10078c318:
        goto code_r0x00010078c318;
      case (undefined *)0x10078c324:
        goto code_r0x00010078c324;
      case (undefined *)0x10078c330:
        goto code_r0x00010078c330;
      case (undefined *)0x10078c338:
        goto code_r0x00010078c338;
      case (undefined *)0x10078c354:
        goto code_r0x00010078c354;
      case (undefined *)0x10078c358:
        goto code_r0x00010078c358;
      case (undefined *)0x10078c374:
        goto code_r0x00010078c374;
      case (undefined *)0x10078c390:
        goto code_r0x00010078c390;
      case (undefined *)0x10078c394:
        goto code_r0x00010078c394;
      case (undefined *)0x10078c3a4:
        goto code_r0x00010078c3a4;
      case (undefined *)0x10078c3b0:
        goto code_r0x00010078c3b0;
      case (undefined *)0x10078c3c4:
        goto code_r0x00010078c3c4;
      case (undefined *)0x10078c3d4:
        goto code_r0x00010078c3d4;
      case (undefined *)0x10078c3d8:
        goto code_r0x00010078c3d8;
      case (undefined *)0x10078c3e4:
        goto code_r0x00010078c3e4;
      case (undefined *)0x10078c3f4:
        goto code_r0x00010078c3f4;
      case (undefined *)0x10078c3f8:
        goto code_r0x00010078c3f8;
      case (undefined *)0x10078c410:
        goto code_r0x00010078c410;
      case (undefined *)0x10078c414:
        goto code_r0x00010078c414;
      case (undefined *)0x10078c420:
        goto code_r0x00010078c420;
      case (undefined *)0x10078c438:
        goto code_r0x00010078c438;
      case (undefined *)0x10078c444:
        goto code_r0x00010078c444;
      case (undefined *)0x10078c450:
        goto code_r0x00010078c450;
      case (undefined *)0x10078c470:
        goto code_r0x00010078c470;
      case (undefined *)0x10078c474:
        goto code_r0x00010078c474;
      case (undefined *)0x10078c478:
        goto code_r0x00010078c478;
      case (undefined *)0x10078c494:
        goto code_r0x00010078c494;
      case (undefined *)0x10078c4a4:
        goto code_r0x00010078c4a4;
      case (undefined *)0x10078c4b0:
        goto code_r0x00010078c4b0;
      case (undefined *)0x10078c4b4:
        goto code_r0x00010078c4b4;
      case (undefined *)0x10078c4d4:
        goto code_r0x00010078c4d4;
      case (undefined *)0x10078c4d8:
        goto code_r0x00010078c4d8;
      case (undefined *)0x10078c4f4:
        goto code_r0x00010078c4f4;
      case (undefined *)0x10078c4fc:
        goto code_r0x00010078c4fc;
      case (undefined *)0x10078c514:
        goto FUN_10078c514;
      case (undefined *)0x10078c524:
        goto code_r0x00010078c524;
      case (undefined *)0x10078c538:
        goto code_r0x00010078c538;
      case (undefined *)0x10078c554:
        goto code_r0x00010078c554;
      case (undefined *)0x10078c574:
        goto code_r0x00010078c574;
      case (undefined *)0x10078c5b0:
        goto code_r0x00010078c5b0;
      case (undefined *)0x10078c5f4:
        goto LAB_10078c5f4;
      case (undefined *)0x10078cbf8:
        uVar10 = 8;
        break;
      case (undefined *)0x10078cc30:
        pppppppuVar14 = (uint *******)&pppppppuStack_1c0;
        pcVar6 = (char *)pppppppuVar26;
code_r0x00010078cc34:
        param_3 = pcVar6;
        param_4 = pppppppuVar14 + 1;
        goto code_r0x00010078cc3c;
      case (undefined *)0x10078cc84:
        goto code_r0x00010078cc84;
      case (undefined *)0x10078ccd0:
code_r0x00010078ccd0:
        param_3 = (char *)pppppppuVar26;
        pppppppuVar15 = pppppppuStack_1b8;
code_r0x00010078ccd4:
        pppppppuVar26 = (uint *******)param_3;
code_r0x00010078ceb8:
        pppppppuStack_b8 = pppppppuVar15;
code_r0x00010078cebc:
        uVar10 = 1;
        break;
      case (undefined *)0x10078cd28:
        param_4 = (uint *******)&pppppppuStack_1b8;
        goto code_r0x00010078cd30;
      case (undefined *)0x10078cd58:
code_r0x00010078cd58:
        pppppppuVar27 = (uint *******)(double)SUB84(pppppppuVar27,0);
        goto code_r0x00010078cd5c;
      case (undefined *)0x10078cda4:
        pppppppuVar15 = (uint *******)((ulong)pcVar6 >> 0x10 & 0xffff);
        goto code_r0x00010078ceb8;
      case (undefined *)0x10078cdd4:
        pppppppuVar15 = pppppppuStack_1b8;
        pppppppuVar16 = pppppppuStack_1b0;
code_r0x00010078cdd8:
        pppppppuVar14 = (uint *******)0x6;
        pppppppuStack_b8 = pppppppuVar15;
        pppppppuStack_b0 = pppppppuVar16;
code_r0x00010078cde0:
        uVar10 = SUB81(pppppppuVar14,0);
        break;
      case (undefined *)0x10078ce14:
code_r0x00010078ce14:
        pppppppuStack_b8 = param_4;
        goto code_r0x00010078ce18;
      case (undefined *)0x10078ce74:
        pppppppuStack_b8 = (uint *******)((long)pcVar6 >> 0x20);
        goto code_r0x00010078d054;
      case (undefined *)0x10078cea8:
        pppppppuStack_c0 =
             (uint *******)((ulong)CONCAT61(pppppppuStack_c0._2_6_,(char)pppppppuVar14) << 8);
        goto code_r0x00010078d064;
      case (undefined *)0x10078ceb4:
        pppppppuVar15 = (uint *******)((ulong)pcVar6 >> 8 & 0xff);
        goto code_r0x00010078ceb8;
      case (undefined *)0x10078cf64:
        pppppppuStack_b8 = (uint *******)(long)(char)pppppppuVar14;
        goto code_r0x00010078d054;
      case (undefined *)0x10078cf7c:
        pppppppuStack_b8 = pppppppuStack_1b8;
        pppppppuStack_b0 = pppppppuStack_1b0;
        unaff_x19 = (uint *******)0x5;
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,5);
        goto code_r0x00010078cfb0;
      case (undefined *)0x10078d020:
        pppppppuStack_b8 = (uint *******)(long)(short)pppppppuVar16;
        goto code_r0x00010078d054;
      case (undefined *)0x10078d030:
        pppppppuStack_b8 = pppppppuStack_1b8;
        goto code_r0x00010078d034;
      case (undefined *)0x10078d050:
        pppppppuStack_b8 = pppppppuStack_1b8;
code_r0x00010078d054:
        uVar10 = 2;
        break;
      case (undefined *)0x10078d0cc:
        uVar10 = 7;
      }
code_r0x00010078d05c:
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
code_r0x00010078d064:
      goto code_r0x00010078d084;
    }
    if (uVar11 != 2) {
      in_OV = SBORROW4(uVar11,3);
      in_NG = (int)((byte)ppppppuStack_208 - 3) < 0;
      in_ZR = (byte)ppppppuStack_208 == 3;
      if (!(bool)in_ZR) {
        pppppppuVar17 = (uint *******)(ulong)bStack_200;
        pppppppuVar15 = pppppppuVar14;
        goto code_r0x00010078a584;
      }
code_r0x00010078a4b0:
      pcVar6 = (char *)pppppppuVar26;
      pppppppuVar23 = pppppppuStack_1b8;
      pppppppuVar17 = (uint *******)((ulong)param_3 & 0xff);
      pppppppuVar18 = (uint *******)&UNK_108c9b10c;
      uVar21 = (ulong)*(ushort *)(&UNK_108c9b10c + (long)pppppppuVar17 * 2);
      puVar20 = &UNK_10078a4cc + uVar21 * 4;
      pppppppuVar5 = (uint *******)param_3;
      pppppppuVar15 = pppppppuVar14;
      unaff_x22 = unaff_x22;
      pppppppuVar24 = unaff_x27;
      pppppppuVar26 = (uint *******)pcVar6;
      switch(pppppppuVar17) {
      case (uint *******)0x0:
      case (uint *******)0x49:
        goto code_r0x00010078ce2c;
      case (uint *******)0x1:
        goto code_r0x00010078ce40;
      case (uint *******)0x2:
        pppppppuStack_b8 = (uint *******)((ulong)param_3 >> 0x10 & 0xffff);
        goto code_r0x00010078ce48;
      case (uint *******)0x3:
        goto code_r0x00010078cdf4;
      case (uint *******)0x4:
        goto code_r0x00010078ccb8;
      case (uint *******)0x5:
        pppppppuVar15 = (uint *******)(long)(char)pppppppuVar14;
        goto code_r0x00010078cf10;
      case (uint *******)0x6:
        pppppppuVar15 = (uint *******)(long)(short)pppppppuVar16;
        goto code_r0x00010078cf60;
      case (uint *******)0x7:
        pppppppuVar15 = (uint *******)((long)param_3 >> 0x20);
        break;
      case (uint *******)0x8:
      case (uint *******)0x4c:
        pppppppuVar15 = pppppppuStack_1b8;
        break;
      case (uint *******)0x9:
        pppppppuVar27 = (uint *******)(double)SUB84(pppppppuVar27,0);
        param_3 = pcVar6;
        goto code_r0x00010078cd1c;
      case (uint *******)0xa:
        param_3 = pcVar6;
        pppppppuVar27 = pppppppuStack_1b8;
        goto code_r0x00010078cfcc;
      case (uint *******)0xb:
        goto code_r0x00010078cc6c;
      case (uint *******)0xc:
      case (uint *******)0x4e:
        param_4 = (uint *******)&pppppppuStack_1b8;
        param_3 = pcVar6;
      case (uint *******)0x16:
        thunk_FUN_108818e84(param_3,param_4);
        goto code_r0x00010078d0a8;
      case (uint *******)0xd:
        goto code_r0x00010078cf24;
      case (uint *******)0xe:
        goto code_r0x00010078cc08;
      case (uint *******)0xf:
        pppppppuStack_b8 = pppppppuStack_1b8;
        pppppppuStack_b0 = pppppppuStack_1b0;
      case (uint *******)0x2d:
code_r0x00010078cdbc:
        pppppppuVar14 = (uint *******)0x6;
        param_3 = (char *)pppppppuVar26;
        goto code_r0x00010078cff4;
      case (uint *******)0x10:
        pppppppuVar14 = (uint *******)0x8;
        goto code_r0x00010078cbd8;
      default:
        pppppppuStack_b8 = (uint *******)pppppppuStack_1b8[1];
        pppppppuStack_c0 = (uint *******)*pppppppuStack_1b8;
        ppppppuStack_a8 = pppppppuStack_1b8[3];
        pppppppuStack_b0 = (uint *******)pppppppuStack_1b8[2];
        thunk_FUN_1087febf0(pcVar6,&pppppppuStack_c0);
        goto code_r0x00010078c0cc;
      case (uint *******)0x12:
        pppppppuVar14 = (uint *******)0x7;
        param_3 = pcVar6;
        goto code_r0x00010078cff4;
      case (uint *******)0x13:
      case (uint *******)0x5a:
        pppppppuVar28 = (uint *******)pppppppuStack_1b8[1];
        pppppppuVar27 = (uint *******)*pppppppuStack_1b8;
        unaff_x21 = pppppppuStack_1b8;
      case (uint *******)0x55:
      case (uint *******)0x67:
code_r0x00010078be1c:
        pppppppuVar14 = (uint *******)&bStack_1a0;
        pppppppuStack_b8 = pppppppuVar28;
        pppppppuStack_c0 = pppppppuVar27;
        pppppppuVar28 = (uint *******)unaff_x21[3];
        pppppppuVar27 = (uint *******)unaff_x21[2];
        pcVar6 = (char *)pppppppuVar26;
        goto code_r0x00010078be28;
      case (uint *******)0x14:
        unaff_x21 = pppppppuStack_1b0;
        unaff_x23 = pppppppuStack_1b8;
        goto code_r0x00010078beb8;
      case (uint *******)0x15:
        pppppppuVar16 = (uint *******)((long)pppppppuStack_1a8 * 0x40);
        unaff_x21 = pppppppuStack_1b0 + (long)pppppppuStack_1a8 * 8;
        unaff_x19 = (uint *******)&pppppppuStack_c0;
        pppppppuStack_a0 = pppppppuStack_1b0;
        pppppppuStack_98 = pppppppuStack_1b0;
        pppppppuStack_90 = pppppppuStack_1b8;
        pppppppuStack_88 = unaff_x21;
        pppppppuVar15 = pppppppuStack_1b0;
        pppppppuVar18 = pppppppuStack_1a8;
        goto code_r0x00010078abf4;
      case (uint *******)0x17:
        goto code_r0x00010078cd00;
      case (uint *******)0x18:
        goto code_r0x00010078cc34;
      case (uint *******)0x19:
        goto code_r0x00010078ccc4;
      case (uint *******)0x1a:
        goto code_r0x00010078cbd8;
      case (uint *******)0x1b:
        goto code_r0x00010078cd98;
      case (uint *******)0x1c:
        goto code_r0x00010078ce14;
      case (uint *******)0x1d:
        goto code_r0x00010078ccdc;
      case (uint *******)0x1e:
        goto code_r0x00010078ce64;
      case (uint *******)0x1f:
        goto code_r0x00010078cc24;
      case (uint *******)0x20:
        goto code_r0x00010078ce54;
      case (uint *******)0x21:
        goto code_r0x00010078cbcc;
      case (uint *******)0x22:
        goto code_r0x00010078cc04;
      case (uint *******)0x23:
        goto code_r0x00010078cdf8;
      case (uint *******)0x24:
        goto code_r0x00010078cb50;
      case (uint *******)0x25:
        goto code_r0x00010078cc7c;
      case (uint *******)0x26:
        goto code_r0x00010078cb40;
      case (uint *******)0x28:
        goto code_r0x00010078ce90;
      case (uint *******)0x29:
        goto code_r0x00010078ab24;
      case (uint *******)0x2a:
        goto code_r0x00010078b274;
      case (uint *******)0x2b:
        goto code_r0x00010078a698;
      case (uint *******)0x2c:
        goto code_r0x00010078cdb0;
      case (uint *******)0x2e:
        goto code_r0x00010078cc98;
      case (uint *******)0x2f:
        goto code_r0x00010078cd08;
      case (uint *******)0x30:
        goto code_r0x00010078cbc4;
      case (uint *******)0x31:
      case (uint *******)0x42:
        goto code_r0x00010078ce60;
      case (uint *******)0x32:
        goto code_r0x00010078cf14;
      case (uint *******)0x33:
        goto code_r0x00010078cd68;
      case (uint *******)0x34:
        goto code_r0x00010078cf58;
      case (uint *******)0x35:
        goto code_r0x00010078cc50;
      case (uint *******)0x36:
        goto code_r0x00010078cf2c;
      case (uint *******)0x37:
        goto code_r0x00010078cb90;
      case (uint *******)0x38:
        goto code_r0x00010078cc28;
      case (uint *******)0x39:
        goto code_r0x00010078ce84;
      case (uint *******)0x3a:
        goto code_r0x00010078cb30;
      case (uint *******)0x3b:
        goto code_r0x00010078ccd0;
      case (uint *******)0x3c:
        goto code_r0x00010078caec;
      case (uint *******)0x3e:
        goto code_r0x00010078cfc0;
      case (uint *******)0x3f:
        goto code_r0x00010078bd78;
      case (uint *******)0x40:
        goto code_r0x00010078bf30;
      case (uint *******)0x41:
        goto code_r0x00010078b788;
      case (uint *******)0x43:
        goto code_r0x00010078ce6c;
      case (uint *******)0x44:
        goto code_r0x00010078cd5c;
      case (uint *******)0x45:
        goto code_r0x00010078cdcc;
      case (uint *******)0x46:
        goto code_r0x00010078cc88;
      case (uint *******)0x47:
        goto code_r0x00010078cf1c;
      case (uint *******)0x48:
        goto code_r0x00010078cfd8;
      case (uint *******)0x4a:
        goto code_r0x00010078d008;
      case (uint *******)0x4b:
        goto code_r0x00010078cd10;
      case (uint *******)0x4d:
        goto code_r0x00010078cc3c;
      case (uint *******)0x4f:
        goto code_r0x00010078cf34;
      case (uint *******)0x50:
        goto code_r0x00010078cbe8;
      case (uint *******)0x51:
        goto code_r0x00010078cd8c;
      case (uint *******)0x52:
        goto code_r0x00010078cbb0;
      case (uint *******)0x54:
        goto code_r0x00010078d084;
      case (uint *******)0x56:
        goto code_r0x00010078bf74;
      case (uint *******)0x57:
        goto code_r0x00010078b33c;
      case (uint *******)0x58:
        goto code_r0x00010078be3c;
      case (uint *******)0x59:
        goto code_r0x00010078be4c;
      case (uint *******)0x5b:
        goto code_r0x00010078be2c;
      case (uint *******)0x5c:
        goto code_r0x00010078bde8;
      case (uint *******)0x5d:
        goto code_r0x00010078be5c;
      case (uint *******)0x5e:
        goto code_r0x00010078be74;
      case (uint *******)0x5f:
        goto code_r0x00010078be34;
      case (uint *******)0x60:
        goto code_r0x00010078be8c;
      case (uint *******)0x61:
        goto code_r0x00010078be08;
      case (uint *******)0x62:
        goto code_r0x00010078be7c;
      case (uint *******)0x63:
        goto code_r0x00010078bdd4;
      case (uint *******)0x64:
        goto code_r0x00010078bdf0;
      case (uint *******)0x65:
        goto code_r0x00010078be64;
      case (uint *******)0x66:
        goto code_r0x00010078bdbc;
      case (uint *******)0x68:
        goto code_r0x00010078bdb4;
      case (uint *******)0x6a:
        goto code_r0x00010078beb0;
      case (uint *******)0x6b:
        goto code_r0x00010078a54c;
      case (uint *******)0x6c:
        goto code_r0x00010078a57c;
      case (uint *******)0x6d:
        goto code_r0x00010078a4f8;
      case (uint *******)0x6e:
        goto code_r0x00010078c35c;
      case (uint *******)0x6f:
      case (uint *******)0x8b:
        goto code_r0x00010078c368;
      case (uint *******)0x70:
        goto code_r0x00010078c270;
      case (uint *******)0x71:
        goto code_r0x00010078c2d0;
      case (uint *******)0x72:
        goto code_r0x00010078c1e0;
      case (uint *******)0x73:
      case (uint *******)0x9b:
        goto code_r0x00010078c390;
      case (uint *******)0x74:
        goto code_r0x00010078c3f0;
      case (uint *******)0x75:
        goto code_r0x00010078c2f0;
      case (uint *******)0x76:
        goto code_r0x00010078c48c;
      case (uint *******)0x77:
        goto code_r0x00010078c250;
      case (uint *******)0x78:
        goto code_r0x00010078c428;
      case (uint *******)0x79:
        goto code_r0x00010078c1bc;
      case (uint *******)0x7a:
        goto code_r0x00010078c224;
      case (uint *******)0x7b:
        goto code_r0x00010078c3c8;
      case (uint *******)0x7c:
        goto code_r0x00010078c184;
      case (uint *******)0x7d:
        goto code_r0x00010078c2a8;
      case (uint *******)0x7e:
code_r0x00010078c140:
        thunk_FUN_10881f944(pppppppuVar5,&ppppppuStack_1e0,pppppppuVar14 + 1);
        goto LAB_10078a464;
      case (uint *******)0x80:
        goto code_r0x00010078c4f0;
      case (uint *******)0x81:
        goto code_r0x00010078b6fc;
      case (uint *******)0x82:
        goto code_r0x00010078b8ac;
      case (uint *******)0x83:
      case (uint *******)0xfb:
        goto code_r0x00010078b408;
      case (uint *******)0x84:
        goto code_r0x00010078c39c;
      case (uint *******)0x85:
        goto code_r0x00010078c3b0;
      case (uint *******)0x86:
        goto code_r0x00010078c2e8;
      case (uint *******)0x87:
        goto code_r0x00010078c348;
      case (uint *******)0x88:
        goto code_r0x00010078c258;
      case (uint *******)0x89:
        goto code_r0x00010078c408;
      case (uint *******)0x8a:
        goto code_r0x00010078c468;
      case (uint *******)0x8c:
        goto code_r0x00010078c4dc;
      case (uint *******)0x8d:
        goto code_r0x00010078c2c8;
      case (uint *******)0x8e:
        goto code_r0x00010078c490;
      case (uint *******)0x8f:
        goto code_r0x00010078c22c;
      case (uint *******)0x90:
        goto code_r0x00010078c284;
      case (uint *******)0x91:
        goto code_r0x00010078c430;
      case (uint *******)0x92:
        goto code_r0x00010078c1e4;
      case (uint *******)0x93:
        goto code_r0x00010078c310;
      case (uint *******)0x94:
        goto code_r0x00010078c1b8;
      case (uint *******)0x96:
        goto code_r0x00010078c568;
      case (uint *******)0x97:
        goto code_r0x00010078b734;
      case (uint *******)0x98:
        goto code_r0x00010078b82c;
      case (uint *******)0x99:
        goto code_r0x00010078ab74;
      case (uint *******)0x9a:
        goto code_r0x00010078c37c;
      case (uint *******)0x9c:
        goto code_r0x00010078c2ac;
      case (uint *******)0x9d:
      case (uint *******)0xb9:
        goto code_r0x00010078c30c;
      case (uint *******)0x9e:
      case (uint *******)0xbe:
        goto code_r0x00010078c21c;
      case (uint *******)0x9f:
      case (uint *******)0xb0:
        goto code_r0x00010078c3cc;
      case (uint *******)0xa0:
        goto code_r0x00010078c42c;
      case (uint *******)0xa1:
      case (uint *******)0xb2:
        goto code_r0x00010078c32c;
      case (uint *******)0xa2:
        goto code_r0x00010078c4b4;
      case (uint *******)0xa3:
        goto code_r0x00010078c28c;
      case (uint *******)0xa4:
        goto code_r0x00010078c45c;
      case (uint *******)0xa5:
        goto code_r0x00010078c1f4;
      case (uint *******)0xa6:
        goto code_r0x00010078c254;
      case (uint *******)0xa7:
        goto code_r0x00010078c3fc;
      case (uint *******)0xa8:
        goto code_r0x00010078c1b4;
      case (uint *******)0xa9:
        goto code_r0x00010078c2dc;
      case (uint *******)0xaa:
        goto code_r0x00010078c17c;
      case (uint *******)0xac:
        goto code_r0x00010078c52c;
      case (uint *******)0xad:
        goto code_r0x00010078b718;
      case (uint *******)0xae:
        goto code_r0x00010078b870;
      case (uint *******)0xaf:
        goto code_r0x00010078b068;
      case (uint *******)0xb1:
        goto code_r0x00010078c3d8;
      case (uint *******)0xb3:
        goto code_r0x00010078c38c;
      case (uint *******)0xb4:
        goto code_r0x00010078c29c;
      case (uint *******)0xb5:
        goto code_r0x00010078c44c;
      case (uint *******)0xb6:
        goto code_r0x00010078c4ac;
      case (uint *******)0xb7:
        goto code_r0x00010078c3ac;
      case (uint *******)0xb8:
        goto code_r0x00010078c50c;
      case (uint *******)0xba:
        goto code_r0x00010078c4cc;
      case (uint *******)0xbb:
        goto code_r0x00010078c26c;
      case (uint *******)0xbc:
        goto code_r0x00010078c2bc;
      case (uint *******)0xbd:
        goto code_r0x00010078c46c;
      case (uint *******)0xbf:
        goto code_r0x00010078c34c;
      case (uint *******)0xc0:
        goto code_r0x00010078c1fc;
      case (uint *******)0xc2:
        goto code_r0x00010078c5ac;
      case (uint *******)0xc3:
        goto code_r0x00010078b758;
      case (uint *******)0xc4:
        goto code_r0x00010078b7f8;
      case (uint *******)0xc5:
        goto code_r0x00010078a6e4;
      case (uint *******)0xc7:
        goto code_r0x00010078a8b4;
      case (uint *******)0xc8:
        goto code_r0x00010078a6cc;
      case (uint *******)0xc9:
        goto code_r0x00010078a778;
      case (uint *******)0xca:
        goto code_r0x00010078a558;
      case (uint *******)0xcb:
        goto code_r0x00010078a940;
      case (uint *******)0xcc:
        goto code_r0x00010078a9cc;
      case (uint *******)0xcd:
        goto code_r0x00010078a804;
      case (uint *******)0xce:
        goto code_r0x00010078aae8;
      case (uint *******)0xcf:
        goto code_r0x00010078a5e4;
      case (uint *******)0xd0:
        goto code_r0x00010078aa58;
      case (uint *******)0xd1:
        goto code_r0x00010078a960;
      case (uint *******)0xd2:
        goto code_r0x00010078a97c;
      case (uint *******)0xd3:
        goto code_r0x00010078a92c;
      case (uint *******)0xd4:
        goto code_r0x00010078a950;
      case (uint *******)0xd5:
        goto code_r0x00010078a8f8;
      case (uint *******)0xd6:
        goto code_r0x00010078a998;
      case (uint *******)0xd7:
        goto code_r0x00010078a9bc;
      case (uint *******)0xd8:
        goto code_r0x00010078a958;
      case (uint *******)0xd9:
        goto code_r0x00010078a9e0;
      case (uint *******)0xda:
        goto code_r0x00010078a914;
      case (uint *******)0xdb:
        goto code_r0x00010078a9c4;
      case (uint *******)0xdc:
        goto code_r0x00010078a7f0;
      case (uint *******)0xdd:
        goto code_r0x00010078a900;
      case (uint *******)0xde:
        goto code_r0x00010078a9a0;
      case (uint *******)0xdf:
        goto code_r0x00010078a7dc;
      case (uint *******)0xe0:
        goto code_r0x00010078a934;
      case (uint *******)0xe1:
      case (uint *******)0xe2:
        goto code_r0x00010078a7a8;
      case (uint *******)0xe3:
        goto code_r0x00010078aa3c;
      case (uint *******)0xe4:
        goto code_r0x00010078aa50;
      case (uint *******)0xe6:
        goto code_r0x00010078a510;
      case (uint *******)0xe7:
        goto code_r0x00010078ba58;
      case (uint *******)0xe8:
        goto code_r0x00010078ba64;
      case (uint *******)0xe9:
        goto code_r0x00010078ba20;
      case (uint *******)0xea:
        goto code_r0x00010078ba48;
      case (uint *******)0xeb:
        goto code_r0x00010078b964;
      case (uint *******)0xec:
        goto code_r0x00010078ba74;
      case (uint *******)0xed:
        goto code_r0x00010078ba8c;
      case (uint *******)0xee:
        goto code_r0x00010078ba50;
      case (uint *******)0xef:
        goto code_r0x00010078baa4;
      case (uint *******)0xf0:
      case (uint *******)0xfe:
        goto code_r0x00010078b9a0;
      case (uint *******)0xf1:
        goto code_r0x00010078ba94;
      case (uint *******)0xf2:
        goto code_r0x00010078b900;
      case (uint *******)0xf3:
        goto code_r0x00010078b974;
      case (uint *******)0xf4:
        goto code_r0x00010078ba7c;
      case (uint *******)0xf5:
        goto code_r0x00010078b860;
      case (uint *******)0xf6:
        goto code_r0x00010078ba30;
      case (uint *******)0xf7:
        goto code_r0x00010078b84c;
      case (uint *******)0xf9:
        goto code_r0x00010078bac8;
      case (uint *******)0xfa:
        goto code_r0x00010078b3e4;
      case (uint *******)0xfc:
        goto code_r0x00010078afdc;
      case (uint *******)0xfd:
        goto code_r0x00010078b98c;
      case (uint *******)0xff:
        goto code_r0x00010078b940;
      }
code_r0x00010078cfec:
      pppppppuVar14 = (uint *******)0x2;
      param_3 = (char *)pppppppuVar26;
      pppppppuStack_b8 = pppppppuVar15;
      goto code_r0x00010078cff4;
    }
    pppppppuVar17 = (uint *******)(ulong)bStack_200;
    in_ZR = 1;
code_r0x00010078a540:
    pppppppuVar18 = (uint *******)&UNK_108c9b138;
    puVar20 = &UNK_10078a558;
    param_3 = pcVar6;
    pppppppuVar15 = pppppppuVar14;
code_r0x00010078a54c:
    pcVar6 = param_3;
    in_x13 = (ulong)*(ushort *)((long)pppppppuVar18 + (long)pppppppuVar17 * 2);
    puVar20 = puVar20 + in_x13 * 4;
    param_3 = pcVar6;
    pppppppuVar5 = (uint *******)pcVar6;
    pppppppuVar14 = pppppppuVar15;
    pppppppuVar23 = unaff_x21;
    pppppppuVar19 = unaff_x21;
    switch(puVar20) {
    case (undefined *)0x10078a558:
code_r0x00010078a558:
      pppppppuVar28 = (uint *******)pppppppuStack_1b8[1];
      pppppppuVar27 = (uint *******)*pppppppuStack_1b8;
      unaff_x21 = pppppppuStack_1b8;
      goto code_r0x00010078a560;
    case (undefined *)0x10078a584:
code_r0x00010078a584:
      pppppppuVar18 = (uint *******)&UNK_108c9b0e0;
      puVar20 = &UNK_10078a59c;
      uVar21 = (ulong)*(ushort *)(&UNK_108c9b0e0 + (long)pppppppuVar17 * 2);
      pppppppuVar14 = pppppppuVar15;
code_r0x00010078a594:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar5 = (uint *******)pcVar6;
      pppppppuVar15 = pppppppuVar14;
      pppppppuVar23 = unaff_x20;
      pppppppuVar19 = unaff_x21;
      unaff_x22 = unaff_x22;
      pppppppuVar24 = unaff_x27;
      pppppppuVar26 = (uint *******)param_3;
      pppppppuVar26 = (uint *******)param_3;
      pppppppuVar26 = (uint *******)param_3;
      pppppppuVar26 = (uint *******)param_3;
      pppppppuVar26 = (uint *******)param_3;
      pppppppuVar26 = (uint *******)param_3;
      switch(puVar20 + uVar21 * 4) {
      case (undefined *)0x10078a59c:
        goto code_r0x00010078a59c;
      case (undefined *)0x10078a5c8:
        goto code_r0x00010078a5c8;
      case (undefined *)0x10078a5e0:
        unaff_x21 = pppppppuStack_1b8;
        goto code_r0x00010078a5e4;
      case (undefined *)0x10078a61c:
        goto code_r0x00010078a61c;
      case (undefined *)0x10078a628:
        goto code_r0x00010078a628;
      case (undefined *)0x10078a64c:
        goto code_r0x00010078a64c;
      case (undefined *)0x10078a6b4:
code_r0x00010078a6b4:
        bStack_200 = (byte)pppppppuVar14;
        uStack_1ff = (uint7)((ulong)pppppppuVar14 >> 8);
        goto LAB_10078a6b8;
      case (undefined *)0x10078a768:
        goto code_r0x00010078a768;
      case (undefined *)0x10078a79c:
        goto code_r0x00010078a79c;
      case (undefined *)0x10078a7b4:
        goto code_r0x00010078a7b4;
      case (undefined *)0x10078a848:
        goto code_r0x00010078a848;
      case (undefined *)0x10078a878:
        goto code_r0x00010078a878;
      case (undefined *)0x10078a8ac:
        goto code_r0x00010078a8ac;
      case (undefined *)0x10078a8c0:
        goto code_r0x00010078a8c0;
      case (undefined *)0x10078a8d4:
        goto code_r0x00010078a8d4;
      case (undefined *)0x10078a984:
        goto code_r0x00010078a984;
      case (undefined *)0x10078a9c8:
        goto code_r0x00010078a9c8;
      case (undefined *)0x10078a9d0:
        goto code_r0x00010078a9d0;
      case (undefined *)0x10078a9e4:
        goto code_r0x00010078a9e4;
      case (undefined *)0x10078a9fc:
        goto code_r0x00010078a9fc;
      case (undefined *)0x10078aa04:
        goto code_r0x00010078aa04;
      case (undefined *)0x10078aa10:
        goto code_r0x00010078aa10;
      case (undefined *)0x10078aa20:
        goto code_r0x00010078aa20;
      case (undefined *)0x10078aa28:
        goto code_r0x00010078aa28;
      case (undefined *)0x10078aa30:
        goto code_r0x00010078aa30;
      case (undefined *)0x10078aa4c:
        goto code_r0x00010078aa4c;
      case (undefined *)0x10078aa68:
        goto code_r0x00010078aa68;
      case (undefined *)0x10078aa70:
        goto code_r0x00010078aa70;
      case (undefined *)0x10078aa8c:
        goto code_r0x00010078aa8c;
      case (undefined *)0x10078aa94:
        goto code_r0x00010078aa94;
      case (undefined *)0x10078aa9c:
        goto code_r0x00010078aa9c;
      case (undefined *)0x10078aab0:
        goto code_r0x00010078aab0;
      case (undefined *)0x10078ab0c:
        goto code_r0x00010078ab0c;
      case (undefined *)0x10078ab20:
        goto code_r0x00010078ab20;
      case (undefined *)0x10078ab28:
        goto code_r0x00010078ab28;
      case (undefined *)0x10078abb8:
        goto code_r0x00010078abb8;
      case (undefined *)0x10078abf4:
code_r0x00010078abf4:
        unaff_x24 = (uint *******)0x16;
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
        goto code_r0x00010078ac00;
      case (undefined *)0x10078ac44:
        goto code_r0x00010078ac44;
      case (undefined *)0x10078aca8:
        goto code_r0x00010078aca8;
      case (undefined *)0x10078af6c:
        pppppppuVar15 = pppppppuStack_1b0;
        pppppppuVar17 = pppppppuStack_1b8;
        pppppppuVar18 = pppppppuStack_1a8;
        goto code_r0x00010078af74;
      case (undefined *)0x10078b138:
        goto code_r0x00010078b138;
      case (undefined *)0x10078b344:
        goto code_r0x00010078b344;
      case (undefined *)0x10078b40c:
        goto code_r0x00010078b40c;
      case (undefined *)0x10078b4d8:
        goto code_r0x00010078b4d8;
      case (undefined *)0x10078b7cc:
        goto code_r0x00010078b7cc;
      case (undefined *)0x10078b7e8:
        goto code_r0x00010078b7e8;
      case (undefined *)0x10078b804:
        goto code_r0x00010078b804;
      case (undefined *)0x10078b828:
        goto code_r0x00010078b828;
      case (undefined *)0x10078b858:
        goto code_r0x00010078b858;
      case (undefined *)0x10078b8c8:
        goto code_r0x00010078b8c8;
      case (undefined *)0x10078b8fc:
        goto code_r0x00010078b8fc;
      case (undefined *)0x10078b940:
        goto code_r0x00010078b940;
      case (undefined *)0x10078b97c:
        goto code_r0x00010078b97c;
      case (undefined *)0x10078baf0:
        goto code_r0x00010078baf0;
      case (undefined *)0x10078bb28:
        goto code_r0x00010078bb28;
      case (undefined *)0x10078bb34:
        goto code_r0x00010078bb34;
      case (undefined *)0x10078be3c:
code_r0x00010078be3c:
        unaff_x21 = pppppppuStack_1b8;
        goto code_r0x00010078be40;
      case (undefined *)0x10078be48:
        goto code_r0x00010078be48;
      case (undefined *)0x10078be84:
        goto code_r0x00010078be84;
      case (undefined *)0x10078be8c:
        goto code_r0x00010078be8c;
      case (undefined *)0x10078bea4:
        goto code_r0x00010078bea4;
      case (undefined *)0x10078beb8:
        goto code_r0x00010078beb8;
      case (undefined *)0x10078bec0:
        goto code_r0x00010078bec0;
      case (undefined *)0x10078bed8:
        goto code_r0x00010078bed8;
      case (undefined *)0x10078bee4:
        goto code_r0x00010078bee4;
      case (undefined *)0x10078beec:
        goto code_r0x00010078beec;
      case (undefined *)0x10078befc:
        goto code_r0x00010078befc;
      case (undefined *)0x10078bf04:
        goto code_r0x00010078bf04;
      case (undefined *)0x10078bf0c:
        goto code_r0x00010078bf0c;
      case (undefined *)0x10078bf1c:
        goto code_r0x00010078bf1c;
      case (undefined *)0x10078bf2c:
        goto code_r0x00010078bf2c;
      case (undefined *)0x10078bf34:
        goto code_r0x00010078bf34;
      case (undefined *)0x10078bf38:
        goto code_r0x00010078bf38;
      case (undefined *)0x10078bf44:
        goto code_r0x00010078bf44;
      case (undefined *)0x10078bf4c:
        goto code_r0x00010078bf4c;
      case (undefined *)0x10078bf5c:
        goto code_r0x00010078bf5c;
      case (undefined *)0x10078bf80:
        goto code_r0x00010078bf80;
      case (undefined *)0x10078bf84:
        goto code_r0x00010078bf84;
      case (undefined *)0x10078c000:
        goto code_r0x00010078c000;
      case (undefined *)0x10078c044:
        unaff_x21 = pppppppuStack_1b0;
        unaff_x25 = pppppppuStack_1b8;
        goto code_r0x00010078c048;
      case (undefined *)0x10078c210:
        goto code_r0x00010078c210;
      case (undefined *)0x10078c24c:
        goto code_r0x00010078c24c;
      case (undefined *)0x10078c254:
        goto code_r0x00010078c254;
      case (undefined *)0x10078c284:
        goto code_r0x00010078c284;
      case (undefined *)0x10078c288:
        goto code_r0x00010078c288;
      case (undefined *)0x10078c28c:
        goto code_r0x00010078c28c;
      case (undefined *)0x10078c2b0:
        goto code_r0x00010078c2b0;
      case (undefined *)0x10078c2b4:
        goto code_r0x00010078c2b4;
      case (undefined *)0x10078c2c4:
        goto code_r0x00010078c2c4;
      case (undefined *)0x10078c2cc:
        goto code_r0x00010078c2cc;
      case (undefined *)0x10078c2ec:
        goto code_r0x00010078c2ec;
      case (undefined *)0x10078c2f4:
        goto code_r0x00010078c2f4;
      case (undefined *)0x10078c2fc:
        goto code_r0x00010078c2fc;
      case (undefined *)0x10078c320:
        goto code_r0x00010078c320;
      case (undefined *)0x10078c324:
        goto code_r0x00010078c324;
      case (undefined *)0x10078c328:
        goto code_r0x00010078c328;
      case (undefined *)0x10078c33c:
        goto code_r0x00010078c33c;
      case (undefined *)0x10078c340:
        goto code_r0x00010078c340;
      case (undefined *)0x10078c354:
        goto code_r0x00010078c354;
      case (undefined *)0x10078c35c:
        goto code_r0x00010078c35c;
      case (undefined *)0x10078c36c:
        goto code_r0x00010078c36c;
      case (undefined *)0x10078c378:
        goto code_r0x00010078c378;
      case (undefined *)0x10078c37c:
        goto code_r0x00010078c37c;
      case (undefined *)0x10078c38c:
        goto code_r0x00010078c38c;
      case (undefined *)0x10078c398:
        goto code_r0x00010078c398;
      case (undefined *)0x10078c3a0:
        goto code_r0x00010078c3a0;
      case (undefined *)0x10078c3ac:
        goto code_r0x00010078c3ac;
      case (undefined *)0x10078c3b8:
        goto code_r0x00010078c3b8;
      case (undefined *)0x10078c3c0:
        goto code_r0x00010078c3c0;
      case (undefined *)0x10078c3dc:
        goto code_r0x00010078c3dc;
      case (undefined *)0x10078c3e0:
        goto code_r0x00010078c3e0;
      case (undefined *)0x10078c3fc:
        goto code_r0x00010078c3fc;
      case (undefined *)0x10078c418:
        goto code_r0x00010078c418;
      case (undefined *)0x10078c41c:
        goto code_r0x00010078c41c;
      case (undefined *)0x10078c42c:
        goto code_r0x00010078c42c;
      case (undefined *)0x10078c438:
        goto code_r0x00010078c438;
      case (undefined *)0x10078c44c:
        goto code_r0x00010078c44c;
      case (undefined *)0x10078c45c:
        goto code_r0x00010078c45c;
      case (undefined *)0x10078c460:
        goto code_r0x00010078c460;
      case (undefined *)0x10078c46c:
        goto code_r0x00010078c46c;
      case (undefined *)0x10078c47c:
        goto code_r0x00010078c47c;
      case (undefined *)0x10078c480:
        goto code_r0x00010078c480;
      case (undefined *)0x10078c498:
        goto code_r0x00010078c498;
      case (undefined *)0x10078c49c:
        goto code_r0x00010078c49c;
      case (undefined *)0x10078c4a8:
        goto code_r0x00010078c4a8;
      case (undefined *)0x10078c4c0:
        goto code_r0x00010078c4c0;
      case (undefined *)0x10078c4cc:
        goto code_r0x00010078c4cc;
      case (undefined *)0x10078c4d8:
        goto code_r0x00010078c4d8;
      case (undefined *)0x10078c4f8:
        goto code_r0x00010078c4f8;
      case (undefined *)0x10078c4fc:
        goto code_r0x00010078c4fc;
      case (undefined *)0x10078c500:
        goto code_r0x00010078c500;
      case (undefined *)0x10078c51c:
        goto code_r0x00010078c51c;
      case (undefined *)0x10078c52c:
        goto code_r0x00010078c52c;
      case (undefined *)0x10078c538:
        goto code_r0x00010078c538;
      case (undefined *)0x10078c53c:
        goto code_r0x00010078c53c;
      case (undefined *)0x10078c55c:
        goto code_r0x00010078c55c;
      case (undefined *)0x10078c560:
        goto code_r0x00010078c560;
      case (undefined *)0x10078c57c:
        goto code_r0x00010078c57c;
      case (undefined *)0x10078c584:
        goto code_r0x00010078c584;
      case (undefined *)0x10078c59c:
        goto code_r0x00010078c59c;
      case (undefined *)0x10078c5ac:
        goto code_r0x00010078c5ac;
      case (undefined *)0x10078c5c0:
        goto code_r0x00010078c5c0;
      case (undefined *)0x10078c5dc:
        goto code_r0x00010078c5dc;
      case (undefined *)0x10078c5fc:
        goto code_r0x00010078c5fc;
      case (undefined *)0x10078c638:
        goto code_r0x00010078c638;
      case (undefined *)0x10078c67c:
        goto code_r0x00010078c67c;
      case (undefined *)0x10078cbbc:
        goto code_r0x00010078cbbc;
      case (undefined *)0x10078cbf0:
        uVar10 = 8;
        break;
      case (undefined *)0x10078cc00:
        pppppppuVar14 = (uint *******)0x8;
        pcVar6 = param_3;
        goto code_r0x00010078cc04;
      case (undefined *)0x10078cc10:
        goto code_r0x00010078cc10;
      case (undefined *)0x10078cc1c:
        goto code_r0x00010078cc1c;
      case (undefined *)0x10078cc20:
        goto code_r0x00010078cc20;
      case (undefined *)0x10078cc60:
        goto code_r0x00010078cc60;
      case (undefined *)0x10078cc78:
code_r0x00010078cc7c:
        thunk_FUN_1087ec8dc(param_3);
      case (undefined *)0x10078cc80:
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cc94:
        goto code_r0x00010078cc94;
      case (undefined *)0x10078cc9c:
        goto code_r0x00010078cc9c;
      case (undefined *)0x10078cca4:
        pcVar6 = param_3;
      case (undefined *)0x10078cca8:
        thunk_FUN_1087ebd5c(pcVar6);
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078ccb8:
code_r0x00010078ccb8:
        pppppppuStack_b8 = pppppppuStack_1b8;
        goto code_r0x00010078ce48;
      case (undefined *)0x10078ccc8:
        goto code_r0x00010078ccc8;
      case (undefined *)0x10078ccd4:
        goto code_r0x00010078ccd4;
      case (undefined *)0x10078ccd8:
        goto code_r0x00010078ccd8;
      case (undefined *)0x10078ccf4:
        pppppppuVar14 = (uint *******)&pppppppuStack_1c0;
      case (undefined *)0x10078ccf8:
        param_4 = pppppppuVar14 + 1;
code_r0x00010078cd00:
        thunk_FUN_10880e800(param_3,param_4);
code_r0x00010078cd04:
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cd04:
        goto code_r0x00010078cd04;
      case (undefined *)0x10078cd0c:
        goto code_r0x00010078cd0c;
      case (undefined *)0x10078cd1c:
code_r0x00010078cd1c:
code_r0x00010078cfcc:
        pppppppuVar14 = (uint *******)0x3;
        pppppppuStack_b8 = pppppppuVar27;
        goto code_r0x00010078cff4;
      case (undefined *)0x10078cd20:
        pppppppuVar27 = (uint *******)(double)SUB84(pppppppuVar27,0);
        goto code_r0x00010078cd24;
      case (undefined *)0x10078cd3c:
        thunk_FUN_10881a35c(param_3,&pppppppuStack_1b8);
      case (undefined *)0x10078cd4c:
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cd58:
        goto code_r0x00010078cd58;
      case (undefined *)0x10078cd68:
        goto code_r0x00010078cd68;
      case (undefined *)0x10078cd88:
        goto code_r0x00010078cd88;
      case (undefined *)0x10078cd94:
        goto code_r0x00010078cd94;
      case (undefined *)0x10078cd9c:
        goto code_r0x00010078cd9c;
      case (undefined *)0x10078cda0:
        goto code_r0x00010078cda0;
      case (undefined *)0x10078cdac:
        pppppppuVar14 = (uint *******)((ulong)pcVar6 >> 0x10 & 0xffff);
code_r0x00010078cdb0:
code_r0x00010078ced4:
        pppppppuVar17 = (uint *******)0x1;
        pppppppuStack_b8 = pppppppuVar14;
        goto code_r0x00010078d078;
      case (undefined *)0x10078cdb0:
        goto code_r0x00010078cdb0;
      case (undefined *)0x10078cdbc:
        goto code_r0x00010078cdbc;
      case (undefined *)0x10078cdc4:
        pppppppuStack_b8 = pppppppuStack_1b8;
        pppppppuStack_b0 = pppppppuStack_1b0;
        pcVar6 = param_3;
code_r0x00010078cdcc:
        param_3 = pcVar6;
        pppppppuVar14 = (uint *******)0x6;
      case (undefined *)0x10078cdd0:
        uVar10 = SUB81(pppppppuVar14,0);
        break;
      case (undefined *)0x10078cdd8:
        goto code_r0x00010078cdd8;
      case (undefined *)0x10078cde0:
        goto code_r0x00010078cde0;
      case (undefined *)0x10078cde8:
        goto code_r0x00010078cde8;
      case (undefined *)0x10078cdfc:
        pcVar6 = param_3;
        pppppppuStack_b8 = param_4;
        goto code_r0x00010078ce6c;
      case (undefined *)0x10078ce0c:
        pppppppuVar14 = (uint *******)((long)pcVar6 >> 0x20);
        pcVar6 = param_3;
        goto code_r0x00010078d008;
      case (undefined *)0x10078ce2c:
code_r0x00010078ce2c:
        pppppppuStack_c0 =
             (uint *******)((ulong)CONCAT61(pppppppuStack_c0._2_6_,(char)pppppppuVar14) << 8);
code_r0x00010078ce38:
code_r0x00010078ce3c:
        goto code_r0x00010078d084;
      case (undefined *)0x10078ce38:
        goto code_r0x00010078ce38;
      case (undefined *)0x10078ce40:
code_r0x00010078ce40:
        pppppppuStack_b8 = (uint *******)((ulong)pppppppuVar5 >> 8 & 0xff);
        goto code_r0x00010078ce48;
      case (undefined *)0x10078ce50:
        pppppppuStack_c0 =
             (uint *******)((ulong)CONCAT61(pppppppuStack_c0._2_6_,(char)pppppppuVar14) << 8);
        pcVar6 = param_3;
code_r0x00010078ce54:
        pppppppuStack_c0 = (uint *******)((ulong)pppppppuStack_c0 & 0xffffffffffffff00);
        pppppppuVar26 = (uint *******)pcVar6;
        goto code_r0x00010078ce58;
      case (undefined *)0x10078ce5c:
        goto code_r0x00010078ce5c;
      case (undefined *)0x10078ce64:
code_r0x00010078ce64:
        pppppppuVar14 = (uint *******)((ulong)pppppppuVar5 >> 8 & 0xff);
      case (undefined *)0x10078ce68:
        goto code_r0x00010078ce68;
      case (undefined *)0x10078ce80:
        pppppppuStack_b8 = pppppppuVar14;
        goto code_r0x00010078d074;
      case (undefined *)0x10078ce84:
        goto code_r0x00010078ce84;
      case (undefined *)0x10078ce8c:
        goto code_r0x00010078ce8c;
      case (undefined *)0x10078ce9c:
        goto code_r0x00010078ce9c;
      case (undefined *)0x10078cec4:
        pppppppuStack_c0 =
             (uint *******)((ulong)CONCAT61(pppppppuStack_c0._2_6_,(char)pppppppuVar14) << 8);
      case (undefined *)0x10078cec8:
        pppppppuStack_c0 = (uint *******)((ulong)pppppppuStack_c0 & 0xffffffffffffff00);
        goto code_r0x00010078d084;
      case (undefined *)0x10078ced4:
        goto code_r0x00010078ced4;
      case (undefined *)0x10078cee4:
        goto code_r0x00010078cee4;
      case (undefined *)0x10078cefc:
        goto code_r0x00010078cefc;
      case (undefined *)0x10078cf10:
        goto code_r0x00010078cf10;
      case (undefined *)0x10078cf14:
code_r0x00010078cf14:
        pppppppuVar14 = (uint *******)(long)(char)pppppppuVar14;
        pcVar6 = (char *)pppppppuVar26;
        goto code_r0x00010078d008;
      case (undefined *)0x10078cf24:
code_r0x00010078cf24:
        pppppppuStack_b8 = pppppppuStack_1b8;
        pppppppuStack_b0 = pppppppuStack_1b0;
        pcVar6 = (char *)pppppppuVar26;
code_r0x00010078cf2c:
        param_3 = pcVar6;
        unaff_x19 = (uint *******)0x5;
      case (undefined *)0x10078cf30:
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)unaff_x19);
        pppppppuVar26 = (uint *******)param_3;
code_r0x00010078cf34:
code_r0x00010078cf3c:
        goto code_r0x00010078cfb0;
      case (undefined *)0x10078cf34:
        goto code_r0x00010078cf34;
      case (undefined *)0x10078cf3c:
        goto code_r0x00010078cf3c;
      case (undefined *)0x10078cf40:
        pppppppuStack_b8 = pppppppuStack_1b8;
        pppppppuStack_b0 = pppppppuStack_1b0;
        unaff_x19 = (uint *******)0x5;
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,5);
      case (undefined *)0x10078cf54:
code_r0x00010078cf58:
        goto code_r0x00010078cfb0;
      case (undefined *)0x10078cf60:
code_r0x00010078cf60:
        goto code_r0x00010078cfec;
      case (undefined *)0x10078cf6c:
        pppppppuVar14 = (uint *******)(long)(short)pppppppuVar16;
        pcVar6 = param_3;
        goto code_r0x00010078d008;
      case (undefined *)0x10078cfd8:
code_r0x00010078cfd8:
        pppppppuVar27 = pppppppuStack_1b8;
      case (undefined *)0x10078cfdc:
code_r0x00010078cfdc:
        pppppppuVar15 = (uint *******)0x3;
        pppppppuStack_b8 = pppppppuVar27;
code_r0x00010078cfe4:
        uVar10 = SUB81(pppppppuVar15,0);
        param_3 = (char *)pppppppuVar26;
        break;
      case (undefined *)0x10078cfe4:
        goto code_r0x00010078cfe4;
      case (undefined *)0x10078cfec:
        goto code_r0x00010078cfec;
      case (undefined *)0x10078cff4:
        goto code_r0x00010078cff4;
      case (undefined *)0x10078cffc:
        goto code_r0x00010078cffc;
      case (undefined *)0x10078d004:
        pppppppuVar14 = pppppppuStack_1b8;
        pcVar6 = param_3;
code_r0x00010078d008:
        uVar10 = 2;
        param_3 = pcVar6;
        pppppppuStack_b8 = pppppppuVar14;
        break;
      case (undefined *)0x10078d028:
        pppppppuVar14 = (uint *******)(long)(short)pppppppuVar16;
code_r0x00010078d02c:
        pppppppuStack_b8 = pppppppuVar14;
code_r0x00010078d074:
        pppppppuVar17 = (uint *******)0x2;
        goto code_r0x00010078d078;
      case (undefined *)0x10078d02c:
        goto code_r0x00010078d02c;
      case (undefined *)0x10078d090:
        goto LAB_10078d090;
      case (undefined *)0x10078d098:
        goto code_r0x00010078d098;
      case (undefined *)0x10078d0a8:
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078d0b8:
        goto code_r0x00010078d0b8;
      case (undefined *)0x10078d0c4:
        uVar10 = 7;
        break;
      case (undefined *)0x10078d0d8:
        pppppppuVar17 = pppppppuVar14;
        goto code_r0x00010078d078;
      case (undefined *)0x10078d154:
        goto code_r0x00010078d154;
      case (undefined *)0x10078d18c:
        goto code_r0x00010078d18c;
      }
code_r0x00010078d010:
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
      pppppppuVar26 = (uint *******)param_3;
      goto code_r0x00010078d084;
    case (undefined *)0x10078a59c:
code_r0x00010078a59c:
      unaff_x21 = pppppppuStack_1b8;
code_r0x00010078a5a0:
      pppppppuVar23 = unaff_x21;
      pppppppuStack_b8 = (uint *******)pppppppuVar23[1];
      pppppppuStack_c0 = (uint *******)*pppppppuVar23;
      ppppppuStack_a8 = pppppppuVar23[3];
      pppppppuStack_b0 = (uint *******)pppppppuVar23[2];
      thunk_FUN_108801b48(pppppppuVar26,&pppppppuStack_c0);
      goto code_r0x00010078c0cc;
    case (undefined *)0x10078a5d8:
      goto code_r0x00010078a5d8;
    case (undefined *)0x10078a5e4:
code_r0x00010078a5e4:
      pppppppuVar28 = (uint *******)unaff_x21[1];
      pppppppuVar27 = (uint *******)*unaff_x21;
      pppppppuVar14 = (uint *******)&bStack_1a0;
      pppppppuVar23 = unaff_x21;
      goto code_r0x00010078a5ec;
    case (undefined *)0x10078a608:
code_r0x00010078a608:
      in_ZR = (int)unaff_x19 == 5;
code_r0x00010078a60c:
      if (!(bool)in_ZR) {
        pppppppuVar16 = (uint *******)&bStack_1a0;
        pppppppuStack_c8 = pppppppuStack_168;
code_r0x00010078a61c:
        pppppppuVar16[0x1a] = ppppppuStack_170;
        pppppppuVar16[0x19] = (uint ******)pppppppuStack_178;
        ppppppuStack_208._0_1_ = (byte)unaff_x19;
code_r0x00010078a628:
        pppppppuVar14 = (uint *******)0x15;
        goto code_r0x00010078a62c;
      }
      pppppppuStack_138 = (uint *******)0x4;
      pppppppuStack_120 = (uint *******)&uStack_140;
      pppppppuStack_118 = (uint *******)&DAT_100c7b3a0;
      uStack_140 = unaff_x20;
      uVar7 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&pppppppuStack_120);
LAB_10078cb8c:
      bStack_200 = (byte)uVar7;
      uStack_1ff = (uint7)((ulong)uVar7 >> 8);
code_r0x00010078cb90:
LAB_10078a6b8:
      ppppppuStack_208._0_1_ = 5;
      FUN_100d03040(&pppppppuStack_178);
      pcVar6 = (char *)pppppppuStack_210;
code_r0x00010078a6cc:
      FUN_100d34830(unaff_x21 + 4);
      pppppppuVar26 = (uint *******)pcVar6;
      if ((byte)pppppppuStack_c0 != '\x16') {
        param_3 = (char *)&pppppppuStack_c0;
code_r0x00010078a6e4:
        FUN_100e077ec(param_3);
        pppppppuVar26 = (uint *******)pcVar6;
      }
      goto LAB_10078a464;
    case (undefined *)0x10078a670:
code_r0x00010078a670:
      unaff_x20 = (uint *******)0x0;
      pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
code_r0x00010078a678:
      pcVar6 = (char *)pppppppuVar26;
      if ((int)pppppppuVar14 != 0x16) {
code_r0x00010078a680:
        FUN_100e077ec(&pppppppuStack_c0);
        pcVar6 = (char *)pppppppuVar26;
      }
code_r0x00010078a688:
      pppppppuVar26 = (uint *******)pcVar6;
      if (unaff_x20 != (uint *******)0x0) {
        bStack_200 = (byte)unaff_x20;
        uStack_1ff = (uint7)((ulong)unaff_x20 >> 8);
        ppppppuStack_208._0_1_ = 5;
code_r0x00010078a698:
        pppppppuVar14 = (uint *******)&bStack_1a0;
        param_3 = pcVar6;
code_r0x00010078a69c:
        FUN_100e077ec((ulong)pppppppuVar14 | 8);
        pppppppuVar26 = (uint *******)param_3;
      }
      goto LAB_10078a464;
    case (undefined *)0x10078a724:
      pppppppuVar14 = pppppppuStack_1b0;
      pppppppuVar17 = pppppppuStack_1b8;
      pppppppuVar18 = pppppppuStack_1a8;
code_r0x00010078a72c:
      pppppppuVar16 = (uint *******)((long)pppppppuVar18 * 0x40);
      unaff_x21 = pppppppuVar14 + (long)pppppppuVar18 * 8;
      unaff_x19 = (uint *******)&pppppppuStack_c0;
      pppppppuStack_a0 = pppppppuVar14;
      pppppppuStack_98 = pppppppuVar14;
      pppppppuStack_90 = pppppppuVar17;
      pppppppuStack_88 = unaff_x21;
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
      pppppppuStack_80 = (uint *******)0x0;
code_r0x00010078a74c:
      if (pppppppuVar18 != (uint *******)0x0) {
        unaff_x25 = (uint *******)0x0;
        pppppppuStack_210 = pppppppuVar26;
        goto code_r0x00010078a758;
      }
      goto code_r0x00010078c4f0;
    case (undefined *)0x10078a758:
code_r0x00010078a758:
      unaff_x20 = (uint *******)((ulong)&bStack_1a0 | 1);
      param_3 = (char *)((ulong)unaff_x19 | 1);
      pppppppuVar17 = &ppppppuStack_208;
code_r0x00010078a768:
      pppppppuStack_218 = (uint *******)((ulong)pppppppuVar17 | 1);
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078a770:
      pppppppuVar16 = (uint *******)((ulong)(pppppppuVar16 + -8) >> 6);
code_r0x00010078a778:
      pppppppuStack_228 = (uint *******)((long)pppppppuVar16 + 1);
      unaff_x27 = pppppppuVar14 + 8;
      unaff_x22 = (uint *******)0x3;
      unaff_x23 = (uint *******)0x8000000000000000;
      goto code_r0x00010078a7ac;
    case (undefined *)0x10078a770:
      goto code_r0x00010078a770;
    case (undefined *)0x10078a790:
      goto code_r0x00010078a790;
    case (undefined *)0x10078a804:
      goto code_r0x00010078a804;
    case (undefined *)0x10078a834:
      goto code_r0x00010078a834;
    case (undefined *)0x10078a868:
      goto code_r0x00010078a868;
    case (undefined *)0x10078a87c:
      goto code_r0x00010078a87c;
    case (undefined *)0x10078a890:
      goto code_r0x00010078a890;
    case (undefined *)0x10078a940:
      goto code_r0x00010078a940;
    case (undefined *)0x10078a984:
      goto code_r0x00010078a984;
    case (undefined *)0x10078a98c:
      goto code_r0x00010078a98c;
    case (undefined *)0x10078a9a0:
      goto code_r0x00010078a9a0;
    case (undefined *)0x10078a9b8:
      goto code_r0x00010078a9b8;
    case (undefined *)0x10078a9c0:
      goto code_r0x00010078a9c0;
    case (undefined *)0x10078a9cc:
      goto code_r0x00010078a9cc;
    case (undefined *)0x10078a9dc:
      goto code_r0x00010078a9dc;
    case (undefined *)0x10078a9e4:
      goto code_r0x00010078a9e4;
    case (undefined *)0x10078a9ec:
      goto code_r0x00010078a9ec;
    case (undefined *)0x10078aa08:
      goto code_r0x00010078aa08;
    case (undefined *)0x10078aa24:
      goto code_r0x00010078aa24;
    case (undefined *)0x10078aa2c:
      goto code_r0x00010078aa2c;
    case (undefined *)0x10078aa48:
      goto code_r0x00010078aa48;
    case (undefined *)0x10078aa50:
      goto code_r0x00010078aa50;
    case (undefined *)0x10078aa58:
      goto code_r0x00010078aa58;
    case (undefined *)0x10078aa6c:
      goto code_r0x00010078aa6c;
    case (undefined *)0x10078aac8:
      goto code_r0x00010078aac8;
    case (undefined *)0x10078aadc:
      goto code_r0x00010078aadc;
    case (undefined *)0x10078aae4:
      goto code_r0x00010078aae4;
    case (undefined *)0x10078ab74:
      goto code_r0x00010078ab74;
    case (undefined *)0x10078abb0:
      pppppppuVar28 = (uint *******)pppppppuStack_1b8[1];
      pppppppuVar27 = (uint *******)*pppppppuStack_1b8;
      unaff_x21 = pppppppuStack_1b8;
code_r0x00010078abb8:
      pppppppuVar14 = (uint *******)&bStack_1a0;
code_r0x00010078abbc:
      pppppppuVar23 = unaff_x21;
      pppppppuVar14[0x1d] = (uint ******)pppppppuVar28;
      pppppppuVar14[0x1c] = (uint ******)pppppppuVar27;
      ppppppuVar8 = pppppppuVar23[2];
      pppppppuVar14[0x1f] = pppppppuVar23[3];
      pppppppuVar14[0x1e] = ppppppuVar8;
      thunk_FUN_10882cef0(pppppppuVar26,&pppppppuStack_c0);
      goto code_r0x00010078c0cc;
    case (undefined *)0x10078ac00:
code_r0x00010078ac00:
      pppppppuStack_80 = (uint *******)0x0;
      if (pppppppuVar18 != (uint *******)0x0) {
        unaff_x26 = (uint *******)0x0;
        unaff_x22 = (uint *******)((ulong)&bStack_1a0 | 1);
        unaff_x20 = (uint *******)((ulong)unaff_x19 | 1);
        pppppppuStack_238 = (uint *******)(((ulong)(pppppppuVar16 + -8) >> 6) + 1);
        unaff_x23 = (uint *******)0x8000000000000000;
        unaff_x25 = (uint *******)0x8000000000000000;
        unaff_x27 = pppppppuVar15;
        pppppppuStack_210 = pppppppuVar26;
        goto code_r0x00010078ac5c;
      }
      unaff_x25 = (uint *******)0x0;
code_r0x00010078c23c:
      goto code_r0x00010078c5ac;
    case (undefined *)0x10078af94:
code_r0x00010078af94:
      pppppppuStack_80 = (uint *******)0x0;
      if (pppppppuVar18 == (uint *******)0x0) goto code_r0x00010078c240;
      unaff_x26 = (uint *******)0x0;
      unaff_x22 = (uint *******)((ulong)&bStack_1a0 | 1);
      unaff_x20 = (uint *******)((ulong)unaff_x19 | 1);
      pppppppuVar16 = (uint *******)((ulong)(pppppppuVar16 + -8) >> 6);
      pppppppuStack_210 = pppppppuVar26;
    case (undefined *)0x10078afb8:
      pppppppuVar16 = (uint *******)((long)pppppppuVar16 + 1);
code_r0x00010078afbc:
      pppppppuVar26 = pppppppuVar15 + 8;
      unaff_x23 = (uint *******)0x8000000000000000;
      unaff_x25 = (uint *******)0x8000000000000000;
      pppppppuStack_238 = pppppppuVar16;
      goto code_r0x00010078aff0;
    case (undefined *)0x10078b068:
      goto code_r0x00010078b068;
    case (undefined *)0x10078b0f4:
      goto code_r0x00010078b0f4;
    case (undefined *)0x10078b300:
      unaff_x26 = pppppppuStack_1b0 + (long)pppppppuStack_1a8 * 4;
      pppppppuStack_120 = pppppppuStack_1b0;
      pppppppuStack_110 = pppppppuStack_1b8;
      pppppppuStack_108 = unaff_x26;
      pppppppuStack_100 = (uint *******)0x0;
      unaff_x20 = pppppppuStack_1b0;
      unaff_x21 = pppppppuStack_1b0;
      unaff_x25 = pppppppuStack_1b8;
      if (pppppppuStack_1a8 != (uint *******)0x0) {
        unaff_x20 = pppppppuStack_1b0 + 4;
        pppppppuVar14 = (uint *******)(ulong)*(byte *)pppppppuStack_1b0;
        pppppppuStack_118 = unaff_x20;
        if (*(byte *)pppppppuStack_1b0 != 0x16) {
          uVar7 = *(undefined8 *)((long)pppppppuStack_1b0 + 1);
          uStack_197 = (undefined6)*(undefined8 *)((long)pppppppuStack_1b0 + 9);
          uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)pppppppuStack_1b0 + 9) >> 0x30);
          bStack_19f = (byte)uVar7;
          uStack_19e = (undefined5)((ulong)uVar7 >> 8);
          bStack_199 = (byte)((ulong)uVar7 >> 0x30);
          uStack_198 = (undefined1)((ulong)uVar7 >> 0x38);
          unaff_x23 = pppppppuStack_1a8;
          goto code_r0x00010078c264;
        }
      }
      param_4 = (uint *******)&UNK_10b22d1b0;
      pcVar6 = (char *)pppppppuVar26;
      pppppppuStack_118 = unaff_x20;
code_r0x00010078b33c:
      param_3 = pcVar6;
code_r0x00010078b344:
      unaff_x22 = (uint *******)thunk_FUN_1087e422c(0,param_4);
      goto code_r0x00010078b350;
    case (undefined *)0x10078b3c8:
      goto code_r0x00010078b3c8;
    case (undefined *)0x10078b470:
      goto code_r0x00010078b470;
    case (undefined *)0x10078b494:
      goto code_r0x00010078b494;
    case (undefined *)0x10078b788:
      goto code_r0x00010078b788;
    case (undefined *)0x10078b7a4:
      goto code_r0x00010078b7a4;
    case (undefined *)0x10078b7c0:
      goto code_r0x00010078b7c0;
    case (undefined *)0x10078b7e4:
      goto code_r0x00010078b7e4;
    case (undefined *)0x10078b814:
      goto code_r0x00010078b814;
    case (undefined *)0x10078b884:
      goto code_r0x00010078b884;
    case (undefined *)0x10078b8b8:
      goto code_r0x00010078b8b8;
    case (undefined *)0x10078b8d8:
      goto code_r0x00010078b8d8;
    case (undefined *)0x10078b8ec:
      goto code_r0x00010078b8ec;
    case (undefined *)0x10078b8fc:
      goto code_r0x00010078b8fc;
    case (undefined *)0x10078b918:
      goto code_r0x00010078b918;
    case (undefined *)0x10078b928:
      goto code_r0x00010078b928;
    case (undefined *)0x10078b938:
      goto code_r0x00010078b938;
    case (undefined *)0x10078b958:
      goto code_r0x00010078b958;
    case (undefined *)0x10078b984:
      goto code_r0x00010078b984;
    case (undefined *)0x10078b98c:
      goto code_r0x00010078b98c;
    case (undefined *)0x10078b998:
      goto code_r0x00010078b998;
    case (undefined *)0x10078b9a8:
      goto code_r0x00010078b9a8;
    case (undefined *)0x10078b9cc:
      goto code_r0x00010078b9cc;
    case (undefined *)0x10078b9dc:
      goto code_r0x00010078b9dc;
    case (undefined *)0x10078b9ec:
      goto code_r0x00010078b9ec;
    case (undefined *)0x10078b9f0:
      goto code_r0x00010078b9f0;
    case (undefined *)0x10078ba00:
      goto code_r0x00010078ba00;
    case (undefined *)0x10078ba10:
      goto code_r0x00010078ba10;
    case (undefined *)0x10078ba18:
      goto code_r0x00010078ba18;
    case (undefined *)0x10078ba1c:
      goto code_r0x00010078ba1c;
    case (undefined *)0x10078ba2c:
      goto code_r0x00010078ba2c;
    case (undefined *)0x10078ba70:
      goto code_r0x00010078ba70;
    case (undefined *)0x10078ba8c:
      goto code_r0x00010078ba8c;
    case (undefined *)0x10078ba9c:
      goto code_r0x00010078ba9c;
    case (undefined *)0x10078baac:
      goto code_r0x00010078baac;
    case (undefined *)0x10078bab4:
      goto code_r0x00010078bab4;
    case (undefined *)0x10078babc:
      goto code_r0x00010078babc;
    case (undefined *)0x10078bac4:
      goto code_r0x00010078bac4;
    case (undefined *)0x10078bad4:
      goto code_r0x00010078bad4;
    case (undefined *)0x10078badc:
      goto code_r0x00010078badc;
    case (undefined *)0x10078bae4:
      goto code_r0x00010078bae4;
    case (undefined *)0x10078baf0:
      goto code_r0x00010078baf0;
    case (undefined *)0x10078bb00:
      goto code_r0x00010078bb00;
    case (undefined *)0x10078bb08:
      goto code_r0x00010078bb08;
    case (undefined *)0x10078bb18:
      goto code_r0x00010078bb18;
    case (undefined *)0x10078bb20:
      goto code_r0x00010078bb20;
    case (undefined *)0x10078bb2c:
      goto code_r0x00010078bb2c;
    case (undefined *)0x10078bb30:
      goto code_r0x00010078bb30;
    case (undefined *)0x10078bb54:
      goto code_r0x00010078bb54;
    case (undefined *)0x10078be04:
      goto code_r0x00010078be04;
    case (undefined *)0x10078be40:
code_r0x00010078be40:
      pppppppuVar28 = (uint *******)unaff_x21[1];
      pppppppuVar27 = (uint *******)*unaff_x21;
      pppppppuVar15 = (uint *******)&bStack_1a0;
code_r0x00010078be48:
      pppppppuVar15[0x1d] = (uint ******)pppppppuVar28;
      pppppppuVar15[0x1c] = (uint ******)pppppppuVar27;
code_r0x00010078be4c:
      pppppppuVar28 = (uint *******)unaff_x21[3];
      pppppppuVar27 = (uint *******)unaff_x21[2];
code_r0x00010078be50:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar15[0x1f] = (uint ******)pppppppuVar28;
      pppppppuVar15[0x1e] = (uint ******)pppppppuVar27;
      param_4 = (uint *******)&pppppppuStack_c0;
code_r0x00010078be5c:
      thunk_FUN_108825134(param_3,param_4);
      pppppppuVar23 = unaff_x21;
      goto code_r0x00010078be60;
    case (undefined *)0x10078be48:
      goto code_r0x00010078be48;
    case (undefined *)0x10078be60:
      goto code_r0x00010078be60;
    case (undefined *)0x10078be74:
      goto code_r0x00010078be74;
    case (undefined *)0x10078be7c:
      goto code_r0x00010078be7c;
    case (undefined *)0x10078be94:
      goto code_r0x00010078be94;
    case (undefined *)0x10078bea0:
      goto code_r0x00010078bea0;
    case (undefined *)0x10078bea8:
      goto code_r0x00010078bea8;
    case (undefined *)0x10078beb8:
code_r0x00010078beb8:
      unaff_x26 = pppppppuStack_1a8;
code_r0x00010078bebc:
      unaff_x25 = unaff_x21 + (long)unaff_x26 * 4;
    case (undefined *)0x10078bec0:
code_r0x00010078bec0:
      pppppppuStack_120 = unaff_x21;
      pppppppuStack_118 = unaff_x21;
code_r0x00010078bec4:
      pppppppuStack_110 = unaff_x23;
      pppppppuStack_108 = unaff_x25;
    case (undefined *)0x10078bec8:
      goto code_r0x00010078bec8;
    case (undefined *)0x10078bed8:
      goto code_r0x00010078bed8;
    case (undefined *)0x10078bee8:
      goto code_r0x00010078bee8;
    case (undefined *)0x10078bef0:
      goto code_r0x00010078bef0;
    case (undefined *)0x10078bf00:
      goto code_r0x00010078bf00;
    case (undefined *)0x10078bf08:
      goto code_r0x00010078bf08;
    case (undefined *)0x10078bf18:
      goto code_r0x00010078bf18;
    case (undefined *)0x10078bf3c:
      goto code_r0x00010078bf3c;
    case (undefined *)0x10078bfbc:
      goto code_r0x00010078bfbc;
    case (undefined *)0x10078c000:
      goto code_r0x00010078c000;
    case (undefined *)0x10078c1cc:
      goto code_r0x00010078c1cc;
    case (undefined *)0x10078c208:
      goto code_r0x00010078c208;
    case (undefined *)0x10078c210:
      goto code_r0x00010078c210;
    case (undefined *)0x10078c240:
code_r0x00010078c240:
      unaff_x25 = (uint *******)0x0;
      pppppppuVar19 = unaff_x21;
code_r0x00010078c244:
      pppppppuStack_210 = pppppppuVar26;
      pppppppuStack_220 = pppppppuVar19;
      pppppppuStack_218 = unaff_x20;
      goto code_r0x00010078c680;
    case (undefined *)0x10078c244:
      goto code_r0x00010078c244;
    case (undefined *)0x10078c248:
      goto code_r0x00010078c248;
    case (undefined *)0x10078c26c:
      goto code_r0x00010078c26c;
    case (undefined *)0x10078c270:
      goto code_r0x00010078c270;
    case (undefined *)0x10078c280:
      goto code_r0x00010078c280;
    case (undefined *)0x10078c288:
      goto code_r0x00010078c288;
    case (undefined *)0x10078c2a8:
      goto code_r0x00010078c2a8;
    case (undefined *)0x10078c2b0:
      goto code_r0x00010078c2b0;
    case (undefined *)0x10078c2b8:
      goto code_r0x00010078c2b8;
    case (undefined *)0x10078c2dc:
      goto code_r0x00010078c2dc;
    case (undefined *)0x10078c2e0:
      goto code_r0x00010078c2e0;
    case (undefined *)0x10078c2e4:
      goto code_r0x00010078c2e4;
    case (undefined *)0x10078c2f8:
      goto code_r0x00010078c2f8;
    case (undefined *)0x10078c2fc:
      goto code_r0x00010078c2fc;
    case (undefined *)0x10078c310:
      goto code_r0x00010078c310;
    case (undefined *)0x10078c318:
      goto code_r0x00010078c318;
    case (undefined *)0x10078c328:
      goto code_r0x00010078c328;
    case (undefined *)0x10078c334:
      goto code_r0x00010078c334;
    case (undefined *)0x10078c338:
      goto code_r0x00010078c338;
    case (undefined *)0x10078c348:
      goto code_r0x00010078c348;
    case (undefined *)0x10078c354:
      goto code_r0x00010078c354;
    case (undefined *)0x10078c35c:
      goto code_r0x00010078c35c;
    case (undefined *)0x10078c368:
      goto code_r0x00010078c368;
    case (undefined *)0x10078c374:
      goto code_r0x00010078c374;
    case (undefined *)0x10078c37c:
      goto code_r0x00010078c37c;
    case (undefined *)0x10078c398:
      goto code_r0x00010078c398;
    case (undefined *)0x10078c39c:
      goto code_r0x00010078c39c;
    case (undefined *)0x10078c3b8:
      goto code_r0x00010078c3b8;
    case (undefined *)0x10078c3d4:
      goto code_r0x00010078c3d4;
    case (undefined *)0x10078c3d8:
      goto code_r0x00010078c3d8;
    case (undefined *)0x10078c3e8:
      goto code_r0x00010078c3e8;
    case (undefined *)0x10078c3f4:
      goto code_r0x00010078c3f4;
    case (undefined *)0x10078c408:
      goto code_r0x00010078c408;
    case (undefined *)0x10078c418:
      goto code_r0x00010078c418;
    case (undefined *)0x10078c41c:
      goto code_r0x00010078c41c;
    case (undefined *)0x10078c428:
      goto code_r0x00010078c428;
    case (undefined *)0x10078c438:
      goto code_r0x00010078c438;
    case (undefined *)0x10078c43c:
      goto code_r0x00010078c43c;
    case (undefined *)0x10078c454:
      goto code_r0x00010078c454;
    case (undefined *)0x10078c458:
      goto code_r0x00010078c458;
    case (undefined *)0x10078c464:
      goto code_r0x00010078c464;
    case (undefined *)0x10078c47c:
      goto code_r0x00010078c47c;
    case (undefined *)0x10078c488:
      goto code_r0x00010078c488;
    case (undefined *)0x10078c494:
      goto code_r0x00010078c494;
    case (undefined *)0x10078c4b4:
      goto code_r0x00010078c4b4;
    case (undefined *)0x10078c4b8:
      goto code_r0x00010078c4b8;
    case (undefined *)0x10078c4bc:
      goto code_r0x00010078c4bc;
    case (undefined *)0x10078c4d8:
      goto code_r0x00010078c4d8;
    case (undefined *)0x10078c4e8:
      goto code_r0x00010078c4e8;
    case (undefined *)0x10078c4f4:
      goto code_r0x00010078c4f4;
    case (undefined *)0x10078c4f8:
      goto code_r0x00010078c4f8;
    case (undefined *)0x10078c518:
      goto code_r0x00010078c518;
    case (undefined *)0x10078c51c:
      goto code_r0x00010078c51c;
    case (undefined *)0x10078c538:
      goto code_r0x00010078c538;
    case (undefined *)0x10078c540:
      goto code_r0x00010078c540;
    case (undefined *)0x10078c558:
      goto code_r0x00010078c558;
    case (undefined *)0x10078c568:
      goto code_r0x00010078c568;
    case (undefined *)0x10078c57c:
      goto code_r0x00010078c57c;
    case (undefined *)0x10078c598:
      goto code_r0x00010078c598;
    case (undefined *)0x10078c5b8:
      goto code_r0x00010078c5b8;
    case (undefined *)0x10078c5f4:
      goto LAB_10078c5f4;
    case (undefined *)0x10078c638:
      goto code_r0x00010078c638;
    case (undefined *)0x10078cb78:
code_r0x00010078cb78:
      pppppppuStack_120 = pppppppuVar15;
      pppppppuStack_118 = pppppppuVar16;
      uVar7 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&pppppppuStack_120);
      goto LAB_10078cb8c;
    case (undefined *)0x10078cbbc:
      goto code_r0x00010078cbbc;
    case (undefined *)0x10078cbcc:
code_r0x00010078cbcc:
      pppppppuVar14 = (uint *******)0x8;
      param_3 = (char *)pppppppuVar26;
      goto code_r0x00010078cbd0;
    case (undefined *)0x10078cbdc:
      pppppppuVar14 = (uint *******)&pppppppuStack_1c0;
      param_3 = (char *)pppppppuVar26;
      goto code_r0x00010078cbe0;
    case (undefined *)0x10078cc1c:
code_r0x00010078cc1c:
      pppppppuVar14 = (uint *******)&pppppppuStack_1c0;
code_r0x00010078cc20:
      param_4 = pppppppuVar14 + 1;
      pcVar6 = (char *)pppppppuVar26;
code_r0x00010078cc24:
      param_3 = pcVar6;
code_r0x00010078cc28:
      thunk_FUN_10881b92c(param_3,param_4);
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078cc3c:
code_r0x00010078cc3c:
      thunk_FUN_10881c7e0(param_3,param_4);
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078cc50:
code_r0x00010078cc50:
      thunk_FUN_108824ccc(pcVar6);
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078cc58:
      thunk_FUN_1087eaba0(pppppppuVar26);
code_r0x00010078cc60:
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078cc64:
      pppppppuStack_b8 = pppppppuStack_1b8;
      break;
    case (undefined *)0x10078cc74:
      goto code_r0x00010078cc74;
    case (undefined *)0x10078cc90:
      pppppppuVar14 = (uint *******)&pppppppuStack_1c0;
      goto code_r0x00010078cc94;
    case (undefined *)0x10078ccb0:
      pppppppuVar27 = (uint *******)(double)SUB84(pppppppuVar27,0);
    case (undefined *)0x10078ccb4:
      goto code_r0x00010078ccb4;
    case (undefined *)0x10078ccc0:
      pppppppuVar14 = (uint *******)((ulong)pcVar6 >> 0x10 & 0xffff);
code_r0x00010078ccc4:
      pppppppuStack_b8 = pppppppuVar14;
      break;
    case (undefined *)0x10078ccc8:
code_r0x00010078ccc8:
      pppppppuVar14 = pppppppuStack_1b8;
code_r0x00010078ce68:
      pcVar6 = (char *)pppppppuVar26;
      pppppppuStack_b8 = pppppppuVar14;
code_r0x00010078ce6c:
      param_3 = pcVar6;
      uVar10 = 1;
      goto code_r0x00010078d010;
    case (undefined *)0x10078ccd8:
code_r0x00010078ccd8:
      pppppppuVar14 = pppppppuStack_1b8;
code_r0x00010078ccdc:
      goto code_r0x00010078ced4;
    case (undefined *)0x10078cd08:
code_r0x00010078cd08:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar14 = pppppppuStack_1b8;
      pppppppuVar16 = pppppppuStack_1b0;
code_r0x00010078cd0c:
      pcVar6 = param_3;
      pppppppuStack_b8 = pppppppuVar14;
      pppppppuStack_b0 = pppppppuVar16;
code_r0x00010078cd10:
      pppppppuVar14 = (uint *******)0x6;
      pppppppuVar26 = (uint *******)pcVar6;
    case (undefined *)0x10078cd14:
      param_3 = (char *)pppppppuVar26;
      goto code_r0x00010078cefc;
    case (undefined *)0x10078cd24:
code_r0x00010078cd24:
      goto code_r0x00010078cfdc;
    case (undefined *)0x10078cd50:
      pppppppuStack_b8 = param_4;
      break;
    case (undefined *)0x10078cd5c:
code_r0x00010078cd5c:
      pppppppuStack_b8 = pppppppuVar27;
code_r0x00010078d034:
      uVar10 = 3;
      goto code_r0x00010078d05c;
    case (undefined *)0x10078cd68:
      goto code_r0x00010078cd68;
    case (undefined *)0x10078cd6c:
      goto code_r0x00010078cd6c;
    case (undefined *)0x10078cd78:
      pppppppuStack_c0 =
           (uint *******)((ulong)CONCAT61(pppppppuStack_c0._2_6_,(char)pppppppuVar15) << 8);
code_r0x00010078cd88:
      goto code_r0x00010078d084;
    case (undefined *)0x10078cd8c:
code_r0x00010078cd8c:
      pppppppuStack_b8 = (uint *******)((ulong)param_3 >> 8 & 0xff);
      break;
    case (undefined *)0x10078cd9c:
code_r0x00010078cd9c:
      pppppppuVar14 = (uint *******)((ulong)pcVar6 >> 0x10 & 0xffff);
code_r0x00010078cda0:
      goto code_r0x00010078ce68;
    case (undefined *)0x10078cde8:
code_r0x00010078cde8:
      pppppppuVar17 = (uint *******)0x6;
      pppppppuStack_b8 = pppppppuVar15;
      pppppppuStack_b0 = pppppppuVar16;
      goto code_r0x00010078d078;
    case (undefined *)0x10078cdf4:
code_r0x00010078cdf4:
      pppppppuStack_b8 = param_4;
code_r0x00010078cdf8:
code_r0x00010078ce48:
      pppppppuVar14 = (uint *******)0x1;
      param_3 = (char *)pppppppuVar26;
      goto code_r0x00010078cff4;
    case (undefined *)0x10078ce18:
code_r0x00010078ce18:
      goto code_r0x00010078cebc;
    case (undefined *)0x10078ce24:
      pppppppuStack_b8 = (uint *******)(long)(char)pppppppuVar15;
      goto code_r0x00010078cef8;
    case (undefined *)0x10078ce3c:
      goto code_r0x00010078ce3c;
    case (undefined *)0x10078ce48:
      goto code_r0x00010078ce48;
    case (undefined *)0x10078ce58:
code_r0x00010078ce58:
      param_3 = (char *)pppppppuVar26;
code_r0x00010078ce5c:
      pcVar6 = param_3;
code_r0x00010078ce60:
      pppppppuVar26 = (uint *******)pcVar6;
      goto code_r0x00010078d084;
    case (undefined *)0x10078ce84:
code_r0x00010078ce84:
      pppppppuStack_b8 = pppppppuStack_1b8;
      pppppppuStack_b0 = pppppppuStack_1b0;
code_r0x00010078ce8c:
      unaff_x19 = (uint *******)0x5;
      pcVar6 = (char *)pppppppuVar26;
code_r0x00010078ce90:
      param_3 = pcVar6;
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)unaff_x19);
code_r0x00010078ce9c:
      pppppppuVar26 = (uint *******)param_3;
      goto code_r0x00010078cfb0;
    case (undefined *)0x10078cea0:
      pppppppuStack_b8 = (uint *******)(long)(short)pppppppuVar16;
      goto code_r0x00010078cef8;
    case (undefined *)0x10078ceb8:
      goto code_r0x00010078ceb8;
    case (undefined *)0x10078cee0:
      pppppppuVar27 = pppppppuStack_1b8;
      goto code_r0x00010078cee4;
    case (undefined *)0x10078ceec:
      goto code_r0x00010078ceec;
    case (undefined *)0x10078cef0:
      pppppppuStack_b8 = pppppppuStack_1b8;
    case (undefined *)0x10078cef8:
      goto code_r0x00010078cef8;
    case (undefined *)0x10078cf10:
code_r0x00010078cf10:
      goto code_r0x00010078cfec;
    case (undefined *)0x10078cf1c:
code_r0x00010078cf1c:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar14 = (uint *******)0x7;
      goto code_r0x00010078cefc;
    case (undefined *)0x10078cfa0:
      unaff_x19 = (uint *******)0x5;
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,5);
    case (undefined *)0x10078cfa8:
code_r0x00010078cfb0:
      pcVar6 = (char *)&pppppppuStack_c0;
      param_4 = &ppppppuStack_208;
code_r0x00010078cfb8:
      ppppppuVar8 = (uint ******)FUN_107c05dcc(pcVar6,param_4);
      pppppppuVar26[1] = ppppppuVar8;
code_r0x00010078cfc0:
      *(char *)pppppppuVar26 = (char)unaff_x19;
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078cfb8:
      goto code_r0x00010078cfb8;
    case (undefined *)0x10078cfc0:
      goto code_r0x00010078cfc0;
    case (undefined *)0x10078cfe4:
      goto code_r0x00010078cfe4;
    case (undefined *)0x10078d04c:
      pppppppuVar17 = pppppppuVar15;
      goto code_r0x00010078d078;
    case (undefined *)0x10078d064:
      goto code_r0x00010078d064;
    case (undefined *)0x10078d074:
      goto code_r0x00010078d074;
    case (undefined *)0x10078d094:
      goto code_r0x00010078d094;
    case (undefined *)0x10078d110:
      goto code_r0x00010078d110;
    }
code_r0x00010078cd94:
    pppppppuVar14 = (uint *******)0x1;
    pcVar6 = (char *)pppppppuVar26;
code_r0x00010078cd98:
    param_3 = pcVar6;
    goto code_r0x00010078cefc;
  case 0xc:
    pppppppuVar5 = &ppppppuStack_208;
    pppppppuVar24 = &ppppppuStack_1e0;
    pppppppuVar14 = param_4;
  case 0xe6:
    param_4 = pppppppuVar24;
    goto code_r0x00010078c17c;
  case 0xd:
code_r0x00010078c1e0:
    pppppppuVar14 = (uint *******)param_4[1];
    pppppppuVar16 = (uint *******)param_4[2];
code_r0x00010078c1e4:
    param_3 = pcVar6;
    pppppppuVar15 = (uint *******)0x5;
    pppppppuStack_b8 = pppppppuVar14;
    pppppppuStack_b0 = pppppppuVar16;
    goto code_r0x00010078c214;
  case 0xe:
  case 0xa2:
    pppppppuVar5 = &ppppppuStack_208;
  case 0xba:
    pppppppuVar14 = param_4;
    goto code_r0x00010078c140;
  case 0xf:
    pppppppuVar14 = (uint *******)param_4[1];
    pppppppuVar16 = (uint *******)param_4[2];
  case 0xac:
    pppppppuVar15 = (uint *******)0x6;
    pppppppuStack_b8 = pppppppuVar14;
    pppppppuStack_b0 = pppppppuVar16;
    goto code_r0x00010078c214;
  case 0x10:
    pppppppuVar15 = (uint *******)0x8;
    goto code_r0x00010078c214;
  default:
    unaff_x21 = (uint *******)param_4[1];
    pppppppuStack_b8 = (uint *******)unaff_x21[1];
    pppppppuStack_c0 = (uint *******)*unaff_x21;
    ppppppuStack_a8 = unaff_x21[3];
    pppppppuStack_b0 = (uint *******)unaff_x21[2];
    func_0x000107c046a4(&ppppppuStack_208,&ppppppuStack_1e0,&pppppppuStack_c0);
    pppppppuVar14 = unaff_x21;
    goto code_r0x00010078a460;
  case 0x12:
code_r0x00010078c22c:
    param_3 = (char *)pppppppuVar26;
    pppppppuVar15 = (uint *******)0x7;
    goto code_r0x00010078c214;
  case 0x13:
  case 0x97:
    unaff_x21 = (uint *******)param_4[1];
    pppppppuVar28 = (uint *******)unaff_x21[1];
    pppppppuVar27 = (uint *******)*unaff_x21;
    pppppppuVar14 = (uint *******)&bStack_1a0;
  case 0xf6:
    pppppppuVar14[0x1d] = (uint ******)pppppppuVar28;
    pppppppuVar14[0x1c] = (uint ******)pppppppuVar27;
    ppppppuVar8 = unaff_x21[2];
    pppppppuVar14[0x1f] = unaff_x21[3];
    pppppppuVar14[0x1e] = ppppppuVar8;
    func_0x000107c05304(&ppppppuStack_208,&ppppppuStack_1e0,&pppppppuStack_c0);
    pppppppuVar14 = unaff_x21;
    goto code_r0x00010078a460;
  case 0x14:
  case 0x98:
    pppppppuStack_110 = (uint *******)param_4[1];
    pppppppuStack_120 = (uint *******)param_4[2];
    unaff_x19 = pppppppuStack_120 + (long)param_4[3] * 4;
    pppppppuStack_100 = (uint *******)0x0;
    unaff_x20 = pppppppuStack_120;
    pppppppuStack_108 = unaff_x19;
    if (param_4[3] != (uint ******)0x0) {
      unaff_x20 = pppppppuStack_120 + 4;
      bStack_1a0 = *(byte *)pppppppuStack_120;
      if (bStack_1a0 != 0x16) {
        uVar7 = *(undefined8 *)((long)pppppppuStack_120 + 1);
        uStack_197 = (undefined6)*(undefined8 *)((long)pppppppuStack_120 + 9);
        uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)pppppppuStack_120 + 9) >> 0x30);
        bStack_19f = (byte)uVar7;
        uStack_19e = (undefined5)((ulong)uVar7 >> 8);
        bStack_199 = (byte)((ulong)uVar7 >> 0x30);
        uStack_198 = (undefined1)((ulong)uVar7 >> 0x38);
        ppppppuVar8 = pppppppuStack_120[2];
        uStack_188 = SUB87(pppppppuStack_120[3],0);
        uStack_181 = (undefined1)((ulong)pppppppuStack_120[3] >> 0x38);
        uStack_190 = SUB81(ppppppuVar8,0);
        uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
        uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
        pppppppuStack_100 = (uint *******)0x1;
        pppppppuStack_118 = unaff_x20;
        func_0x0001013d75d4(&puStack_160,&bStack_1a0);
        pppppppuVar5 = pppppppuStack_158;
        if ((char)puStack_160 != '\x01') {
          unaff_x19 = (uint *******)((ulong)puStack_160 >> 8 & 0xff);
          FUN_1013efd54(&uStack_140,&pppppppuStack_120);
          in_ZR = (char)uStack_140 == '\x16';
          goto code_r0x00010078a704;
        }
        goto code_r0x00010078a290;
      }
    }
    puStack_160 = &UNK_108cde34c;
    pppppppuStack_158 = (uint *******)0x4;
    bStack_1a0 = (byte)&puStack_160;
    bStack_19f = (byte)((ulong)&puStack_160 >> 8);
    uStack_19e = (undefined5)((ulong)&puStack_160 >> 0x10);
    bStack_199 = (byte)((ulong)&puStack_160 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    pppppppuStack_118 = unaff_x20;
    pppppppuVar5 = (uint *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_1a0);
    goto code_r0x00010078a420;
  case 0x15:
  case 0x99:
    pppppppuStack_90 = (uint *******)param_4[1];
    pppppppuStack_a0 = (uint *******)param_4[2];
    pppppppuVar17 = (uint *******)param_4[3];
    pppppppuStack_88 = pppppppuStack_a0 + (long)pppppppuVar17 * 8;
    unaff_x22 = (uint *******)0x16;
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
    pppppppuStack_80 = (uint *******)0x0;
    pppppppuVar14 = pppppppuVar17;
    if ((uint *******)0x3fff < pppppppuVar17) {
      pppppppuVar14 = (uint *******)0x4000;
    }
    pppppppuStack_98 = pppppppuStack_a0;
    if (pppppppuVar17 == (uint *******)0x0) {
      pppppppuVar14 = (uint *******)0x0;
      ppppppuVar8 = (uint ******)0x8;
    }
    else {
      ppppppuVar8 = (uint ******)_malloc((long)pppppppuVar14 << 6);
      if (ppppppuVar8 == (uint ******)0x0) {
        FUN_107c03c64(8,(long)pppppppuVar14 << 6);
        goto code_r0x00010078da5c;
      }
    }
    unaff_x21 = (uint *******)&pppppppuStack_c0;
    unaff_x23 = (uint *******)((ulong)&puStack_160 | 1);
    pppppppuStack_168 = (uint *******)0x0;
    unaff_x25 = (uint *******)((ulong)&uStack_140 | 1);
    unaff_x26 = (uint *******)((ulong)unaff_x21 | 1);
    unaff_x27 = (uint *******)&pppppppuStack_120;
    pppppppuVar26 = (uint *******)((ulong)unaff_x27 | 1);
    unaff_x19 = (uint *******)0x5;
    unaff_x20 = (uint *******)&UNK_108cde34c;
    pppppppuStack_210 = (uint *******)param_3;
    pppppppuStack_178 = pppppppuVar14;
    ppppppuStack_170 = ppppppuVar8;
    while( true ) {
      while( true ) {
        func_0x000100f22618(&puStack_160,&pppppppuStack_c0,unaff_x20,4);
        if ((char)puStack_160 == '\x16') break;
        if ((char)puStack_160 == '\x17') goto code_r0x00010078a608;
        pppppppuVar14 = pppppppuStack_158;
        if ((char)puStack_160 == '\x18') goto code_r0x00010078a6b4;
        uStack_140 = (uint *******)CONCAT71(uStack_140._1_7_,(char)puStack_160);
        ppppppuVar8 = *unaff_x23;
        unaff_x25[1] = unaff_x23[1];
        *unaff_x25 = ppppppuVar8;
code_r0x00010078a344:
        uVar7 = *(undefined8 *)((long)unaff_x23 + 0xf);
        *(undefined8 *)((long)unaff_x25 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
        *(undefined8 *)((long)unaff_x25 + 0xf) = uVar7;
        cVar9 = (byte)pppppppuStack_c0;
        pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)unaff_x22);
        if (cVar9 == '\x16') {
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010078da5c;
        }
        *(uint *)((long)unaff_x27 + 0x21) = *(uint *)unaff_x26;
        *(uint *)((long)unaff_x27 + 0x24) = *(uint *)((long)unaff_x26 + 3);
        pppppppuVar16 = pppppppuStack_b8;
        ppppppuVar8 = unaff_x21[2];
        unaff_x27[7] = unaff_x21[3];
        unaff_x27[6] = ppppppuVar8;
code_r0x00010078a378:
        pppppppuStack_118 = pppppppuStack_138;
        pppppppuStack_120 = uStack_140;
        pppppppuStack_108 = pppppppuStack_128;
        pppppppuStack_110 = pppppppuStack_130;
        pppppppuStack_100 = (uint *******)CONCAT71(pppppppuStack_100._1_7_,(char)pppppppuVar14);
        unaff_x24 = pppppppuStack_168;
        pppppppuVar31 = pppppppuStack_130;
        pppppppuVar32 = pppppppuStack_128;
        pppppppuStack_f8 = pppppppuVar16;
code_r0x00010078a390:
        if (unaff_x24 == pppppppuStack_178) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&pppppppuStack_178);
        }
        ppppppuVar8 = ppppppuStack_170 + (long)unaff_x24 * 8;
        ppppppuVar8[1] = (uint *****)pppppppuStack_118;
        *ppppppuVar8 = (uint *****)pppppppuStack_120;
        ppppppuVar8[3] = (uint *****)pppppppuStack_108;
        ppppppuVar8[2] = (uint *****)pppppppuStack_110;
        ppppppuVar8[5] = (uint *****)pppppppuStack_f8;
        ppppppuVar8[4] = (uint *****)pppppppuStack_100;
        ppppppuVar8[7] = pppppuStack_e8;
        ppppppuVar8[6] = (uint *****)pppppppuStack_f0;
        pppppppuStack_168 = (uint *******)((long)unaff_x24 + 1);
      }
      if ((int)unaff_x19 != 5) {
        pppppppuStack_138 = (uint *******)0x4;
        pppppppuVar15 = (uint *******)&uStack_140;
        pppppppuVar16 = (uint *******)&DAT_100c7b3a0;
        uStack_140 = unaff_x20;
        goto code_r0x00010078cb78;
      }
      cVar9 = (byte)pppppppuStack_c0;
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)unaff_x22);
      if (cVar9 == '\x16') break;
      ppppppuVar8 = *unaff_x26;
      pppppppuVar26[1] = unaff_x26[1];
      *pppppppuVar26 = ppppppuVar8;
      uVar7 = *(undefined8 *)((long)unaff_x26 + 0xf);
      *(undefined8 *)((long)pppppppuVar26 + 0x17) = *(undefined8 *)((long)unaff_x26 + 0x17);
      *(undefined8 *)((long)pppppppuVar26 + 0xf) = uVar7;
      pppppppuStack_120 = (uint *******)CONCAT71(pppppppuStack_120._1_7_,cVar9);
      func_0x0001013d75d4(&uStack_140,&pppppppuStack_120);
      pppppppuVar14 = pppppppuStack_138;
      if ((char)uStack_140 == '\x01') goto code_r0x00010078a6b4;
      unaff_x19 = (uint *******)((ulong)uStack_140 >> 8 & 0xff);
    }
code_r0x00010078cbb0:
    param_3 = &UNK_108ca1000;
  case 0x20:
    param_3 = (char *)((long)param_3 + 0xa98);
code_r0x00010078cbb8:
    pppppppuVar5 = (uint *******)param_3;
code_r0x00010078cbbc:
code_r0x00010078cbc0:
    param_4 = (uint *******)0x2c;
code_r0x00010078cbc4:
    FUN_107c05cac(pppppppuVar5,param_4);
code_r0x00010078cbc8:
code_r0x00010078da5c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10078da60);
    (*pcVar3)();
  case 0x16:
code_r0x00010078ca2c:
    pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
    pppppppuStack_98 = pppppppuVar26;
  case 0x7d:
    param_3 = (char *)CONCAT71(uStack_1ff,bStack_200);
    unaff_x23 = (uint *******)0x0;
code_r0x00010078ca40:
    unaff_x20 = pppppppuStack_218;
    pppppppuVar26 = pppppppuStack_210;
code_r0x00010078ca44:
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    pppppppuVar26[1] = (uint ******)param_3;
    *(char *)pppppppuVar26 = '\x05';
    in_ZR = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
    unaff_x21 = pppppppuStack_220;
code_r0x00010078ca5c:
    if (!(bool)in_ZR) {
LAB_10078c5f4:
      _free(unaff_x21);
code_r0x00010078c5fc:
    }
    goto LAB_10078ca60;
  case 0x17:
    goto code_r0x00010078ca40;
  case 0x18:
    goto code_r0x00010078c978;
  case 0x19:
    goto code_r0x00010078c9d8;
  case 0x1a:
code_r0x00010078c8a4:
    iVar13 = (int)pppppppuVar14;
    if ((int)unaff_x22 != 3) {
      iVar13 = (int)unaff_x22;
    }
    *(char *)((long)param_3 + 1) = (char)iVar13;
  case 0x4e:
    *(uint ********)((long)param_3 + 8) = unaff_x23;
    *(uint ********)((long)param_3 + 0x10) = unaff_x24;
code_r0x00010078c8b4:
    *(uint ********)((long)param_3 + 0x18) = pppppppuVar16;
    pppppppuStack_108 = *(uint ********)((long)param_3 + 0x18);
    pppppppuStack_110 = *(uint ********)((long)param_3 + 0x10);
    pppppppuStack_f8 = *(uint ********)((long)param_3 + 0x28);
    pppppppuStack_100 = *(uint ********)((long)param_3 + 0x20);
    pppppppuVar16 = (uint *******)&bStack_1a0;
    pppppppuStack_f0 = *(uint ********)((long)param_3 + 0x30);
    pppppppuVar32 = *(uint ********)((long)param_3 + 8);
    pppppppuVar31 = *(uint ********)param_3;
code_r0x00010078c8d0:
    pppppppuVar16[0x11] = (uint ******)pppppppuVar32;
    pppppppuVar16[0x10] = (uint ******)pppppppuVar31;
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c8d4:
    param_3 = (char *)FUN_100fbc67c(&pppppppuStack_c0);
code_r0x00010078c8dc:
    if ((uint *******)param_3 == (uint *******)0x0) break;
code_r0x00010078c8e0:
    pppppppuVar26[1] = (uint ******)param_3;
    pppppppuVar14 = (uint *******)0x5;
code_r0x00010078c8e8:
    *(char *)pppppppuVar26 = (char)pppppppuVar14;
    goto code_r0x00010078c96c;
  case 0x1b:
    goto code_r0x00010078caf0;
  case 0x1c:
    goto code_r0x00010078cb48;
  case 0x1d:
code_r0x00010078c9e8:
    pppppppuStack_210[1] = (uint ******)CONCAT71(uStack_1ff,bStack_200);
    *(char *)pppppppuStack_210 = '\x05';
    unaff_x20 = pppppppuStack_220;
    pppppppuStack_98 = unaff_x25;
    pppppppuStack_80 = pppppppuVar14;
  case 0x70:
    unaff_x25 = (uint *******)&pppppppuStack_c0;
    goto LAB_10078d600;
  case 0x1e:
  case 0x7b:
code_r0x00010078cbe0:
    param_4 = pppppppuVar14 + 1;
code_r0x00010078cbe8:
    thunk_FUN_10881bcf8(param_3,param_4);
    break;
  case 0x1f:
    goto code_r0x00010078c8fc;
  case 0x21:
    goto code_r0x00010078c854;
  case 0x22:
  case 0x4b:
    goto code_r0x00010078c8d0;
  case 0x23:
    goto code_r0x00010078cb1c;
  case 0x24:
    goto code_r0x00010078c7f8;
  case 0x25:
    goto code_r0x00010078c9a0;
  case 0x26:
    goto code_r0x00010078c7cc;
  case 0x28:
    goto code_r0x00010078cca0;
  case 0x29:
    goto code_r0x00010078ba18;
  case 0x2a:
    goto code_r0x00010078bb14;
  case 0x2b:
    goto code_r0x00010078ab48;
  case 0x2c:
  case 0x75:
code_r0x00010078cad8:
    pppppppuStack_138 = pppppppuStack_228;
    unaff_x23 = (uint *******)0x0;
    param_3 = (char *)CONCAT71(uStack_1ff,bStack_200);
    unaff_x20 = pppppppuStack_220;
    unaff_x22 = pppppppuStack_228;
    uStack_140 = unaff_x27;
    pppppppuStack_130 = unaff_x26;
  case 0x2d:
code_r0x00010078caec:
    pppppppuVar26 = pppppppuStack_210;
code_r0x00010078caf0:
    unaff_x25 = (uint *******)&pppppppuStack_c0;
    pppppppuVar26[1] = (uint ******)param_3;
    *(char *)pppppppuVar26 = '\x05';
code_r0x00010078cb00:
    if (unaff_x24 != (uint *******)0x8000000000000000) {
code_r0x00010078cb0c:
joined_r0x00010078c7a4:
      if (unaff_x26 != (uint *******)0x0) {
        unaff_x19 = unaff_x22 + 1;
        do {
          if (((ulong)unaff_x19[-1] & 0x7fffffffffffffff) != 0) {
            param_3 = (char *)*unaff_x19;
code_r0x00010078c7cc:
            _free(param_3);
          }
          unaff_x19 = unaff_x19 + 5;
          unaff_x26 = (uint *******)((long)unaff_x26 + -1);
        } while (unaff_x26 != (uint *******)0x0);
      }
      if (unaff_x24 != (uint *******)0x0) {
        _free(unaff_x22);
      }
    }
LAB_10078d600:
    if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x20);
    }
    FUN_100d34830(unaff_x25 + 4);
    goto LAB_10078d618;
  case 0x2e:
    goto code_r0x00010078ca1c;
  case 0x2f:
code_r0x00010078caa0:
    pppppppuVar14 = (uint *******)0x5;
  case 0x4f:
    *param_3 = (char)pppppppuVar14;
    pppppppuStack_218 = unaff_x20;
    pppppppuStack_220 = unaff_x21;
joined_r0x00010078c6c4:
    unaff_x25 = (uint *******)((ulong)unaff_x25 & 0x7fffffffffffffff);
    unaff_x20 = pppppppuStack_218;
joined_r0x00010078d58c:
    if (unaff_x25 != (uint *******)0x0) {
      _free(pppppppuStack_220);
    }
    goto code_r0x00010078cab0;
  case 0x30:
    goto code_r0x00010078c964;
  case 0x31:
    goto code_r0x00010078cbb8;
  case 0x32:
code_r0x00010078cc08:
    param_3 = pcVar6;
    param_4 = (uint *******)&pppppppuStack_1b8;
code_r0x00010078cc10:
    thunk_FUN_108820ea8(param_3,param_4);
    break;
  case 0x33:
    goto code_r0x00010078cab0;
  case 0x34:
  case 0x78:
code_r0x00010078cc94:
    param_4 = pppppppuVar14 + 1;
    pcVar6 = (char *)pppppppuVar26;
code_r0x00010078cc98:
code_r0x00010078cc9c:
    thunk_FUN_1088185a8(pcVar6,param_4);
code_r0x00010078cca0:
    break;
  case 0x35:
    goto code_r0x00010078c9c4;
  case 0x36:
    goto code_r0x00010078cc74;
  case 0x37:
    goto code_r0x00010078c918;
  case 0x38:
  case 0x7a:
    goto code_r0x00010078c98c;
  case 0x39:
code_r0x00010078cbd0:
    goto code_r0x00010078cefc;
  case 0x3a:
    goto code_r0x00010078c8b4;
  case 0x3b:
    goto LAB_10078ca60;
  case 0x3c:
    goto code_r0x00010078c880;
  case 0x3e:
code_r0x00010078cd68:
    pppppppuVar15 = (uint *******)((long)pppppppuVar5 >> 0x20);
code_r0x00010078cd6c:
    pppppppuStack_b8 = pppppppuVar15;
code_r0x00010078cef8:
    param_3 = (char *)pppppppuVar26;
    pppppppuVar14 = (uint *******)0x2;
    goto code_r0x00010078cefc;
  case 0x3f:
  case 0x86:
    goto code_r0x00010078bac0;
  case 0x40:
    goto code_r0x00010078bb60;
  case 0x41:
    goto code_r0x00010078a884;
  case 0x42:
code_r0x00010078c998:
    pppppppuStack_98 = pppppppuVar26;
    pppppppuStack_80 = pppppppuVar14;
code_r0x00010078c9a0:
    pppppppuStack_210[1] = (uint ******)CONCAT71(uStack_1ff,bStack_200);
    unaff_x20 = pppppppuStack_218;
    unaff_x24 = pppppppuStack_210;
code_r0x00010078c9ac:
    *(char *)unaff_x24 = '\x05';
code_r0x00010078c9b4:
    unaff_x19 = (uint *******)&pppppppuStack_c0;
LAB_10078ca60:
    unaff_x23 = (uint *******)((ulong)unaff_x23 & 0x7fffffffffffffff);
joined_r0x00010078c64c:
    if (unaff_x23 != (uint *******)0x0) {
LAB_10078ca68:
      _free(unaff_x20);
    }
    FUN_100d34830(unaff_x19 + 4);
code_r0x00010078ca78:
LAB_10078d618:
    if ((byte)pppppppuStack_c0 != '\x16') {
      FUN_100e077ec(&pppppppuStack_c0);
    }
    break;
  case 0x43:
    goto code_r0x00010078c9ac;
  case 0x44:
    goto code_r0x00010078c8e0;
  case 0x45:
    goto code_r0x00010078c970;
  case 0x46:
    goto code_r0x00010078c884;
  case 0x47:
    goto code_r0x00010078ca44;
  case 0x48:
    goto LAB_10078cac0;
  case 0x49:
    goto code_r0x00010078c988;
  case 0x4a:
code_r0x00010078cb10:
    pppppppuVar14 = (uint *******)((long)unaff_x25 + 1);
    pppppppuStack_98 = unaff_x27;
  case 0x6f:
    pppppppuStack_80 = pppppppuVar14;
code_r0x00010078cb1c:
    param_3 = (char *)unaff_x24;
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    pppppppuVar26 = pppppppuStack_210;
code_r0x00010078c880:
    pppppppuVar26[1] = (uint ******)param_3;
code_r0x00010078c884:
    *(char *)pppppppuVar26 = '\x05';
LAB_10078c88c:
    FUN_100d34830(unaff_x19 + 4);
code_r0x00010078c894:
    goto LAB_10078d618;
  case 0x4c:
    goto code_r0x00010078cb00;
  case 0x4d:
    goto code_r0x00010078c878;
  case 0x50:
    goto code_r0x00010078c7fc;
  case 0x51:
code_r0x00010078c928:
    *(char *)unaff_x19 = '\x04';
    unaff_x19[1] = (uint ******)unaff_x23;
    unaff_x19[2] = (uint ******)unaff_x20;
  case 0x72:
    unaff_x19[3] = (uint ******)pppppppuVar17;
    unaff_x19[4] = (uint ******)unaff_x25;
    unaff_x19[5] = (uint ******)unaff_x21;
    unaff_x19[6] = (uint ******)pppppppuVar16;
    pppppppuVar28 = (uint *******)unaff_x19[1];
    pppppppuVar27 = (uint *******)*unaff_x19;
    pppppppuVar32 = (uint *******)unaff_x19[3];
    pppppppuVar31 = (uint *******)unaff_x19[2];
    pppppppuStack_f0 = pppppppuVar16;
code_r0x00010078c944:
    pppppppuStack_f8 = (uint *******)unaff_x19[5];
    pppppppuStack_100 = (uint *******)unaff_x19[4];
    pppppppuStack_120 = pppppppuVar27;
    pppppppuStack_118 = pppppppuVar28;
    pppppppuStack_110 = pppppppuVar31;
    pppppppuStack_108 = pppppppuVar32;
    ppppppuVar8 = (uint ******)FUN_100fbc67c(&pppppppuStack_c0);
    goto code_r0x00010078c95c;
  case 0x52:
    goto code_r0x00010078c7ec;
  case 0x54:
    goto code_r0x00010078cb3c;
  case 0x55:
    goto code_r0x00010078a7d0;
  case 0x56:
    goto code_r0x00010078af20;
  case 0x57:
    goto code_r0x00010078a344;
  case 0x58:
    goto code_r0x00010078ca5c;
  case 0x59:
    goto LAB_10078ca68;
  case 0x5a:
    goto code_r0x00010078c944;
  case 0x5b:
    goto code_r0x00010078c9b4;
  case 0x5c:
    goto FUN_10078c870;
  case 0x5d:
  case 0x6e:
    goto code_r0x00010078cb0c;
  case 0x5e:
    goto code_r0x00010078cbc0;
  case 0x5f:
code_r0x00010078ca14:
    pppppppuStack_98 = unaff_x27;
    pppppppuStack_80 = pppppppuVar14;
code_r0x00010078ca1c:
    pcVar6 = (char *)unaff_x24;
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    pppppppuVar26 = pppppppuStack_210;
code_r0x00010078c524:
    pppppppuVar26[1] = (uint ******)pcVar6;
    pppppppuVar14 = (uint *******)0x5;
code_r0x00010078c52c:
    *(char *)pppppppuVar26 = (char)pppppppuVar14;
    goto code_r0x00010078c530;
  case 0x60:
code_r0x00010078cc04:
    pppppppuVar17 = pppppppuVar14;
    pppppppuVar26 = (uint *******)pcVar6;
code_r0x00010078d078:
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar17);
    goto code_r0x00010078d084;
  case 0x61:
code_r0x00010078c8f8:
    unaff_x19[1] = (uint ******)unaff_x23;
    unaff_x19[2] = (uint ******)unaff_x20;
code_r0x00010078c8fc:
    unaff_x19[3] = (uint ******)pppppppuVar17;
    unaff_x19[4] = (uint ******)unaff_x25;
    unaff_x19[5] = (uint ******)unaff_x21;
    unaff_x19[6] = (uint ******)pppppppuVar16;
    pppppppuStack_118 = (uint *******)unaff_x19[1];
    pppppppuStack_120 = (uint *******)*unaff_x19;
    pppppppuStack_108 = (uint *******)unaff_x19[3];
    pppppppuStack_110 = (uint *******)unaff_x19[2];
    pppppppuVar14 = (uint *******)&bStack_1a0;
    pppppppuVar28 = (uint *******)unaff_x19[5];
    pppppppuVar27 = (uint *******)unaff_x19[4];
    pppppppuStack_f0 = pppppppuVar16;
code_r0x00010078c918:
    pppppppuVar14[0x15] = (uint ******)pppppppuVar28;
    pppppppuVar14[0x14] = (uint ******)pppppppuVar27;
    ppppppuVar8 = (uint ******)FUN_100fbc67c(&pppppppuStack_c0);
code_r0x00010078c95c:
    if (ppppppuVar8 != (uint ******)0x0) {
      unaff_x19[1] = ppppppuVar8;
code_r0x00010078c964:
      *(char *)unaff_x19 = '\x05';
code_r0x00010078c96c:
      param_3 = (char *)&pppppppuStack_120;
code_r0x00010078c970:
      FUN_100e06c08(param_3);
    }
    break;
  case 0x62:
code_r0x00010078cbd8:
    param_3 = pcVar6;
code_r0x00010078cff4:
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar14);
code_r0x00010078cffc:
    pppppppuVar26 = (uint *******)param_3;
    goto code_r0x00010078d084;
  case 99:
code_r0x00010078c83c:
    if (!(bool)in_ZR) {
      *(char *)pppppppuStack_210 = '\x01';
      pppppppuVar14 = (uint *******)0x2;
      pppppppuVar16 = pppppppuStack_220;
      param_3 = (char *)pppppppuStack_210;
      goto code_r0x00010078c8a4;
    }
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    goto code_r0x00010078c84c;
  case 100:
    goto code_r0x00010078c8d4;
  case 0x65:
code_r0x00010078cb30:
    param_3 = (char *)pppppppuStack_138;
    pppppppuStack_98 = unaff_x27;
    pppppppuStack_80 = pppppppuVar14;
code_r0x00010078cb3c:
    pppppppuVar16 = pppppppuStack_210;
code_r0x00010078cb40:
    pppppppuVar16[1] = (uint ******)param_3;
    pppppppuVar14 = (uint *******)0x5;
code_r0x00010078cb48:
    *(char *)pppppppuVar16 = (char)pppppppuVar14;
    in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
code_r0x00010078cb50:
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    if (!(bool)in_ZR) {
code_r0x00010078cb58:
      unaff_x19 = (uint *******)&pppppppuStack_c0;
      _free(unaff_x24);
    }
code_r0x00010078c530:
    FUN_100d34830(unaff_x19 + 4);
code_r0x00010078c538:
    goto LAB_10078d618;
  case 0x66:
code_r0x00010078c7dc:
    *(char *)pppppppuStack_210 = '\0';
    pppppppuVar16 = (uint *******)0x8;
    unaff_x19 = pppppppuStack_210;
    if (!(bool)in_ZR) {
      pppppppuVar16 = unaff_x22;
    }
code_r0x00010078c7ec:
    pppppppuVar17 = (uint *******)0x0;
    if (!(bool)in_ZR) {
      pppppppuVar17 = unaff_x26;
    }
    unaff_x19[1] = (uint ******)unaff_x23;
    unaff_x19[2] = (uint ******)unaff_x20;
    pppppppuVar19 = pppppppuStack_230;
code_r0x00010078c7f8:
    unaff_x19[3] = (uint ******)pppppppuVar19;
    unaff_x19[4] = (uint ******)pppppppuVar14;
code_r0x00010078c7fc:
    unaff_x19[5] = (uint ******)pppppppuVar16;
    unaff_x19[6] = (uint ******)pppppppuVar17;
    pppppppuStack_118 = (uint *******)unaff_x19[1];
    pppppppuStack_120 = (uint *******)*unaff_x19;
    pppppppuStack_108 = (uint *******)unaff_x19[3];
    pppppppuStack_110 = (uint *******)unaff_x19[2];
    pppppppuStack_f8 = (uint *******)unaff_x19[5];
    pppppppuStack_100 = (uint *******)unaff_x19[4];
    pppppppuStack_f0 = pppppppuVar17;
    ppppppuVar8 = (uint ******)FUN_100fbc67c(&pppppppuStack_c0);
    goto code_r0x00010078c95c;
  case 0x67:
    goto code_r0x00010078c97c;
  case 0x68:
    goto code_r0x00010078c798;
  case 0x6a:
code_r0x00010078cc6c:
    thunk_FUN_1087edef8(pcVar6);
    goto code_r0x00010078cc74;
  case 0x6b:
    goto code_r0x00010078ba24;
  case 0x6c:
    goto code_r0x00010078bbdc;
  case 0x6d:
    goto code_r0x00010078b434;
  case 0x71:
    goto code_r0x00010078ca78;
  case 0x73:
    goto code_r0x00010078cbc8;
  case 0x74:
code_r0x00010078cc84:
    param_3 = (char *)pppppppuVar26;
code_r0x00010078cc88:
    thunk_FUN_1087ebc7c(param_3);
    break;
  case 0x76:
code_r0x00010078ccb4:
code_r0x00010078cee4:
    pppppppuVar14 = (uint *******)0x3;
    pppppppuStack_b8 = pppppppuVar27;
code_r0x00010078ceec:
    param_3 = (char *)pppppppuVar26;
code_r0x00010078cefc:
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar14);
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078d084:
    param_3 = (char *)&pppppppuStack_c0;
    param_4 = &ppppppuStack_208;
    goto code_r0x00010078d08c;
  case 0x77:
code_r0x00010078c9bc:
    pppppppuVar15 = (uint *******)((long)unaff_x26 + 1);
    pppppppuStack_98 = pppppppuVar26;
code_r0x00010078c9c4:
    pppppppuStack_210[1] = (uint ******)CONCAT71(uStack_1ff,bStack_200);
    pppppppuVar14 = (uint *******)0x5;
    unaff_x20 = pppppppuStack_218;
    unaff_x24 = pppppppuStack_210;
    pppppppuStack_80 = pppppppuVar15;
code_r0x00010078c9d8:
    *(char *)unaff_x24 = (char)pppppppuVar14;
    unaff_x19 = (uint *******)&pppppppuStack_c0;
code_r0x00010078cab0:
    unaff_x23 = (uint *******)((ulong)unaff_x23 & 0x7fffffffffffffff);
joined_r0x00010078cab4:
    if (unaff_x23 != (uint *******)0x0) {
      _free(unaff_x20);
    }
LAB_10078cac0:
    FUN_100d34830(unaff_x19 + 4);
    goto LAB_10078d618;
  case 0x79:
    goto code_r0x00010078c8e8;
  case 0x7c:
    goto code_r0x00010078c894;
  case 0x7e:
    goto code_r0x00010078c85c;
  case 0x80:
code_r0x00010078cd30:
    thunk_FUN_10880faac(pppppppuVar26,param_4);
    break;
  case 0x81:
  case 0x93:
    goto code_r0x00010078bac8;
  case 0x82:
    goto code_r0x00010078bc20;
  case 0x83:
    goto code_r0x00010078afe8;
  case 0x84:
    goto code_r0x00010078bae8;
  case 0x85:
    goto code_r0x00010078baf8;
  case 0x87:
    goto code_r0x00010078bad8;
  case 0x88:
    goto code_r0x00010078ba94;
  case 0x89:
    goto code_r0x00010078bb08;
  case 0x8a:
    goto code_r0x00010078bb20;
  case 0x8b:
    goto code_r0x00010078bae0;
  case 0x8c:
    goto code_r0x00010078bb38;
  case 0x8d:
    goto code_r0x00010078bab4;
  case 0x8e:
    goto code_r0x00010078bb28;
  case 0x8f:
    goto code_r0x00010078ba80;
  case 0x90:
    goto code_r0x00010078ba9c;
  case 0x91:
    goto code_r0x00010078bb10;
  case 0x92:
    goto code_r0x00010078ba68;
  case 0x94:
    goto code_r0x00010078ba60;
  case 0x96:
    goto code_r0x00010078bb5c;
  case 0x9a:
    goto code_r0x00010078c008;
  case 0x9b:
  case 0xb7:
    goto code_r0x00010078c014;
  case 0x9c:
    goto code_r0x00010078bf1c;
  case 0x9d:
    goto code_r0x00010078bf7c;
  case 0x9e:
code_r0x00010078be8c:
    unaff_x21 = pppppppuStack_1b8;
  case 0xbe:
    pppppppuVar28 = (uint *******)unaff_x21[1];
    pppppppuVar27 = (uint *******)*unaff_x21;
code_r0x00010078be94:
    pppppppuVar15 = (uint *******)&bStack_1a0;
    pppppppuStack_b8 = pppppppuVar28;
    pppppppuStack_c0 = pppppppuVar27;
    pppppppuVar28 = (uint *******)unaff_x21[3];
    pppppppuVar27 = (uint *******)unaff_x21[2];
code_r0x00010078bea0:
    pppppppuVar15[0x1f] = (uint ******)pppppppuVar28;
    pppppppuVar15[0x1e] = (uint ******)pppppppuVar27;
code_r0x00010078bea4:
    param_4 = (uint *******)&pppppppuStack_c0;
code_r0x00010078bea8:
    pcVar6 = (char *)pppppppuVar26;
code_r0x00010078beac:
    thunk_FUN_108829ec8(pcVar6,param_4);
code_r0x00010078beb0:
    pppppppuVar23 = unaff_x21;
    goto code_r0x00010078c0cc;
  case 0x9f:
  case 199:
    goto code_r0x00010078c03c;
  case 0xa0:
    goto code_r0x00010078c09c;
  case 0xa1:
    goto code_r0x00010078bf9c;
  case 0xa3:
    goto code_r0x00010078befc;
  case 0xa4:
    goto code_r0x00010078c0d4;
  case 0xa5:
    goto code_r0x00010078be68;
  case 0xa6:
    goto code_r0x00010078bed0;
  case 0xa7:
    goto code_r0x00010078c074;
  case 0xa8:
    goto code_r0x00010078be30;
  case 0xa9:
    goto code_r0x00010078bf54;
  case 0xaa:
    goto LAB_10078bdec;
  case 0xad:
code_r0x00010078b3a8:
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar17);
    pppppppuStack_80 = (uint *******)0x0;
    if (pppppppuVar19 != (uint *******)0x0) {
      param_3 = (char *)0x0;
      unaff_x22 = (uint *******)((ulong)&bStack_1a0 | 1);
      pppppppuStack_210 = pppppppuVar26;
      goto code_r0x00010078b3c4;
    }
code_r0x00010078c248:
    param_3 = (char *)pppppppuVar26;
    pppppppuVar14 = (uint *******)0x8000000000000000;
code_r0x00010078c24c:
    unaff_x24 = (uint *******)0x8000000000000000;
    pcVar6 = param_3;
code_r0x00010078c250:
    pppppppuVar26 = (uint *******)pcVar6;
    uStack_140 = pppppppuVar14;
code_r0x00010078c254:
    pppppppuStack_210 = pppppppuVar26;
    pppppppuStack_228 = unaff_x22;
    pppppppuStack_220 = unaff_x20;
code_r0x00010078c758:
    ppppppuStack_208._0_1_ = 0x20;
    ppppppuStack_208._1_7_ = 0x108c725;
    bStack_200 = 4;
    uStack_1ff = 0;
    bStack_1a0 = (byte)&ppppppuStack_208;
    bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
    uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
    bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    unaff_x23 = (uint *******)0x0;
    ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_1a0);
LAB_10078c78c:
    pppppppuStack_210[1] = ppppppuVar8;
    *(char *)pppppppuStack_210 = '\x05';
    unaff_x20 = pppppppuStack_220;
    unaff_x22 = pppppppuStack_228;
code_r0x00010078c798:
    if (unaff_x24 != (uint *******)0x8000000000000000) goto joined_r0x00010078c7a4;
    goto LAB_10078d600;
  case 0xae:
    goto code_r0x00010078b558;
  case 0xaf:
    goto code_r0x00010078b0b4;
  case 0xb0:
code_r0x00010078c048:
    unaff_x26 = unaff_x21 + (long)pppppppuStack_1a8 * 4;
    pppppppuStack_120 = unaff_x21;
    pppppppuStack_110 = unaff_x25;
    pppppppuStack_108 = unaff_x26;
    unaff_x23 = pppppppuStack_1a8;
    pppppppuStack_118 = unaff_x21;
  case 0xe3:
    pppppppuStack_100 = (uint *******)0x0;
code_r0x00010078c05c:
    unaff_x20 = unaff_x21;
    if (unaff_x23 != (uint *******)0x0) {
      unaff_x20 = unaff_x21 + 4;
      pppppppuVar14 = (uint *******)(ulong)*(byte *)unaff_x21;
      pppppppuStack_118 = unaff_x20;
      in_ZR = *(byte *)unaff_x21 == 0x16;
code_r0x00010078c074:
      pppppppuVar26 = (uint *******)param_3;
      if ((bool)in_ZR) goto code_r0x00010078c078;
code_r0x00010078c430:
      uVar7 = *(undefined8 *)((long)unaff_x21 + 1);
      uStack_197 = (undefined6)*(undefined8 *)((long)unaff_x21 + 9);
      uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 9) >> 0x30);
      bStack_19f = (byte)uVar7;
      uStack_19e = (undefined5)((ulong)uVar7 >> 8);
      bStack_199 = (byte)((ulong)uVar7 >> 0x30);
      uStack_198 = (undefined1)((ulong)uVar7 >> 0x38);
code_r0x00010078c438:
      pppppppuVar28 = (uint *******)unaff_x21[3];
      pppppppuVar27 = (uint *******)unaff_x21[2];
code_r0x00010078c43c:
      uStack_188 = SUB87(pppppppuVar28,0);
      uStack_181 = (undefined1)((ulong)pppppppuVar28 >> 0x38);
      uStack_190 = SUB81(pppppppuVar27,0);
      uStack_18f = (undefined6)((ulong)pppppppuVar27 >> 8);
      uStack_189 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
      pppppppuVar16 = (uint *******)0x1;
code_r0x00010078c444:
      bStack_1a0 = (byte)pppppppuVar14;
      pppppppuStack_100 = pppppppuVar16;
code_r0x00010078c44c:
      pcVar6 = (char *)&ppppppuStack_208;
code_r0x00010078c450:
      param_4 = (uint *******)&bStack_1a0;
code_r0x00010078c454:
      FUN_1004b62d4(pcVar6,param_4);
code_r0x00010078c458:
      unaff_x27 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      unaff_x22 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
code_r0x00010078c45c:
      pppppppuVar14 = (uint *******)0x8000000000000000;
code_r0x00010078c460:
      in_ZR = unaff_x27 == pppppppuVar14;
code_r0x00010078c464:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar26 = (uint *******)param_3;
      if ((bool)in_ZR) goto code_r0x00010078c094;
code_r0x00010078c468:
      unaff_x19 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078c46c:
      in_ZR = unaff_x23 == (uint *******)0x1;
code_r0x00010078c470:
      if (!(bool)in_ZR) {
code_r0x00010078c474:
        unaff_x20 = unaff_x21 + 8;
code_r0x00010078c478:
        pppppppuStack_118 = unaff_x20;
code_r0x00010078c47c:
        pppppppuVar14 = (uint *******)(ulong)*(byte *)(unaff_x21 + 4);
code_r0x00010078c480:
        iVar13 = (int)pppppppuVar14;
        if (iVar13 == 0x16) goto code_r0x00010078c488;
        uStack_1ff = (uint7)*(undefined8 *)((long)unaff_x21 + 0x29);
        ppppppuStack_208._1_7_ = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x21);
        bStack_200 = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x21) >> 0x38);
        uStack_1f0 = SUB81(unaff_x21[7],0);
        uStack_1ef = (undefined7)((ulong)unaff_x21[7] >> 8);
        uStack_1f8 = SUB81(unaff_x21[6],0);
        uStack_1f7 = (undefined7)((ulong)unaff_x21[6] >> 8);
        pppppppuStack_100 = (uint *******)0x2;
        ppppppuStack_208._0_1_ = (byte)pppppppuVar14;
        if (iVar13 == 0x10) {
code_r0x00010078d240:
          uStack_140 = (uint *******)CONCAT62(uStack_140._2_6_,0x200);
          FUN_100e077ec(&ppppppuStack_208);
        }
        else if (iVar13 == 0x11) {
          puVar2 = (undefined8 *)CONCAT71(uStack_1ff,bStack_200);
          uVar30 = puVar2[1];
          uVar7 = *puVar2;
          uStack_198 = (undefined1)uVar30;
          uStack_197 = (undefined6)((ulong)uVar30 >> 8);
          uStack_191 = (undefined1)((ulong)uVar30 >> 0x38);
          bStack_1a0 = (byte)uVar7;
          bStack_19f = (byte)((ulong)uVar7 >> 8);
          uStack_19e = (undefined5)((ulong)uVar7 >> 0x10);
          bStack_199 = (byte)((ulong)uVar7 >> 0x38);
          uVar7 = puVar2[2];
          uStack_188 = (undefined7)puVar2[3];
          uStack_181 = (undefined1)((ulong)puVar2[3] >> 0x38);
          uStack_190 = (undefined1)uVar7;
          uStack_18f = (undefined6)((ulong)uVar7 >> 8);
          uStack_189 = (undefined1)((ulong)uVar7 >> 0x38);
          FUN_101429444(&uStack_140,&bStack_1a0);
          _free(puVar2);
        }
        else {
          if (iVar13 == 0x12) goto code_r0x00010078d240;
          FUN_101429444(&uStack_140,&ppppppuStack_208);
        }
        if (((ulong)uStack_140 & 1) == 0) {
          pppppppuVar14 = (uint *******)((ulong)uStack_140 >> 8 & 0xff);
          goto code_r0x00010078c48c;
        }
        pppppppuVar26[1] = (uint ******)pppppppuStack_138;
        *(char *)pppppppuVar26 = '\x05';
        if (unaff_x27 != (uint *******)0x0) {
          _free(unaff_x22);
        }
        goto code_r0x00010078c0a0;
      }
code_r0x00010078c488:
      pppppppuVar14 = (uint *******)0x2;
code_r0x00010078c48c:
      pppppppuVar16 = (uint *******)0x1;
code_r0x00010078c490:
      *(char *)pppppppuVar26 = (char)pppppppuVar16;
code_r0x00010078c494:
      param_3 = (char *)pppppppuVar26;
      *(char *)((long)param_3 + 1) = (char)pppppppuVar14;
code_r0x00010078c498:
      *(uint ********)((long)param_3 + 8) = unaff_x27;
      *(uint ********)((long)param_3 + 0x10) = unaff_x22;
code_r0x00010078c49c:
      *(uint ********)((long)param_3 + 0x18) = unaff_x19;
      pppppppuVar32 = *(uint ********)((long)param_3 + 0x18);
      pppppppuVar31 = *(uint ********)((long)param_3 + 0x10);
      pppppppuVar28 = *(uint ********)((long)param_3 + 0x28);
      pppppppuVar27 = *(uint ********)((long)param_3 + 0x20);
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c4a4:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar16 = (uint *******)&bStack_1a0;
code_r0x00010078c4a8:
      pppppppuVar16[0x1f] = (uint ******)pppppppuVar32;
      pppppppuVar16[0x1e] = (uint ******)pppppppuVar31;
      pppppppuVar16[0x21] = (uint ******)pppppppuVar28;
      pppppppuVar16[0x20] = (uint ******)pppppppuVar27;
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c4ac:
      pppppppuVar14 = (uint *******)pppppppuVar26[6];
code_r0x00010078c4b0:
      pppppppuStack_90 = pppppppuVar14;
code_r0x00010078c4b4:
      pppppppuVar28 = (uint *******)pppppppuVar26[1];
      pppppppuVar27 = (uint *******)*pppppppuVar26;
code_r0x00010078c4b8:
      pppppppuVar16[0x1d] = (uint ******)pppppppuVar28;
      pppppppuVar16[0x1c] = (uint ******)pppppppuVar27;
code_r0x00010078c4bc:
      param_3 = (char *)pppppppuVar26;
      pcVar6 = (char *)&pppppppuStack_120;
code_r0x00010078c4c0:
      ppppppuVar8 = (uint ******)FUN_100fbc738(pcVar6);
      goto code_r0x00010078d2f4;
    }
code_r0x00010078c078:
    param_4 = (uint *******)&UNK_10b22d1c0;
    param_5 = &UNK_10b20a000;
code_r0x00010078c084:
    unaff_x22 = (uint *******)thunk_FUN_1087e422c(0,param_4,param_5 + 0x590);
code_r0x00010078c094:
    *(uint ********)((long)param_3 + 8) = unaff_x22;
    pppppppuVar14 = (uint *******)0x5;
code_r0x00010078c09c:
    *param_3 = (char)pppppppuVar14;
code_r0x00010078c0a0:
    pppppppuVar14 = (uint *******)((ulong)((long)unaff_x26 - (long)unaff_x20) >> 5);
code_r0x00010078c0a8:
    unaff_x22 = (uint *******)((long)pppppppuVar14 + 1);
    while (unaff_x22 = (uint *******)((long)unaff_x22 + -1), pppppppuVar18 = unaff_x20,
          pppppppuVar23 = unaff_x21, unaff_x22 != (uint *******)0x0) {
code_r0x00010078c0b4:
      unaff_x20 = pppppppuVar18 + 4;
      FUN_100e077ec(pppppppuVar18);
    }
    goto joined_r0x00010078c0c8;
  case 0xb1:
    goto code_r0x00010078c05c;
  case 0xb2:
    goto code_r0x00010078bf94;
  case 0xb3:
    goto code_r0x00010078bff4;
  case 0xb4:
    goto code_r0x00010078bf04;
  case 0xb5:
    goto code_r0x00010078c0b4;
  case 0xb6:
    goto code_r0x00010078c114;
  case 0xb9:
    goto code_r0x00010078bf74;
  case 0xbb:
    goto code_r0x00010078bed8;
  case 0xbc:
    goto code_r0x00010078bf30;
  case 0xbd:
    goto code_r0x00010078c0dc;
  case 0xbf:
code_r0x00010078bfbc:
    unaff_x25 = pppppppuStack_1b0 + (long)pppppppuStack_1a8 * 4;
    pppppppuStack_120 = pppppppuStack_1b0;
    pppppppuStack_118 = pppppppuStack_1b0;
    pppppppuStack_110 = pppppppuStack_1b8;
    pppppppuStack_108 = unaff_x25;
    pppppppuStack_100 = (uint *******)0x0;
    unaff_x20 = pppppppuStack_1b0;
    unaff_x21 = pppppppuStack_1b0;
    unaff_x22 = pppppppuStack_1a8;
    unaff_x23 = pppppppuStack_1b8;
    param_3 = (char *)pppppppuVar26;
  case 0xcd:
  case 0xde:
    if (unaff_x22 != (uint *******)0x0) {
      unaff_x20 = unaff_x21 + 4;
      pppppppuVar14 = (uint *******)(ulong)*(byte *)unaff_x21;
      pppppppuStack_118 = unaff_x20;
      if (*(byte *)unaff_x21 == 0x16) goto code_r0x00010078bff0;
code_r0x00010078c3e0:
      pppppppuVar28 = *(uint ********)((long)unaff_x21 + 9);
      pppppppuVar27 = *(uint ********)((long)unaff_x21 + 1);
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c3e4:
      uStack_197 = SUB86(pppppppuVar28,0);
      uStack_191 = (undefined1)((ulong)pppppppuVar28 >> 0x30);
      bStack_19f = (byte)pppppppuVar27;
      uStack_19e = (undefined5)((ulong)pppppppuVar27 >> 8);
      bStack_199 = (byte)((ulong)pppppppuVar27 >> 0x30);
      uStack_198 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
code_r0x00010078c3e8:
      ppppppuVar8 = unaff_x21[2];
      uStack_188 = SUB87(unaff_x21[3],0);
      uStack_181 = (undefined1)((ulong)unaff_x21[3] >> 0x38);
      uStack_190 = SUB81(ppppppuVar8,0);
      uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
      uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
code_r0x00010078c3f0:
      pppppppuVar16 = (uint *******)0x1;
code_r0x00010078c3f4:
      pppppppuStack_100 = pppppppuVar16;
code_r0x00010078c3f8:
      bStack_1a0 = (byte)pppppppuVar14;
code_r0x00010078c3fc:
      FUN_1004b62d4(&ppppppuStack_208,&bStack_1a0);
      pppppppuVar16 = extraout_x9;
code_r0x00010078c408:
      unaff_x19 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      pcVar6 = (char *)CONCAT71(uStack_1ff,bStack_200);
      pppppppuVar14 = (uint *******)0x8000000000000000;
code_r0x00010078c410:
      in_ZR = unaff_x19 == pppppppuVar14;
      pppppppuVar15 = pppppppuVar14;
code_r0x00010078c414:
      if ((bool)in_ZR) goto code_r0x00010078c008;
code_r0x00010078c418:
      unaff_x26 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078c41c:
      unaff_x27 = (uint *******)0x8000000000000000;
code_r0x00010078c420:
      pppppppuVar5 = (uint *******)pcVar6;
      pppppppuVar14 = pppppppuVar15;
      if (unaff_x22 != (uint *******)0x1) {
code_r0x00010078c978:
        unaff_x20 = unaff_x21 + 8;
code_r0x00010078c97c:
        pppppppuStack_118 = unaff_x20;
        pppppppuVar14 = (uint *******)(ulong)*(byte *)(unaff_x21 + 4);
        in_ZR = *(byte *)(unaff_x21 + 4) == 0x16;
        pppppppuVar5 = (uint *******)pcVar6;
        param_3 = (char *)pppppppuVar26;
code_r0x00010078c988:
        if ((bool)in_ZR) {
code_r0x00010078c98c:
          pppppppuVar17 = (uint *******)0x8000000000000000;
          goto code_r0x00010078d2b0;
        }
        uVar7 = *(undefined8 *)((long)unaff_x21 + 0x21);
        uStack_197 = (undefined6)*(undefined8 *)((long)unaff_x21 + 0x29);
        uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 0x29) >> 0x30);
        bStack_19f = (byte)uVar7;
        uStack_19e = (undefined5)((ulong)uVar7 >> 8);
        bStack_199 = (byte)((ulong)uVar7 >> 0x30);
        uStack_198 = (undefined1)((ulong)uVar7 >> 0x38);
        ppppppuVar8 = unaff_x21[6];
        uStack_188 = SUB87(unaff_x21[7],0);
        uStack_181 = (undefined1)((ulong)unaff_x21[7] >> 0x38);
        uStack_190 = SUB81(ppppppuVar8,0);
        uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
        uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
        pppppppuStack_100 = (uint *******)0x2;
        bStack_1a0 = (byte)pppppppuVar14;
        FUN_10139c09c(&ppppppuStack_208,&bStack_1a0);
        pppppppuVar17 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
        pppppppuVar14 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
        if (pppppppuVar17 != (uint *******)0x8000000000000000) {
          pppppppuVar16 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
          goto code_r0x00010078d2b0;
        }
        *(uint ********)((long)param_3 + 8) = pppppppuVar14;
        *param_3 = '\x05';
        if (unaff_x19 != (uint *******)0x0) {
          _free();
        }
        goto code_r0x00010078c014;
      }
code_r0x00010078c428:
      pppppppuVar17 = (uint *******)0x8000000000000000;
code_r0x00010078c42c:
      param_3 = (char *)pppppppuVar26;
code_r0x00010078d2b0:
      bVar4 = pppppppuVar17 != unaff_x27;
      pppppppuVar18 = (uint *******)0x0;
      if (bVar4) {
        pppppppuVar18 = pppppppuVar17;
      }
      *param_3 = '\0';
      pppppppuVar17 = (uint *******)0x8;
      if (bVar4) {
        pppppppuVar17 = pppppppuVar14;
      }
      pppppppuStack_90 = (uint *******)0x0;
      if (bVar4) {
        pppppppuStack_90 = pppppppuVar16;
      }
      *(uint ********)((long)param_3 + 8) = unaff_x19;
      *(uint ********)((long)param_3 + 0x10) = pppppppuVar5;
      *(uint ********)((long)param_3 + 0x18) = unaff_x26;
      *(uint ********)((long)param_3 + 0x20) = pppppppuVar18;
      *(uint ********)((long)param_3 + 0x28) = pppppppuVar17;
      *(uint ********)((long)param_3 + 0x30) = pppppppuStack_90;
      pppppppuStack_b8 = *(uint ********)((long)param_3 + 8);
      pppppppuStack_c0 = *(uint ********)param_3;
      ppppppuStack_a8 = *(uint *******)((long)param_3 + 0x18);
      pppppppuStack_b0 = *(uint ********)((long)param_3 + 0x10);
      pppppppuStack_98 = *(uint ********)((long)param_3 + 0x28);
      pppppppuStack_a0 = *(uint ********)((long)param_3 + 0x20);
      ppppppuVar8 = (uint ******)FUN_100fbc738(&pppppppuStack_120);
      goto code_r0x00010078d2f4;
    }
code_r0x00010078bff0:
    param_4 = (uint *******)&UNK_10b22d000;
code_r0x00010078bff4:
    param_4 = param_4 + 0x30;
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bff8:
code_r0x00010078c000:
    pcVar6 = (char *)thunk_FUN_1087e422c(0,param_4);
code_r0x00010078c008:
    pppppppuVar26[1] = (uint ******)pcVar6;
    *(char *)pppppppuVar26 = '\x05';
code_r0x00010078c014:
    unaff_x22 = (uint *******)(((ulong)((long)unaff_x25 - (long)unaff_x20) >> 5) + 1);
    while (unaff_x22 = (uint *******)((long)unaff_x22 + -1), unaff_x22 != (uint *******)0x0) {
code_r0x00010078c028:
      FUN_100e077ec(unaff_x20);
      unaff_x20 = unaff_x20 + 4;
code_r0x00010078c038:
    }
    goto code_r0x00010078c03c;
  case 0xc0:
code_r0x00010078be64:
    unaff_x21 = pppppppuStack_1b8;
code_r0x00010078be68:
    pppppppuVar14 = (uint *******)&bStack_1a0;
    pppppppuStack_b8 = (uint *******)unaff_x21[1];
    pppppppuStack_c0 = (uint *******)*unaff_x21;
code_r0x00010078be74:
    ppppppuVar8 = unaff_x21[2];
    pppppppuVar14[0x1f] = unaff_x21[3];
    pppppppuVar14[0x1e] = ppppppuVar8;
code_r0x00010078be7c:
    pcVar6 = (char *)pppppppuVar26;
    param_4 = (uint *******)&pppppppuStack_c0;
code_r0x00010078be84:
    pppppppuVar23 = unaff_x21;
    thunk_FUN_10882c74c(pcVar6,param_4);
    goto code_r0x00010078c0cc;
  case 0xc3:
    goto code_r0x00010078b3e0;
  case 0xc4:
    goto code_r0x00010078b4d8;
  case 0xc5:
    goto code_r0x00010078a820;
  case 0xc6:
    goto code_r0x00010078c028;
  case 200:
    goto code_r0x00010078bf58;
  case 0xc9:
  case 0xe5:
    goto code_r0x00010078bfb8;
  case 0xca:
  case 0xea:
code_r0x00010078bec8:
    unaff_x20 = unaff_x21;
    pppppppuStack_100 = (uint *******)0x0;
    unaff_x21 = unaff_x20;
code_r0x00010078bed0:
    if (unaff_x26 == (uint *******)0x0) {
code_r0x00010078bee8:
      param_3 = (char *)pppppppuVar26;
      param_4 = (uint *******)&UNK_10b22d000;
code_r0x00010078beec:
      param_4 = param_4 + 0x34;
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bef0:
code_r0x00010078bef8:
      param_3 = (char *)pppppppuVar26;
      pcVar6 = (char *)0x0;
code_r0x00010078befc:
      pcVar6 = (char *)thunk_FUN_1087e422c(pcVar6,param_4);
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bf00:
      unaff_x22 = (uint *******)pcVar6;
code_r0x00010078bf04:
      pppppppuVar26[1] = (uint ******)unaff_x22;
code_r0x00010078bf08:
      param_3 = (char *)pppppppuVar26;
      pppppppuVar14 = (uint *******)0x5;
code_r0x00010078bf0c:
      *param_3 = (char)pppppppuVar14;
    }
    else {
code_r0x00010078bed4:
      unaff_x20 = unaff_x21;
      unaff_x21 = unaff_x20;
code_r0x00010078bed8:
      pppppppuVar23 = unaff_x20 + 4;
      pppppppuVar14 = (uint *******)(ulong)*(byte *)unaff_x20;
      pppppppuStack_118 = pppppppuVar23;
      in_ZR = *(byte *)unaff_x20 == 0x16;
code_r0x00010078bee4:
      unaff_x20 = pppppppuVar23;
      if ((bool)in_ZR) goto code_r0x00010078bee8;
code_r0x00010078c2c8:
      pppppppuVar28 = *(uint ********)((long)unaff_x21 + 9);
      pppppppuVar27 = *(uint ********)((long)unaff_x21 + 1);
code_r0x00010078c2cc:
      uStack_197 = SUB86(pppppppuVar28,0);
      uStack_191 = (undefined1)((ulong)pppppppuVar28 >> 0x30);
      bStack_19f = (byte)pppppppuVar27;
      uStack_19e = (undefined5)((ulong)pppppppuVar27 >> 8);
      bStack_199 = (byte)((ulong)pppppppuVar27 >> 0x30);
      uStack_198 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
code_r0x00010078c2d0:
      pppppppuVar28 = (uint *******)unaff_x21[3];
      pppppppuVar27 = (uint *******)unaff_x21[2];
code_r0x00010078c2d4:
      uStack_188 = SUB87(pppppppuVar28,0);
      uStack_181 = (undefined1)((ulong)pppppppuVar28 >> 0x38);
      uStack_190 = SUB81(pppppppuVar27,0);
      uStack_18f = (undefined6)((ulong)pppppppuVar27 >> 8);
      uStack_189 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
      pppppppuVar16 = (uint *******)0x1;
code_r0x00010078c2dc:
      pppppppuStack_100 = pppppppuVar16;
code_r0x00010078c2e0:
      bStack_1a0 = (byte)pppppppuVar14;
code_r0x00010078c2e4:
      param_3 = (char *)&ppppppuStack_208;
code_r0x00010078c2e8:
      param_4 = (uint *******)&bStack_1a0;
      pcVar6 = param_3;
code_r0x00010078c2ec:
      FUN_1004b62d4(pcVar6,param_4);
code_r0x00010078c2f0:
      unaff_x19 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      unaff_x22 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
code_r0x00010078c2f4:
      pppppppuVar15 = (uint *******)0x8000000000000000;
code_r0x00010078c2f8:
      in_ZR = unaff_x19 == pppppppuVar15;
code_r0x00010078c2fc:
      if ((bool)in_ZR) goto code_r0x00010078bf04;
      in_ZR = unaff_x26 == (uint *******)0x1;
code_r0x00010078c304:
      param_3 = (char *)pppppppuVar26;
      if ((bool)in_ZR) {
code_r0x00010078c320:
        param_4 = (uint *******)&UNK_10b22d000;
        pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c324:
        param_4 = param_4 + 0x34;
code_r0x00010078c328:
code_r0x00010078c32c:
code_r0x00010078c330:
        pcVar6 = (char *)0x1;
code_r0x00010078c334:
        pcVar6 = (char *)thunk_FUN_1087e422c(pcVar6,param_4);
      }
      else {
        unaff_x26 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
        pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c30c:
        unaff_x20 = unaff_x21 + 8;
code_r0x00010078c310:
        pppppppuStack_118 = unaff_x20;
        pppppppuVar14 = (uint *******)(ulong)*(byte *)(unaff_x21 + 4);
code_r0x00010078c318:
        param_3 = (char *)pppppppuVar26;
        if ((int)pppppppuVar14 == 0x16) goto code_r0x00010078c320;
        uVar7 = *(undefined8 *)((long)unaff_x21 + 0x21);
        uStack_197 = (undefined6)*(undefined8 *)((long)unaff_x21 + 0x29);
        uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 0x29) >> 0x30);
        bStack_19f = (byte)uVar7;
        uStack_19e = (undefined5)((ulong)uVar7 >> 8);
        bStack_199 = (byte)((ulong)uVar7 >> 0x30);
        uStack_198 = (undefined1)((ulong)uVar7 >> 0x38);
        ppppppuVar8 = unaff_x21[6];
        uStack_188 = SUB87(unaff_x21[7],0);
        uStack_181 = (undefined1)((ulong)unaff_x21[7] >> 0x38);
        uStack_190 = SUB81(ppppppuVar8,0);
        uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
        uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
        pppppppuStack_100 = (uint *******)0x2;
        bStack_1a0 = (byte)pppppppuVar14;
        FUN_1004b64d4(&ppppppuStack_208,&bStack_1a0);
        pppppppuVar14 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
        pcVar6 = (char *)CONCAT71(uStack_1ff,bStack_200);
        pppppppuVar16 = (uint *******)0x8000000000000000;
code_r0x00010078d154:
        pppppppuVar26 = (uint *******)param_3;
        if (pppppppuVar14 != pppppppuVar16) {
          pppppppuStack_90 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
          *param_3 = '\x03';
          *(uint ********)((long)param_3 + 8) = unaff_x19;
          *(uint ********)((long)param_3 + 0x10) = unaff_x22;
          *(uint ********)((long)param_3 + 0x18) = unaff_x26;
          *(uint ********)((long)param_3 + 0x20) = pppppppuVar14;
          *(char **)((long)param_3 + 0x28) = pcVar6;
          *(uint ********)((long)param_3 + 0x30) = pppppppuStack_90;
          pppppppuStack_b8 = *(uint ********)((long)param_3 + 8);
          pppppppuStack_c0 = *(uint ********)param_3;
          ppppppuStack_a8 = *(uint *******)((long)param_3 + 0x18);
          pppppppuStack_b0 = *(uint ********)((long)param_3 + 0x10);
          pppppppuStack_98 = *(uint ********)((long)param_3 + 0x28);
          pppppppuStack_a0 = *(uint ********)((long)param_3 + 0x20);
code_r0x00010078d18c:
          ppppppuVar8 = (uint ******)FUN_100fbc738(&pppppppuStack_120);
code_r0x00010078d2f4:
          if (ppppppuVar8 != (uint ******)0x0) {
            *(uint *******)((long)param_3 + 8) = ppppppuVar8;
            *param_3 = '\x05';
code_r0x00010078d3b4:
            FUN_100e06c08(&pppppppuStack_c0);
          }
          break;
        }
      }
code_r0x00010078c338:
      param_3 = (char *)pppppppuVar26;
      *(char **)((long)param_3 + 8) = pcVar6;
code_r0x00010078c33c:
      pppppppuVar14 = (uint *******)0x5;
code_r0x00010078c340:
      *param_3 = (char)pppppppuVar14;
      if (unaff_x19 != (uint *******)0x0) {
code_r0x00010078c348:
        param_3 = (char *)unaff_x22;
code_r0x00010078c34c:
        _free(param_3);
      }
    }
    pppppppuVar15 = (uint *******)((ulong)((long)unaff_x25 - (long)unaff_x20) >> 5);
code_r0x00010078bf18:
    unaff_x22 = (uint *******)((long)pppppppuVar15 + 1);
code_r0x00010078bf1c:
    while (pcVar6 = (char *)unaff_x20, unaff_x22 = (uint *******)((long)unaff_x22 + -1),
          unaff_x22 != (uint *******)0x0) {
      unaff_x19 = (uint *******)((long)pcVar6 + 0x20);
code_r0x00010078bf2c:
      FUN_100e077ec(pcVar6);
code_r0x00010078bf30:
      unaff_x20 = unaff_x19;
code_r0x00010078bf34:
    }
code_r0x00010078c03c:
    pppppppuVar23 = unaff_x21;
    unaff_x25 = unaff_x23;
joined_r0x00010078c0c8:
    if (unaff_x25 == (uint *******)0x0) break;
    goto code_r0x00010078c0cc;
  case 0xcb:
  case 0xdc:
    goto code_r0x00010078c078;
  case 0xcc:
    goto code_r0x00010078c0d8;
  case 0xce:
    goto code_r0x00010078c160;
  case 0xcf:
code_r0x00010078bf38:
    unaff_x21 = pppppppuStack_1b0;
    unaff_x23 = pppppppuStack_1b8;
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bf3c:
    param_3 = (char *)pppppppuVar26;
    unaff_x25 = unaff_x21 + (long)pppppppuStack_1a8 * 4;
    unaff_x26 = pppppppuStack_1a8;
code_r0x00010078bf44:
    pppppppuStack_120 = unaff_x21;
    pppppppuStack_118 = unaff_x21;
  case 0xe0:
    pppppppuStack_110 = unaff_x23;
    pppppppuStack_108 = unaff_x25;
code_r0x00010078bf4c:
    unaff_x20 = unaff_x21;
    pppppppuStack_100 = (uint *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bf54:
    param_3 = (char *)pppppppuVar26;
    if (unaff_x26 != (uint *******)0x0) {
code_r0x00010078bf58:
      unaff_x20 = unaff_x21;
      unaff_x21 = unaff_x20;
code_r0x00010078bf5c:
      pppppppuVar14 = (uint *******)(ulong)*(byte *)unaff_x20;
      pppppppuStack_118 = unaff_x20 + 4;
      in_ZR = *(byte *)unaff_x20 == 0x16;
      unaff_x20 = unaff_x20 + 4;
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bf68:
      if ((bool)in_ZR) goto code_r0x00010078bf6c;
code_r0x00010078c354:
      pppppppuVar28 = *(uint ********)((long)unaff_x21 + 9);
      pppppppuVar27 = *(uint ********)((long)unaff_x21 + 1);
      pppppppuVar15 = pppppppuVar14;
code_r0x00010078c358:
      uStack_197 = SUB86(pppppppuVar28,0);
      uStack_191 = (undefined1)((ulong)pppppppuVar28 >> 0x30);
      bStack_19f = (byte)pppppppuVar27;
      uStack_19e = (undefined5)((ulong)pppppppuVar27 >> 8);
      bStack_199 = (byte)((ulong)pppppppuVar27 >> 0x30);
      uStack_198 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
code_r0x00010078c35c:
      ppppppuVar8 = unaff_x21[2];
      uStack_188 = SUB87(unaff_x21[3],0);
      uStack_181 = (undefined1)((ulong)unaff_x21[3] >> 0x38);
      uStack_190 = SUB81(ppppppuVar8,0);
      uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
      uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
      pppppppuVar16 = (uint *******)0x1;
      pppppppuVar14 = pppppppuVar15;
code_r0x00010078c368:
      param_3 = (char *)pppppppuVar26;
      pppppppuStack_100 = pppppppuVar16;
code_r0x00010078c36c:
      bStack_1a0 = (byte)pppppppuVar14;
      pcVar6 = (char *)&ppppppuStack_208;
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c374:
      param_3 = (char *)pppppppuVar26;
      param_4 = (uint *******)&bStack_1a0;
code_r0x00010078c378:
      FUN_1004b62d4(pcVar6,param_4);
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c37c:
      unaff_x19 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      unaff_x22 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
      if (unaff_x19 == (uint *******)0x8000000000000000) goto code_r0x00010078bf88;
code_r0x00010078c38c:
      in_ZR = unaff_x26 == (uint *******)0x1;
code_r0x00010078c390:
      if ((bool)in_ZR) {
code_r0x00010078c3ac:
        param_4 = (uint *******)&UNK_10b22d000;
code_r0x00010078c3b0:
        param_4 = param_4 + 0x32;
code_r0x00010078c3b8:
        pcVar6 = (char *)0x1;
code_r0x00010078c3c0:
        pcVar6 = (char *)thunk_FUN_1087e422c(pcVar6,param_4);
code_r0x00010078c3c4:
        pppppppuVar26[1] = (uint ******)pcVar6;
code_r0x00010078c3c8:
        pppppppuVar14 = (uint *******)0x5;
code_r0x00010078c3cc:
        *(char *)pppppppuVar26 = (char)pppppppuVar14;
        if (unaff_x19 != (uint *******)0x0) {
code_r0x00010078c3d4:
          param_3 = (char *)unaff_x22;
code_r0x00010078c3d8:
          _free(param_3);
code_r0x00010078c3dc:
        }
        goto code_r0x00010078bf94;
      }
code_r0x00010078c394:
      unaff_x26 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078c398:
      unaff_x20 = unaff_x21 + 8;
code_r0x00010078c39c:
      param_3 = (char *)pppppppuVar26;
      pppppppuStack_118 = unaff_x20;
code_r0x00010078c3a0:
      pppppppuVar14 = (uint *******)(ulong)*(byte *)(unaff_x21 + 4);
      pppppppuVar26 = (uint *******)param_3;
code_r0x00010078c3a4:
      if ((int)pppppppuVar14 == 0x16) goto code_r0x00010078c3ac;
      uVar7 = *(undefined8 *)((long)unaff_x21 + 0x21);
      uStack_197 = (undefined6)*(undefined8 *)((long)unaff_x21 + 0x29);
      uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x21 + 0x29) >> 0x30);
      bStack_19f = (byte)uVar7;
      uStack_19e = (undefined5)((ulong)uVar7 >> 8);
      bStack_199 = (byte)((ulong)uVar7 >> 0x30);
      uStack_198 = (undefined1)((ulong)uVar7 >> 0x38);
      ppppppuVar8 = unaff_x21[6];
      uStack_188 = SUB87(unaff_x21[7],0);
      uStack_181 = (undefined1)((ulong)unaff_x21[7] >> 0x38);
      uStack_190 = SUB81(ppppppuVar8,0);
      uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
      uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
      pppppppuStack_100 = (uint *******)0x2;
      bStack_1a0 = (byte)pppppppuVar14;
      FUN_1004b62d4(&ppppppuStack_208,&bStack_1a0);
      pcVar6 = (char *)CONCAT71(uStack_1ff,bStack_200);
      if ((uint ******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208) ==
          (uint ******)0x8000000000000000) goto code_r0x00010078c3c4;
      pppppppuStack_90 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
      *(char *)pppppppuVar26 = '\x04';
      pppppppuVar26[1] = (uint ******)unaff_x19;
      pppppppuVar26[2] = (uint ******)unaff_x22;
      pppppppuVar26[3] = (uint ******)unaff_x26;
      pppppppuVar26[4] = (uint ******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      pppppppuVar26[5] = (uint ******)pcVar6;
      pppppppuVar26[6] = (uint ******)pppppppuStack_90;
      pppppppuStack_b8 = (uint *******)pppppppuVar26[1];
      pppppppuStack_c0 = (uint *******)*pppppppuVar26;
      ppppppuStack_a8 = pppppppuVar26[3];
      pppppppuStack_b0 = (uint *******)pppppppuVar26[2];
      pppppppuStack_98 = (uint *******)pppppppuVar26[5];
      pppppppuStack_a0 = (uint *******)pppppppuVar26[4];
      ppppppuVar8 = (uint ******)FUN_100fbc738(&pppppppuStack_120);
      param_3 = (char *)pppppppuVar26;
      goto code_r0x00010078d2f4;
    }
code_r0x00010078bf6c:
    param_4 = (uint *******)&UNK_10b22d190;
code_r0x00010078bf74:
    param_3 = (char *)pppppppuVar26;
code_r0x00010078bf7c:
    pcVar6 = (char *)0x0;
code_r0x00010078bf80:
    pcVar6 = (char *)thunk_FUN_1087e422c(pcVar6,param_4);
code_r0x00010078bf84:
    unaff_x22 = (uint *******)pcVar6;
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078bf88:
    pppppppuVar26[1] = (uint ******)unaff_x22;
    *(char *)pppppppuVar26 = '\x05';
code_r0x00010078bf94:
    pppppppuVar14 = (uint *******)((ulong)((long)unaff_x25 - (long)unaff_x20) >> 5);
code_r0x00010078bf9c:
    unaff_x22 = (uint *******)((long)pppppppuVar14 + 1);
    pppppppuVar14 = unaff_x20;
    while (unaff_x22 = (uint *******)((long)unaff_x22 + -1), unaff_x22 != (uint *******)0x0) {
      unaff_x20 = pppppppuVar14 + 4;
      FUN_100e077ec(pppppppuVar14);
code_r0x00010078bfb8:
      pppppppuVar14 = unaff_x20;
    }
    goto code_r0x00010078c03c;
  case 0xd0:
    goto code_r0x00010078c108;
  case 0xd1:
    goto code_r0x00010078bea0;
  case 0xd2:
    goto code_r0x00010078bf00;
  case 0xd3:
    goto code_r0x00010078c0a8;
  case 0xd4:
code_r0x00010078be60:
    goto code_r0x00010078c0cc;
  case 0xd5:
    goto code_r0x00010078bf88;
  case 0xd6:
code_r0x00010078be28:
                    /* WARNING (jumptable): Read-only address (ram,0x000108cde43c) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x000108cde444) is written */
    pppppppuVar14[0x1f] = (uint ******)pppppppuVar28;
    pppppppuVar14[0x1e] = (uint ******)pppppppuVar27;
code_r0x00010078be2c:
    param_4 = (uint *******)&pppppppuStack_c0;
    pppppppuVar26 = (uint *******)pcVar6;
    goto code_r0x00010078be30;
  case 0xd9:
code_r0x00010078b3c4:
    unaff_x21 = (uint *******)((ulong)unaff_x25 | 1);
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078b3c8:
    pppppppuStack_238 = (uint *******)(((ulong)(pppppppuVar16 + -8) >> 6) + 1);
    unaff_x25 = pppppppuVar15 + 8;
    unaff_x24 = (uint *******)0x8000000000000000;
code_r0x00010078b3e0:
    unaff_x23 = (uint *******)0x8000000000000000;
code_r0x00010078b3e4:
    unaff_x27 = (uint *******)0x8000000000000000;
    goto code_r0x00010078b410;
  case 0xda:
    goto code_r0x00010078b51c;
  case 0xdb:
    goto code_r0x00010078ad14;
  case 0xdd:
    goto code_r0x00010078c084;
  case 0xdf:
    goto code_r0x00010078c038;
  case 0xe1:
    goto code_r0x00010078c0f8;
  case 0xe7:
    goto code_r0x00010078bf18;
  case 0xe8:
    goto code_r0x00010078bf68;
  case 0xe9:
    goto code_r0x00010078c118;
  case 0xeb:
    goto code_r0x00010078bff8;
  case 0xec:
    goto code_r0x00010078bea8;
  case 0xee:
code_r0x00010078c258:
    pppppppuStack_210 = (uint *******)pcVar6;
code_r0x00010078c84c:
    pppppppuVar14 = (uint *******)&UNK_108ca1366;
    param_3 = (char *)pppppppuStack_210;
code_r0x00010078c854:
    ppppppuStack_208._0_1_ = (byte)pppppppuVar14;
    ppppppuStack_208._1_7_ = (undefined7)((ulong)pppppppuVar14 >> 8);
    bStack_200 = 9;
    uStack_1ff = 0;
code_r0x00010078c85c:
    bStack_1a0 = (byte)&ppppppuStack_208;
    bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
    uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
    bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    pppppppuVar26 = (uint *******)param_3;
FUN_10078c870:
    param_3 = s_missing_field_____108ac28f7;
code_r0x00010078c878:
    param_3 = (char *)thunk_FUN_108856088(param_3,&bStack_1a0);
    goto code_r0x00010078c880;
  case 0xef:
    goto code_r0x00010078b404;
  case 0xf0:
    goto code_r0x00010078b4a4;
  case 0xf1:
    goto code_r0x00010078a390;
  case 0xf3:
code_r0x00010078a560:
    ppppppuStack_a8 = unaff_x21[3];
    pppppppuStack_b0 = (uint *******)unaff_x21[2];
    pppppppuStack_c0 = pppppppuVar27;
    pppppppuStack_b8 = pppppppuVar28;
    thunk_FUN_1088000ec(pppppppuVar26,&pppppppuStack_c0);
code_r0x00010078a57c:
    pppppppuVar23 = unaff_x21;
    goto code_r0x00010078c0cc;
  case 0xf4:
    goto code_r0x00010078a378;
  case 0xf5:
    goto code_r0x00010078a424;
  case 0xf7:
code_r0x00010078a5ec:
                    /* WARNING (jumptable): Read-only address (ram,0x000108cde42c) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x000108cde434) is written */
    pppppppuVar14[0x1d] = (uint ******)pppppppuVar28;
    pppppppuVar14[0x1c] = (uint ******)pppppppuVar27;
    ppppppuVar8 = pppppppuVar23[2];
                    /* WARNING (jumptable): Read-only address (ram,0x000108cde43c) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x000108cde444) is written */
    pppppppuVar14[0x1f] = pppppppuVar23[3];
    pppppppuVar14[0x1e] = ppppppuVar8;
    FUN_107c04640(pppppppuVar26,&pppppppuStack_c0);
code_r0x00010078c0cc:
    _free(pppppppuVar23);
code_r0x00010078c0d4:
    break;
  case 0xf8:
    goto code_r0x00010078a678;
  case 0xf9:
    goto code_r0x00010078a4b0;
  case 0xfa:
    goto code_r0x00010078a794;
  case 0xfb:
code_r0x00010078a290:
code_r0x00010078a420:
    bStack_200 = (byte)pppppppuVar5;
    uStack_1ff = (uint7)((ulong)pppppppuVar5 >> 8);
    pppppppuVar18 = unaff_x20;
code_r0x00010078a424:
    ppppppuStack_208._0_1_ = 5;
    unaff_x20 = pppppppuVar18;
    goto code_r0x00010078a430;
  case 0xfc:
code_r0x00010078a704:
    if ((bool)in_ZR) {
      bStack_200 = (byte)pppppppuStack_138;
      uStack_1ff = (uint7)((ulong)pppppppuStack_138 >> 8);
      pppppppuVar14 = (uint *******)0x5;
      goto code_r0x00010078a714;
    }
code_r0x00010078c0d8:
    pppppppuVar16 = (uint *******)&bStack_1a0;
code_r0x00010078c0dc:
    ppppppuVar29 = pppppppuVar16[0xd];
    ppppppuVar8 = pppppppuVar16[0xc];
    uStack_181 = SUB81(pppppppuVar16[0xf],0);
    uStack_180 = (undefined7)((ulong)pppppppuVar16[0xf] >> 8);
    uStack_189 = SUB81(pppppppuVar16[0xe],0);
    uStack_188 = (undefined7)((ulong)pppppppuVar16[0xe] >> 8);
    uStack_191 = SUB81(ppppppuVar29,0);
    uStack_190 = (undefined1)((ulong)ppppppuVar29 >> 8);
    uStack_18f = (undefined6)((ulong)ppppppuVar29 >> 0x10);
    bStack_199 = (byte)ppppppuVar8;
    uStack_198 = (undefined1)((ulong)ppppppuVar8 >> 8);
    uStack_197 = (undefined6)((ulong)ppppppuVar8 >> 0x10);
    ppppppuStack_208._0_1_ = (byte)unaff_x19;
    uStack_1ff = (uint7)((ulong)ppppppuVar8 >> 8);
    ppppppuStack_208._1_7_ = CONCAT52(uStack_19e,CONCAT11(bStack_19f,bStack_1a0));
    uStack_1f7 = (undefined7)((ulong)ppppppuVar29 >> 8);
    uStack_1ef = uStack_188;
    uStack_1f0 = uStack_189;
    uStack_1f8 = uStack_191;
    bStack_200 = bStack_199;
code_r0x00010078c0f8:
    pppppppuVar14 = *(uint ********)((long)pppppppuVar16 + 0x1f);
    uStack_1e8 = SUB81(pppppppuVar14,0);
    uStack_1e7 = (undefined7)((ulong)pppppppuVar14 >> 8);
    pppppppuVar28 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
    pppppppuVar27 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
    pppppppuVar32 = (uint *******)CONCAT71(uStack_1ef,uStack_1f0);
    pppppppuVar31 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078c108:
    pppppppuStack_a0 = pppppppuVar14;
    pppppppuVar16[0x1d] = (uint ******)pppppppuVar28;
    pppppppuVar16[0x1c] = (uint ******)pppppppuVar27;
    pppppppuVar16[0x1f] = (uint ******)pppppppuVar32;
    pppppppuVar16[0x1e] = (uint ******)pppppppuVar31;
    pppppppuVar5 = (uint *******)&pppppppuStack_120;
code_r0x00010078c114:
    pppppppuVar5 = (uint *******)FUN_100fbc738(pppppppuVar5);
code_r0x00010078c118:
    if (pppppppuVar5 != (uint *******)0x0) {
      bStack_200 = (byte)pppppppuVar5;
      uStack_1ff = (uint7)((ulong)pppppppuVar5 >> 8);
      ppppppuStack_208._0_1_ = 5;
      pppppppuVar14 = (uint *******)&pppppppuStack_c0;
      goto code_r0x00010078a69c;
    }
    goto LAB_10078a464;
  case 0xfd:
    goto code_r0x00010078a60c;
  case 0xfe:
    goto code_r0x00010078a628;
  case 0xff:
code_r0x00010078a5d8:
                    /* WARNING: Could not recover jumptable at 0x00010078a5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(puVar20 + in_x13 * 4))();
    return;
  }
code_r0x00010078d0a8:
code_r0x00010078d0b8:
  return;
code_r0x00010078c17c:
  thunk_FUN_108819814(pppppppuVar14,pppppppuVar5,param_4);
  pppppppuVar26 = (uint *******)pcVar6;
  goto LAB_10078a464;
code_r0x00010078b788:
  do {
    in_ZR = pppppppuVar15 == (uint *******)0x0;
code_r0x00010078b78c:
    uVar11 = 1;
    if (!(bool)in_ZR) {
      uVar11 = 2;
    }
    unaff_x19 = (uint *******)(ulong)uVar11;
code_r0x00010078b794:
    FUN_100e077ec(&bStack_1a0);
code_r0x00010078b79c:
    in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
    pppppppuVar14 = (uint *******)(ulong)((uint)unaff_x19 & 0xff);
code_r0x00010078b7a0:
    if ((bool)in_ZR) {
code_r0x00010078b804:
      pppppppuVar14 = (uint *******)0x8000000000000000;
code_r0x00010078b808:
      if (unaff_x23 != pppppppuVar14) {
        pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
        pppppppuStack_138 = pppppppuStack_228;
        ppppppuStack_208._0_1_ = 0x20;
        ppppppuStack_208._1_7_ = 0x108c725;
        bStack_200 = 4;
        uStack_1ff = 0;
        bStack_1a0 = (byte)&ppppppuStack_208;
        bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
        uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
        bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
        uStack_198 = 0xa0;
        uStack_197 = 0x100c7b3;
        uStack_191 = 0;
        uStack_140 = unaff_x27;
        pppppppuStack_130 = unaff_x26;
        pppppppuStack_98 = unaff_x25;
        ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
        unaff_x25 = (uint *******)&pppppppuStack_c0;
        goto LAB_10078c78c;
      }
      pppppppuVar15 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
code_r0x00010078b814:
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
      if ((int)pppppppuVar15 == 0x16) {
        pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
        pppppppuStack_138 = pppppppuStack_228;
        uStack_140 = unaff_x27;
        pppppppuStack_130 = unaff_x26;
        pppppppuStack_98 = unaff_x25;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x00010078da5c;
      }
      pppppppuVar28 = (uint *******)unaff_x21[1];
      pppppppuVar27 = (uint *******)*unaff_x21;
code_r0x00010078b828:
      unaff_x22[1] = (uint ******)pppppppuVar28;
      *unaff_x22 = (uint ******)pppppppuVar27;
code_r0x00010078b82c:
      uVar7 = *(undefined8 *)((long)unaff_x21 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
      bStack_1a0 = (byte)pppppppuVar15;
      pcVar6 = (char *)&ppppppuStack_208;
code_r0x00010078b840:
      FUN_1004b62d4(pcVar6,&bStack_1a0);
      unaff_x23 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
code_r0x00010078b84c:
      if (unaff_x23 == (uint *******)0x8000000000000000) {
        pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
        pppppppuStack_98 = unaff_x25;
        goto code_r0x00010078cad8;
      }
code_r0x00010078b858:
      pppppppuStack_220 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
      pppppppuVar14 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078b860:
      pppppppuStack_230 = pppppppuVar14;
    }
    else {
code_r0x00010078b7a4:
      if ((int)pppppppuVar14 == 1) {
        in_ZR = unaff_x24 == (uint *******)0x8000000000000000;
code_r0x00010078b7b4:
        if (!(bool)in_ZR) {
          pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
          pppppppuStack_138 = pppppppuStack_228;
          ppppppuStack_208._0_1_ = 0x7a;
          ppppppuStack_208._1_7_ = 0x108cad8;
          bStack_200 = 0xd;
          uStack_1ff = 0;
          bStack_1a0 = (byte)&ppppppuStack_208;
          bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
          uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
          bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
          uStack_198 = 0xa0;
          uStack_197 = 0x100c7b3;
          uStack_191 = 0;
          uStack_140 = unaff_x27;
          pppppppuStack_130 = unaff_x26;
          pppppppuStack_98 = unaff_x25;
          ppppppuVar8 = (uint ******)
                        thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
          unaff_x25 = (uint *******)&pppppppuStack_c0;
          pppppppuStack_210[1] = ppppppuVar8;
          *(char *)pppppppuStack_210 = '\x05';
          unaff_x20 = pppppppuStack_220;
          unaff_x22 = pppppppuStack_228;
          goto joined_r0x00010078c7a4;
        }
        pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
code_r0x00010078b7bc:
        pppppppuVar16 = (uint *******)0x16;
code_r0x00010078b7c0:
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar16);
        if ((int)pppppppuVar14 == 0x16) {
          pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
          pppppppuStack_138 = pppppppuStack_228;
          uStack_140 = unaff_x27;
          pppppppuStack_130 = unaff_x26;
          pppppppuStack_98 = unaff_x25;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010078da5c;
        }
code_r0x00010078b7cc:
        ppppppuVar8 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar8;
code_r0x00010078b7d4:
        uVar7 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
        bStack_1a0 = (byte)pppppppuVar14;
code_r0x00010078b7e4:
        pcVar6 = (char *)&ppppppuStack_208;
code_r0x00010078b7e8:
        FUN_10139c09c(pcVar6,&bStack_1a0);
        pppppppuVar14 = (uint *******)0x8000000000000000;
        unaff_x27 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
code_r0x00010078b7f8:
        unaff_x24 = unaff_x27;
        if (unaff_x24 == pppppppuVar14) {
          pppppppuVar14 = (uint *******)((long)pppppppuVar26 + 1);
          goto code_r0x00010078c9e8;
        }
        pppppppuStack_228 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
        unaff_x26 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
        unaff_x27 = unaff_x24;
      }
      else {
        pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
        pppppppuVar16 = (uint *******)0x16;
code_r0x00010078b870:
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,(char)pppppppuVar16);
        pppppppuVar15 = pppppppuVar14;
code_r0x00010078b874:
        if ((int)pppppppuVar15 == 0x16) {
          pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
          pppppppuStack_138 = pppppppuStack_228;
          uStack_140 = unaff_x27;
          pppppppuStack_130 = unaff_x26;
          pppppppuStack_98 = unaff_x25;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010078da5c;
        }
        ppppppuVar8 = *unaff_x21;
        unaff_x22[1] = unaff_x21[1];
        *unaff_x22 = ppppppuVar8;
code_r0x00010078b884:
        uVar7 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
        bStack_1a0 = (byte)pppppppuVar15;
        pcVar6 = (char *)&bStack_1a0;
code_r0x00010078b894:
        FUN_100e077ec(pcVar6);
      }
    }
    unaff_x25 = unaff_x25 + 8;
    pppppppuVar14 = unaff_x20 + 8;
    param_3 = (char *)((long)pppppppuVar26 + 1);
code_r0x00010078b404:
    pppppppuVar16 = pppppppuStack_218;
    pppppppuVar26 = (uint *******)param_3;
code_r0x00010078b408:
    in_ZR = pppppppuVar14 == pppppppuVar16;
code_r0x00010078b40c:
    pppppppuVar14 = pppppppuStack_218;
    pppppppuVar17 = pppppppuStack_238;
    if ((bool)in_ZR) {
code_r0x00010078c730:
      pppppppuStack_138 = pppppppuStack_228;
      uStack_140 = unaff_x27;
      pppppppuStack_130 = unaff_x26;
      pppppppuStack_98 = pppppppuVar14;
      pppppppuStack_80 = pppppppuVar17;
      if (unaff_x23 == (uint *******)0x8000000000000000) {
        unaff_x25 = (uint *******)&pppppppuStack_c0;
        goto code_r0x00010078c758;
      }
      in_ZR = unaff_x24 == (uint *******)0x8000000000000000;
      pppppppuVar14 = (uint *******)0x0;
      unaff_x20 = pppppppuStack_220;
      unaff_x22 = pppppppuStack_228;
      if (!(bool)in_ZR) {
        pppppppuVar14 = unaff_x24;
      }
      goto code_r0x00010078c7dc;
    }
code_r0x00010078b410:
    unaff_x20 = unaff_x25 + -8;
    bVar1 = *(byte *)unaff_x20;
    pppppppuVar16 = (uint *******)(ulong)bVar1;
    pppppppuVar14 = unaff_x25;
    pppppppuVar17 = pppppppuVar26;
    if (bVar1 == 0x16) goto code_r0x00010078c730;
    ppppppuVar8 = unaff_x25[-6];
    *(uint *******)((long)unaff_x22 + 0x17) = unaff_x25[-5];
    *(uint *******)((long)unaff_x22 + 0xf) = ppppppuVar8;
    bStack_1a0 = bVar1;
code_r0x00010078b42c:
    ppppppuVar8 = *(uint *******)((long)unaff_x20 + 1);
    unaff_x22[1] = *(uint *******)((long)unaff_x20 + 9);
    *unaff_x22 = ppppppuVar8;
code_r0x00010078b434:
    pppppppuStack_c0 = (uint *******)unaff_x20[4];
    pppppppuStack_b8 = (uint *******)unaff_x20[5];
    ppppppuStack_a8 = unaff_x20[7];
    pppppppuStack_b0 = (uint *******)unaff_x20[6];
    pppppppuVar15 = (uint *******)CONCAT17(uStack_191,CONCAT61(uStack_197,uStack_198));
    pcVar6 = (char *)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
    pppppppuVar17 = (uint *******)CONCAT17(uStack_181,uStack_188);
code_r0x00010078b450:
    iVar13 = (int)pppppppuVar16;
    if (iVar13 < 0xd) {
      if (iVar13 == 1) {
        uVar11 = 1;
        if (bStack_19f != 1) {
          uVar11 = 2;
        }
        uVar12 = 0;
        if (bStack_19f != 0) {
          uVar12 = uVar11;
        }
        unaff_x19 = (uint *******)(ulong)uVar12;
      }
      else {
        if (iVar13 != 4) {
          if (iVar13 == 0xc) {
code_r0x00010078b470:
            if (pppppppuVar17 == (uint *******)0xd) {
              uVar11 = 1;
              if (*(uint *******)pcVar6 != (uint ******)0x656c655f74786574 ||
                  *(long *)((long)pcVar6 + 5) != 0x73746e656d656c65) {
                uVar11 = 2;
              }
            }
            else {
              if (pppppppuVar17 != (uint *******)0x4) goto code_r0x00010078b650;
              in_ZR = *(uint *)pcVar6 == 0x74786574;
              pppppppuVar16 = (uint *******)0x2;
code_r0x00010078b494:
              uVar11 = (uint)pppppppuVar16;
              if ((bool)in_ZR) {
                uVar11 = 0;
              }
            }
            unaff_x19 = (uint *******)(ulong)uVar11;
            goto joined_r0x00010078b498;
          }
code_r0x00010078dae4:
          pppppppuStack_80 = (uint *******)((long)pppppppuVar26 + 1);
          pppppppuStack_138 = pppppppuStack_228;
          uStack_140 = unaff_x27;
          pppppppuStack_130 = unaff_x26;
          pppppppuStack_98 = unaff_x25;
          ppppppuVar8 = (uint ******)
                        thunk_FUN_108855b04(&bStack_1a0,&ppppppuStack_208,&UNK_10b211840);
          unaff_x25 = (uint *******)&pppppppuStack_c0;
          goto LAB_10078c78c;
        }
        uVar11 = 1;
        if (pppppppuVar15 != (uint *******)0x1) {
          uVar11 = 2;
        }
        uVar12 = 0;
        if (pppppppuVar15 != (uint *******)0x0) {
          uVar12 = uVar11;
        }
        unaff_x19 = (uint *******)(ulong)uVar12;
      }
      goto code_r0x00010078b794;
    }
    in_ZR = iVar13 == 0xd;
    pppppppuVar14 = pppppppuVar15;
code_r0x00010078b4a4:
    if (!(bool)in_ZR) {
      if ((int)pppppppuVar16 == 0xe) {
        in_ZR = pppppppuVar17 == (uint *******)0xd;
        pppppppuVar15 = pppppppuVar14;
code_r0x00010078b51c:
        if ((bool)in_ZR) {
          if (((((*pcVar6 != 't') || (*(char *)((long)pcVar6 + 1) != 'e')) ||
               ((*(char *)((long)pcVar6 + 2) != 'x' ||
                ((*(char *)((long)pcVar6 + 3) != 't' || (*(char *)((long)pcVar6 + 4) != '_')))))) ||
              (*(char *)((long)pcVar6 + 5) != 'e')) ||
             ((((((*(char *)((long)pcVar6 + 6) != 'l' || (*(char *)((long)pcVar6 + 7) != 'e')) ||
                 (*(char *)((long)pcVar6 + 8) != 'm')) ||
                ((*(char *)((long)pcVar6 + 9) != 'e' || (*(char *)((long)pcVar6 + 10) != 'n')))) ||
               (*(char *)((long)pcVar6 + 0xb) != 't')) || (*(char *)((long)pcVar6 + 0xc) != 's'))))
          goto code_r0x00010078b650;
          unaff_x19 = (uint *******)0x1;
        }
        else if (((pppppppuVar17 == (uint *******)0x4) && (*pcVar6 == 't')) &&
                ((*(char *)((long)pcVar6 + 1) == 'e' &&
                 ((*(char *)((long)pcVar6 + 2) == 'x' && (*(char *)((long)pcVar6 + 3) == 't')))))) {
code_r0x00010078b558:
          unaff_x19 = (uint *******)0x0;
        }
        else {
code_r0x00010078b650:
          unaff_x19 = (uint *******)0x2;
        }
joined_r0x00010078b498:
        if (pppppppuVar15 != (uint *******)0x0) {
          _free();
        }
        goto code_r0x00010078b79c;
      }
      if ((int)pppppppuVar16 != 0xf) goto code_r0x00010078dae4;
      if ((uint *******)pcVar6 == (uint *******)0xd) {
        if ((((*(char *)pppppppuVar14 != 't') || (*(char *)((long)pppppppuVar14 + 1) != 'e')) ||
            (*(char *)((long)pppppppuVar14 + 2) != 'x')) ||
           (((*(char *)((long)pppppppuVar14 + 3) != 't' ||
             (*(char *)((long)pppppppuVar14 + 4) != '_')) ||
            ((*(char *)((long)pppppppuVar14 + 5) != 'e' ||
             (*(char *)((long)pppppppuVar14 + 6) != 'l')))))) goto code_r0x00010078b74c;
code_r0x00010078b6fc:
        if (*(char *)((long)pppppppuVar14 + 7) != 'e') goto code_r0x00010078b74c;
        pppppppuVar16 = (uint *******)(ulong)*(byte *)(pppppppuVar14 + 1);
code_r0x00010078b70c:
        if ((int)pppppppuVar16 != 0x6d) goto code_r0x00010078b74c;
code_r0x00010078b714:
        pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 9);
code_r0x00010078b718:
        if (((int)pppppppuVar16 != 0x65) || (*(char *)((long)pppppppuVar14 + 10) != 'n'))
        goto code_r0x00010078b74c;
code_r0x00010078b72c:
        in_ZR = *(char *)((long)pppppppuVar14 + 0xb) == 't';
code_r0x00010078b734:
        if (!(bool)in_ZR) goto code_r0x00010078b74c;
        in_ZR = *(char *)((long)pppppppuVar14 + 0xc) == 's';
code_r0x00010078b740:
        if ((bool)in_ZR) {
code_r0x00010078b744:
          unaff_x19 = (uint *******)0x1;
code_r0x00010078b748:
        }
        else {
code_r0x00010078b74c:
          unaff_x19 = (uint *******)0x2;
        }
      }
      else {
        if (((uint *******)pcVar6 != (uint *******)0x4) || (*(char *)pppppppuVar14 != 't'))
        goto code_r0x00010078b74c;
        pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 1);
code_r0x00010078b4d8:
        if ((((int)pppppppuVar16 != 0x65) || (*(char *)((long)pppppppuVar14 + 2) != 'x')) ||
           (*(char *)((long)pppppppuVar14 + 3) != 't')) goto code_r0x00010078b74c;
        unaff_x19 = (uint *******)0x0;
      }
      goto code_r0x00010078b794;
    }
    if ((uint *******)pcVar6 != (uint *******)0xd) {
      if ((uint *******)pcVar6 != (uint *******)0x4) goto code_r0x00010078b74c;
      uVar11 = 2;
      if (*(uint *)pppppppuVar14 == 0x74786574) {
        uVar11 = 0;
      }
      unaff_x19 = (uint *******)(ulong)uVar11;
      goto code_r0x00010078b794;
    }
    pppppppuVar16 = (uint *******)*pppppppuVar14;
code_r0x00010078b758:
    pppppppuVar17 = (uint *******)0x74786574;
code_r0x00010078b760:
    pppppppuVar16 =
         (uint *******)((ulong)pppppppuVar16 ^ ((ulong)pppppppuVar17 | 0x656c655f00000000));
code_r0x00010078b76c:
    pppppppuVar14 = *(uint ********)((long)pppppppuVar14 + 5);
    pppppppuVar17 = (uint *******)0x6c65;
code_r0x00010078b774:
    pppppppuVar17 = (uint *******)((ulong)pppppppuVar17 | 0x6e656d650000);
code_r0x00010078b77c:
    pppppppuVar14 =
         (uint *******)((ulong)pppppppuVar14 ^ ((ulong)pppppppuVar17 | 0x7374000000000000));
code_r0x00010078b784:
    pppppppuVar15 = (uint *******)((ulong)pppppppuVar16 | (ulong)pppppppuVar14);
  } while( true );
code_r0x00010078bd78:
  pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
  if ((int)pppppppuVar14 != 0x16) {
    ppppppuVar8 = *pppppppuVar26;
    unaff_x20[1] = pppppppuVar26[1];
    *unaff_x20 = ppppppuVar8;
    uVar7 = *(undefined8 *)((long)pppppppuVar26 + 0xf);
    *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppuVar26 + 0x17);
    *(undefined8 *)((long)unaff_x20 + 0xf) = uVar7;
    bStack_1a0 = (byte)pppppppuVar14;
    FUN_100e077ec(&bStack_1a0);
code_r0x00010078b928:
    do {
      unaff_x27 = unaff_x27 + 8;
      pppppppuVar14 = unaff_x26 + 8;
code_r0x00010078b930:
      unaff_x25 = (uint *******)((long)unaff_x25 + 1);
      in_ZR = pppppppuVar14 == unaff_x21;
code_r0x00010078b938:
      unaff_x26 = unaff_x27;
      pppppppuVar14 = pppppppuStack_228;
      pppppppuVar17 = unaff_x21;
      unaff_x27 = unaff_x26;
      if ((bool)in_ZR) {
code_r0x00010078c82c:
        in_ZR = unaff_x23 == (uint *******)0x8000000000000000;
        pppppppuStack_98 = pppppppuVar17;
        pppppppuStack_80 = pppppppuVar14;
        goto code_r0x00010078c83c;
      }
code_r0x00010078b940:
      unaff_x26 = unaff_x26 + -8;
      pppppppuVar16 = (uint *******)(ulong)*(byte *)unaff_x26;
code_r0x00010078b944:
      in_ZR = (int)pppppppuVar16 == 0x16;
code_r0x00010078b948:
      pppppppuVar14 = unaff_x25;
      pppppppuVar17 = unaff_x27;
      if ((bool)in_ZR) goto code_r0x00010078c82c;
      bStack_1a0 = (byte)pppppppuVar16;
      pppppppuVar28 = (uint *******)unaff_x26[3];
      pppppppuVar27 = (uint *******)unaff_x26[2];
code_r0x00010078b954:
      *(uint ********)((long)unaff_x20 + 0x17) = pppppppuVar28;
      *(uint ********)((long)unaff_x20 + 0xf) = pppppppuVar27;
code_r0x00010078b958:
      ppppppuVar8 = *(uint *******)((long)unaff_x26 + 1);
      unaff_x20[1] = *(uint *******)((long)unaff_x26 + 9);
      *unaff_x20 = ppppppuVar8;
      pppppppuVar28 = (uint *******)unaff_x26[5];
      pppppppuVar27 = (uint *******)unaff_x26[4];
code_r0x00010078b964:
      pppppppuStack_b8 = pppppppuVar28;
      pppppppuStack_c0 = pppppppuVar27;
      ppppppuStack_a8 = unaff_x26[7];
      pppppppuStack_b0 = (uint *******)unaff_x26[6];
code_r0x00010078b974:
      pppppppuVar14 = (uint *******)CONCAT17(uStack_191,CONCAT61(uStack_197,uStack_198));
      pcVar6 = (char *)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
      pppppppuVar17 = (uint *******)CONCAT17(uStack_181,uStack_188);
code_r0x00010078b97c:
      if ((int)pppppppuVar16 < 0xd) {
code_r0x00010078b984:
        in_ZR = (int)pppppppuVar16 == 1;
code_r0x00010078b988:
        param_3 = pcVar6;
        if ((bool)in_ZR) {
          pppppppuVar14 = (uint *******)(ulong)bStack_19f;
code_r0x00010078bb28:
          in_ZR = (int)pppppppuVar14 == 1;
code_r0x00010078bb2c:
          uVar11 = (uint)pppppppuVar16;
          if (!(bool)in_ZR) {
            uVar11 = uVar11 + 1;
          }
          pppppppuVar16 = (uint *******)(ulong)uVar11;
code_r0x00010078bb30:
          in_ZR = (int)pppppppuVar14 == 0;
code_r0x00010078bb34:
          uVar11 = 0;
          if (!(bool)in_ZR) {
            uVar11 = (uint)pppppppuVar16;
          }
          unaff_x19 = (uint *******)(ulong)uVar11;
code_r0x00010078bb38:
          goto code_r0x00010078bca0;
        }
code_r0x00010078b98c:
        if ((int)pppppppuVar16 == 4) {
          in_ZR = pppppppuVar14 == (uint *******)0x1;
code_r0x00010078ba88:
          pppppppuVar16 = (uint *******)0x1;
code_r0x00010078ba8c:
          uVar11 = (uint)pppppppuVar16;
          if (!(bool)in_ZR) {
            uVar11 = uVar11 + 1;
          }
          pppppppuVar16 = (uint *******)(ulong)uVar11;
code_r0x00010078ba90:
          in_ZR = pppppppuVar14 == (uint *******)0x0;
code_r0x00010078ba94:
          uVar11 = 0;
          if (!(bool)in_ZR) {
            uVar11 = (uint)pppppppuVar16;
          }
          unaff_x19 = (uint *******)(ulong)uVar11;
code_r0x00010078ba98:
          goto code_r0x00010078bca0;
        }
        in_ZR = (int)pppppppuVar16 == 0xc;
code_r0x00010078b998:
        if (!(bool)in_ZR) {
code_r0x00010078db1c:
          pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
          pppppppuStack_98 = unaff_x27;
          param_3 = (char *)thunk_FUN_108855b04(&bStack_1a0,&ppppppuStack_208,&UNK_10b20fcc0);
          goto LAB_10078bdec;
        }
        in_ZR = pppppppuVar17 == (uint *******)0x6;
code_r0x00010078b9a0:
        pppppppuVar15 = pppppppuVar14;
        if ((bool)in_ZR) {
          uVar11 = 1;
          if (*(uint *)param_3 != 0x61746564 || *(short *)((long)param_3 + 4) != 0x6c69) {
            uVar11 = 2;
          }
          unaff_x19 = (uint *******)(ulong)uVar11;
        }
        else {
          in_ZR = pppppppuVar17 == (uint *******)0x9;
code_r0x00010078b9a8:
          if (!(bool)in_ZR) goto code_r0x00010078bbd8;
code_r0x00010078b9ac:
          pppppppuVar16 = *(uint ********)param_3;
          pppppppuVar17 = (uint *******)0x5f6567616d69;
code_r0x00010078b9bc:
          pppppppuVar16 =
               (uint *******)((ulong)pppppppuVar16 ^ ((ulong)pppppppuVar17 | 0x7275000000000000));
code_r0x00010078b9c4:
          pppppppuVar17 = (uint *******)(ulong)*(byte *)((long)param_3 + 8);
          pppppppuVar18 = (uint *******)0x6c;
code_r0x00010078b9cc:
          pppppppuVar16 =
               (uint *******)((ulong)pppppppuVar16 | (ulong)pppppppuVar17 ^ (ulong)pppppppuVar18);
code_r0x00010078b9d4:
          in_ZR = pppppppuVar16 == (uint *******)0x0;
code_r0x00010078b9d8:
          pppppppuVar16 = (uint *******)0x2;
code_r0x00010078b9dc:
          uVar11 = (uint)pppppppuVar16;
          if ((bool)in_ZR) {
            uVar11 = 0;
          }
          unaff_x19 = (uint *******)(ulong)uVar11;
        }
joined_r0x00010078bc10:
        if (pppppppuVar15 != (uint *******)0x0) {
code_r0x00010078bc14:
          _free();
        }
      }
      else {
code_r0x00010078b9e8:
        in_ZR = (int)pppppppuVar16 == 0xd;
code_r0x00010078b9ec:
        if ((bool)in_ZR) {
          if ((uint *******)pcVar6 == (uint *******)0x6) {
            uVar11 = 1;
            if (*(uint *)pppppppuVar14 != 0x61746564 ||
                *(short *)((long)pppppppuVar14 + 4) != 0x6c69) {
              uVar11 = 2;
            }
            unaff_x19 = (uint *******)(ulong)uVar11;
          }
          else {
            if ((uint *******)pcVar6 != (uint *******)0x9) goto code_r0x00010078bc6c;
            pppppppuVar16 = (uint *******)*pppppppuVar14;
            pppppppuVar17 = (uint *******)0x6d69;
code_r0x00010078bb54:
            pppppppuVar17 = (uint *******)((ulong)pppppppuVar17 | 0x5f6567610000);
code_r0x00010078bb5c:
            pppppppuVar17 = (uint *******)((ulong)pppppppuVar17 | 0x7275000000000000);
code_r0x00010078bb60:
            uVar11 = 2;
            if (pppppppuVar16 == pppppppuVar17 && *(char *)(pppppppuVar14 + 1) == 'l') {
              uVar11 = 0;
            }
            unaff_x19 = (uint *******)(ulong)uVar11;
          }
        }
        else {
code_r0x00010078b9f0:
          if ((int)pppppppuVar16 == 0xe) {
code_r0x00010078ba9c:
            in_ZR = pppppppuVar17 == (uint *******)0x6;
            pppppppuVar15 = pppppppuVar14;
code_r0x00010078baa0:
            param_3 = pcVar6;
            if ((bool)in_ZR) {
              if ((((*pcVar6 == 'd') && (*(char *)((long)pcVar6 + 1) == 'e')) &&
                  (*(char *)((long)pcVar6 + 2) == 't')) &&
                 (((*(char *)((long)pcVar6 + 3) == 'a' && (*(char *)((long)pcVar6 + 4) == 'i')) &&
                  (*(char *)((long)pcVar6 + 5) == 'l')))) {
                unaff_x19 = (uint *******)0x1;
                goto joined_r0x00010078bc10;
              }
code_r0x00010078bbd8:
              unaff_x19 = (uint *******)0x2;
code_r0x00010078bbdc:
              goto joined_r0x00010078bc10;
            }
code_r0x00010078baa4:
            if (pppppppuVar17 != (uint *******)0x9) goto code_r0x00010078bbd8;
code_r0x00010078baac:
            in_ZR = *param_3 == 'i';
code_r0x00010078bab4:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)param_3 + 1);
code_r0x00010078babc:
            in_ZR = (int)pppppppuVar16 == 0x6d;
code_r0x00010078bac0:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
code_r0x00010078bac4:
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)param_3 + 2);
code_r0x00010078bac8:
            if ((int)pppppppuVar16 != 0x61) goto code_r0x00010078bbd8;
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)param_3 + 3);
code_r0x00010078bad4:
            in_ZR = (int)pppppppuVar16 == 0x67;
code_r0x00010078bad8:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
code_r0x00010078badc:
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)param_3 + 4);
code_r0x00010078bae0:
            in_ZR = (int)pppppppuVar16 == 0x65;
code_r0x00010078bae4:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
code_r0x00010078bae8:
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)param_3 + 5);
code_r0x00010078baec:
            in_ZR = (int)pppppppuVar16 == 0x5f;
            pcVar6 = param_3;
code_r0x00010078baf0:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pcVar6 + 6);
code_r0x00010078baf8:
            if ((int)pppppppuVar16 != 0x75) goto code_r0x00010078bbd8;
code_r0x00010078bb00:
            in_ZR = *(char *)((long)pcVar6 + 7) == 'r';
code_r0x00010078bb08:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pcVar6 + 8);
code_r0x00010078bb10:
            in_ZR = (int)pppppppuVar16 == 0x6c;
code_r0x00010078bb14:
            if (!(bool)in_ZR) goto code_r0x00010078bbd8;
code_r0x00010078bb18:
            unaff_x19 = (uint *******)0x0;
            if (pppppppuVar15 != (uint *******)0x0) goto code_r0x00010078bc14;
code_r0x00010078bb20:
            goto code_r0x00010078bca8;
          }
          if ((int)pppppppuVar16 != 0xf) goto code_r0x00010078db1c;
code_r0x00010078ba00:
          if ((uint *******)pcVar6 == (uint *******)0x6) {
            pppppppuVar16 = (uint *******)(ulong)*(byte *)pppppppuVar14;
code_r0x00010078bc20:
            if ((((int)pppppppuVar16 == 100) && (*(char *)((long)pppppppuVar14 + 1) == 'e')) &&
               ((*(char *)((long)pppppppuVar14 + 2) == 't' &&
                (((*(char *)((long)pppppppuVar14 + 3) == 'a' &&
                  (*(char *)((long)pppppppuVar14 + 4) == 'i')) &&
                 (*(char *)((long)pppppppuVar14 + 5) == 'l')))))) {
              unaff_x19 = (uint *******)0x1;
              goto code_r0x00010078bca0;
            }
          }
          else if ((uint *******)pcVar6 == (uint *******)0x9) {
code_r0x00010078ba10:
            pppppppuVar16 = (uint *******)(ulong)*(byte *)pppppppuVar14;
code_r0x00010078ba14:
            in_ZR = (int)pppppppuVar16 == 0x69;
code_r0x00010078ba18:
            if ((bool)in_ZR) {
code_r0x00010078ba1c:
              pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 1);
code_r0x00010078ba20:
              in_ZR = (int)pppppppuVar16 == 0x6d;
code_r0x00010078ba24:
              if ((bool)in_ZR) {
                pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 2);
code_r0x00010078ba2c:
                in_ZR = (int)pppppppuVar16 == 0x61;
code_r0x00010078ba30:
                if (((bool)in_ZR) && (*(char *)((long)pppppppuVar14 + 3) == 'g')) {
                  in_ZR = *(char *)((long)pppppppuVar14 + 4) == 'e';
code_r0x00010078ba48:
                  if ((bool)in_ZR) {
                    pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 5);
code_r0x00010078ba50:
                    if ((int)pppppppuVar16 == 0x5f) {
code_r0x00010078ba58:
                      in_ZR = *(char *)((long)pppppppuVar14 + 6) == 'u';
code_r0x00010078ba60:
                      if ((bool)in_ZR) {
code_r0x00010078ba64:
                        pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 7);
code_r0x00010078ba68:
                        if ((int)pppppppuVar16 == 0x72) {
code_r0x00010078ba70:
                          pppppppuVar14 = (uint *******)(ulong)*(byte *)(pppppppuVar14 + 1);
code_r0x00010078ba74:
                          in_ZR = (int)pppppppuVar14 == 0x6c;
code_r0x00010078ba78:
                          if ((bool)in_ZR) {
code_r0x00010078ba7c:
                            unaff_x19 = (uint *******)0x0;
code_r0x00010078ba80:
                            goto code_r0x00010078bca0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
code_r0x00010078bc6c:
          unaff_x19 = (uint *******)0x2;
        }
code_r0x00010078bca0:
        FUN_100e077ec(&bStack_1a0);
      }
code_r0x00010078bca8:
      bVar1 = (byte)pppppppuStack_c0;
      if (((ulong)unaff_x19 & 0xff) == 0) {
        if (unaff_x23 != (uint *******)0x8000000000000000) {
          pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
          ppppppuStack_208._0_1_ = 0x66;
          ppppppuStack_208._1_7_ = 0x108ca13;
          bStack_200 = 9;
          uStack_1ff = 0;
          bStack_1a0 = (byte)&ppppppuStack_208;
          bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
          uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
          bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
          uStack_198 = 0xa0;
          uStack_197 = 0x100c7b3;
          uStack_191 = 0;
          pppppppuStack_98 = unaff_x27;
          ppppppuVar8 = (uint ******)
                        thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
          unaff_x19 = (uint *******)&pppppppuStack_c0;
          pppppppuStack_210[1] = ppppppuVar8;
          *(char *)pppppppuStack_210 = '\x05';
          if (unaff_x23 != (uint *******)0x0) goto code_r0x00010078be08;
          goto LAB_10078c88c;
        }
        pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
        if (bVar1 == 0x16) {
          pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
          pppppppuStack_98 = unaff_x27;
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010078da5c;
        }
        ppppppuVar8 = *pppppppuVar26;
        unaff_x20[1] = pppppppuVar26[1];
        *unaff_x20 = ppppppuVar8;
        uVar7 = *(undefined8 *)((long)pppppppuVar26 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppuVar26 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar7;
        bStack_1a0 = bVar1;
        FUN_1004b62d4(&ppppppuStack_208,&bStack_1a0);
        unaff_x23 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
        unaff_x24 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
        if (unaff_x23 == (uint *******)0x8000000000000000) goto code_r0x00010078cb10;
        pppppppuStack_220 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
        goto code_r0x00010078b928;
      }
      if (((uint)unaff_x19 & 0xff) != 1) goto code_r0x00010078bd74;
      if ((int)unaff_x22 != 3) {
        pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
        ppppppuStack_208._0_1_ = 0x8c;
        ppppppuStack_208._1_7_ = 0x108cad8;
        bStack_200 = 6;
        uStack_1ff = 0;
        bStack_1a0 = (byte)&ppppppuStack_208;
        bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
        uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
        bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
        uStack_198 = 0xa0;
        uStack_197 = 0x100c7b3;
        uStack_191 = 0;
        pppppppuStack_98 = unaff_x27;
        param_3 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
        goto LAB_10078bdec;
      }
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
      if (bVar1 == 0x16) break;
      ppppppuVar8 = *pppppppuVar26;
      pppppppuStack_218[1] = pppppppuVar26[1];
      *pppppppuStack_218 = ppppppuVar8;
      uVar7 = *(undefined8 *)((long)pppppppuVar26 + 0xf);
      *(undefined8 *)((long)pppppppuStack_218 + 0x17) = *(undefined8 *)((long)pppppppuVar26 + 0x17);
      *(undefined8 *)((long)pppppppuStack_218 + 0xf) = uVar7;
      ppppppuStack_208._0_1_ = bVar1;
      if (bVar1 != 0x10) {
        if (bVar1 != 0x11) {
          if (bVar1 == 0x12) goto code_r0x00010078b908;
          FUN_101429444(&uStack_140,&ppppppuStack_208);
          goto code_r0x00010078b918;
        }
        unaff_x22 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
        ppppppuVar29 = unaff_x22[1];
        ppppppuVar8 = *unaff_x22;
        uStack_198 = SUB81(ppppppuVar29,0);
        uStack_197 = (undefined6)((ulong)ppppppuVar29 >> 8);
        uStack_191 = (undefined1)((ulong)ppppppuVar29 >> 0x38);
        bStack_1a0 = (byte)ppppppuVar8;
        bStack_19f = (byte)((ulong)ppppppuVar8 >> 8);
        uStack_19e = (undefined5)((ulong)ppppppuVar8 >> 0x10);
        bStack_199 = (byte)((ulong)ppppppuVar8 >> 0x38);
code_r0x00010078bdb4:
        ppppppuVar8 = unaff_x22[2];
        uStack_188 = SUB87(unaff_x22[3],0);
        uStack_181 = (undefined1)((ulong)unaff_x22[3] >> 0x38);
        uStack_190 = SUB81(ppppppuVar8,0);
        uStack_18f = (undefined6)((ulong)ppppppuVar8 >> 8);
        uStack_189 = (undefined1)((ulong)ppppppuVar8 >> 0x38);
code_r0x00010078bdbc:
        FUN_101429444(&uStack_140,&bStack_1a0);
        _free(unaff_x22);
        pppppppuVar14 = (uint *******)((ulong)uStack_140 & 0xff);
code_r0x00010078bdd4:
        if ((int)pppppppuVar14 != 1) goto code_r0x00010078b924;
code_r0x00010078bddc:
        pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
        pppppppuStack_98 = unaff_x27;
        goto code_r0x00010078bde8;
      }
code_r0x00010078b908:
      uStack_140 = (uint *******)CONCAT62(uStack_140._2_6_,0x200);
      pcVar6 = (char *)&ppppppuStack_208;
      ppppppuStack_208._0_1_ = bVar1;
code_r0x00010078b914:
      FUN_100e077ec(pcVar6);
code_r0x00010078b918:
      in_ZR = (char)uStack_140 == '\x01';
code_r0x00010078b920:
      if ((bool)in_ZR) goto code_r0x00010078bddc;
code_r0x00010078b924:
      unaff_x22 = (uint *******)((ulong)uStack_140 >> 8 & 0xff);
    } while( true );
  }
  pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
  pppppppuStack_98 = unaff_x27;
  FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  goto code_r0x00010078da5c;
code_r0x00010078bde8:
  param_3 = (char *)pppppppuStack_138;
LAB_10078bdec:
  pppppppuVar16 = pppppppuStack_210;
code_r0x00010078bdf0:
  pppppppuVar16[1] = (uint ******)param_3;
  *(char *)pppppppuVar16 = '\x05';
code_r0x00010078bdfc:
  in_ZR = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
  unaff_x19 = (uint *******)&pppppppuStack_c0;
code_r0x00010078be04:
  if (!(bool)in_ZR) {
code_r0x00010078be08:
    _free(unaff_x24);
  }
  goto LAB_10078c88c;
code_r0x00010078bd74:
  pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
  goto code_r0x00010078bd78;
code_r0x00010078b274:
  pppppppuStack_228 = pppppppuVar14;
  pppppppuStack_220 = pppppppuVar16;
code_r0x00010078afdc:
  pppppppuVar26 = pppppppuVar26 + 8;
code_r0x00010078afe0:
  pppppppuVar14 = unaff_x27 + 8;
  unaff_x26 = (uint *******)((long)unaff_x26 + 1);
code_r0x00010078afe8:
  pppppppuVar17 = pppppppuStack_238;
  pppppppuVar18 = unaff_x21;
  if (pppppppuVar14 == unaff_x21) {
code_r0x00010078c65c:
    unaff_x20 = pppppppuStack_218;
    unaff_x21 = pppppppuStack_220;
    param_3 = (char *)pppppppuStack_210;
    pppppppuStack_98 = pppppppuVar18;
    pppppppuStack_80 = pppppppuVar17;
    if (unaff_x23 == (uint *******)0x8000000000000000) goto code_r0x00010078c67c;
    pppppppuVar16 = pppppppuStack_228;
    pppppppuVar17 = pppppppuStack_230;
    unaff_x19 = pppppppuStack_210;
    if (unaff_x25 != (uint *******)0x8000000000000000) goto code_r0x00010078c928;
    ppppppuStack_208._0_1_ = 0x38;
    ppppppuStack_208._1_7_ = 0x108c610;
    bStack_200 = 4;
    uStack_1ff = 0;
    bStack_1a0 = (byte)&ppppppuStack_208;
    bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
    uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
    bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_1a0);
    pppppppuStack_210[1] = ppppppuVar8;
    *(char *)pppppppuStack_210 = '\x05';
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    goto joined_r0x00010078cab4;
  }
code_r0x00010078aff0:
  unaff_x27 = pppppppuVar26 + -8;
  bVar1 = *(byte *)unaff_x27;
  pppppppuVar16 = (uint *******)(ulong)bVar1;
  pppppppuVar17 = unaff_x26;
  pppppppuVar18 = pppppppuVar26;
  if (bVar1 == 0x16) goto code_r0x00010078c65c;
  ppppppuVar8 = pppppppuVar26[-6];
  *(uint *******)((long)unaff_x22 + 0x17) = pppppppuVar26[-5];
  *(uint *******)((long)unaff_x22 + 0xf) = ppppppuVar8;
  ppppppuVar8 = *(uint *******)((long)pppppppuVar26 + -0x3f);
  unaff_x22[1] = *(uint *******)((long)pppppppuVar26 + -0x37);
  *unaff_x22 = ppppppuVar8;
  pppppppuStack_b8 = (uint *******)pppppppuVar26[-3];
  pppppppuStack_c0 = (uint *******)pppppppuVar26[-4];
  pppppppuVar14 = (uint *******)&bStack_1a0;
  pppppppuVar28 = (uint *******)pppppppuVar26[-1];
  pppppppuVar27 = (uint *******)pppppppuVar26[-2];
  bStack_1a0 = bVar1;
code_r0x00010078b024:
  pppppppuVar14[0x1f] = (uint ******)pppppppuVar28;
  pppppppuVar14[0x1e] = (uint ******)pppppppuVar27;
  pppppppuVar14 = (uint *******)CONCAT17(uStack_191,CONCAT61(uStack_197,uStack_198));
  param_3 = (char *)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
  iVar13 = (int)pppppppuVar16;
  if (iVar13 < 0xd) {
    if (iVar13 == 1) {
      uVar12 = 1;
      if (bStack_19f != 1) {
        uVar12 = 2;
      }
      uVar11 = 0;
      if (bStack_19f != 0) {
        uVar11 = uVar12;
      }
      goto code_r0x00010078b208;
    }
    if (iVar13 == 4) {
      uVar11 = 1;
      if (pppppppuVar14 != (uint *******)0x1) {
        uVar11 = 2;
      }
      pppppppuVar16 = (uint *******)(ulong)uVar11;
      in_ZR = pppppppuVar14 == (uint *******)0x0;
code_r0x00010078b0f4:
      uVar11 = 0;
      if (!(bool)in_ZR) {
        uVar11 = (uint)pppppppuVar16;
      }
      goto code_r0x00010078b208;
    }
    if (iVar13 != 0xc) {
code_r0x00010078dab4:
      pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
      pppppppuStack_98 = pppppppuVar26;
      ppppppuVar8 = (uint ******)thunk_FUN_108855b04(&bStack_1a0,&ppppppuStack_208,&UNK_10b210160);
      unaff_x19 = (uint *******)&pppppppuStack_c0;
      goto code_r0x00010078c6b4;
    }
    if (CONCAT17(uStack_181,uStack_188) != 4) goto code_r0x00010078b1c8;
    in_ZR = *(uint *)param_3 == 0x656d616e;
code_r0x00010078b068:
    if ((bool)in_ZR) {
code_r0x00010078b13c:
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
      if (*(uint *)param_3 != 0x68746170) {
        uVar11 = 2;
      }
    }
code_r0x00010078b1cc:
    if (pppppppuVar14 != (uint *******)0x0) {
      _free();
    }
  }
  else {
    if (iVar13 == 0xd) {
      if ((uint *******)param_3 == (uint *******)0x4) {
        if (*(uint *)pppppppuVar14 == 0x656d616e) {
code_r0x00010078b194:
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
          if (*(uint *)pppppppuVar14 != 0x68746170) {
            uVar11 = 2;
          }
        }
        goto code_r0x00010078b208;
      }
    }
    else {
      if (iVar13 == 0xe) {
        if (CONCAT17(uStack_181,uStack_188) == 4) {
          if (*param_3 == 'p') {
            if (((*(char *)((long)param_3 + 1) == 'a') && (*(char *)((long)param_3 + 2) == 't')) &&
               (*(char *)((long)param_3 + 3) == 'h')) {
              uVar11 = 1;
              goto code_r0x00010078b1cc;
            }
          }
          else if (((*param_3 == 'n') && (*(char *)((long)param_3 + 1) == 'a')) &&
                  (*(char *)((long)param_3 + 2) == 'm')) {
            in_ZR = *(char *)((long)param_3 + 3) == 'e';
code_r0x00010078b138:
            if ((bool)in_ZR) goto code_r0x00010078b13c;
          }
        }
code_r0x00010078b1c8:
        uVar11 = 2;
        goto code_r0x00010078b1cc;
      }
      if (iVar13 != 0xf) goto code_r0x00010078dab4;
      if ((uint *******)param_3 == (uint *******)0x4) {
        pppppppuVar16 = (uint *******)(ulong)*(byte *)pppppppuVar14;
        in_ZR = *(byte *)pppppppuVar14 == 0x70;
code_r0x00010078b0b0:
        if ((bool)in_ZR) {
          if (((*(char *)((long)pppppppuVar14 + 1) == 'a') &&
              (*(char *)((long)pppppppuVar14 + 2) == 't')) &&
             (*(char *)((long)pppppppuVar14 + 3) == 'h')) {
            uVar11 = 1;
            goto code_r0x00010078b208;
          }
        }
        else {
code_r0x00010078b0b4:
          if ((((int)pppppppuVar16 == 0x6e) && (*(char *)((long)pppppppuVar14 + 1) == 'a')) &&
             ((*(char *)((long)pppppppuVar14 + 2) == 'm' &&
              (*(char *)((long)pppppppuVar14 + 3) == 'e')))) goto code_r0x00010078b194;
        }
      }
    }
    uVar11 = 2;
code_r0x00010078b208:
    FUN_100e077ec(&bStack_1a0);
  }
  uVar10 = SUB81(unaff_x24,0);
  bVar1 = (byte)pppppppuStack_c0;
  if ((uVar11 & 0xff) == 0) {
    if (unaff_x23 != (uint *******)0x8000000000000000) {
      pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
      ppppppuStack_208._0_1_ = 0x18;
      ppppppuStack_208._1_7_ = 0x108c610;
      bStack_200 = 4;
      uStack_1ff = 0;
      bStack_1a0 = (byte)&ppppppuStack_208;
      bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
      uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
      bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
      uStack_198 = 0xa0;
      uStack_197 = 0x100c7b3;
      uStack_191 = 0;
      pppppppuStack_98 = pppppppuVar26;
      ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
      unaff_x19 = (uint *******)&pppppppuStack_c0;
      goto code_r0x00010078c6b4;
    }
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
    if (bVar1 == 0x16) {
      pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
      pppppppuStack_98 = pppppppuVar26;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    ppppppuVar8 = *unaff_x20;
    unaff_x22[1] = unaff_x20[1];
    *unaff_x22 = ppppppuVar8;
    uVar7 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
    bStack_1a0 = bVar1;
    FUN_1004b62d4(&ppppppuStack_208,&bStack_1a0);
    unaff_x23 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
    if (unaff_x23 == (uint *******)0x8000000000000000) {
      pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
      unaff_x23 = (uint *******)0x0;
      unaff_x19 = (uint *******)&pppppppuStack_c0;
      pppppppuStack_210[1] = (uint ******)CONCAT71(uStack_1ff,bStack_200);
      unaff_x20 = pppppppuStack_218;
      unaff_x21 = pppppppuStack_220;
      param_3 = (char *)pppppppuStack_210;
      pppppppuStack_98 = pppppppuVar26;
      goto code_r0x00010078caa0;
    }
    pppppppuStack_218 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
    pppppppuStack_230 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
    goto code_r0x00010078afdc;
  }
  if ((uVar11 & 0xff) != 1) {
    pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
    if (bVar1 == 0x16) {
      pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
      pppppppuStack_98 = pppppppuVar26;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    ppppppuVar8 = *unaff_x20;
    unaff_x22[1] = unaff_x20[1];
    *unaff_x22 = ppppppuVar8;
    uVar7 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
    bStack_1a0 = bVar1;
    FUN_100e077ec(&bStack_1a0);
    goto code_r0x00010078afdc;
  }
  if (unaff_x25 != (uint *******)0x8000000000000000) {
    pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
    ppppppuStack_208._0_1_ = 0x38;
    ppppppuStack_208._1_7_ = 0x108c610;
    bStack_200 = 4;
    uStack_1ff = 0;
    bStack_1a0 = (byte)&ppppppuStack_208;
    bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
    uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
    bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    pppppppuStack_98 = pppppppuVar26;
    ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    pppppppuStack_210[1] = ppppppuVar8;
    *(char *)pppppppuStack_210 = '\x05';
    unaff_x20 = pppppppuStack_218;
    goto joined_r0x00010078d58c;
  }
  pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
  if (bVar1 == 0x16) {
    pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
    pppppppuStack_98 = pppppppuVar26;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x00010078da5c;
  }
  ppppppuVar8 = *unaff_x20;
  unaff_x22[1] = unaff_x20[1];
  *unaff_x22 = ppppppuVar8;
  uVar7 = *(undefined8 *)((long)unaff_x20 + 0xf);
  *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
  *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
  bStack_1a0 = bVar1;
  FUN_1004b62d4(&ppppppuStack_208,&bStack_1a0);
  unaff_x25 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
  if (unaff_x25 == (uint *******)0x8000000000000000) goto code_r0x00010078c9bc;
  pppppppuVar16 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
  pppppppuVar14 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
  goto code_r0x00010078b274;
code_r0x00010078c67c:
  unaff_x19 = (uint *******)&pppppppuStack_c0;
  pppppppuStack_218 = unaff_x20;
  pppppppuStack_220 = unaff_x21;
  pppppppuStack_210 = (uint *******)param_3;
code_r0x00010078c680:
  ppppppuStack_208._0_1_ = 0x18;
  ppppppuStack_208._1_7_ = 0x108c610;
  bStack_200 = 4;
  uStack_1ff = 0;
  bStack_1a0 = (byte)&ppppppuStack_208;
  bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
  uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
  bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
  uStack_198 = 0xa0;
  uStack_197 = 0x100c7b3;
  uStack_191 = 0;
  unaff_x23 = (uint *******)0x0;
  ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_1a0);
code_r0x00010078c6b4:
  pppppppuStack_210[1] = ppppppuVar8;
  *(char *)pppppppuStack_210 = '\x05';
  goto joined_r0x00010078c6c4;
code_r0x00010078ab24:
  in_ZR = unaff_x23 == pppppppuVar14;
code_r0x00010078ab28:
  if ((bool)in_ZR) {
    pppppppuVar14 = (uint *******)((long)unaff_x25 + 1);
    goto code_r0x00010078ca14;
  }
code_r0x00010078a790:
  pppppppuVar14 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
code_r0x00010078a794:
  pppppppuStack_220 = pppppppuVar14;
code_r0x00010078a798:
  unaff_x27 = unaff_x27 + 8;
code_r0x00010078a79c:
  unaff_x25 = (uint *******)((long)unaff_x25 + 1);
  in_ZR = unaff_x26 + 8 == unaff_x21;
code_r0x00010078a7a8:
  pppppppuVar24 = unaff_x21;
  if ((bool)in_ZR) goto code_r0x00010078c4cc;
code_r0x00010078a7ac:
  unaff_x26 = unaff_x27 + -8;
  pppppppuVar16 = (uint *******)(ulong)*(byte *)unaff_x26;
code_r0x00010078a7b4:
  pppppppuVar24 = unaff_x27;
  if ((int)pppppppuVar16 == 0x16) goto code_r0x00010078c4d4;
  bStack_1a0 = (byte)pppppppuVar16;
code_r0x00010078a7c0:
  ppppppuVar8 = unaff_x26[2];
  *(uint *******)((long)unaff_x20 + 0x17) = unaff_x26[3];
  *(uint *******)((long)unaff_x20 + 0xf) = ppppppuVar8;
  ppppppuVar8 = *(uint *******)((long)unaff_x26 + 1);
  unaff_x20[1] = *(uint *******)((long)unaff_x26 + 9);
  *unaff_x20 = ppppppuVar8;
code_r0x00010078a7d0:
  pppppppuVar14 = (uint *******)&bStack_1a0;
  pppppppuStack_b8 = (uint *******)unaff_x26[5];
  pppppppuStack_c0 = (uint *******)unaff_x26[4];
code_r0x00010078a7dc:
  ppppppuVar8 = unaff_x26[6];
  pppppppuVar14[0x1f] = unaff_x26[7];
  pppppppuVar14[0x1e] = ppppppuVar8;
  pppppppuVar14 = (uint *******)CONCAT17(uStack_191,CONCAT61(uStack_197,uStack_198));
  pppppppuVar5 = (uint *******)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
  pppppppuVar17 = (uint *******)CONCAT17(uStack_181,uStack_188);
  iVar13 = (int)pppppppuVar16;
  in_OV = SBORROW4(iVar13,0xc);
  in_NG = iVar13 + -0xc < 0;
  in_ZR = iVar13 == 0xc;
code_r0x00010078a7f0:
  iVar13 = (int)pppppppuVar16;
  if ((bool)in_ZR || in_NG != in_OV) {
    if (iVar13 == 1) {
code_r0x00010078a900:
      uVar11 = (uint)pppppppuVar16;
      if (bStack_19f != 1) {
        uVar11 = uVar11 + 1;
      }
      uVar12 = 0;
      if (bStack_19f != 0) {
        uVar12 = uVar11;
      }
      unaff_x19 = (uint *******)(ulong)uVar12;
code_r0x00010078a914:
      goto code_r0x00010078aa60;
    }
    if (iVar13 == 4) {
      uVar11 = 1;
      if (pppppppuVar14 != (uint *******)0x1) {
        uVar11 = 2;
      }
      pppppppuVar16 = (uint *******)(ulong)uVar11;
      in_ZR = pppppppuVar14 == (uint *******)0x0;
code_r0x00010078a8ac:
      uVar11 = 0;
      if (!(bool)in_ZR) {
        uVar11 = (uint)pppppppuVar16;
      }
      unaff_x19 = (uint *******)(ulong)uVar11;
      goto code_r0x00010078aa60;
    }
code_r0x00010078a804:
    if ((int)pppppppuVar16 != 0xc) {
code_r0x00010078da60:
      pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
      pppppppuStack_98 = unaff_x27;
      param_3 = (char *)thunk_FUN_108855b04(&bStack_1a0,&ppppppuStack_208,&UNK_10b211180);
      goto code_r0x00010078cb3c;
    }
    if (pppppppuVar17 == (uint *******)0x6) {
      pppppppuVar16 = (uint *******)(ulong)*(uint *)pppppppuVar5;
code_r0x00010078a9a8:
      pppppppuVar16 = (uint *******)(ulong)((uint)pppppppuVar16 ^ 0x61746564);
      pppppppuVar17 = (uint *******)(ulong)*(ushort *)((long)pppppppuVar5 + 4);
code_r0x00010078a9b8:
      pppppppuVar18 = (uint *******)0x6c69;
code_r0x00010078a9bc:
      pppppppuVar17 = (uint *******)(ulong)((uint)pppppppuVar17 ^ (uint)pppppppuVar18);
code_r0x00010078a9c0:
      pppppppuVar16 = (uint *******)(ulong)((uint)pppppppuVar16 | (uint)pppppppuVar17);
code_r0x00010078a9c4:
      in_ZR = (int)pppppppuVar16 == 0;
code_r0x00010078a9c8:
      pppppppuVar16 = (uint *******)0x1;
code_r0x00010078a9cc:
      uVar11 = (uint)pppppppuVar16;
      if (!(bool)in_ZR) {
        uVar11 = uVar11 + 1;
      }
      unaff_x19 = (uint *******)(ulong)uVar11;
code_r0x00010078a9d0:
joined_r0x00010078a990:
      if (pppppppuVar14 != (uint *******)0x0) {
code_r0x00010078a9d4:
        _free();
      }
    }
    else {
      pppppppuVar15 = pppppppuVar14;
      if (pppppppuVar17 != (uint *******)0x4) goto code_r0x00010078a998;
      pppppppuVar16 = (uint *******)(ulong)*(uint *)pppppppuVar5;
code_r0x00010078a820:
      pppppppuVar17 = (uint *******)0x6170;
code_r0x00010078a824:
      uVar11 = 2;
      if ((uint)pppppppuVar16 == ((uint)pppppppuVar17 | 0x68740000)) {
        uVar11 = 0;
      }
      unaff_x19 = (uint *******)(ulong)uVar11;
code_r0x00010078a834:
      if (pppppppuVar14 != (uint *******)0x0) goto code_r0x00010078a9d4;
code_r0x00010078a838:
    }
  }
  else {
    if (iVar13 == 0xd) {
      if (pppppppuVar5 == (uint *******)0x6) {
        pppppppuVar16 = (uint *******)(ulong)*(uint *)pppppppuVar14;
        pppppppuVar17 = (uint *******)0x6564;
code_r0x00010078aa3c:
        pppppppuVar16 =
             (uint *******)(ulong)((uint)pppppppuVar16 ^ ((uint)pppppppuVar17 | 0x61740000));
        pppppppuVar14 = (uint *******)(ulong)*(ushort *)((long)pppppppuVar14 + 4);
code_r0x00010078aa48:
        pppppppuVar17 = (uint *******)0x6c69;
code_r0x00010078aa4c:
        pppppppuVar15 = (uint *******)(ulong)((uint)pppppppuVar14 ^ (uint)pppppppuVar17);
code_r0x00010078aa50:
        in_ZR = (int)pppppppuVar16 == 0 && (int)pppppppuVar15 == 0;
code_r0x00010078aa58:
        uVar11 = 1;
        if (!(bool)in_ZR) {
          uVar11 = 2;
        }
        unaff_x19 = (uint *******)(ulong)uVar11;
      }
      else {
        if (pppppppuVar5 != (uint *******)0x4) goto code_r0x00010078aa2c;
        pppppppuVar14 = (uint *******)(ulong)*(uint *)pppppppuVar14;
code_r0x00010078a92c:
        pppppppuVar16 = (uint *******)0x68746170;
code_r0x00010078a934:
        uVar11 = 2;
        if ((int)pppppppuVar14 == (int)pppppppuVar16) {
          uVar11 = 0;
        }
        unaff_x19 = (uint *******)(ulong)uVar11;
code_r0x00010078a940:
      }
    }
    else {
      in_ZR = iVar13 == 0xe;
code_r0x00010078a848:
      if ((bool)in_ZR) {
code_r0x00010078a8b4:
        if (pppppppuVar17 == (uint *******)0x6) {
          pppppppuVar16 = (uint *******)(ulong)*(byte *)pppppppuVar5;
          pppppppuVar15 = pppppppuVar14;
code_r0x00010078a948:
          if ((int)pppppppuVar16 == 100) {
code_r0x00010078a950:
            in_ZR = *(char *)((long)pppppppuVar5 + 1) == 'e';
code_r0x00010078a958:
            if ((bool)in_ZR) {
code_r0x00010078a95c:
              pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar5 + 2);
code_r0x00010078a960:
              if (((int)pppppppuVar16 == 0x74) && (*(char *)((long)pppppppuVar5 + 3) == 'a')) {
code_r0x00010078a974:
                in_ZR = *(char *)((long)pppppppuVar5 + 4) == 'i';
code_r0x00010078a97c:
                if ((bool)in_ZR) {
                  pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar5 + 5);
code_r0x00010078a984:
                  in_ZR = (int)pppppppuVar16 == 0x6c;
code_r0x00010078a988:
                  if ((bool)in_ZR) {
code_r0x00010078a98c:
                    unaff_x19 = (uint *******)0x1;
                    pppppppuVar14 = pppppppuVar15;
                    goto joined_r0x00010078a990;
                  }
                }
              }
            }
          }
        }
        else {
          in_ZR = pppppppuVar17 == (uint *******)0x4;
code_r0x00010078a8c0:
          pppppppuVar15 = pppppppuVar14;
          if (((bool)in_ZR) && (*(char *)pppppppuVar5 == 'p')) {
            pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar5 + 1);
code_r0x00010078a8d4:
            pppppppuVar15 = pppppppuVar14;
            if ((((int)pppppppuVar16 == 0x61) && (*(char *)((long)pppppppuVar5 + 2) == 't')) &&
               (*(char *)((long)pppppppuVar5 + 3) == 'h')) {
              unaff_x19 = (uint *******)0x0;
code_r0x00010078a8f8:
              if (pppppppuVar14 != (uint *******)0x0) goto code_r0x00010078a9d4;
code_r0x00010078a8fc:
              goto code_r0x00010078aa68;
            }
          }
        }
code_r0x00010078a998:
        unaff_x19 = (uint *******)0x2;
        if (pppppppuVar15 != (uint *******)0x0) goto code_r0x00010078a9d4;
code_r0x00010078a9a0:
        goto code_r0x00010078aa68;
      }
code_r0x00010078a84c:
      if ((int)pppppppuVar16 != 0xf) goto code_r0x00010078da60;
      if (pppppppuVar5 == (uint *******)0x6) {
code_r0x00010078a9dc:
        pppppppuVar16 = (uint *******)(ulong)*(byte *)pppppppuVar14;
        pppppppuVar15 = pppppppuVar14;
code_r0x00010078a9e0:
        in_ZR = (int)pppppppuVar16 == 100;
code_r0x00010078a9e4:
        if ((bool)in_ZR) {
code_r0x00010078a9e8:
          pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar15 + 1);
          pppppppuVar14 = pppppppuVar15;
code_r0x00010078a9ec:
          if ((int)pppppppuVar16 == 0x65) {
            in_ZR = *(char *)((long)pppppppuVar14 + 2) == 't';
code_r0x00010078a9fc:
            if ((bool)in_ZR) {
              pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 3);
code_r0x00010078aa04:
              in_ZR = (int)pppppppuVar16 == 0x61;
code_r0x00010078aa08:
              if ((bool)in_ZR) {
code_r0x00010078aa0c:
                pppppppuVar16 = (uint *******)(ulong)*(byte *)((long)pppppppuVar14 + 4);
code_r0x00010078aa10:
                in_ZR = (int)pppppppuVar16 == 0x69;
code_r0x00010078aa14:
                if ((bool)in_ZR) {
                  in_ZR = *(char *)((long)pppppppuVar14 + 5) == 'l';
code_r0x00010078aa20:
                  if ((bool)in_ZR) {
code_r0x00010078aa24:
                    unaff_x19 = (uint *******)0x1;
code_r0x00010078aa28:
                    goto code_r0x00010078aa60;
                  }
                }
              }
            }
          }
        }
      }
      else if (pppppppuVar5 == (uint *******)0x4) {
        pppppppuVar16 = (uint *******)(ulong)*(byte *)pppppppuVar14;
code_r0x00010078a868:
        if ((int)pppppppuVar16 == 0x70) {
          in_ZR = *(char *)((long)pppppppuVar14 + 1) == 'a';
code_r0x00010078a878:
          if ((bool)in_ZR) {
code_r0x00010078a87c:
            in_ZR = *(char *)((long)pppppppuVar14 + 2) == 't';
code_r0x00010078a884:
            if ((bool)in_ZR) {
              in_ZR = *(char *)((long)pppppppuVar14 + 3) == 'h';
code_r0x00010078a890:
              if ((bool)in_ZR) {
                unaff_x19 = (uint *******)0x0;
                goto code_r0x00010078aa60;
              }
            }
          }
        }
      }
code_r0x00010078aa2c:
      unaff_x19 = (uint *******)0x2;
code_r0x00010078aa30:
    }
code_r0x00010078aa60:
    FUN_100e077ec(&bStack_1a0);
  }
code_r0x00010078aa68:
  in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
  pppppppuVar14 = (uint *******)(ulong)((uint)unaff_x19 & 0xff);
code_r0x00010078aa6c:
  if (!(bool)in_ZR) {
code_r0x00010078aa70:
    if ((int)pppppppuVar14 == 1) {
      if ((int)unaff_x22 != 3) {
        pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
        ppppppuStack_208._0_1_ = 0x8c;
        ppppppuStack_208._1_7_ = 0x108cad8;
        bStack_200 = 6;
        uStack_1ff = 0;
        bStack_1a0 = (byte)&ppppppuStack_208;
        bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
        uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
        bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
        uStack_198 = 0xa0;
        uStack_197 = 0x100c7b3;
        uStack_191 = 0;
        pppppppuStack_98 = unaff_x27;
        param_3 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
        goto code_r0x00010078cb3c;
      }
      pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
code_r0x00010078aa84:
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
code_r0x00010078aa8c:
      if ((int)pppppppuVar14 == 0x16) goto code_r0x00010078d428;
code_r0x00010078aa94:
      pppppppuVar28 = (uint *******)pppppppuVar26[1];
      pppppppuVar27 = (uint *******)*pppppppuVar26;
code_r0x00010078aa98:
      pppppppuVar16 = pppppppuStack_218;
code_r0x00010078aa9c:
      pppppppuVar16[1] = (uint ******)pppppppuVar28;
      *pppppppuVar16 = (uint ******)pppppppuVar27;
code_r0x00010078aaa0:
      uVar7 = *(undefined8 *)((long)pppppppuVar26 + 0xf);
      *(undefined8 *)((long)pppppppuVar16 + 0x17) = *(undefined8 *)((long)pppppppuVar26 + 0x17);
      *(undefined8 *)((long)pppppppuVar16 + 0xf) = uVar7;
      ppppppuStack_208._0_1_ = (byte)pppppppuVar14;
      in_ZR = (int)pppppppuVar14 == 0x10;
code_r0x00010078aab0:
      if ((bool)in_ZR) {
code_r0x00010078aac4:
        pppppppuVar15 = (uint *******)0x200;
code_r0x00010078aac8:
        uStack_140 = (uint *******)CONCAT62(uStack_140._2_6_,(short)pppppppuVar15);
        FUN_100e077ec(&ppppppuStack_208);
      }
      else if ((int)pppppppuVar14 == 0x11) {
        unaff_x22 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
        ppppppuVar29 = unaff_x22[1];
        ppppppuVar8 = *unaff_x22;
        uStack_198 = SUB81(ppppppuVar29,0);
        uStack_197 = (undefined6)((ulong)ppppppuVar29 >> 8);
        uStack_191 = (undefined1)((ulong)ppppppuVar29 >> 0x38);
        bStack_1a0 = (byte)ppppppuVar8;
        bStack_19f = (byte)((ulong)ppppppuVar8 >> 8);
        uStack_19e = (undefined5)((ulong)ppppppuVar8 >> 0x10);
        bStack_199 = (byte)((ulong)ppppppuVar8 >> 0x38);
        pppppppuVar28 = (uint *******)unaff_x22[3];
        pppppppuVar27 = (uint *******)unaff_x22[2];
code_r0x00010078ab74:
        uStack_188 = SUB87(pppppppuVar28,0);
        uStack_181 = (undefined1)((ulong)pppppppuVar28 >> 0x38);
        uStack_190 = SUB81(pppppppuVar27,0);
        uStack_18f = (undefined6)((ulong)pppppppuVar27 >> 8);
        uStack_189 = (undefined1)((ulong)pppppppuVar27 >> 0x38);
        FUN_101429444(&uStack_140,&bStack_1a0);
        _free(unaff_x22);
      }
      else {
        if ((int)pppppppuVar14 == 0x12) goto code_r0x00010078aac4;
        FUN_101429444(&uStack_140,&ppppppuStack_208);
      }
      if ((char)uStack_140 == '\x01') {
        pppppppuVar14 = (uint *******)((long)unaff_x25 + 1);
        goto code_r0x00010078cb30;
      }
      unaff_x22 = (uint *******)((ulong)uStack_140 >> 8 & 0xff);
    }
    else {
code_r0x00010078ab30:
      cVar9 = (byte)pppppppuStack_c0;
      pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
      if (cVar9 == '\x16') {
code_r0x00010078d428:
        pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
        pppppppuStack_98 = unaff_x27;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x00010078da5c;
      }
      pppppppuVar28 = (uint *******)pppppppuVar26[1];
      pppppppuVar27 = (uint *******)*pppppppuVar26;
code_r0x00010078ab48:
      unaff_x20[1] = (uint ******)pppppppuVar28;
      *unaff_x20 = (uint ******)pppppppuVar27;
      uVar7 = *(undefined8 *)((long)pppppppuVar26 + 0xf);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppuVar26 + 0x17);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar7;
      bStack_1a0 = (byte)pppppppuVar14;
      FUN_100e077ec(&bStack_1a0);
    }
    goto code_r0x00010078a798;
  }
  pppppppuVar15 = (uint *******)0x8000000000000000;
code_r0x00010078aadc:
  if (unaff_x23 != pppppppuVar15) {
    pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
    ppppppuStack_208._0_1_ = 0x38;
    ppppppuStack_208._1_7_ = 0x108c610;
    bStack_200 = 4;
    uStack_1ff = 0;
    bStack_1a0 = (byte)&ppppppuStack_208;
    bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
    uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
    bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    pppppppuStack_98 = unaff_x27;
    ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    pppppppuStack_210[1] = ppppppuVar8;
    *(char *)pppppppuStack_210 = '\x05';
    if (unaff_x23 != (uint *******)0x0) goto code_r0x00010078cb58;
    goto code_r0x00010078c530;
  }
code_r0x00010078aae4:
  pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
code_r0x00010078aae8:
  pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,0x16);
  if ((int)pppppppuVar14 == 0x16) goto code_r0x00010078d8d8;
  ppppppuVar8 = *pppppppuVar26;
  unaff_x20[1] = pppppppuVar26[1];
  *unaff_x20 = ppppppuVar8;
  uVar7 = *(undefined8 *)((long)pppppppuVar26 + 0xf);
  *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)pppppppuVar26 + 0x17);
  *(undefined8 *)((long)unaff_x20 + 0xf) = uVar7;
  bStack_1a0 = (byte)pppppppuVar14;
code_r0x00010078ab0c:
  FUN_1004b64d4(&ppppppuStack_208,&bStack_1a0);
  unaff_x23 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
  unaff_x24 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
code_r0x00010078ab20:
  pppppppuVar14 = (uint *******)0x8000000000000000;
  goto code_r0x00010078ab24;
code_r0x00010078c4cc:
  unaff_x25 = pppppppuStack_228;
code_r0x00010078c4d4:
  pppppppuStack_98 = pppppppuVar24;
  pppppppuStack_80 = unaff_x25;
code_r0x00010078c4d8:
  pppppppuVar14 = (uint *******)0x8000000000000000;
code_r0x00010078c4dc:
  in_ZR = unaff_x23 == pppppppuVar14;
  pppppppuVar16 = pppppppuStack_220;
  pppppppuVar26 = pppppppuStack_210;
code_r0x00010078c4e8:
  if (!(bool)in_ZR) {
code_r0x00010078c53c:
    pppppppuVar15 = (uint *******)0x2;
code_r0x00010078c540:
    *(char *)pppppppuVar26 = (char)pppppppuVar15;
    iVar13 = (int)pppppppuVar15;
    if ((int)unaff_x22 != 3) {
      iVar13 = (int)unaff_x22;
    }
    *(char *)((long)pppppppuVar26 + 1) = (char)iVar13;
    pppppppuVar26[1] = (uint ******)unaff_x23;
    pppppppuVar26[2] = (uint ******)unaff_x24;
code_r0x00010078c554:
    pppppppuVar26[3] = (uint ******)pppppppuVar16;
code_r0x00010078c558:
    pppppppuVar28 = (uint *******)pppppppuVar26[3];
    pppppppuVar27 = (uint *******)pppppppuVar26[2];
    pppppppuVar32 = (uint *******)pppppppuVar26[5];
    pppppppuVar31 = (uint *******)pppppppuVar26[4];
code_r0x00010078c55c:
    pppppppuVar16 = (uint *******)&bStack_1a0;
code_r0x00010078c560:
    pppppppuVar16[0x13] = (uint ******)pppppppuVar28;
    pppppppuVar16[0x12] = (uint ******)pppppppuVar27;
    pppppppuVar16[0x15] = (uint ******)pppppppuVar32;
    pppppppuVar16[0x14] = (uint ******)pppppppuVar31;
    pppppppuVar15 = (uint *******)pppppppuVar26[6];
code_r0x00010078c568:
    ppppppuVar8 = *pppppppuVar26;
    pppppppuStack_f0 = pppppppuVar15;
    pppppppuVar16[0x11] = pppppppuVar26[1];
    pppppppuVar16[0x10] = ppppppuVar8;
code_r0x00010078c574:
    pcVar6 = (char *)FUN_100fbc67c(&pppppppuStack_c0);
code_r0x00010078c57c:
    param_3 = pcVar6;
    goto code_r0x00010078c8dc;
  }
  unaff_x19 = (uint *******)&pppppppuStack_c0;
code_r0x00010078c4f0:
  pppppppuVar14 = (uint *******)&UNK_108c61000;
code_r0x00010078c4f4:
  pppppppuVar15 = pppppppuVar14 + 7;
code_r0x00010078c4f8:
  pppppppuVar16 = (uint *******)0x4;
code_r0x00010078c4fc:
  ppppppuStack_208._0_1_ = (byte)pppppppuVar15;
  ppppppuStack_208._1_7_ = (undefined7)((ulong)pppppppuVar15 >> 8);
  bStack_200 = (byte)pppppppuVar16;
  uStack_1ff = (uint7)((ulong)pppppppuVar16 >> 8);
code_r0x00010078c500:
  pppppppuVar14 = &ppppppuStack_208;
  pppppppuVar16 = (uint *******)&DAT_100c7b3a0;
code_r0x00010078c50c:
  bStack_1a0 = (byte)pppppppuVar14;
  bStack_19f = (byte)((ulong)pppppppuVar14 >> 8);
  uStack_19e = (undefined5)((ulong)pppppppuVar14 >> 0x10);
  bStack_199 = (byte)((ulong)pppppppuVar14 >> 0x38);
  uStack_198 = SUB81(pppppppuVar16,0);
  uStack_197 = (undefined6)((ulong)pppppppuVar16 >> 8);
  uStack_191 = 0;
FUN_10078c514:
  pcVar6 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010078c518:
  pcVar6 = (char *)((long)pcVar6 + 0x8f7);
code_r0x00010078c51c:
  pcVar6 = (char *)thunk_FUN_108856088(pcVar6,&bStack_1a0);
  goto code_r0x00010078c524;
code_r0x00010078d8d8:
  pppppppuStack_80 = (uint *******)((long)unaff_x25 + 1);
  pppppppuStack_98 = unaff_x27;
  FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  goto code_r0x00010078da5c;
code_r0x00010078ac5c:
  do {
    pppppppuVar26 = unaff_x27 + 8;
    bVar1 = *(byte *)unaff_x27;
    pppppppuVar16 = (uint *******)(ulong)bVar1;
    if (bVar1 == 0x16) goto code_r0x00010078c588;
    ppppppuVar8 = unaff_x27[2];
    *(uint *******)((long)unaff_x22 + 0x17) = unaff_x27[3];
    *(uint *******)((long)unaff_x22 + 0xf) = ppppppuVar8;
    pppppppuVar28 = *(uint ********)((long)unaff_x27 + 9);
    pppppppuVar27 = *(uint ********)((long)unaff_x27 + 1);
    bStack_1a0 = bVar1;
code_r0x00010078ac7c:
    unaff_x22[1] = (uint ******)pppppppuVar28;
    *unaff_x22 = (uint ******)pppppppuVar27;
    pppppppuStack_b8 = (uint *******)unaff_x27[5];
    pppppppuStack_c0 = (uint *******)unaff_x27[4];
    ppppppuStack_a8 = unaff_x27[7];
    pppppppuStack_b0 = (uint *******)unaff_x27[6];
    pppppppuVar14 = (uint *******)CONCAT17(uStack_191,CONCAT61(uStack_197,uStack_198));
    pcVar6 = (char *)CONCAT17(uStack_189,CONCAT61(uStack_18f,uStack_190));
    pppppppuVar17 = (uint *******)CONCAT17(uStack_181,uStack_188);
    iVar13 = (int)pppppppuVar16;
    if (iVar13 < 0xd) {
      in_ZR = iVar13 == 1;
code_r0x00010078aca8:
      uVar11 = (uint)pppppppuVar16;
      if ((bool)in_ZR) {
        if (bStack_19f != 1) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = 0;
        if (bStack_19f != 0) {
          uVar12 = uVar11;
        }
      }
      else {
        if (uVar11 != 4) {
          if (uVar11 != 0xc) goto code_r0x00010078da84;
          if (pppppppuVar17 == (uint *******)0x4) {
            if (*(uint *)pcVar6 == 0x656d616e) goto code_r0x00010078ada8;
            uVar12 = 1;
            if (*(uint *)pcVar6 != 0x68746170) {
              uVar12 = 2;
            }
            goto code_r0x00010078ae38;
          }
          goto code_r0x00010078ae34;
        }
        uVar11 = 1;
        if (pppppppuVar14 != (uint *******)0x1) {
          uVar11 = 2;
        }
        uVar12 = 0;
        if (pppppppuVar14 != (uint *******)0x0) {
          uVar12 = uVar11;
        }
      }
code_r0x00010078ae74:
      FUN_100e077ec(&bStack_1a0);
    }
    else {
      if (iVar13 == 0xd) {
        if ((uint *******)pcVar6 != (uint *******)0x4) goto code_r0x00010078ae70;
        if (*(uint *)pppppppuVar14 == 0x656d616e) {
code_r0x00010078ae00:
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
          if (*(uint *)pppppppuVar14 != 0x68746170) {
            uVar12 = 2;
          }
        }
        goto code_r0x00010078ae74;
      }
      if (iVar13 != 0xe) {
        if (iVar13 == 0xf) {
          if ((uint *******)pcVar6 == (uint *******)0x4) {
code_r0x00010078ad14:
            if (*(char *)pppppppuVar14 == 'p') {
              if (((*(char *)((long)pppppppuVar14 + 1) == 'a') &&
                  (*(char *)((long)pppppppuVar14 + 2) == 't')) &&
                 (*(char *)((long)pppppppuVar14 + 3) == 'h')) {
                uVar12 = 1;
                goto code_r0x00010078ae74;
              }
            }
            else if (((*(char *)pppppppuVar14 == 'n') && (*(char *)((long)pppppppuVar14 + 1) == 'a')
                     ) && ((*(char *)((long)pppppppuVar14 + 2) == 'm' &&
                           (*(char *)((long)pppppppuVar14 + 3) == 'e')))) goto code_r0x00010078ae00;
          }
code_r0x00010078ae70:
          uVar12 = 2;
          goto code_r0x00010078ae74;
        }
code_r0x00010078da84:
        pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
        pppppppuStack_98 = pppppppuVar26;
        ppppppuVar8 = (uint ******)thunk_FUN_108855b04(&bStack_1a0,&ppppppuStack_208,&UNK_10b212960)
        ;
        unaff_x19 = (uint *******)&pppppppuStack_c0;
        goto LAB_10078c5e0;
      }
      if (pppppppuVar17 == (uint *******)0x4) {
        if (*pcVar6 == 'p') {
          if (((*(char *)((long)pcVar6 + 1) != 'a') || (*(char *)((long)pcVar6 + 2) != 't')) ||
             (*(char *)((long)pcVar6 + 3) != 'h')) goto code_r0x00010078ae34;
          uVar12 = 1;
        }
        else {
          if (((*pcVar6 != 'n') || (*(char *)((long)pcVar6 + 1) != 'a')) ||
             ((*(char *)((long)pcVar6 + 2) != 'm' || (*(char *)((long)pcVar6 + 3) != 'e'))))
          goto code_r0x00010078ae34;
code_r0x00010078ada8:
          uVar12 = 0;
        }
      }
      else {
code_r0x00010078ae34:
        uVar12 = 2;
      }
code_r0x00010078ae38:
      if (pppppppuVar14 != (uint *******)0x0) {
        _free();
      }
    }
    uVar10 = SUB81(unaff_x24,0);
    bVar1 = (byte)pppppppuStack_c0;
    if ((uVar12 & 0xff) == 0) {
      if (unaff_x23 != (uint *******)0x8000000000000000) {
        pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
        ppppppuStack_208._0_1_ = 0x18;
        ppppppuStack_208._1_7_ = 0x108c610;
        bStack_200 = 4;
        uStack_1ff = 0;
        bStack_1a0 = (byte)&ppppppuStack_208;
        bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
        uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
        bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
        uStack_198 = 0xa0;
        uStack_197 = 0x100c7b3;
        uStack_191 = 0;
        pppppppuStack_98 = pppppppuVar26;
        ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
        unaff_x19 = (uint *******)&pppppppuStack_c0;
        goto LAB_10078c5e0;
      }
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
      if (bVar1 == 0x16) {
        pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
        pppppppuStack_98 = pppppppuVar26;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x00010078da5c;
      }
      ppppppuVar8 = *unaff_x20;
      unaff_x22[1] = unaff_x20[1];
      *unaff_x22 = ppppppuVar8;
      uVar7 = *(undefined8 *)((long)unaff_x20 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
      bStack_1a0 = bVar1;
      param_3 = (char *)&ppppppuStack_208;
code_r0x00010078af20:
      FUN_1004b62d4(param_3,&bStack_1a0);
      unaff_x23 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      if (unaff_x23 == (uint *******)0x8000000000000000) goto code_r0x00010078ca2c;
      pppppppuStack_218 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
      pppppppuVar14 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
      param_3 = (char *)pppppppuVar26;
code_r0x00010078ac44:
      pppppppuStack_230 = pppppppuVar14;
    }
    else if ((uVar12 & 0xff) == 1) {
      if (unaff_x25 != (uint *******)0x8000000000000000) {
        pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
        ppppppuStack_208._0_1_ = 0x38;
        ppppppuStack_208._1_7_ = 0x108c610;
        bStack_200 = 4;
        uStack_1ff = 0;
        bStack_1a0 = (byte)&ppppppuStack_208;
        bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
        uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
        bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
        uStack_198 = 0xa0;
        uStack_197 = 0x100c7b3;
        uStack_191 = 0;
        pppppppuStack_98 = pppppppuVar26;
        ppppppuVar8 = (uint ******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_1a0);
        unaff_x19 = (uint *******)&pppppppuStack_c0;
        pppppppuStack_210[1] = ppppppuVar8;
        *(char *)pppppppuStack_210 = '\x05';
        unaff_x21 = pppppppuStack_220;
        unaff_x20 = pppppppuStack_218;
        goto joined_r0x00010078d530;
      }
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
      if (bVar1 == 0x16) {
        pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
        pppppppuStack_98 = pppppppuVar26;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x00010078da5c;
      }
      ppppppuVar8 = *unaff_x20;
      unaff_x22[1] = unaff_x20[1];
      *unaff_x22 = ppppppuVar8;
      uVar7 = *(undefined8 *)((long)unaff_x20 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
      bStack_1a0 = bVar1;
      FUN_1004b64d4(&ppppppuStack_208,&bStack_1a0);
      unaff_x25 = (uint *******)CONCAT71(ppppppuStack_208._1_7_,(byte)ppppppuStack_208);
      if (unaff_x25 == (uint *******)0x8000000000000000) {
        pppppppuVar14 = (uint *******)((long)unaff_x26 + 1);
        goto code_r0x00010078c998;
      }
      pppppppuStack_220 = (uint *******)CONCAT71(uStack_1ff,bStack_200);
      pppppppuStack_228 = (uint *******)CONCAT71(uStack_1f7,uStack_1f8);
      param_3 = (char *)pppppppuVar26;
    }
    else {
      pppppppuVar14 = (uint *******)((ulong)pppppppuStack_c0 & 0xff);
      pppppppuStack_c0 = (uint *******)CONCAT71(pppppppuStack_c0._1_7_,uVar10);
      if (bVar1 == 0x16) {
        pppppppuStack_80 = (uint *******)((long)unaff_x26 + 1);
        pppppppuStack_98 = pppppppuVar26;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x00010078da5c;
      }
      pppppppuVar28 = (uint *******)unaff_x20[1];
      pppppppuVar27 = (uint *******)*unaff_x20;
code_r0x00010078af50:
      unaff_x22[1] = (uint ******)pppppppuVar28;
      *unaff_x22 = (uint ******)pppppppuVar27;
      uVar7 = *(undefined8 *)((long)unaff_x20 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar7;
      bStack_1a0 = (byte)pppppppuVar14;
      FUN_100e077ec(&bStack_1a0);
      param_3 = (char *)pppppppuVar26;
    }
    pppppppuVar14 = unaff_x27 + 8;
    unaff_x26 = (uint *******)((long)unaff_x26 + 1);
    pppppppuVar26 = unaff_x21;
    unaff_x27 = (uint *******)param_3;
  } while (pppppppuVar14 != unaff_x21);
code_r0x00010078c584:
  unaff_x26 = pppppppuStack_238;
code_r0x00010078c588:
  pppppppuVar14 = (uint *******)0x8000000000000000;
  in_ZR = unaff_x23 == (uint *******)0x8000000000000000;
  pppppppuStack_98 = pppppppuVar26;
  pppppppuStack_80 = unaff_x26;
code_r0x00010078c598:
  unaff_x20 = pppppppuStack_218;
  unaff_x21 = pppppppuStack_220;
code_r0x00010078c59c:
  if ((bool)in_ZR) {
    unaff_x19 = (uint *******)&pppppppuStack_c0;
    pppppppuVar26 = pppppppuStack_210;
code_r0x00010078c5ac:
    pppppppuVar14 = (uint *******)&UNK_108c61000;
code_r0x00010078c5b0:
    pppppppuVar15 = pppppppuVar14 + 3;
    pppppppuVar16 = (uint *******)0x4;
code_r0x00010078c5b8:
    ppppppuStack_208._0_1_ = (byte)pppppppuVar15;
    ppppppuStack_208._1_7_ = (undefined7)((ulong)pppppppuVar15 >> 8);
    bStack_200 = (byte)pppppppuVar16;
    uStack_1ff = (uint7)((ulong)pppppppuVar16 >> 8);
    pppppppuVar14 = &ppppppuStack_208;
code_r0x00010078c5c0:
    bStack_1a0 = (byte)pppppppuVar14;
    bStack_19f = (byte)((ulong)pppppppuVar14 >> 8);
    uStack_19e = (undefined5)((ulong)pppppppuVar14 >> 0x10);
    bStack_199 = (byte)((ulong)pppppppuVar14 >> 0x38);
    uStack_198 = 0xa0;
    uStack_197 = 0x100c7b3;
    uStack_191 = 0;
    unaff_x23 = (uint *******)0x0;
    pcVar6 = s_missing_field_____108ac28f7;
    param_4 = (uint *******)&bStack_1a0;
    pppppppuVar23 = unaff_x20;
    pppppppuVar19 = unaff_x21;
code_r0x00010078c5dc:
    pppppppuStack_210 = pppppppuVar26;
    pppppppuStack_220 = pppppppuVar19;
    pppppppuStack_218 = pppppppuVar23;
    ppppppuVar8 = (uint ******)thunk_FUN_108856088(pcVar6,param_4);
LAB_10078c5e0:
    pppppppuStack_210[1] = ppppppuVar8;
    *(char *)pppppppuStack_210 = '\x05';
    unaff_x25 = (uint *******)((ulong)unaff_x25 & 0x7fffffffffffffff);
    unaff_x21 = pppppppuStack_220;
    unaff_x20 = pppppppuStack_218;
joined_r0x00010078d530:
    if (unaff_x25 == (uint *******)0x0) goto LAB_10078ca60;
    goto LAB_10078c5f4;
  }
  if (unaff_x25 != pppppppuVar14) {
    *(char *)pppppppuStack_210 = '\x03';
    pppppppuVar16 = pppppppuStack_228;
    pppppppuVar17 = pppppppuStack_230;
    unaff_x19 = pppppppuStack_210;
    goto code_r0x00010078c8f8;
  }
  ppppppuStack_208._0_1_ = 0x38;
  ppppppuStack_208._1_7_ = 0x108c610;
  bStack_200 = 4;
  uStack_1ff = 0;
  bStack_1a0 = (byte)&ppppppuStack_208;
  bStack_19f = (byte)((ulong)&ppppppuStack_208 >> 8);
  uStack_19e = (undefined5)((ulong)&ppppppuStack_208 >> 0x10);
  bStack_199 = (byte)((ulong)&ppppppuStack_208 >> 0x38);
  uStack_198 = 0xa0;
  uStack_197 = 0x100c7b3;
  uStack_191 = 0;
  pcVar6 = s_missing_field_____108ac28f7;
  param_4 = (uint *******)&bStack_1a0;
  unaff_x19 = pppppppuStack_210;
code_r0x00010078c638:
  ppppppuVar8 = (uint ******)thunk_FUN_108856088(pcVar6,param_4);
  unaff_x19[1] = ppppppuVar8;
  *(char *)unaff_x19 = '\x05';
  unaff_x19 = (uint *******)&pppppppuStack_c0;
  goto joined_r0x00010078c64c;
code_r0x00010078be30:
  param_3 = (char *)pppppppuVar26;
code_r0x00010078be34:
  thunk_FUN_108827400(param_3,param_4);
code_r0x00010078be38:
  pppppppuVar23 = unaff_x21;
  goto code_r0x00010078c0cc;
code_r0x00010078cc74:
  goto code_r0x00010078d0a8;
}

