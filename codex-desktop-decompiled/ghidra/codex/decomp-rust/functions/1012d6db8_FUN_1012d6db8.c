
/* WARNING: Removing unreachable block (ram,0x0001012d67b8) */
/* WARNING: Removing unreachable block (ram,0x0001012d68fc) */
/* WARNING: Removing unreachable block (ram,0x0001012d6f58) */
/* WARNING: Removing unreachable block (ram,0x0001012d6ec8) */
/* WARNING: Removing unreachable block (ram,0x0001012d6814) */
/* WARNING: Removing unreachable block (ram,0x0001012d6b10) */
/* WARNING: Removing unreachable block (ram,0x0001012d68a4) */
/* WARNING: Removing unreachable block (ram,0x0001012d6858) */
/* WARNING: Removing unreachable block (ram,0x0001012d6f14) */
/* WARNING: Removing unreachable block (ram,0x0001012d7228) */
/* WARNING: Removing unreachable block (ram,0x0001012d6ffc) */
/* WARNING: Removing unreachable block (ram,0x0001012d6fa4) */
/* WARNING: Removing unreachable block (ram,0x0001012d74c0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1012d6db8(undefined8 param_1,long param_2,undefined *param_3)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  byte bVar11;
  long *plVar12;
  undefined *puVar13;
  long *unaff_x19;
  long lVar14;
  uint unaff_w20;
  long *plVar15;
  long *plVar16;
  long *unaff_x21;
  long *plVar17;
  long *unaff_x22;
  long *plVar18;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  bool bVar19;
  byte *unaff_x26;
  byte *pbVar20;
  byte *unaff_x27;
  long *plVar21;
  long unaff_x29;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  undefined4 *in_stack_00000080;
  undefined4 *in_stack_00000088;
  long *in_stack_00000090;
  long *in_stack_000000b8;
  long in_stack_000000c0;
  long *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long *in_stack_00000150;
  long *in_stack_00000160;
  long *in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  byte in_stack_000002d1;
  ushort in_stack_000002d2;
  float in_stack_000002d4;
  long *in_stack_00000300;
  long *in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  long *in_stack_00000340;
  long *in_stack_00000348;
  long *in_stack_00000350;
  byte *in_stack_00000358;
  long *in_stack_00000360;
  long *in_stack_00000368;
  long *in_stack_00000370;
  long *in_stack_00000378;
  long *in_stack_00000380;
  long *in_stack_00000398;
  long *in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  
code_r0x0001012d6db8:
  plVar5 = (long *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x26 != (byte *)0x0) {
    _free(in_stack_00000050);
  }
  bVar4 = false;
  plVar21 = (long *)0x0;
joined_r0x0001012d6e08:
  if ((undefined *)0x1 < (undefined *)((long)unaff_x19 + 0x7ffffffffffffffb)) {
    FUN_100de6690(&stack0x00000388);
  }
LAB_1012d6c24:
  plVar10 = (long *)0x2;
  if (((ulong)plVar21 & 0x7fffffffffffffff) == 0) {
    uVar3 = 0;
    if (unaff_x25 != (long *)0x8000000000000001) {
      uVar3 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000048);
    uVar3 = 0;
    if (unaff_x25 != (long *)0x8000000000000001) {
      uVar3 = unaff_w20;
    }
  }
  if ((uVar3 == 1) && (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
    bVar19 = false;
    if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
      bVar19 = bVar4;
    }
  }
  else {
    bVar19 = false;
    if (((ulong)unaff_x26 & 0x7fffffffffffffff) != 0) {
      bVar19 = bVar4;
    }
  }
  unaff_x26 = in_stack_00000358;
  plVar21 = in_stack_00000370;
  if (bVar19) {
    _free(in_stack_00000050);
  }
LAB_1012d6c88:
  plVar16 = unaff_x21;
  unaff_x25 = plVar10;
  in_stack_00000358 = unaff_x26;
  in_stack_00000370 = plVar21;
  if (plVar10 == (long *)0x2) {
    FUN_100ccc464(&stack0x000002f0);
    plVar5 = (long *)FUN_1088561c0(&UNK_108cadf9a,0x3f);
    FUN_100e077ec(&stack0x000002d0);
  }
  else {
    while( true ) {
      *(long **)(unaff_x24 + 0x1d8) = in_stack_00000368;
      *(long **)(unaff_x24 + 0x1d0) = in_stack_00000360;
      *(long **)(unaff_x24 + 0x1e8) = in_stack_00000378;
      *(long **)(unaff_x24 + 0x1e0) = in_stack_00000370;
      *(undefined8 *)(unaff_x24 + 0x198) = in_stack_00000328;
      *(undefined8 *)(unaff_x24 + 400) = in_stack_00000320;
      *(undefined8 *)(unaff_x24 + 0x1a8) = in_stack_00000338;
      *(undefined8 *)(unaff_x24 + 0x1a0) = in_stack_00000330;
      *(long **)(unaff_x24 + 0x1b8) = in_stack_00000348;
      *(long **)(unaff_x24 + 0x1b0) = in_stack_00000340;
      *(byte **)(unaff_x24 + 0x1c8) = in_stack_00000358;
      *(long **)(unaff_x24 + 0x1c0) = in_stack_00000350;
      unaff_x26 = &stack0x000002f0;
      *(long **)(unaff_x24 + 0x178) = in_stack_00000308;
      *(long **)(unaff_x24 + 0x170) = in_stack_00000300;
      *(undefined8 *)(unaff_x24 + 0x188) = in_stack_00000318;
      *(undefined8 *)(unaff_x24 + 0x180) = in_stack_00000310;
      FUN_100e077ec(&stack0x000002d0);
      unaff_x19 = in_stack_000000c8;
      in_stack_00000118 = *(undefined8 *)(unaff_x24 + 0x1b8);
      in_stack_00000110 = *(undefined8 *)(unaff_x24 + 0x1b0);
      *(undefined8 *)(unaff_x24 + 0x58) = *(undefined8 *)(unaff_x24 + 0x1c8);
      *(undefined8 *)(unaff_x24 + 0x50) = *(undefined8 *)(unaff_x24 + 0x1c0);
      *(undefined8 *)(unaff_x24 + 0x68) = *(undefined8 *)(unaff_x24 + 0x1d8);
      *(undefined8 *)(unaff_x24 + 0x60) = *(undefined8 *)(unaff_x24 + 0x1d0);
      *(undefined8 *)(unaff_x24 + 0x78) = *(undefined8 *)(unaff_x24 + 0x1e8);
      *(undefined8 *)(unaff_x24 + 0x70) = *(undefined8 *)(unaff_x24 + 0x1e0);
      in_stack_000000f8 = *(undefined8 *)(unaff_x24 + 0x198);
      in_stack_000000f0 = *(undefined8 *)(unaff_x24 + 400);
      in_stack_00000108 = *(undefined8 *)(unaff_x24 + 0x1a8);
      in_stack_00000100 = *(undefined8 *)(unaff_x24 + 0x1a0);
      in_stack_000000d8 = *(undefined8 *)(unaff_x24 + 0x178);
      in_stack_000000d0 = *(undefined8 *)(unaff_x24 + 0x170);
      in_stack_000000e8 = *(undefined8 *)(unaff_x24 + 0x188);
      in_stack_000000e0 = *(undefined8 *)(unaff_x24 + 0x180);
      unaff_x21 = plVar16;
      in_stack_00000150 = in_stack_00000380;
      if (plVar10 == (long *)0x3) break;
      in_stack_000001c8 = *(undefined8 *)(unaff_x24 + 0x58);
      in_stack_000001c0 = *(undefined8 *)(unaff_x24 + 0x50);
      in_stack_000001d8 = *(undefined8 *)(unaff_x24 + 0x68);
      in_stack_000001d0 = *(undefined8 *)(unaff_x24 + 0x60);
      in_stack_000001e8 = *(undefined8 *)(unaff_x24 + 0x78);
      in_stack_000001e0 = *(undefined8 *)(unaff_x24 + 0x70);
      in_stack_00000160 = plVar10;
      in_stack_00000168 = plVar5;
      in_stack_00000170 = in_stack_000000d0;
      in_stack_00000178 = in_stack_000000d8;
      in_stack_00000180 = in_stack_000000e0;
      in_stack_00000188 = in_stack_000000e8;
      in_stack_00000190 = in_stack_000000f0;
      in_stack_00000198 = in_stack_000000f8;
      in_stack_000001a0 = in_stack_00000100;
      in_stack_000001a8 = in_stack_00000108;
      in_stack_000001b0 = in_stack_00000110;
      in_stack_000001b8 = in_stack_00000118;
      if (in_stack_000000c8 == in_stack_000000b8) {
        func_0x0001088bb0ec(&stack0x000000b8);
      }
      puVar8 = (undefined8 *)(in_stack_000000c0 + (long)unaff_x19 * 0x98);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xf0);
      uVar25 = *(undefined8 *)(unaff_x24 + 0x108);
      uVar24 = *(undefined8 *)(unaff_x24 + 0x100);
      puVar8[0xd] = *(undefined8 *)(unaff_x24 + 0xf8);
      puVar8[0xc] = uVar6;
      puVar8[0xf] = uVar25;
      puVar8[0xe] = uVar24;
      uVar6 = *(undefined8 *)(unaff_x24 + 0x110);
      puVar8[0x11] = *(undefined8 *)(unaff_x24 + 0x118);
      puVar8[0x10] = uVar6;
      puVar8[0x12] = in_stack_00000380;
      uVar6 = *(undefined8 *)(unaff_x24 + 0xb0);
      uVar25 = *(undefined8 *)(unaff_x24 + 200);
      uVar24 = *(undefined8 *)(unaff_x24 + 0xc0);
      puVar8[5] = *(undefined8 *)(unaff_x24 + 0xb8);
      puVar8[4] = uVar6;
      puVar8[7] = uVar25;
      puVar8[6] = uVar24;
      uVar6 = *(undefined8 *)(unaff_x24 + 0xd0);
      uVar25 = *(undefined8 *)(unaff_x24 + 0xe8);
      uVar24 = *(undefined8 *)(unaff_x24 + 0xe0);
      puVar8[9] = *(undefined8 *)(unaff_x24 + 0xd8);
      puVar8[8] = uVar6;
      puVar8[0xb] = uVar25;
      puVar8[10] = uVar24;
      uVar6 = *(undefined8 *)(unaff_x24 + 0x90);
      uVar25 = *(undefined8 *)(unaff_x24 + 0xa8);
      uVar24 = *(undefined8 *)(unaff_x24 + 0xa0);
      puVar8[1] = *(undefined8 *)(unaff_x24 + 0x98);
      *puVar8 = uVar6;
      puVar8[3] = uVar25;
      puVar8[2] = uVar24;
      in_stack_000000c8 = (long *)((long)unaff_x19 + 1);
      unaff_x21 = in_stack_00000078;
      if ((plVar16 == in_stack_00000078) ||
         (unaff_x21 = plVar16 + 9, (long *)*plVar16 == in_stack_00000090)) {
        in_stack_00000058[1] = in_stack_000000c0;
        *in_stack_00000058 = (long)in_stack_000000b8;
        in_stack_00000058[2] = (long)in_stack_000000c8;
        if (*in_stack_00000058 != -0x8000000000000000) {
          lVar14 = *in_stack_00000058;
          *(long *)(unaff_x24 + 0x228) = in_stack_00000058[1];
          *(long *)(unaff_x24 + 0x220) = lVar14;
          if (in_stack_00000078 != unaff_x21) {
            lVar14 = FUN_1087e422c(in_stack_00000038,&UNK_10b21cb80,&UNK_10b20a590);
            *in_stack_00000058 = -0x8000000000000000;
            in_stack_00000058[1] = lVar14;
            FUN_100e4799c(&stack0x000002f0);
          }
        }
        goto LAB_1012d7d40;
      }
      auVar26 = FUN_100673418(&stack0x000002f0,&stack0x000001f8);
      lVar14 = auVar26._0_8_;
      if ((byte)unaff_x25 == 0x16) break;
      *in_stack_00000080 = *in_stack_00000088;
      *(undefined4 *)((long)in_stack_00000080 + 3) = *(undefined4 *)((long)in_stack_00000088 + 3);
      puVar13 = (undefined *)(ulong)*(byte *)((long)unaff_x25 + 0x108c9fde6);
      bVar4 = false;
      plVar12 = (long *)(&UNK_1012d6328 + (long)puVar13 * 4);
      plVar10 = unaff_x19;
      plVar15 = in_stack_00000058;
      plVar17 = in_stack_00000078;
      plVar18 = unaff_x23;
      plVar21 = in_stack_00000060;
      plVar22 = in_stack_00000300;
      plVar23 = in_stack_00000308;
      plVar16 = unaff_x21;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(unaff_x25) {
      case (long *)0x1:
        *(ulong *)(unaff_x29 + -0xa8) = (ulong)in_stack_000002d1;
code_r0x0001012d64d8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        plVar5 = (long *)0x1;
code_r0x0001012d64dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(char *)(unaff_x29 + -0xb0) = (char)plVar5;
code_r0x0001012d64e0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = unaff_x29 + -0xb0;
code_r0x0001012d64f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
code_r0x0001012d64f4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto code_r0x0001012d667c;
      case (long *)0x3:
        *(ulong *)(unaff_x29 + -0xa8) = (ulong)(uint)in_stack_000002d4;
        *(undefined1 *)(unaff_x29 + -0xb0) = 1;
        lVar14 = unaff_x29 + -0xb0;
      case (long *)0x20:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = lVar14;
code_r0x0001012d64a0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
code_r0x0001012d667c:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_1012d6688:
        FUN_100ccc464(&stack0x000002f0);
        puVar13 = &UNK_108c9fdfc;
code_r0x0001012d6698:
                    /* WARNING: This code block may not be properly labeled as switch case */
                    /* WARNING: Could not recover jumptable at 0x0001012d66a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1012d66a8 + (ulong)*(ushort *)(puVar13 + (long)unaff_x25 * 2) * 4))();
        return;
      case (long *)0x6:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long *)(unaff_x29 + -0xa8) = (long)(short)in_stack_000002d2;
        plVar5 = (long *)0x2;
code_r0x0001012d65dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(char *)(unaff_x29 + -0xb0) = (char)plVar5;
code_r0x0001012d65e0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = unaff_x29 + -0xb0;
code_r0x0001012d65e8:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d65f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
code_r0x0001012d65f4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto code_r0x0001012d667c;
      case (long *)0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x0001087f49f4(&stack0x000002f0,in_stack_000002d4);
code_r0x0001012d63a4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        plVar10 = unaff_x25;
code_r0x0001012d63a8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar4 = plVar10 == (long *)0x2;
code_r0x0001012d63ac:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (bVar4) goto LAB_1012d6688;
        break;
      case (long *)0xc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        plVar5 = in_stack_00000300;
        plVar12 = in_stack_00000308;
        goto code_r0x0001012d63e0;
      case (long *)0xd:
                    /* WARNING: This code block may not be properly labeled as switch case */
        plVar12 = in_stack_00000300;
