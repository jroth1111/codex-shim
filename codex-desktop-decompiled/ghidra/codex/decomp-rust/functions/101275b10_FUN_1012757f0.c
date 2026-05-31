
/* WARNING: Type propagation algorithm not settling */

void FUN_1012757f0(void)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long unaff_x20;
  byte *pbVar18;
  long unaff_x21;
  undefined8 *puVar19;
  byte *pbVar20;
  long lVar21;
  long unaff_x22;
  long lVar22;
  bool bVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  long unaff_x29;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  byte *in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000050;
  long lStack0000000000000068;
  undefined8 *in_stack_00000070;
  ulong uStack0000000000000080;
  byte *pbStack0000000000000088;
  byte in_stack_00000090;
  undefined4 uStack0000000000000091;
  undefined3 uStack0000000000000095;
  undefined8 in_stack_00000098;
  byte *in_stack_000000a0;
  long in_stack_000000a8;
  byte bStack00000000000000b0;
  byte bStack00000000000000b1;
  undefined2 uStack00000000000000b2;
  undefined4 uStack00000000000000b4;
  byte bStack00000000000000b8;
  undefined7 uStack00000000000000b9;
  undefined1 uStack00000000000000c0;
  undefined7 uStack00000000000000c1;
  long in_stack_000000c8;
  long in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  byte *in_stack_00000128;
  byte *in_stack_00000130;
  byte bStack0000000000000140;
  undefined7 uStack0000000000000141;
  undefined1 uStack0000000000000148;
  undefined7 uStack0000000000000149;
  undefined1 uStack0000000000000150;
  undefined7 uStack0000000000000151;
  long in_stack_00000158;
  byte *in_stack_00000160;
  byte *in_stack_00000168;
  undefined8 in_stack_00000170;
  byte *in_stack_00000178;
  long in_stack_00000180;
  char cStack0000000000000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  byte *in_stack_000001b8;
  byte *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  ulong in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  long in_stack_000001e8;
  undefined8 in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  byte *in_stack_00000258;
  byte *in_stack_00000260;
  undefined3 in_stack_000002a1;
  
  uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *(undefined8 *)(unaff_x29 + -0x98) = uVar8;
  *(undefined1 *)(unaff_x29 + -0xa0) = 0x16;
  FUN_100d03040(&stack0x00000218);
  FUN_100d34830(unaff_x22 + 0x20);
  if (cStack0000000000000190 != '\x16') {
    FUN_100e077ec(&stack0x00000190);
  }
  bVar3 = *(byte *)(unaff_x29 + -0xa0);
  if (bVar3 == 0x16) {
    uVar8 = *(undefined8 *)(unaff_x29 + -0x98);
    goto LAB_101275538;
  }
  uStack0000000000000091 = CONCAT13((char)*(undefined4 *)(unaff_x29 + -0x9c),in_stack_000002a1);
  uStack0000000000000095 = (undefined3)((uint)*(undefined4 *)(unaff_x29 + -0x9c) >> 8);
  in_stack_00000098 = *(undefined8 *)(unaff_x29 + -0x98);
  lVar10 = *(long *)(unaff_x29 + -0x88);
  pbVar7 = *(byte **)(unaff_x29 + -0x90);
  in_stack_00000090 = bVar3;
  in_stack_000000a0 = pbVar7;
  in_stack_000000a8 = lVar10;
  if (bVar3 != 0x14) {
    if (bVar3 != 0x15) {
      uVar8 = FUN_108855b04(&stack0x00000090,unaff_x29 + -0xa0,&UNK_10b20c520);
      goto LAB_101275538;
    }
    pbVar20 = pbVar7 + lVar10 * 0x40;
    bStack0000000000000140 = 0x16;
    in_stack_00000180 = 0;
    in_stack_00000160 = pbVar7;
    in_stack_00000168 = pbVar7;
    in_stack_00000170 = in_stack_00000098;
    in_stack_00000178 = pbVar20;
    if (lVar10 != 0) {
      bVar23 = false;
      lVar22 = 0;
      puVar17 = (undefined8 *)((ulong)&stack0x000000b0 | 1);
      puVar19 = (undefined8 *)((ulong)&stack0x00000140 | 1);
      puVar14 = (undefined8 *)(unaff_x29 - 0xa0U | 1);
      puVar13 = (undefined8 *)(unaff_x29 - 0x80U | 1);
      lStack0000000000000068 = 2;
      lVar15 = -0x8000000000000000;
      uStack0000000000000080 = 0x8000000000000001;
      pbStack0000000000000088 = (byte *)0x8000000000000001;
LAB_101274d0c:
      pbVar25 = pbVar7 + 0x40;
      bStack00000000000000b0 = *pbVar7;
      lVar16 = lVar22;
      pbVar18 = pbVar25;
      if (bStack00000000000000b0 == 0x16) goto LAB_1012751ac;
      uVar8 = *(undefined8 *)(pbVar7 + 0x10);
      *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
      *(undefined8 *)((long)puVar17 + 0xf) = uVar8;
      uVar8 = *(undefined8 *)(pbVar7 + 1);
      puVar17[1] = *(undefined8 *)(pbVar7 + 9);
      *puVar17 = uVar8;
      in_stack_00000158 = *(long *)(pbVar7 + 0x38);
      uStack0000000000000148 = (undefined1)*(undefined8 *)(pbVar7 + 0x28);
      uStack0000000000000149 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x28) >> 8);
      bStack0000000000000140 = (byte)*(undefined8 *)(pbVar7 + 0x20);
      uStack0000000000000141 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x20) >> 8);
      uStack0000000000000150 = (undefined1)*(undefined8 *)(pbVar7 + 0x30);
      uStack0000000000000151 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x30) >> 8);
      uVar1 = CONCAT71(uStack00000000000000b9,bStack00000000000000b8);
      uVar8 = CONCAT71(uStack00000000000000c1,uStack00000000000000c0);
      lVar16 = lVar15;
      if (0xc < bStack00000000000000b0) {
        if (bStack00000000000000b0 == 0xd) {
          FUN_100b1df10(unaff_x29 + -0x80,uVar1,uVar8);
          goto LAB_101274e08;
        }
        if (bStack00000000000000b0 == 0xe) {
          FUN_100b1dc94(unaff_x29 + -0x80,uVar8,in_stack_000000c8);
          if (uVar1 == 0) goto LAB_101274e10;
LAB_101274dc8:
          _free(uVar8);
          bVar12 = *(byte *)(unaff_x29 + -0x80);
          bVar5 = bStack0000000000000140;
          goto joined_r0x000101274dd4;
        }
        if (bStack00000000000000b0 == 0xf) {
          FUN_100b1dc94(unaff_x29 + -0x80,uVar1,uVar8);
          goto LAB_101274e08;
        }
LAB_101275138:
        uVar8 = FUN_108855b04(&stack0x000000b0,unaff_x29 + -0xa0,&UNK_10b20fb40);
        *(undefined8 *)(unaff_x29 + -0x78) = uVar8;
        *(undefined1 *)(unaff_x29 + -0x80) = 1;
LAB_10127518c:
        in_stack_00000180 = lVar22 + 1;
        in_stack_00000000 = *(undefined8 *)(unaff_x29 + -0x78);
        lVar15 = lVar16;
        in_stack_00000168 = pbVar25;
        goto LAB_101275228;
      }
      if (bStack00000000000000b0 == 1) {
        bVar12 = bStack00000000000000b1;
        if (4 < bStack00000000000000b1) {
          bVar12 = 5;
        }
        *(byte *)(unaff_x29 + -0x7f) = bVar12;
        *(undefined1 *)(unaff_x29 + -0x80) = 0;
LAB_101274e08:
        FUN_100e077ec(&stack0x000000b0);
      }
      else {
        if (bStack00000000000000b0 == 4) {
          if (4 < uVar1) {
            uVar1 = 5;
          }
          *(char *)(unaff_x29 + -0x7f) = (char)uVar1;
          *(undefined1 *)(unaff_x29 + -0x80) = 0;
          goto LAB_101274e08;
        }
        if (bStack00000000000000b0 != 0xc) goto LAB_101275138;
        FUN_100b1df10(unaff_x29 + -0x80,uVar8);
        if (uVar1 != 0) goto LAB_101274dc8;
      }
