
/* WARNING: Type propagation algorithm not settling */

void FUN_10078cb7c(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char *pcVar22;
  uint *puVar23;
  long lVar24;
  undefined8 uVar25;
  uint *puVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  undefined8 *puVar32;
  uint *puVar33;
  uint *puVar34;
  uint uVar35;
  uint *puVar36;
  uint *extraout_x9;
  byte bVar37;
  uint *puVar38;
  uint *puVar39;
  undefined *puVar40;
  ulong uVar41;
  uint *unaff_x19;
  uint *puVar42;
  uint *puVar43;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *unaff_x25;
  uint *unaff_x26;
  uint *puVar44;
  uint *unaff_x27;
  char cVar45;
  uint *puVar46;
  long unaff_x29;
  float fVar47;
  uint *puVar48;
  uint *puVar49;
  uint *puVar50;
  undefined8 uVar51;
  uint *puVar52;
  uint *puVar53;
  uint *puVar54;
  uint *in_stack_00000008;
  uint *in_stack_00000010;
  uint *in_stack_00000018;
  uint *in_stack_00000020;
  uint *in_stack_00000028;
  uint *in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  byte bStack0000000000000040;
  uint7 uStack0000000000000041;
  byte bStack0000000000000048;
  uint7 uStack0000000000000049;
  undefined1 uStack0000000000000050;
  undefined7 uStack0000000000000051;
  undefined1 uStack0000000000000058;
  undefined7 uStack0000000000000059;
  uint *in_stack_00000080;
  uint *in_stack_00000088;
  uint *in_stack_00000090;
  uint *in_stack_00000098;
  byte bStack00000000000000a0;
  byte bStack00000000000000a1;
  undefined5 uStack00000000000000a2;
  byte bStack00000000000000a7;
  undefined1 uStack00000000000000a8;
  undefined6 uStack00000000000000a9;
  byte bStack00000000000000af;
  undefined1 uStack00000000000000b0;
  undefined6 uStack00000000000000b1;
  undefined1 uStack00000000000000b7;
  undefined7 uStack00000000000000b8;
  undefined1 uStack00000000000000bf;
  undefined7 uStack00000000000000c0;
  undefined1 uStack00000000000000c7;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  byte bStack0000000000000100;
  char cStack0000000000000101;
  undefined6 uStack0000000000000102;
  uint *in_stack_00000108;
  uint *in_stack_00000110;
  undefined8 in_stack_00000118;
  uint *in_stack_00000120;
  uint *in_stack_00000128;
  uint *in_stack_00000130;
  uint *in_stack_00000138;
  uint *in_stack_00000140;
  undefined8 in_stack_00000148;
  uint *in_stack_00000150;
  undefined8 in_stack_00000178;
  uint *in_stack_00000180;
  uint *in_stack_00000188;
  uint *in_stack_00000190;
  uint *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  puVar54 = param_2._8_8_;
  puVar53 = param_2._0_8_;
code_r0x00010078cb7c:
  uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000120);
LAB_10078cb8c:
  bStack0000000000000040 = (byte)uVar25;
  uStack0000000000000041 = (uint7)((ulong)uVar25 >> 8);
code_r0x00010078cb90:
LAB_10078a6b8:
  bStack0000000000000038 = 5;
  FUN_100d03040(&stack0x000000c8);
code_r0x00010078a6cc:
  FUN_100d34830(unaff_x21 + 8);
  if (*(char *)(unaff_x29 + -0xb0) == '\x16') goto LAB_10078a464;
  pcVar22 = (char *)(unaff_x29 + -0xb0);
code_r0x00010078a6e4:
  FUN_100e077ec(pcVar22);
LAB_10078a464:
  pcVar22 = (char *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
  if (bStack0000000000000038 == 5) goto LAB_10078d090;
  in_stack_00000090 = (uint *)CONCAT71(uStack0000000000000051,uStack0000000000000050);
  puVar33 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
  in_stack_00000098 = (uint *)CONCAT71(uStack0000000000000059,uStack0000000000000058);
  puVar26 = (uint *)(ulong)(uStack0000000000000041 >> 0x18);
  puVar49 = (uint *)(ulong)(uStack0000000000000041 >> 0x18);
  fVar47 = (float)(uStack0000000000000041 >> 0x18);
  puVar50 = (uint *)0x0;
  puVar36 = (uint *)(ulong)(uStack0000000000000041 >> 8);
  puVar31 = (uint *)(ulong)uStack0000000000000041;
  bVar6 = SBORROW4((uint)bStack0000000000000038,1);
  uVar29 = (uint)bStack0000000000000038;
  bVar7 = (int)(uVar29 - 1) < 0;
  bVar8 = uVar29 == 1;
  puVar34 = (uint *)((long)(int7)uStack0000000000000041 >> 0x18);
  bVar2 = (byte)unaff_x19;
  bVar3 = (byte)uStack0000000000000041;
  sVar4 = (short)(uStack0000000000000041 >> 8);
  puVar23 = (uint *)pcVar22;
  puVar43 = unaff_x20;
  puVar44 = unaff_x27;
  puVar46 = in_stack_00000030;
  puVar48 = puVar49;
  puVar52 = puVar50;
  in_stack_00000080 = (uint *)pcVar22;
  in_stack_00000088 = puVar33;
  if (1 < uVar29) {
    if (uVar29 == 2) {
      bVar15 = true;
code_r0x00010078a540:
      puVar39 = (uint *)&UNK_108c9b138;
      puVar40 = &UNK_10078a558;
      bVar8 = bVar15;
code_r0x00010078a54c:
      bVar15 = bVar8;
      puVar38 = (uint *)(ulong)bStack0000000000000040;
      uVar29 = (uint)bStack0000000000000040;
      uVar35 = (uint)bStack0000000000000040;
      uVar41 = (ulong)*(ushort *)((long)puVar39 + (long)puVar38 * 2);
      puVar40 = puVar40 + uVar41 * 4;
      bVar8 = bVar15;
      bVar18 = bVar15;
      bVar13 = bVar15;
      puVar42 = unaff_x20;
      switch(puVar40) {
      case (undefined *)0x10078a558:
code_r0x00010078a558:
        in_stack_00000188 = *(uint **)(puVar33 + 2);
        in_stack_00000180 = *(uint **)puVar33;
        in_stack_00000198 = *(uint **)(puVar33 + 6);
        in_stack_00000190 = *(uint **)(puVar33 + 4);
        func_0x000107c04798(in_stack_00000030,unaff_x29 + -0xb0);
        unaff_x21 = puVar33;
code_r0x00010078a57c:
        puVar33 = unaff_x21;
        goto code_r0x00010078c0cc;
      case (undefined *)0x10078a584:
code_r0x00010078a584:
        puVar39 = (uint *)&UNK_108c9b0e0;
        puVar40 = &UNK_10078a59c;
        uVar41 = (ulong)*(ushort *)(&UNK_108c9b0e0 + (ulong)bStack0000000000000040 * 2);
        bVar15 = bVar8;
code_r0x00010078a594:
        puVar38 = (uint *)(ulong)bStack0000000000000040;
        uVar29 = (uint)bStack0000000000000040;
        bVar8 = bVar15;
        puVar42 = unaff_x20;
        switch(puVar40 + uVar41 * 4) {
        case (undefined *)0x10078a59c:
          goto code_r0x00010078a59c;
        case (undefined *)0x10078a5c8:
          goto code_r0x00010078a5c8;
        case (undefined *)0x10078a5e0:
          goto code_r0x00010078a5e0;
        case (undefined *)0x10078a61c:
          goto code_r0x00010078a61c;
        case (undefined *)0x10078a628:
          goto code_r0x00010078a628;
        case (undefined *)0x10078a64c:
          goto code_r0x00010078a64c;
        case (undefined *)0x10078a6b4:
          uStack0000000000000041 = uStack0000000000000041 >> 8;
          bStack0000000000000040 = bVar3;
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
          bVar37 = 0x16;
          unaff_x24 = (uint *)0x16;
          goto code_r0x00010078abfc;
        case (undefined *)0x10078ac44:
          goto code_r0x00010078ac44;
        case (undefined *)0x10078aca8:
          goto code_r0x00010078aca8;
        case (undefined *)0x10078af6c:
          puVar31 = in_stack_00000090;
          puVar38 = puVar33;
          puVar39 = in_stack_00000098;
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
          unaff_x21 = puVar33;
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
          unaff_x21 = in_stack_00000090;
          unaff_x23 = puVar33;
          goto code_r0x00010078bf3c;
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
          goto code_r0x00010078c044;
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
code_r0x00010078c3e0:
          puVar50 = *(uint **)((long)unaff_x21 + 9);
          puVar49 = *(uint **)((long)unaff_x21 + 1);
          goto code_r0x00010078c3e4;
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
          uVar27 = 8;
          break;
        case (undefined *)0x10078cc00:
          goto code_r0x00010078cc00;
        case (undefined *)0x10078cc10:
code_r0x00010078cc10:
          func_0x000107c050dc(in_stack_00000030,puVar26);
          goto code_r0x00010078d0a8;
        case (undefined *)0x10078cc1c:
          goto code_r0x00010078cc1c;
        case (undefined *)0x10078cc20:
          goto code_r0x00010078cc20;
        case (undefined *)0x10078cc60:
          goto code_r0x00010078cc60;
        case (undefined *)0x10078cc78:
          puVar23 = in_stack_00000030;
code_r0x00010078cc7c:
          func_0x000107c043d0(puVar23);
        case (undefined *)0x10078cc80:
          goto code_r0x00010078d0a8;
        case (undefined *)0x10078cc94:
          goto code_r0x00010078cc94;
        case (undefined *)0x10078cc9c:
          goto code_r0x00010078cc9c;
        case (undefined *)0x10078cca4:
          goto code_r0x00010078cca4;
        case (undefined *)0x10078cca8:
          goto code_r0x00010078cca8;
        case (undefined *)0x10078ccb8:
code_r0x00010078ccb8:
code_r0x00010078ce44:
          *(uint **)(unaff_x29 + -0xa8) = puVar33;
code_r0x00010078ce48:
          puVar31 = (uint *)0x1;
code_r0x00010078cff4:
          *(char *)(unaff_x29 + -0xb0) = (char)puVar31;
code_r0x00010078cffc:
          goto code_r0x00010078d084;
        case (undefined *)0x10078ccc8:
          goto code_r0x00010078ccc8;
        case (undefined *)0x10078ccd4:
          goto code_r0x00010078ccd4;
        case (undefined *)0x10078ccd8:
          goto code_r0x00010078ccd8;
        case (undefined *)0x10078ccf4:
          puVar31 = (uint *)&stack0x00000080;
        case (undefined *)0x10078ccf8:
          puVar26 = puVar31 + 2;
code_r0x00010078ccfc:
          puVar23 = in_stack_00000030;
code_r0x00010078cd00:
          func_0x000107c04b18(puVar23,puVar26);
code_r0x00010078cd04:
          goto code_r0x00010078d0a8;
        case (undefined *)0x10078cd04:
          goto code_r0x00010078cd04;
        case (undefined *)0x10078cd0c:
          goto code_r0x00010078cd0c;
        case (undefined *)0x10078cd1c:
code_r0x00010078cd1c:
code_r0x00010078cfcc:
          *(uint **)(unaff_x29 + -0xa8) = puVar49;
          puVar31 = (uint *)0x3;
          goto code_r0x00010078cff4;
        case (undefined *)0x10078cd20:
          puVar49 = (uint *)(double)fVar47;
          goto code_r0x00010078cd24;
        case (undefined *)0x10078cd3c:
          goto code_r0x00010078cd3c;
        case (undefined *)0x10078cd4c:
          goto code_r0x00010078cd4c;
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
          goto code_r0x00010078cdac;
        case (undefined *)0x10078cdb0:
          goto code_r0x00010078cdb0;
        case (undefined *)0x10078cdbc:
          goto code_r0x00010078cdbc;
        case (undefined *)0x10078cdc4:
          *(uint **)(unaff_x29 + -0xa8) = puVar33;
          *(uint **)(unaff_x29 + -0xa0) = in_stack_00000090;
code_r0x00010078cdcc:
          puVar31 = (uint *)0x6;
        case (undefined *)0x10078cdd0:
          uVar27 = SUB81(puVar31,0);
          break;
        case (undefined *)0x10078cdd8:
          goto code_r0x00010078cdd8;
        case (undefined *)0x10078cde0:
          goto code_r0x00010078cde0;
        case (undefined *)0x10078cde8:
          goto code_r0x00010078cde8;
        case (undefined *)0x10078cdfc:
          *(uint **)(unaff_x29 + -0xa8) = puVar26;
          goto code_r0x00010078ce6c;
        case (undefined *)0x10078ce0c:
          puVar31 = puVar34;
          goto code_r0x00010078d008;
        case (undefined *)0x10078ce2c:
code_r0x00010078ce2c:
          *(byte *)(unaff_x29 + -0xaf) = bVar3;
          *(undefined1 *)(unaff_x29 + -0xb0) = 0;
code_r0x00010078ce38:
code_r0x00010078ce3c:
          goto code_r0x00010078d084;
        case (undefined *)0x10078ce38:
          goto code_r0x00010078ce38;
        case (undefined *)0x10078ce40:
code_r0x00010078ce40:
          puVar33 = (uint *)((ulong)uStack0000000000000041 & 0xff);
          goto code_r0x00010078ce44;
        case (undefined *)0x10078ce50:
          *(byte *)(unaff_x29 + -0xaf) = bVar3;
code_r0x00010078ce54:
          *(undefined1 *)(unaff_x29 + -0xb0) = 0;
          goto code_r0x00010078ce58;
        case (undefined *)0x10078ce5c:
          goto code_r0x00010078ce5c;
        case (undefined *)0x10078ce64:
code_r0x00010078ce64:
          puVar31 = (uint *)((ulong)uStack0000000000000041 & 0xff);
        case (undefined *)0x10078ce68:
code_r0x00010078ce68:
          *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078ce6c:
          puVar31 = (uint *)0x1;
code_r0x00010078ce70:
          uVar27 = SUB81(puVar31,0);
          break;
        case (undefined *)0x10078ce80:
          goto code_r0x00010078ce80;
        case (undefined *)0x10078ce84:
          goto code_r0x00010078ce84;
        case (undefined *)0x10078ce8c:
          goto code_r0x00010078ce8c;
        case (undefined *)0x10078ce9c:
          goto code_r0x00010078ce9c;
        case (undefined *)0x10078cec4:
          goto code_r0x00010078cec4;
        case (undefined *)0x10078cec8:
          goto code_r0x00010078cec8;
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
          puVar31 = (uint *)(long)(char)bVar3;
          goto code_r0x00010078d008;
        case (undefined *)0x10078cf24:
code_r0x00010078cf24:
          *(uint **)(unaff_x29 + -0xa8) = puVar33;
          *(uint **)(unaff_x29 + -0xa0) = in_stack_00000090;
code_r0x00010078cf2c:
          unaff_x19 = (uint *)0x5;
        case (undefined *)0x10078cf30:
          *(char *)(unaff_x29 + -0xb0) = (char)unaff_x19;
code_r0x00010078cf34:
code_r0x00010078cf3c:
          goto code_r0x00010078cfb0;
        case (undefined *)0x10078cf34:
          goto code_r0x00010078cf34;
        case (undefined *)0x10078cf3c:
          goto code_r0x00010078cf3c;
        case (undefined *)0x10078cf40:
          goto code_r0x00010078cf40;
        case (undefined *)0x10078cf54:
          goto code_r0x00010078cf54;
        case (undefined *)0x10078cf60:
code_r0x00010078cf60:
        case (undefined *)0x10078cfec:
code_r0x00010078cfec:
          *(uint **)(unaff_x29 + -0xa8) = puVar31;
          puVar31 = (uint *)0x2;
          goto code_r0x00010078cff4;
        case (undefined *)0x10078cf6c:
          puVar31 = (uint *)(long)sVar4;
          goto code_r0x00010078d008;
        case (undefined *)0x10078cfd8:
code_r0x00010078cfd8:
          puVar49 = puVar33;
        case (undefined *)0x10078cfdc:
code_r0x00010078cfdc:
          *(uint **)(unaff_x29 + -0xa8) = puVar49;
          puVar31 = (uint *)0x3;
code_r0x00010078cfe4:
          uVar27 = SUB81(puVar31,0);
          break;
        case (undefined *)0x10078cfe4:
          goto code_r0x00010078cfe4;
        case (undefined *)0x10078cff4:
          goto code_r0x00010078cff4;
        case (undefined *)0x10078cffc:
          goto code_r0x00010078cffc;
        case (undefined *)0x10078d004:
          puVar31 = puVar33;
code_r0x00010078d008:
          *(uint **)(unaff_x29 + -0xa8) = puVar31;
          uVar27 = 2;
          break;
        case (undefined *)0x10078d028:
          goto code_r0x00010078d028;
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
          uVar27 = 7;
          break;
        case (undefined *)0x10078d0d8:
          goto code_r0x00010078d0d8;
        case (undefined *)0x10078d154:
          goto code_r0x00010078d154;
        case (undefined *)0x10078d18c:
          goto code_r0x00010078d18c;
        }
        *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
        goto code_r0x00010078d084;
      case (undefined *)0x10078a59c:
code_r0x00010078a59c:
        unaff_x21 = puVar33;
code_r0x00010078a5a0:
        in_stack_00000188 = *(uint **)(unaff_x21 + 2);
        in_stack_00000180 = *(uint **)unaff_x21;
        in_stack_00000198 = *(uint **)(unaff_x21 + 6);
        in_stack_00000190 = *(uint **)(unaff_x21 + 4);
        func_0x000107c04858(in_stack_00000030,unaff_x29 + -0xb0);
        puVar33 = unaff_x21;
        goto code_r0x00010078c0cc;
      case (undefined *)0x10078a5d8:
        goto code_r0x00010078a5d8;
      case (undefined *)0x10078a5e4:
        goto code_r0x00010078a5e4;
      case (undefined *)0x10078a608:
        bVar15 = (int)unaff_x19 == 5;
        goto code_r0x00010078a60c;
      case (undefined *)0x10078a670:
        goto code_r0x00010078a670;
      case (undefined *)0x10078a724:
        puVar31 = in_stack_00000090;
        puVar38 = puVar33;
        puVar39 = in_stack_00000098;
code_r0x00010078a72c:
        puVar36 = (uint *)((long)puVar39 * 0x40);
        unaff_x21 = puVar31 + (long)puVar39 * 0x10;
        unaff_x19 = (uint *)(unaff_x29 + -0xb0);
        *(uint **)(unaff_x29 + -0x90) = puVar31;
        *(uint **)(unaff_x29 + -0x88) = puVar31;
        *(uint **)(unaff_x29 + -0x80) = puVar38;
        *(uint **)(unaff_x29 + -0x78) = unaff_x21;
        *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
code_r0x00010078a74c:
        if (puVar39 != (uint *)0x0) {
          unaff_x25 = (uint *)0x0;
          goto code_r0x00010078a758;
        }
        goto code_r0x00010078c4f0;
      case (undefined *)0x10078a758:
code_r0x00010078a758:
        unaff_x20 = (uint *)((ulong)&stack0x000000a0 | 1);
        puVar46 = (uint *)((ulong)unaff_x19 | 1);
        puVar38 = (uint *)&stack0x00000038;
code_r0x00010078a768:
        in_stack_00000028 = (uint *)((ulong)puVar38 | 1);
code_r0x00010078a770:
        puVar36 = (uint *)((ulong)(puVar36 + -0x10) >> 6);
code_r0x00010078a778:
        in_stack_00000018 = (uint *)((long)puVar36 + 1);
        unaff_x27 = puVar31 + 0x10;
        unaff_x22 = (uint *)0x3;
        unaff_x23 = (uint *)0x8000000000000000;
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
        puVar50 = *(uint **)(puVar33 + 2);
        puVar49 = *(uint **)puVar33;
        unaff_x21 = puVar33;
code_r0x00010078abb8:
        puVar31 = (uint *)&stack0x000000a0;
code_r0x00010078abbc:
        *(uint **)(puVar31 + 0x3a) = puVar50;
        *(uint **)(puVar31 + 0x38) = puVar49;
        uVar25 = *(undefined8 *)(unaff_x21 + 4);
        *(undefined8 *)(puVar31 + 0x3e) = *(undefined8 *)(unaff_x21 + 6);
        *(undefined8 *)(puVar31 + 0x3c) = uVar25;
        func_0x000107c055cc(in_stack_00000030,unaff_x29 + -0xb0);
        puVar33 = unaff_x21;
        goto code_r0x00010078c0cc;
      case (undefined *)0x10078ac00:
        goto code_r0x00010078ac00;
      case (undefined *)0x10078af94:
code_r0x00010078af94:
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        if (puVar39 == (uint *)0x0) goto code_r0x00010078c240;
        unaff_x26 = (uint *)0x0;
        unaff_x22 = (uint *)((ulong)&stack0x000000a0 | 1);
        unaff_x20 = (uint *)((ulong)unaff_x19 | 1);
        puVar36 = (uint *)((ulong)(puVar36 + -0x10) >> 6);
      case (undefined *)0x10078afb8:
        puVar36 = (uint *)((long)puVar36 + 1);
code_r0x00010078afbc:
        puVar46 = puVar31 + 0x10;
        unaff_x23 = (uint *)0x8000000000000000;
        unaff_x25 = (uint *)0x8000000000000000;
        in_stack_00000008 = puVar36;
        goto code_r0x00010078aff0;
      case (undefined *)0x10078b068:
        goto code_r0x00010078b068;
      case (undefined *)0x10078b0f4:
        goto code_r0x00010078b0f4;
      case (undefined *)0x10078b300:
        unaff_x26 = in_stack_00000090 + (long)in_stack_00000098 * 8;
        in_stack_00000140 = (uint *)0x0;
        unaff_x20 = in_stack_00000090;
        in_stack_00000138 = unaff_x26;
        if (in_stack_00000098 != (uint *)0x0) {
          unaff_x20 = in_stack_00000090 + 8;
          puVar31 = (uint *)(ulong)(byte)*in_stack_00000090;
          if ((byte)*in_stack_00000090 != 0x16) {
            uVar25 = *(undefined8 *)((long)in_stack_00000090 + 1);
            uStack00000000000000a9 = (undefined6)*(undefined8 *)((long)in_stack_00000090 + 9);
            bStack00000000000000af =
                 (byte)((ulong)*(undefined8 *)((long)in_stack_00000090 + 9) >> 0x30);
            bStack00000000000000a1 = (byte)uVar25;
            uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 8);
            bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x30);
            uStack00000000000000a8 = (undefined1)((ulong)uVar25 >> 0x38);
            unaff_x21 = in_stack_00000090;
            unaff_x23 = in_stack_00000098;
            unaff_x25 = puVar33;
            in_stack_00000120 = in_stack_00000090;
            in_stack_00000128 = unaff_x20;
            in_stack_00000130 = puVar33;
            goto code_r0x00010078c264;
          }
        }
        puVar26 = (uint *)&UNK_10b22d1b0;
        unaff_x21 = in_stack_00000090;
        unaff_x25 = puVar33;
        in_stack_00000120 = in_stack_00000090;
        in_stack_00000128 = unaff_x20;
        in_stack_00000130 = puVar33;
code_r0x00010078b33c:
code_r0x00010078b344:
        unaff_x22 = (uint *)thunk_FUN_1087e422c(0,puVar26);
        goto code_r0x00010078b350;
      case (undefined *)0x10078b3c8:
code_r0x00010078b3c8:
        in_stack_00000008 = (uint *)(((ulong)(puVar36 + -0x10) >> 6) + 1);
        unaff_x25 = puVar31 + 0x10;
        unaff_x24 = (uint *)0x8000000000000000;
        unaff_x23 = (uint *)0x8000000000000000;
code_r0x00010078b3e4:
        unaff_x27 = (uint *)0x8000000000000000;
        goto code_r0x00010078b410;
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
        puVar50 = *(uint **)(unaff_x21 + 2);
        puVar49 = *(uint **)unaff_x21;
        puVar31 = (uint *)&stack0x000000a0;
code_r0x00010078be48:
        *(uint **)(puVar31 + 0x3a) = puVar50;
        *(uint **)(puVar31 + 0x38) = puVar49;
code_r0x00010078be4c:
        puVar50 = *(uint **)(unaff_x21 + 6);
        puVar49 = *(uint **)(unaff_x21 + 4);
code_r0x00010078be50:
        *(uint **)(puVar31 + 0x3e) = puVar50;
        *(uint **)(puVar31 + 0x3c) = puVar49;
        puVar26 = (uint *)(unaff_x29 + -0xb0);
        puVar23 = in_stack_00000030;
code_r0x00010078be5c:
        func_0x000107c05248(puVar23,puVar26);
code_r0x00010078be60:
        puVar33 = unaff_x21;
        goto code_r0x00010078c0cc;
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
        unaff_x26 = in_stack_00000098;
code_r0x00010078bebc:
        unaff_x25 = unaff_x21 + (long)unaff_x26 * 8;
      case (undefined *)0x10078bec0:
code_r0x00010078bec0:
        in_stack_00000120 = unaff_x21;
        in_stack_00000128 = unaff_x21;
code_r0x00010078bec4:
        in_stack_00000130 = unaff_x23;
        in_stack_00000138 = unaff_x25;
code_r0x00010078bec8:
        unaff_x20 = unaff_x21;
        in_stack_00000140 = (uint *)0x0;
        puVar42 = unaff_x20;
code_r0x00010078bed0:
        unaff_x21 = puVar42;
        if (unaff_x26 == (uint *)0x0) {
code_r0x00010078bee8:
          puVar26 = (uint *)&UNK_10b22d000;
code_r0x00010078beec:
          puVar26 = puVar26 + 0x68;
code_r0x00010078bef0:
code_r0x00010078bef8:
          puVar23 = (uint *)0x0;
code_r0x00010078befc:
          pcVar22 = (char *)thunk_FUN_1087e422c(puVar23,puVar26);
code_r0x00010078bf00:
          unaff_x22 = (uint *)pcVar22;
code_r0x00010078bf04:
          *(uint **)(in_stack_00000030 + 2) = unaff_x22;
code_r0x00010078bf08:
          puVar31 = (uint *)0x5;
code_r0x00010078bf0c:
          *(char *)in_stack_00000030 = (char)puVar31;
code_r0x00010078bf10:
          puVar31 = (uint *)((ulong)((long)unaff_x25 - (long)unaff_x20) >> 5);
code_r0x00010078bf18:
          unaff_x22 = (uint *)((long)puVar31 + 1);
          goto code_r0x00010078bf1c;
        }
code_r0x00010078bed4:
        unaff_x21 = puVar42;
code_r0x00010078bed8:
        unaff_x20 = puVar42 + 8;
        puVar31 = (uint *)(ulong)(byte)*puVar42;
        bVar15 = (byte)*puVar42 == 0x16;
        in_stack_00000128 = unaff_x20;
code_r0x00010078bee4:
        if (bVar15) goto code_r0x00010078bee8;
code_r0x00010078c2c8:
        puVar50 = *(uint **)((long)unaff_x21 + 9);
        puVar49 = *(uint **)((long)unaff_x21 + 1);
code_r0x00010078c2cc:
        uStack00000000000000a9 = SUB86(puVar50,0);
        bStack00000000000000af = (byte)((ulong)puVar50 >> 0x30);
        bStack00000000000000a1 = (byte)puVar49;
        uStack00000000000000a2 = (undefined5)((ulong)puVar49 >> 8);
        bStack00000000000000a7 = (byte)((ulong)puVar49 >> 0x30);
        uStack00000000000000a8 = (undefined1)((ulong)puVar49 >> 0x38);
code_r0x00010078c2d0:
        puVar50 = *(uint **)(unaff_x21 + 6);
        puVar49 = *(uint **)(unaff_x21 + 4);
code_r0x00010078c2d4:
        uStack00000000000000b8 = SUB87(puVar50,0);
        uStack00000000000000bf = (undefined1)((ulong)puVar50 >> 0x38);
        uStack00000000000000b0 = SUB81(puVar49,0);
        uStack00000000000000b1 = (undefined6)((ulong)puVar49 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)puVar49 >> 0x38);
        puVar36 = (uint *)0x1;
code_r0x00010078c2dc:
        in_stack_00000140 = puVar36;
code_r0x00010078c2e0:
        bStack00000000000000a0 = (byte)puVar31;
code_r0x00010078c2e4:
        puVar23 = (uint *)&stack0x00000038;
code_r0x00010078c2e8:
        puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c2ec:
        FUN_1004b62d4(puVar23,puVar26);
code_r0x00010078c2f0:
        unaff_x19 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
        unaff_x22 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
code_r0x00010078c2f4:
        puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c2f8:
        bVar15 = unaff_x19 == puVar31;
code_r0x00010078c2fc:
        if (bVar15) goto code_r0x00010078bf04;
        bVar15 = unaff_x26 == (uint *)0x1;
code_r0x00010078c304:
        if (bVar15) {
code_r0x00010078c320:
          puVar26 = (uint *)&UNK_10b22d000;
code_r0x00010078c324:
          puVar26 = puVar26 + 0x68;
code_r0x00010078c328:
code_r0x00010078c32c:
code_r0x00010078c330:
          pcVar22 = (char *)0x1;
code_r0x00010078c334:
          pcVar22 = (char *)thunk_FUN_1087e422c(pcVar22,puVar26);
code_r0x00010078c338:
          *(char **)(in_stack_00000030 + 2) = pcVar22;
code_r0x00010078c33c:
          puVar31 = (uint *)0x5;
code_r0x00010078c340:
          *(char *)in_stack_00000030 = (char)puVar31;
          if (unaff_x19 != (uint *)0x0) {
code_r0x00010078c348:
            pcVar22 = (char *)unaff_x22;
code_r0x00010078c34c:
            _free(pcVar22);
          }
          goto code_r0x00010078bf10;
        }
code_r0x00010078c308:
        unaff_x26 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078c30c:
        unaff_x20 = unaff_x21 + 0x10;
code_r0x00010078c310:
        puVar31 = (uint *)(ulong)(byte)unaff_x21[8];
        in_stack_00000128 = unaff_x20;
code_r0x00010078c318:
        if ((int)puVar31 == 0x16) goto code_r0x00010078c320;
        uVar25 = *(undefined8 *)((long)unaff_x21 + 0x21);
        uStack00000000000000a9 = (undefined6)*(undefined8 *)((long)unaff_x21 + 0x29);
        bStack00000000000000af = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x29) >> 0x30);
        bStack00000000000000a1 = (byte)uVar25;
        uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 8);
        bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x30);
        uStack00000000000000a8 = (undefined1)((ulong)uVar25 >> 0x38);
        uVar25 = *(undefined8 *)(unaff_x21 + 0xc);
        uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x21 + 0xe);
        uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 0xe) >> 0x38);
        uStack00000000000000b0 = (undefined1)uVar25;
        uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
        in_stack_00000140 = (uint *)0x2;
        bStack00000000000000a0 = (byte)puVar31;
        FUN_1004b64d4(&stack0x00000038,&stack0x000000a0);
        puVar31 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
        pcVar22 = (char *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
        puVar36 = (uint *)0x8000000000000000;
code_r0x00010078d154:
        if (puVar31 == puVar36) goto code_r0x00010078c338;
        *(char *)in_stack_00000030 = '\x03';
        *(uint **)(in_stack_00000030 + 2) = unaff_x19;
        *(uint **)(in_stack_00000030 + 4) = unaff_x22;
        *(uint **)(in_stack_00000030 + 6) = unaff_x26;
        *(uint **)(in_stack_00000030 + 8) = puVar31;
        *(char **)(in_stack_00000030 + 10) = pcVar22;
        *(ulong *)(in_stack_00000030 + 0xc) =
             CONCAT71(uStack0000000000000049,bStack0000000000000048);
        *(ulong *)(unaff_x29 + -0x80) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        in_stack_00000188 = *(uint **)(in_stack_00000030 + 2);
        in_stack_00000180 = *(uint **)in_stack_00000030;
        in_stack_00000198 = *(uint **)(in_stack_00000030 + 6);
        in_stack_00000190 = *(uint **)(in_stack_00000030 + 4);
        in_stack_000001a8 = *(undefined8 *)(in_stack_00000030 + 10);
        in_stack_000001a0 = *(undefined8 *)(in_stack_00000030 + 8);
code_r0x00010078d18c:
        pcVar22 = (char *)FUN_100fbc738(&stack0x00000120);
        goto code_r0x00010078d2f4;
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
code_r0x00010078bf3c:
        unaff_x26 = in_stack_00000098;
        goto code_r0x00010078bf40;
      case (undefined *)0x10078bfbc:
code_r0x00010078bfbc:
        unaff_x21 = in_stack_00000090;
        unaff_x22 = in_stack_00000098;
        unaff_x23 = puVar33;
        goto code_r0x00010078bfc4;
      case (undefined *)0x10078c000:
        goto code_r0x00010078c000;
      case (undefined *)0x10078c1cc:
code_r0x00010078c1cc:
        *(uint **)(unaff_x29 + -0xa8) = puVar31;
        uVar27 = 1;
        goto code_r0x00010078c214;
      case (undefined *)0x10078c208:
        puVar31 = *(uint **)(puVar26 + 2);
        goto code_r0x00010078c20c;
      case (undefined *)0x10078c210:
        goto code_r0x00010078c210;
      case (undefined *)0x10078c240:
code_r0x00010078c240:
        unaff_x25 = (uint *)0x0;
code_r0x00010078c244:
        in_stack_00000020 = unaff_x21;
        in_stack_00000028 = unaff_x20;
        goto code_r0x00010078c680;
      case (undefined *)0x10078c244:
        goto code_r0x00010078c244;
      case (undefined *)0x10078c248:
code_r0x00010078c248:
        puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c24c:
        unaff_x24 = (uint *)0x8000000000000000;
code_r0x00010078c250:
        _bStack0000000000000100 = puVar31;
        goto code_r0x00010078c254;
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
code_r0x00010078c438:
        puVar50 = *(uint **)(unaff_x21 + 6);
        puVar49 = *(uint **)(unaff_x21 + 4);
code_r0x00010078c43c:
        uStack00000000000000b8 = SUB87(puVar50,0);
        uStack00000000000000bf = (undefined1)((ulong)puVar50 >> 0x38);
        uStack00000000000000b0 = SUB81(puVar49,0);
        uStack00000000000000b1 = (undefined6)((ulong)puVar49 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)puVar49 >> 0x38);