code_r0x0001012d65ac:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long **)(unaff_x29 + -0xa8) = plVar5;
        *(long **)(unaff_x29 + -0xa0) = plVar12;
        *(undefined1 *)(unaff_x29 + -0xb0) = 5;
code_r0x0001012d65b8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(unaff_x29 + -0xb0,unaff_x29 + -0xf0,&UNK_10b21c130);
code_r0x0001012d65cc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto code_r0x0001012d667c;
      case (long *)0xe:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long **)(unaff_x29 + -0xa8) = in_stack_00000300;
        *(long **)(unaff_x29 + -0xa0) = in_stack_00000308;
        goto code_r0x0001012d6378;
      case (long *)0x10:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 8;
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = unaff_x29 + -0xb0;
        goto code_r0x0001012d635c;
      case (long *)0x13:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 9;
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = unaff_x29 + -0xb0;
        goto code_r0x0001012d6670;
      case (long *)0x15:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x19 = in_stack_00000300;
code_r0x0001012d6564:
                    /* WARNING: This code block may not be properly labeled as switch case */
        plVar5 = in_stack_00000308;
code_r0x0001012d6568:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (plVar5 == (long *)0x0) {
          plVar15 = (long *)0x0;
          in_stack_00000070 = (long *)0x8000000000000001;
          plVar21 = (long *)0x8000000000000006;
code_r0x0001012d73fc:
          *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cb4cd2;
          *(undefined8 *)(unaff_x29 + -0xe8) = 3;
          unaff_x27 = (byte *)0x0;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
          *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
          FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
          plVar5 = plVar15;
joined_r0x0001012d7294:
          bVar19 = true;
          bVar4 = true;
          if ((undefined *)((long)plVar21 + 0x7ffffffffffffffb) < (undefined *)0x2) {
joined_r0x0001012d76d0:
            if (((ulong)plVar5 & 0x7fffffffffffffff) != 0) goto LAB_1012d746c;
LAB_1012d72ac:
            bVar2 = false;
            if (in_stack_00000070 != (long *)0x8000000000000001) {
              bVar2 = bVar4;
            }
            if (bVar2) {
LAB_1012d748c:
              if (((ulong)in_stack_00000070 & 0x7fffffffffffffff) != 0) {
                _free(in_stack_00000030);
              }
            }
          }
          else {
LAB_1012d7298:
            FUN_100de6690(&stack0x00000388);
            if (((ulong)plVar5 & 0x7fffffffffffffff) == 0) goto LAB_1012d72ac;
LAB_1012d746c:
            _free(in_stack_00000040);
            bVar2 = false;
            if (in_stack_00000070 != (long *)0x8000000000000001) {
              bVar2 = bVar4;
            }
            if (bVar2) goto LAB_1012d748c;
          }
          bVar4 = false;
          if (((ulong)unaff_x27 & 0x7fffffffffffffff) != 0) {
            bVar4 = bVar19;
          }
          if (bVar4) {
            _free(in_stack_00000048);
          }
          goto LAB_1012d6688;
        }
        plVar17 = (long *)0x0;
        in_stack_00000018 = unaff_x23;