LAB_101274e10:
      bVar12 = *(byte *)(unaff_x29 + -0x80);
      bVar5 = bStack0000000000000140;
joined_r0x000101274dd4:
      bStack0000000000000140 = bVar5;
      if ((bVar12 & 1) != 0) goto LAB_10127518c;
      bVar12 = *(byte *)(unaff_x29 + -0x7f);
      if (bVar12 < 3) {
        if (bVar12 == 0) {
          if (lVar15 != -0x8000000000000000) {
            in_stack_00000180 = lVar22 + 1;
            *(undefined **)(unaff_x29 + -0x80) = &UNK_108ca281e;
            *(undefined8 *)(unaff_x29 + -0x78) = 7;
            lVar10 = unaff_x29 + -0x80;
            bStack00000000000000b0 = (byte)lVar10;
            bStack00000000000000b1 = (byte)((ulong)lVar10 >> 8);
            uStack00000000000000b2 = (undefined2)((ulong)lVar10 >> 0x10);
            uStack00000000000000b4 = (undefined4)((ulong)lVar10 >> 0x20);
            bStack00000000000000b8 = 0xa0;
            uStack00000000000000b9 = 0x100c7b3;
            in_stack_00000168 = pbVar25;
            in_stack_00000000 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
            goto LAB_101275228;
          }
          bStack0000000000000140 = 0x16;
          if (bVar5 == 0x16) {
            in_stack_00000180 = lVar22 + 1;
            in_stack_00000168 = pbVar25;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101275de0;
          }
          uVar8 = *puVar19;
          puVar17[1] = puVar19[1];
          *puVar17 = uVar8;
          uVar8 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar8;
          bStack00000000000000b0 = bVar5;
          FUN_1004b5b34(unaff_x29 + -0x80,&stack0x000000b0);
          lVar15 = *(long *)(unaff_x29 + -0x80);
          lVar16 = -0x8000000000000000;
          if (lVar15 != -0x8000000000000000) {
            in_stack_00000050 = *(long *)(unaff_x29 + -0x78);
            unaff_x21 = *(long *)(unaff_x29 + -0x70);
            goto LAB_1012750b4;
          }
          goto LAB_10127518c;
        }
        if (bVar12 != 1) {
          if (pbStack0000000000000088 == (byte *)0x8000000000000001) {
            bStack0000000000000140 = 0x16;
            if (bVar5 == 0x16) {
              in_stack_00000180 = lVar22 + 1;
              in_stack_00000168 = pbVar25;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101275de0;
            }
            uVar8 = *puVar19;
            puVar17[1] = puVar19[1];
            *puVar17 = uVar8;
            uVar8 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar8;
            bStack00000000000000b0 = bVar5;
            FUN_1004b60cc(unaff_x29 + -0x80,&stack0x000000b0);
            pbStack0000000000000088 = *(byte **)(unaff_x29 + -0x80);
            if (pbStack0000000000000088 != (byte *)0x8000000000000001) {
              in_stack_00000020 = *(byte **)(unaff_x29 + -0x78);
              in_stack_00000010 = *(undefined8 *)(unaff_x29 + -0x70);
              goto LAB_1012750b4;
            }
            pbStack0000000000000088 = (byte *)0x8000000000000001;
            goto LAB_10127518c;
          }
          in_stack_00000180 = lVar22 + 1;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_108cae22c;
          *(undefined8 *)(unaff_x29 + -0x78) = 0x11;
          lVar10 = unaff_x29 + -0x80;
          bStack00000000000000b0 = (byte)lVar10;
          bStack00000000000000b1 = (byte)((ulong)lVar10 >> 8);
          uStack00000000000000b2 = (undefined2)((ulong)lVar10 >> 0x10);
          uStack00000000000000b4 = (undefined4)((ulong)lVar10 >> 0x20);
          bStack00000000000000b8 = 0xa0;
          uStack00000000000000b9 = 0x100c7b3;
          in_stack_00000168 = pbVar25;
          in_stack_00000000 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
          goto LAB_101275228;
        }
        if (lStack0000000000000068 != 2) {
          in_stack_00000180 = lVar22 + 1;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_108ca2869;
          *(undefined8 *)(unaff_x29 + -0x78) = 10;
          lVar10 = unaff_x29 + -0x80;
          bStack00000000000000b0 = (byte)lVar10;
          bStack00000000000000b1 = (byte)((ulong)lVar10 >> 8);
          uStack00000000000000b2 = (undefined2)((ulong)lVar10 >> 0x10);
          uStack00000000000000b4 = (undefined4)((ulong)lVar10 >> 0x20);
          bStack00000000000000b8 = 0xa0;
          uStack00000000000000b9 = 0x100c7b3;
          in_stack_00000168 = pbVar25;
          in_stack_00000000 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
          goto LAB_101275228;
        }
        bStack0000000000000140 = 0x16;
        if (bVar5 == 0x16) goto LAB_101275900;
        uVar8 = *puVar19;
        puVar13[1] = puVar19[1];
        *puVar13 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
        *(byte *)(unaff_x29 + -0x80) = bVar5;
        if (bVar5 != 0x10) {
          if (bVar5 == 0x11) {
            puVar24 = *(undefined8 **)(unaff_x29 + -0x78);
            uVar8 = *puVar24;
            bStack00000000000000b8 = (byte)puVar24[1];
            uStack00000000000000b9 = (undefined7)((ulong)puVar24[1] >> 8);
            bStack00000000000000b0 = (byte)uVar8;
            bStack00000000000000b1 = (byte)((ulong)uVar8 >> 8);
            uStack00000000000000b2 = (undefined2)((ulong)uVar8 >> 0x10);
            uStack00000000000000b4 = (undefined4)((ulong)uVar8 >> 0x20);
            in_stack_000000c8 = puVar24[3];
            uStack00000000000000c0 = (undefined1)puVar24[2];
            uStack00000000000000c1 = (undefined7)((ulong)puVar24[2] >> 8);
            auVar27 = FUN_1006168a4(&stack0x000000b0);
            _free(puVar24);
          }
          else {
            if (bVar5 == 0x12) goto LAB_101274e80;
            auVar27 = FUN_1006168a4(unaff_x29 + -0x80);
          }
          in_stack_00000000 = auVar27._8_8_;
          lStack0000000000000068 = auVar27._0_8_ + 1;
          if (lStack0000000000000068 != 2) goto LAB_1012750b4;
          in_stack_00000180 = lVar22 + 1;
          in_stack_00000168 = pbVar25;
          goto LAB_101275228;
        }
LAB_101274e80:
        FUN_100e077ec(unaff_x29 + -0x80);
        lStack0000000000000068 = 0;
      }
      else if (bVar12 == 3) {
        if (bVar23) {
          in_stack_00000180 = lVar22 + 1;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_108ca2873;
          *(undefined8 *)(unaff_x29 + -0x78) = 3;
          lVar10 = unaff_x29 + -0x80;
          bStack00000000000000b0 = (byte)lVar10;
          bStack00000000000000b1 = (byte)((ulong)lVar10 >> 8);
          uStack00000000000000b2 = (undefined2)((ulong)lVar10 >> 0x10);
          uStack00000000000000b4 = (undefined4)((ulong)lVar10 >> 0x20);
          bStack00000000000000b8 = 0xa0;
          uStack00000000000000b9 = 0x100c7b3;
          in_stack_00000168 = pbVar25;
          in_stack_00000000 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
          bVar23 = true;
          goto LAB_101275228;
        }
        bStack0000000000000140 = 0x16;
        if (bVar5 == 0x16) {
          in_stack_00000180 = lVar22 + 1;
          in_stack_00000168 = pbVar25;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101275de0;
        }
        uVar8 = *puVar19;
        puVar14[1] = puVar19[1];
        *puVar14 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar8;
        *(byte *)(unaff_x29 + -0xa0) = bVar5;
        if (bVar5 == 0x10) {
LAB_101274fc4:
          bStack00000000000000b0 = 0;
          bStack00000000000000b1 = 0;
          uStack00000000000000b2 = 0;
          uStack00000000000000b4 = 0;
          bStack00000000000000b8 = 0;
          uStack00000000000000b9 = 0;
          FUN_100e077ec(unaff_x29 + -0xa0);
LAB_101274fd4:
          iVar4 = CONCAT22(uStack00000000000000b2,
                           CONCAT11(bStack00000000000000b1,bStack00000000000000b0));
        }
        else {
          if (bVar5 != 0x11) {
            if (bVar5 == 0x12) goto LAB_101274fc4;
            FUN_10144fde0(&stack0x000000b0,unaff_x29 + -0xa0);
            goto LAB_101274fd4;
          }
          puVar24 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar8 = *puVar24;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar24[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar8;
          uVar8 = puVar24[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar24[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
          FUN_10144fde0(&stack0x000000b0,unaff_x29 + -0x80);
          _free(puVar24);
          iVar4 = CONCAT22(uStack00000000000000b2,
                           CONCAT11(bStack00000000000000b1,bStack00000000000000b0));
        }
        if (iVar4 == 1) {
          bVar23 = false;
          in_stack_00000180 = lVar22 + 1;
          in_stack_00000000 = CONCAT71(uStack00000000000000b9,bStack00000000000000b8);
          in_stack_00000168 = pbVar25;
          goto LAB_101275228;
        }
        in_stack_00000038 = CONCAT71(uStack00000000000000b9,bStack00000000000000b8);
        in_stack_00000240 = CONCAT71(uStack00000000000000c1,uStack00000000000000c0);
        bVar23 = true;
        in_stack_00000248 = in_stack_000000c8;
        in_stack_00000250 = in_stack_000000d0;
        in_stack_00000258 = in_stack_000000d8;
        in_stack_00000260 = in_stack_000000e0;
      }
      else if (bVar12 == 4) {
        if (uStack0000000000000080 != 0x8000000000000001) {
          in_stack_00000180 = lVar22 + 1;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_108cde358;
          *(undefined8 *)(unaff_x29 + -0x78) = 4;
          lVar10 = unaff_x29 + -0x80;
          bStack00000000000000b0 = (byte)lVar10;
          bStack00000000000000b1 = (byte)((ulong)lVar10 >> 8);
          uStack00000000000000b2 = (undefined2)((ulong)lVar10 >> 0x10);
          uStack00000000000000b4 = (undefined4)((ulong)lVar10 >> 0x20);
          bStack00000000000000b8 = 0xa0;
          uStack00000000000000b9 = 0x100c7b3;
          in_stack_00000168 = pbVar25;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
          bStack00000000000000b8 = (byte)uVar8;
          uStack00000000000000b9 = (undefined7)((ulong)uVar8 >> 8);
          uStack0000000000000080 = uStack0000000000000080 & 0x7fffffffffffffff;
          goto joined_r0x000101275abc;
        }
        bStack0000000000000140 = 0x16;
        if (bVar5 == 0x16) {
          in_stack_00000180 = lVar22 + 1;
          in_stack_00000168 = pbVar25;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101275de0;
        }
        uVar8 = *puVar19;
        puVar17[1] = puVar19[1];
        *puVar17 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar8;
        bStack00000000000000b0 = bVar5;
        FUN_1004b60cc(unaff_x29 + -0x80,&stack0x000000b0);
        uStack0000000000000080 = *(ulong *)(unaff_x29 + -0x80);
        in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x78);
        if (uStack0000000000000080 == 0x8000000000000001) {
          in_stack_00000180 = lVar22 + 1;
          bStack00000000000000b0 = 2;
          bStack00000000000000b1 = 0;
          uStack00000000000000b2 = 0;
          uStack00000000000000b4 = 0;
          bStack00000000000000b8 = (byte)in_stack_00000030;
          uStack00000000000000b9 = (undefined7)((ulong)in_stack_00000030 >> 8);
          in_stack_00000168 = pbVar25;
          goto LAB_10127524c;
        }
        in_stack_00000018 = *(undefined8 *)(unaff_x29 + -0x70);
      }
      else {
        bStack0000000000000140 = 0x16;
        if (bVar5 == 0x16) {
LAB_101275900:
          bStack0000000000000140 = 0x16;
          in_stack_00000180 = lVar22 + 1;
          in_stack_00000168 = pbVar25;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101275de0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101275de4);
          (*pcVar6)();
        }
        uVar8 = *puVar19;
        puVar17[1] = puVar19[1];
        *puVar17 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar8;
        bStack00000000000000b0 = bVar5;
        FUN_100e077ec(&stack0x000000b0);
      }
LAB_1012750b4:
      lVar22 = lVar22 + 1;
      lVar16 = (lVar10 * 0x40 - 0x40U >> 6) + 1;
      pbVar18 = pbVar20;
      pbVar7 = pbVar25;
      if (pbVar25 == pbVar20) goto LAB_1012751ac;
      goto LAB_101274d0c;
    }
    bVar23 = false;
    pbStack0000000000000088 = (byte *)0x8000000000000001;
    uStack0000000000000080 = 0x8000000000000001;
    in_stack_00000038 = unaff_x20;
    goto LAB_1012751f4;
  }
  pbVar20 = pbVar7 + lVar10 * 0x20;
  *(byte **)(unaff_x29 + -0xd0) = pbVar7;
  *(byte **)(unaff_x29 + -200) = pbVar7;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000098;
  *(byte **)(unaff_x29 + -0xb8) = pbVar20;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  pbVar18 = pbVar7;
  if (lVar10 == 0) {
LAB_101274c44:
    lVar22 = FUN_1087e422c(0,&UNK_10b22d500,&UNK_10b20a590);
LAB_101274c60:
    bStack00000000000000b0 = 2;
    bStack00000000000000b1 = 0;
    uStack00000000000000b2 = 0;
    uStack00000000000000b4 = 0;
    bStack00000000000000b8 = (byte)lVar22;
    uStack00000000000000b9 = (undefined7)((ulong)lVar22 >> 8);
LAB_101274c68:
    lVar10 = ((ulong)((long)pbVar20 - (long)pbVar18) >> 5) + 1;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
    if (*(long *)(unaff_x29 + -0xc0) == 0) goto LAB_1012753ac;
    _free(*(undefined8 *)(unaff_x29 + -0xd0));
  }
  else {
    pbVar18 = pbVar7 + 0x20;
    bVar12 = *pbVar7;
    *(byte **)(unaff_x29 + -200) = pbVar18;
    if (bVar12 == 0x16) goto LAB_101274c44;
    uVar8 = *(undefined8 *)(pbVar7 + 1);
    uStack00000000000000b9 = (undefined7)*(undefined8 *)(pbVar7 + 9);
    bStack00000000000000b1 = (byte)uVar8;
    uStack00000000000000b2 = (undefined2)((ulong)uVar8 >> 8);
    uStack00000000000000b4 = (undefined4)((ulong)uVar8 >> 0x18);
    bStack00000000000000b8 = (byte)((ulong)uVar8 >> 0x38);
    in_stack_000000c8 = *(long *)(pbVar7 + 0x18);
    uStack00000000000000c0 = (undefined1)*(undefined8 *)(pbVar7 + 0x10);
    uStack00000000000000c1 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x10) >> 8);
    *(undefined8 *)(unaff_x29 + -0xb0) = 1;
    bStack00000000000000b0 = bVar12;
    FUN_1004b5b34(&stack0x00000140,&stack0x000000b0);
    lVar15 = CONCAT71(uStack0000000000000141,bStack0000000000000140);
    lVar22 = CONCAT71(uStack0000000000000149,uStack0000000000000148);
    if (lVar15 == -0x8000000000000000) goto LAB_101274c60;
    lVar16 = CONCAT71(uStack0000000000000151,uStack0000000000000150);
    *(long *)(unaff_x29 + -0xa0) = lVar15;
    *(long *)(unaff_x29 + -0x98) = lVar22;
    *(long *)(unaff_x29 + -0x90) = lVar16;
    if (lVar10 == 1) {
LAB_101274bf4:
      uVar8 = FUN_1087e422c(1,&UNK_10b22d500,&UNK_10b20a590);
LAB_101274c0c:
      bStack00000000000000b0 = 2;
      bStack00000000000000b1 = 0;
      uStack00000000000000b2 = 0;
      uStack00000000000000b4 = 0;
      bStack00000000000000b8 = (byte)uVar8;
      uStack00000000000000b9 = (undefined7)((ulong)uVar8 >> 8);
LAB_101274c14:
      if (lVar16 != 0) {
        puVar13 = (undefined8 *)(lVar22 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (lVar15 != 0) {
        _free(lVar22);
      }
      pbVar18 = *(byte **)(unaff_x29 + -200);
      pbVar20 = *(byte **)(unaff_x29 + -0xb8);
      goto LAB_101274c68;
    }
    *(byte **)(unaff_x29 + -200) = pbVar7 + 0x40;
    bVar12 = pbVar7[0x20];
    if (bVar12 == 0x16) goto LAB_101274bf4;
    uStack0000000000000149 = (undefined7)*(undefined8 *)(pbVar7 + 0x29);
    uStack0000000000000141 = (undefined7)*(undefined8 *)(pbVar7 + 0x21);
    uStack0000000000000148 = (undefined1)((ulong)*(undefined8 *)(pbVar7 + 0x21) >> 0x38);
    in_stack_00000158 = *(long *)(pbVar7 + 0x38);
    uStack0000000000000150 = (undefined1)*(undefined8 *)(pbVar7 + 0x30);
    uStack0000000000000151 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x30) >> 8);
    *(undefined8 *)(unaff_x29 + -0xb0) = 2;
    bStack0000000000000140 = bVar12;
    if (bVar12 != 0x10) {
      if (bVar12 == 0x11) {
        puVar13 = (undefined8 *)CONCAT71(uStack0000000000000149,uStack0000000000000148);
        uVar8 = *puVar13;
        bStack00000000000000b8 = (byte)puVar13[1];
        uStack00000000000000b9 = (undefined7)((ulong)puVar13[1] >> 8);
        bStack00000000000000b0 = (byte)uVar8;
        bStack00000000000000b1 = (byte)((ulong)uVar8 >> 8);
        uStack00000000000000b2 = (undefined2)((ulong)uVar8 >> 0x10);
        uStack00000000000000b4 = (undefined4)((ulong)uVar8 >> 0x20);
        in_stack_000000c8 = puVar13[3];
        uStack00000000000000c0 = (undefined1)puVar13[2];
        uStack00000000000000c1 = (undefined7)((ulong)puVar13[2] >> 8);
        auVar27 = FUN_1006168a4(&stack0x000000b0);
        _free(puVar13);
      }
      else {
        if (bVar12 == 0x12) goto LAB_1012755dc;
        auVar27 = FUN_1006168a4(&stack0x00000140);
      }
      uVar8 = auVar27._8_8_;
      lVar21 = auVar27._0_8_ + 1;
      if (lVar21 != 2) goto LAB_10127574c;
      goto LAB_101274c0c;
    }