code_r0x00010078c440:
        puVar36 = (uint *)0x1;
code_r0x00010078c444:
        bStack00000000000000a0 = (byte)puVar31;
        in_stack_00000140 = puVar36;
code_r0x00010078c44c:
        puVar23 = (uint *)&stack0x00000038;
code_r0x00010078c450:
        puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c454:
        FUN_1004b62d4(puVar23,puVar26);
code_r0x00010078c458:
        unaff_x27 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
        unaff_x22 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
code_r0x00010078c45c:
        puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c460:
        bVar15 = unaff_x27 == puVar31;
code_r0x00010078c464:
        if (bVar15) goto code_r0x00010078c094;
code_r0x00010078c468:
        unaff_x19 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078c46c:
        bVar15 = unaff_x23 == (uint *)0x1;
code_r0x00010078c470:
        if (!bVar15) {
code_r0x00010078c474:
          unaff_x20 = unaff_x21 + 0x10;
code_r0x00010078c478:
          in_stack_00000128 = unaff_x20;
code_r0x00010078c47c:
          puVar31 = (uint *)(ulong)(byte)unaff_x21[8];
code_r0x00010078c480:
          iVar30 = (int)puVar31;
          if (iVar30 == 0x16) goto code_r0x00010078c488;
          uStack0000000000000041 = (uint7)*(undefined8 *)((long)unaff_x21 + 0x29);
          uStack0000000000000039 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x21);
          bStack0000000000000040 = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x21) >> 0x38);
          uStack0000000000000050 = (undefined1)*(undefined8 *)(unaff_x21 + 0xe);
          uStack0000000000000051 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0xe) >> 8);
          bStack0000000000000048 = (byte)*(undefined8 *)(unaff_x21 + 0xc);
          uStack0000000000000049 = (uint7)((ulong)*(undefined8 *)(unaff_x21 + 0xc) >> 8);
          in_stack_00000140 = (uint *)0x2;
          bStack0000000000000038 = (byte)puVar31;
          if (iVar30 == 0x10) {
code_r0x00010078d240:
            _bStack0000000000000100 = (uint *)CONCAT62(uStack0000000000000102,0x200);
            FUN_100e077ec(&stack0x00000038);
          }
          else if (iVar30 == 0x11) {
            puVar32 = (undefined8 *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
            uVar51 = puVar32[1];
            uVar25 = *puVar32;
            uStack00000000000000a8 = (undefined1)uVar51;
            uStack00000000000000a9 = (undefined6)((ulong)uVar51 >> 8);
            bStack00000000000000af = (byte)((ulong)uVar51 >> 0x38);
            bStack00000000000000a0 = (byte)uVar25;
            bStack00000000000000a1 = (byte)((ulong)uVar25 >> 8);
            uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 0x10);
            bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x38);
            uVar25 = puVar32[2];
            uStack00000000000000b8 = (undefined7)puVar32[3];
            uStack00000000000000bf = (undefined1)((ulong)puVar32[3] >> 0x38);
            uStack00000000000000b0 = (undefined1)uVar25;
            uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
            uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
            func_0x000101429444(&stack0x00000100,&stack0x000000a0);
            _free(puVar32);
          }
          else {
            if (iVar30 == 0x12) goto code_r0x00010078d240;
            func_0x000101429444(&stack0x00000100,&stack0x00000038);
          }
          if (((ulong)_bStack0000000000000100 & 1) == 0) {
            puVar31 = (uint *)((ulong)_bStack0000000000000100 >> 8 & 0xff);
            goto code_r0x00010078c48c;
          }
          *(uint **)(in_stack_00000030 + 2) = in_stack_00000108;
          *(char *)in_stack_00000030 = '\x05';
          if (unaff_x27 != (uint *)0x0) {
            _free(unaff_x22);
          }
          goto code_r0x00010078c0a0;
        }
code_r0x00010078c488:
        puVar31 = (uint *)0x2;
code_r0x00010078c48c:
        puVar36 = (uint *)0x1;
code_r0x00010078c490:
        *(char *)in_stack_00000030 = (char)puVar36;
code_r0x00010078c494:
        *(char *)((long)in_stack_00000030 + 1) = (char)puVar31;
code_r0x00010078c498:
        *(uint **)(in_stack_00000030 + 2) = unaff_x27;
        *(uint **)(in_stack_00000030 + 4) = unaff_x22;
code_r0x00010078c49c:
        *(uint **)(in_stack_00000030 + 6) = unaff_x19;
code_r0x00010078c4a0:
        puVar54 = *(uint **)(in_stack_00000030 + 6);
        puVar53 = *(uint **)(in_stack_00000030 + 4);
        puVar50 = *(uint **)(in_stack_00000030 + 10);
        puVar49 = *(uint **)(in_stack_00000030 + 8);
code_r0x00010078c4a4:
        puVar36 = (uint *)&stack0x000000a0;
code_r0x00010078c4a8:
        *(uint **)(puVar36 + 0x3e) = puVar54;
        *(uint **)(puVar36 + 0x3c) = puVar53;
        *(uint **)(puVar36 + 0x42) = puVar50;
        *(uint **)(puVar36 + 0x40) = puVar49;
code_r0x00010078c4ac:
        puVar31 = *(uint **)(in_stack_00000030 + 0xc);
code_r0x00010078c4b0:
        *(uint **)(unaff_x29 + -0x80) = puVar31;
code_r0x00010078c4b4:
        puVar50 = *(uint **)(in_stack_00000030 + 2);
        puVar49 = *(uint **)in_stack_00000030;
code_r0x00010078c4b8:
        *(uint **)(puVar36 + 0x3a) = puVar50;
        *(uint **)(puVar36 + 0x38) = puVar49;
code_r0x00010078c4bc:
        pcVar22 = (char *)&stack0x00000120;
code_r0x00010078c4c0:
        pcVar22 = (char *)FUN_100fbc738(pcVar22);
code_r0x00010078c4c4:
code_r0x00010078d2f4:
        if ((uint *)pcVar22 != (uint *)0x0) {
          *(char **)(in_stack_00000030 + 2) = pcVar22;
          *(char *)in_stack_00000030 = '\x05';
code_r0x00010078d3b4:
          FUN_100e06c08(unaff_x29 + -0xb0);
        }
        goto code_r0x00010078d0a8;
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
        in_stack_00000120 = puVar31;
        in_stack_00000128 = puVar36;
        goto code_r0x00010078cb7c;
      case (undefined *)0x10078cbbc:
code_r0x00010078cbbc:
        puVar26 = (uint *)0x2c;
code_r0x00010078cbc4:
        FUN_107c05cac(puVar23,puVar26);
        goto code_r0x00010078da5c;
      case (undefined *)0x10078cbcc:
code_r0x00010078cbcc:
        puVar31 = (uint *)0x8;
        break;
      case (undefined *)0x10078cbdc:
        puVar26 = (uint *)&stack0x00000088;
        puVar23 = in_stack_00000030;
code_r0x00010078cbe8:
        func_0x000107c04f1c(puVar23,puVar26);
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cc1c:
code_r0x00010078cc1c:
        puVar31 = (uint *)&stack0x00000080;
code_r0x00010078cc20:
        puVar26 = puVar31 + 2;
code_r0x00010078cc24:
        puVar23 = in_stack_00000030;
code_r0x00010078cc28:
        func_0x000107c04f04(puVar23,puVar26);
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cc3c:
code_r0x00010078cc3c:
        func_0x000107c04f5c(puVar23,puVar26);
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cc50:
        goto code_r0x00010078cc50;
      case (undefined *)0x10078cc58:
        func_0x000107c04360(in_stack_00000030);
code_r0x00010078cc60:
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cc64:
        puVar31 = puVar33;
code_r0x00010078cd90:
        *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078cd94:
        puVar31 = (uint *)0x1;
code_r0x00010078cd98:
        break;
      case (undefined *)0x10078cc74:
code_r0x00010078cc74:
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078cc90:
        puVar31 = (uint *)&stack0x00000080;
code_r0x00010078cc94:
        puVar26 = puVar31 + 2;
code_r0x00010078cc98:
        puVar23 = in_stack_00000030;
code_r0x00010078cc9c:
        func_0x000107c04e08(puVar23,puVar26);
        goto code_r0x00010078d0a8;
      case (undefined *)0x10078ccb0:
        puVar49 = (uint *)(double)fVar47;
      case (undefined *)0x10078ccb4:
code_r0x00010078cee4:
        *(uint **)(unaff_x29 + -0xa8) = puVar49;
        puVar31 = (uint *)0x3;
code_r0x00010078ceec:
        break;
      case (undefined *)0x10078ccc0:
        puVar31 = (uint *)(((ulong)uStack0000000000000041 & 0xffff00) >> 8);
        goto code_r0x00010078ccc4;
      case (undefined *)0x10078ccc8:
code_r0x00010078ccc8:
        puVar31 = puVar33;
        goto code_r0x00010078ce68;
      case (undefined *)0x10078ccd8:
        goto code_r0x00010078ccd8;
      case (undefined *)0x10078cd08:
code_r0x00010078cd08:
        puVar31 = puVar33;
        puVar36 = in_stack_00000090;
code_r0x00010078cd0c:
        *(uint **)(unaff_x29 + -0xa8) = puVar31;
        *(uint **)(unaff_x29 + -0xa0) = puVar36;
code_r0x00010078cd10:
        puVar31 = (uint *)0x6;
      case (undefined *)0x10078cd14:
        break;
      case (undefined *)0x10078cd24:
code_r0x00010078cd24:
        goto code_r0x00010078cfdc;
      case (undefined *)0x10078cd50:
        goto code_r0x00010078cd50;
      case (undefined *)0x10078cd5c:
code_r0x00010078cd5c:
        goto code_r0x00010078d034;
      case (undefined *)0x10078cd68:
code_r0x00010078cd68:
        puVar31 = puVar34;
      case (undefined *)0x10078cd6c:
        goto code_r0x00010078cef4;
      case (undefined *)0x10078cd78:
        *(byte *)(unaff_x29 + -0xaf) = bVar3;
        *(undefined1 *)(unaff_x29 + -0xb0) = 0;
code_r0x00010078cd88:
        goto code_r0x00010078d084;
      case (undefined *)0x10078cd8c:
code_r0x00010078cd8c:
        puVar31 = (uint *)((ulong)uStack0000000000000041 & 0xff);
        goto code_r0x00010078cd90;
      case (undefined *)0x10078cd94:
        goto code_r0x00010078cd94;
      case (undefined *)0x10078cd9c:
        goto code_r0x00010078cd9c;
      case (undefined *)0x10078cde8:
        goto code_r0x00010078cde8;
      case (undefined *)0x10078cdf4:
        goto code_r0x00010078cdf4;
      case (undefined *)0x10078ce18:
code_r0x00010078ce18:
        goto code_r0x00010078cebc;
      case (undefined *)0x10078ce24:
        goto code_r0x00010078ce24;
      case (undefined *)0x10078ce3c:
        goto code_r0x00010078ce3c;
      case (undefined *)0x10078ce48:
        goto code_r0x00010078ce48;
      case (undefined *)0x10078ce58:
code_r0x00010078ce58:
code_r0x00010078ce5c:
code_r0x00010078ce60:
        goto code_r0x00010078d084;
      case (undefined *)0x10078ce84:
code_r0x00010078ce84:
        *(uint **)(unaff_x29 + -0xa8) = puVar33;
        *(uint **)(unaff_x29 + -0xa0) = in_stack_00000090;
code_r0x00010078ce8c:
        unaff_x19 = (uint *)0x5;
code_r0x00010078ce90:
        *(char *)(unaff_x29 + -0xb0) = (char)unaff_x19;
code_r0x00010078ce9c:
        goto code_r0x00010078cfb0;
      case (undefined *)0x10078cea0:
        goto code_r0x00010078cea0;
      case (undefined *)0x10078ceb8:
        goto code_r0x00010078ceb8;
      case (undefined *)0x10078cee0:
        goto code_r0x00010078cee0;
      case (undefined *)0x10078ceec:
        goto code_r0x00010078ceec;
      case (undefined *)0x10078cef0:
        puVar31 = puVar33;
        goto code_r0x00010078cef4;
      case (undefined *)0x10078cef8:
        goto code_r0x00010078cef8;
      case (undefined *)0x10078cf10:
code_r0x00010078cf10:
        goto code_r0x00010078cfec;
      case (undefined *)0x10078cf1c:
code_r0x00010078cf1c:
        puVar31 = (uint *)0x7;
        break;
      case (undefined *)0x10078cfa0:
        goto code_r0x00010078cfa0;
      case (undefined *)0x10078cfa8:
        goto code_r0x00010078cfa8;
      case (undefined *)0x10078cfb8:
        goto code_r0x00010078cfb8;
      case (undefined *)0x10078cfc0:
        goto code_r0x00010078cfc0;
      case (undefined *)0x10078cfe4:
        goto code_r0x00010078cfe4;
      case (undefined *)0x10078d04c:
        goto code_r0x00010078d04c;
      case (undefined *)0x10078d064:
        goto code_r0x00010078d064;
      case (undefined *)0x10078d074:
        goto code_r0x00010078d074;
      case (undefined *)0x10078d094:
        goto code_r0x00010078d094;
      case (undefined *)0x10078d110:
        goto code_r0x00010078d110;
      }
code_r0x00010078cefc:
      *(char *)(unaff_x29 + -0xb0) = (char)puVar31;
      goto code_r0x00010078d084;
    }
    bVar8 = bStack0000000000000038 == 3;
    if (!bVar8) goto code_r0x00010078a584;
    puVar38 = (uint *)(ulong)bStack0000000000000040;
    uVar29 = (uint)bStack0000000000000040;
    puVar39 = (uint *)&UNK_108c9b10c;
    uVar41 = (ulong)*(ushort *)(&UNK_108c9b10c + (long)puVar38 * 2);
    puVar40 = &UNK_10078a4cc + uVar41 * 4;
    bVar15 = true;
    bVar19 = true;
    bVar14 = true;
    bVar17 = true;
    bVar9 = true;
    bVar11 = true;
    bVar21 = true;
    bVar7 = false;
    bVar6 = false;
    bVar20 = true;
    bVar18 = true;
    bVar16 = true;
    bVar10 = true;
    bVar13 = true;
    bVar12 = true;
    switch(bStack0000000000000040) {
    case 0:
    case 0x49:
      goto code_r0x00010078ce2c;
    case 1:
      goto code_r0x00010078ce40;
    case 2:
      puVar33 = (uint *)(((ulong)uStack0000000000000041 & 0xffff00) >> 8);
      goto code_r0x00010078ce44;
    case 3:
      goto code_r0x00010078cdf4;
    case 4:
      goto code_r0x00010078ccb8;
    case 5:
      puVar31 = (uint *)(long)(char)bVar3;
      goto code_r0x00010078cf10;
    case 6:
      puVar31 = (uint *)(long)sVar4;
      goto code_r0x00010078cf60;
    case 7:
      puVar31 = puVar34;
      goto code_r0x00010078cfec;
    case 8:
    case 0x4c:
      puVar31 = puVar33;
      goto code_r0x00010078cfec;
    case 9:
      puVar49 = (uint *)(double)fVar47;
      goto code_r0x00010078cd1c;
    case 10:
      puVar49 = puVar33;
      goto code_r0x00010078cfcc;
    case 0xb:
      func_0x000107c04410(in_stack_00000030);
      goto code_r0x00010078cc74;
    case 0xc:
    case 0x4e:
      puVar26 = (uint *)&stack0x00000088;
      puVar23 = in_stack_00000030;
    case 0x16:
      func_0x000107c04e30(puVar23,puVar26);
      goto code_r0x00010078d0a8;
    case 0xd:
      goto code_r0x00010078cf24;
    case 0xe:
      puVar26 = (uint *)&stack0x00000088;
      goto code_r0x00010078cc10;
    case 0xf:
      *(uint **)(unaff_x29 + -0xa8) = puVar33;
      *(uint **)(unaff_x29 + -0xa0) = in_stack_00000090;
    case 0x2d:
code_r0x00010078cdbc:
      puVar31 = (uint *)0x6;
      goto code_r0x00010078cff4;
    case 0x10:
      puVar31 = (uint *)0x8;
    case 0x1a:
      goto code_r0x00010078cff4;
    default:
      in_stack_00000188 = *(uint **)(puVar33 + 2);
      in_stack_00000180 = *(uint **)puVar33;
      in_stack_00000198 = *(uint **)(puVar33 + 6);
      in_stack_00000190 = *(uint **)(puVar33 + 4);
      func_0x000107c046fc(in_stack_00000030,unaff_x29 + -0xb0);
      goto code_r0x00010078c0cc;
    case 0x12:
      puVar31 = (uint *)0x7;
      goto code_r0x00010078cff4;
    case 0x13:
    case 0x5a:
      puVar50 = *(uint **)(puVar33 + 2);
      puVar49 = *(uint **)puVar33;
      unaff_x21 = puVar33;
    case 0x55:
    case 0x67:
code_r0x00010078be1c:
      in_stack_00000198 = *(uint **)(unaff_x21 + 6);
      in_stack_00000190 = *(uint **)(unaff_x21 + 4);
      in_stack_00000180 = puVar49;
      in_stack_00000188 = puVar50;
code_r0x00010078be2c:
      puVar26 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078be30:
      puVar23 = in_stack_00000030;
code_r0x00010078be34:
      func_0x000107c05340(puVar23,puVar26);
code_r0x00010078be38:
      puVar33 = unaff_x21;
      goto code_r0x00010078c0cc;
    case 0x14:
      unaff_x21 = in_stack_00000090;
      unaff_x23 = puVar33;
      goto code_r0x00010078beb8;
    case 0x15:
      puVar36 = (uint *)((long)in_stack_00000098 * 0x40);
      unaff_x21 = in_stack_00000090 + (long)in_stack_00000098 * 0x10;
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(uint **)(unaff_x29 + -0x90) = in_stack_00000090;
      *(uint **)(unaff_x29 + -0x88) = in_stack_00000090;
      *(uint **)(unaff_x29 + -0x80) = puVar33;
      *(uint **)(unaff_x29 + -0x78) = unaff_x21;
      puVar31 = in_stack_00000090;
      puVar39 = in_stack_00000098;
      goto code_r0x00010078abf4;
    case 0x17:
      goto code_r0x00010078cd00;
    case 0x18:
      goto code_r0x00010078cc34;
    case 0x19:
      goto code_r0x00010078ccc4;
    case 0x1b:
      goto code_r0x00010078cd98;
    case 0x1c:
      goto code_r0x00010078ce14;
    case 0x1d:
      goto code_r0x00010078ccdc;
    case 0x1e:
      goto code_r0x00010078ce64;
    case 0x1f:
      goto code_r0x00010078cc24;
    case 0x20:
      goto code_r0x00010078ce54;
    case 0x21:
      goto code_r0x00010078cbcc;
    case 0x22:
      goto code_r0x00010078cc04;
    case 0x23:
      goto code_r0x00010078cdf8;
    case 0x24:
      goto code_r0x00010078cb50;
    case 0x25:
      goto code_r0x00010078cc7c;
    case 0x26:
      goto code_r0x00010078cb40;
    case 0x28:
      goto code_r0x00010078ce90;
    case 0x29:
      goto code_r0x00010078ab24;
    case 0x2a:
      goto code_r0x00010078b274;
    case 0x2b:
      goto code_r0x00010078a698;
    case 0x2c:
      goto code_r0x00010078cdb0;
    case 0x2e:
      goto code_r0x00010078cc98;
    case 0x2f:
      goto code_r0x00010078cd08;
    case 0x30:
      goto code_r0x00010078cbc4;
    case 0x31:
    case 0x42:
      goto code_r0x00010078ce60;
    case 0x32:
      goto code_r0x00010078cf14;
    case 0x33:
      goto code_r0x00010078cd68;
    case 0x34:
      goto code_r0x00010078cf58;
    case 0x35:
      goto code_r0x00010078cc4c;
    case 0x36:
      goto code_r0x00010078cf2c;
    case 0x37:
      goto code_r0x00010078cb90;
    case 0x38:
      goto code_r0x00010078cc28;
    case 0x39:
      goto code_r0x00010078ce84;
    case 0x3a:
      goto code_r0x00010078cb30;
    case 0x3b:
      goto code_r0x00010078ccd0;
    case 0x3c:
      goto code_r0x00010078caec;
    case 0x3e:
      goto code_r0x00010078cfc0;
    case 0x3f:
      goto code_r0x00010078bd78;
    case 0x40:
      goto code_r0x00010078bf30;
    case 0x41:
      goto code_r0x00010078b788;
    case 0x43:
      goto code_r0x00010078ce6c;
    case 0x44:
      goto code_r0x00010078cd5c;
    case 0x45:
      goto code_r0x00010078cdcc;
    case 0x46:
      goto code_r0x00010078cc88;
    case 0x47:
      goto code_r0x00010078cf1c;
    case 0x48:
      goto code_r0x00010078cfd8;
    case 0x4a:
      goto code_r0x00010078d008;
    case 0x4b:
      goto code_r0x00010078cd10;
    case 0x4d:
      goto code_r0x00010078cc3c;
    case 0x4f:
      goto code_r0x00010078cf34;
    case 0x50:
      goto code_r0x00010078cbe8;
    case 0x51:
      goto code_r0x00010078cd8c;
    case 0x52:
      puVar23 = (uint *)&UNK_108ca1a98;
      goto code_r0x00010078cbbc;
    case 0x54:
      goto code_r0x00010078d084;
    case 0x56:
      goto code_r0x00010078bf74;
    case 0x57:
      goto code_r0x00010078b33c;
    case 0x58:
      goto code_r0x00010078be3c;
    case 0x59:
      goto code_r0x00010078be4c;
    case 0x5b:
      goto code_r0x00010078be2c;
    case 0x5c:
      goto code_r0x00010078bde8;
    case 0x5d:
      goto code_r0x00010078be5c;
    case 0x5e:
      goto code_r0x00010078be74;
    case 0x5f:
      goto code_r0x00010078be34;
    case 0x60:
      goto code_r0x00010078be8c;
    case 0x61:
      goto code_r0x00010078be08;
    case 0x62:
      goto code_r0x00010078be7c;
    case 99:
      goto code_r0x00010078bdd4;
    case 100:
      goto code_r0x00010078bdf0;
    case 0x65:
      goto code_r0x00010078be64;
    case 0x66:
      goto code_r0x00010078bdbc;
    case 0x68:
      goto code_r0x00010078bdb4;
    case 0x6a:
      goto code_r0x00010078beb0;
    case 0x6b:
      goto code_r0x00010078a54c;
    case 0x6c:
      goto code_r0x00010078a57c;
    case 0x6d:
      goto code_r0x00010078a4f8;
    case 0x6e:
      goto code_r0x00010078c35c;
    case 0x6f:
    case 0x8b:
      goto code_r0x00010078c368;
    case 0x70:
      goto code_r0x00010078c270;
    case 0x71:
      goto code_r0x00010078c2d0;
    case 0x72:
      puVar31 = *(uint **)(puVar26 + 2);
      puVar36 = *(uint **)(puVar26 + 4);
    case 0x92:
      *(uint **)(unaff_x29 + -0xa8) = puVar31;
      *(uint **)(unaff_x29 + -0xa0) = puVar36;
      uVar27 = 5;
      goto code_r0x00010078c214;
    case 0x73:
    case 0x9b:
      goto code_r0x00010078c390;
    case 0x74:
      goto code_r0x00010078c3f0;
    case 0x75:
      goto code_r0x00010078c2f0;
    case 0x76:
      goto code_r0x00010078c48c;
    case 0x77:
      goto code_r0x00010078c250;
    case 0x78:
      goto code_r0x00010078c428;
    case 0x79:
      goto code_r0x00010078c1bc;
    case 0x7a:
      goto code_r0x00010078c224;
    case 0x7b:
      goto code_r0x00010078c3c8;
    case 0x7c:
      fVar47 = (float)puVar26[1];
      goto code_r0x00010078c188;
    case 0x7d:
      goto code_r0x00010078c2a8;
    case 0x7e:
      func_0x000107c0506c(pcVar22,&stack0x00000060,puVar31 + 2);
      goto LAB_10078a464;
    case 0x80:
      goto code_r0x00010078c4f0;
    case 0x81:
      goto code_r0x00010078b6fc;
    case 0x82:
      goto code_r0x00010078b8ac;
    case 0x83:
    case 0xfb:
      goto code_r0x00010078b408;
    case 0x84:
      goto code_r0x00010078c39c;
    case 0x85:
      goto code_r0x00010078c3b0;
    case 0x86:
      goto code_r0x00010078c2e8;
    case 0x87:
      goto code_r0x00010078c348;
    case 0x88:
      goto code_r0x00010078c258;
    case 0x89:
      goto code_r0x00010078c408;
    case 0x8a:
      goto code_r0x00010078c468;
    case 0x8c:
      goto code_r0x00010078c4dc;
    case 0x8d:
      goto code_r0x00010078c2c8;
    case 0x8e:
      goto code_r0x00010078c490;
    case 0x8f:
      goto code_r0x00010078c22c;
    case 0x90:
      goto code_r0x00010078c284;
    case 0x91:
code_r0x00010078c430:
      uVar25 = *(undefined8 *)((long)unaff_x21 + 1);
      uStack00000000000000a9 = (undefined6)*(undefined8 *)((long)unaff_x21 + 9);
      bStack00000000000000af = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 9) >> 0x30);
      bStack00000000000000a1 = (byte)uVar25;
      uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 8);
      bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x30);
      uStack00000000000000a8 = (undefined1)((ulong)uVar25 >> 0x38);
      goto code_r0x00010078c438;
    case 0x93:
      goto code_r0x00010078c310;
    case 0x94:
      puVar31 = (uint *)(ulong)*(byte *)((long)puVar26 + 1);