code_r0x0001012d6580:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x23 = (long *)((long)plVar5 << 6);
        unaff_x27 = (byte *)0x8000000000000000;
        plVar21 = (long *)0x8000000000000006;
        plVar15 = (long *)0x8000000000000000;
        in_stack_00000068 = (long *)0x8000000000000006;
        in_stack_00000070 = (long *)0x8000000000000001;
code_r0x0001012d65a4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        do {
          pbVar1 = (byte *)((long)unaff_x19 + (long)plVar17);
          pbVar20 = pbVar1 + 0x20;
          bVar11 = *pbVar1;
          plVar5 = plVar15;
          if (bVar11 < 0xd) {
            if (bVar11 == 1) {
              bVar11 = ((undefined *)((long)unaff_x19 + (long)plVar17))[1];
              if (3 < bVar11) {
                bVar11 = 4;
              }
              *(byte *)(unaff_x29 + -0xaf) = bVar11;
              *(undefined1 *)(unaff_x29 + -0xb0) = 0;
            }
            else {
              if (bVar11 != 4) {
                if (bVar11 != 0xc) goto code_r0x0001012d722c;
                plVar10 = *(long **)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x10);
                lVar14 = *(long *)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x18);
                goto joined_r0x0001012d6e8c;
              }
              uVar9 = *(ulong *)((undefined *)((long)unaff_x19 + (long)plVar17) + 8);
              if (3 < uVar9) {
                uVar9 = 4;
              }
              *(char *)(unaff_x29 + -0xaf) = (char)uVar9;
              *(undefined1 *)(unaff_x29 + -0xb0) = 0;
            }
          }
          else if (bVar11 == 0xd) {
            plVar10 = *(long **)((undefined *)((long)unaff_x19 + (long)plVar17) + 8);
            lVar14 = *(long *)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x10);