LAB_1012755dc:
    uVar8 = FUN_100e077ec(&stack0x00000140);
    lVar21 = 0;
LAB_10127574c:
    if (lVar10 == 2) {
LAB_101275768:
      pbVar7 = (byte *)FUN_1087e422c(2,&UNK_10b22d500,&UNK_10b20a590);
LAB_101275784:
      bStack00000000000000b0 = 2;
      bStack00000000000000b1 = 0;
      uStack00000000000000b2 = 0;
      uStack00000000000000b4 = 0;
      bStack00000000000000b8 = (byte)pbVar7;
      uStack00000000000000b9 = (undefined7)((ulong)pbVar7 >> 8);
      goto LAB_101274c14;
    }
    *(byte **)(unaff_x29 + -200) = pbVar7 + 0x60;
    bVar12 = pbVar7[0x40];
    if (bVar12 == 0x16) goto LAB_101275768;
    uVar26 = *(undefined8 *)(pbVar7 + 0x41);
    uStack00000000000000b9 = (undefined7)*(undefined8 *)(pbVar7 + 0x49);
    bStack00000000000000b1 = (byte)uVar26;
    uStack00000000000000b2 = (undefined2)((ulong)uVar26 >> 8);
    uStack00000000000000b4 = (undefined4)((ulong)uVar26 >> 0x18);
    bStack00000000000000b8 = (byte)((ulong)uVar26 >> 0x38);
    in_stack_000000c8 = *(long *)(pbVar7 + 0x58);
    uStack00000000000000c0 = (undefined1)*(undefined8 *)(pbVar7 + 0x50);
    uStack00000000000000c1 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x50) >> 8);
    *(undefined8 *)(unaff_x29 + -0xb0) = 3;
    bStack00000000000000b0 = bVar12;
    FUN_1004b60cc(&stack0x00000140,&stack0x000000b0);
    pbVar20 = (byte *)CONCAT71(uStack0000000000000141,bStack0000000000000140);
    pbVar7 = (byte *)CONCAT71(uStack0000000000000149,uStack0000000000000148);
    if (pbVar20 == (byte *)0x8000000000000001) goto LAB_101275784;
    uVar26 = CONCAT71(uStack0000000000000151,uStack0000000000000150);
    FUN_100f25798(&stack0x000000b0,unaff_x29 + -0xd0);
    lVar10 = CONCAT71(uStack00000000000000b9,bStack00000000000000b8);
    if (CONCAT44(uStack00000000000000b4,
                 CONCAT22(uStack00000000000000b2,
                          CONCAT11(bStack00000000000000b1,bStack00000000000000b0))) == 2) {
LAB_10127585c:
      bStack00000000000000b0 = 2;
      bStack00000000000000b1 = 0;
      uStack00000000000000b2 = 0;
      uStack00000000000000b4 = 0;
      bStack00000000000000b8 = (byte)lVar10;
      uStack00000000000000b9 = (undefined7)((ulong)lVar10 >> 8);
LAB_1012758e8:
      if (((ulong)pbVar20 & 0x7fffffffffffffff) != 0) {
        _free(pbVar7);
      }
      goto LAB_101274c14;
    }
    if ((bStack00000000000000b0 & 1) == 0) {
      lVar10 = FUN_1087e422c(3,&UNK_10b22d500,&UNK_10b20a590);
      goto LAB_10127585c;
    }
    uStack0000000000000150 = (undefined1)in_stack_000000c8;
    uStack0000000000000151 = (undefined7)((ulong)in_stack_000000c8 >> 8);
    uStack0000000000000148 = uStack00000000000000c0;
    uStack0000000000000149 = uStack00000000000000c1;
    in_stack_00000160 = in_stack_000000d8;
    in_stack_00000158 = in_stack_000000d0;
    in_stack_00000168 = in_stack_000000e0;
    bStack0000000000000140 = bStack00000000000000b8;
    uStack0000000000000141 = uStack00000000000000b9;
    pcVar11 = *(char **)(unaff_x29 + -200);
    if (pcVar11 == *(char **)(unaff_x29 + -0xb8)) {
LAB_1012758bc:
      uVar9 = FUN_1087e422c(4,&UNK_10b22d500,&UNK_10b20a590);
LAB_1012758d4:
      bStack00000000000000b0 = 2;
      bStack00000000000000b1 = 0;
      uStack00000000000000b2 = 0;
      uStack00000000000000b4 = 0;
      bStack00000000000000b8 = (byte)uVar9;
      uStack00000000000000b9 = (undefined7)((ulong)uVar9 >> 8);
      if (lVar10 != 0) {
        FUN_100cb56bc(&stack0x00000140);
      }
      goto LAB_1012758e8;
    }
    cVar2 = *pcVar11;
    *(char **)(unaff_x29 + -200) = pcVar11 + 0x20;
    if (cVar2 == '\x16') goto LAB_1012758bc;
    uVar9 = *(undefined8 *)(pcVar11 + 1);
    uStack00000000000000b9 = (undefined7)*(undefined8 *)(pcVar11 + 9);
    bStack00000000000000b1 = (byte)uVar9;
    uStack00000000000000b2 = (undefined2)((ulong)uVar9 >> 8);
    uStack00000000000000b4 = (undefined4)((ulong)uVar9 >> 0x18);
    bStack00000000000000b8 = (byte)((ulong)uVar9 >> 0x38);
    in_stack_000000c8 = *(long *)(pcVar11 + 0x18);
    uStack00000000000000c0 = (undefined1)*(undefined8 *)(pcVar11 + 0x10);
    uStack00000000000000c1 = (undefined7)((ulong)*(undefined8 *)(pcVar11 + 0x10) >> 8);
    *(long *)(unaff_x29 + -0xb0) = *(long *)(unaff_x29 + -0xb0) + 1;
    bStack00000000000000b0 = cVar2;
    FUN_1004b60cc(unaff_x29 + -0x80,&stack0x000000b0);
    uVar1 = *(ulong *)(unaff_x29 + -0x80);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x78);
    if (uVar1 == 0x8000000000000001) goto LAB_1012758d4;
    in_stack_00000100 = *(undefined8 *)(unaff_x29 + -0x70);
    in_stack_000000d0 = *(long *)(unaff_x29 + -0x90);
    in_stack_000000c8 = *(long *)(unaff_x29 + -0x98);
    in_stack_000001a0 = *(undefined8 *)(unaff_x29 + -0xa0);
    uStack00000000000000c0 = (undefined1)in_stack_000001a0;
    uStack00000000000000c1 = (undefined7)((ulong)in_stack_000001a0 >> 8);
    in_stack_00000110 = CONCAT71(uStack0000000000000149,uStack0000000000000148);
    in_stack_00000108 = CONCAT71(uStack0000000000000141,bStack0000000000000140);
    in_stack_00000118 = CONCAT71(uStack0000000000000151,uStack0000000000000150);
    in_stack_00000120 = in_stack_00000158;
    in_stack_00000130 = in_stack_00000168;
    in_stack_00000128 = in_stack_00000160;
    bStack00000000000000b0 = (byte)lVar21;
    bStack00000000000000b1 = (byte)((ulong)lVar21 >> 8);
    uStack00000000000000b2 = (undefined2)((ulong)lVar21 >> 0x10);
    uStack00000000000000b4 = (undefined4)((ulong)lVar21 >> 0x20);
    bStack00000000000000b8 = (byte)uVar8;
    uStack00000000000000b9 = (undefined7)((ulong)uVar8 >> 8);
    in_stack_000000d8 = pbVar20;
    in_stack_000000e0 = pbVar7;
    in_stack_000000e8 = uVar26;
    in_stack_000000f0 = uVar1;
    in_stack_000000f8 = uVar9;
    _cStack0000000000000190 = lVar21;
    in_stack_00000198 = uVar8;
    in_stack_000001a8 = in_stack_000000c8;
    in_stack_000001b0 = in_stack_000000d0;
    in_stack_000001b8 = pbVar20;
    in_stack_000001c0 = pbVar7;
    in_stack_000001c8 = uVar26;
    in_stack_000001d0 = uVar1;
    in_stack_000001d8 = uVar9;
    in_stack_000001e0 = in_stack_00000100;
    in_stack_000001e8 = in_stack_00000108;
    lVar10 = FUN_100fbc738(unaff_x29 + -0xd0);
    if (lVar10 != 0) {
      bStack00000000000000b0 = 2;
      bStack00000000000000b1 = 0;
      uStack00000000000000b2 = 0;
      uStack00000000000000b4 = 0;
      bStack00000000000000b8 = (byte)lVar10;
      uStack00000000000000b9 = (undefined7)((ulong)lVar10 >> 8);
      FUN_100e1cf5c(&stack0x00000190);
    }
  }