code_r0x00010078c1bc:
      *(char *)(unaff_x29 + -0xaf) = (char)puVar31;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
code_r0x00010078c1c4:
      goto code_r0x00010078c21c;
    case 0x96:
      goto code_r0x00010078c568;
    case 0x97:
      goto code_r0x00010078b734;
    case 0x98:
      goto code_r0x00010078b82c;
    case 0x99:
      goto code_r0x00010078ab74;
    case 0x9a:
      goto code_r0x00010078c37c;
    case 0x9c:
      goto code_r0x00010078c2ac;
    case 0x9d:
    case 0xb9:
      goto code_r0x00010078c30c;
    case 0x9e:
    case 0xbe:
      goto code_r0x00010078c21c;
    case 0x9f:
    case 0xb0:
      goto code_r0x00010078c3cc;
    case 0xa0:
      goto code_r0x00010078c42c;
    case 0xa1:
    case 0xb2:
      goto code_r0x00010078c32c;
    case 0xa2:
      goto code_r0x00010078c4b4;
    case 0xa3:
      goto code_r0x00010078c28c;
    case 0xa4:
      goto code_r0x00010078c45c;
    case 0xa5:
      goto code_r0x00010078c20c;
    case 0xa6:
      goto code_r0x00010078c254;
    case 0xa7:
      goto code_r0x00010078c3fc;
    case 0xa8:
code_r0x00010078c20c:
      *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078c210:
      uVar27 = 2;
      goto code_r0x00010078c214;
    case 0xa9:
      goto code_r0x00010078c2dc;
    case 0xaa:
      goto code_r0x00010078c17c;
    case 0xac:
      goto code_r0x00010078c52c;
    case 0xad:
      goto code_r0x00010078b718;
    case 0xae:
      goto code_r0x00010078b870;
    case 0xaf:
      goto code_r0x00010078b068;
    case 0xb1:
      goto code_r0x00010078c3d8;
    case 0xb3:
      goto code_r0x00010078c38c;
    case 0xb4:
      goto code_r0x00010078c29c;
    case 0xb5:
      goto code_r0x00010078c44c;
    case 0xb6:
      goto code_r0x00010078c4ac;
    case 0xb7:
      goto code_r0x00010078c3ac;
    case 0xb8:
      goto code_r0x00010078c50c;
    case 0xba:
      goto code_r0x00010078c4cc;
    case 0xbb:
      goto code_r0x00010078c26c;
    case 0xbc:
      goto code_r0x00010078c2bc;
    case 0xbd:
      goto code_r0x00010078c46c;
    case 0xbf:
      goto code_r0x00010078c34c;
    case 0xc0:
      goto code_r0x00010078c1fc;
    case 0xc2:
      goto code_r0x00010078c5ac;
    case 0xc3:
      goto code_r0x00010078b758;
    case 0xc4:
      goto code_r0x00010078b7f8;
    case 0xc5:
      goto code_r0x00010078a6e4;
    case 199:
      goto code_r0x00010078a8b4;
    case 200:
      goto code_r0x00010078a6cc;
    case 0xc9:
      goto code_r0x00010078a778;
    case 0xca:
      goto code_r0x00010078a558;
    case 0xcb:
      goto code_r0x00010078a940;
    case 0xcc:
      goto code_r0x00010078a9cc;
    case 0xcd:
      goto code_r0x00010078a804;
    case 0xce:
      goto code_r0x00010078aae8;
    case 0xcf:
      goto code_r0x00010078a5e4;
    case 0xd0:
      goto code_r0x00010078aa58;
    case 0xd1:
      goto code_r0x00010078a960;
    case 0xd2:
      goto code_r0x00010078a97c;
    case 0xd3:
      goto code_r0x00010078a92c;
    case 0xd4:
      goto code_r0x00010078a950;
    case 0xd5:
      goto code_r0x00010078a8f8;
    case 0xd6:
      goto code_r0x00010078a998;
    case 0xd7:
      goto code_r0x00010078a9bc;
    case 0xd8:
      goto code_r0x00010078a958;
    case 0xd9:
      goto code_r0x00010078a9e0;
    case 0xda:
      goto code_r0x00010078a914;
    case 0xdb:
      goto code_r0x00010078a9c4;
    case 0xdc:
      goto code_r0x00010078a7f0;
    case 0xdd:
      goto code_r0x00010078a900;
    case 0xde:
      goto code_r0x00010078a9a0;
    case 0xdf:
      goto code_r0x00010078a7dc;
    case 0xe0:
      goto code_r0x00010078a934;
    case 0xe1:
    case 0xe2:
      goto code_r0x00010078a7a8;
    case 0xe3:
      goto code_r0x00010078aa3c;
    case 0xe4:
      goto code_r0x00010078aa50;
    case 0xe6:
      goto code_r0x00010078a510;
    case 0xe7:
      goto code_r0x00010078ba58;
    case 0xe8:
      goto code_r0x00010078ba64;
    case 0xe9:
      goto code_r0x00010078ba20;
    case 0xea:
      goto code_r0x00010078ba48;
    case 0xeb:
      goto code_r0x00010078b964;
    case 0xec:
      goto code_r0x00010078ba74;
    case 0xed:
      goto code_r0x00010078ba8c;
    case 0xee:
      goto code_r0x00010078ba50;
    case 0xef:
      goto code_r0x00010078baa4;
    case 0xf0:
    case 0xfe:
      goto code_r0x00010078b9a0;
    case 0xf1:
      goto code_r0x00010078ba94;
    case 0xf2:
      goto code_r0x00010078b900;
    case 0xf3:
      goto code_r0x00010078b974;
    case 0xf4:
      goto code_r0x00010078ba7c;
    case 0xf5:
      goto code_r0x00010078b860;
    case 0xf6:
      goto code_r0x00010078ba30;
    case 0xf7:
      goto code_r0x00010078b84c;
    case 0xf9:
      goto code_r0x00010078bac8;
    case 0xfa:
      goto code_r0x00010078b3e4;
    case 0xfc:
      goto code_r0x00010078afdc;
    case 0xfd:
      goto code_r0x00010078b98c;
    case 0xff:
      goto code_r0x00010078b940;
    }
  }
  bVar15 = bVar8;
  if (uVar29 == 0) {
code_r0x00010078a4f8:
    puVar39 = (uint *)&UNK_108c9b190;
    uVar41 = (ulong)*(ushort *)(&UNK_108c9b190 + (ulong)bStack0000000000000040 * 2);
    puVar40 = &UNK_10078a514 + uVar41 * 4;
code_r0x00010078a510:
    bVar15 = bVar8;
    puVar38 = (uint *)(ulong)bStack0000000000000040;
    uVar29 = (uint)bStack0000000000000040;
    bVar20 = bVar15;
    bVar16 = bVar15;
    bVar10 = bVar15;
    bVar12 = bVar15;
    puVar42 = unaff_x21;
    bVar37 = bStack0000000000000040;
    switch(puVar40) {
    case (undefined *)0x10078a430:
code_r0x00010078a430:
      bStack0000000000000038 = (byte)puVar31;
      lVar24 = ((ulong)((long)in_stack_00000138 - (long)in_stack_00000128) >> 5) + 1;
      puVar36 = in_stack_00000128;
      while (lVar24 = lVar24 + -1, lVar24 != 0) {
        puVar36 = puVar36 + 8;
        FUN_100e077ec();
        unaff_x21 = puVar36;
      }
      unaff_x19 = (uint *)0x0;
      if (in_stack_00000130 != (uint *)0x0) {
        _free(in_stack_00000120);
      }
      goto LAB_10078a464;
    case (undefined *)0x10078a514:
      in_stack_00000188 = *(uint **)(puVar33 + 2);
      in_stack_00000180 = *(uint **)puVar33;
      in_stack_00000198 = *(uint **)(puVar33 + 6);
      in_stack_00000190 = *(uint **)(puVar33 + 4);
      func_0x000107c046b4(in_stack_00000030,unaff_x29 + -0xb0);
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
      goto code_r0x00010078a62c;
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
      puVar36 = (uint *)((long)puVar39 * 0x40);
      unaff_x21 = puVar31 + (long)puVar39 * 0x10;
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(uint **)(unaff_x29 + -0x90) = puVar31;
      *(uint **)(unaff_x29 + -0x88) = puVar31;
      *(uint **)(unaff_x29 + -0x80) = puVar38;
      *(uint **)(unaff_x29 + -0x78) = unaff_x21;
      unaff_x24 = (uint *)0x16;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
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
      puVar36 = (uint *)((long)in_stack_00000098 * 0x40);
      in_stack_00000028 = in_stack_00000090 + (long)in_stack_00000098 * 0x10;
      unaff_x25 = (uint *)(unaff_x29 + -0xb0);
      *(uint **)(unaff_x29 + -0x90) = in_stack_00000090;
      *(uint **)(unaff_x29 + -0x88) = in_stack_00000090;
      *(uint **)(unaff_x29 + -0x80) = puVar33;
      *(uint **)(unaff_x29 + -0x78) = in_stack_00000028;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
      if (in_stack_00000098 == (uint *)0x0) goto code_r0x00010078c248;
      puVar46 = (uint *)0x0;
      unaff_x22 = (uint *)((ulong)&stack0x000000a0 | 1);
      unaff_x21 = (uint *)((ulong)unaff_x25 | 1);
      puVar31 = in_stack_00000090;
      goto code_r0x00010078b3c8;
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
      goto code_r0x00010078b8a0;
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
code_r0x00010078be64:
      in_stack_00000188 = *(uint **)(puVar33 + 2);
      in_stack_00000180 = *(uint **)puVar33;
      puVar31 = (uint *)&stack0x000000a0;
      unaff_x21 = puVar33;
    case (undefined *)0x10078be74:
code_r0x00010078be74:
      uVar25 = *(undefined8 *)(unaff_x21 + 4);
      *(undefined8 *)(puVar31 + 0x3e) = *(undefined8 *)(unaff_x21 + 6);
      *(undefined8 *)(puVar31 + 0x3c) = uVar25;
code_r0x00010078be7c:
      puVar26 = (uint *)(unaff_x29 + -0xb0);
      puVar23 = in_stack_00000030;
code_r0x00010078be84:
      func_0x000107c05598(puVar23,puVar26);
      puVar33 = unaff_x21;
      goto code_r0x00010078c0cc;
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
code_r0x00010078c188:
      puVar49 = (uint *)(double)fVar47;
    case (undefined *)0x10078c1fc:
code_r0x00010078c1fc:
      *(uint **)(unaff_x29 + -0xa8) = puVar49;
code_r0x00010078c200:
      puVar31 = (uint *)0x3;
code_r0x00010078c204:
      uVar27 = SUB81(puVar31,0);
code_r0x00010078c214:
      *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
code_r0x00010078c21c:
      puVar23 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078c224:
      puVar26 = (uint *)&stack0x00000060;
code_r0x00010078c228:
      goto code_r0x00010078d08c;
    case (undefined *)0x10078c1c4:
      goto code_r0x00010078c1c4;
    case (undefined *)0x10078c1cc:
      goto code_r0x00010078c1cc;
    case (undefined *)0x10078c200:
      goto code_r0x00010078c200;
    case (undefined *)0x10078c204:
      goto code_r0x00010078c204;
    case (undefined *)0x10078c228:
      goto code_r0x00010078c228;
    case (undefined *)0x10078c22c:
code_r0x00010078c22c:
      uVar27 = 7;
      goto code_r0x00010078c214;
    case (undefined *)0x10078c23c:
      goto code_r0x00010078c23c;
    case (undefined *)0x10078c244:
      goto code_r0x00010078c244;
    case (undefined *)0x10078c264:
code_r0x00010078c264:
      uVar25 = *(undefined8 *)(unaff_x21 + 4);
      uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x21 + 6);
      uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 6) >> 0x38);
      uStack00000000000000b0 = (undefined1)uVar25;
      uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
      uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
code_r0x00010078c26c:
      puVar36 = (uint *)0x1;
code_r0x00010078c270:
      in_stack_00000140 = puVar36;
code_r0x00010078c274:
      bStack00000000000000a0 = (byte)puVar31;
      puVar23 = (uint *)&stack0x00000038;
      puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c280:
      FUN_1004b64d4(puVar23,puVar26);
code_r0x00010078c284:
      unaff_x27 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
      unaff_x22 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
code_r0x00010078c288:
      puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c28c:
      bVar15 = unaff_x27 == puVar31;
code_r0x00010078c290:
      unaff_x24 = in_stack_00000030;
      if (bVar15) {
code_r0x00010078b350:
        *(uint **)(in_stack_00000030 + 2) = unaff_x22;
        *(char *)in_stack_00000030 = '\x05';
code_r0x00010078b35c:
        lVar24 = ((ulong)((long)unaff_x26 - (long)unaff_x20) >> 5) + 1;
        while (lVar24 = lVar24 + -1, unaff_x23 = unaff_x25, lVar24 != 0) {
          FUN_100e077ec(unaff_x20);
          unaff_x20 = unaff_x20 + 8;
        }
        goto joined_r0x00010078c03c;
      }
code_r0x00010078c298:
      unaff_x19 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078c29c:
      in_stack_00000030 = (uint *)0x2;
code_r0x00010078c2a0:
      puVar31 = (uint *)0x2;
      bVar18 = unaff_x23 == (uint *)0x1;
code_r0x00010078c2a8:
      cVar28 = (char)puVar31;
      cVar45 = (char)in_stack_00000030;
      if (!bVar18) {
code_r0x00010078c2ac:
        unaff_x20 = unaff_x21 + 0x10;
code_r0x00010078c2b0:
        in_stack_00000128 = unaff_x20;
code_r0x00010078c2b4:
        puVar31 = (uint *)(ulong)(byte)unaff_x21[8];
code_r0x00010078c2b8:
        bVar19 = (int)puVar31 == 0x16;
code_r0x00010078c2bc:
        if (bVar19) {
          puVar31 = (uint *)0x2;
code_r0x00010078c2c4:
          cVar45 = (char)in_stack_00000030;
          cVar28 = (char)puVar31;
        }
        else {
          uStack0000000000000041 = (uint7)*(undefined8 *)((long)unaff_x21 + 0x29);
          uStack0000000000000039 = (undefined7)*(undefined8 *)((long)unaff_x21 + 0x21);
          bStack0000000000000040 = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x21) >> 0x38);
          uStack0000000000000050 = (undefined1)*(undefined8 *)(unaff_x21 + 0xe);
          uStack0000000000000051 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0xe) >> 8);
          bStack0000000000000048 = (byte)*(undefined8 *)(unaff_x21 + 0xc);
          uStack0000000000000049 = (uint7)((ulong)*(undefined8 *)(unaff_x21 + 0xc) >> 8);
code_r0x00010078d0ec:
          in_stack_00000140 = (uint *)0x2;
          bStack0000000000000038 = (byte)puVar31;
          bVar15 = (int)puVar31 == 0x10;
code_r0x00010078d0fc:
          cVar45 = (char)in_stack_00000030;
          if (bVar15) {
code_r0x00010078d110:
            _bStack0000000000000100 = (uint *)CONCAT62(uStack0000000000000102,0x200);
            pcVar22 = (char *)&stack0x00000038;
code_r0x00010078d11c:
            cVar45 = (char)in_stack_00000030;
            FUN_100e077ec(pcVar22);
          }
          else if ((int)puVar31 == 0x11) {
            puVar32 = (undefined8 *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
            uVar51 = puVar32[1];
            uVar25 = *puVar32;
            uStack00000000000000a8 = (undefined1)uVar51;
            uStack00000000000000a9 = (undefined6)((ulong)uVar51 >> 8);
            bStack00000000000000af = (byte)((ulong)uVar51 >> 0x38);
            bStack00000000000000a0 = (byte)uVar25;
            bStack00000000000000a1 = (byte)((ulong)uVar25 >> 8);
            uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 0x10);
            bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x38);
            uVar25 = puVar32[2];
            uStack00000000000000b8 = (undefined7)puVar32[3];
            uStack00000000000000bf = (undefined1)((ulong)puVar32[3] >> 0x38);
            uStack00000000000000b0 = (undefined1)uVar25;
            uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
            uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
            func_0x000101429444(&stack0x00000100,&stack0x000000a0);
            _free(puVar32);
          }
          else {
            if ((int)puVar31 == 0x12) goto code_r0x00010078d110;
            func_0x000101429444(&stack0x00000100,&stack0x00000038);
          }
          if (((ulong)_bStack0000000000000100 & 1) != 0) {
            *(uint **)(unaff_x24 + 2) = in_stack_00000108;
            *(char *)unaff_x24 = '\x05';
            if (unaff_x27 != (uint *)0x0) {
              _free(unaff_x22);
            }
            goto code_r0x00010078b35c;
          }
          cVar28 = cStack0000000000000101;
        }
      }
      *(char *)unaff_x24 = cVar45;
      *(char *)((long)unaff_x24 + 1) = cVar28;
      *(uint **)(unaff_x24 + 2) = unaff_x27;
      *(uint **)(unaff_x24 + 4) = unaff_x22;
      *(uint **)(unaff_x24 + 6) = unaff_x19;
      in_stack_00000198 = *(uint **)(unaff_x24 + 6);
      in_stack_00000190 = *(uint **)(unaff_x24 + 4);
      in_stack_000001a8 = *(undefined8 *)(unaff_x24 + 10);
      in_stack_000001a0 = *(undefined8 *)(unaff_x24 + 8);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x24 + 0xc);
      in_stack_00000188 = *(uint **)(unaff_x24 + 2);
      in_stack_00000180 = *(uint **)unaff_x24;
      lVar24 = FUN_100fbc738(&stack0x00000120);
      if (lVar24 != 0) {
        *(long *)(unaff_x24 + 2) = lVar24;
        *(char *)unaff_x24 = '\x05';
        goto code_r0x00010078d3b4;
      }
      goto code_r0x00010078d0a8;
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
      uVar27 = 8;
      break;
    case (undefined *)0x10078cc30:
      puVar31 = (uint *)&stack0x00000080;
code_r0x00010078cc34:
      puVar26 = puVar31 + 2;
      puVar23 = in_stack_00000030;
      goto code_r0x00010078cc3c;
    case (undefined *)0x10078cc84:
      puVar23 = in_stack_00000030;
code_r0x00010078cc88:
      func_0x000107c0439c(puVar23);
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078ccd0:
code_r0x00010078ccd0:
      puVar31 = puVar33;
code_r0x00010078ccd4:
code_r0x00010078ceb8:
      *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078cebc:
      uVar27 = 1;
      break;
    case (undefined *)0x10078cd28:
      func_0x000107c04b64(in_stack_00000030,&stack0x00000088);
      goto code_r0x00010078d0a8;
    case (undefined *)0x10078cd58:
code_r0x00010078cd58:
      puVar49 = (uint *)(double)fVar47;
      goto code_r0x00010078cd5c;
    case (undefined *)0x10078cda4:
      puVar31 = (uint *)(((ulong)uStack0000000000000041 & 0xffff00) >> 8);
      goto code_r0x00010078ceb8;
    case (undefined *)0x10078cdd4:
      puVar31 = puVar33;
      puVar36 = in_stack_00000090;
code_r0x00010078cdd8:
      *(uint **)(unaff_x29 + -0xa8) = puVar31;
      *(uint **)(unaff_x29 + -0xa0) = puVar36;
      puVar31 = (uint *)0x6;
code_r0x00010078cde0:
      uVar27 = SUB81(puVar31,0);
      break;
    case (undefined *)0x10078ce14:
code_r0x00010078ce14:
      *(uint **)(unaff_x29 + -0xa8) = puVar26;
      goto code_r0x00010078ce18;
    case (undefined *)0x10078ce74:
      goto code_r0x00010078d054;
    case (undefined *)0x10078cea8:
      *(byte *)(unaff_x29 + -0xaf) = bVar3;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
      goto code_r0x00010078d064;
    case (undefined *)0x10078ceb4:
      puVar31 = (uint *)((ulong)uStack0000000000000041 & 0xff);
      goto code_r0x00010078ceb8;
    case (undefined *)0x10078cf64:
      puVar34 = (uint *)(long)(char)bVar3;
      goto code_r0x00010078d054;
    case (undefined *)0x10078cf7c:
      puVar31 = puVar33;
      puVar36 = in_stack_00000090;
      goto code_r0x00010078cf80;
    case (undefined *)0x10078d020:
      puVar34 = (uint *)(long)sVar4;
      goto code_r0x00010078d054;
    case (undefined *)0x10078d030:
      goto code_r0x00010078d030;
    case (undefined *)0x10078d050:
      puVar34 = puVar33;
code_r0x00010078d054:
      *(uint **)(unaff_x29 + -0xa8) = puVar34;
      uVar27 = 2;
      break;
    case (undefined *)0x10078d0cc:
      uVar27 = 7;
    }
code_r0x00010078d05c:
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
code_r0x00010078d064:
    goto code_r0x00010078d084;
  }
LAB_10078a5c4:
code_r0x00010078a5c8:
  puVar39 = (uint *)&UNK_108c9b164;
  puVar40 = &UNK_10078a5e0;
  uVar41 = (ulong)*(ushort *)(&UNK_108c9b164 + (ulong)bStack0000000000000040 * 2);