joined_r0x0001012d6e8c:
            if (lVar14 < 5) {
              if (lVar14 == 3) {
                if ((short)*plVar10 != 0x7275 || *(char *)((long)plVar10 + 2) != 'i')
                goto code_r0x0001012d7020;
                *(undefined1 *)(unaff_x29 + -0xaf) = 0;
                *(undefined1 *)(unaff_x29 + -0xb0) = 0;
              }
              else {
                if ((lVar14 != 4) || ((int)*plVar10 != 0x74786574)) goto code_r0x0001012d7020;
                *(undefined1 *)(unaff_x29 + -0xaf) = 2;
                *(undefined1 *)(unaff_x29 + -0xb0) = 0;
              }
            }
            else if (lVar14 == 5) {
              if ((int)*plVar10 != 0x74656d5f || *(char *)((long)plVar10 + 4) != 'a')
              goto code_r0x0001012d7020;
              *(undefined1 *)(unaff_x29 + -0xaf) = 3;
              *(undefined1 *)(unaff_x29 + -0xb0) = 0;
            }
            else if ((lVar14 == 8) && (*plVar10 == 0x65707954656d696d)) {
              *(undefined1 *)(unaff_x29 + -0xaf) = 1;
              *(undefined1 *)(unaff_x29 + -0xb0) = 0;
            }
            else {
code_r0x0001012d7020:
              *(undefined1 *)(unaff_x29 + -0xaf) = 4;
              *(undefined1 *)(unaff_x29 + -0xb0) = 0;
            }
          }
          else {
            if (bVar11 == 0xe) {
              uVar6 = *(undefined8 *)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x10);
              param_3 = *(undefined **)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x18);
            }
            else {
              if (bVar11 != 0xf) {
code_r0x0001012d722c:
                uVar6 = FUN_108855c40(pbVar1,unaff_x29 + -0xf0);
                *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
                *(undefined1 *)(unaff_x29 + -0xb0) = 1;
                goto joined_r0x0001012d7294;
              }
              uVar6 = *(undefined8 *)((undefined *)((long)unaff_x19 + (long)plVar17) + 8);
              param_3 = *(undefined **)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x10);
            }
            func_0x000100a8c220(unaff_x29 + -0xb0,uVar6);
            if ((*(byte *)(unaff_x29 + -0xb0) & 1) != 0) goto joined_r0x0001012d7294;
          }
          bVar11 = *(byte *)(unaff_x29 + -0xaf);
          if (bVar11 < 2) {
            if (bVar11 == 0) {
              if (unaff_x27 != (byte *)0x8000000000000000) {
                *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cb4cd2;
                *(undefined8 *)(unaff_x29 + -0xe8) = 3;
                *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
                *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
                FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
                goto joined_r0x0001012d7294;
              }
              FUN_1004e07f8(unaff_x29 + -0xb0,pbVar20);
              unaff_x27 = *(byte **)(unaff_x29 + -0xb0);
              if (unaff_x27 == (byte *)0x8000000000000000) {
                unaff_x27 = (byte *)0x0;
                goto joined_r0x0001012d7294;
              }
              in_stack_00000048 = *(long **)(unaff_x29 + -0xa8);
              in_stack_00000020 = *(long **)(unaff_x29 + -0xa0);
            }
            else {
              if (in_stack_00000070 != (long *)0x8000000000000001) {
                *(undefined **)(unaff_x29 + -0xf0) = &UNK_108c98350;
                *(undefined8 *)(unaff_x29 + -0xe8) = 8;
                *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
                *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
                FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
                goto joined_r0x0001012d7294;
              }
              bVar11 = *pbVar20;
              in_stack_00000070 = (long *)0x8000000000000000;
              if (bVar11 != 0x10) {
                if (bVar11 == 0x11) {
                  FUN_1004e07f8(unaff_x29 + -0xb0,
                                *(undefined8 *)
                                 ((undefined *)((long)unaff_x19 + (long)plVar17) + 0x28));
                }
                else {
                  if (bVar11 == 0x12) goto code_r0x0001012d7200;
                  FUN_1004e07f8(unaff_x29 + -0xb0,pbVar20);
                }
                in_stack_00000070 = *(long **)(unaff_x29 + -0xb0);
                in_stack_00000050 = *(long **)(unaff_x29 + -0xa8);
                if (in_stack_00000070 != (long *)0x8000000000000000) {
                  in_stack_00000028 = *(long **)(unaff_x29 + -0xa0);
                }
                if ((long)in_stack_00000070 < -0x7ffffffffffffffe) {
                  in_stack_00000070 = (long *)0x8000000000000001;
                }
                if (in_stack_00000070 == (long *)0x8000000000000001) {
                  in_stack_00000070 = (long *)0x8000000000000001;
                  goto joined_r0x0001012d7294;
                }
              }
code_r0x0001012d7200:
              in_stack_00000030 = in_stack_00000050;
            }
          }
          else if (bVar11 == 2) {
            if (plVar15 != (long *)0x8000000000000000) {
              *(undefined **)(unaff_x29 + -0xf0) = &UNK_108c72520;
              *(undefined8 *)(unaff_x29 + -0xe8) = 4;
              *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
              *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
              FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
              goto joined_r0x0001012d7294;
            }
            FUN_1004e07f8(unaff_x29 + -0xb0,pbVar20);
            plVar15 = *(long **)(unaff_x29 + -0xb0);
            plVar5 = (long *)0x0;
            if (plVar15 == (long *)0x8000000000000000) goto joined_r0x0001012d7294;
            in_stack_00000040 = *(long **)(unaff_x29 + -0xa8);
            in_stack_00000010 = *(long **)(unaff_x29 + -0xa0);
          }
          else if (bVar11 == 3) {
            if (plVar21 != (long *)0x8000000000000006) {
              *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cadf95;
              *(undefined8 *)(unaff_x29 + -0xe8) = 5;
              *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
              *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
              FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
              goto joined_r0x0001012d7294;
            }
            bVar11 = *pbVar20;
            plVar21 = in_stack_00000090;
            if (bVar11 != 0x10) {
              if (bVar11 == 0x11) {
                FUN_1004db9e8(unaff_x29 + -0xb0,
                              *(undefined8 *)((undefined *)((long)unaff_x19 + (long)plVar17) + 0x28)
                             );
              }
              else {
                if (bVar11 == 0x12) goto code_r0x0001012d6e28;
                FUN_1004db9e8(unaff_x29 + -0xb0,pbVar20);
              }
              plVar10 = *(long **)(unaff_x29 + -0xb0);
              plVar21 = (long *)0x8000000000000006;
              if (plVar10 != in_stack_00000090) {
                uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar25 = *(undefined8 *)(unaff_x29 + -0x88);
                uVar24 = *(undefined8 *)(unaff_x29 + -0x90);
                *(undefined8 *)(unaff_x24 + 0x308) = *(undefined8 *)(unaff_x29 + -0x98);
                *(undefined8 *)(unaff_x24 + 0x300) = uVar6;
                *(undefined8 *)(unaff_x24 + 0x318) = uVar25;
                *(undefined8 *)(unaff_x24 + 0x310) = uVar24;
                uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
                *(undefined8 *)(unaff_x24 + 0x328) = *(undefined8 *)(unaff_x29 + -0x78);
                *(undefined8 *)(unaff_x24 + 800) = uVar6;
                *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x70);
                plVar21 = plVar10;
              }
              in_stack_00000008 = *(undefined8 *)(unaff_x29 + -0xa8);
              if (plVar21 == (long *)0x8000000000000006) {
                bVar19 = true;
                bVar4 = true;
                goto joined_r0x0001012d76d0;
              }
            }