LAB_1012753c0:
  if (CONCAT44(uStack00000000000000b4,
               CONCAT22(uStack00000000000000b2,
                        CONCAT11(bStack00000000000000b1,bStack00000000000000b0))) != 2) {
    in_stack_00000070[0xd] = in_stack_00000118;
    in_stack_00000070[0xc] = in_stack_00000110;
    in_stack_00000070[0xf] = in_stack_00000128;
    in_stack_00000070[0xe] = in_stack_00000120;
    in_stack_00000070[0x10] = in_stack_00000130;
    in_stack_00000070[5] = in_stack_000000d8;
    in_stack_00000070[4] = in_stack_000000d0;
    in_stack_00000070[7] = in_stack_000000e8;
    in_stack_00000070[6] = in_stack_000000e0;
    in_stack_00000070[9] = in_stack_000000f8;
    in_stack_00000070[8] = in_stack_000000f0;
    in_stack_00000070[0xb] = in_stack_00000108;
    in_stack_00000070[10] = in_stack_00000100;
    in_stack_00000070[1] = CONCAT71(uStack00000000000000b9,bStack00000000000000b8);
    *in_stack_00000070 =
         CONCAT44(uStack00000000000000b4,
                  CONCAT22(uStack00000000000000b2,
                           CONCAT11(bStack00000000000000b1,bStack00000000000000b0)));
    in_stack_00000070[3] = in_stack_000000c8;
    in_stack_00000070[2] = CONCAT71(uStack00000000000000c1,uStack00000000000000c0);
    return;
  }
  uVar8 = CONCAT71(uStack00000000000000b9,bStack00000000000000b8);