code_r0x00010078a5d8:
  puVar38 = (uint *)(ulong)bStack0000000000000040;
  uVar29 = (uint)bStack0000000000000040;
  bVar8 = bVar15;
  puVar42 = unaff_x21;
  bVar37 = bStack0000000000000040;
  switch(puVar40 + uVar41 * 4) {
  case (undefined *)0x10078a5e0:
code_r0x00010078a5e0:
    unaff_x21 = puVar33;
code_r0x00010078a5e4:
    in_stack_00000188 = *(uint **)(unaff_x21 + 2);
    in_stack_00000180 = *(uint **)unaff_x21;
    in_stack_00000198 = *(uint **)(unaff_x21 + 6);
    in_stack_00000190 = *(uint **)(unaff_x21 + 4);
    func_0x000107c04640(in_stack_00000030,unaff_x29 + -0xb0);
    puVar33 = unaff_x21;
    goto code_r0x00010078c0cc;
  case (undefined *)0x10078a60c:
    goto code_r0x00010078a60c;
  case (undefined *)0x10078a624:
code_r0x00010078a624:
    bStack0000000000000038 = bVar2;
code_r0x00010078a628:
    puVar31 = (uint *)0x15;
code_r0x00010078a62c:
    bStack0000000000000040 = (byte)puVar31;
    puVar31 = *(uint **)(puVar36 + 0x36);
    uStack0000000000000058 = SUB81(puVar31,0);
    uStack0000000000000059 = (undefined7)((ulong)puVar31 >> 8);
    uStack0000000000000051 = (undefined7)((ulong)*(undefined8 *)(puVar36 + 0x34) >> 8);
    uStack0000000000000049 = (uint7)*(undefined8 *)((long)puVar36 + 0xc9);
    uStack0000000000000050 = (undefined1)((ulong)*(undefined8 *)((long)puVar36 + 0xc9) >> 0x38);
    uStack0000000000000041 = (uint7)*(undefined8 *)((long)puVar36 + 0xc1);
    bStack0000000000000048 = (byte)((ulong)*(undefined8 *)((long)puVar36 + 0xc1) >> 0x38);
    puVar50 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    puVar49 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    puVar54 = (uint *)CONCAT71(uStack0000000000000051,uStack0000000000000050);
    puVar53 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078a64c:
    uStack00000000000000c0 = SUB87(puVar31,0);
    uStack00000000000000c7 = (undefined1)((ulong)puVar31 >> 0x38);
    uStack00000000000000a8 = SUB81(puVar50,0);
    uStack00000000000000a9 = (undefined6)((ulong)puVar50 >> 8);
    bStack00000000000000af = (byte)((ulong)puVar50 >> 0x38);
    bStack00000000000000a0 = (byte)puVar49;
    bStack00000000000000a1 = (byte)((ulong)puVar49 >> 8);
    uStack00000000000000a2 = (undefined5)((ulong)puVar49 >> 0x10);
    bStack00000000000000a7 = (byte)((ulong)puVar49 >> 0x38);
    uStack00000000000000b8 = SUB87(puVar54,0);
    uStack00000000000000bf = (undefined1)((ulong)puVar54 >> 0x38);
    uStack00000000000000b0 = SUB81(puVar53,0);
    uStack00000000000000b1 = (undefined6)((ulong)puVar53 >> 8);
    uStack00000000000000b7 = (undefined1)((ulong)puVar53 >> 0x38);
    unaff_x19 = *(uint **)(unaff_x29 + -0x88);
    unaff_x20 = *(uint **)(unaff_x29 + -0x78);
    puVar23 = unaff_x21 + 8;
code_r0x00010078a660:
    FUN_100d34830(puVar23);
    bVar15 = unaff_x20 == unaff_x19;
code_r0x00010078a66c:
    if (bVar15) {
code_r0x00010078a670:
      unaff_x20 = (uint *)0x0;
      cVar28 = *(char *)(unaff_x29 + -0xb0);
    }
    else {
      in_stack_00000120 = *(uint **)(unaff_x29 + -0x70);
      unaff_x20 = (uint *)thunk_FUN_1087e422c((char *)((long)in_stack_00000120 +
                                                      ((ulong)((long)unaff_x20 - (long)unaff_x19) >>
                                                      6)),&stack0x00000120,&UNK_10b23a190);
      cVar28 = *(char *)(unaff_x29 + -0xb0);
    }
    if (cVar28 != '\x16') {
      FUN_100e077ec(unaff_x29 + -0xb0);
    }
    if (unaff_x20 != (uint *)0x0) {
      bStack0000000000000040 = (byte)unaff_x20;
      uStack0000000000000041 = (uint7)((ulong)unaff_x20 >> 8);
code_r0x00010078a690:
      bStack0000000000000038 = 5;
code_r0x00010078a698:
      puVar32 = (undefined8 *)&stack0x000000a0;
code_r0x00010078a69c:
      FUN_100e077ec((ulong)puVar32 | 8);
    }
    goto LAB_10078a464;
  case (undefined *)0x10078a660:
    goto code_r0x00010078a660;
  case (undefined *)0x10078a66c:
    goto code_r0x00010078a66c;
  case (undefined *)0x10078a690:
    goto code_r0x00010078a690;
  case (undefined *)0x10078a6f8:
    func_0x0001013efd54();
    bStack0000000000000040 = (byte)in_stack_00000108;
    bVar3 = bStack0000000000000040;
    uStack0000000000000041 = (uint7)((ulong)in_stack_00000108 >> 8);
    if (bStack0000000000000100 == 0x16) {
      puVar31 = (uint *)0x5;
      goto code_r0x00010078a430;
    }
    uStack00000000000000bf = (undefined1)in_stack_00000118;
    uStack00000000000000c0 = (undefined7)((ulong)in_stack_00000118 >> 8);
    uStack00000000000000b7 = SUB81(in_stack_00000110,0);
    uStack00000000000000b8 = (undefined7)((ulong)in_stack_00000110 >> 8);
    uStack00000000000000b0 = (undefined1)((ulong)in_stack_00000108 >> 8);
    uStack00000000000000b1 = (undefined6)((ulong)in_stack_00000108 >> 0x10);
    uStack00000000000000a8 = (undefined1)((ulong)_bStack0000000000000100 >> 8);
    uStack00000000000000a9 = (undefined6)((ulong)_bStack0000000000000100 >> 0x10);
    uStack0000000000000039 =
         CONCAT52(uStack00000000000000a2,CONCAT11(bStack00000000000000a1,bStack00000000000000a0));
    uStack0000000000000051 = uStack00000000000000b8;
    uStack0000000000000050 = uStack00000000000000b7;
    bStack0000000000000048 = bStack0000000000000040;
    bStack0000000000000040 = bStack0000000000000100;
    in_stack_00000188 = _bStack0000000000000100;
    in_stack_00000180 = (uint *)CONCAT71(uStack0000000000000039,bVar2);
    in_stack_00000198 = in_stack_00000110;
    in_stack_00000190 = in_stack_00000108;
    *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000118;
    puVar53 = in_stack_00000108;
    puVar54 = in_stack_00000110;
    bStack0000000000000038 = bVar2;
    uStack0000000000000049 = uStack0000000000000041;
    uStack0000000000000041 = (uint7)((ulong)_bStack0000000000000100 >> 8);
    uStack0000000000000058 = uStack00000000000000bf;
    uStack0000000000000059 = uStack00000000000000c0;
    bStack00000000000000a7 = bStack0000000000000100;
    bStack00000000000000af = bVar3;
    lVar24 = FUN_100fbc738(&stack0x00000120);
    if (lVar24 != 0) {
      bStack0000000000000040 = (byte)lVar24;
      uStack0000000000000041 = (uint7)((ulong)lVar24 >> 8);
      bStack0000000000000038 = 5;
      puVar32 = (undefined8 *)(unaff_x29 + -0xb0);
      goto code_r0x00010078a69c;
    }
    goto LAB_10078a464;
  case (undefined *)0x10078a7e0:
    goto code_r0x00010078a7e0;
  case (undefined *)0x10078a7f8:
    goto code_r0x00010078a7f8;
  case (undefined *)0x10078a818:
    goto code_r0x00010078a818;
  case (undefined *)0x10078a88c:
    goto code_r0x00010078a88c;
  case (undefined *)0x10078a8bc:
    goto code_r0x00010078a8bc;
  case (undefined *)0x10078a8f0:
    goto code_r0x00010078a8f0;
  case (undefined *)0x10078a904:
    goto code_r0x00010078a904;
  case (undefined *)0x10078a918:
    goto code_r0x00010078a918;
  case (undefined *)0x10078a9c8:
    goto code_r0x00010078a9c8;
  case (undefined *)0x10078aa0c:
    goto code_r0x00010078aa0c;
  case (undefined *)0x10078aa14:
    goto code_r0x00010078aa14;
  case (undefined *)0x10078aa28:
    goto code_r0x00010078aa28;
  case (undefined *)0x10078aa40:
    goto code_r0x00010078aa40;
  case (undefined *)0x10078aa48:
    goto code_r0x00010078aa48;
  case (undefined *)0x10078aa54:
    goto code_r0x00010078aa54;
  case (undefined *)0x10078aa64:
    goto code_r0x00010078aa64;
  case (undefined *)0x10078aa6c:
    goto code_r0x00010078aa6c;
  case (undefined *)0x10078aa74:
    goto code_r0x00010078aa74;
  case (undefined *)0x10078aa90:
    goto code_r0x00010078aa90;
  case (undefined *)0x10078aaac:
    goto code_r0x00010078aaac;
  case (undefined *)0x10078aab4:
    goto code_r0x00010078aab4;
  case (undefined *)0x10078aad0:
    goto code_r0x00010078aad0;
  case (undefined *)0x10078aad8:
    goto code_r0x00010078aad8;
  case (undefined *)0x10078aae0:
    goto code_r0x00010078aae0;
  case (undefined *)0x10078aaf4:
    goto code_r0x00010078aaf4;
  case (undefined *)0x10078ab50:
    goto code_r0x00010078ab50;
  case (undefined *)0x10078ab64:
    goto code_r0x00010078ab64;
  case (undefined *)0x10078ab6c:
    goto code_r0x00010078ab6c;
  case (undefined *)0x10078abfc:
code_r0x00010078abfc:
    *(byte *)(unaff_x29 + -0xb0) = bVar37;
code_r0x00010078ac00:
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    if (puVar39 != (uint *)0x0) {
      unaff_x26 = (uint *)0x0;
      unaff_x22 = (uint *)((ulong)&stack0x000000a0 | 1);
      unaff_x20 = (uint *)((ulong)unaff_x19 | 1);
      in_stack_00000008 = (uint *)(((ulong)(puVar36 + -0x10) >> 6) + 1);
      unaff_x23 = (uint *)0x8000000000000000;
      unaff_x25 = (uint *)0x8000000000000000;
      unaff_x27 = puVar31;
      goto code_r0x00010078ac5c;
    }
    unaff_x25 = (uint *)0x0;
code_r0x00010078c23c:
    goto code_r0x00010078c5ac;
  case (undefined *)0x10078ac88:
    goto code_r0x00010078ac88;
  case (undefined *)0x10078ad48:
    goto code_r0x00010078ad48;
  case (undefined *)0x10078b01c:
    goto code_r0x00010078b01c;
  case (undefined *)0x10078b040:
    goto code_r0x00010078b040;
  case (undefined *)0x10078b088:
    goto code_r0x00010078b088;
  case (undefined *)0x10078b0ac:
    goto code_r0x00010078b0ac;
  case (undefined *)0x10078b0f0:
    goto code_r0x00010078b0f0;
  case (undefined *)0x10078b17c:
    goto code_r0x00010078b17c;
  case (undefined *)0x10078b450:
    goto code_r0x00010078b450;
  case (undefined *)0x10078b4f8:
    goto code_r0x00010078b4f8;
  case (undefined *)0x10078b51c:
    goto code_r0x00010078b51c;
  case (undefined *)0x10078b810:
    goto code_r0x00010078b810;
  case (undefined *)0x10078b82c:
    goto code_r0x00010078b82c;
  case (undefined *)0x10078b838:
    goto code_r0x00010078b838;
  case (undefined *)0x10078b848:
    goto code_r0x00010078b848;
  case (undefined *)0x10078b860:
    goto code_r0x00010078b860;
  case (undefined *)0x10078b86c:
    goto code_r0x00010078b86c;
  case (undefined *)0x10078b870:
    goto code_r0x00010078b870;
  case (undefined *)0x10078b89c:
    puVar31 = in_stack_00000090;
    puVar38 = puVar33;
code_r0x00010078b8a0:
    puVar36 = (uint *)((long)in_stack_00000098 << 6);
    puVar39 = in_stack_00000098;
code_r0x00010078b8a8:
    unaff_x21 = (uint *)((long)puVar31 + (long)puVar36);
code_r0x00010078b8ac:
    unaff_x19 = (uint *)(unaff_x29 + -0xb0);
    *(uint **)(unaff_x29 + -0x90) = puVar31;
    *(uint **)(unaff_x29 + -0x88) = puVar31;
    *(uint **)(unaff_x29 + -0x80) = puVar38;
    *(uint **)(unaff_x29 + -0x78) = unaff_x21;
code_r0x00010078b8b8:
    bVar37 = 0x16;
code_r0x00010078b8bc:
    *(byte *)(unaff_x29 + -0xb0) = bVar37;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    if (puVar39 == (uint *)0x0) {
code_r0x00010078c258:
      goto code_r0x00010078c84c;
    }
code_r0x00010078b8c8:
    unaff_x25 = (uint *)0x0;
    puVar38 = (uint *)&stack0x000000a0;
code_r0x00010078b8d4:
    unaff_x20 = (uint *)((ulong)puVar38 | 1);
code_r0x00010078b8d8:
    puVar46 = (uint *)((ulong)unaff_x19 | 1);
    puVar38 = (uint *)((ulong)&stack0x00000038 | 1);
code_r0x00010078b8e4:
    puVar36 = puVar36 + -0x10;
    in_stack_00000028 = puVar38;
code_r0x00010078b8ec:
    puVar36 = (uint *)(((ulong)puVar36 >> 6) + 1);
code_r0x00010078b8f4:
    in_stack_00000018 = puVar36;
code_r0x00010078b8f8:
    unaff_x27 = puVar31 + 0x10;
code_r0x00010078b8fc:
    unaff_x22 = (uint *)0x3;
code_r0x00010078b900:
    unaff_x26 = unaff_x27;
    unaff_x23 = (uint *)0x8000000000000000;
    unaff_x27 = unaff_x26;
    goto code_r0x00010078b940;
  case (undefined *)0x10078b90c:
    goto code_r0x00010078b90c;
  case (undefined *)0x10078b940:
    goto code_r0x00010078b940;
  case (undefined *)0x10078b960:
    goto code_r0x00010078b960;
  case (undefined *)0x10078b96c:
    goto code_r0x00010078b96c;
  case (undefined *)0x10078b974:
    goto code_r0x00010078b974;
  case (undefined *)0x10078b984:
    goto code_r0x00010078b984;
  case (undefined *)0x10078b988:
    goto code_r0x00010078b988;
  case (undefined *)0x10078b9a0:
    goto code_r0x00010078b9a0;
  case (undefined *)0x10078b9b0:
    goto code_r0x00010078b9b0;
  case (undefined *)0x10078b9c0:
    goto code_r0x00010078b9c0;
  case (undefined *)0x10078b9c4:
    goto code_r0x00010078b9c4;
  case (undefined *)0x10078b9e0:
    goto code_r0x00010078b9e0;
  case (undefined *)0x10078b9ec:
    goto code_r0x00010078b9ec;
  case (undefined *)0x10078b9fc:
    goto code_r0x00010078b9fc;
  case (undefined *)0x10078ba0c:
    goto code_r0x00010078ba0c;
  case (undefined *)0x10078ba10:
    goto code_r0x00010078ba10;
  case (undefined *)0x10078ba14:
    goto code_r0x00010078ba14;
  case (undefined *)0x10078ba20:
    goto code_r0x00010078ba20;
  case (undefined *)0x10078ba30:
    goto code_r0x00010078ba30;
  case (undefined *)0x10078ba40:
    goto code_r0x00010078ba40;
  case (undefined *)0x10078ba54:
    goto code_r0x00010078ba54;
  case (undefined *)0x10078ba64:
    goto code_r0x00010078ba64;
  case (undefined *)0x10078ba74:
    goto code_r0x00010078ba74;
  case (undefined *)0x10078ba78:
    goto code_r0x00010078ba78;
  case (undefined *)0x10078ba88:
    goto code_r0x00010078ba88;
  case (undefined *)0x10078ba90:
    goto code_r0x00010078ba90;
  case (undefined *)0x10078ba98:
    goto code_r0x00010078ba98;
  case (undefined *)0x10078baa0:
    goto code_r0x00010078baa0;
  case (undefined *)0x10078baa4:
    goto code_r0x00010078baa4;
  case (undefined *)0x10078bab4:
    goto code_r0x00010078bab4;
  case (undefined *)0x10078baf8:
    goto code_r0x00010078baf8;
  case (undefined *)0x10078bb14:
    goto code_r0x00010078bb14;
  case (undefined *)0x10078bb24:
    goto code_r0x00010078bb24;
  case (undefined *)0x10078bb2c:
    goto code_r0x00010078bb2c;
  case (undefined *)0x10078bb34:
    goto code_r0x00010078bb34;
  case (undefined *)0x10078bb3c:
    goto code_r0x00010078bb3c;
  case (undefined *)0x10078bb44:
    goto code_r0x00010078bb44;
  case (undefined *)0x10078bb4c:
    goto code_r0x00010078bb4c;
  case (undefined *)0x10078bb54:
    goto code_r0x00010078bb54;
  case (undefined *)0x10078bb5c:
    goto code_r0x00010078bb5c;
  case (undefined *)0x10078bb64:
    goto code_r0x00010078bb64;
  case (undefined *)0x10078bb6c:
    goto code_r0x00010078bb6c;
  case (undefined *)0x10078bb78:
    goto code_r0x00010078bb78;
  case (undefined *)0x10078bb88:
    goto code_r0x00010078bb88;
  case (undefined *)0x10078bb90:
    goto code_r0x00010078bb90;
  case (undefined *)0x10078bba0:
    goto code_r0x00010078bba0;
  case (undefined *)0x10078bba8:
    goto code_r0x00010078bba8;
  case (undefined *)0x10078bbb4:
    goto code_r0x00010078bbb4;
  case (undefined *)0x10078bbb8:
    goto code_r0x00010078bbb8;
  case (undefined *)0x10078bbdc:
    goto code_r0x00010078bbdc;
  case (undefined *)0x10078be8c:
code_r0x00010078be8c:
    puVar52 = *(uint **)(puVar33 + 2);
    puVar48 = *(uint **)puVar33;
    unaff_x21 = puVar33;
code_r0x00010078be94:
    puVar31 = (uint *)&stack0x000000a0;
    puVar50 = *(uint **)(unaff_x21 + 6);
    puVar49 = *(uint **)(unaff_x21 + 4);
    in_stack_00000180 = puVar48;
    in_stack_00000188 = puVar52;
code_r0x00010078bea0:
    *(uint **)(puVar31 + 0x3e) = puVar50;
    *(uint **)(puVar31 + 0x3c) = puVar49;
code_r0x00010078bea4:
    puVar26 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078bea8:
    puVar23 = in_stack_00000030;
code_r0x00010078beac:
    func_0x000107c05480(puVar23,puVar26);
code_r0x00010078beb0:
    puVar33 = unaff_x21;
    goto code_r0x00010078c0cc;
  case (undefined *)0x10078bec8:
    goto code_r0x00010078bec8;
  case (undefined *)0x10078bed0:
    goto code_r0x00010078bed0;
  case (undefined *)0x10078bee8:
    goto code_r0x00010078bee8;
  case (undefined *)0x10078befc:
    goto code_r0x00010078befc;
  case (undefined *)0x10078bf04:
    goto code_r0x00010078bf04;
  case (undefined *)0x10078bf1c:
    goto code_r0x00010078bf1c;
  case (undefined *)0x10078bf28:
    goto code_r0x00010078bf28;
  case (undefined *)0x10078bf30:
    goto code_r0x00010078bf30;
  case (undefined *)0x10078bf40:
code_r0x00010078bf40:
    unaff_x25 = unaff_x21 + (long)unaff_x26 * 8;
code_r0x00010078bf44:
    in_stack_00000120 = unaff_x21;
    in_stack_00000128 = unaff_x21;
  case (undefined *)0x10078bf48:
    goto code_r0x00010078bf48;
  case (undefined *)0x10078bf50:
    goto code_r0x00010078bf50;
  case (undefined *)0x10078bf60:
    goto code_r0x00010078bf60;
  case (undefined *)0x10078bf70:
    goto code_r0x00010078bf70;
  case (undefined *)0x10078bf78:
    goto code_r0x00010078bf78;
  case (undefined *)0x10078bf88:
    goto code_r0x00010078bf88;
  case (undefined *)0x10078bf90:
    goto code_r0x00010078bf90;
  case (undefined *)0x10078bfa0:
    goto code_r0x00010078bfa0;
  case (undefined *)0x10078bfc4:
code_r0x00010078bfc4:
    unaff_x25 = unaff_x21 + (long)unaff_x22 * 8;
    in_stack_00000140 = (uint *)0x0;
    unaff_x20 = unaff_x21;
    in_stack_00000120 = unaff_x21;
    in_stack_00000130 = unaff_x23;
    in_stack_00000138 = unaff_x25;
    if (unaff_x22 != (uint *)0x0) {
      unaff_x20 = unaff_x21 + 8;
      puVar31 = (uint *)(ulong)(byte)*unaff_x21;
      in_stack_00000128 = unaff_x20;
      if ((byte)*unaff_x21 != 0x16) goto code_r0x00010078c3e0;
    }
    puVar26 = (uint *)&UNK_10b22d180;
    in_stack_00000128 = unaff_x20;
code_r0x00010078c000:
    pcVar22 = (char *)thunk_FUN_1087e422c(0,puVar26);
    goto code_r0x00010078c008;
  case (undefined *)0x10078c044:
code_r0x00010078c044:
    unaff_x26 = in_stack_00000090 + (long)in_stack_00000098 * 8;
    in_stack_00000140 = (uint *)0x0;
    unaff_x20 = in_stack_00000090;
    in_stack_00000138 = unaff_x26;
    if (in_stack_00000098 != (uint *)0x0) {
      unaff_x20 = in_stack_00000090 + 8;
      puVar31 = (uint *)(ulong)(byte)*in_stack_00000090;
      unaff_x21 = in_stack_00000090;
      unaff_x23 = in_stack_00000098;
      unaff_x25 = puVar33;
      in_stack_00000120 = in_stack_00000090;
      in_stack_00000128 = unaff_x20;
      in_stack_00000130 = puVar33;
      if ((byte)*in_stack_00000090 != 0x16) goto code_r0x00010078c430;
    }
    puVar26 = (uint *)&UNK_10b22d1c0;
    unaff_x21 = in_stack_00000090;
    unaff_x25 = puVar33;
    in_stack_00000120 = in_stack_00000090;
    in_stack_00000128 = unaff_x20;
    in_stack_00000130 = puVar33;
  case (undefined *)0x10078c088:
    unaff_x22 = (uint *)thunk_FUN_1087e422c(0,puVar26);
code_r0x00010078c094:
    *(uint **)(in_stack_00000030 + 2) = unaff_x22;
    *(char *)in_stack_00000030 = '\x05';
code_r0x00010078c0a0:
    lVar24 = ((ulong)((long)unaff_x26 - (long)unaff_x20) >> 5) + 1;
    while (lVar24 = lVar24 + -1, unaff_x23 = unaff_x25, lVar24 != 0) {
      FUN_100e077ec(unaff_x20);
      unaff_x20 = unaff_x20 + 8;
    }
    goto joined_r0x00010078c03c;
  case (undefined *)0x10078c254:
code_r0x00010078c254:
    in_stack_00000020 = unaff_x20;
    in_stack_00000018 = unaff_x22;
    goto code_r0x00010078c758;
  case (undefined *)0x10078c290:
    goto code_r0x00010078c290;
  case (undefined *)0x10078c298:
    goto code_r0x00010078c298;
  case (undefined *)0x10078c2c8:
    goto code_r0x00010078c2c8;
  case (undefined *)0x10078c2cc:
    goto code_r0x00010078c2cc;
  case (undefined *)0x10078c2d0:
    goto code_r0x00010078c2d0;
  case (undefined *)0x10078c2f4:
    goto code_r0x00010078c2f4;
  case (undefined *)0x10078c2f8:
    goto code_r0x00010078c2f8;
  case (undefined *)0x10078c308:
    goto code_r0x00010078c308;
  case (undefined *)0x10078c310:
    goto code_r0x00010078c310;
  case (undefined *)0x10078c330:
    goto code_r0x00010078c330;
  case (undefined *)0x10078c338:
    goto code_r0x00010078c338;
  case (undefined *)0x10078c340:
    goto code_r0x00010078c340;
  case (undefined *)0x10078c364:
    goto code_r0x00010078c364;
  case (undefined *)0x10078c368:
    goto code_r0x00010078c368;
  case (undefined *)0x10078c36c:
    goto code_r0x00010078c36c;
  case (undefined *)0x10078c380:
    goto code_r0x00010078c380;
  case (undefined *)0x10078c384:
    goto code_r0x00010078c384;
  case (undefined *)0x10078c398:
    goto code_r0x00010078c398;
  case (undefined *)0x10078c3a0:
    goto code_r0x00010078c3a0;
  case (undefined *)0x10078c3b0:
    goto code_r0x00010078c3b0;
  case (undefined *)0x10078c3bc:
    goto code_r0x00010078c3bc;
  case (undefined *)0x10078c3c0:
    goto code_r0x00010078c3c0;
  case (undefined *)0x10078c3d0:
    goto code_r0x00010078c3d0;
  case (undefined *)0x10078c3dc:
    goto code_r0x00010078c3dc;
  case (undefined *)0x10078c3e4:
code_r0x00010078c3e4:
    uStack00000000000000a9 = SUB86(puVar50,0);
    bStack00000000000000af = (byte)((ulong)puVar50 >> 0x30);
    bStack00000000000000a1 = (byte)puVar49;
    uStack00000000000000a2 = (undefined5)((ulong)puVar49 >> 8);
    bStack00000000000000a7 = (byte)((ulong)puVar49 >> 0x30);
    uStack00000000000000a8 = (undefined1)((ulong)puVar49 >> 0x38);
code_r0x00010078c3e8:
    uVar25 = *(undefined8 *)(unaff_x21 + 4);
    uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x21 + 6);
    uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 6) >> 0x38);
    uStack00000000000000b0 = (undefined1)uVar25;
    uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
    uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
  case (undefined *)0x10078c3f0:
code_r0x00010078c3f0:
    puVar36 = (uint *)0x1;
code_r0x00010078c3f4:
    in_stack_00000140 = puVar36;
code_r0x00010078c3f8:
    bStack00000000000000a0 = (byte)puVar31;
code_r0x00010078c3fc:
    puVar23 = (uint *)&stack0x00000038;
    puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c404:
    FUN_1004b62d4(puVar23,puVar26);
    puVar36 = extraout_x9;
code_r0x00010078c408:
    unaff_x19 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    pcVar22 = (char *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c410:
    bVar15 = unaff_x19 == puVar31;
code_r0x00010078c414:
    if (!bVar15) {
code_r0x00010078c418:
      unaff_x26 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078c41c:
      unaff_x27 = (uint *)0x8000000000000000;
code_r0x00010078c420:
      bVar15 = unaff_x22 == (uint *)0x1;
code_r0x00010078c424:
      if (bVar15) {
code_r0x00010078c428:
        puVar38 = (uint *)0x8000000000000000;
code_r0x00010078c42c:
      }
      else {
        unaff_x20 = unaff_x21 + 0x10;
        in_stack_00000128 = unaff_x20;
        if ((byte)unaff_x21[8] == 0x16) {
          puVar38 = (uint *)0x8000000000000000;
          puVar31 = (uint *)0x16;
        }
        else {
          uVar25 = *(undefined8 *)((long)unaff_x21 + 0x21);
          uStack00000000000000a9 = (undefined6)*(undefined8 *)((long)unaff_x21 + 0x29);
          bStack00000000000000af = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x29) >> 0x30);
          bStack00000000000000a1 = (byte)uVar25;
          uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 8);
          bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x30);
          uStack00000000000000a8 = (undefined1)((ulong)uVar25 >> 0x38);
          uVar25 = *(undefined8 *)(unaff_x21 + 0xc);
          uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x21 + 0xe);
          uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 0xe) >> 0x38);
          uStack00000000000000b0 = (undefined1)uVar25;
          uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
          uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
          in_stack_00000140 = (uint *)0x2;
          bStack00000000000000a0 = (byte)unaff_x21[8];
          func_0x00010139c09c(&stack0x00000038,&stack0x000000a0);
          puVar38 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
          puVar31 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
          if (puVar38 == (uint *)0x8000000000000000) {
            *(uint **)(in_stack_00000030 + 2) = puVar31;
            *(char *)in_stack_00000030 = '\x05';
            if (unaff_x19 != (uint *)0x0) {
              _free();
            }
            goto code_r0x00010078c014;
          }
          puVar36 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
        }
      }
      bVar7 = puVar38 != unaff_x27;
      puVar53 = (uint *)0x0;
      if (bVar7) {
        puVar53 = puVar38;
      }
      *(char *)in_stack_00000030 = '\0';
      puVar54 = (uint *)0x8;
      if (bVar7) {
        puVar54 = puVar31;
      }
      puVar46 = (uint *)0x0;
      if (bVar7) {
        puVar46 = puVar36;
      }
      *(uint **)(in_stack_00000030 + 2) = unaff_x19;
      *(char **)(in_stack_00000030 + 4) = pcVar22;
      *(uint **)(in_stack_00000030 + 6) = unaff_x26;
      *(uint **)(in_stack_00000030 + 8) = puVar53;
      *(uint **)(in_stack_00000030 + 10) = puVar54;
      *(uint **)(in_stack_00000030 + 0xc) = puVar46;
      in_stack_00000188 = *(uint **)(in_stack_00000030 + 2);
      in_stack_00000180 = *(uint **)in_stack_00000030;
      in_stack_00000198 = *(uint **)(in_stack_00000030 + 6);
      in_stack_00000190 = *(uint **)(in_stack_00000030 + 4);
      *(uint **)(unaff_x29 + -0x80) = puVar46;
      in_stack_000001a8 = *(undefined8 *)(in_stack_00000030 + 10);
      in_stack_000001a0 = *(undefined8 *)(in_stack_00000030 + 8);
      pcVar22 = (char *)FUN_100fbc738(&stack0x00000120);
      goto code_r0x00010078d2f4;
    }
code_r0x00010078c008:
    *(char **)(in_stack_00000030 + 2) = pcVar22;
    *(char *)in_stack_00000030 = '\x05';