code_r0x0001012d6e28:
            in_stack_000003a0 = *(long **)(unaff_x24 + 0x308);
            in_stack_00000398 = *(long **)(unaff_x24 + 0x300);
            in_stack_000003b0 = *(undefined8 *)(unaff_x24 + 0x318);
            in_stack_000003a8 = *(undefined8 *)(unaff_x24 + 0x310);
            in_stack_000003c0 = *(undefined8 *)(unaff_x24 + 0x328);
            in_stack_000003b8 = *(undefined8 *)(unaff_x24 + 800);
            in_stack_000003c8 = *(undefined8 *)(unaff_x29 + -0xc0);
            in_stack_00000068 = plVar21;
          }
          plVar17 = plVar17 + 8;
        } while (unaff_x23 != plVar17);
        if (unaff_x27 == (byte *)0x8000000000000000) goto code_r0x0001012d73fc;
        bVar4 = in_stack_00000070 == (long *)0x8000000000000001;
        in_stack_00000340 = (long *)0x8000000000000000;
        if (!bVar4) {
          in_stack_00000340 = in_stack_00000070;
        }
        if (plVar15 == (long *)0x8000000000000000) {
          *(undefined **)(unaff_x29 + -0xf0) = &UNK_108c72520;
          *(undefined8 *)(unaff_x29 + -0xe8) = 4;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
          *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
          FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
          if (((ulong)in_stack_00000340 & 0x7fffffffffffffff) != 0) {
            _free(in_stack_00000030);
          }
          if (unaff_x27 != (byte *)0x0) {
            _free(in_stack_00000048);
          }
          bVar19 = false;
          plVar5 = (long *)0x0;
          if ((long)plVar21 + 0x7ffffffffffffffbU < 2) goto joined_r0x0001012d76d0;
          goto LAB_1012d7298;
        }
        plVar5 = in_stack_00000090;
        if (plVar21 != (long *)0x8000000000000006) {
          *(long **)(unaff_x24 + 0x348) = in_stack_00000398;
          *(undefined8 *)(unaff_x24 + 0x340) = in_stack_00000008;
          *(undefined8 *)(unaff_x24 + 0x358) = in_stack_000003a8;
          *(long **)(unaff_x24 + 0x350) = in_stack_000003a0;
          *(undefined8 *)(unaff_x24 + 0x368) = in_stack_000003b8;
          *(undefined8 *)(unaff_x24 + 0x360) = in_stack_000003b0;
          *(undefined8 *)(unaff_x24 + 0x378) = in_stack_000003c8;
          *(undefined8 *)(unaff_x24 + 0x370) = in_stack_000003c0;
          plVar5 = plVar21;
        }
        unaff_x25 = (long *)0x0;
        in_stack_00000308 = *(long **)(unaff_x24 + 0x348);
        in_stack_00000300 = *(long **)(unaff_x24 + 0x340);
        in_stack_00000318 = *(undefined8 *)(unaff_x24 + 0x358);
        in_stack_00000310 = *(undefined8 *)(unaff_x24 + 0x350);
        in_stack_00000328 = *(undefined8 *)(unaff_x24 + 0x368);
        in_stack_00000320 = *(undefined8 *)(unaff_x24 + 0x360);
        in_stack_00000338 = *(undefined8 *)(unaff_x24 + 0x378);
        in_stack_00000330 = *(undefined8 *)(unaff_x24 + 0x370);
        plVar10 = (long *)0x0;
        unaff_x23 = in_stack_00000018;
        in_stack_00000348 = in_stack_00000030;
        in_stack_00000350 = in_stack_00000028;
        in_stack_00000358 = unaff_x27;
        in_stack_00000360 = in_stack_00000048;
        in_stack_00000368 = in_stack_00000020;
        in_stack_00000370 = plVar15;
        in_stack_00000378 = in_stack_00000040;
        in_stack_00000380 = in_stack_00000010;
        break;
      case (long *)0x17:
      case (long *)0x19:
      case (long *)0x1d:
      case (long *)0x21:
      case (long *)0x23:
      case (long *)0x25:
      case (long *)0x29:
      case (long *)0x2b:
      case (long *)0x2f:
      case (long *)0x33:
      case (long *)0x35:
      case (long *)0x37:
      case (long *)0x3d:
      case (long *)0x3f:
      case (long *)0x6a:
      case (long *)0x73:
      case (long *)0x75:
      case (long *)0x7b:
      case (long *)0x81:
      case (long *)0x8d:
      case (long *)0x8f:
      case (long *)0x9d:
      case (long *)0xa1:
      case (long *)0xa3:
      case (long *)0xa5:
      case (long *)0xab:
      case (long *)0xb5:
      case (long *)0xb9:
      case (long *)0xbb:
        goto code_r0x0001012d633c;
      case (long *)0x18:
        goto code_r0x0001012d6380;
      default:
        goto code_r0x0001012d6338;
      case (long *)0x1c:
        goto code_r0x0001012d63f4;
      case (long *)0x1e:
      case (long *)0x46:
        goto code_r0x0001012d6698;
      case (long *)0x22:
      case (long *)0x68:
        goto code_r0x0001012d6444;
      case (long *)0x24:
        goto code_r0x0001012d646c;
      case (long *)0x26:
      case (long *)0x52:
      case (long *)0x9a:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (plVar5 == (long *)0x0) {
          plVar21 = (long *)0x0;
          unaff_x25 = (long *)0x8000000000000001;
          unaff_x19 = (long *)0x8000000000000006;
          goto code_r0x0001012d6bb8;
        }
        plVar18 = (long *)0x0;
        plVar15 = (long *)((long)plVar5 << 6);
        unaff_x25 = (long *)0x8000000000000001;
        unaff_x26 = (byte *)0x8000000000000000;
        unaff_x19 = (long *)0x6;
        in_stack_00000018 = unaff_x23;
      case (long *)0x1a:
      case (long *)0x5c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        unaff_x19 = (long *)((ulong)unaff_x19 & 0xffffffffffff | 0x8000000000000000);
        plVar21 = (long *)0x8000000000000000;
        goto code_r0x0001012d66f0;
      case (long *)0x28:
      case (long *)0xff:
        goto code_r0x0001012d6330;
      case (long *)0x2a:
      case (long *)0xc9:
        goto code_r0x0001012d641c;
      case (long *)0x2c:
      case (long *)0x2d:
      case (long *)0x41:
      case (long *)0x58:
      case (long *)0x59:
      case (long *)0x5b:
      case (long *)0x5f:
      case (long *)0x65:
      case (long *)0x69:
      case (long *)0x6b:
      case (long *)0x6d:
      case (long *)0x84:
      case (long *)0x85:
      case (long *)0x87:
      case (long *)0x8b:
      case (long *)0x91:
      case (long *)0x97:
      case (long *)0xb0:
      case (long *)0xb1:
      case (long *)0xb3:
      case (long *)0xb7:
      case (long *)0xbd:
      case (long *)0xc3:
      case (long *)0xc5:
      case (long *)0xc6:
      case (long *)0xd2:
      case (long *)0xe0:
      case (long *)0xea:
      case (long *)0xf4:
      case (long *)0x0:
                    /* WARNING: This code block may not be properly labeled as switch case */
        plVar5 = (long *)(ulong)in_stack_000002d1;
      case (long *)0x95:
      case (long *)0x99:
      case (long *)0xc1:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(char *)(unaff_x29 + -0xaf) = (char)plVar5;
code_r0x0001012d6330:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 0;
        lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d6338:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = lVar14;
code_r0x0001012d633c:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6344:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
        goto code_r0x0001012d667c;
      case (long *)0x2e:
        goto code_r0x0001012d6528;
      case (long *)0x30:
        goto code_r0x0001012d664c;
      case (long *)0x32:
      case (long *)0xdb:
        goto code_r0x0001012d63a8;
      case (long *)0x34:
      case (long *)0xcc:
        goto code_r0x0001012d64dc;
      case (long *)0x36:
      case (long *)0xd0:
        goto code_r0x0001012d6508;
      case (long *)0x38:
      case (long *)0xc0:
        goto code_r0x0001012d6678;
      case (long *)0x3a:
        goto code_r0x0001012d6710;
      case (long *)0x3c:
        goto code_r0x0001012d63d4;
      case (long *)0x3e:
        goto code_r0x0001012d64bc;
      case (long *)0x42:
      case (long *)0xf9:
        goto code_r0x0001012d6580;
      case (long *)0x44:
      case (long *)0x12:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 7;
      case (long *)0xe3:
      case (long *)0xed:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = unaff_x29 + -0xb0;
        param_3 = &UNK_10b21c000;
code_r0x0001012d660c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_,param_3 + 0x130);
        goto code_r0x0001012d667c;
      case (long *)0x48:
        goto code_r0x0001012d6670;
      case (long *)0x4a:
        goto code_r0x0001012d6620;
      case (long *)0x4c:
        goto code_r0x0001012d6648;
      case (long *)0x4e:
        goto code_r0x0001012d65a4;
      case (long *)0x50:
        goto code_r0x0001012d6558;
      case (long *)0x54:
        goto code_r0x0001012d65cc;
      case (long *)0x56:
        goto code_r0x0001012d6530;
      case (long *)0x5a:
        goto code_r0x0001012d63ec;
      case (long *)0x5e:
        goto code_r0x0001012d63ac;
      case (long *)0x60:
        goto code_r0x0001012d64c8;
      case (long *)0x62:
        goto code_r0x0001012d64f0;
      case (long *)0x64:
        goto code_r0x0001012d63c4;
      case (long *)0x66:
      case (long *)0xfb:
        goto code_r0x0001012d6510;
      case (long *)0x6c:
      case (long *)0x9:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(double *)(unaff_x29 + -0xa8) = (double)in_stack_000002d4;
        *(undefined1 *)(unaff_x29 + -0xb0) = 3;
        lVar14 = unaff_x29 + -0xb0;
        goto code_r0x0001012d641c;
      case (long *)0x6e:
      case (long *)0xae:
      case (long *)0xe6:
      case (long *)0xf0:
        goto code_r0x0001012d6630;
      case (long *)0x70:
        goto code_r0x0001012d6654;
      case (long *)0x72:
      case (long *)0xa4:
      case (long *)0xfe:
        goto code_r0x0001012d63e0;
      case (long *)0x74:
        goto code_r0x0001012d6344;
      case (long *)0x76:
        goto code_r0x0001012d65e0;
      case (long *)0x78:
        goto code_r0x0001012d6568;
      case (long *)0x7a:
      case (long *)0xa2:
        goto code_r0x0001012d6390;
      case (long *)0x7c:
      case (long *)0xa8:
      case (long *)0xba:
        goto code_r0x0001012d6540;
      case (long *)0x7e:
        goto code_r0x0001012d671c;
      case (long *)0x80:
      case (long *)0xaa:
      case (long *)0xf6:
        goto code_r0x0001012d64a0;
      case (long *)0x82:
      case (long *)0xdf:
        goto code_r0x0001012d667c;
      case (long *)0x86:
      case (long *)0x7:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long *)(unaff_x29 + -0xa8) = (long)(int)in_stack_000002d4;
      case (long *)0xcb:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 2;
        lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d64bc:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = lVar14;