LAB_101275538:
  *in_stack_00000070 = 2;
  in_stack_00000070[1] = uVar8;
  return;
LAB_1012751ac:
  in_stack_00000168 = pbVar18;
  in_stack_00000180 = lVar16;
  if (lVar15 == -0x8000000000000000) {
LAB_1012751f4:
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108ca281e;
    *(undefined8 *)(unaff_x29 + -0x78) = 7;
    lVar10 = unaff_x29 + -0x80;
    bStack00000000000000b0 = (byte)lVar10;
    bStack00000000000000b1 = (byte)((ulong)lVar10 >> 8);
    uStack00000000000000b2 = (undefined2)((ulong)lVar10 >> 0x10);
    uStack00000000000000b4 = (undefined4)((ulong)lVar10 >> 0x20);
    bStack00000000000000b8 = 0xa0;
    uStack00000000000000b9 = 0x100c7b3;
    in_stack_00000000 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
    lVar15 = -0x8000000000000000;
LAB_101275228:
    bStack00000000000000b0 = 2;
    bStack00000000000000b1 = 0;
    uStack00000000000000b2 = 0;
    uStack00000000000000b4 = 0;
    bStack00000000000000b8 = (byte)in_stack_00000000;
    uStack00000000000000b9 = (undefined7)((ulong)in_stack_00000000 >> 8);
    if (-0x7fffffffffffffff < (long)uStack0000000000000080) {
joined_r0x000101275abc:
      uStack00000000000000b4 = 0;
      uStack00000000000000b2 = 0;
      bStack00000000000000b1 = 0;
      bStack00000000000000b0 = 2;
      if (uStack0000000000000080 != 0) {
        uStack00000000000000b4 = 0;
        uStack00000000000000b2 = 0;
        bStack00000000000000b1 = 0;
        bStack00000000000000b0 = 2;
        _free(in_stack_00000030);
      }
    }
LAB_10127524c:
    if ((bVar23) && (in_stack_00000038 != 0)) {
      FUN_100cb56bc(&stack0x00000238);
    }
    if ((-0x7fffffffffffffff < (long)pbStack0000000000000088) &&
       (pbStack0000000000000088 != (byte *)0x0)) {
      _free(in_stack_00000020);
    }
    if (lVar15 != -0x8000000000000000) {
      if (unaff_x21 != 0) {
        puVar13 = (undefined8 *)(in_stack_00000050 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          unaff_x21 = unaff_x21 + -1;
        } while (unaff_x21 != 0);
      }
      if (lVar15 != 0) {
        _free(in_stack_00000050);
      }
    }
    FUN_100d34830(&stack0x00000160);
    if (bStack0000000000000140 != 0x16) {
      FUN_100e077ec(&stack0x00000140);
    }
  }
  else {
    _cStack0000000000000190 = 0;
    if (lStack0000000000000068 != 2) {
      _cStack0000000000000190 = lStack0000000000000068;
    }
    in_stack_000000d8 = (byte *)0x8000000000000000;
    if (pbStack0000000000000088 != (byte *)0x8000000000000001) {
      in_stack_000000d8 = pbStack0000000000000088;
    }
    in_stack_00000108 = 0;
    if (bVar23) {
      *(long *)(unaff_x29 + -200) = in_stack_00000248;
      *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000240;
      *(byte **)(unaff_x29 + -0xb8) = in_stack_00000258;
      *(long *)(unaff_x29 + -0xc0) = in_stack_00000250;
      *(byte **)(unaff_x29 + -0xb0) = in_stack_00000260;
      in_stack_00000108 = in_stack_00000038;
    }
    in_stack_000000f0 = 0x8000000000000000;
    if (uStack0000000000000080 != 0x8000000000000001) {
      in_stack_000000f0 = uStack0000000000000080;
    }
    bStack00000000000000b0 = (byte)_cStack0000000000000190;
    bStack00000000000000b1 = (byte)((ulong)_cStack0000000000000190 >> 8);
    uStack00000000000000b2 = (undefined2)((ulong)_cStack0000000000000190 >> 0x10);
    uStack00000000000000b4 = (undefined4)((ulong)_cStack0000000000000190 >> 0x20);
    bStack00000000000000b8 = (byte)in_stack_00000000;
    uStack00000000000000b9 = (undefined7)((ulong)in_stack_00000000 >> 8);
    uStack00000000000000c0 = (undefined1)lVar15;
    uStack00000000000000c1 = (undefined7)((ulong)lVar15 >> 8);
    in_stack_000000c8 = in_stack_00000050;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_000000e8 = in_stack_00000010;
    in_stack_000000f8 = in_stack_00000030;
    in_stack_00000100 = in_stack_00000018;
    in_stack_00000118 = *(undefined8 *)(unaff_x29 + -200);
    in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0xd0);
    in_stack_00000128 = *(byte **)(unaff_x29 + -0xb8);
    in_stack_00000120 = *(long *)(unaff_x29 + -0xc0);
    in_stack_00000130 = *(byte **)(unaff_x29 + -0xb0);
    in_stack_00000198 = in_stack_00000000;
    in_stack_000001d8 = in_stack_00000030;
    in_stack_000001e0 = in_stack_00000018;
    in_stack_000001c8 = in_stack_00000010;
    in_stack_000001c0 = in_stack_00000020;
    in_stack_000001a8 = in_stack_00000050;
    in_stack_000000d0 = unaff_x21;
    in_stack_000001a0 = lVar15;
    in_stack_000001b0 = unaff_x21;
    in_stack_000001b8 = in_stack_000000d8;
    in_stack_000001d0 = in_stack_000000f0;
    in_stack_000001e8 = in_stack_00000108;
    FUN_100d34830(&stack0x00000160);
    if (pbVar20 != pbVar18) {
      uVar8 = FUN_1087e422c(((ulong)((long)pbVar20 - (long)pbVar18) >> 6) + lVar16,&stack0x00000230,
                            &UNK_10b23a190);
      bStack00000000000000b0 = 2;
      bStack00000000000000b1 = 0;
      uStack00000000000000b2 = 0;
      uStack00000000000000b4 = 0;
      bStack00000000000000b8 = (byte)uVar8;
      uStack00000000000000b9 = (undefined7)((ulong)uVar8 >> 8);
      FUN_100e1cf5c(&stack0x00000190);
    }
  }
LAB_1012753ac:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000090);
  }
  goto LAB_1012753c0;
}

