
/* WARNING: Removing unreachable block (ram,0x000101256fd8) */
/* WARNING: Removing unreachable block (ram,0x000101256854) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101255a14(long *param_1,byte *param_2)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined1 uVar14;
  bool bVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *puVar19;
  byte bVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  bool bVar28;
  bool bVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined1 uVar36;
  byte *pbVar37;
  byte *pbVar38;
  undefined8 uVar39;
  byte *extraout_d0;
  byte *extraout_d0_00;
  byte *extraout_d0_01;
  byte *extraout_d0_02;
  byte *extraout_var;
  byte *extraout_var_00;
  byte *extraout_var_01;
  byte *extraout_var_02;
  undefined1 auVar40 [16];
  undefined4 uStack_314;
  long lStack_310;
  long lStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c0;
  uint uStack_2b4;
  byte *pbStack_2b0;
  int iStack_2a8;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_278;
  byte *pbStack_268;
  byte *pbStack_260;
  undefined8 uStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  long lStack_230;
  byte bStack_220;
  undefined1 uStack_21f;
  short sStack_21e;
  undefined4 uStack_21c;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined1 auStack_71 [17];
  
  bVar5 = *param_2;
  if (bVar5 != 0x14) {
    if (bVar5 != 0x15) {
      lVar21 = FUN_108855b04(param_2,auStack_71,&UNK_10b20b460);
      *param_1 = 3;
      param_1[1] = lVar21;
      return;
    }
    pbStack_1f0 = *(byte **)(param_2 + 8);
    pbVar32 = *(byte **)(param_2 + 0x10);
    lVar21 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar35 = pbVar32 + lVar21;
    bStack_220 = 0x16;
    pbStack_1e0 = (byte *)0x0;
    pbStack_128 = (byte *)0x8000000000000000;
    pbStack_110 = (byte *)0x0;
    pbVar37 = (byte *)0x0;
    pbStack_200 = pbVar32;
    pbStack_1e8 = pbVar35;
    if (*(long *)(param_2 + 0x18) != 0) {
      pbStack_268 = (byte *)0x0;
      pbStack_298 = (byte *)0x0;
      puVar30 = (undefined8 *)((ulong)&uStack_d0 | 1);
      puVar27 = (undefined8 *)((ulong)&bStack_220 | 1);
      pbVar26 = (byte *)((ulong)&uStack_250 | 1);
      puVar23 = (undefined8 *)((ulong)&uStack_98 | 1);
      pbStack_2b0 = (byte *)0x3;
      bVar9 = 2;
      bVar4 = 2;
      iStack_2a8 = 2;
      pbStack_2c0 = (byte *)0x3;
      uStack_2b4 = 2;
      pbStack_278 = (byte *)0x8000000000000000;
      pbStack_260 = (byte *)0x8000000000000000;
      pbVar33 = (byte *)0x8000000000000000;
      pbVar18 = pbVar32;
      pbStack_1f8 = pbVar32;
LAB_101255ccc:
      pbVar34 = pbStack_c0;
      pbVar17 = pbStack_c8;
      pbVar38 = uStack_d0;
      pbVar31 = pbVar18 + 0x40;
      bVar20 = *pbVar18;
      pbVar32 = pbVar31;
      pbVar24 = pbVar37;
      if (bVar20 != 0x16) {
        uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar20);
        pbVar32 = uStack_d0;
        uVar39 = *(undefined8 *)(pbVar18 + 0x10);
        *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)(pbVar18 + 0x18);
        *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
        uVar39 = *(undefined8 *)(pbVar18 + 1);
        puVar30[1] = *(undefined8 *)(pbVar18 + 9);
        *puVar30 = uVar39;
        uVar39 = *(undefined8 *)(pbVar18 + 0x20);
        pbStack_208 = *(byte **)(pbVar18 + 0x38);
        uStack_218 = (undefined1)*(undefined8 *)(pbVar18 + 0x28);
        uStack_217 = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x28) >> 8);
        bStack_220 = (byte)uVar39;
        uStack_21f = (undefined1)((ulong)uVar39 >> 8);
        sStack_21e = (short)((ulong)uVar39 >> 0x10);
        uStack_21c = (undefined4)((ulong)uVar39 >> 0x20);
        uStack_210 = (undefined1)*(undefined8 *)(pbVar18 + 0x30);
        uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar18 + 0x30) >> 8);
        if (0xc < bVar20) {
          uVar14 = bVar20 == 0xd;
          if ((bool)uVar14) {
            func_0x000100bb2908(&uStack_250,pbStack_c8,pbStack_c0);
            goto LAB_101255dc8;
          }
          uVar14 = bVar20 == 0xe;
          if (!(bool)uVar14) {
            uVar14 = bVar20 == 0xf;
            if (!(bool)uVar14) goto LAB_101256324;
            func_0x000100bb240c(&uStack_250,pbStack_c8,pbStack_c0);
            goto LAB_101255dc8;
          }
          puVar16 = (undefined8 *)func_0x000100bb240c(&uStack_250,pbStack_c0,pbStack_b8);
          puVar19 = extraout_x1_00;
          pbVar32 = extraout_d0_00;
          pbVar18 = extraout_var_00;
          if (pbVar17 != (byte *)0x0) goto LAB_101255d88;
LAB_101255dd0:
          if (((ulong)uStack_250 & 1) == 0) goto LAB_101255dd8;
LAB_10125634c:
          pbStack_1e0 = pbVar37 + 1;
          *param_1 = 3;
          param_1[1] = (long)pbStack_248;
          pbStack_1f8 = pbVar31;
          goto joined_r0x0001012568c8;
        }
        if (bVar20 == 1) {
          uStack_d0._1_1_ = SUB81(pbVar38,1);
          uVar14 = uStack_d0._1_1_ == 10;
          if (9 < uStack_d0._1_1_) {
            uStack_d0._1_1_ = 10;
          }
          uStack_250 = (byte *)((ulong)CONCAT61(uStack_250._2_6_,uStack_d0._1_1_) << 8);
          uStack_d0 = pbVar32;
LAB_101255dc8:
          puVar16 = (undefined8 *)FUN_100e077ec(&uStack_d0);
          puVar19 = extraout_x1_02;
          pbVar32 = extraout_d0_02;
          pbVar18 = extraout_var_02;
          goto LAB_101255dd0;
        }
        if (bVar20 == 4) {
          uVar14 = pbStack_c8 == (byte *)0xa;
          pbVar18 = pbStack_c8;
          if ((byte *)0x9 < pbStack_c8) {
            pbVar18 = (byte *)0xa;
          }
          uStack_250 = (byte *)((ulong)CONCAT61(uStack_250._2_6_,(char)pbVar18) << 8);
          uStack_d0 = pbVar32;
          goto LAB_101255dc8;
        }
        uVar14 = bVar20 == 0xc;
        if (!(bool)uVar14) {
LAB_101256324:
          pbStack_248 = (byte *)FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b211a40);
          uStack_250 = (byte *)CONCAT71(uStack_250._1_7_,1);
          goto LAB_10125634c;
        }
        puVar16 = (undefined8 *)func_0x000100bb2908(&uStack_250,pbStack_c0);
        puVar19 = extraout_x1;
        pbVar32 = extraout_d0;
        pbVar18 = extraout_var;
        if (pbVar17 == (byte *)0x0) goto LAB_101255dd0;
LAB_101255d88:
        puVar16 = (undefined8 *)_free(pbVar34);
        puVar19 = extraout_x1_01;
        pbVar32 = extraout_d0_01;
        pbVar18 = extraout_var_01;
        if (((ulong)uStack_250 & 1) != 0) goto LAB_10125634c;
LAB_101255dd8:
        pbVar11 = pbStack_90;
        pbVar17 = uStack_d0;
        bVar10 = bStack_220;
        pbVar38 = pbStack_248;
        bVar20 = uStack_250._1_1_;
        pbVar22 = (byte *)(ulong)uStack_250._1_1_;
        pbVar25 = (byte *)(ulong)pbVar22[0x108c9f910];
        pbVar24 = &UNK_101255df4 + (long)pbVar25 * 4;
        pbVar12 = uStack_d0;
        switch(bVar20) {
        case 0:
        case 0xb:
        case 0x2e:
        case 0x2f:
        case 0x33:
        case 0x35:
        case 0x37:
        case 0x38:
        case 0x47:
        case 0x6a:
        case 0x6b:
        case 0x6f:
        case 0x71:
        case 0x73:
        case 0x74:
        case 0xa0:
        case 0xa1:
        case 0xa5:
        case 0xa7:
        case 0xa9:
        case 0xcc:
        case 0xcd:
        case 0xd1:
        case 0xd3:
        case 0xd5:
        case 0xd6:
        case 0xe0:
          goto code_r0x000101255df4;
        case 1:
        case 0x2a:
          pbVar25 = pbStack_278;
        case 0x5c:
        case 0xc0:
          if (pbVar25 != (byte *)0x8000000000000000) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108cc0902;
            pbStack_248 = (byte *)0xd;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            pbStack_278 = pbVar25;
            goto LAB_101257294;
          }
code_r0x000101256014:
          pbVar22 = (byte *)(ulong)bStack_220;
code_r0x000101256018:
          bStack_220 = 0x16;
code_r0x00010125601c:
          bVar20 = (byte)pbVar22;
          if ((int)pbVar22 == 0x16) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001012571c8;
          }
code_r0x000101256024:
          uVar39 = *puVar27;
          puVar30[1] = puVar27[1];
          *puVar30 = uVar39;
          pbVar18 = *(byte **)((long)puVar27 + 0x17);
          pbVar32 = *(byte **)((long)puVar27 + 0xf);
code_r0x000101256030:
          *(byte **)((long)puVar30 + 0x17) = pbVar18;
          *(byte **)((long)puVar30 + 0xf) = pbVar32;
code_r0x000101256034:
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar20);
code_r0x00010125603c:
code_r0x000101256040:
          puVar16 = &uStack_250;
code_r0x000101256044:
          puVar19 = &uStack_d0;
code_r0x000101256048:
          FUN_1004b62d4(puVar16,puVar19);
          pbStack_278 = uStack_250;
          pbVar22 = pbStack_248;
          pbVar24 = uStack_250;
code_r0x000101256054:
          pbVar25 = (byte *)0x8000000000000000;
code_r0x000101256058:
          uVar14 = pbVar24 == pbVar25;
code_r0x00010125605c:
          if ((bool)uVar14) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_278 = (byte *)0x0;
            *param_1 = 3;
            param_1[1] = (long)pbVar22;
            pbStack_1f8 = pbVar31;
            goto joined_r0x0001012568c8;
          }
code_r0x000101256060:
          pbVar24 = pbStack_240;
code_r0x000101256064:
          pbStack_2f8 = pbVar24;
          pbStack_2e0 = pbVar22;
          goto code_r0x000101255cb4;
        case 2:
          pbVar24 = (byte *)0x8000000000000000;
          pbVar22 = pbStack_260;
        case 0xd4:
          uVar14 = pbVar22 == pbVar24;
code_r0x000101255f00:
          if (!(bool)uVar14) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108ca1f1d;
            pbStack_248 = (byte *)0x3;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_101257294;
          }
          bStack_220 = 0x16;
          uVar14 = bVar10 == 0x16;
          bVar20 = bVar10;
code_r0x000101255f10:
          if ((bool)uVar14) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001012571c8;
          }
          uVar39 = *puVar27;
          puVar30[1] = puVar27[1];
          *puVar30 = uVar39;
          pbVar18 = *(byte **)((long)puVar27 + 0x17);
          pbVar32 = *(byte **)((long)puVar27 + 0xf);
code_r0x000101255f20:
          *(byte **)((long)puVar30 + 0x17) = pbVar18;
          *(byte **)((long)puVar30 + 0xf) = pbVar32;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar20);
code_r0x000101255f2c:
code_r0x000101255f30:
          FUN_1014a868c(&uStack_250,&uStack_d0);
          pbVar22 = pbStack_248;
          pbVar24 = uStack_250;
code_r0x000101255f40:
          pbVar25 = (byte *)0x8000000000000000;
          pbStack_260 = pbVar24;
code_r0x000101255f48:
          if (pbVar24 == pbVar25) goto code_r0x000101256900;
code_r0x000101255f50:
          pbStack_300 = pbStack_240;
          pbStack_2e8 = pbVar22;
          goto code_r0x000101255cb4;
        case 3:
        case 0x40:
        case 0x5e:
          if (bVar4 == 2) goto code_r0x000101255f6c;
          pbStack_1e0 = pbVar37 + 1;
          pbStack_118 = pbStack_2d8;
          pbStack_110 = pbStack_298;
          pbStack_108 = pbStack_290;
          pbStack_120 = pbStack_2d0;
          uStack_250 = &UNK_108ca2825;
          pbStack_248 = (byte *)0x3;
          uStack_d0 = (byte *)&uStack_250;
          pbStack_c8 = &DAT_100c7b3a0;
          pbStack_1f8 = pbVar31;
          pbStack_128 = pbVar33;
          lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
          goto LAB_101257294;
        case 4:
        case 0x3c:
        case 0xe3:
          uVar14 = bVar9 == 2;
        case 0xd9:
        case 0xe7:
          if (!(bool)uVar14) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108cc0c9c;
            pbStack_248 = (byte *)0xb;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_101257294;
          }
          pbVar22 = (byte *)(ulong)bStack_220;
code_r0x000101255e60:
          bStack_220 = 0x16;
code_r0x000101255e64:
          if ((int)pbVar22 == 0x16) goto code_r0x0001012570e8;
code_r0x000101255e6c:
          pbVar18 = (byte *)puVar27[1];
          pbVar32 = (byte *)*puVar27;
code_r0x000101255e70:
          puVar30[1] = pbVar18;
          *puVar30 = pbVar32;
          uVar39 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,(char)pbVar22);
          pbVar12 = uStack_d0;
          if ((int)pbVar22 != 0) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a560);
            goto LAB_101257294;
          }
          uStack_d0._1_1_ = SUB81(pbVar17,1);
          puVar16 = &uStack_d0;
          bVar9 = uStack_d0._1_1_;
code_r0x000101255e90:
          uStack_d0 = pbVar12;
          FUN_100e077ec(puVar16);
          goto code_r0x000101255cb4;
        case 5:
        case 0x1c:
          uVar14 = iStack_2a8 == 2;
        case 0xac:
        case 0xfc:
          if (!(bool)uVar14) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108cc0ca7;
            pbStack_248 = (byte *)0x12;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_101257294;
          }
          pbVar22 = (byte *)(ulong)bStack_220;
          bStack_220 = 0x16;
code_r0x000101256084:
          uVar14 = (int)pbVar22 == 0x16;
code_r0x000101256088:
          if ((bool)uVar14) goto code_r0x0001012570e8;
          pbVar18 = (byte *)puVar27[1];
          pbVar32 = (byte *)*puVar27;
code_r0x000101256090:
          puVar30[1] = pbVar18;
          *puVar30 = pbVar32;
code_r0x000101256094:
          uVar39 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
code_r0x00010125609c:
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,(char)pbVar22);
code_r0x0001012560a0:
          if ((int)pbVar22 != 0) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a560);
            goto LAB_101257294;
          }
code_r0x0001012560a4:
          pbVar22 = (byte *)((ulong)uStack_d0 >> 8 & 0xff);
code_r0x0001012560a8:
          iStack_2a8 = (int)pbVar22;
code_r0x0001012560ac:
          FUN_100e077ec(&uStack_d0);
          goto code_r0x000101255cb4;
        case 6:
        case 0xba:
          pbVar22 = pbStack_2b0;
        case 0xec:
          if (pbVar22 != (byte *)0x3) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108cc0cb9;
            pbStack_248 = (byte *)0xe;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_101257294;
          }
          pbVar22 = (byte *)(ulong)bStack_220;
          bStack_220 = 0x16;
code_r0x0001012560cc:
          if ((int)pbVar22 == 0x16) goto code_r0x0001012570e8;
code_r0x0001012560d4:
          uVar39 = *puVar27;
          *(undefined8 *)(pbVar26 + 8) = puVar27[1];
          *(undefined8 *)pbVar26 = uVar39;
          pbVar18 = *(byte **)((long)puVar27 + 0x17);
          pbVar32 = *(byte **)((long)puVar27 + 0xf);
          pbVar24 = pbVar26;
code_r0x0001012560e4:
          *(byte **)(pbVar24 + 0x17) = pbVar18;
          *(byte **)(pbVar24 + 0xf) = pbVar32;
          uStack_250 = (byte *)CONCAT71(uStack_250._1_7_,(char)pbVar22);
code_r0x0001012560ec:
          if ((int)pbVar22 != 0x10) {
            if ((int)pbVar22 == 0x11) {
              pbStack_c8 = *(byte **)(pbStack_248 + 8);
              uStack_d0 = *(byte **)pbStack_248;
              pbStack_b8 = *(byte **)(pbStack_248 + 0x18);
              pbStack_c0 = *(byte **)(pbStack_248 + 0x10);
              auVar40 = FUN_100617a90(&uStack_d0);
              _free(pbVar38);
            }
            else {
code_r0x0001012560fc:
              if ((int)pbVar22 == 0x12) goto code_r0x000101256104;
              auVar40 = FUN_100617a90(&uStack_250);
            }
            lStack_308 = auVar40._8_8_;
            pbStack_2b0 = (byte *)(auVar40._0_8_ + 1);
            lVar6 = lStack_308;
            pbVar32 = pbStack_2b0;
joined_r0x000101256240:
            if (pbVar32 != (byte *)0x2) goto code_r0x000101255cb4;
            pbStack_1e0 = pbVar37 + 1;
            param_1[1] = lVar6;
            pbStack_1f8 = pbVar31;
code_r0x000101256a5c:
            *param_1 = 3;
            goto joined_r0x0001012568c8;
          }
code_r0x000101256104:
          FUN_100e077ec(&uStack_250);
          pbStack_2b0 = (byte *)0x0;
          goto code_r0x000101255cb4;
        case 7:
        case 0x66:
          pbVar22 = pbStack_2c0;
        case 0x2c:
          if (pbVar22 != (byte *)0x3) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108cc0cc7;
            pbStack_248 = (byte *)0x9;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_101257294;
          }
code_r0x000101255fb4:
          pbVar22 = (byte *)(ulong)bStack_220;
code_r0x000101255fb8:
          bStack_220 = 0x16;
          uVar14 = (int)pbVar22 == 0x16;
code_r0x000101255fc0:
          if ((bool)uVar14) goto code_r0x0001012570e8;
          pbVar18 = (byte *)puVar27[1];
          pbVar32 = (byte *)*puVar27;
code_r0x000101255fc8:
          *(byte **)(pbVar26 + 8) = pbVar18;
          *(byte **)pbVar26 = pbVar32;
          pbVar18 = *(byte **)((long)puVar27 + 0x17);
          pbVar32 = *(byte **)((long)puVar27 + 0xf);
          pbVar24 = pbVar26;
code_r0x000101255fd4:
          *(byte **)(pbVar24 + 0x17) = pbVar18;
          *(byte **)(pbVar24 + 0xf) = pbVar32;
code_r0x000101255fd8:
          uStack_250 = (byte *)CONCAT71(uStack_250._1_7_,(char)pbVar22);
code_r0x000101255fdc:
          if ((int)pbVar22 != 0x10) {
            uVar14 = (int)pbVar22 == 0x11;
code_r0x000101255fe8:
            if ((bool)uVar14) {
              pbStack_c8 = *(byte **)(pbStack_248 + 8);
              uStack_d0 = *(byte **)pbStack_248;
              pbStack_b8 = *(byte **)(pbStack_248 + 0x18);
              pbStack_c0 = *(byte **)(pbStack_248 + 0x10);
              auVar40 = FUN_100614fd8(&uStack_d0);
              _free(pbVar38);
            }
            else {
code_r0x000101255fec:
              uVar14 = (int)pbVar22 == 0x12;
code_r0x000101255ff0:
              if ((bool)uVar14) goto code_r0x000101255ff4;
              auVar40 = FUN_100614fd8(&uStack_250);
            }
            lStack_310 = auVar40._8_8_;
            pbStack_2c0 = (byte *)(auVar40._0_8_ + 1);
            lVar6 = lStack_310;
            pbVar32 = pbStack_2c0;
            goto joined_r0x000101256240;
          }
code_r0x000101255ff4:
          FUN_100e077ec(&uStack_250);
code_r0x000101255ffc:
          pbStack_2c0 = (byte *)0x0;
code_r0x000101256000:
          goto code_r0x000101255cb4;
        case 8:
          pbVar22 = pbStack_268;
        case 0x9a:
          if (pbVar22 == (byte *)0x0) {
            pbVar22 = (byte *)(ulong)bStack_220;
            bStack_220 = 0x16;
            if (bVar10 == 0x16) {
              pbStack_1e0 = pbVar37 + 1;
              pbStack_118 = pbStack_2d8;
              pbStack_110 = pbStack_298;
              pbStack_108 = pbStack_290;
              pbStack_120 = pbStack_2d0;
              pbStack_1f8 = pbVar31;
              pbStack_128 = pbVar33;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto code_r0x0001012571c8;
            }
            pbVar18 = (byte *)puVar27[1];
            pbVar32 = (byte *)*puVar27;
code_r0x000101256160:
            puVar23[1] = pbVar18;
            *puVar23 = pbVar32;
            uVar39 = *(undefined8 *)((long)puVar27 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar39;
            uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,(char)pbVar22);
code_r0x000101256174:
            if ((int)pbVar22 == 0x10) {
code_r0x00010125618c:
              uStack_d0 = (byte *)0x0;
              pbStack_c8 = (byte *)0x0;
code_r0x000101256194:
              FUN_100e077ec(&uStack_98);
code_r0x0001012562e8:
              pbStack_290 = pbStack_c8;
              pbStack_e8 = pbStack_a8;
              pbStack_e0 = pbStack_a0;
            }
            else {
code_r0x00010125617c:
              uVar14 = (int)pbVar22 == 0x11;
code_r0x000101256180:
              if (!(bool)uVar14) {
                if ((int)pbVar22 == 0x12) goto code_r0x00010125618c;
                FUN_101442804(&uStack_d0,&uStack_98);
                goto code_r0x0001012562e8;
              }
              pbStack_248 = *(byte **)(pbStack_90 + 8);
              uStack_250 = *(byte **)pbStack_90;
              pbStack_238 = *(byte **)(pbStack_90 + 0x18);
              pbStack_240 = *(byte **)(pbStack_90 + 0x10);
              FUN_101442804(&uStack_d0,&uStack_250);
              _free(pbVar11);
              pbStack_290 = pbStack_c8;
              pbStack_e8 = pbStack_a8;
              pbStack_e0 = pbStack_a0;
            }
            pbStack_c8 = pbStack_290;
            pbStack_a8 = pbStack_e8;
            if ((int)uStack_d0 != 1) {
              pbStack_298 = (byte *)0x1;
              pbStack_268 = (byte *)0x1;
              pbStack_100 = pbStack_c0;
              pbStack_f8 = pbStack_b8;
              pbStack_f0 = pbStack_b0;
              pbStack_a0 = pbStack_e0;
              goto code_r0x000101255cb4;
            }
            pbVar24 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_120 = pbStack_2d0;
            *param_1 = 3;
            param_1[1] = (long)pbStack_290;
            bVar28 = true;
            bVar15 = true;
            pbStack_1f8 = pbVar31;
            pbStack_1e0 = pbVar24;
            pbStack_128 = pbVar33;
            goto LAB_101256434;
          }
          pbVar24 = pbVar37 + 1;
          pbStack_118 = pbStack_2d8;
          pbStack_110 = pbStack_298;
          pbStack_108 = pbStack_290;
          pbStack_120 = pbStack_2d0;
          uStack_250 = &UNK_108ca2873;
          pbStack_248 = (byte *)0x3;
          uStack_d0 = (byte *)&uStack_250;
          pbStack_c8 = &DAT_100c7b3a0;
          pbStack_1f8 = pbVar31;
          pbStack_1e0 = pbVar24;
          pbStack_128 = pbVar33;
          lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
          *param_1 = 3;
          param_1[1] = lVar21;
          bVar15 = true;
          bVar29 = true;
          goto LAB_101256420;
        case 9:
          pbVar22 = (byte *)(ulong)uStack_2b4;
        case 0x70:
        case 0xa6:
          uVar14 = (int)pbVar22 == 2;
code_r0x000101255ea0:
          if (!(bool)uVar14) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            uStack_250 = &UNK_108c520ac;
            pbStack_248 = (byte *)0x4;
            uStack_d0 = (byte *)&uStack_250;
            pbStack_c8 = &DAT_100c7b3a0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
            goto LAB_101257294;
          }
code_r0x000101255ea4:
          pbVar22 = (byte *)(ulong)bStack_220;
          bStack_220 = 0x16;
          if (bVar10 == 0x16) goto code_r0x0001012570e8;
code_r0x000101255eb4:
          pbVar18 = (byte *)puVar27[1];
          pbVar32 = (byte *)*puVar27;
          pbVar24 = pbVar26;
code_r0x000101255ebc:
          *(byte **)(pbVar24 + 8) = pbVar18;
          *(byte **)pbVar24 = pbVar32;
          pbVar18 = *(byte **)((long)puVar27 + 0x17);
          pbVar32 = *(byte **)((long)puVar27 + 0xf);
code_r0x000101255ec4:
          *(byte **)(pbVar24 + 0x17) = pbVar18;
          *(byte **)(pbVar24 + 0xf) = pbVar32;
          uStack_250 = (byte *)CONCAT71(uStack_250._1_7_,(char)pbVar22);
          uVar14 = (int)pbVar22 == 0x10;
code_r0x000101255ed0:
          if (!(bool)uVar14) {
            uVar14 = (int)pbVar22 == 0x11;
code_r0x000101255ed8:
            if (!(bool)uVar14) {
              uVar14 = (int)pbVar22 == 0x12;
code_r0x000101255ee0:
              if (!(bool)uVar14) {
                puVar16 = &uStack_d0;
                puVar19 = &uStack_250;
code_r0x0001012561d8:
                func_0x000100bda2e8(puVar16,puVar19);
                if ((short)uStack_d0 != 1) {
code_r0x0001012561e8:
                  pbVar22 = (byte *)((ulong)uStack_d0 >> 0x10 & 0xffffffff);
code_r0x0001012561f0:
                  uStack_314 = SUB84(pbVar22,0);
                  goto code_r0x000101255cac;
                }
                pbStack_1e0 = pbVar37 + 1;
                pbVar32 = pbStack_c8;
                pbStack_1f8 = pbVar31;
                goto code_r0x000101256a30;
              }
              goto code_r0x000101255ee4;
            }
code_r0x0001012561a0:
            pbVar34 = pbStack_248;
code_r0x0001012561a4:
            pbVar18 = *(byte **)(pbVar34 + 8);
            pbVar32 = *(byte **)pbVar34;
code_r0x0001012561a8:
            pbStack_b8 = *(byte **)(pbVar34 + 0x18);
            pbStack_c0 = *(byte **)(pbVar34 + 0x10);
            puVar16 = &uStack_98;
            pbVar17 = pbVar32;
            pbStack_c8 = pbVar18;
code_r0x0001012561b8:
            uStack_d0 = pbVar17;
            func_0x000100bda2e8(puVar16,&uStack_d0);
code_r0x0001012561c0:
            uVar14 = (short)uStack_98 == 1;
code_r0x0001012561c8:
            pbVar32 = pbStack_90;
            if (!(bool)uVar14) {
              uStack_314 = uStack_98._2_4_;
              _free(pbVar34);
code_r0x000101255cac:
              uStack_2b4 = 1;
              goto code_r0x000101255cb4;
            }
            pbStack_1e0 = pbVar37 + 1;
            pbStack_1f8 = pbVar31;
            _free(pbVar34);
code_r0x000101256a30:
            param_1[1] = (long)pbVar32;
            goto code_r0x000101256a5c;
          }
code_r0x000101255ee4:
          FUN_100e077ec(&uStack_250);
          uStack_2b4 = 0;
code_r0x000101255ef0:
          goto code_r0x000101255cb4;
        case 10:
          bStack_220 = 0x16;
          if (bVar10 != 0x16) {
            uVar39 = *puVar27;
            puVar30[1] = puVar27[1];
            *puVar30 = uVar39;
            uVar39 = *(undefined8 *)((long)puVar27 + 0xf);
            *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
            *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
            uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar10);
            FUN_100e077ec(&uStack_d0);
            goto code_r0x000101256140;
          }
          goto code_r0x0001012570e8;
        case 0xc:
          goto code_r0x000101256024;
        case 0xd:
        case 0xf:
        case 0x11:
        case 0x13:
        case 0x15:
        case 0x17:
        case 0x19:
        case 0x1b:
        case 0x1d:
        case 0x1f:
        case 0x21:
        case 0x23:
        case 0x25:
        case 0x27:
        case 0x29:
        case 0x2b:
        case 0x2d:
        case 0x31:
          goto code_r0x000101255df8;
        case 0xe:
        case 0xbc:
          goto code_r0x000101256030;
        case 0x10:
          goto code_r0x000101255ffc;
        case 0x12:
        case 0xb2:
          goto code_r0x000101256014;
        case 0x14:
          goto code_r0x000101255fd4;
        case 0x16:
          goto code_r0x000101256040;
        case 0x18:
        case 0xf2:
          goto code_r0x000101256058;
        case 0x1a:
        case 0xc2:
          goto code_r0x00010125601c;
        case 0x1e:
        case 0x62:
          goto code_r0x000101255ff0;
        case 0x20:
          goto code_r0x000101256060;
        case 0x22:
        case 0x48:
          goto code_r0x000101255fc8;
        case 0x24:
        case 0x75:
          goto code_r0x000101255fdc;
        case 0x26:
          goto code_r0x000101256048;
        case 0x28:
          goto code_r0x000101255fb4;
        case 0x30:
        case 0x7a:
          goto code_r0x000101256094;
        case 0x32:
          goto code_r0x000101256180;
        case 0x34:
          goto code_r0x0001012561a4;
        case 0x36:
        case 0x8e:
        case 0xe4:
          goto code_r0x000101255e18;
        case 0x39:
          goto code_r0x000101255f10;
        case 0x3a:
          goto code_r0x000101255ee0;
        case 0x3b:
          goto code_r0x000101255ef0;
        case 0x3d:
          goto code_r0x000101255f20;
        case 0x3e:
        case 0x68:
          goto code_r0x000101255f40;
        case 0x3f:
          goto code_r0x000101255f00;
        case 0x41:
          goto code_r0x000101255ed0;
        case 0x42:
          goto code_r0x000101255f50;
        case 0x43:
          goto code_r0x000101255e40;
        case 0x44:
        case 0xdd:
          goto code_r0x000101255e60;
        case 0x45:
          goto code_r0x000101255f30;
        case 0x46:
        case 0xeb:
        case 0xed:
        case 0xef:
        case 0xf1:
        case 0xf3:
        case 0xf5:
        case 0xf7:
        case 0xf9:
        case 0xfb:
        case 0xfd:
        case 0xff:
          goto code_r0x000101255e04;
        case 0x49:
        case 0x4b:
        case 0x4d:
        case 0x4f:
        case 0x51:
        case 0x53:
        case 0x55:
        case 0x57:
        case 0x59:
        case 0x5b:
        case 0x5d:
        case 0x5f:
        case 0x61:
        case 99:
        case 0x65:
        case 0x67:
        case 0x69:
        case 0x6d:
        case 0x8a:
        case 0x8b:
        case 0x8f:
        case 0x93:
        case 0xa3:
          goto code_r0x000101255e00;
        case 0x4a:
          goto code_r0x000101255fd8;
        case 0x4c:
          goto code_r0x000101255fa0;
        case 0x4e:
          goto code_r0x000101255fb8;
        case 0x50:
          goto code_r0x000101255f74;
        case 0x52:
          goto code_r0x000101255fe8;
        case 0x54:
          goto code_r0x000101256000;
        case 0x56:
          goto code_r0x000101255fc0;
        case 0x58:
          goto code_r0x000101256018;
        case 0x5a:
          goto code_r0x000101255f94;
        case 0x60:
          goto code_r0x000101255f7c;
        case 100:
          goto code_r0x000101255f48;
        case 0x6c:
        case 0xaa:
          goto code_r0x000101256064;
        case 0x6e:
        case 0xa4:
          goto code_r0x000101255e70;
        case 0x72:
        case 0xa8:
          goto code_r0x000101255e1c;
        case 0x76:
          goto code_r0x000101255ed8;
        case 0x77:
          goto code_r0x000101255f2c;
        case 0x78:
          goto code_r0x000101255e4c;
        case 0x79:
          goto code_r0x000101256034;
        case 0x7b:
          goto code_r0x000101255f84;
        case 0x7c:
        case 0xfe:
          goto code_r0x0001012560ec;
        case 0x7d:
          goto code_r0x000101255ea4;
        case 0x7e:
          goto code_r0x0001012561c8;
        default:
          goto code_r0x000101255dfc;
        case 0x80:
          goto code_r0x0001012561d8;
        case 0x82:
          goto code_r0x0001012561a0;
        case 0x84:
          goto code_r0x0001012561b8;
        case 0x86:
          goto code_r0x000101256174;
        case 0x88:
          goto code_r0x0001012561e8;
        case 0x8c:
          goto code_r0x0001012561c0;
        case 0x90:
          goto code_r0x000101256194;
        case 0x92:
          goto code_r0x000101255e08;
        case 0x94:
          goto code_r0x000101256160;
        case 0x96:
          goto code_r0x00010125617c;
        case 0x98:
          goto code_r0x0001012561f0;
        case 0x9c:
          goto code_r0x0001012561a8;
        case 0x9e:
code_r0x000101256140:
          goto code_r0x000101255cb4;
        case 0xa2:
          goto code_r0x000101255e64;
        case 0xae:
          goto code_r0x00010125603c;
        case 0xb0:
          goto code_r0x000101256054;
        case 0xb4:
          goto code_r0x000101256088;
        case 0xb6:
          goto code_r0x0001012560a0;
        case 0xb8:
          goto code_r0x00010125605c;
        case 0xbe:
          goto code_r0x0001012560a8;
        case 0xc4:
          goto code_r0x000101256090;
        case 0xc6:
          goto code_r0x000101255ff4;
        case 200:
          goto code_r0x000101256044;
        case 0xca:
          goto code_r0x000101255fec;
        case 0xce:
          goto code_r0x0001012560d4;
        case 0xd0:
code_r0x000101255f6c:
          pbVar22 = (byte *)(ulong)bStack_220;
          bStack_220 = 0x16;
code_r0x000101255f74:
          if ((int)pbVar22 == 0x16) goto code_r0x0001012570e8;
code_r0x000101255f7c:
          uVar39 = *puVar27;
          puVar30[1] = puVar27[1];
          *puVar30 = uVar39;
code_r0x000101255f84:
          uVar39 = *(undefined8 *)((long)puVar27 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,(char)pbVar22);
code_r0x000101255f90:
          if ((int)pbVar22 != 0) {
            pbStack_1e0 = pbVar37 + 1;
            pbStack_118 = pbStack_2d8;
            pbStack_110 = pbStack_298;
            pbStack_108 = pbStack_290;
            pbStack_120 = pbStack_2d0;
            pbStack_1f8 = pbVar31;
            pbStack_128 = pbVar33;
            lVar21 = FUN_108855b04(&uStack_d0,auStack_71,&UNK_10b20a560);
            goto LAB_101257294;
          }
code_r0x000101255f94:
          puVar16 = &uStack_d0;
          bVar4 = uStack_d0._1_1_;
code_r0x000101255fa0:
          FUN_100e077ec(puVar16);
          goto code_r0x000101255cb4;
        case 0xd2:
          goto code_r0x000101255f90;
        case 0xd7:
        case 0xe1:
          goto code_r0x000101255e6c;
        case 0xd8:
          goto code_r0x000101255e3c;
        case 0xda:
          goto code_r0x000101255e28;
        case 0xdb:
          goto code_r0x000101255e90;
        case 0xdc:
          goto code_r0x000101255ebc;
        case 0xde:
        case 0xe8:
          goto code_r0x000101255ec4;
        case 0xdf:
          goto code_r0x000101255e34;
        case 0xe2:
          goto code_r0x000101255e48;
        case 0xe5:
          goto code_r0x000101255ea0;
        case 0xe6:
          goto code_r0x000101255eb4;
        case 0xe9:
          goto code_r0x000101255e24;
        case 0xea:
          goto code_r0x0001012560ac;
        case 0xee:
          goto code_r0x000101256084;
        case 0xf0:
          goto code_r0x00010125609c;
        case 0xf4:
          goto code_r0x0001012560cc;
        case 0xf6:
          goto code_r0x0001012560e4;
        case 0xf8:
          goto code_r0x0001012560a4;
        case 0xfa:
          goto code_r0x0001012560fc;
        }
      }
      goto LAB_1012563a0;
    }
    pbStack_268 = (byte *)0x0;
    pbStack_110 = (byte *)0x0;
    pbStack_128 = (byte *)0x8000000000000000;
    pbStack_278 = (byte *)0x0;
    pbStack_260 = (byte *)0x0;
    goto LAB_1012563d4;
  }
  pbStack_240 = *(byte **)(param_2 + 8);
  pbVar35 = *(byte **)(param_2 + 0x10);
  lVar21 = *(long *)(param_2 + 0x18);
  pbVar37 = pbVar35 + lVar21 * 0x20;
  lStack_230 = 0;
  pbVar32 = pbVar35;
  uStack_250 = pbVar35;
  pbStack_238 = pbVar37;
  if (lVar21 == 0) {
LAB_101255bf4:
    pbStack_248 = pbVar32;
    pbVar26 = (byte *)FUN_1087e422c(0,&UNK_10b231df8,&UNK_10b20a590);
LAB_101255c10:
    *param_1 = 3;
    param_1[1] = (long)pbVar26;
  }
  else {
    pbVar32 = pbVar35 + 0x20;
    if (*pbVar35 == 0x16) goto LAB_101255bf4;
    uVar39 = *(undefined8 *)(pbVar35 + 1);
    uStack_217 = (undefined7)*(undefined8 *)(pbVar35 + 9);
    uStack_21f = (undefined1)uVar39;
    sStack_21e = (short)((ulong)uVar39 >> 8);
    uStack_21c = (undefined4)((ulong)uVar39 >> 0x18);
    uStack_218 = (undefined1)((ulong)uVar39 >> 0x38);
    pbStack_208 = *(byte **)(pbVar35 + 0x18);
    uStack_210 = (undefined1)*(undefined8 *)(pbVar35 + 0x10);
    uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar35 + 0x10) >> 8);
    lStack_230 = 1;
    pbStack_248 = pbVar32;
    bStack_220 = *pbVar35;
    FUN_1004b5b34(&uStack_d0,&bStack_220);
    pbVar18 = pbStack_c0;
    pbVar26 = pbStack_c8;
    pbVar33 = uStack_d0;
    if (uStack_d0 == (byte *)0x8000000000000000) goto LAB_101255c10;
    uStack_98 = uStack_d0;
    pbStack_90 = pbStack_c8;
    pbStack_88 = pbStack_c0;
    if (lVar21 == 1) {
LAB_101255ba0:
      pbVar32 = (byte *)FUN_1087e422c(1,&UNK_10b231df8,&UNK_10b20a590);
LAB_101255bbc:
      *param_1 = 3;
      param_1[1] = (long)pbVar32;
    }
    else {
      pbStack_248 = pbVar35 + 0x40;
      if (pbVar35[0x20] == 0x16) goto LAB_101255ba0;
      uVar39 = *(undefined8 *)(pbVar35 + 0x21);
      uStack_217 = (undefined7)*(undefined8 *)(pbVar35 + 0x29);
      uStack_21f = (undefined1)uVar39;
      sStack_21e = (short)((ulong)uVar39 >> 8);
      uStack_21c = (undefined4)((ulong)uVar39 >> 0x18);
      uStack_218 = (undefined1)((ulong)uVar39 >> 0x38);
      pbStack_208 = *(byte **)(pbVar35 + 0x38);
      uStack_210 = (undefined1)*(undefined8 *)(pbVar35 + 0x30);
      uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar35 + 0x30) >> 8);
      lStack_230 = 2;
      bStack_220 = pbVar35[0x20];
      FUN_1004b62d4(&uStack_d0,&bStack_220);
      pbVar31 = pbStack_c0;
      pbVar32 = pbStack_c8;
      pbVar24 = uStack_d0;
      if (uStack_d0 == (byte *)0x8000000000000000) goto LAB_101255bbc;
      if (lVar21 == 2) {
LAB_1012566d0:
        pbVar17 = (byte *)FUN_1087e422c(2,&UNK_10b231df8,&UNK_10b20a590);
LAB_1012566e8:
        *param_1 = 3;
        param_1[1] = (long)pbVar17;
      }
      else {
        pbVar38 = pbVar35 + 0x60;
        pbStack_248 = pbVar38;
        if (pbVar35[0x40] == 0x16) goto LAB_1012566d0;
        uVar39 = *(undefined8 *)(pbVar35 + 0x41);
        uStack_217 = (undefined7)*(undefined8 *)(pbVar35 + 0x49);
        uStack_21f = (undefined1)uVar39;
        sStack_21e = (short)((ulong)uVar39 >> 8);
        uStack_21c = (undefined4)((ulong)uVar39 >> 0x18);
        uStack_218 = (undefined1)((ulong)uVar39 >> 0x38);
        pbStack_208 = *(byte **)(pbVar35 + 0x58);
        uStack_210 = (undefined1)*(undefined8 *)(pbVar35 + 0x50);
        uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar35 + 0x50) >> 8);
        lStack_230 = 3;
        bStack_220 = pbVar35[0x40];
        FUN_1014a868c(&uStack_d0,&bStack_220);
        pbVar12 = pbStack_c0;
        pbVar17 = pbStack_c8;
        pbVar34 = uStack_d0;
        if (uStack_d0 == (byte *)0x8000000000000000) goto LAB_1012566e8;
        if (lVar21 == 3) {
          uVar14 = 0;
          lVar21 = 3;
LAB_101256ad4:
          if (pbVar38 == pbVar37) {
            uVar8 = 0;
            uVar36 = 0;
          }
          else {
            pbVar35 = pbVar38 + 0x20;
            bVar4 = *pbVar38;
            pbStack_248 = pbVar35;
            if (bVar4 == 0x16) {
              uVar8 = 0;
            }
            else {
              uVar39 = *(undefined8 *)(pbVar38 + 1);
              uStack_217 = (undefined7)*(undefined8 *)(pbVar38 + 9);
              uStack_21f = (undefined1)uVar39;
              uVar8 = uStack_21f;
              sStack_21e = (short)((ulong)uVar39 >> 8);
              uStack_21c = (undefined4)((ulong)uVar39 >> 0x18);
              uStack_218 = (undefined1)((ulong)uVar39 >> 0x38);
              pbStack_208 = *(byte **)(pbVar38 + 0x18);
              uStack_210 = (undefined1)*(undefined8 *)(pbVar38 + 0x10);
              uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar38 + 0x10) >> 8);
              lVar21 = lVar21 + 1;
              lStack_230 = lVar21;
              bStack_220 = bVar4;
              if (bVar4 != 0) {
                lVar21 = FUN_108855b04(&bStack_220,auStack_71,&UNK_10b20a560);
                goto LAB_10125740c;
              }
              FUN_100e077ec(&bStack_220);
            }
            if (pbVar35 != pbVar37) {
              pbStack_248 = pbVar38 + 0x40;
              bVar4 = pbVar38[0x20];
              if (bVar4 != 0x16) {
                uVar39 = *(undefined8 *)(pbVar38 + 0x21);
                uStack_217 = (undefined7)*(undefined8 *)(pbVar38 + 0x29);
                uStack_21f = (undefined1)uVar39;
                uVar36 = uStack_21f;
                sStack_21e = (short)((ulong)uVar39 >> 8);
                uStack_21c = (undefined4)((ulong)uVar39 >> 0x18);
                uStack_218 = (undefined1)((ulong)uVar39 >> 0x38);
                pbStack_208 = *(byte **)(pbVar38 + 0x38);
                uStack_210 = (undefined1)*(undefined8 *)(pbVar38 + 0x30);
                uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar38 + 0x30) >> 8);
                lStack_230 = lVar21 + 1;
                bStack_220 = bVar4;
                if (bVar4 != 0) {
                  lVar21 = FUN_108855b04(&bStack_220,auStack_71,&UNK_10b20a560);
                  goto LAB_10125740c;
                }
                FUN_100e077ec(&bStack_220);
                goto LAB_101256bac;
              }
            }
            uVar36 = 0;
          }
LAB_101256bac:
          FUN_100f2b1c0(&bStack_220,&uStack_250);
          lVar21 = CONCAT44(uStack_21c,CONCAT22(sStack_21e,CONCAT11(uStack_21f,bStack_220)));
          lVar6 = CONCAT71(uStack_217,uStack_218);
          if (lVar21 == 4) {
            param_1[1] = lVar6;
            goto LAB_101256c34;
          }
          lVar2 = 2;
          if (lVar21 != 3) {
            lVar2 = lVar21;
          }
          FUN_100f2bbcc(&bStack_220,&uStack_250);
          lVar21 = CONCAT44(uStack_21c,CONCAT22(sStack_21e,CONCAT11(uStack_21f,bStack_220)));
          lVar7 = CONCAT71(uStack_217,uStack_218);
          if (lVar21 == 4) {
            param_1[1] = lVar7;
            goto LAB_101256c34;
          }
          lVar3 = 2;
          if (lVar21 != 3) {
            lVar3 = lVar21;
          }
          FUN_100f30318(&bStack_220,&uStack_250);
          pbVar37 = (byte *)CONCAT71(uStack_217,uStack_218);
          if (CONCAT44(uStack_21c,CONCAT22(sStack_21e,CONCAT11(uStack_21f,bStack_220))) == 2) {
LAB_101256c2c:
            param_1[1] = (long)pbVar37;
            goto LAB_101256c34;
          }
          pbStack_110 = (byte *)CONCAT71(uStack_20f,uStack_210);
          pbStack_108 = pbStack_208;
          pbStack_f8 = pbStack_1f8;
          pbStack_100 = pbStack_200;
          pbStack_f0 = pbStack_1f0;
          if ((bStack_220 & 1) == 0) {
            pbVar37 = (byte *)FUN_1087e422c(8,&UNK_10b231df8,&UNK_10b20a590);
            goto LAB_101256c2c;
          }
          pbStack_c0 = pbStack_208;
          pbStack_b0 = pbStack_1f8;
          pbStack_b8 = pbStack_200;
          pbStack_a8 = pbStack_1f0;
          uStack_d0 = pbVar37;
          pbStack_c8 = pbStack_110;
          FUN_100f2aa40(&bStack_220,&uStack_250);
          if (CONCAT11(uStack_21f,bStack_220) == 1) {
            lVar21 = CONCAT71(uStack_217,uStack_218);
          }
          else {
            if (sStack_21e != 2) {
              param_1[5] = (long)pbStack_90;
              param_1[4] = (long)uStack_98;
              param_1[0xe] = (long)pbStack_c8;
              param_1[0xd] = (long)uStack_d0;
              param_1[0x10] = (long)pbStack_b8;
              param_1[0xf] = (long)pbStack_c0;
              param_1[0x12] = (long)pbStack_a8;
              param_1[0x11] = (long)pbStack_b0;
              *param_1 = lVar2;
              param_1[1] = lVar6;
              param_1[2] = lVar3;
              param_1[3] = lVar7;
              param_1[6] = (long)pbStack_88;
              param_1[7] = (long)pbVar24;
              param_1[8] = (long)pbVar32;
              param_1[9] = (long)pbVar31;
              param_1[10] = (long)pbVar34;
              param_1[0xb] = (long)pbVar17;
              param_1[0xc] = (long)pbVar12;
              *(short *)(param_1 + 0x13) = sStack_21e;
              *(undefined4 *)((long)param_1 + 0x9a) = uStack_21c;
              *(undefined1 *)((long)param_1 + 0x9e) = uVar14;
              *(undefined1 *)((long)param_1 + 0x9f) = uVar8;
              *(undefined1 *)(param_1 + 0x14) = uVar36;
              lStack_130 = param_1[0x14];
              lStack_148 = param_1[0x11];
              lStack_150 = param_1[0x10];
              lStack_138 = param_1[0x13];
              lStack_140 = param_1[0x12];
              lStack_168 = param_1[0xd];
              lStack_170 = param_1[0xc];
              lStack_158 = param_1[0xf];
              lStack_160 = param_1[0xe];
              lStack_188 = param_1[9];
              lStack_190 = param_1[8];
              lStack_178 = param_1[0xb];
              lStack_180 = param_1[10];
              lStack_1a8 = param_1[5];
              lStack_1b0 = param_1[4];
              lStack_198 = param_1[7];
              lStack_1a0 = param_1[6];
              lStack_1c8 = param_1[1];
              lStack_1d0 = *param_1;
              lStack_1b8 = param_1[3];
              lStack_1c0 = param_1[2];
              lVar21 = FUN_100fbc738(&uStack_250);
              if (lVar21 == 0) {
                return;
              }
              *param_1 = 3;
              param_1[1] = lVar21;
              FUN_100e659a4(&lStack_1d0);
              return;
            }
            lVar21 = FUN_1087e422c(9,&UNK_10b231df8,&UNK_10b20a590);
          }
          *param_1 = 3;
          param_1[1] = lVar21;
          if (pbVar37 != (byte *)0x0) {
            func_0x000100d12d04(&uStack_d0);
          }
        }
        else {
          pbVar38 = pbVar35 + 0x80;
          bVar4 = pbVar35[0x60];
          pbStack_248 = pbVar38;
          if (bVar4 == 0x16) {
            uVar14 = 0;
            lVar21 = 3;
            goto LAB_101256ad4;
          }
          uVar39 = *(undefined8 *)(pbVar35 + 0x61);
          uStack_217 = (undefined7)*(undefined8 *)(pbVar35 + 0x69);
          uStack_21f = (undefined1)uVar39;
          uVar14 = uStack_21f;
          sStack_21e = (short)((ulong)uVar39 >> 8);
          uStack_21c = (undefined4)((ulong)uVar39 >> 0x18);
          uStack_218 = (undefined1)((ulong)uVar39 >> 0x38);
          pbStack_208 = *(byte **)(pbVar35 + 0x78);
          uStack_210 = (undefined1)*(undefined8 *)(pbVar35 + 0x70);
          uStack_20f = (undefined7)((ulong)*(undefined8 *)(pbVar35 + 0x70) >> 8);
          lStack_230 = 4;
          bStack_220 = bVar4;
          if (bVar4 == 0) {
            FUN_100e077ec(&bStack_220);
            lVar21 = 4;
            goto LAB_101256ad4;
          }
          lVar21 = FUN_108855b04(&bStack_220,auStack_71,&UNK_10b20a560);
LAB_10125740c:
          param_1[1] = lVar21;
LAB_101256c34:
          *param_1 = 3;
        }
        if (pbVar34 != (byte *)0x0) {
          _free(pbVar17);
        }
      }
      if (pbVar24 != (byte *)0x0) {
        _free(pbVar32);
      }
    }
    if (pbVar18 != (byte *)0x0) {
      pbVar37 = pbVar26 + 8;
      do {
        if (*(long *)(pbVar37 + -8) != 0) {
          _free(*(undefined8 *)pbVar37);
        }
        pbVar37 = pbVar37 + 0x18;
        pbVar18 = pbVar18 + -1;
      } while (pbVar18 != (byte *)0x0);
    }
    pbVar32 = pbStack_248;
    pbVar37 = pbStack_238;
    if (pbVar33 != (byte *)0x0) {
      _free(pbVar26);
      pbVar32 = pbStack_248;
      pbVar37 = pbStack_238;
    }
  }
  lVar21 = ((ulong)((long)pbVar37 - (long)pbVar32) >> 5) + 1;
  while (lVar21 = lVar21 + -1, lVar21 != 0) {
    FUN_100e077ec(pbVar32);
    pbVar32 = pbVar32 + 0x20;
  }
  if (pbStack_240 != (byte *)0x0) {
    _free(uStack_250);
    return;
  }
  goto LAB_101256500;
code_r0x000101255df4:
  pbVar22 = (byte *)0x8000000000000000;
code_r0x000101255df8:
  uVar14 = pbVar33 == pbVar22;
code_r0x000101255dfc:
  if (!(bool)uVar14) {
    pbStack_1e0 = pbVar37 + 1;
    pbStack_118 = pbStack_2d8;
    pbStack_110 = pbStack_298;
    pbStack_108 = pbStack_290;
    pbStack_120 = pbStack_2d0;
    uStack_250 = &UNK_108ca281e;
    pbStack_248 = (byte *)0x7;
    uStack_d0 = (byte *)&uStack_250;
    pbStack_c8 = &DAT_100c7b3a0;
    pbStack_1f8 = pbVar31;
    pbStack_128 = pbVar33;
    lVar21 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
LAB_101257294:
    pbVar24 = pbVar37 + 1;
    *param_1 = 3;
    param_1[1] = lVar21;
    bVar15 = true;
    bVar29 = true;
    bVar28 = true;
    goto joined_r0x0001012568c8;
  }
code_r0x000101255e00:
  pbVar22 = (byte *)(ulong)bStack_220;
code_r0x000101255e04:
  bStack_220 = 0x16;
code_r0x000101255e08:
  bVar20 = (byte)pbVar22;
  if ((int)pbVar22 == 0x16) {
    pbVar33 = (byte *)0x8000000000000000;
code_r0x0001012570e8:
    pbStack_1e0 = pbVar37 + 1;
    pbStack_118 = pbStack_2d8;
    pbStack_110 = pbStack_298;
    pbStack_108 = pbStack_290;
    pbStack_120 = pbStack_2d0;
    pbStack_1f8 = pbVar31;
    pbStack_128 = pbVar33;
    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001012571c8:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1012571cc);
    (*pcVar13)();
  }
  uVar39 = *puVar27;
  puVar30[1] = puVar27[1];
  *puVar30 = uVar39;
code_r0x000101255e18:
  pbVar18 = *(byte **)((long)puVar27 + 0x17);
  pbVar32 = *(byte **)((long)puVar27 + 0xf);
code_r0x000101255e1c:
  *(byte **)((long)puVar30 + 0x17) = pbVar18;
  *(byte **)((long)puVar30 + 0xf) = pbVar32;
  uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar20);
code_r0x000101255e24:
code_r0x000101255e28:
  FUN_1004b5b34(&uStack_250,&uStack_d0);
code_r0x000101255e34:
  pbVar24 = (byte *)0x8000000000000000;
  pbVar22 = pbStack_248;
  pbVar33 = uStack_250;
code_r0x000101255e3c:
  uVar14 = pbVar33 == pbVar24;
code_r0x000101255e40:
  pbVar24 = pbStack_240;
  if ((bool)uVar14) {
    pbStack_128 = (byte *)0x8000000000000000;
    pbVar25 = pbStack_260;
    pbVar33 = pbStack_128;
code_r0x000101256900:
    pbStack_128 = pbVar33;
    pbStack_260 = pbVar25;
    pbStack_1e0 = pbVar37 + 1;
    *param_1 = 3;
    param_1[1] = (long)pbVar22;
    pbStack_1f8 = pbVar31;
    pbVar33 = pbStack_128;
joined_r0x0001012568c8:
    bVar15 = true;
    bVar28 = true;
    bVar29 = true;
    pbVar24 = pbVar37 + 1;
    pbStack_118 = pbStack_2d8;
    pbStack_110 = pbStack_298;
    pbStack_108 = pbStack_290;
    pbStack_120 = pbStack_2d0;
    pbStack_128 = pbVar33;
    goto joined_r0x0001012568c8;
  }
code_r0x000101255e48:
  pbStack_2d8 = pbVar24;
  pbStack_2d0 = pbVar22;
code_r0x000101255e4c:
code_r0x000101255cb4:
  pbVar37 = pbVar37 + 1;
  pbVar32 = pbVar35;
  pbVar24 = (byte *)((lVar21 - 0x40U >> 6) + 1);
  pbVar18 = pbVar31;
  if (pbVar31 == pbVar35) goto LAB_1012563a0;
  goto LAB_101255ccc;
LAB_1012563a0:
  pbStack_118 = pbStack_2d8;
  pbStack_110 = pbStack_298;
  pbStack_108 = pbStack_290;
  pbStack_120 = pbStack_2d0;
  pbStack_1e0 = pbVar24;
  pbStack_128 = pbVar33;
  if (pbVar33 == (byte *)0x8000000000000000) {
LAB_1012563d4:
    pbVar24 = pbStack_1e0;
    uStack_98 = &UNK_108ca281e;
    pbStack_90 = (byte *)0x7;
    uStack_d0 = (byte *)&uStack_98;
    pbStack_c8 = &DAT_100c7b3a0;
    pbStack_1f8 = pbVar32;
    lVar21 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
    *param_1 = 3;
    param_1[1] = lVar21;
    bVar29 = true;
    bVar28 = true;
    bVar15 = true;
    pbVar31 = pbVar32;
joined_r0x0001012568c8:
    if (pbStack_268 != (byte *)0x0) {
LAB_101256420:
      bVar28 = bVar29;
      if (pbStack_290 != (byte *)0x0) {
        func_0x000100d12d04(&pbStack_108);
      }
    }
LAB_101256434:
    if (((ulong)pbStack_260 & 0x7fffffffffffffff) == 0) {
      bVar29 = false;
      if (((ulong)pbStack_278 & 0x7fffffffffffffff) != 0) {
        bVar29 = bVar15;
      }
      if (bVar29) goto LAB_10125644c;
LAB_101256480:
      bVar15 = false;
      if (pbStack_128 != (byte *)0x8000000000000000) {
        bVar15 = bVar28;
      }
      if (bVar15) goto LAB_101256494;
    }
    else {
      _free(pbStack_2e8);
      bVar29 = false;
      if (((ulong)pbStack_278 & 0x7fffffffffffffff) != 0) {
        bVar29 = bVar15;
      }
      if (!bVar29) goto LAB_101256480;
LAB_10125644c:
      _free(pbStack_2e0);
      bVar15 = false;
      if (pbStack_128 != (byte *)0x8000000000000000) {
        bVar15 = bVar28;
      }
      if (bVar15) {
LAB_101256494:
        pbVar32 = pbStack_120;
        pbVar37 = pbStack_128;
        if (pbStack_118 != (byte *)0x0) {
          pbVar18 = pbStack_120 + 8;
          pbVar33 = pbStack_118;
          do {
            if (*(long *)(pbVar18 + -8) != 0) {
              _free(*(undefined8 *)pbVar18);
            }
            pbVar18 = pbVar18 + 0x18;
            pbVar33 = pbVar33 + -1;
          } while (pbVar33 != (byte *)0x0);
        }
        if (pbVar37 != (byte *)0x0) {
          _free(pbVar32);
        }
      }
    }
    lVar21 = *param_1;
  }
  else {
    pbStack_248 = pbStack_2d0;
    pbStack_240 = pbStack_2d8;
    bVar15 = pbStack_278 == (byte *)0x8000000000000000;
    uStack_250 = pbVar33;
    pbStack_1f8 = pbVar32;
    pbVar31 = pbVar32;
    if (bVar15) {
      uStack_98 = &UNK_108cc0902;
      pbStack_90 = (byte *)0xd;
      uStack_d0 = (byte *)&uStack_98;
      pbStack_c8 = &DAT_100c7b3a0;
      lVar21 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
      *param_1 = 3;
      param_1[1] = lVar21;
LAB_1012565e0:
      pbVar37 = pbStack_248;
      if (pbStack_240 != (byte *)0x0) {
        pbVar32 = pbStack_248 + 8;
        pbVar18 = pbStack_240;
        do {
          if (*(long *)(pbVar32 + -8) != 0) {
            _free(*(undefined8 *)pbVar32);
          }
          pbVar32 = pbVar32 + 0x18;
          pbVar18 = pbVar18 + -1;
        } while (pbVar18 != (byte *)0x0);
      }
      if (uStack_250 != (byte *)0x0) {
        _free(pbVar37);
      }
      bVar29 = false;
      bVar28 = false;
      goto joined_r0x0001012568c8;
    }
    if (pbStack_260 == (byte *)0x8000000000000000) {
      uStack_98 = &UNK_108ca1f1d;
      pbStack_90 = (byte *)0x3;
      uStack_d0 = (byte *)&uStack_98;
      pbStack_c8 = &DAT_100c7b3a0;
      lVar21 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
      *param_1 = 3;
      param_1[1] = lVar21;
      if (pbStack_278 != (byte *)0x0) {
        _free(pbStack_2e0);
      }
      goto LAB_1012565e0;
    }
    pbVar37 = (byte *)0x2;
    if (pbStack_2b0 != (byte *)0x3) {
      pbVar37 = pbStack_2b0;
    }
    pbVar32 = (byte *)0x2;
    if (pbStack_2c0 != (byte *)0x3) {
      pbVar32 = pbStack_2c0;
    }
    if (pbStack_268 == (byte *)0x0) {
      pbVar18 = (byte *)0x0;
    }
    else {
      pbStack_c8 = pbStack_f8;
      uStack_d0 = pbStack_100;
      pbStack_b8 = pbStack_e8;
      pbStack_c0 = pbStack_f0;
      pbStack_b0 = pbStack_e0;
      pbVar18 = pbStack_290;
    }
    uVar1 = 0;
    if (uStack_2b4 != 2) {
      uVar1 = (undefined2)uStack_2b4;
    }
    param_1[5] = (long)pbStack_2d0;
    param_1[4] = (long)pbVar33;
    *param_1 = (long)pbVar37;
    param_1[1] = lStack_308;
    param_1[2] = (long)pbVar32;
    param_1[3] = lStack_310;
    param_1[6] = (long)pbStack_2d8;
    param_1[7] = (long)pbStack_278;
    param_1[8] = (long)pbStack_2e0;
    param_1[9] = (long)pbStack_2f8;
    param_1[10] = (long)pbStack_260;
    param_1[0xb] = (long)pbStack_2e8;
    param_1[0xc] = (long)pbStack_300;
    param_1[0xd] = (long)pbVar18;
    param_1[0x12] = (long)pbStack_b0;
    param_1[0xf] = (long)pbStack_c8;
    param_1[0xe] = (long)uStack_d0;
    param_1[0x11] = (long)pbStack_b8;
    param_1[0x10] = (long)pbStack_c0;
    *(undefined2 *)(param_1 + 0x13) = uVar1;
    *(undefined4 *)((long)param_1 + 0x9a) = uStack_314;
    *(byte *)((long)param_1 + 0x9e) = bVar4 & 1;
    *(byte *)((long)param_1 + 0x9f) = bVar9 & 1;
    *(byte *)(param_1 + 0x14) = (byte)iStack_2a8 & 1;
    lVar21 = *param_1;
  }
  if (lVar21 != 3) {
    lStack_148 = param_1[0x11];
    lStack_150 = param_1[0x10];
    lStack_138 = param_1[0x13];
    lStack_140 = param_1[0x12];
    lStack_130 = param_1[0x14];
    lStack_188 = param_1[9];
    lStack_190 = param_1[8];
    lStack_178 = param_1[0xb];
    lStack_180 = param_1[10];
    lStack_168 = param_1[0xd];
    lStack_170 = param_1[0xc];
    lStack_158 = param_1[0xf];
    lStack_160 = param_1[0xe];
    lStack_1c8 = param_1[1];
    lStack_1d0 = *param_1;
    lStack_1b8 = param_1[3];
    lStack_1c0 = param_1[2];
    lStack_1a8 = param_1[5];
    lStack_1b0 = param_1[4];
    lStack_198 = param_1[7];
    lStack_1a0 = param_1[6];
    FUN_100d34830(&pbStack_200);
    if (pbVar35 == pbVar31) {
      lVar21 = 0;
    }
    else {
      uStack_d0 = pbVar24;
      lVar21 = FUN_1087e422c(pbVar24 + ((ulong)((long)pbVar35 - (long)pbVar31) >> 6),&uStack_d0,
                             &UNK_10b23a190);
    }
    if (bStack_220 != 0x16) {
      FUN_100e077ec(&bStack_220);
    }
    if (lVar21 != 0) {
      *param_1 = 3;
      param_1[1] = lVar21;
      FUN_100e659a4(&lStack_1d0);
      return;
    }
    param_1[0x11] = lStack_148;
    param_1[0x10] = lStack_150;
    param_1[0x13] = lStack_138;
    param_1[0x12] = lStack_140;
    param_1[0x14] = lStack_130;
    param_1[9] = lStack_188;
    param_1[8] = lStack_190;
    param_1[0xb] = lStack_178;
    param_1[10] = lStack_180;
    param_1[0xd] = lStack_168;
    param_1[0xc] = lStack_170;
    param_1[0xf] = lStack_158;
    param_1[0xe] = lStack_160;
    param_1[1] = lStack_1c8;
    *param_1 = lStack_1d0;
    param_1[3] = lStack_1b8;
    param_1[2] = lStack_1c0;
    param_1[5] = lStack_1a8;
    param_1[4] = lStack_1b0;
    param_1[7] = lStack_198;
    param_1[6] = lStack_1a0;
    return;
  }
  FUN_100d34830(&pbStack_200);
  if (bStack_220 != 0x16) {
    FUN_100e077ec(&bStack_220);
  }
LAB_101256500:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