code_r0x00010078c014:
    lVar24 = ((ulong)((long)unaff_x25 - (long)unaff_x20) >> 5) + 1;
    while (lVar24 = lVar24 + -1, lVar24 != 0) {
      FUN_100e077ec(unaff_x20);
      unaff_x20 = unaff_x20 + 8;
    }
    goto joined_r0x00010078c03c;
  case (undefined *)0x10078c3fc:
    goto code_r0x00010078c3fc;
  case (undefined *)0x10078c404:
    goto code_r0x00010078c404;
  case (undefined *)0x10078c420:
    goto code_r0x00010078c420;
  case (undefined *)0x10078c424:
    goto code_r0x00010078c424;
  case (undefined *)0x10078c440:
    goto code_r0x00010078c440;
  case (undefined *)0x10078c45c:
    goto code_r0x00010078c45c;
  case (undefined *)0x10078c460:
    goto code_r0x00010078c460;
  case (undefined *)0x10078c470:
    goto code_r0x00010078c470;
  case (undefined *)0x10078c47c:
    goto code_r0x00010078c47c;
  case (undefined *)0x10078c490:
    goto code_r0x00010078c490;
  case (undefined *)0x10078c4a0:
    goto code_r0x00010078c4a0;
  case (undefined *)0x10078c4a4:
    goto code_r0x00010078c4a4;
  case (undefined *)0x10078c4b0:
    goto code_r0x00010078c4b0;
  case (undefined *)0x10078c4c0:
    goto code_r0x00010078c4c0;
  case (undefined *)0x10078c4c4:
    goto code_r0x00010078c4c4;
  case (undefined *)0x10078c4dc:
    goto code_r0x00010078c4dc;
  case (undefined *)0x10078c4e0:
    goto code_r0x00010078c4e0;
  case (undefined *)0x10078c4ec:
    goto code_r0x00010078c4ec;
  case (undefined *)0x10078c504:
    goto code_r0x00010078c504;
  case (undefined *)0x10078c510:
    goto code_r0x00010078c510;
  case (undefined *)0x10078c51c:
    goto code_r0x00010078c51c;
  case (undefined *)0x10078c53c:
    goto code_r0x00010078c53c;
  case (undefined *)0x10078c540:
    goto code_r0x00010078c540;
  case (undefined *)0x10078c544:
    goto code_r0x00010078c544;
  case (undefined *)0x10078c560:
    goto code_r0x00010078c560;
  case (undefined *)0x10078c570:
    goto code_r0x00010078c570;
  case (undefined *)0x10078c57c:
    goto code_r0x00010078c57c;
  case (undefined *)0x10078c580:
    goto code_r0x00010078c580;
  case (undefined *)0x10078c5a0:
    goto code_r0x00010078c5a0;
  case (undefined *)0x10078c5a4:
    goto code_r0x00010078c5a4;
  case (undefined *)0x10078c5c0:
    goto code_r0x00010078c5c0;
  case (undefined *)0x10078c5c8:
    goto code_r0x00010078c5c8;
  case (undefined *)0x10078c5e0:
    goto LAB_10078c5e0;
  case (undefined *)0x10078c5f0:
    goto code_r0x00010078c5f0;
  case (undefined *)0x10078c604:
    goto code_r0x00010078c604;
  case (undefined *)0x10078c620:
    goto code_r0x00010078c620;
  case (undefined *)0x10078c640:
    goto code_r0x00010078c640;
  case (undefined *)0x10078c67c:
    goto code_r0x00010078c67c;
  case (undefined *)0x10078c6c0:
    goto code_r0x00010078c6c0;
  case (undefined *)0x10078cc00:
code_r0x00010078cc00:
    puVar31 = (uint *)0x8;
code_r0x00010078cc04:
    uVar27 = SUB81(puVar31,0);
    break;
  case (undefined *)0x10078cc44:
    puVar26 = (uint *)&stack0x00000088;
code_r0x00010078cc4c:
    puVar23 = in_stack_00000030;
code_r0x00010078cc50:
    func_0x000107c05230(puVar23,puVar26);
    goto code_r0x00010078d0a8;
  case (undefined *)0x10078cca4:
code_r0x00010078cca4:
    puVar23 = in_stack_00000030;
code_r0x00010078cca8:
    func_0x000107c043a0(puVar23);
    goto code_r0x00010078d0a8;
  case (undefined *)0x10078ccc4:
code_r0x00010078ccc4:
    goto code_r0x00010078cd90;
  case (undefined *)0x10078ccd8:
code_r0x00010078ccd8:
    puVar31 = puVar33;
code_r0x00010078ccdc:
code_r0x00010078ced4:
    *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078ced8:
    uVar27 = 1;
    break;
  case (undefined *)0x10078ccfc:
    goto code_r0x00010078ccfc;
  case (undefined *)0x10078cd3c:
code_r0x00010078cd3c:
    func_0x000107c04e88(in_stack_00000030,&stack0x00000088);
code_r0x00010078cd4c:
    goto code_r0x00010078d0a8;
  case (undefined *)0x10078cd50:
code_r0x00010078cd50:
    *(uint **)(unaff_x29 + -0xa8) = puVar26;
    goto code_r0x00010078cd94;
  case (undefined *)0x10078cd60:
    puVar33 = (uint *)(double)fVar47;
    goto code_r0x00010078d044;
  case (undefined *)0x10078cd9c:
code_r0x00010078cd9c:
    puVar31 = (uint *)(((ulong)uStack0000000000000041 & 0xffff00) >> 8);
code_r0x00010078cda0:
    goto code_r0x00010078ce68;
  case (undefined *)0x10078cdac:
code_r0x00010078cdac:
    puVar31 = (uint *)(((ulong)uStack0000000000000041 & 0xffff00) >> 8);
code_r0x00010078cdb0:
    goto code_r0x00010078ced4;
  case (undefined *)0x10078cde4:
    puVar31 = puVar33;
    puVar36 = in_stack_00000090;
code_r0x00010078cde8:
    *(uint **)(unaff_x29 + -0xa8) = puVar31;
    *(uint **)(unaff_x29 + -0xa0) = puVar36;
    uVar27 = 6;
    break;
  case (undefined *)0x10078cdf4:
code_r0x00010078cdf4:
    *(uint **)(unaff_x29 + -0xa8) = puVar26;
code_r0x00010078cdf8:
    goto code_r0x00010078ce48;
  case (undefined *)0x10078ce1c:
    *(uint **)(unaff_x29 + -0xa8) = puVar26;
    goto code_r0x00010078ced8;
  case (undefined *)0x10078ce24:
code_r0x00010078ce24:
    puVar31 = (uint *)(long)(char)bVar3;
    goto code_r0x00010078cef4;
  case (undefined *)0x10078ce70:
    goto code_r0x00010078ce70;
  case (undefined *)0x10078ce7c:
    puVar31 = puVar34;
code_r0x00010078ce80:
    goto code_r0x00010078d070;
  case (undefined *)0x10078cea0:
code_r0x00010078cea0:
    puVar31 = (uint *)(long)sVar4;
code_r0x00010078cef4:
    *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078cef8:
    puVar31 = (uint *)0x2;
    goto code_r0x00010078cefc;
  case (undefined *)0x10078cec4:
code_r0x00010078cec4:
    *(byte *)(unaff_x29 + -0xaf) = bVar3;
code_r0x00010078cec8:
    *(undefined1 *)(unaff_x29 + -0xb0) = 0;
    goto code_r0x00010078d084;
  case (undefined *)0x10078ced0:
    puVar31 = (uint *)((ulong)uStack0000000000000041 & 0xff);
    goto code_r0x00010078ced4;
  case (undefined *)0x10078cee0:
code_r0x00010078cee0:
    puVar49 = puVar33;
    goto code_r0x00010078cee4;
  case (undefined *)0x10078cf40:
code_r0x00010078cf40:
    *(uint **)(unaff_x29 + -0xa8) = puVar33;
    *(uint **)(unaff_x29 + -0xa0) = in_stack_00000090;
    unaff_x19 = (uint *)0x5;
    *(undefined1 *)(unaff_x29 + -0xb0) = 5;
code_r0x00010078cf54:
code_r0x00010078cf58:
code_r0x00010078cfb0:
    puVar23 = (uint *)(unaff_x29 + -0xb0);
    puVar26 = (uint *)&stack0x00000038;
code_r0x00010078cfb8:
    uVar25 = FUN_107c05dcc(puVar23,puVar26);
    *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
code_r0x00010078cfc0:
    *(char *)in_stack_00000030 = (char)unaff_x19;
    goto code_r0x00010078d0a8;
  case (undefined *)0x10078cf74:
    puVar31 = (uint *)(long)(char)bVar3;
    goto code_r0x00010078d070;
  case (undefined *)0x10078cf80:
code_r0x00010078cf80:
    *(uint **)(unaff_x29 + -0xa8) = puVar31;
    *(uint **)(unaff_x29 + -0xa0) = puVar36;
    unaff_x19 = (uint *)0x5;
    *(undefined1 *)(unaff_x29 + -0xb0) = 5;
    goto code_r0x00010078cfb0;
  case (undefined *)0x10078cf98:
    *(uint **)(unaff_x29 + -0xa8) = puVar33;
    *(uint **)(unaff_x29 + -0xa0) = in_stack_00000090;
code_r0x00010078cfa0:
    unaff_x19 = (uint *)0x5;
    *(undefined1 *)(unaff_x29 + -0xb0) = 5;
code_r0x00010078cfa8:
    goto code_r0x00010078cfb0;
  case (undefined *)0x10078d028:
code_r0x00010078d028:
    puVar31 = (uint *)(long)sVar4;
code_r0x00010078d02c:
    goto code_r0x00010078d070;
  case (undefined *)0x10078d030:
code_r0x00010078d030:
    puVar49 = puVar33;
code_r0x00010078d034:
    *(uint **)(unaff_x29 + -0xa8) = puVar49;
    uVar27 = 3;
    goto code_r0x00010078d05c;
  case (undefined *)0x10078d040:
code_r0x00010078d044:
    *(uint **)(unaff_x29 + -0xa8) = puVar33;
code_r0x00010078d048:
    puVar31 = (uint *)0x3;
code_r0x00010078d04c:
    uVar27 = SUB81(puVar31,0);
    break;
  case (undefined *)0x10078d048:
    goto code_r0x00010078d048;
  case (undefined *)0x10078d06c:
    puVar31 = puVar33;
code_r0x00010078d070:
    *(uint **)(unaff_x29 + -0xa8) = puVar31;
code_r0x00010078d074:
    uVar27 = 2;
    break;
  case (undefined *)0x10078d0d4:
    puVar31 = (uint *)0x7;
code_r0x00010078d0d8:
    uVar27 = SUB81(puVar31,0);
    break;
  case (undefined *)0x10078d0ec:
    goto code_r0x00010078d0ec;
  case (undefined *)0x10078d0fc:
    goto code_r0x00010078d0fc;
  case (undefined *)0x10078d11c:
    goto code_r0x00010078d11c;
  case (undefined *)0x10078d198:
    goto code_r0x00010078d198;
  }
  *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
code_r0x00010078d084:
  puVar23 = (uint *)(unaff_x29 + -0xb0);
  puVar26 = (uint *)&stack0x00000038;
code_r0x00010078d08c:
  pcVar22 = (char *)FUN_107c05dcc(puVar23,puVar26);
LAB_10078d090:
  *(char **)(in_stack_00000030 + 2) = pcVar22;
code_r0x00010078d094:
  puVar31 = (uint *)0x5;
code_r0x00010078d098:
  *(char *)in_stack_00000030 = (char)puVar31;
  goto code_r0x00010078d0a8;
code_r0x00010078c17c:
  func_0x000107c04e54();
  goto LAB_10078a464;
code_r0x00010078a7f8:
  if (bVar15) {
code_r0x00010078a900:
    puVar31 = (uint *)(ulong)bStack00000000000000a1;
code_r0x00010078a904:
    uVar29 = (uint)puVar36;
    if ((int)puVar31 != 1) {
      uVar29 = uVar29 + 1;
    }
    uVar35 = 0;
    if ((int)puVar31 != 0) {
      uVar35 = uVar29;
    }
    unaff_x19 = (uint *)(ulong)uVar35;
code_r0x00010078a914:
    goto code_r0x00010078aa60;
  }
  if ((int)puVar36 == 4) {
    uVar29 = 1;
    if (puVar31 != (uint *)0x1) {
      uVar29 = 2;
    }
    puVar36 = (uint *)(ulong)uVar29;
    bVar15 = puVar31 == (uint *)0x0;
code_r0x00010078a8ac:
    uVar29 = 0;
    if (!bVar15) {
      uVar29 = (uint)puVar36;
    }
    unaff_x19 = (uint *)(ulong)uVar29;
    goto code_r0x00010078aa60;
  }
code_r0x00010078a804:
  if ((int)puVar36 == 0xc) {
    if (puVar38 == (uint *)0x6) {
      puVar36 = (uint *)(ulong)*(uint *)pcVar22;
code_r0x00010078a9a8:
      puVar36 = (uint *)(ulong)((uint)puVar36 ^ 0x61746564);
      uVar29 = (uint)(ushort)*(uint *)((long)pcVar22 + 4);
code_r0x00010078a9b8:
      puVar39 = (uint *)0x6c69;
code_r0x00010078a9bc:
      uVar35 = uVar29 ^ (uint)puVar39;
      goto code_r0x00010078a9c0;
    }
    bVar15 = puVar38 == (uint *)0x4;
code_r0x00010078a818:
    if (!bVar15) goto code_r0x00010078a998;
    puVar36 = (uint *)(ulong)*(uint *)pcVar22;
    uVar29 = 0x6170;
code_r0x00010078a824:
    uVar35 = 2;
    if ((uint)puVar36 == (uVar29 | 0x68740000)) {
      uVar35 = 0;
    }
    unaff_x19 = (uint *)(ulong)uVar35;
code_r0x00010078a834:
    if (puVar31 != (uint *)0x0) goto code_r0x00010078a9d4;
code_r0x00010078a838:
code_r0x00010078aa68:
    bVar15 = ((ulong)unaff_x19 & 0xff) == 0;
    puVar31 = (uint *)(ulong)((uint)unaff_x19 & 0xff);
code_r0x00010078aa6c:
    if (!bVar15) {
code_r0x00010078aa70:
      bVar15 = (int)puVar31 == 1;
code_r0x00010078aa74:
      if (bVar15) {
        if ((int)unaff_x22 == 3) {
          puVar31 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x00010078aa84:
          *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
code_r0x00010078aa8c:
          bVar15 = (int)puVar31 == 0x16;
code_r0x00010078aa90:
          if (bVar15) goto code_r0x00010078d428;
code_r0x00010078aa94:
          puVar50 = *(uint **)(puVar46 + 2);
          puVar49 = *(uint **)puVar46;
code_r0x00010078aa98:
          puVar36 = in_stack_00000028;
code_r0x00010078aa9c:
          *(uint **)(puVar36 + 2) = puVar50;
          *(uint **)puVar36 = puVar49;
code_r0x00010078aaa0:
          uVar25 = *(undefined8 *)((long)puVar46 + 0xf);
          *(undefined8 *)((long)puVar36 + 0x17) = *(undefined8 *)((long)puVar46 + 0x17);
          *(undefined8 *)((long)puVar36 + 0xf) = uVar25;
          bStack0000000000000038 = (byte)puVar31;
code_r0x00010078aaac:
          bVar15 = (int)puVar31 == 0x10;
code_r0x00010078aab0:
          if (bVar15) {
code_r0x00010078aac4:
            puVar31 = (uint *)0x200;
code_r0x00010078aac8:
            _bStack0000000000000100 = (uint *)CONCAT62(uStack0000000000000102,(short)puVar31);
            pcVar22 = (char *)&stack0x00000038;
code_r0x00010078aad0:
            FUN_100e077ec(pcVar22);
          }
          else {
code_r0x00010078aab4:
            if ((int)puVar31 == 0x11) {
code_r0x00010078ab64:
              unaff_x22 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
              puVar50 = *(uint **)(unaff_x22 + 2);
              puVar49 = *(uint **)unaff_x22;
code_r0x00010078ab6c:
              uStack00000000000000a8 = SUB81(puVar50,0);
              uStack00000000000000a9 = (undefined6)((ulong)puVar50 >> 8);
              bStack00000000000000af = (byte)((ulong)puVar50 >> 0x38);
              bStack00000000000000a0 = (byte)puVar49;
              bStack00000000000000a1 = (byte)((ulong)puVar49 >> 8);
              uStack00000000000000a2 = (undefined5)((ulong)puVar49 >> 0x10);
              bStack00000000000000a7 = (byte)((ulong)puVar49 >> 0x38);
              puVar50 = *(uint **)(unaff_x22 + 6);
              puVar49 = *(uint **)(unaff_x22 + 4);
code_r0x00010078ab74:
              uStack00000000000000b8 = SUB87(puVar50,0);
              uStack00000000000000bf = (undefined1)((ulong)puVar50 >> 0x38);
              uStack00000000000000b0 = SUB81(puVar49,0);
              uStack00000000000000b1 = (undefined6)((ulong)puVar49 >> 8);
              uStack00000000000000b7 = (undefined1)((ulong)puVar49 >> 0x38);
              func_0x000101429444(&stack0x00000100,&stack0x000000a0);
              _free(unaff_x22);
            }
            else {
              if ((int)puVar31 == 0x12) goto code_r0x00010078aac4;
              func_0x000101429444(&stack0x00000100,&stack0x00000038);
            }
          }
          if (bStack0000000000000100 != '\x01') {
            unaff_x22 = (uint *)((ulong)_bStack0000000000000100 >> 8 & 0xff);
            goto code_r0x00010078a798;
          }
          puVar31 = (uint *)((long)unaff_x25 + 1);
code_r0x00010078cb30:
          *(uint **)(unaff_x29 + -0x88) = puVar44;
          *(uint **)(unaff_x29 + -0x70) = puVar31;
          pcVar22 = (char *)in_stack_00000108;
          puVar36 = in_stack_00000030;
        }
        else {
          *(uint **)(unaff_x29 + -0x88) = puVar44;
          *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
          bStack0000000000000038 = 0x8c;
          uStack0000000000000039 = 0x108cad8;
          bStack0000000000000040 = 6;
          uStack0000000000000041 = 0;
          bStack00000000000000a0 = (byte)&stack0x00000038;
          bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
          uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
          bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
          uStack00000000000000a8 = 0xa0;
          uStack00000000000000a9 = 0x100c7b3;
          bStack00000000000000af = 0;
          pcVar22 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
          puVar36 = in_stack_00000030;
        }
        goto code_r0x00010078cb40;
      }
code_r0x00010078ab30:
      bVar2 = *(byte *)(unaff_x29 + -0xb0);
      puVar31 = (uint *)(ulong)bVar2;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
      if (bVar2 != 0x16) {
        uVar25 = *(undefined8 *)puVar46;
        *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(puVar46 + 2);
        *(undefined8 *)unaff_x20 = uVar25;
        puVar50 = *(uint **)((long)puVar46 + 0x17);
        puVar49 = *(uint **)((long)puVar46 + 0xf);
code_r0x00010078ab50:
        *(uint **)((long)unaff_x20 + 0x17) = puVar50;
        *(uint **)((long)unaff_x20 + 0xf) = puVar49;
        bStack00000000000000a0 = (byte)puVar31;
        FUN_100e077ec(&stack0x000000a0);
        goto code_r0x00010078a798;
      }
code_r0x00010078d428:
      *(uint **)(unaff_x29 + -0x88) = puVar44;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
code_r0x00010078aad8:
    puVar31 = (uint *)0x8000000000000000;
code_r0x00010078aadc:
    bVar15 = unaff_x23 == puVar31;
code_r0x00010078aae0:
    if (!bVar15) {
      *(uint **)(unaff_x29 + -0x88) = puVar44;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      bStack0000000000000038 = 0x38;
      uStack0000000000000039 = 0x108c610;
      bStack0000000000000040 = 4;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
      *(char *)in_stack_00000030 = '\x05';
      if (unaff_x23 == (uint *)0x0) goto code_r0x00010078c530;
      goto code_r0x00010078cb58;
    }
code_r0x00010078aae4:
    puVar31 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x00010078aae8:
    *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
    bVar15 = (int)puVar31 == 0x16;
code_r0x00010078aaf4:
    if (bVar15) {
      *(uint **)(unaff_x29 + -0x88) = puVar44;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)puVar46;
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(puVar46 + 2);
    *(undefined8 *)unaff_x20 = uVar25;
    uVar25 = *(undefined8 *)((long)puVar46 + 0xf);
    *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)puVar46 + 0x17);
    *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
    bStack00000000000000a0 = (byte)puVar31;
code_r0x00010078ab0c:
    FUN_1004b64d4(&stack0x00000038,&stack0x000000a0);
    unaff_x23 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    unaff_x24 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
code_r0x00010078ab20:
    puVar31 = (uint *)0x8000000000000000;
code_r0x00010078ab24:
    bVar15 = unaff_x23 == puVar31;
code_r0x00010078ab28:
    pcVar22 = (char *)unaff_x24;
    unaff_x24 = (uint *)pcVar22;
    if (bVar15) {
      *(uint **)(unaff_x29 + -0x88) = puVar44;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      goto code_r0x00010078c524;
    }
code_r0x00010078a790:
    in_stack_00000020 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078a798:
    unaff_x27 = puVar44 + 0x10;
code_r0x00010078a79c:
    unaff_x25 = (uint *)((long)unaff_x25 + 1);
    bVar9 = unaff_x26 + 0x10 == unaff_x21;
code_r0x00010078a7a8:
    puVar44 = unaff_x21;
    if (bVar9) goto code_r0x00010078c4cc;
code_r0x00010078a7ac:
    unaff_x26 = unaff_x27 + -0x10;
    puVar36 = (uint *)(ulong)(byte)*unaff_x26;
    puVar44 = unaff_x27;
code_r0x00010078a7b4:
    if ((int)puVar36 == 0x16) goto code_r0x00010078c4d0;
    bStack00000000000000a0 = (byte)puVar36;
code_r0x00010078a7c0:
    uVar25 = *(undefined8 *)(unaff_x26 + 4);
    *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(unaff_x26 + 6);
    *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
    uVar25 = *(undefined8 *)((long)unaff_x26 + 1);
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)((long)unaff_x26 + 9);
    *(undefined8 *)unaff_x20 = uVar25;
    in_stack_00000188 = *(uint **)(unaff_x26 + 10);
    in_stack_00000180 = *(uint **)(unaff_x26 + 8);
    puVar31 = (uint *)&stack0x000000a0;
code_r0x00010078a7dc:
    puVar50 = *(uint **)(unaff_x26 + 0xe);
    puVar49 = *(uint **)(unaff_x26 + 0xc);
code_r0x00010078a7e0:
    *(uint **)(puVar31 + 0x3e) = puVar50;
    *(uint **)(puVar31 + 0x3c) = puVar49;
    puVar31 = (uint *)CONCAT17(bStack00000000000000af,
                               CONCAT61(uStack00000000000000a9,uStack00000000000000a8));
    pcVar22 = (char *)CONCAT17(uStack00000000000000b7,
                               CONCAT61(uStack00000000000000b1,uStack00000000000000b0));
    puVar38 = (uint *)CONCAT17(uStack00000000000000bf,uStack00000000000000b8);
    iVar30 = (int)puVar36;
    bVar6 = SBORROW4(iVar30,0xc);
    bVar7 = iVar30 + -0xc < 0;
    bVar10 = iVar30 == 0xc;
code_r0x00010078a7f0:
    iVar30 = (int)puVar36;
    if (bVar10 || bVar7 != bVar6) goto code_r0x00010078a7f4;
    if (iVar30 == 0xd) {
code_r0x00010078a918:
      if ((uint *)pcVar22 == (uint *)0x6) {
        puVar36 = (uint *)(ulong)*puVar31;
        uVar29 = 0x6564;
code_r0x00010078aa3c:
        uVar29 = uVar29 | 0x61740000;
code_r0x00010078aa40:
        puVar36 = (uint *)(ulong)((uint)puVar36 ^ uVar29);
        puVar31 = (uint *)(ulong)(ushort)puVar31[1];
code_r0x00010078aa48:
        uVar29 = 0x6c69;
code_r0x00010078aa4c:
        puVar31 = (uint *)(ulong)((uint)puVar31 ^ uVar29);
code_r0x00010078aa50:
        puVar31 = (uint *)(ulong)((uint)puVar36 | (uint)puVar31);
code_r0x00010078aa54:
        bVar13 = (int)puVar31 == 0;
code_r0x00010078aa58:
        uVar29 = 1;
        if (!bVar13) {
          uVar29 = 2;
        }
        unaff_x19 = (uint *)(ulong)uVar29;
      }
      else {
        if ((uint *)pcVar22 != (uint *)0x4) goto code_r0x00010078aa2c;
        puVar31 = (uint *)(ulong)*puVar31;
code_r0x00010078a92c:
        puVar36 = (uint *)0x68746170;
code_r0x00010078a934:
        uVar29 = 2;
        if ((int)puVar31 == (int)puVar36) {
          uVar29 = 0;
        }
        unaff_x19 = (uint *)(ulong)uVar29;
code_r0x00010078a940:
      }
code_r0x00010078aa60:
      pcVar22 = (char *)&stack0x000000a0;
code_r0x00010078aa64:
      FUN_100e077ec(pcVar22);
      goto code_r0x00010078aa68;
    }
    bVar15 = iVar30 == 0xe;