code_r0x0001012d64c0:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d64c8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
        goto code_r0x0001012d667c;
      case (long *)0x88:
      case (long *)0xa6:
      case (long *)0xfa:
        goto code_r0x0001012d65b8;
      case (long *)0x8a:
        goto code_r0x0001012d6440;
      case (long *)0x8c:
      case (long *)0x5:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long *)(unaff_x29 + -0xa8) = (long)(char)in_stack_000002d1;
        goto code_r0x0001012d6540;
      case (long *)0x8e:
      case (long *)0x9c:
      case (long *)0xb6:
      case (long *)0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long **)(unaff_x29 + -0xa8) = plVar5;
        *(long **)(unaff_x29 + -0xa0) = in_stack_00000300;
        *(undefined1 *)(unaff_x29 + -0xb0) = 6;
      case (long *)0xfd:
                    /* WARNING: This code block may not be properly labeled as switch case */
        lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d646c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = lVar14;
code_r0x0001012d6474:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6478:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
code_r0x0001012d647c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto code_r0x0001012d667c;
      case (long *)0x90:
        goto code_r0x0001012d6474;
      case (long *)0x92:
      case (long *)0x11:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 8;
      case (long *)0xbe:
                    /* WARNING: This code block may not be properly labeled as switch case */
        lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d6504:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = lVar14;
code_r0x0001012d6508:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6510:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
        goto code_r0x0001012d667c;
      case (long *)0x94:
        goto code_r0x0001012d6674;
      case (long *)0x96:
      case (long *)0x4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long **)(unaff_x29 + -0xa8) = plVar5;
      case (long *)0x98:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 1;
        lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d63c4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(lVar14,unaff_x29 + -0xf0,&UNK_10b21c130);
code_r0x0001012d63d4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto code_r0x0001012d667c;
      case (long *)0x9e:
        goto code_r0x0001012d66f0;
      case (long *)0xa0:
        goto code_r0x0001012d64f4;
      case (long *)0xac:
        goto code_r0x0001012d6718;
      case (long *)0xb2:
      case (long *)0xd7:
        goto code_r0x0001012d64c0;
      case (long *)0xb4:
      case (long *)0xf8:
      case (long *)0x2:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(ulong *)(unaff_x29 + -0xa8) = (ulong)in_stack_000002d2;
      case (long *)0xd4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 1;
code_r0x0001012d6440:
                    /* WARNING: This code block may not be properly labeled as switch case */
        lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d6444:
                    /* WARNING: This code block may not be properly labeled as switch case */
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = lVar14;
code_r0x0001012d6450:
                    /* WARNING: This code block may not be properly labeled as switch case */
        func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
        goto code_r0x0001012d667c;
      case (long *)0xb8:
      case (long *)0x14:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(undefined1 *)(unaff_x29 + -0xb0) = 10;
        auVar26._8_8_ = unaff_x29 + -0xf0;
        auVar26._0_8_ = unaff_x29 + -0xb0;
        goto code_r0x0001012d6528;
      case (long *)0xbc:
        goto code_r0x0001012d6478;
      case (long *)0xc2:
      case (long *)0xd1:
        goto code_r0x0001012d635c;
      case (long *)0xc4:
        goto code_r0x0001012d64e0;
      case (long *)0xc7:
      case (long *)0xd3:
        goto code_r0x0001012d647c;
      case (long *)0xc8:
        goto code_r0x0001012d63e8;
      case (long *)0xca:
        goto code_r0x0001012d6378;
      case (long *)0xcd:
        goto code_r0x0001012d6450;
      case (long *)0xce:
      case (long *)0xde:
      case (long *)0xf5:
        goto code_r0x0001012d6548;
      case (long *)0xcf:
        goto code_r0x0001012d63a4;
      case (long *)0xd5:
      case (long *)0xfc:
        goto code_r0x0001012d65f0;
      case (long *)0xd6:
        goto code_r0x0001012d65ac;
      case (long *)0xd8:
        goto code_r0x0001012d6504;
      case (long *)0xd9:
        goto code_r0x0001012d63f0;
      case (long *)0xda:
        goto code_r0x0001012d6564;
      case (long *)0xdc:
        goto code_r0x0001012d6360;
      case (long *)0xdd:
        goto code_r0x0001012d6634;
      case (long *)0xe1:
      case (long *)0xeb:
      case (long *)0xa:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long **)(unaff_x29 + -0xa8) = plVar5;
        plVar5 = (long *)0x3;
        goto code_r0x0001012d6620;
      case (long *)0xe2:
      case (long *)0xec:
        goto code_r0x0001012d65f4;
      case (long *)0xe4:
      case (long *)0xee:
        goto code_r0x0001012d65dc;
      case (long *)0xe5:
      case (long *)0xef:
        goto code_r0x0001012d6624;
      case (long *)0xe7:
      case (long *)0xf1:
        goto code_r0x0001012d660c;
      case (long *)0xe8:
      case (long *)0xf2:
      case (long *)0x8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(long **)(unaff_x29 + -0xa8) = plVar5;
        *(undefined1 *)(unaff_x29 + -0xb0) = 2;
        goto code_r0x0001012d6648;
      case (long *)0xe9:
      case (long *)0xf3:
        goto code_r0x0001012d65e8;
      case (long *)0xf7:
        goto code_r0x0001012d64d8;
      }
    }
  }
  lVar14 = in_stack_000000c0;
  *in_stack_00000058 = -0x8000000000000000;
  in_stack_00000058[1] = (long)plVar5;
  puVar13 = (undefined *)((long)in_stack_000000c8 + 1);
  lVar7 = in_stack_000000c0;
  while (puVar13 = puVar13 + -1, puVar13 != (undefined *)0x0) {
    FUN_100e02998(lVar7);
    lVar7 = lVar7 + 0x98;
  }
  if (in_stack_000000b8 != (long *)0x0) {
    _free(lVar14);
  }
LAB_1012d7d40:
  lVar14 = ((ulong)((long)in_stack_00000078 - (long)unaff_x21) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar14 = lVar14 + -1, lVar14 != 0) {
    FUN_100de6690(unaff_x21);
    unaff_x21 = unaff_x21 + 9;
  }
  if (in_stack_00000060 != (long *)0x0) {
    _free(unaff_x23);
  }
  return;
code_r0x0001012d6378:
                    /* WARNING: This code block may not be properly labeled as switch case */
  *(undefined1 *)(unaff_x29 + -0xb0) = 6;
code_r0x0001012d6380:
                    /* WARNING: This code block may not be properly labeled as switch case */
  auVar26._8_8_ = unaff_x29 + -0xf0;
  auVar26._0_8_ = unaff_x29 + -0xb0;
code_r0x0001012d6390:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
  goto code_r0x0001012d667c;
code_r0x0001012d635c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  param_3 = &UNK_10b21c000;
code_r0x0001012d6360:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_,param_3 + 0x130);
  goto code_r0x0001012d667c;
code_r0x0001012d6540:
                    /* WARNING: This code block may not be properly labeled as switch case */
  *(undefined1 *)(unaff_x29 + -0xb0) = 2;
code_r0x0001012d6548:
                    /* WARNING: This code block may not be properly labeled as switch case */
  auVar26._8_8_ = unaff_x29 + -0xf0;
  auVar26._0_8_ = unaff_x29 + -0xb0;
code_r0x0001012d6558:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
  goto code_r0x0001012d667c;
code_r0x0001012d63e0:
                    /* WARNING: This code block may not be properly labeled as switch case */
  *(long **)(unaff_x29 + -0xa8) = plVar5;
  *(long **)(unaff_x29 + -0xa0) = plVar12;
  plVar5 = (long *)0x5;