code_r0x00010078a848:
    if (!bVar15) {
code_r0x00010078a84c:
      if ((int)puVar36 == 0xf) {
        if ((uint *)pcVar22 == (uint *)0x6) {
code_r0x00010078a9dc:
          puVar36 = (uint *)(ulong)(byte)*puVar31;
code_r0x00010078a9e0:
          bVar15 = (int)puVar36 == 100;
code_r0x00010078a9e4:
          if (bVar15) {
code_r0x00010078a9e8:
            puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 1);
code_r0x00010078a9ec:
            if ((int)puVar36 == 0x65) {
              bVar15 = *(char *)((long)puVar31 + 2) == 't';
code_r0x00010078a9fc:
              if (bVar15) {
                puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 3);
code_r0x00010078aa04:
                bVar15 = (int)puVar36 == 0x61;
code_r0x00010078aa08:
                if (bVar15) {
code_r0x00010078aa0c:
                  puVar36 = (uint *)(ulong)(byte)puVar31[1];
code_r0x00010078aa10:
                  bVar15 = (int)puVar36 == 0x69;
code_r0x00010078aa14:
                  if (bVar15) {
                    bVar15 = *(char *)((long)puVar31 + 5) == 'l';
code_r0x00010078aa20:
                    if (bVar15) {
code_r0x00010078aa24:
                      unaff_x19 = (uint *)0x1;
code_r0x00010078aa28:
                      goto code_r0x00010078aa60;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((uint *)pcVar22 == (uint *)0x4) {
          puVar36 = (uint *)(ulong)(byte)*puVar31;
code_r0x00010078a868:
          if ((int)puVar36 == 0x70) {
            bVar15 = *(char *)((long)puVar31 + 1) == 'a';
code_r0x00010078a878:
            if (bVar15) {
code_r0x00010078a87c:
              if (*(char *)((long)puVar31 + 2) == 't') {
                puVar31 = (uint *)(ulong)*(byte *)((long)puVar31 + 3);
code_r0x00010078a88c:
                bVar15 = (int)puVar31 == 0x68;
code_r0x00010078a890:
                if (bVar15) {
                  unaff_x19 = (uint *)0x0;
                  goto code_r0x00010078aa60;
                }
              }
            }
          }
        }
code_r0x00010078aa2c:
        unaff_x19 = (uint *)0x2;
code_r0x00010078aa30:
        goto code_r0x00010078aa60;
      }
      goto code_r0x00010078da60;
    }
code_r0x00010078a8b4:
    if (puVar38 == (uint *)0x6) {
      puVar36 = (uint *)(ulong)(byte)*(uint *)pcVar22;
code_r0x00010078a948:
      if ((int)puVar36 != 100) goto code_r0x00010078a998;
code_r0x00010078a950:
      bVar11 = *(char *)((long)pcVar22 + 1) == 'e';
code_r0x00010078a958:
      if (!bVar11) goto code_r0x00010078a998;
code_r0x00010078a95c:
      puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 2);
code_r0x00010078a960:
      if (((int)puVar36 != 0x74) || (*(char *)((long)pcVar22 + 3) != 'a'))
      goto code_r0x00010078a998;
code_r0x00010078a974:
      bVar12 = (char)*(uint *)((long)pcVar22 + 4) == 'i';
code_r0x00010078a97c:
      if (!bVar12) goto code_r0x00010078a998;
      puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 5);
code_r0x00010078a984:
      bVar15 = (int)puVar36 == 0x6c;
code_r0x00010078a988:
      if (!bVar15) goto code_r0x00010078a998;
code_r0x00010078a98c:
      unaff_x19 = (uint *)0x1;
joined_r0x00010078a9d0:
      if (puVar31 == (uint *)0x0) goto code_r0x00010078aa68;
    }
    else {
code_r0x00010078a8bc:
      bVar15 = puVar38 == (uint *)0x4;
code_r0x00010078a8c0:
      if ((bVar15) && ((char)*(uint *)pcVar22 == 'p')) {
        puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 1);
code_r0x00010078a8d4:
        if (((int)puVar36 != 0x61) || (*(char *)((long)pcVar22 + 2) != 't'))
        goto code_r0x00010078a998;
        bVar15 = *(char *)((long)pcVar22 + 3) == 'h';
code_r0x00010078a8f0:
        if (!bVar15) goto code_r0x00010078a998;
        unaff_x19 = (uint *)0x0;
code_r0x00010078a8f8:
        if (puVar31 != (uint *)0x0) goto code_r0x00010078a9d4;
code_r0x00010078a8fc:
        goto code_r0x00010078aa68;
      }
code_r0x00010078a998:
      unaff_x19 = (uint *)0x2;
      if (puVar31 == (uint *)0x0) {
code_r0x00010078a9a0:
        goto code_r0x00010078aa68;
      }
    }
code_r0x00010078a9d4:
    _free();
    goto code_r0x00010078aa68;
  }
  goto code_r0x00010078da60;
code_r0x00010078a9c0:
  puVar36 = (uint *)(ulong)((uint)puVar36 | uVar35);
code_r0x00010078a9c4:
  bVar8 = (int)puVar36 == 0;
code_r0x00010078a9c8:
  puVar36 = (uint *)0x1;
code_r0x00010078a9cc:
  uVar29 = (uint)puVar36;
  if (!bVar8) {
    uVar29 = uVar29 + 1;
  }
  unaff_x19 = (uint *)(ulong)uVar29;
code_r0x00010078a9d0:
  goto joined_r0x00010078a9d0;
code_r0x00010078c4cc:
  unaff_x25 = in_stack_00000018;
code_r0x00010078c4d0:
  *(uint **)(unaff_x29 + -0x88) = puVar44;
code_r0x00010078c4d4:
  *(uint **)(unaff_x29 + -0x70) = unaff_x25;
code_r0x00010078c4d8:
  puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c4dc:
  bVar15 = unaff_x23 == puVar31;
code_r0x00010078c4e0:
  puVar36 = in_stack_00000020;
code_r0x00010078c4e8:
  if (!bVar15) {
code_r0x00010078c53c:
    puVar31 = (uint *)0x2;
code_r0x00010078c540:
    *(char *)in_stack_00000030 = (char)puVar31;
code_r0x00010078c544:
    iVar30 = (int)puVar31;
    if ((int)unaff_x22 != 3) {
      iVar30 = (int)unaff_x22;
    }
    *(char *)((long)in_stack_00000030 + 1) = (char)iVar30;
    *(uint **)(in_stack_00000030 + 2) = unaff_x23;
    *(uint **)(in_stack_00000030 + 4) = unaff_x24;
code_r0x00010078c554:
    *(uint **)(in_stack_00000030 + 6) = puVar36;
code_r0x00010078c558:
    puVar50 = *(uint **)(in_stack_00000030 + 6);
    puVar49 = *(uint **)(in_stack_00000030 + 4);
    puVar54 = *(uint **)(in_stack_00000030 + 10);
    puVar53 = *(uint **)(in_stack_00000030 + 8);
code_r0x00010078c55c:
    puVar36 = (uint *)&stack0x000000a0;
code_r0x00010078c560:
    *(uint **)(puVar36 + 0x26) = puVar50;
    *(uint **)(puVar36 + 0x24) = puVar49;
    *(uint **)(puVar36 + 0x2a) = puVar54;
    *(uint **)(puVar36 + 0x28) = puVar53;
    puVar31 = *(uint **)(in_stack_00000030 + 0xc);
code_r0x00010078c568:
    puVar54 = *(uint **)(in_stack_00000030 + 2);
    puVar53 = *(uint **)in_stack_00000030;
    in_stack_00000150 = puVar31;
code_r0x00010078c570:
    *(uint **)(puVar36 + 0x22) = puVar54;
    *(uint **)(puVar36 + 0x20) = puVar53;
code_r0x00010078c574:
    pcVar22 = (char *)FUN_100fbc67c(unaff_x29 + -0xb0);
    goto code_r0x00010078c57c;
  }
code_r0x00010078c4ec:
  unaff_x19 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078c4f0:
  puVar31 = (uint *)&UNK_108c61000;
code_r0x00010078c4f4:
  puVar31 = puVar31 + 0xe;
code_r0x00010078c4f8:
  puVar36 = (uint *)0x4;
code_r0x00010078c4fc:
  bStack0000000000000038 = (byte)puVar31;
  uStack0000000000000039 = (undefined7)((ulong)puVar31 >> 8);
  bStack0000000000000040 = (byte)puVar36;
  uStack0000000000000041 = (uint7)((ulong)puVar36 >> 8);
code_r0x00010078c500:
  puVar31 = (uint *)&stack0x00000038;
code_r0x00010078c504:
  puVar36 = (uint *)&DAT_100c7b3a0;
code_r0x00010078c50c:
  bStack00000000000000a0 = (byte)puVar31;
  bStack00000000000000a1 = (byte)((ulong)puVar31 >> 8);
  uStack00000000000000a2 = (undefined5)((ulong)puVar31 >> 0x10);
  bStack00000000000000a7 = (byte)((ulong)puVar31 >> 0x38);
  uStack00000000000000a8 = SUB81(puVar36,0);
  uStack00000000000000a9 = (undefined6)((ulong)puVar36 >> 8);
  bStack00000000000000af = 0;
code_r0x00010078c510:
FUN_10078c514:
  pcVar22 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010078c518:
  pcVar22 = (char *)((long)pcVar22 + 0x8f7);
code_r0x00010078c51c:
  pcVar22 = (char *)thunk_FUN_108856088(pcVar22,&stack0x000000a0);
code_r0x00010078c524:
  *(char **)(in_stack_00000030 + 2) = pcVar22;
  puVar31 = (uint *)0x5;
code_r0x00010078c52c:
  *(char *)in_stack_00000030 = (char)puVar31;
  goto code_r0x00010078c530;
code_r0x00010078a7f4:
  bVar15 = iVar30 == 1;
  goto code_r0x00010078a7f8;
code_r0x00010078da60:
  *(uint **)(unaff_x29 + -0x88) = puVar44;
  *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
  pcVar22 = (char *)thunk_FUN_108855b04(&stack0x000000a0,&stack0x00000038,&UNK_10b211180);
  puVar36 = in_stack_00000030;
code_r0x00010078cb40:
  *(char **)(puVar36 + 2) = pcVar22;
  *(char *)puVar36 = '\x05';
  bVar21 = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
code_r0x00010078cb50:
  unaff_x19 = (uint *)(unaff_x29 + -0xb0);
  if (!bVar21) {
code_r0x00010078cb58:
    unaff_x19 = (uint *)(unaff_x29 + -0xb0);
    _free(unaff_x24);
  }
code_r0x00010078c530:
  FUN_100d34830(unaff_x19 + 8);
code_r0x00010078c538:
  goto LAB_10078d618;
code_r0x00010078b17c:
  uVar29 = 1;
  if ((int)puVar31 != 0x68746170) {
    uVar29 = 2;
  }
code_r0x00010078b208:
  FUN_100e077ec(&stack0x000000a0);
code_r0x00010078b210:
  uVar27 = SUB81(unaff_x24,0);
  if ((uVar29 & 0xff) == 0) {
    if (unaff_x23 != (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      bStack0000000000000038 = 0x18;
      uStack0000000000000039 = 0x108c610;
      bStack0000000000000040 = 4;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      goto code_r0x00010078c6b4;
    }
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)unaff_x20;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x20 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
    uVar25 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = bVar2;
    FUN_1004b62d4(&stack0x00000038,&stack0x000000a0);
    unaff_x23 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    if (unaff_x23 == (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      unaff_x23 = (uint *)0x0;
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(ulong *)(in_stack_00000030 + 2) = CONCAT71(uStack0000000000000041,bStack0000000000000040);
      *(char *)in_stack_00000030 = '\x05';
      unaff_x21 = in_stack_00000020;
      unaff_x20 = in_stack_00000028;
      goto joined_r0x00010078caac;
    }
    in_stack_00000028 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    in_stack_00000010 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
  }
  else if ((uVar29 & 0xff) == 1) {
    if (unaff_x25 != (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      bStack0000000000000038 = 0x38;
      uStack0000000000000039 = 0x108c610;
      bStack0000000000000040 = 4;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
      *(char *)in_stack_00000030 = '\x05';
      goto joined_r0x00010078caac;
    }
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)unaff_x20;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x20 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
    uVar25 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = bVar2;
    FUN_1004b62d4(&stack0x00000038,&stack0x000000a0);
    unaff_x25 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    if (unaff_x25 == (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      *(ulong *)(in_stack_00000030 + 2) = CONCAT71(uStack0000000000000041,bStack0000000000000040);
      *(char *)in_stack_00000030 = '\x05';
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      goto code_r0x00010078cab0;
    }
    puVar36 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    puVar31 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078b274:
    in_stack_00000018 = puVar31;
    in_stack_00000020 = puVar36;
  }
  else {
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)unaff_x20;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x20 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
    uVar25 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = bVar2;
    FUN_100e077ec(&stack0x000000a0);
  }
code_r0x00010078afdc:
  puVar46 = puVar46 + 0x10;
code_r0x00010078afe0:
  unaff_x26 = (uint *)((long)unaff_x26 + 1);
  puVar53 = in_stack_00000008;
  puVar54 = unaff_x21;
  if (unaff_x27 + 0x10 == unaff_x21) {
code_r0x00010078c65c:
    *(uint **)(unaff_x29 + -0x88) = puVar54;
    *(uint **)(unaff_x29 + -0x70) = puVar53;
    unaff_x20 = in_stack_00000028;
    unaff_x21 = in_stack_00000020;
    if (unaff_x23 == (uint *)0x8000000000000000) goto code_r0x00010078c67c;
    if (unaff_x25 == (uint *)0x8000000000000000) {
      bStack0000000000000038 = 0x38;
      uStack0000000000000039 = 0x108c610;
      bStack0000000000000040 = 4;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      uVar25 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
      *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
      *(char *)in_stack_00000030 = '\x05';
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      goto joined_r0x00010078cab4;
    }
    *(char *)in_stack_00000030 = '\x04';
    *(uint **)(in_stack_00000030 + 2) = unaff_x23;
    *(uint **)(in_stack_00000030 + 4) = in_stack_00000028;
    *(uint **)(in_stack_00000030 + 6) = in_stack_00000010;
    *(uint **)(in_stack_00000030 + 8) = unaff_x25;
    *(uint **)(in_stack_00000030 + 10) = in_stack_00000020;
    *(uint **)(in_stack_00000030 + 0xc) = in_stack_00000018;
    in_stack_00000150 = in_stack_00000018;
    in_stack_00000128 = *(uint **)(in_stack_00000030 + 2);
    in_stack_00000120 = *(uint **)in_stack_00000030;
    in_stack_00000138 = *(uint **)(in_stack_00000030 + 6);
    in_stack_00000130 = *(uint **)(in_stack_00000030 + 4);
    in_stack_00000148 = *(undefined8 *)(in_stack_00000030 + 10);
    in_stack_00000140 = *(uint **)(in_stack_00000030 + 8);
    lVar24 = FUN_100fbc67c(unaff_x29 + -0xb0);
    goto code_r0x00010078c95c;
  }
code_r0x00010078aff0:
  unaff_x27 = puVar46 + -0x10;
  bVar2 = (byte)*unaff_x27;
  puVar36 = (uint *)(ulong)bVar2;
  puVar53 = unaff_x26;
  puVar54 = puVar46;
  if (bVar2 == 0x16) goto code_r0x00010078c65c;
  uVar25 = *(undefined8 *)(puVar46 + -0xc);
  *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(puVar46 + -10);
  *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
  uVar25 = *(undefined8 *)((long)puVar46 + -0x3f);
  *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)((long)puVar46 + -0x37);
  *(undefined8 *)unaff_x22 = uVar25;
  puVar50 = *(uint **)(puVar46 + -6);
  puVar49 = *(uint **)(puVar46 + -8);
  puVar31 = (uint *)&stack0x000000a0;
  bStack00000000000000a0 = bVar2;
code_r0x00010078b01c:
  *(uint **)(puVar31 + 0x3a) = puVar50;
  *(uint **)(puVar31 + 0x38) = puVar49;
  puVar50 = *(uint **)(unaff_x27 + 0xe);
  puVar49 = *(uint **)(unaff_x27 + 0xc);
code_r0x00010078b024:
  *(uint **)(puVar31 + 0x3e) = puVar50;
  *(uint **)(puVar31 + 0x3c) = puVar49;
  puVar31 = (uint *)CONCAT17(bStack00000000000000af,
                             CONCAT61(uStack00000000000000a9,uStack00000000000000a8));
  pcVar22 = (char *)CONCAT17(uStack00000000000000b7,
                             CONCAT61(uStack00000000000000b1,uStack00000000000000b0));
  puVar38 = (uint *)CONCAT17(uStack00000000000000bf,uStack00000000000000b8);
  if ((int)puVar36 < 0xd) {
    if ((int)puVar36 == 1) {
      uVar35 = 1;
      if (bStack00000000000000a1 != 1) {
        uVar35 = 2;
      }
      uVar29 = 0;
      if (bStack00000000000000a1 != 0) {
        uVar29 = uVar35;
      }
      goto code_r0x00010078b208;
    }
code_r0x00010078b040:
    if ((int)puVar36 == 4) {
      uVar29 = 1;
      if (puVar31 != (uint *)0x1) {
        uVar29 = 2;
      }
      puVar36 = (uint *)(ulong)uVar29;
code_r0x00010078b0f0:
      bVar15 = puVar31 == (uint *)0x0;
code_r0x00010078b0f4:
      uVar29 = 0;
      if (!bVar15) {
        uVar29 = (uint)puVar36;
      }
      goto code_r0x00010078b208;
    }
    if ((int)puVar36 != 0xc) goto code_r0x00010078dab4;
    if (puVar38 != (uint *)0x4) goto code_r0x00010078b1c8;
    bVar15 = *(uint *)pcVar22 == 0x656d616e;
code_r0x00010078b068:
    if (bVar15) {
code_r0x00010078b13c:
      uVar29 = 0;
    }
    else {
      uVar29 = 1;
      if (*(uint *)pcVar22 != 0x68746170) {
        uVar29 = 2;
      }
    }
  }
  else {
code_r0x00010078b088:
    iVar30 = (int)puVar36;
    if (iVar30 == 0xd) {
      if ((uint *)pcVar22 != (uint *)0x4) goto code_r0x00010078b204;
      if (*puVar31 == 0x656d616e) goto code_r0x00010078b194;
      puVar31 = (uint *)(ulong)*puVar31;
      goto code_r0x00010078b17c;
    }
    if (iVar30 != 0xe) goto code_r0x00010078b098;
    if (puVar38 == (uint *)0x4) {
      if ((char)*(uint *)pcVar22 == 'p') {
        if (((*(char *)((long)pcVar22 + 1) == 'a') && (*(char *)((long)pcVar22 + 2) == 't')) &&
           (*(char *)((long)pcVar22 + 3) == 'h')) {
          uVar29 = 1;
          goto code_r0x00010078b1cc;
        }
      }
      else if ((((char)*(uint *)pcVar22 == 'n') && (*(char *)((long)pcVar22 + 1) == 'a')) &&
              (*(char *)((long)pcVar22 + 2) == 'm')) {
        bVar15 = *(char *)((long)pcVar22 + 3) == 'e';
code_r0x00010078b138:
        if (bVar15) goto code_r0x00010078b13c;
      }
    }
code_r0x00010078b1c8:
    uVar29 = 2;
  }
code_r0x00010078b1cc:
  if (puVar31 != (uint *)0x0) {
    _free();
  }
  goto code_r0x00010078b210;
code_r0x00010078b098:
  if (iVar30 != 0xf) {
code_r0x00010078dab4:
    *(uint **)(unaff_x29 + -0x88) = puVar46;
    *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
    uVar25 = thunk_FUN_108855b04(&stack0x000000a0,&stack0x00000038,&UNK_10b210160);
    unaff_x19 = (uint *)(unaff_x29 + -0xb0);
    goto code_r0x00010078c6b4;
  }
  if ((uint *)pcVar22 == (uint *)0x4) {
    puVar36 = (uint *)(ulong)(byte)*puVar31;
code_r0x00010078b0ac:
    bVar15 = (int)puVar36 == 0x70;
code_r0x00010078b0b0:
    if (bVar15) {
      if (((*(char *)((long)puVar31 + 1) == 'a') && (*(char *)((long)puVar31 + 2) == 't')) &&
         (*(char *)((long)puVar31 + 3) == 'h')) {
        uVar29 = 1;
        goto code_r0x00010078b208;
      }
    }
    else if (((((int)puVar36 == 0x6e) && (*(char *)((long)puVar31 + 1) == 'a')) &&
             (*(char *)((long)puVar31 + 2) == 'm')) && (*(char *)((long)puVar31 + 3) == 'e')) {
code_r0x00010078b194:
      uVar29 = 0;
      goto code_r0x00010078b208;
    }
  }
code_r0x00010078b204:
  uVar29 = 2;
  goto code_r0x00010078b208;
code_r0x00010078ac88:
  *(uint **)(puVar31 + 0x3a) = puVar50;
  *(uint **)(puVar31 + 0x38) = puVar49;
  uVar25 = *(undefined8 *)(unaff_x27 + 0xc);
  *(undefined8 *)(puVar31 + 0x3e) = *(undefined8 *)(unaff_x27 + 0xe);
  *(undefined8 *)(puVar31 + 0x3c) = uVar25;
  puVar31 = (uint *)CONCAT17(bStack00000000000000af,
                             CONCAT61(uStack00000000000000a9,uStack00000000000000a8));
  pcVar22 = (char *)CONCAT17(uStack00000000000000b7,
                             CONCAT61(uStack00000000000000b1,uStack00000000000000b0));
  puVar38 = (uint *)CONCAT17(uStack00000000000000bf,uStack00000000000000b8);
  iVar30 = (int)puVar36;
  if (iVar30 < 0xd) {
    bVar15 = iVar30 == 1;
code_r0x00010078aca8:
    uVar35 = (uint)puVar36;
    if (bVar15) {
      if (bStack00000000000000a1 != 1) {
        uVar35 = uVar35 + 1;
      }
      uVar29 = 0;
      if (bStack00000000000000a1 != 0) {
        uVar29 = uVar35;
      }
      goto code_r0x00010078ae74;
    }
    if (uVar35 == 4) {
      uVar35 = 1;
      if (puVar31 != (uint *)0x1) {
        uVar35 = 2;
      }
      uVar29 = 0;
      if (puVar31 != (uint *)0x0) {
        uVar29 = uVar35;
      }
      goto code_r0x00010078ae74;
    }
    if (uVar35 != 0xc) {
code_r0x00010078da84:
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      pcVar22 = (char *)thunk_FUN_108855b04(&stack0x000000a0,&stack0x00000038,&UNK_10b212960);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      unaff_x20 = in_stack_00000028;
      unaff_x21 = in_stack_00000020;
      goto LAB_10078c5e0;
    }
    if (puVar38 != (uint *)0x4) goto code_r0x00010078ae34;
    if (*(uint *)pcVar22 == 0x656d616e) {
code_r0x00010078ada8:
      uVar29 = 0;
    }
    else {
      uVar29 = 1;
      if (*(uint *)pcVar22 != 0x68746170) {
        uVar29 = 2;
      }
    }
code_r0x00010078ae38:
    if (puVar31 != (uint *)0x0) {
      _free();
    }
  }
  else {
    if (iVar30 == 0xd) {
      if ((uint *)pcVar22 == (uint *)0x4) {
        if (*puVar31 == 0x656d616e) {
code_r0x00010078ae00:
          uVar29 = 0;
        }
        else {
          uVar29 = 1;
          if (*puVar31 != 0x68746170) {
            uVar29 = 2;
          }
        }
        goto code_r0x00010078ae74;
      }
    }
    else {
      if (iVar30 == 0xe) {
        if (puVar38 == (uint *)0x4) {
          if ((char)*(uint *)pcVar22 == 'p') {
            if (((*(char *)((long)pcVar22 + 1) == 'a') && (*(char *)((long)pcVar22 + 2) == 't')) &&
               (*(char *)((long)pcVar22 + 3) == 'h')) {
              uVar29 = 1;
              goto code_r0x00010078ae38;
            }
          }
          else if ((((char)*(uint *)pcVar22 == 'n') && (*(char *)((long)pcVar22 + 1) == 'a')) &&
                  ((*(char *)((long)pcVar22 + 2) == 'm' && (*(char *)((long)pcVar22 + 3) == 'e'))))
          goto code_r0x00010078ada8;
        }
code_r0x00010078ae34:
        uVar29 = 2;
        goto code_r0x00010078ae38;
      }
      if (iVar30 != 0xf) goto code_r0x00010078da84;
      if ((uint *)pcVar22 == (uint *)0x4) {
        if ((char)*puVar31 == 'p') {
          if (((*(char *)((long)puVar31 + 1) == 'a') && (*(char *)((long)puVar31 + 2) == 't')) &&
             (*(char *)((long)puVar31 + 3) == 'h')) {
            uVar29 = 1;
            goto code_r0x00010078ae74;
          }
        }
        else if ((((char)*puVar31 == 'n') && (*(char *)((long)puVar31 + 1) == 'a')) &&
                (*(char *)((long)puVar31 + 2) == 'm')) {
          bVar15 = *(char *)((long)puVar31 + 3) == 'e';
code_r0x00010078ad48:
          if (bVar15) goto code_r0x00010078ae00;
        }
      }
    }
    uVar29 = 2;
code_r0x00010078ae74:
    FUN_100e077ec(&stack0x000000a0);
  }
  uVar27 = SUB81(unaff_x24,0);
  if ((uVar29 & 0xff) == 0) {
    if (unaff_x23 != (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      bStack0000000000000038 = 0x18;
      uStack0000000000000039 = 0x108c610;
      bStack0000000000000040 = 4;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      pcVar22 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      unaff_x20 = in_stack_00000028;
      unaff_x21 = in_stack_00000020;
      goto LAB_10078c5e0;
    }
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)unaff_x20;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x20 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
    uVar25 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = bVar2;
    FUN_1004b62d4(&stack0x00000038,&stack0x000000a0);
    unaff_x23 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    if (unaff_x23 == (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      unaff_x23 = (uint *)0x0;
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(ulong *)(in_stack_00000030 + 2) = CONCAT71(uStack0000000000000041,bStack0000000000000040);
      *(char *)in_stack_00000030 = '\x05';
      unaff_x20 = in_stack_00000028;
      unaff_x21 = in_stack_00000020;
      if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) goto LAB_10078c5f4;
      goto LAB_10078ca60;
    }
    in_stack_00000028 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    puVar31 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078ac44:
    in_stack_00000010 = puVar31;
  }
  else if ((uVar29 & 0xff) == 1) {
    if (unaff_x25 != (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      bStack0000000000000038 = 0x38;
      uStack0000000000000039 = 0x108c610;
      bStack0000000000000040 = 4;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
      *(char *)in_stack_00000030 = '\x05';
      unaff_x20 = in_stack_00000028;
      unaff_x21 = in_stack_00000020;
      if (unaff_x25 == (uint *)0x0) goto LAB_10078ca60;
      goto LAB_10078c5f4;
    }
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)unaff_x20;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x20 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
    uVar25 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = bVar2;
    FUN_1004b64d4(&stack0x00000038,&stack0x000000a0);
    unaff_x25 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    if (unaff_x25 == (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      *(ulong *)(in_stack_00000030 + 2) = CONCAT71(uStack0000000000000041,bStack0000000000000040);
      *(char *)in_stack_00000030 = '\x05';
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      goto LAB_10078ca60;
    }
    in_stack_00000020 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    in_stack_00000018 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
  }
  else {
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    puVar31 = (uint *)(ulong)bVar2;
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar27;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = puVar46;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x26 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    puVar50 = *(uint **)(unaff_x20 + 2);
    puVar49 = *(uint **)unaff_x20;
code_r0x00010078af50:
    *(uint **)(unaff_x22 + 2) = puVar50;
    *(uint **)unaff_x22 = puVar49;
    uVar25 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = (byte)puVar31;
    FUN_100e077ec(&stack0x000000a0);
  }
  puVar53 = unaff_x27 + 0x10;
  unaff_x26 = (uint *)((long)unaff_x26 + 1);
  unaff_x27 = puVar46;
  if (puVar53 == unaff_x21) goto code_r0x00010078c580;
code_r0x00010078ac5c:
  puVar46 = unaff_x27 + 0x10;
  bVar2 = (byte)*unaff_x27;
  puVar36 = (uint *)(ulong)bVar2;
  if (bVar2 == 0x16) goto code_r0x00010078c588;
  uVar25 = *(undefined8 *)(unaff_x27 + 4);
  *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(unaff_x27 + 6);
  *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
  puVar50 = *(uint **)((long)unaff_x27 + 9);
  puVar49 = *(uint **)((long)unaff_x27 + 1);
  bStack00000000000000a0 = bVar2;
code_r0x00010078ac7c:
  *(uint **)(unaff_x22 + 2) = puVar50;
  *(uint **)unaff_x22 = puVar49;
  puVar50 = *(uint **)(unaff_x27 + 10);
  puVar49 = *(uint **)(unaff_x27 + 8);
  puVar31 = (uint *)&stack0x000000a0;
  goto code_r0x00010078ac88;
code_r0x00010078c580:
  puVar46 = unaff_x21;
code_r0x00010078c584:
  unaff_x26 = in_stack_00000008;
code_r0x00010078c588:
  *(uint **)(unaff_x29 + -0x88) = puVar46;
  *(uint **)(unaff_x29 + -0x70) = unaff_x26;
  puVar31 = (uint *)0x8000000000000000;
  bVar15 = unaff_x23 == (uint *)0x8000000000000000;
code_r0x00010078c598:
  unaff_x20 = in_stack_00000028;
  unaff_x21 = in_stack_00000020;
code_r0x00010078c59c:
  puVar36 = in_stack_00000018;
  puVar38 = in_stack_00000010;
code_r0x00010078c5a0:
  if (bVar15) {
code_r0x00010078c5a4:
    unaff_x19 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078c5ac:
    puVar31 = (uint *)&UNK_108c61000;
code_r0x00010078c5b0:
    puVar31 = puVar31 + 6;
    puVar36 = (uint *)0x4;
code_r0x00010078c5b8:
    bStack0000000000000038 = (byte)puVar31;
    uStack0000000000000039 = (undefined7)((ulong)puVar31 >> 8);
    bStack0000000000000040 = (byte)puVar36;
    uStack0000000000000041 = (uint7)((ulong)puVar36 >> 8);
    puVar31 = (uint *)&stack0x00000038;
code_r0x00010078c5c0:
    puVar36 = (uint *)&DAT_100c7b3a0;
code_r0x00010078c5c8:
    bStack00000000000000a0 = (byte)puVar31;
    bStack00000000000000a1 = (byte)((ulong)puVar31 >> 8);
    uStack00000000000000a2 = (undefined5)((ulong)puVar31 >> 0x10);
    bStack00000000000000a7 = (byte)((ulong)puVar31 >> 0x38);
    uStack00000000000000a8 = SUB81(puVar36,0);
    uStack00000000000000a9 = (undefined6)((ulong)puVar36 >> 8);
    bStack00000000000000af = 0;
    unaff_x23 = (uint *)0x0;
    pcVar22 = s_missing_field_____108ac28f7;
    puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c5dc:
    pcVar22 = (char *)thunk_FUN_108856088(pcVar22,puVar26);
LAB_10078c5e0:
    *(char **)(in_stack_00000030 + 2) = pcVar22;
    *(char *)in_stack_00000030 = '\x05';
    bVar15 = ((ulong)unaff_x25 & 0x7fffffffffffffff) == 0;
code_r0x00010078c5f0:
    in_stack_00000028 = unaff_x20;
    unaff_x20 = in_stack_00000028;
    if (!bVar15) {
LAB_10078c5f4:
      _free(unaff_x21);
code_r0x00010078c5fc:
      in_stack_00000028 = unaff_x20;
    }
LAB_10078ca60:
    unaff_x23 = (uint *)((ulong)unaff_x23 & 0x7fffffffffffffff);
    unaff_x20 = in_stack_00000028;
  }
  else {
    bVar15 = unaff_x25 == puVar31;
code_r0x00010078c604:
    if (!bVar15) {
      *(char *)in_stack_00000030 = '\x03';
      *(uint **)(in_stack_00000030 + 2) = unaff_x23;
      *(uint **)(in_stack_00000030 + 4) = unaff_x20;
      *(uint **)(in_stack_00000030 + 6) = puVar38;
      *(uint **)(in_stack_00000030 + 8) = unaff_x25;
      *(uint **)(in_stack_00000030 + 10) = unaff_x21;
      *(uint **)(in_stack_00000030 + 0xc) = puVar36;
      in_stack_00000128 = *(uint **)(in_stack_00000030 + 2);
      in_stack_00000120 = *(uint **)in_stack_00000030;
      in_stack_00000138 = *(uint **)(in_stack_00000030 + 6);
      in_stack_00000130 = *(uint **)(in_stack_00000030 + 4);
      in_stack_00000148 = *(undefined8 *)(in_stack_00000030 + 10);
      in_stack_00000140 = *(uint **)(in_stack_00000030 + 8);
      in_stack_00000150 = puVar36;
      lVar24 = FUN_100fbc67c(unaff_x29 + -0xb0);
      goto code_r0x00010078c95c;
    }
    bStack0000000000000038 = 0x38;
    uStack0000000000000039 = 0x108c610;
    bStack0000000000000040 = 4;
    uStack0000000000000041 = 0;
    puVar31 = (uint *)&stack0x00000038;
    unaff_x19 = in_stack_00000030;
code_r0x00010078c620:
    bStack00000000000000a0 = (byte)puVar31;
    bStack00000000000000a1 = (byte)((ulong)puVar31 >> 8);
    uStack00000000000000a2 = (undefined5)((ulong)puVar31 >> 0x10);
    bStack00000000000000a7 = (byte)((ulong)puVar31 >> 0x38);
    uStack00000000000000a8 = 0xa0;
    uStack00000000000000a9 = 0x100c7b3;
    bStack00000000000000af = 0;
    pcVar22 = s_missing_field_____108ac28f7;
    puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c638:
    uVar25 = thunk_FUN_108856088(pcVar22,puVar26);
    *(undefined8 *)(unaff_x19 + 2) = uVar25;
code_r0x00010078c640:
    *(char *)unaff_x19 = '\x05';
    unaff_x19 = (uint *)(unaff_x29 + -0xb0);
  }
  if (unaff_x23 != (uint *)0x0) {
    _free(unaff_x20);
  }
  FUN_100d34830(unaff_x19 + 8);
  goto LAB_10078d618;
code_r0x00010078c67c:
  unaff_x19 = (uint *)(unaff_x29 + -0xb0);
  in_stack_00000028 = unaff_x20;
  in_stack_00000020 = unaff_x21;
code_r0x00010078c680:
  bStack0000000000000038 = 0x18;
  uStack0000000000000039 = 0x108c610;
  bStack0000000000000040 = 4;
  uStack0000000000000041 = 0;
  bStack00000000000000a0 = (byte)&stack0x00000038;
  bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
  uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
  bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
  uStack00000000000000a8 = 0xa0;
  uStack00000000000000a9 = 0x100c7b3;
  bStack00000000000000af = 0;
  unaff_x23 = (uint *)0x0;
  uVar25 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
code_r0x00010078c6b4:
  *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
  *(char *)in_stack_00000030 = '\x05';
  unaff_x20 = in_stack_00000028;
  unaff_x21 = in_stack_00000020;
code_r0x00010078c6c0:
joined_r0x00010078caac:
  unaff_x25 = (uint *)((ulong)unaff_x25 & 0x7fffffffffffffff);
  in_stack_00000020 = unaff_x21;
  in_stack_00000028 = unaff_x20;
joined_r0x00010078caac:
  if (unaff_x25 != (uint *)0x0) {
    _free(in_stack_00000020);
  }
code_r0x00010078cab0:
  unaff_x23 = (uint *)((ulong)unaff_x23 & 0x7fffffffffffffff);
joined_r0x00010078cab4:
  if (unaff_x23 != (uint *)0x0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x19 + 8);
  goto LAB_10078d618;
code_r0x00010078c57c:
code_r0x00010078c8dc:
  if ((uint *)pcVar22 == (uint *)0x0) goto code_r0x00010078d0a8;
  *(char **)(in_stack_00000030 + 2) = pcVar22;
  *(char *)in_stack_00000030 = '\x05';
code_r0x00010078c96c:
  FUN_100e06c08(&stack0x00000120);
  goto code_r0x00010078d0a8;
code_r0x00010078a60c:
  if (!bVar15) {
    puVar36 = (uint *)&stack0x000000a0;
    in_stack_00000178 = in_stack_000000d8;
code_r0x00010078a61c:
    *(undefined8 *)(puVar36 + 0x34) = in_stack_000000d0;
    *(undefined8 *)(puVar36 + 0x32) = in_stack_000000c8;
    goto code_r0x00010078a624;
  }
  in_stack_00000108 = (uint *)0x4;
  in_stack_00000120 = (uint *)&stack0x00000100;
  in_stack_00000128 = (uint *)&DAT_100c7b3a0;
  _bStack0000000000000100 = unaff_x20;
  uVar25 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000120);
  goto LAB_10078cb8c;
code_r0x00010078bf48:
  in_stack_00000130 = unaff_x23;
  in_stack_00000138 = unaff_x25;
code_r0x00010078bf4c:
  in_stack_00000140 = (uint *)0x0;
code_r0x00010078bf50:
  unaff_x20 = unaff_x21;
  puVar43 = unaff_x20;
  unaff_x21 = unaff_x20;
  if (unaff_x26 != (uint *)0x0) {
code_r0x00010078bf5c:
    puVar43 = unaff_x20 + 8;
    puVar31 = (uint *)(ulong)(byte)*unaff_x20;
code_r0x00010078bf60:
    unaff_x20 = unaff_x21;
    unaff_x21 = unaff_x20;
    in_stack_00000128 = puVar43;
    if ((int)puVar31 == 0x16) goto code_r0x00010078bf6c;
code_r0x00010078c354:
    puVar50 = *(uint **)((long)unaff_x21 + 9);
    puVar49 = *(uint **)((long)unaff_x21 + 1);
code_r0x00010078c358:
    uStack00000000000000a9 = SUB86(puVar50,0);
    bStack00000000000000af = (byte)((ulong)puVar50 >> 0x30);
    bStack00000000000000a1 = (byte)puVar49;
    uStack00000000000000a2 = (undefined5)((ulong)puVar49 >> 8);
    bStack00000000000000a7 = (byte)((ulong)puVar49 >> 0x30);
    uStack00000000000000a8 = (undefined1)((ulong)puVar49 >> 0x38);
code_r0x00010078c35c:
    uVar25 = *(undefined8 *)(unaff_x21 + 4);
    uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x21 + 6);
    uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 6) >> 0x38);
    uStack00000000000000b0 = (undefined1)uVar25;
    uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
    uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
code_r0x00010078c364:
    puVar36 = (uint *)0x1;
code_r0x00010078c368:
    in_stack_00000140 = puVar36;
code_r0x00010078c36c:
    bStack00000000000000a0 = (byte)puVar31;
    puVar23 = (uint *)&stack0x00000038;
code_r0x00010078c374:
    puVar26 = (uint *)&stack0x000000a0;
code_r0x00010078c378:
    FUN_1004b62d4(puVar23,puVar26);
code_r0x00010078c37c:
    unaff_x19 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    unaff_x22 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
code_r0x00010078c380:
    puVar31 = (uint *)0x8000000000000000;
code_r0x00010078c384:
    if (unaff_x19 == puVar31) goto code_r0x00010078bf88;
code_r0x00010078c38c:
    bVar20 = unaff_x26 == (uint *)0x1;
    unaff_x20 = puVar43;
code_r0x00010078c390:
    if (bVar20) {
code_r0x00010078c3ac:
      puVar26 = (uint *)&UNK_10b22d000;
code_r0x00010078c3b0:
      puVar26 = puVar26 + 100;
code_r0x00010078c3b8:
code_r0x00010078c3bc:
      pcVar22 = (char *)0x1;
code_r0x00010078c3c0:
      pcVar22 = (char *)thunk_FUN_1087e422c(pcVar22,puVar26);
code_r0x00010078c3c4:
      *(char **)(in_stack_00000030 + 2) = pcVar22;
code_r0x00010078c3c8:
      puVar31 = (uint *)0x5;
code_r0x00010078c3cc:
      *(char *)in_stack_00000030 = (char)puVar31;
code_r0x00010078c3d0:
      if (unaff_x19 != (uint *)0x0) {
code_r0x00010078c3d4:
        pcVar22 = (char *)unaff_x22;
code_r0x00010078c3d8:
        _free(pcVar22);
code_r0x00010078c3dc:
      }
      goto code_r0x00010078bf94;
    }
code_r0x00010078c394:
    unaff_x26 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078c398:
    unaff_x20 = unaff_x21 + 0x10;
code_r0x00010078c39c:
    in_stack_00000128 = unaff_x20;
code_r0x00010078c3a0:
    puVar31 = (uint *)(ulong)(byte)unaff_x21[8];
code_r0x00010078c3a4:
    if ((int)puVar31 == 0x16) goto code_r0x00010078c3ac;
code_r0x00010078d198:
    uVar25 = *(undefined8 *)((long)unaff_x21 + 0x21);
    uStack00000000000000a9 = (undefined6)*(undefined8 *)((long)unaff_x21 + 0x29);
    bStack00000000000000af = (byte)((ulong)*(undefined8 *)((long)unaff_x21 + 0x29) >> 0x30);
    bStack00000000000000a1 = (byte)uVar25;
    uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 8);
    bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x30);
    uStack00000000000000a8 = (undefined1)((ulong)uVar25 >> 0x38);
    uVar25 = *(undefined8 *)(unaff_x21 + 0xc);
    uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x21 + 0xe);
    uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x21 + 0xe) >> 0x38);
    uStack00000000000000b0 = (undefined1)uVar25;
    uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
    uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
    in_stack_00000140 = (uint *)0x2;
    bStack00000000000000a0 = (byte)puVar31;
    FUN_1004b62d4(&stack0x00000038,&stack0x000000a0);
    pcVar22 = (char *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    if (CONCAT71(uStack0000000000000039,bStack0000000000000038) == -0x8000000000000000)
    goto code_r0x00010078c3c4;
    *(char *)in_stack_00000030 = '\x04';
    *(uint **)(in_stack_00000030 + 2) = unaff_x19;
    *(uint **)(in_stack_00000030 + 4) = unaff_x22;
    *(uint **)(in_stack_00000030 + 6) = unaff_x26;
    *(long *)(in_stack_00000030 + 8) = CONCAT71(uStack0000000000000039,bStack0000000000000038);
    *(char **)(in_stack_00000030 + 10) = pcVar22;
    *(ulong *)(in_stack_00000030 + 0xc) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    *(ulong *)(unaff_x29 + -0x80) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    in_stack_00000188 = *(uint **)(in_stack_00000030 + 2);
    in_stack_00000180 = *(uint **)in_stack_00000030;
    in_stack_00000198 = *(uint **)(in_stack_00000030 + 6);
    in_stack_00000190 = *(uint **)(in_stack_00000030 + 4);
    in_stack_000001a8 = *(undefined8 *)(in_stack_00000030 + 10);
    in_stack_000001a0 = *(undefined8 *)(in_stack_00000030 + 8);
    pcVar22 = (char *)FUN_100fbc738(&stack0x00000120);
    goto code_r0x00010078d2f4;
  }
code_r0x00010078bf6c:
  puVar26 = (uint *)&UNK_10b22d000;
  unaff_x21 = unaff_x20;
code_r0x00010078bf70:
  puVar26 = puVar26 + 100;
code_r0x00010078bf74:
code_r0x00010078bf78:
  puVar23 = (uint *)0x0;
code_r0x00010078bf80:
  pcVar22 = (char *)thunk_FUN_1087e422c(puVar23,puVar26);
code_r0x00010078bf84:
  unaff_x22 = (uint *)pcVar22;
code_r0x00010078bf88:
  *(uint **)(in_stack_00000030 + 2) = unaff_x22;
  puVar31 = (uint *)0x5;
  unaff_x20 = puVar43;
code_r0x00010078bf90:
  *(char *)in_stack_00000030 = (char)puVar31;
code_r0x00010078bf94:
  unaff_x22 = (uint *)(((ulong)((long)unaff_x25 - (long)unaff_x20) >> 5) + 1);
code_r0x00010078bfa0:
  while (unaff_x22 = (uint *)((long)unaff_x22 + -1), unaff_x22 != (uint *)0x0) {
    FUN_100e077ec(unaff_x20);
    unaff_x20 = unaff_x20 + 8;
  }
joined_r0x00010078c03c:
  puVar33 = unaff_x21;
  if (unaff_x23 != (uint *)0x0) {
code_r0x00010078c0cc:
    _free(puVar33);
  }
  goto code_r0x00010078d0a8;
code_r0x00010078b450:
  iVar30 = (int)puVar36;
  if (iVar30 < 0xd) {
    if (iVar30 == 1) {
      uVar29 = 1;
      if (bStack00000000000000a1 != 1) {
        uVar29 = 2;
      }
      uVar35 = 0;
      if (bStack00000000000000a1 != 0) {
        uVar35 = uVar29;
      }
      unaff_x19 = (uint *)(ulong)uVar35;
    }
    else {
      if (iVar30 != 4) {
        if (iVar30 == 0xc) {
code_r0x00010078b470:
          if (puVar38 == (uint *)0xd) {
            uVar29 = 1;
            if (*(long *)pcVar22 != 0x656c655f74786574 ||
                *(long *)((long)pcVar22 + 5) != 0x73746e656d656c65) {
              uVar29 = 2;
            }
            unaff_x19 = (uint *)(ulong)uVar29;
          }
          else {
            if (puVar38 != (uint *)0x4) goto code_r0x00010078b650;
            bVar15 = *(uint *)pcVar22 == 0x74786574;
            puVar36 = (uint *)0x2;
code_r0x00010078b494:
            uVar29 = (uint)puVar36;
            if (bVar15) {
              uVar29 = 0;
            }
            unaff_x19 = (uint *)(ulong)uVar29;
          }
          goto joined_r0x00010078b498;
        }
code_r0x00010078dae4:
        *(uint **)(unaff_x29 + -0x88) = unaff_x25;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
        in_stack_00000108 = in_stack_00000018;
        _bStack0000000000000100 = unaff_x27;
        in_stack_00000110 = unaff_x26;
        uVar25 = thunk_FUN_108855b04(&stack0x000000a0,&stack0x00000038,&UNK_10b211840);
        unaff_x25 = (uint *)(unaff_x29 + -0xb0);
        goto LAB_10078c78c;
      }
      uVar29 = 1;
      if (puVar31 != (uint *)0x1) {
        uVar29 = 2;
      }
      uVar35 = 0;
      if (puVar31 != (uint *)0x0) {
        uVar35 = uVar29;
      }
      unaff_x19 = (uint *)(ulong)uVar35;
    }
code_r0x00010078b794:
    FUN_100e077ec(&stack0x000000a0);
  }
  else {
    if (iVar30 == 0xd) {
      if ((uint *)pcVar22 == (uint *)0xd) {
        puVar36 = *(uint **)puVar31;
code_r0x00010078b758:
        puVar38 = (uint *)0x74786574;
code_r0x00010078b760:
        puVar36 = (uint *)((ulong)puVar36 ^ ((ulong)puVar38 | 0x656c655f00000000));
code_r0x00010078b76c:
        puVar31 = *(uint **)((long)puVar31 + 5);
        puVar38 = (uint *)0x6c65;
code_r0x00010078b774:
        puVar38 = (uint *)((ulong)puVar38 | 0x6e656d650000);
code_r0x00010078b77c:
        puVar31 = (uint *)((ulong)puVar31 ^ ((ulong)puVar38 | 0x7374000000000000));
code_r0x00010078b784:
        puVar31 = (uint *)((ulong)puVar36 | (ulong)puVar31);
code_r0x00010078b788:
        bVar15 = puVar31 == (uint *)0x0;
code_r0x00010078b78c:
        uVar29 = 1;
        if (!bVar15) {
          uVar29 = 2;
        }
        unaff_x19 = (uint *)(ulong)uVar29;
      }
      else {
        if ((uint *)pcVar22 != (uint *)0x4) goto code_r0x00010078b74c;
        uVar29 = 2;
        if (*puVar31 == 0x74786574) {
          uVar29 = 0;
        }
        unaff_x19 = (uint *)(ulong)uVar29;
      }
      goto code_r0x00010078b794;
    }
    if (iVar30 != 0xe) {
      if (iVar30 != 0xf) goto code_r0x00010078dae4;
      if ((uint *)pcVar22 == (uint *)0xd) {
        if ((((((char)*puVar31 == 't') && (*(char *)((long)puVar31 + 1) == 'e')) &&
             ((*(char *)((long)puVar31 + 2) == 'x' &&
              ((*(char *)((long)puVar31 + 3) == 't' && ((char)puVar31[1] == '_')))))) &&
            (*(char *)((long)puVar31 + 5) == 'e')) && (*(char *)((long)puVar31 + 6) == 'l')) {
code_r0x00010078b6fc:
          if (*(char *)((long)puVar31 + 7) == 'e') {
            puVar36 = (uint *)(ulong)(byte)puVar31[2];
code_r0x00010078b70c:
            if ((int)puVar36 == 0x6d) {
code_r0x00010078b714:
              puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 9);
code_r0x00010078b718:
              if (((int)puVar36 == 0x65) && (*(char *)((long)puVar31 + 10) == 'n')) {
code_r0x00010078b72c:
                bVar14 = *(char *)((long)puVar31 + 0xb) == 't';
code_r0x00010078b734:
                if (bVar14) {
                  bVar15 = (char)puVar31[3] == 's';
code_r0x00010078b740:
                  if (bVar15) {
code_r0x00010078b744:
                    unaff_x19 = (uint *)0x1;
code_r0x00010078b748:
                    goto code_r0x00010078b794;
                  }
                }
              }
            }
          }
        }
      }
      else if (((uint *)pcVar22 == (uint *)0x4) && ((char)*puVar31 == 't')) {
        puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 1);
code_r0x00010078b4d8:
        if ((((int)puVar36 == 0x65) && (*(char *)((long)puVar31 + 2) == 'x')) &&
           (*(char *)((long)puVar31 + 3) == 't')) {
code_r0x00010078b4f8:
          unaff_x19 = (uint *)0x0;
          goto code_r0x00010078b794;
        }
      }
code_r0x00010078b74c:
      unaff_x19 = (uint *)0x2;
      goto code_r0x00010078b794;
    }
    bVar15 = puVar38 == (uint *)0xd;
code_r0x00010078b51c:
    if (bVar15) {
      if ((((((char)*(uint *)pcVar22 == 't') && (*(char *)((long)pcVar22 + 1) == 'e')) &&
           (*(char *)((long)pcVar22 + 2) == 'x')) &&
          ((*(char *)((long)pcVar22 + 3) == 't' && ((char)*(uint *)((long)pcVar22 + 4) == '_')))) &&
         ((((*(char *)((long)pcVar22 + 5) == 'e' &&
            ((*(char *)((long)pcVar22 + 6) == 'l' && (*(char *)((long)pcVar22 + 7) == 'e')))) &&
           ((char)*(uint *)((long)pcVar22 + 8) == 'm')) &&
          ((((*(char *)((long)pcVar22 + 9) == 'e' && (*(char *)((long)pcVar22 + 10) == 'n')) &&
            (*(char *)((long)pcVar22 + 0xb) == 't')) &&
           ((char)*(uint *)((long)pcVar22 + 0xc) == 's')))))) {
        unaff_x19 = (uint *)0x1;
      }
      else {
code_r0x00010078b650:
        unaff_x19 = (uint *)0x2;
      }
    }
    else {
      if (((puVar38 != (uint *)0x4) || ((char)*(uint *)pcVar22 != 't')) ||
         ((*(char *)((long)pcVar22 + 1) != 'e' ||
          ((*(char *)((long)pcVar22 + 2) != 'x' || (*(char *)((long)pcVar22 + 3) != 't'))))))
      goto code_r0x00010078b650;
      unaff_x19 = (uint *)0x0;
    }
joined_r0x00010078b498:
    if (puVar31 != (uint *)0x0) {
      _free();
    }
  }
  bVar15 = ((ulong)unaff_x19 & 0xff) == 0;
  puVar31 = (uint *)(ulong)((uint)unaff_x19 & 0xff);
code_r0x00010078b7a0:
  if (bVar15) {
code_r0x00010078b804:
    puVar31 = (uint *)0x8000000000000000;
code_r0x00010078b808:
    if (unaff_x23 == puVar31) {
code_r0x00010078b810:
      puVar31 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x00010078b814:
      *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
      if ((int)puVar31 != 0x16) {
        puVar50 = *(uint **)(unaff_x21 + 2);
        puVar49 = *(uint **)unaff_x21;
code_r0x00010078b828:
        *(uint **)(unaff_x22 + 2) = puVar50;
        *(uint **)unaff_x22 = puVar49;
code_r0x00010078b82c:
        uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
        bStack00000000000000a0 = (byte)puVar31;
code_r0x00010078b838:
        pcVar22 = (char *)&stack0x00000038;
code_r0x00010078b840:
        FUN_1004b62d4(pcVar22,&stack0x000000a0);
code_r0x00010078b848:
        unaff_x23 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
code_r0x00010078b84c:
        if (unaff_x23 != (uint *)0x8000000000000000) {
code_r0x00010078b858:
          in_stack_00000020 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
          puVar31 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078b860:
          in_stack_00000010 = puVar31;
          goto code_r0x00010078b3f8;
        }
        *(uint **)(unaff_x29 + -0x88) = unaff_x25;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
        in_stack_00000108 = in_stack_00000018;
        unaff_x23 = (uint *)0x0;
        pcVar22 = (char *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
        unaff_x20 = in_stack_00000020;
        unaff_x22 = in_stack_00000018;
        _bStack0000000000000100 = unaff_x27;
        in_stack_00000110 = unaff_x26;
code_r0x00010078caec:
        unaff_x25 = (uint *)(unaff_x29 + -0xb0);
        *(char **)(in_stack_00000030 + 2) = pcVar22;
        *(char *)in_stack_00000030 = '\x05';
        in_stack_00000020 = unaff_x20;
        goto joined_r0x00010078cb08;
      }
      *(uint **)(unaff_x29 + -0x88) = unaff_x25;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
      in_stack_00000108 = in_stack_00000018;
      _bStack0000000000000100 = unaff_x27;
      in_stack_00000110 = unaff_x26;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    *(uint **)(unaff_x29 + -0x88) = unaff_x25;
    *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
    in_stack_00000108 = in_stack_00000018;
    bStack0000000000000038 = 0x20;
    uStack0000000000000039 = 0x108c725;
    bStack0000000000000040 = 4;
    uStack0000000000000041 = 0;
    bStack00000000000000a0 = (byte)&stack0x00000038;
    bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
    uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
    bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
    uStack00000000000000a8 = 0xa0;
    uStack00000000000000a9 = 0x100c7b3;
    bStack00000000000000af = 0;
    _bStack0000000000000100 = unaff_x27;
    in_stack_00000110 = unaff_x26;
    uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
    unaff_x25 = (uint *)(unaff_x29 + -0xb0);
    goto LAB_10078c78c;
  }
code_r0x00010078b7a4:
  if ((int)puVar31 == 1) {
    bVar15 = unaff_x24 == (uint *)0x8000000000000000;
code_r0x00010078b7b4:
    if (!bVar15) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x25;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
      in_stack_00000108 = in_stack_00000018;
      bStack0000000000000038 = 0x7a;
      uStack0000000000000039 = 0x108cad8;
      bStack0000000000000040 = 0xd;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      _bStack0000000000000100 = unaff_x27;
      in_stack_00000110 = unaff_x26;
      uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x25 = (uint *)(unaff_x29 + -0xb0);
      *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
      *(char *)in_stack_00000030 = '\x05';
      goto joined_r0x00010078d5f0;
    }
    puVar31 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x00010078b7bc:
    puVar36 = (uint *)0x16;
code_r0x00010078b7c0:
    *(char *)(unaff_x29 + -0xb0) = (char)puVar36;
    if ((int)puVar31 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x25;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
      in_stack_00000108 = in_stack_00000018;
      _bStack0000000000000100 = unaff_x27;
      in_stack_00000110 = unaff_x26;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
code_r0x00010078b7cc:
    uVar25 = *(undefined8 *)unaff_x21;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x21 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
code_r0x00010078b7d4:
    uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = (byte)puVar31;
code_r0x00010078b7e4:
    pcVar22 = (char *)&stack0x00000038;
code_r0x00010078b7e8:
    func_0x00010139c09c(pcVar22,&stack0x000000a0);
    puVar31 = (uint *)0x8000000000000000;
    unaff_x27 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
code_r0x00010078b7f8:
    unaff_x24 = unaff_x27;
    if (unaff_x24 == puVar31) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x25;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
      *(ulong *)(in_stack_00000030 + 2) = CONCAT71(uStack0000000000000041,bStack0000000000000040);
      *(char *)in_stack_00000030 = '\x05';
      unaff_x25 = (uint *)(unaff_x29 + -0xb0);
      goto LAB_10078d600;
    }
    in_stack_00000018 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    unaff_x26 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
    unaff_x27 = unaff_x24;
  }
  else {
    puVar31 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x00010078b86c:
    puVar36 = (uint *)0x16;
code_r0x00010078b870:
    *(char *)(unaff_x29 + -0xb0) = (char)puVar36;
code_r0x00010078b874:
    if ((int)puVar31 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x25;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar46 + 1);
      in_stack_00000108 = in_stack_00000018;
      _bStack0000000000000100 = unaff_x27;
      in_stack_00000110 = unaff_x26;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)unaff_x21;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(unaff_x21 + 2);
    *(undefined8 *)unaff_x22 = uVar25;
code_r0x00010078b884:
    uVar25 = *(undefined8 *)((long)unaff_x21 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
    bStack00000000000000a0 = (byte)puVar31;
    pcVar22 = (char *)&stack0x000000a0;
code_r0x00010078b894:
    FUN_100e077ec(pcVar22);
  }
code_r0x00010078b3f8:
  unaff_x25 = unaff_x25 + 0x10;
  puVar31 = unaff_x20 + 0x10;
  puVar46 = (uint *)((long)puVar46 + 1);
  puVar36 = in_stack_00000028;
code_r0x00010078b408:
  bVar15 = puVar31 == puVar36;
code_r0x00010078b40c:
  puVar53 = in_stack_00000028;
  puVar54 = in_stack_00000008;
  if (bVar15) goto code_r0x00010078c730;
code_r0x00010078b410:
  unaff_x20 = unaff_x25 + -0x10;
  bVar2 = (byte)*unaff_x20;
  puVar36 = (uint *)(ulong)bVar2;
  puVar53 = unaff_x25;
  puVar54 = puVar46;
  if (bVar2 == 0x16) goto code_r0x00010078c730;
  uVar25 = *(undefined8 *)(unaff_x25 + -0xc);
  *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(unaff_x25 + -10);
  *(undefined8 *)((long)unaff_x22 + 0xf) = uVar25;
  bStack00000000000000a0 = bVar2;
code_r0x00010078b42c:
  uVar25 = *(undefined8 *)((long)unaff_x20 + 1);
  *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)((long)unaff_x20 + 9);
  *(undefined8 *)unaff_x22 = uVar25;
  in_stack_00000188 = *(uint **)(unaff_x20 + 10);
  in_stack_00000180 = *(uint **)(unaff_x20 + 8);
  in_stack_00000198 = *(uint **)(unaff_x20 + 0xe);
  in_stack_00000190 = *(uint **)(unaff_x20 + 0xc);
  puVar31 = (uint *)CONCAT17(bStack00000000000000af,
                             CONCAT61(uStack00000000000000a9,uStack00000000000000a8));
  pcVar22 = (char *)CONCAT17(uStack00000000000000b7,
                             CONCAT61(uStack00000000000000b1,uStack00000000000000b0));
  puVar38 = (uint *)CONCAT17(uStack00000000000000bf,uStack00000000000000b8);
  goto code_r0x00010078b450;