code_r0x0001012d63e8:
                    /* WARNING: This code block may not be properly labeled as switch case */
  *(char *)(unaff_x29 + -0xb0) = (char)plVar5;
code_r0x0001012d63ec:
                    /* WARNING: This code block may not be properly labeled as switch case */
  lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d63f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
  auVar26._8_8_ = unaff_x29 + -0xf0;
  auVar26._0_8_ = lVar14;
code_r0x0001012d63f4:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_,&UNK_10b21c130);
  goto code_r0x0001012d667c;
code_r0x0001012d6648:
                    /* WARNING: This code block may not be properly labeled as switch case */
  lVar14 = unaff_x29 + -0xb0;
code_r0x0001012d664c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  auVar26._8_8_ = unaff_x29 + -0xf0;
  auVar26._0_8_ = lVar14;
  param_3 = &UNK_10b21c000;
code_r0x0001012d6654:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_,param_3 + 0x130);
  goto code_r0x0001012d667c;
code_r0x0001012d6620:
                    /* WARNING: This code block may not be properly labeled as switch case */
  *(char *)(unaff_x29 + -0xb0) = (char)plVar5;
code_r0x0001012d6624:
                    /* WARNING: This code block may not be properly labeled as switch case */
  auVar26._8_8_ = unaff_x29 + -0xf0;
  auVar26._0_8_ = unaff_x29 + -0xb0;
code_r0x0001012d6630:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6634:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
  goto code_r0x0001012d667c;
code_r0x0001012d6670:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6674:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6678:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
  goto code_r0x0001012d667c;
code_r0x0001012d6528:
                    /* WARNING: This code block may not be properly labeled as switch case */
code_r0x0001012d6530:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(auVar26._0_8_,auVar26._8_8_);
  goto code_r0x0001012d667c;
code_r0x0001012d641c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  func_0x000108a4a50c(lVar14,unaff_x29 + -0xf0,&UNK_10b21c130);
  goto code_r0x0001012d667c;
code_r0x0001012d66f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
  in_stack_00000070 = (long *)0x8000000000000006;
  do {
    pbVar1 = (byte *)((long)in_stack_00000078 + (long)plVar18);
    unaff_x27 = pbVar1 + 0x20;
    bVar11 = *pbVar1;
    unaff_x23 = in_stack_00000018;
    if (0xc < bVar11) {
      if (bVar11 == 0xd) {
        plVar5 = *(long **)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 8);
        lVar14 = *(long *)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x10);
        if (lVar14 < 5) {
          if (lVar14 != 3) goto code_r0x0001012d6788;
code_r0x0001012d6874:
          if ((short)*plVar5 != 0x7275 || *(char *)((long)plVar5 + 2) != 'i')
          goto code_r0x0001012d6920;
          *(undefined1 *)(unaff_x29 + -0xaf) = 0;
          *(undefined1 *)(unaff_x29 + -0xb0) = 0;
        }
        else if (lVar14 == 5) {
code_r0x0001012d6900:
          if ((int)*plVar5 == 0x74656d5f && *(char *)((long)plVar5 + 4) == 'a') {
            *(undefined1 *)(unaff_x29 + -0xaf) = 3;
            *(undefined1 *)(unaff_x29 + -0xb0) = 0;
          }
          else {
code_r0x0001012d6920:
            *(undefined1 *)(unaff_x29 + -0xaf) = 4;
            *(undefined1 *)(unaff_x29 + -0xb0) = 0;
          }
        }
        else {
joined_r0x0001012d68c8:
          if ((lVar14 != 8) || (*plVar5 != 0x65707954656d696d)) goto code_r0x0001012d6920;
          *(undefined1 *)(unaff_x29 + -0xaf) = 1;
          *(undefined1 *)(unaff_x29 + -0xb0) = 0;
        }
        goto code_r0x0001012d6934;
      }
      if (bVar11 != 0xe) {
        if (bVar11 != 0xf) goto code_r0x0001012d6b14;
        param_3 = *(undefined **)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x10);
        func_0x000100a8c388(unaff_x29 + -0xb0,
                            *(undefined8 *)
                             ((undefined *)((long)in_stack_00000078 + (long)plVar18) + 8));
        if ((*(byte *)(unaff_x29 + -0xb0) & 1) != 0) goto code_r0x0001012d6b38;
        goto code_r0x0001012d6934;
      }
      param_3 = *(undefined **)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x18);
      func_0x000100a8c388(unaff_x29 + -0xb0,
                          *(undefined8 *)
                           ((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x10));
      if ((*(byte *)(unaff_x29 + -0xb0) & 1) == 0) goto code_r0x0001012d6934;
code_r0x0001012d6b38:
      plVar5 = *(long **)(unaff_x29 + -0xa8);
code_r0x0001012d6b60:
      bVar4 = true;
      unaff_w20 = 1;
      goto joined_r0x0001012d6e08;
    }
    if (bVar11 == 1) {
      bVar11 = ((undefined *)((long)in_stack_00000078 + (long)plVar18))[1];
      if (3 < bVar11) {
        bVar11 = 4;
      }
      *(byte *)(unaff_x29 + -0xaf) = bVar11;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
    }
    else if (bVar11 == 4) {
      uVar9 = *(ulong *)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 8);
      if (3 < uVar9) {
        uVar9 = 4;
      }
      *(char *)(unaff_x29 + -0xaf) = (char)uVar9;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
    }
    else {
      if (bVar11 != 0xc) {
code_r0x0001012d6b14:
        param_3 = &UNK_10b214868;
        uVar6 = FUN_108855c40(pbVar1,unaff_x29 + -0xf0);
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
        *(undefined1 *)(unaff_x29 + -0xb0) = 1;
        goto code_r0x0001012d6b38;
      }
      plVar5 = *(long **)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x10);
      lVar14 = *(long *)((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x18);
      if (4 < lVar14) {
        if (lVar14 != 5) goto joined_r0x0001012d68c8;
        goto code_r0x0001012d6900;
      }
      if (lVar14 == 3) goto code_r0x0001012d6874;
code_r0x0001012d6788:
      if ((lVar14 != 4) || ((int)*plVar5 != 0x626f6c62)) goto code_r0x0001012d6920;
      *(undefined1 *)(unaff_x29 + -0xaf) = 2;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
    }