code_r0x00010078c730:
  *(uint **)(unaff_x29 + -0x88) = puVar53;
  *(uint **)(unaff_x29 + -0x70) = puVar54;
  in_stack_00000108 = in_stack_00000018;
  _bStack0000000000000100 = unaff_x27;
  in_stack_00000110 = unaff_x26;
  if (unaff_x23 != (uint *)0x8000000000000000) {
    bVar7 = unaff_x24 != (uint *)0x8000000000000000;
    puVar53 = (uint *)0x0;
    if (bVar7) {
      puVar53 = unaff_x24;
    }
    *(char *)in_stack_00000030 = '\0';
    puVar54 = (uint *)0x8;
    if (bVar7) {
      puVar54 = in_stack_00000018;
    }
    in_stack_00000150 = (uint *)0x0;
    if (bVar7) {
      in_stack_00000150 = unaff_x26;
    }
    *(uint **)(in_stack_00000030 + 2) = unaff_x23;
    *(uint **)(in_stack_00000030 + 4) = in_stack_00000020;
    *(uint **)(in_stack_00000030 + 6) = in_stack_00000010;
    *(uint **)(in_stack_00000030 + 8) = puVar53;
    *(uint **)(in_stack_00000030 + 10) = puVar54;
    *(uint **)(in_stack_00000030 + 0xc) = in_stack_00000150;
    in_stack_00000128 = *(uint **)(in_stack_00000030 + 2);
    in_stack_00000120 = *(uint **)in_stack_00000030;
    in_stack_00000138 = *(uint **)(in_stack_00000030 + 6);
    in_stack_00000130 = *(uint **)(in_stack_00000030 + 4);
    in_stack_00000148 = *(undefined8 *)(in_stack_00000030 + 10);
    in_stack_00000140 = *(uint **)(in_stack_00000030 + 8);
    lVar24 = FUN_100fbc67c(unaff_x29 + -0xb0);
code_r0x00010078c95c:
    if (lVar24 == 0) goto code_r0x00010078d0a8;
    *(long *)(in_stack_00000030 + 2) = lVar24;
    *(char *)in_stack_00000030 = '\x05';
    goto code_r0x00010078c96c;
  }
  unaff_x25 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078c758:
  bStack0000000000000038 = 0x20;
  uStack0000000000000039 = 0x108c725;
  bStack0000000000000040 = 4;
  uStack0000000000000041 = 0;
  bStack00000000000000a0 = (byte)&stack0x00000038;
  bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
  uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
  bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
  uStack00000000000000a8 = 0xa0;
  uStack00000000000000a9 = 0x100c7b3;
  bStack00000000000000af = 0;
  unaff_x23 = (uint *)0x0;
  uVar25 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
LAB_10078c78c:
  *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
  *(char *)in_stack_00000030 = '\x05';
  unaff_x22 = in_stack_00000018;
joined_r0x00010078cb08:
  in_stack_00000018 = unaff_x22;
  if (unaff_x24 != (uint *)0x8000000000000000) {
joined_r0x00010078d5f0:
    if (unaff_x26 != (uint *)0x0) {
      puVar53 = in_stack_00000018 + 2;
      do {
        if ((*(ulong *)(puVar53 + -2) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)puVar53);
        }
        puVar53 = puVar53 + 10;
        unaff_x26 = (uint *)((long)unaff_x26 + -1);
      } while (unaff_x26 != (uint *)0x0);
    }
    if (unaff_x24 != (uint *)0x0) {
      _free(in_stack_00000018);
    }
  }
LAB_10078d600:
  if (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(unaff_x25 + 8);
  goto LAB_10078d618;
code_r0x00010078bf30:
  while( true ) {
    unaff_x20 = unaff_x19;
code_r0x00010078bf34:
code_r0x00010078bf1c:
    unaff_x22 = (uint *)((long)unaff_x22 + -1);
    if (unaff_x22 == (uint *)0x0) break;
    unaff_x19 = unaff_x20 + 8;
code_r0x00010078bf28:
    pcVar22 = (char *)unaff_x20;
code_r0x00010078bf2c:
    FUN_100e077ec(pcVar22);
  }
  goto joined_r0x00010078c03c;
code_r0x00010078c82c:
  *(uint **)(unaff_x29 + -0x88) = puVar54;
  *(uint **)(unaff_x29 + -0x70) = puVar53;
  if (unaff_x23 != (uint *)0x8000000000000000) {
    *(char *)in_stack_00000030 = '\x01';
    iVar1 = 2;
    if (iVar30 != 3) {
      iVar1 = iVar30;
    }
    *(char *)((long)in_stack_00000030 + 1) = (char)iVar1;
    *(uint **)(in_stack_00000030 + 2) = unaff_x23;
    *(uint **)(in_stack_00000030 + 4) = unaff_x24;
    *(uint **)(in_stack_00000030 + 6) = in_stack_00000020;
    in_stack_00000138 = *(uint **)(in_stack_00000030 + 6);
    in_stack_00000130 = *(uint **)(in_stack_00000030 + 4);
    in_stack_00000148 = *(undefined8 *)(in_stack_00000030 + 10);
    in_stack_00000140 = *(uint **)(in_stack_00000030 + 8);
    in_stack_00000150 = *(uint **)(in_stack_00000030 + 0xc);
    in_stack_00000128 = *(uint **)(in_stack_00000030 + 2);
    in_stack_00000120 = *(uint **)in_stack_00000030;
    pcVar22 = (char *)FUN_100fbc67c(unaff_x29 + -0xb0);
    goto code_r0x00010078c8dc;
  }
  unaff_x19 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078c84c:
  bStack0000000000000038 = 0x66;
  uStack0000000000000039 = 0x108ca13;
  bStack0000000000000040 = 9;
  uStack0000000000000041 = 0;
  bStack00000000000000a0 = (byte)&stack0x00000038;
  bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
  uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
  bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
  uStack00000000000000a8 = 0xa0;
  uStack00000000000000a9 = 0x100c7b3;
  bStack00000000000000af = 0;
  unaff_x24 = (uint *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
code_r0x00010078c880:
  *(uint **)(in_stack_00000030 + 2) = unaff_x24;
  *(char *)in_stack_00000030 = '\x05';
  goto LAB_10078c88c;
code_r0x00010078b940:
  unaff_x26 = unaff_x26 + -0x10;
  puVar36 = (uint *)(ulong)(byte)*unaff_x26;
code_r0x00010078b944:
  bVar15 = (int)puVar36 == 0x16;
code_r0x00010078b948:
  iVar30 = (int)unaff_x22;
  puVar53 = unaff_x25;
  puVar54 = unaff_x27;
  if (bVar15) goto code_r0x00010078c82c;
  bStack00000000000000a0 = (byte)puVar36;
  puVar50 = *(uint **)(unaff_x26 + 6);
  puVar49 = *(uint **)(unaff_x26 + 4);
code_r0x00010078b954:
  *(uint **)((long)unaff_x20 + 0x17) = puVar50;
  *(uint **)((long)unaff_x20 + 0xf) = puVar49;
code_r0x00010078b958:
  uVar25 = *(undefined8 *)((long)unaff_x26 + 1);
  *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)((long)unaff_x26 + 9);
  *(undefined8 *)unaff_x20 = uVar25;
code_r0x00010078b960:
  puVar50 = *(uint **)(unaff_x26 + 10);
  puVar49 = *(uint **)(unaff_x26 + 8);
code_r0x00010078b964:
  puVar31 = (uint *)&stack0x000000a0;
  in_stack_00000180 = puVar49;
  in_stack_00000188 = puVar50;
code_r0x00010078b96c:
  uVar25 = *(undefined8 *)(unaff_x26 + 0xc);
  *(undefined8 *)(puVar31 + 0x3e) = *(undefined8 *)(unaff_x26 + 0xe);
  *(undefined8 *)(puVar31 + 0x3c) = uVar25;
code_r0x00010078b974:
  puVar31 = (uint *)CONCAT17(bStack00000000000000af,
                             CONCAT61(uStack00000000000000a9,uStack00000000000000a8));
  pcVar22 = (char *)CONCAT17(uStack00000000000000b7,
                             CONCAT61(uStack00000000000000b1,uStack00000000000000b0));
  puVar38 = (uint *)CONCAT17(uStack00000000000000bf,uStack00000000000000b8);
code_r0x00010078b97c:
  if (0xc < (int)puVar36) {
code_r0x00010078b9e8:
    bVar15 = (int)puVar36 == 0xd;
code_r0x00010078b9ec:
    if (bVar15) {
code_r0x00010078bb3c:
      if ((uint *)pcVar22 == (uint *)0x6) {
        uVar29 = 1;
        if (*puVar31 != 0x61746564 || (short)puVar31[1] != 0x6c69) {
          uVar29 = 2;
        }
        unaff_x19 = (uint *)(ulong)uVar29;
      }
      else {
code_r0x00010078bb44:
        if ((uint *)pcVar22 != (uint *)0x9) goto code_r0x00010078bc6c;
code_r0x00010078bb4c:
        puVar36 = *(uint **)puVar31;
        puVar38 = (uint *)0x6d69;
code_r0x00010078bb54:
        puVar38 = (uint *)((ulong)puVar38 | 0x5f6567610000);
code_r0x00010078bb5c:
        puVar36 = (uint *)((ulong)puVar36 ^ ((ulong)puVar38 | 0x7275000000000000));
code_r0x00010078bb64:
        puVar31 = (uint *)(ulong)(byte)puVar31[2];
        puVar38 = (uint *)0x6c;
code_r0x00010078bb6c:
        bVar15 = puVar36 == (uint *)0x0 && puVar31 == puVar38;
code_r0x00010078bb78:
        uVar29 = 2;
        if (bVar15) {
          uVar29 = 0;
        }
        unaff_x19 = (uint *)(ulong)uVar29;
      }
    }
    else {
code_r0x00010078b9f0:
      if ((int)puVar36 == 0xe) {
code_r0x00010078ba9c:
        bVar15 = puVar38 == (uint *)0x6;
code_r0x00010078baa0:
        if (bVar15) {
          puVar36 = (uint *)(ulong)(byte)*(uint *)pcVar22;
code_r0x00010078bb88:
          if ((int)puVar36 == 100) {
code_r0x00010078bb90:
            if (*(char *)((long)pcVar22 + 1) == 'e') {
              puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 2);
code_r0x00010078bba0:
              if ((int)puVar36 == 0x74) {
code_r0x00010078bba8:
                if (*(char *)((long)pcVar22 + 3) == 'a') {
code_r0x00010078bbb4:
                  puVar36 = (uint *)(ulong)(byte)*(uint *)((long)pcVar22 + 4);
code_r0x00010078bbb8:
                  if (((int)puVar36 == 0x69) && (*(char *)((long)pcVar22 + 5) == 'l')) {
                    unaff_x19 = (uint *)0x1;
                    goto joined_r0x00010078bbdc;
                  }
                }
              }
            }
          }
code_r0x00010078bbd8:
          unaff_x19 = (uint *)0x2;
code_r0x00010078bbdc:
          goto joined_r0x00010078bbdc;
        }
code_r0x00010078baa4:
        if (puVar38 != (uint *)0x9) goto code_r0x00010078bbd8;
code_r0x00010078baac:
        bVar15 = (char)*(uint *)pcVar22 == 'i';
code_r0x00010078bab4:
        if (!bVar15) goto code_r0x00010078bbd8;
        puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 1);
code_r0x00010078babc:
        if ((int)puVar36 != 0x6d) goto code_r0x00010078bbd8;
code_r0x00010078bac4:
        puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 2);
code_r0x00010078bac8:
        if ((int)puVar36 != 0x61) goto code_r0x00010078bbd8;
        puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 3);
code_r0x00010078bad4:
        if ((int)puVar36 != 0x67) goto code_r0x00010078bbd8;
code_r0x00010078badc:
        bVar15 = (char)*(uint *)((long)pcVar22 + 4) == 'e';
code_r0x00010078bae4:
        if (!bVar15) goto code_r0x00010078bbd8;
code_r0x00010078bae8:
        puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 5);
code_r0x00010078baec:
        bVar15 = (int)puVar36 == 0x5f;
code_r0x00010078baf0:
        if (!bVar15) goto code_r0x00010078bbd8;
        puVar36 = (uint *)(ulong)*(byte *)((long)pcVar22 + 6);
code_r0x00010078baf8:
        if ((int)puVar36 != 0x75) goto code_r0x00010078bbd8;
code_r0x00010078bb00:
        bVar15 = *(char *)((long)pcVar22 + 7) == 'r';
code_r0x00010078bb08:
        if (!bVar15) goto code_r0x00010078bbd8;
        puVar36 = (uint *)(ulong)(byte)*(uint *)((long)pcVar22 + 8);
code_r0x00010078bb10:
        bVar15 = (int)puVar36 == 0x6c;
code_r0x00010078bb14:
        if (!bVar15) goto code_r0x00010078bbd8;
code_r0x00010078bb18:
        unaff_x19 = (uint *)0x0;
        if (puVar31 != (uint *)0x0) goto code_r0x00010078bc14;
code_r0x00010078bb20:
        goto code_r0x00010078bca8;
      }
      bVar15 = (int)puVar36 == 0xf;
code_r0x00010078b9fc:
      if (!bVar15) goto code_r0x00010078db1c;
code_r0x00010078ba00:
      if ((uint *)pcVar22 == (uint *)0x6) {
        if ((((char)*puVar31 == 'd') && (*(char *)((long)puVar31 + 1) == 'e')) &&
           ((*(char *)((long)puVar31 + 2) == 't' &&
            (((*(char *)((long)puVar31 + 3) == 'a' && ((char)puVar31[1] == 'i')) &&
             (*(char *)((long)puVar31 + 5) == 'l')))))) {
          unaff_x19 = (uint *)0x1;
          goto code_r0x00010078bca0;
        }
      }
      else {
        bVar15 = (uint *)pcVar22 == (uint *)0x9;
code_r0x00010078ba0c:
        if (bVar15) {
code_r0x00010078ba10:
          puVar36 = (uint *)(ulong)(byte)*puVar31;
code_r0x00010078ba14:
          bVar15 = (int)puVar36 == 0x69;
code_r0x00010078ba18:
          if (bVar15) {
code_r0x00010078ba1c:
            puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 1);
code_r0x00010078ba20:
            if ((int)puVar36 == 0x6d) {
              puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 2);
code_r0x00010078ba2c:
              bVar8 = (int)puVar36 == 0x61;
code_r0x00010078ba30:
              if ((bVar8) && (*(char *)((long)puVar31 + 3) == 'g')) {
code_r0x00010078ba40:
                bVar16 = (char)puVar31[1] == 'e';
code_r0x00010078ba48:
                if (bVar16) {
                  puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 5);
code_r0x00010078ba50:
                  bVar15 = (int)puVar36 == 0x5f;
code_r0x00010078ba54:
                  if (bVar15) {
code_r0x00010078ba58:
                    bVar15 = *(char *)((long)puVar31 + 6) == 'u';
code_r0x00010078ba60:
                    if (bVar15) {
code_r0x00010078ba64:
                      puVar36 = (uint *)(ulong)*(byte *)((long)puVar31 + 7);
code_r0x00010078ba68:
                      if ((int)puVar36 == 0x72) {
code_r0x00010078ba70:
                        puVar31 = (uint *)(ulong)(byte)puVar31[2];
code_r0x00010078ba74:
                        bVar15 = (int)puVar31 == 0x6c;
code_r0x00010078ba78:
                        if (bVar15) {
code_r0x00010078ba7c:
                          unaff_x19 = (uint *)0x0;
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
      }
code_r0x00010078bc6c:
      unaff_x19 = (uint *)0x2;
    }
code_r0x00010078bca0:
    FUN_100e077ec(&stack0x000000a0);
code_r0x00010078bca8:
    if (((ulong)unaff_x19 & 0xff) != 0) {
      if (((uint)unaff_x19 & 0xff) != 1) {
        puVar31 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x00010078bd78:
        *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
        if ((int)puVar31 != 0x16) {
          uVar25 = *(undefined8 *)puVar46;
          *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(puVar46 + 2);
          *(undefined8 *)unaff_x20 = uVar25;
          uVar25 = *(undefined8 *)((long)puVar46 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)puVar46 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
          bStack00000000000000a0 = (byte)puVar31;
          FUN_100e077ec(&stack0x000000a0);
          goto code_r0x00010078b928;
        }
code_r0x00010078d450:
        *(uint **)(unaff_x29 + -0x88) = unaff_x27;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010078da5c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10078da60);
        (*pcVar5)();
      }
      if ((int)unaff_x22 == 3) {
        bVar2 = *(byte *)(unaff_x29 + -0xb0);
        *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
        if (bVar2 == 0x16) goto code_r0x00010078d450;
        uVar25 = *(undefined8 *)puVar46;
        *(undefined8 *)(in_stack_00000028 + 2) = *(undefined8 *)(puVar46 + 2);
        *(undefined8 *)in_stack_00000028 = uVar25;
        uVar25 = *(undefined8 *)((long)puVar46 + 0xf);
        *(undefined8 *)((long)in_stack_00000028 + 0x17) = *(undefined8 *)((long)puVar46 + 0x17);
        *(undefined8 *)((long)in_stack_00000028 + 0xf) = uVar25;
        bStack0000000000000038 = bVar2;
        if (bVar2 == 0x10) {
code_r0x00010078b908:
          puVar31 = (uint *)0x200;
code_r0x00010078b90c:
          _bStack0000000000000100 = (uint *)CONCAT62(uStack0000000000000102,(short)puVar31);
          pcVar22 = (char *)&stack0x00000038;
code_r0x00010078b914:
          FUN_100e077ec(pcVar22);
code_r0x00010078b918:
          bVar15 = bStack0000000000000100 == '\x01';
code_r0x00010078b920:
          if (!bVar15) {
code_r0x00010078b924:
            unaff_x22 = (uint *)((ulong)_bStack0000000000000100 >> 8 & 0xff);
            goto code_r0x00010078b928;
          }
        }
        else {
          if (bVar2 != 0x11) {
            if (bVar2 == 0x12) goto code_r0x00010078b908;
            func_0x000101429444(&stack0x00000100,&stack0x00000038);
            goto code_r0x00010078b918;
          }
          unaff_x22 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
          uVar51 = *(undefined8 *)(unaff_x22 + 2);
          uVar25 = *(undefined8 *)unaff_x22;
          uStack00000000000000a8 = (undefined1)uVar51;
          uStack00000000000000a9 = (undefined6)((ulong)uVar51 >> 8);
          bStack00000000000000af = (byte)((ulong)uVar51 >> 0x38);
          bStack00000000000000a0 = (byte)uVar25;
          bStack00000000000000a1 = (byte)((ulong)uVar25 >> 8);
          uStack00000000000000a2 = (undefined5)((ulong)uVar25 >> 0x10);
          bStack00000000000000a7 = (byte)((ulong)uVar25 >> 0x38);
code_r0x00010078bdb4:
          uVar25 = *(undefined8 *)(unaff_x22 + 4);
          uStack00000000000000b8 = (undefined7)*(undefined8 *)(unaff_x22 + 6);
          uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 6) >> 0x38);
          uStack00000000000000b0 = (undefined1)uVar25;
          uStack00000000000000b1 = (undefined6)((ulong)uVar25 >> 8);
          uStack00000000000000b7 = (undefined1)((ulong)uVar25 >> 0x38);
code_r0x00010078bdbc:
          func_0x000101429444(&stack0x00000100,&stack0x000000a0);
          _free(unaff_x22);
          puVar31 = (uint *)((ulong)_bStack0000000000000100 & 0xff);
code_r0x00010078bdd4:
          if ((int)puVar31 != 1) goto code_r0x00010078b924;
        }
        *(uint **)(unaff_x29 + -0x88) = unaff_x27;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
code_r0x00010078bde8:
        pcVar22 = (char *)in_stack_00000108;
        puVar36 = in_stack_00000030;
      }
      else {
        *(uint **)(unaff_x29 + -0x88) = unaff_x27;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
        bStack0000000000000038 = 0x8c;
        uStack0000000000000039 = 0x108cad8;
        bStack0000000000000040 = 6;
        uStack0000000000000041 = 0;
        bStack00000000000000a0 = (byte)&stack0x00000038;
        bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
        uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
        bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
        uStack00000000000000a8 = 0xa0;
        uStack00000000000000a9 = 0x100c7b3;
        bStack00000000000000af = 0;
        pcVar22 = (char *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
        puVar36 = in_stack_00000030;
      }
      goto code_r0x00010078bdf0;
    }
    if (unaff_x23 != (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x27;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      bStack0000000000000038 = 0x66;
      uStack0000000000000039 = 0x108ca13;
      bStack0000000000000040 = 9;
      uStack0000000000000041 = 0;
      bStack00000000000000a0 = (byte)&stack0x00000038;
      bStack00000000000000a1 = (byte)((ulong)&stack0x00000038 >> 8);
      uStack00000000000000a2 = (undefined5)((ulong)&stack0x00000038 >> 0x10);
      bStack00000000000000a7 = (byte)((ulong)&stack0x00000038 >> 0x38);
      uStack00000000000000a8 = 0xa0;
      uStack00000000000000a9 = 0x100c7b3;
      bStack00000000000000af = 0;
      uVar25 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      *(undefined8 *)(in_stack_00000030 + 2) = uVar25;
      *(char *)in_stack_00000030 = '\x05';
      if (unaff_x23 == (uint *)0x0) goto LAB_10078c88c;
      goto code_r0x00010078be08;
    }
    bVar2 = *(byte *)(unaff_x29 + -0xb0);
    *(undefined1 *)(unaff_x29 + -0xb0) = 0x16;
    if (bVar2 == 0x16) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x27;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x00010078da5c;
    }
    uVar25 = *(undefined8 *)puVar46;
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(puVar46 + 2);
    *(undefined8 *)unaff_x20 = uVar25;
    uVar25 = *(undefined8 *)((long)puVar46 + 0xf);
    *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)puVar46 + 0x17);
    *(undefined8 *)((long)unaff_x20 + 0xf) = uVar25;
    bStack00000000000000a0 = bVar2;
    FUN_1004b62d4(&stack0x00000038,&stack0x000000a0);
    unaff_x23 = (uint *)CONCAT71(uStack0000000000000039,bStack0000000000000038);
    unaff_x24 = (uint *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    if (unaff_x23 == (uint *)0x8000000000000000) {
      *(uint **)(unaff_x29 + -0x88) = unaff_x27;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
      unaff_x19 = (uint *)(unaff_x29 + -0xb0);
      goto code_r0x00010078c880;
    }
    in_stack_00000020 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x00010078b928:
    unaff_x27 = unaff_x27 + 0x10;
    puVar31 = unaff_x26 + 0x10;
code_r0x00010078b930:
    unaff_x25 = (uint *)((long)unaff_x25 + 1);
    bVar15 = puVar31 == unaff_x21;
code_r0x00010078b938:
    unaff_x26 = unaff_x27;
    iVar30 = (int)unaff_x22;
    puVar53 = in_stack_00000018;
    puVar54 = unaff_x21;
    unaff_x27 = unaff_x26;
    if (bVar15) goto code_r0x00010078c82c;
    goto code_r0x00010078b940;
  }
code_r0x00010078b984:
  bVar15 = (int)puVar36 == 1;
code_r0x00010078b988:
  if (bVar15) {
code_r0x00010078bb24:
    puVar31 = (uint *)(ulong)bStack00000000000000a1;
code_r0x00010078bb28:
    bVar15 = (int)puVar31 == 1;
code_r0x00010078bb2c:
    uVar29 = (uint)puVar36;
    if (!bVar15) {
      uVar29 = uVar29 + 1;
    }
    puVar36 = (uint *)(ulong)uVar29;
code_r0x00010078bb30:
    bVar15 = (int)puVar31 == 0;
code_r0x00010078bb34:
    uVar29 = 0;
    if (!bVar15) {
      uVar29 = (uint)puVar36;
    }
    unaff_x19 = (uint *)(ulong)uVar29;
    goto code_r0x00010078bca0;
  }
code_r0x00010078b98c:
  if ((int)puVar36 == 4) {
    bVar15 = puVar31 == (uint *)0x1;
code_r0x00010078ba88:
    puVar36 = (uint *)0x1;
    bVar8 = bVar15;
code_r0x00010078ba8c:
    uVar29 = (uint)puVar36;
    if (!bVar8) {
      uVar29 = uVar29 + 1;
    }
    puVar36 = (uint *)(ulong)uVar29;
code_r0x00010078ba90:
    bVar17 = puVar31 == (uint *)0x0;
code_r0x00010078ba94:
    uVar29 = 0;
    if (!bVar17) {
      uVar29 = (uint)puVar36;
    }
    unaff_x19 = (uint *)(ulong)uVar29;
code_r0x00010078ba98:
    goto code_r0x00010078bca0;
  }
  bVar15 = (int)puVar36 == 0xc;
code_r0x00010078b998:
  if (bVar15) {
    bVar8 = puVar38 == (uint *)0x6;
code_r0x00010078b9a0:
    if (bVar8) {
      uVar29 = 1;
      if (*(uint *)pcVar22 != 0x61746564 || (short)*(uint *)((long)pcVar22 + 4) != 0x6c69) {
        uVar29 = 2;
      }
      unaff_x19 = (uint *)(ulong)uVar29;
    }
    else {
      bVar15 = puVar38 == (uint *)0x9;
code_r0x00010078b9a8:
      if (!bVar15) goto code_r0x00010078bbd8;
code_r0x00010078b9ac:
      puVar36 = *(uint **)pcVar22;
code_r0x00010078b9b0:
      puVar38 = (uint *)0x5f6567616d69;
code_r0x00010078b9bc:
      puVar38 = (uint *)((ulong)puVar38 | 0x7275000000000000);
code_r0x00010078b9c0:
      puVar36 = (uint *)((ulong)puVar36 ^ (ulong)puVar38);
code_r0x00010078b9c4:
      puVar38 = (uint *)(ulong)(byte)*(uint *)((long)pcVar22 + 8);
      puVar39 = (uint *)0x6c;
code_r0x00010078b9cc:
      puVar36 = (uint *)((ulong)puVar36 | (ulong)puVar38 ^ (ulong)puVar39);
code_r0x00010078b9d4:
      bVar15 = puVar36 == (uint *)0x0;
code_r0x00010078b9d8:
      puVar36 = (uint *)0x2;
code_r0x00010078b9dc:
      uVar29 = (uint)puVar36;
      if (bVar15) {
        uVar29 = 0;
      }
      unaff_x19 = (uint *)(ulong)uVar29;
code_r0x00010078b9e0:
    }
joined_r0x00010078bbdc:
    if (puVar31 != (uint *)0x0) {
code_r0x00010078bc14:
      _free();
    }
    goto code_r0x00010078bca8;
  }
code_r0x00010078db1c:
  *(uint **)(unaff_x29 + -0x88) = unaff_x27;
  *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x25 + 1);
  pcVar22 = (char *)thunk_FUN_108855b04(&stack0x000000a0,&stack0x00000038,&UNK_10b20fcc0);
  puVar36 = in_stack_00000030;
code_r0x00010078bdf0:
  *(char **)(puVar36 + 2) = pcVar22;
  *(char *)puVar36 = '\x05';
code_r0x00010078bdfc:
  bVar15 = ((ulong)unaff_x23 & 0x7fffffffffffffff) == 0;
  unaff_x19 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010078be04:
  if (bVar15) goto LAB_10078c88c;
code_r0x00010078be08:
  _free(unaff_x24);
LAB_10078c88c:
  FUN_100d34830(unaff_x19 + 8);
LAB_10078d618:
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
code_r0x00010078d0a8:
code_r0x00010078d0b8:
  return;
}