code_r0x0001012d6934:
    bVar11 = *(byte *)(unaff_x29 + -0xaf);
    if (bVar11 < 2) {
      if (bVar11 == 0) {
        if (unaff_x26 != (byte *)0x8000000000000000) {
          *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cb4cd2;
          *(undefined8 *)(unaff_x29 + -0xe8) = 3;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
          *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
          plVar5 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
          goto code_r0x0001012d6bf0;
        }
        FUN_1004e07f8(unaff_x29 + -0xb0,unaff_x27);
        unaff_x26 = *(byte **)(unaff_x29 + -0xb0);
        if (unaff_x26 == (byte *)0x8000000000000000) {
          plVar5 = *(long **)(unaff_x29 + -0xa8);
          unaff_x26 = (byte *)0x0;
          goto code_r0x0001012d6b60;
        }
        in_stack_00000050 = *(long **)(unaff_x29 + -0xa8);
        in_stack_00000028 = *(long **)(unaff_x29 + -0xa0);
      }
      else {
        if (unaff_x25 != (long *)0x8000000000000001) {
          *(undefined **)(unaff_x29 + -0xf0) = &UNK_108c98350;
          *(undefined8 *)(unaff_x29 + -0xe8) = 8;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
          *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
          plVar5 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
          goto code_r0x0001012d6bf0;
        }
        bVar11 = *unaff_x27;
        unaff_x25 = (long *)0x8000000000000000;
        if (bVar11 != 0x10) {
          if (bVar11 == 0x11) {
            FUN_1004e07f8(unaff_x29 + -0xb0,
                          *(undefined8 *)
                           ((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x28));
          }
          else {
            if (bVar11 == 0x12) goto code_r0x0001012d6ae8;
            FUN_1004e07f8(unaff_x29 + -0xb0,unaff_x27);
          }
          unaff_x25 = *(long **)(unaff_x29 + -0xb0);
          in_stack_00000068 = *(long **)(unaff_x29 + -0xa8);
          if (unaff_x25 != (long *)0x8000000000000000) {
            in_stack_00000030 = *(long **)(unaff_x29 + -0xa0);
          }
          if ((long)unaff_x25 < -0x7ffffffffffffffe) {
            unaff_x25 = (long *)0x8000000000000001;
          }
          if (unaff_x25 == (long *)0x8000000000000001) {
            unaff_x25 = (long *)0x8000000000000001;
            plVar5 = in_stack_00000068;
            goto code_r0x0001012d6b60;
          }
        }
code_r0x0001012d6ae8:
        in_stack_00000040 = in_stack_00000068;
      }
    }
    else if (bVar11 == 2) {
      if (plVar21 != (long *)0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cde454;
        *(undefined8 *)(unaff_x29 + -0xe8) = 4;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
        plVar5 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
        goto code_r0x0001012d6bf0;
      }
      FUN_1004e07f8(unaff_x29 + -0xb0,unaff_x27);
      plVar21 = *(long **)(unaff_x29 + -0xb0);
      if (plVar21 == (long *)0x8000000000000000) {
        plVar5 = *(long **)(unaff_x29 + -0xa8);
        plVar21 = (long *)0x0;
        goto code_r0x0001012d6b60;
      }
      in_stack_00000048 = *(long **)(unaff_x29 + -0xa8);
      in_stack_00000020 = *(long **)(unaff_x29 + -0xa0);
    }
    else if (bVar11 == 3) {
      if (unaff_x19 != (long *)0x8000000000000006) {
        *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cadf95;
        *(undefined8 *)(unaff_x29 + -0xe8) = 5;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
        plVar5 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
        goto code_r0x0001012d6bf0;
      }
      bVar11 = *unaff_x27;
      unaff_x19 = in_stack_00000090;
      if (bVar11 != 0x10) {
        if (bVar11 == 0x11) {
          FUN_1004db9e8(unaff_x29 + -0xb0,
                        *(undefined8 *)
                         ((undefined *)((long)in_stack_00000078 + (long)plVar18) + 0x28));
        }
        else {
          if (bVar11 == 0x12) goto code_r0x0001012d6718;
          FUN_1004db9e8(unaff_x29 + -0xb0,unaff_x27);
        }
        plVar5 = *(long **)(unaff_x29 + -0xb0);
        unaff_x19 = (long *)0x8000000000000006;
        if (plVar5 != in_stack_00000090) {
          uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar25 = *(undefined8 *)(unaff_x29 + -0x88);
          uVar24 = *(undefined8 *)(unaff_x29 + -0x90);
          *(undefined8 *)(unaff_x24 + 0x308) = *(undefined8 *)(unaff_x29 + -0x98);
          *(undefined8 *)(unaff_x24 + 0x300) = uVar6;
          *(undefined8 *)(unaff_x24 + 0x318) = uVar25;
          *(undefined8 *)(unaff_x24 + 0x310) = uVar24;
          uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
          *(undefined8 *)(unaff_x24 + 0x328) = *(undefined8 *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x24 + 800) = uVar6;
          *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x70);
          unaff_x19 = plVar5;
        }
        in_stack_00000010 = *(long **)(unaff_x29 + -0xa8);
        plVar5 = (long *)0x8000000000000006;
code_r0x0001012d6710:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (unaff_x19 == plVar5) {
          bVar4 = true;
          unaff_w20 = 1;
          unaff_x23 = in_stack_00000018;
          plVar5 = in_stack_00000010;
          goto LAB_1012d6c24;
        }
      }
code_r0x0001012d6718:
                    /* WARNING: This code block may not be properly labeled as switch case */
      plVar23 = *(long **)(unaff_x24 + 0x308);
      plVar22 = *(long **)(unaff_x24 + 0x300);
      uVar25 = *(undefined8 *)(unaff_x24 + 0x318);
      uVar24 = *(undefined8 *)(unaff_x24 + 0x310);
code_r0x0001012d671c:
                    /* WARNING: This code block may not be properly labeled as switch case */
      in_stack_000003c0 = *(undefined8 *)(unaff_x24 + 0x328);
      in_stack_000003b8 = *(undefined8 *)(unaff_x24 + 800);
      in_stack_000003c8 = *(undefined8 *)(unaff_x29 + -0xc0);
      in_stack_00000070 = unaff_x19;
      in_stack_00000398 = plVar22;
      in_stack_000003a0 = plVar23;
      in_stack_000003a8 = uVar24;
      in_stack_000003b0 = uVar25;
    }
    plVar18 = plVar18 + 8;
  } while (plVar15 != plVar18);
  unaff_x23 = in_stack_00000018;
  if (unaff_x26 == (byte *)0x8000000000000000) {
code_r0x0001012d6bb8:
    *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cb4cd2;
    *(undefined8 *)(unaff_x29 + -0xe8) = 3;
    unaff_x26 = (byte *)0x0;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
    *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
    plVar5 = (long *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
code_r0x0001012d6bf0:
    unaff_w20 = 1;
    bVar4 = true;
    goto joined_r0x0001012d6e08;
  }
  unaff_x22 = (long *)0x8000000000000000;
  if (unaff_x25 != (long *)0x8000000000000001) {
    unaff_x22 = unaff_x25;
  }
  unaff_w20 = (uint)(unaff_x25 == (long *)0x8000000000000001);
  if (plVar21 == (long *)0x8000000000000000) {
    *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cde454;
    *(undefined8 *)(unaff_x29 + -0xe8) = 4;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf0;
    *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0xb0;
    goto code_r0x0001012d6db8;
  }
  plVar5 = in_stack_00000090;
  if (unaff_x19 != (long *)0x8000000000000006) {
    *(long **)(unaff_x24 + 0x348) = in_stack_00000398;
    *(long **)(unaff_x24 + 0x340) = in_stack_00000010;
    *(undefined8 *)(unaff_x24 + 0x358) = in_stack_000003a8;
    *(long **)(unaff_x24 + 0x350) = in_stack_000003a0;
    *(undefined8 *)(unaff_x24 + 0x368) = in_stack_000003b8;
    *(undefined8 *)(unaff_x24 + 0x360) = in_stack_000003b0;
    *(undefined8 *)(unaff_x24 + 0x378) = in_stack_000003c8;
    *(undefined8 *)(unaff_x24 + 0x370) = in_stack_000003c0;
    plVar5 = unaff_x19;
  }
  plVar10 = (long *)0x1;
  in_stack_00000308 = *(long **)(unaff_x24 + 0x348);
  in_stack_00000300 = *(long **)(unaff_x24 + 0x340);
  in_stack_00000318 = *(undefined8 *)(unaff_x24 + 0x358);
  in_stack_00000310 = *(undefined8 *)(unaff_x24 + 0x350);
  in_stack_00000328 = *(undefined8 *)(unaff_x24 + 0x368);
  in_stack_00000320 = *(undefined8 *)(unaff_x24 + 0x360);
  in_stack_00000338 = *(undefined8 *)(unaff_x24 + 0x378);
  in_stack_00000330 = *(undefined8 *)(unaff_x24 + 0x370);
  in_stack_00000340 = unaff_x22;
  in_stack_00000348 = in_stack_00000040;
  in_stack_00000350 = in_stack_00000030;
  in_stack_00000360 = in_stack_00000050;
  in_stack_00000368 = in_stack_00000028;
  in_stack_00000378 = in_stack_00000048;
  in_stack_00000380 = in_stack_00000020;
  goto LAB_1012d6c88;
}

