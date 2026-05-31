
/* WARNING: Removing unreachable block (ram,0x0001014312e8) */

void FUN_101431118(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  char *pcVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 uVar18;
  byte *pbVar19;
  long lVar20;
  byte *unaff_x21;
  byte *pbVar21;
  long unaff_x23;
  long lVar22;
  uint unaff_w24;
  uint unaff_w25;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  long unaff_x29;
  undefined8 uVar27;
  undefined8 uVar28;
  byte *in_stack_00000008;
  byte *in_stack_00000010;
  undefined8 in_stack_00000018;
  byte *in_stack_00000020;
  byte *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  byte *in_stack_00000068;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  byte *in_stack_000000a0;
  byte *in_stack_000000a8;
  byte *in_stack_000000b0;
  byte *in_stack_000000b8;
  byte *in_stack_000000c0;
  byte *in_stack_000000c8;
  byte *in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  byte *in_stack_000000e8;
  byte bStack00000000000000f0;
  undefined7 uStack00000000000000f1;
  long in_stack_000000f8;
  char *in_stack_00000100;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  char *in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined7 uStack0000000000000138;
  undefined1 uStack000000000000013f;
  undefined7 uStack0000000000000140;
  undefined8 uStack0000000000000147;
  byte bStack0000000000000150;
  byte bStack0000000000000151;
  long in_stack_00000158;
  char *in_stack_00000160;
  long in_stack_00000168;
  undefined1 uStack0000000000000170;
  undefined7 uStack0000000000000171;
  undefined1 uStack0000000000000178;
  undefined7 uStack0000000000000179;
  undefined1 uStack0000000000000180;
  undefined7 uStack0000000000000181;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  byte *in_stack_00000198;
  byte *in_stack_000001a0;
  long in_stack_000001a8;
  byte *in_stack_000001b0;
  byte *in_stack_000001b8;
  byte *in_stack_000001c0;
  
code_r0x000101431118:
  pbVar12 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_10143112c:
  in_stack_000000d0 = (byte *)0x8000000000000007;
  in_stack_000000d8 = pbVar12;
LAB_101431134:
  FUN_100d34830(unaff_x29 + -0xd0);
  if (*(char *)(unaff_x29 + -0xf0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xf0);
  }
  do {
    pbVar12 = (byte *)0x8000000000000007;
LAB_101431218:
    pbVar21 = unaff_x21;
    if ((in_stack_00000018._4_4_ != 0x16) && ((in_stack_00000018._4_4_ & 0x1e) != 0x14)) {
      FUN_100e077ec(&stack0x00000190);
    }
LAB_101430df4:
    uVar2 = unaff_w24 ^ 1;
    if (unaff_w25 == 0x15) {
      uVar2 = 1;
    }
    if ((uVar2 & 1) == 0) {
      FUN_100e077ec(&stack0x000000f0);
    }
    lVar16 = in_stack_00000098;
    unaff_x21 = pbVar21;
    pbVar13 = in_stack_000000d8;
    if (pbVar12 == (byte *)0x8000000000000007) {
LAB_101431784:
      lVar24 = in_stack_00000098;
      lVar16 = in_stack_00000090;
      *(byte **)(unaff_x29 + -0xe8) = pbVar13;
      if (in_stack_00000098 == 0) goto LAB_10143181c;
      lVar20 = 0;
      goto LAB_1014317bc;
    }
    in_stack_000000a8 = in_stack_000000e8;
    in_stack_000000a0 = in_stack_000000e0;
    if (pbVar12 == (byte *)0x8000000000000008) goto LAB_101431784;
    in_stack_000000b8 = in_stack_000000d8;
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    in_stack_000000b0 = pbVar12;
    if (in_stack_00000098 == in_stack_00000088) {
      func_0x0001089a4bf8(&stack0x00000088);
    }
    puVar26 = (undefined8 *)(in_stack_00000090 + lVar16 * 0x20);
    puVar26[1] = in_stack_000000b8;
    *puVar26 = in_stack_000000b0;
    puVar26[3] = in_stack_000000c8;
    puVar26[2] = in_stack_000000c0;
    in_stack_00000098 = lVar16 + 1;
    unaff_x21 = in_stack_00000028;
    if (pbVar21 == in_stack_00000028) {
LAB_101431614:
      *(long *)(unaff_x29 + -0xe8) = in_stack_00000090;
      *(long *)(unaff_x29 + -0xf0) = in_stack_00000088;
      *(long *)(unaff_x29 + -0xe0) = in_stack_00000098;
      lVar16 = *(long *)(unaff_x29 + -0xf0);
      if (lVar16 == -0x8000000000000000) goto LAB_101431830;
      in_stack_00000048 = *(long *)(unaff_x29 + -0xe8);
      lVar24 = *(long *)(unaff_x29 + -0xe0);
      lVar20 = FUN_100fbc738(&stack0x00000060);
      if (lVar20 == 0) {
        uVar10 = *(undefined8 *)(unaff_x29 + -0xf0);
        in_stack_00000030[1] = *(undefined8 *)(unaff_x29 + -0xe8);
        *in_stack_00000030 = uVar10;
        in_stack_00000030[2] = *(undefined8 *)(unaff_x29 + -0xe0);
        return;
      }
      *(long *)(unaff_x29 + -0xe8) = lVar20;
      if (lVar24 == 0) goto LAB_1014316e8;
      lVar22 = 0;
      break;
    }
    unaff_x21 = pbVar21 + 0x20;
    bVar5 = *pbVar21;
    unaff_w25 = (uint)bVar5;
    in_stack_00000068 = unaff_x21;
    if (bVar5 == 0x16) goto LAB_101431614;
    uVar10 = *(undefined8 *)(pbVar21 + 1);
    in_stack_00000050[1] = *(undefined8 *)(pbVar21 + 9);
    *in_stack_00000050 = uVar10;
    uVar10 = *(undefined8 *)(pbVar21 + 0x10);
    *(undefined8 *)((long)in_stack_00000050 + 0x17) = *(undefined8 *)(pbVar21 + 0x18);
    *(undefined8 *)((long)in_stack_00000050 + 0xf) = uVar10;
    unaff_x23 = unaff_x23 + 1;
    in_stack_00000080 = unaff_x23;
    bStack00000000000000f0 = bVar5;
    if ((bVar5 != 0xc) && (bVar5 != 0xd)) {
      if (bVar5 != 0x15) {
        FUN_1088556a8(unaff_x29 + -0xf0,&stack0x000000f0);
        pbVar13 = (byte *)func_0x000108a4a50c(unaff_x29 + -0xf0,&UNK_10b20a5b0,&UNK_10b20a590);
        FUN_100e077ec(&stack0x000000f0);
        goto LAB_101431784;
      }
      *(char **)(unaff_x29 + -0xa8) = in_stack_00000100;
      *(char **)(unaff_x29 + -0xa0) = in_stack_00000100;
      *(long *)(unaff_x29 + -0x98) = in_stack_000000f8;
      *(char **)(unaff_x29 + -0x90) = in_stack_00000100 + in_stack_00000108 * 0x40;
      if (in_stack_00000108 == 0) {
LAB_101431708:
        *(undefined1 *)(unaff_x29 + -0xf0) = 0xb;
        pbVar13 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (unaff_x29 + -0xf0,&UNK_10b20a580,&UNK_10b20a590);
      }
      else {
        cVar6 = *in_stack_00000100;
        *(char **)(unaff_x29 + -0xa0) = in_stack_00000100 + 0x40;
        if (cVar6 == '\x16') goto LAB_101431708;
        uVar10 = *(undefined8 *)(in_stack_00000100 + 1);
        in_stack_00000058[1] = *(undefined8 *)(in_stack_00000100 + 9);
        *in_stack_00000058 = uVar10;
        uVar10 = *(undefined8 *)(in_stack_00000100 + 0x10);
        in_stack_00000158 = *(long *)(in_stack_00000100 + 0x28);
        _bStack0000000000000150 = *(undefined8 *)(in_stack_00000100 + 0x20);
        *(undefined8 *)((long)in_stack_00000058 + 0x17) = *(undefined8 *)(in_stack_00000100 + 0x18);
        *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
        in_stack_00000168 = *(long *)(in_stack_00000100 + 0x38);
        in_stack_00000160 = *(char **)(in_stack_00000100 + 0x30);
        *(char *)(unaff_x29 + -0x88) = cVar6;
        if (in_stack_00000108 == 1) {
LAB_101430368:
          in_stack_00000118 = *(long *)(unaff_x29 + -0x80);
          in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0x88);
          in_stack_00000128 = *(long *)(unaff_x29 + -0x70);
          in_stack_00000120 = *(char **)(unaff_x29 + -0x78);
          uVar18 = bStack0000000000000150;
          in_stack_00000130 = *(undefined8 *)(in_stack_00000100 + 0x21);
          uStack0000000000000138 = (undefined7)*(undefined8 *)(in_stack_00000100 + 0x29);
          uStack0000000000000147 = *(undefined8 *)(in_stack_00000100 + 0x38);
          uStack000000000000013f = (undefined1)*(undefined8 *)(in_stack_00000100 + 0x30);
          uStack0000000000000140 =
               (undefined7)((ulong)*(undefined8 *)(in_stack_00000100 + 0x30) >> 8);
          unaff_w24 = 1;
          FUN_100d34830(unaff_x29 + -0xa8);
          goto LAB_1014303a8;
        }
        *(char **)(unaff_x29 + -0xa0) = in_stack_00000100 + 0x80;
        uVar10 = *(undefined8 *)(in_stack_00000100 + 0x40);
        uVar28 = *(undefined8 *)(in_stack_00000100 + 0x58);
        uVar27 = *(undefined8 *)(in_stack_00000100 + 0x50);
        *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(in_stack_00000100 + 0x48);
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar28;
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar27;
        uVar10 = *(undefined8 *)(in_stack_00000100 + 0x60);
        uVar28 = *(undefined8 *)(in_stack_00000100 + 0x78);
        uVar27 = *(undefined8 *)(in_stack_00000100 + 0x70);
        *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(in_stack_00000100 + 0x68);
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar10;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar28;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar27;
        if (*(char *)(unaff_x29 + -0xf0) == '\x16') goto LAB_101430368;
        FUN_100e077ec(unaff_x29 + -0xf0);
        FUN_100e077ec(unaff_x29 + -0xd0);
        *(undefined1 *)(unaff_x29 + -0xf0) = 0xb;
        pbVar13 = (byte *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (unaff_x29 + -0xf0,&UNK_10b20a580,&UNK_10b20a590);
        FUN_100e077ec(&stack0x00000150);
        FUN_100e077ec(unaff_x29 + -0x88);
      }
      FUN_100d34830(unaff_x29 + -0xa8);
      goto LAB_101431784;
    }
    unaff_w24 = 0;
    in_stack_00000110 = CONCAT71(uStack00000000000000f1,bVar5);
    in_stack_00000118 = in_stack_000000f8;
    in_stack_00000128 = in_stack_00000108;
    in_stack_00000120 = in_stack_00000100;
    uVar18 = 0x16;
LAB_1014303a8:
    pcVar7 = in_stack_00000120;
    lVar16 = in_stack_00000118;
    in_stack_00000158 = in_stack_00000118;
    _bStack0000000000000150 = in_stack_00000110;
    uVar10 = _bStack0000000000000150;
    in_stack_00000168 = in_stack_00000128;
    in_stack_00000160 = in_stack_00000120;
    uStack0000000000000179 = uStack0000000000000138;
    uStack0000000000000171 = (undefined7)in_stack_00000130;
    uStack0000000000000178 = (undefined1)((ulong)in_stack_00000130 >> 0x38);
    in_stack_00000188 = uStack0000000000000147;
    uStack0000000000000180 = uStack000000000000013f;
    uStack0000000000000181 = uStack0000000000000140;
    *(ulong *)(unaff_x29 + -0xe8) = CONCAT71(uStack0000000000000138,uStack0000000000000178);
    *(ulong *)(unaff_x29 + -0xf0) = CONCAT71(uStack0000000000000171,uVar18);
    *(undefined8 *)(unaff_x29 + -0xd8) = uStack0000000000000147;
    *(ulong *)(unaff_x29 + -0xe0) = CONCAT71(uStack0000000000000140,uStack000000000000013f);
    bStack0000000000000150 = (byte)in_stack_00000110;
    pbVar21 = unaff_x21;
    _bStack0000000000000150 = uVar10;
    uStack0000000000000170 = uVar18;
    if (bStack0000000000000150 < 0xd) {
      if (bStack0000000000000150 == 1) {
        bStack0000000000000151 = (byte)((ulong)in_stack_00000110 >> 8);
        if (bStack0000000000000151 < 3) {
          if (bStack0000000000000151 == 0) {
LAB_101430d8c:
            uVar18 = 0;
            *(undefined1 *)(unaff_x29 + -0xa7) = 0;
          }
          else {
            if (bStack0000000000000151 != 1) {
              if (bStack0000000000000151 != 2) goto LAB_101431510;
LAB_101430d04:
              uVar15 = 2;
              goto LAB_101430db8;
            }
LAB_101430d94:
            uVar18 = 0;
            *(undefined1 *)(unaff_x29 + -0xa7) = 1;
          }
        }
        else {
          if (bStack0000000000000151 < 5) {
            if (bStack0000000000000151 == 3) {
LAB_101430da4:
              uVar15 = 3;
            }
            else {
              if (bStack0000000000000151 != 4) {
LAB_101431510:
                *(ulong *)(unaff_x29 + -0x80) = (ulong)bStack0000000000000151;
                *(undefined1 *)(unaff_x29 + -0x88) = 1;
                uVar10 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                   (unaff_x29 + -0x88,&UNK_10b22d540,&UNK_10b20a590);
                goto LAB_101431534;
              }
LAB_1014308d8:
              uVar15 = 4;
            }
          }
          else if (bStack0000000000000151 == 5) {
LAB_101430db0:
            uVar15 = 5;
          }
          else {
            if (bStack0000000000000151 != 6) goto LAB_101431510;
LAB_101430d80:
            uVar15 = 6;
          }
LAB_101430db8:
          uVar18 = 0;
          *(undefined1 *)(unaff_x29 + -0xa7) = uVar15;
        }
      }
      else {
        if (bStack0000000000000150 != 4) {
          if (bStack0000000000000150 != 0xc) goto LAB_1014312bc;
          FUN_100aec4f8(unaff_x29 + -0xa8,in_stack_00000120,in_stack_00000128);
          goto LAB_101430474;
        }
        if (in_stack_00000118 < 3) {
          if (in_stack_00000118 == 0) goto LAB_101430d8c;
          if (in_stack_00000118 == 1) goto LAB_101430d94;
          if (in_stack_00000118 == 2) goto LAB_101430d04;
        }
        else if (in_stack_00000118 < 5) {
          if (in_stack_00000118 == 3) goto LAB_101430da4;
          if (in_stack_00000118 == 4) goto LAB_1014308d8;
        }
        else {
          if (in_stack_00000118 == 5) goto LAB_101430db0;
          if (in_stack_00000118 == 6) goto LAB_101430d80;
        }
        *(long *)(unaff_x29 + -0x80) = in_stack_00000118;
        *(undefined1 *)(unaff_x29 + -0x88) = 1;
        uVar10 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (unaff_x29 + -0x88,&UNK_10b22d540,&UNK_10b20a590);
LAB_101431534:
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
        uVar18 = 1;
      }
      *(undefined1 *)(unaff_x29 + -0xa8) = uVar18;
LAB_101430dc0:
      FUN_100e077ec(&stack0x00000150);
LAB_101430dc8:
      if (*(char *)(unaff_x29 + -0xa8) != '\x01') goto LAB_10143048c;
LAB_101430dd4:
      pbVar12 = *(byte **)(unaff_x29 + -0xa0);
      if (*(char *)(unaff_x29 + -0xf0) != '\x16') {
        FUN_100e077ec(unaff_x29 + -0xf0);
      }
      goto LAB_101430df0;
    }
    if (bStack0000000000000150 == 0xd) {
      FUN_100aec4f8(unaff_x29 + -0xa8,in_stack_00000118,in_stack_00000120);
      goto LAB_101430dc0;
    }
    if (bStack0000000000000150 != 0xe) {
      if (bStack0000000000000150 == 0xf) {
        FUN_100aebf28(unaff_x29 + -0xa8,in_stack_00000118,in_stack_00000120);
        goto LAB_101430dc0;
      }
LAB_1014312bc:
      uVar10 = FUN_108855b04(&stack0x00000150,unaff_x29 + -0x61,&UNK_10b20f800);
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
      *(undefined1 *)(unaff_x29 + -0xa8) = 1;
      goto LAB_101430dd4;
    }
    FUN_100aebf28(unaff_x29 + -0xa8,in_stack_00000120,in_stack_00000128);
LAB_101430474:
    if (lVar16 == 0) goto LAB_101430dc8;
    _free(pcVar7);
    if (*(char *)(unaff_x29 + -0xa8) == '\x01') goto LAB_101430dd4;
LAB_10143048c:
    bVar5 = *(byte *)(unaff_x29 + -0xa7);
    in_stack_00000190 = *(undefined8 *)(unaff_x29 + -0xf0);
    pbVar13 = *(byte **)(unaff_x29 + -0xe0);
    pbVar19 = *(byte **)(unaff_x29 + -0xe8);
    in_stack_000001a8 = *(long *)(unaff_x29 + -0xd8);
    in_stack_00000018._4_4_ = (uint)in_stack_00000190 & 0xff;
    in_stack_00000198 = pbVar19;
    in_stack_000001a0 = pbVar13;
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        if (in_stack_00000018._4_4_ != 0x16) {
          if ((in_stack_00000018._4_4_ != 0x12) &&
             ((in_stack_00000018._4_4_ != 0x15 || (in_stack_000001a8 != 0)))) {
            pbVar12 = (byte *)FUN_108855b04(&stack0x00000190,unaff_x29 + -0x61,&UNK_10b20a5c0);
            goto LAB_101430df0;
          }
          FUN_100e077ec(&stack0x00000190);
        }
        pbVar12 = (byte *)0x8000000000000000;
        goto LAB_101430df4;
      }
      if (bVar5 == 1) {
        if (in_stack_00000018._4_4_ == 0x14) {
          lVar16 = in_stack_000001a8 * 0x20;
          *(byte **)(unaff_x29 + -0xf0) = pbVar13;
          *(byte **)(unaff_x29 + -0xe8) = pbVar13;
          *(byte **)(unaff_x29 + -0xe0) = pbVar19;
          *(byte **)(unaff_x29 + -0xd8) = pbVar13 + lVar16;
          *(undefined8 *)(unaff_x29 + -0xd0) = 0;
          pbVar12 = pbVar13;
          if (in_stack_000001a8 == 0) {
LAB_101430ea0:
            pbVar21 = (byte *)FUN_1087e422c(0,&UNK_10b232890,&UNK_10b20a590);
          }
          else {
            pbVar12 = pbVar13 + 0x20;
            bVar5 = *pbVar13;
            *(byte **)(unaff_x29 + -0xe8) = pbVar12;
            if (bVar5 == 0x16) goto LAB_101430ea0;
            uVar10 = *(undefined8 *)(pbVar13 + 1);
            in_stack_00000058[1] = *(undefined8 *)(pbVar13 + 9);
            *in_stack_00000058 = uVar10;
            uVar10 = *(undefined8 *)(pbVar13 + 0x10);
            *(undefined8 *)((long)in_stack_00000058 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
            *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(byte *)(unaff_x29 + -0x88) = bVar5;
            FUN_1004b5b34(unaff_x29 + -0xa8,unaff_x29 + -0x88);
            pbVar11 = *(byte **)(unaff_x29 + -0xa8);
            pbVar21 = *(byte **)(unaff_x29 + -0xa0);
            if (pbVar11 != (byte *)0x8000000000000000) {
              pbVar12 = *(byte **)(unaff_x29 + -0x98);
              in_stack_000000d0 = (byte *)0x8000000000000001;
              in_stack_000000d8 = pbVar11;
              in_stack_000000e0 = pbVar21;
              in_stack_000000e8 = pbVar12;
              pbVar13 = (byte *)FUN_100fbc738(unaff_x29 + -0xf0);
              if (pbVar13 == (byte *)0x0) {
                pbVar12 = (byte *)0x8000000000000001;
                goto LAB_101431218;
              }
              in_stack_000000d0 = (byte *)0x8000000000000007;
              in_stack_000000d8 = pbVar13;
              if (pbVar12 != (byte *)0x0) {
                pbVar13 = pbVar21 + 8;
                do {
                  if (*(long *)(pbVar13 + -8) != 0) {
                    _free(*(undefined8 *)pbVar13);
                  }
                  pbVar13 = pbVar13 + 0x18;
                  pbVar12 = pbVar12 + -1;
                } while (pbVar12 != (byte *)0x0);
              }
              goto joined_r0x000101430f74;
            }
          }
          in_stack_000000d0 = (byte *)0x8000000000000007;
          lVar16 = ((ulong)((long)(pbVar13 + lVar16) - (long)pbVar12) >> 5) + 1;
          in_stack_000000d8 = pbVar21;
          while (lVar16 = lVar16 + -1, pbVar21 = pbVar13, pbVar11 = pbVar19, lVar16 != 0) {
            FUN_100e077ec(pbVar12);
            pbVar12 = pbVar12 + 0x20;
          }
joined_r0x000101430f74:
          if (pbVar11 != (byte *)0x0) {
            _free(pbVar21);
          }
          pbVar12 = (byte *)0x8000000000000007;
          goto LAB_101431218;
        }
        if (in_stack_00000018._4_4_ == 0x15) {
          lVar16 = in_stack_000001a8 * 0x40;
          pbVar21 = pbVar13 + lVar16;
          *(byte **)(unaff_x29 + -0xd0) = pbVar13;
          *(byte **)(unaff_x29 + -200) = pbVar13;
          *(byte **)(unaff_x29 + -0xc0) = pbVar19;
          *(byte **)(unaff_x29 + -0xb8) = pbVar21;
          *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
          *(undefined8 *)(unaff_x29 + -0xb0) = 0;
          if (in_stack_000001a8 == 0) {
            in_stack_000001b0 = (byte *)0x8000000000000000;
            goto LAB_1014310ec;
          }
          lVar24 = 0;
          in_stack_00000020 = (byte *)0x8000000000000000;
          pbVar19 = (byte *)0x8000000000000000;
          goto LAB_1014305b0;
        }
        if (in_stack_00000018._4_4_ == 0x16) {
          *(undefined1 *)(unaff_x29 + -0xf0) = 0xd;
          pbVar12 = (byte *)func_0x000108a4a50c(unaff_x29 + -0xf0,&UNK_10b212c00,&UNK_10b20a590);
        }
        else {
          FUN_1088556a8(unaff_x29 + -0xf0,&stack0x00000190);
          in_stack_000000d8 =
               (byte *)func_0x000108a4a50c(unaff_x29 + -0xf0,&UNK_10b212c00,&UNK_10b20a590);
          FUN_100e077ec(&stack0x00000190);
          pbVar12 = in_stack_000000d8;
        }
      }
      else {
        pbVar12 = (byte *)0x8000000000000002;
        if (in_stack_00000018._4_4_ == 0x16) goto LAB_101430df4;
        if ((in_stack_00000018._4_4_ == 0x12) ||
           ((in_stack_00000018._4_4_ == 0x15 && (in_stack_000001a8 == 0)))) {
          FUN_100e077ec(&stack0x00000190);
          goto LAB_101430df4;
        }
        pbVar12 = (byte *)FUN_108855b04(&stack0x00000190,unaff_x29 + -0x61,&UNK_10b20a5c0);
      }
LAB_101430df0:
      in_stack_000000d8 = pbVar12;
      pbVar12 = (byte *)0x8000000000000007;
      goto LAB_101430df4;
    }
    if (4 < bVar5) {
      if (bVar5 == 5) {
        if (in_stack_00000018._4_4_ != 0x16) {
          if ((in_stack_00000018._4_4_ != 0x12) &&
             ((in_stack_00000018._4_4_ != 0x15 || (in_stack_000001a8 != 0)))) {
            pbVar12 = (byte *)FUN_108855b04(&stack0x00000190,unaff_x29 + -0x61,&UNK_10b20a5c0);
            goto LAB_101430df0;
          }
          FUN_100e077ec(&stack0x00000190);
        }
        pbVar12 = (byte *)0x8000000000000005;
      }
      else {
        if (in_stack_00000018._4_4_ != 0x16) {
          if ((in_stack_00000018._4_4_ != 0x12) &&
             ((in_stack_00000018._4_4_ != 0x15 || (in_stack_000001a8 != 0)))) {
            pbVar12 = (byte *)FUN_108855b04(&stack0x00000190,unaff_x29 + -0x61,&UNK_10b20a5c0);
            goto LAB_101430df0;
          }
          FUN_100e077ec(&stack0x00000190);
        }
        pbVar12 = (byte *)0x8000000000000006;
      }
      goto LAB_101430df4;
    }
    if (bVar5 != 3) {
      if (in_stack_00000018._4_4_ != 0x16) {
        if ((in_stack_00000018._4_4_ != 0x12) &&
           ((in_stack_00000018._4_4_ != 0x15 || (in_stack_000001a8 != 0)))) {
          pbVar12 = (byte *)FUN_108855b04(&stack0x00000190,unaff_x29 + -0x61,&UNK_10b20a5c0);
          goto LAB_101430df0;
        }
        FUN_100e077ec(&stack0x00000190);
      }
      pbVar12 = (byte *)0x8000000000000004;
      goto LAB_101430df4;
    }
    if (in_stack_00000018._4_4_ == 0x14) {
      lVar16 = in_stack_000001a8 * 0x20;
      *(byte **)(unaff_x29 + -0xf0) = pbVar13;
      *(byte **)(unaff_x29 + -0xe8) = pbVar13;
      *(byte **)(unaff_x29 + -0xe0) = pbVar19;
      *(byte **)(unaff_x29 + -0xd8) = pbVar13 + lVar16;
      *(undefined8 *)(unaff_x29 + -0xd0) = 0;
      pbVar21 = pbVar13;
      if (in_stack_000001a8 == 0) {
LAB_101430f20:
        pbVar11 = (byte *)FUN_1087e422c(0,&UNK_10b2328a0,&UNK_10b20a590);
      }
      else {
        pbVar21 = pbVar13 + 0x20;
        bVar5 = *pbVar13;
        *(byte **)(unaff_x29 + -0xe8) = pbVar21;
        if (bVar5 == 0x16) goto LAB_101430f20;
        uVar10 = *(undefined8 *)(pbVar13 + 1);
        in_stack_00000058[1] = *(undefined8 *)(pbVar13 + 9);
        *in_stack_00000058 = uVar10;
        uVar10 = *(undefined8 *)(pbVar13 + 0x10);
        *(undefined8 *)((long)in_stack_00000058 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
        *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(byte *)(unaff_x29 + -0x88) = bVar5;
        FUN_10126eb38(unaff_x29 + -0xa8,unaff_x29 + -0x88);
        pbVar12 = *(byte **)(unaff_x29 + -0xa8);
        pbVar11 = *(byte **)(unaff_x29 + -0xa0);
        if (pbVar12 != (byte *)0x8000000000000000) {
          in_stack_000000e8 = *(byte **)(unaff_x29 + -0x90);
          in_stack_000000e0 = *(byte **)(unaff_x29 + -0x98);
          in_stack_000000d0 = pbVar12;
          in_stack_000000d8 = pbVar11;
          pbVar21 = (byte *)FUN_100fbc738(unaff_x29 + -0xf0);
          if (pbVar21 == (byte *)0x0) goto LAB_101431218;
          in_stack_000000d0 = (byte *)0x8000000000000007;
          pbVar13 = pbVar11;
          in_stack_000000d8 = pbVar21;
          pbVar19 = pbVar12;
          goto joined_r0x0001014310b4;
        }
      }
      in_stack_000000d0 = (byte *)0x8000000000000007;
      lVar16 = ((ulong)((long)(pbVar13 + lVar16) - (long)pbVar21) >> 5) + 1;
      in_stack_000000d8 = pbVar11;
      while (lVar16 = lVar16 + -1, lVar16 != 0) {
        FUN_100e077ec(pbVar21);
        pbVar21 = pbVar21 + 0x20;
      }
joined_r0x0001014310b4:
      if (pbVar19 != (byte *)0x0) {
        _free(pbVar13);
      }
      pbVar12 = (byte *)0x8000000000000007;
      goto LAB_101431218;
    }
    if (in_stack_00000018._4_4_ != 0x15) {
      if (in_stack_00000018._4_4_ == 0x16) {
        *(undefined1 *)(unaff_x29 + -0xf0) = 0xd;
        pbVar12 = (byte *)func_0x000108a4a50c(unaff_x29 + -0xf0,&UNK_10b212c00,&UNK_10b20a590);
        goto LAB_101430df0;
      }
      FUN_1088556a8(unaff_x29 + -0xf0,&stack0x00000190);
      in_stack_000000d8 =
           (byte *)func_0x000108a4a50c(unaff_x29 + -0xf0,&UNK_10b212c00,&UNK_10b20a590);
      pbVar12 = (byte *)0x8000000000000007;
      in_stack_000000d0 = (byte *)0x8000000000000007;
      FUN_100e077ec(&stack0x00000190);
      goto LAB_101430df4;
    }
    pbVar21 = pbVar13 + in_stack_000001a8 * 0x40;
    *(byte **)(unaff_x29 + -0xd0) = pbVar13;
    *(byte **)(unaff_x29 + -200) = pbVar13;
    *(byte **)(unaff_x29 + -0xc0) = pbVar19;
    *(byte **)(unaff_x29 + -0xb8) = pbVar21;
    *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    if (in_stack_000001a8 != 0) {
      pbVar19 = (byte *)0x0;
      in_stack_00000010 = (byte *)((in_stack_000001a8 * 0x40 - 0x40U >> 6) + 1);
      pbVar12 = (byte *)0x8000000000000000;
      do {
        pbVar23 = pbVar13 + 0x40;
        bVar5 = *pbVar13;
        pbVar11 = pbVar19;
        pbVar25 = pbVar23;
        if (bVar5 == 0x16) break;
        *(byte *)(unaff_x29 + -0x88) = bVar5;
        uVar10 = *(undefined8 *)(pbVar13 + 0x10);
        *(undefined8 *)((long)in_stack_00000058 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
        *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
        uVar10 = *(undefined8 *)(pbVar13 + 1);
        in_stack_00000058[1] = *(undefined8 *)(pbVar13 + 9);
        *in_stack_00000058 = uVar10;
        uVar10 = *(undefined8 *)(pbVar13 + 0x20);
        *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(pbVar13 + 0x28);
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
        uVar10 = *(undefined8 *)(pbVar13 + 0x30);
        *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar13 + 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
        plVar3 = *(long **)(unaff_x29 + -0x80);
        plVar4 = *(long **)(unaff_x29 + -0x78);
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            bVar9 = *(char *)(unaff_x29 + -0x87) == '\0';
LAB_101430ab4:
            bVar9 = !bVar9;
LAB_101430ab8:
            *(bool *)(unaff_x29 + -0xa7) = bVar9;
            *(undefined1 *)(unaff_x29 + -0xa8) = 0;
LAB_101430ac0:
            FUN_100e077ec(unaff_x29 + -0x88);
            goto LAB_101430ae4;
          }
          if (bVar5 == 4) {
            bVar9 = plVar3 == (long *)0x0;
            goto LAB_101430ab4;
          }
          if (bVar5 == 0xc) {
            if (*(long *)(unaff_x29 + -0x70) == 0x18) {
              *(bool *)(unaff_x29 + -0xa7) =
                   (*plVar4 != 0x5f6b726f7774656e || plVar4[1] != 0x615f7963696c6f70) ||
                   plVar4[2] != 0x746e656d646e656d;
              *(undefined1 *)(unaff_x29 + -0xa8) = 0;
            }
            else {
              *(undefined1 *)(unaff_x29 + -0xa7) = 1;
              *(undefined1 *)(unaff_x29 + -0xa8) = 0;
            }
            goto joined_r0x000101430a54;
          }
LAB_101430b9c:
          uVar10 = FUN_108855b04(unaff_x29 + -0x88,unaff_x29 + -0x61,&UNK_10b20e480);
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
          *(undefined1 *)(unaff_x29 + -0xa8) = 1;
LAB_101430bc4:
          *(byte **)(unaff_x29 + -200) = pbVar23;
          *(byte **)(unaff_x29 + -0xb0) = pbVar19 + 1;
          in_stack_000000d8 = *(byte **)(unaff_x29 + -0xa0);
          pbVar12 = (byte *)((ulong)pbVar12 & 0x7fffffffffffffff);
joined_r0x000101430bf0:
          in_stack_000000d0 = (byte *)0x8000000000000007;
          if (pbVar12 != (byte *)0x0) {
            in_stack_000000d0 = (byte *)0x8000000000000007;
            _free(in_stack_00000020);
          }
          goto LAB_1014311f4;
        }
        if (bVar5 == 0xd) {
          if (plVar4 == (long *)0x18) {
            bVar9 = false;
            if (*plVar3 == 0x5f6b726f7774656e && plVar3[1] == 0x615f7963696c6f70) {
              bVar9 = plVar3[2] == 0x746e656d646e656d;
            }
            goto LAB_101430ab4;
          }
          bVar9 = true;
          goto LAB_101430ab8;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_101430b9c;
          FUN_100bde8a8(unaff_x29 + -0xa8,plVar3,plVar4);
          goto LAB_101430ac0;
        }
        FUN_100bde8a8(unaff_x29 + -0xa8,plVar4);
joined_r0x000101430a54:
        if (plVar3 != (long *)0x0) {
          _free(plVar4);
        }
LAB_101430ae4:
        if ((*(byte *)(unaff_x29 + -0xa8) & 1) != 0) goto LAB_101430bc4;
        if ((*(byte *)(unaff_x29 + -0xa7) & 1) == 0) {
          if (pbVar12 != (byte *)0x8000000000000000) {
            *(byte **)(unaff_x29 + -200) = pbVar23;
            *(byte **)(unaff_x29 + -0xb0) = pbVar19 + 1;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_108cb01d6;
            *(undefined8 *)(unaff_x29 + -0xa0) = 0x18;
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
            *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
            in_stack_000000d8 =
                 (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
            goto joined_r0x000101430bf0;
          }
          cVar6 = *(char *)(unaff_x29 + -0xf0);
          *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
          if (cVar6 == '\x16') {
            *(byte **)(unaff_x29 + -200) = pbVar23;
            *(byte **)(unaff_x29 + -0xb0) = pbVar19 + 1;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1014319b8:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1014319bc);
            (*pcVar8)();
          }
          uVar10 = *in_stack_00000040;
          in_stack_00000058[1] = in_stack_00000040[1];
          *in_stack_00000058 = uVar10;
          uVar10 = *(undefined8 *)((long)in_stack_00000040 + 0xf);
          *(undefined8 *)((long)in_stack_00000058 + 0x17) =
               *(undefined8 *)((long)in_stack_00000040 + 0x17);
          *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
          *(char *)(unaff_x29 + -0x88) = cVar6;
          FUN_10126eb38(unaff_x29 + -0xa8,unaff_x29 + -0x88);
          pbVar12 = *(byte **)(unaff_x29 + -0xa8);
          pbVar13 = *(byte **)(unaff_x29 + -0xa0);
          in_stack_00000020 = pbVar13;
          if (pbVar12 != (byte *)0x8000000000000000) {
            in_stack_000001b8 = *(byte **)(unaff_x29 + -0x90);
            in_stack_000001b0 = *(byte **)(unaff_x29 + -0x98);
            goto LAB_101430940;
          }
          *(byte **)(unaff_x29 + -200) = pbVar23;
          *(byte **)(unaff_x29 + -0xb0) = pbVar19 + 1;
          goto LAB_1014311ec;
        }
        cVar6 = *(char *)(unaff_x29 + -0xf0);
        *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
        if (cVar6 == '\x16') {
          *(byte **)(unaff_x29 + -200) = pbVar23;
          *(byte **)(unaff_x29 + -0xb0) = pbVar19 + 1;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1014319b8;
        }
        uVar10 = *in_stack_00000040;
        in_stack_00000058[1] = in_stack_00000040[1];
        *in_stack_00000058 = uVar10;
        uVar10 = *(undefined8 *)((long)in_stack_00000040 + 0xf);
        *(undefined8 *)((long)in_stack_00000058 + 0x17) =
             *(undefined8 *)((long)in_stack_00000040 + 0x17);
        *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
        *(char *)(unaff_x29 + -0x88) = cVar6;
        FUN_100e077ec(unaff_x29 + -0x88);
LAB_101430940:
        pbVar19 = pbVar19 + 1;
        pbVar11 = in_stack_00000010;
        pbVar25 = pbVar21;
        pbVar13 = pbVar23;
      } while (pbVar23 != pbVar21);
      *(byte **)(unaff_x29 + -200) = pbVar25;
      *(byte **)(unaff_x29 + -0xb0) = pbVar11;
      if (pbVar12 == (byte *)0x8000000000000000) goto LAB_1014311b0;
      in_stack_000000e8 = in_stack_000001b8;
      in_stack_000000e0 = in_stack_000001b0;
      in_stack_000000d8 = in_stack_00000020;
      in_stack_000000d0 = pbVar12;
      FUN_100d34830(unaff_x29 + -0xd0);
      if (pbVar21 != pbVar25) {
        *(byte **)(unaff_x29 + -0x88) = pbVar11;
        in_stack_000000d8 =
             (byte *)FUN_1087e422c(pbVar11 + ((ulong)((long)pbVar21 - (long)pbVar25) >> 6),
                                   unaff_x29 + -0x88,&UNK_10b23a190);
        in_stack_000000d0 = (byte *)0x8000000000000007;
        if (pbVar12 != (byte *)0x0) {
          _free(in_stack_00000020);
        }
        pbVar12 = (byte *)0x8000000000000007;
      }
      goto LAB_101431218;
    }
LAB_1014311b0:
    *(undefined **)(unaff_x29 + -0xa8) = &UNK_108cb01d6;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0x18;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
    *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
    pbVar13 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
LAB_1014311ec:
    in_stack_000000d0 = (byte *)0x8000000000000007;
    in_stack_000000d8 = pbVar13;
LAB_1014311f4:
    FUN_100d34830(unaff_x29 + -0xd0);
    if (*(char *)(unaff_x29 + -0xf0) != '\x16') {
      FUN_100e077ec(unaff_x29 + -0xf0);
    }
  } while( true );
  do {
    puVar1 = (ulong *)(in_stack_00000048 + lVar22 * 0x20);
    uVar14 = *puVar1;
    uVar17 = uVar14 ^ 0x8000000000000000;
    if (-1 < (long)uVar14) {
      uVar17 = 3;
    }
    if (uVar17 == 3) {
      if (uVar14 != 0) {
        uVar17 = puVar1[1];
LAB_101431670:
        _free(uVar17);
      }
    }
    else if (uVar17 == 1) {
      uVar17 = puVar1[2];
      uVar14 = puVar1[3];
      if (uVar14 != 0) {
        puVar26 = (undefined8 *)(uVar17 + 8);
        do {
          if (puVar26[-1] != 0) {
            _free(*puVar26);
          }
          puVar26 = puVar26 + 3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (puVar1[1] != 0) goto LAB_101431670;
    }
    lVar22 = lVar22 + 1;
  } while (lVar22 != lVar24);
LAB_1014316e8:
  if (lVar16 == 0) goto LAB_10143186c;
LAB_101431860:
  _free(in_stack_00000048);
  goto LAB_101431868;
LAB_1014305b0:
  do {
    pbVar11 = pbVar13 + 0x40;
    bVar5 = *pbVar13;
    pbVar12 = pbVar11;
    lVar20 = lVar24;
    if (bVar5 == 0x16) break;
    *(byte *)(unaff_x29 + -0x88) = bVar5;
    uVar10 = *(undefined8 *)(pbVar13 + 0x10);
    *(undefined8 *)((long)in_stack_00000058 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
    *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
    uVar10 = *(undefined8 *)(pbVar13 + 1);
    in_stack_00000058[1] = *(undefined8 *)(pbVar13 + 9);
    *in_stack_00000058 = uVar10;
    uVar10 = *(undefined8 *)(pbVar13 + 0x20);
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(pbVar13 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
    uVar10 = *(undefined8 *)(pbVar13 + 0x30);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(pbVar13 + 0x38);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
    plVar3 = *(long **)(unaff_x29 + -0x80);
    plVar4 = *(long **)(unaff_x29 + -0x78);
    if (bVar5 < 0xd) {
      if (bVar5 == 1) {
        bVar9 = *(char *)(unaff_x29 + -0x87) == '\0';
LAB_101430740:
        bVar9 = !bVar9;
LAB_101430744:
        *(bool *)(unaff_x29 + -0xa7) = bVar9;
        *(undefined1 *)(unaff_x29 + -0xa8) = 0;
LAB_10143074c:
        FUN_100e077ec(unaff_x29 + -0x88);
        goto LAB_101430770;
      }
      if (bVar5 == 4) {
        bVar9 = plVar3 == (long *)0x0;
        goto LAB_101430740;
      }
      if (bVar5 == 0xc) {
        if (*(long *)(unaff_x29 + -0x70) == 0x1d) {
          *(bool *)(unaff_x29 + -0xa7) =
               ((*plVar4 != 0x6465736f706f7270 || plVar4[1] != 0x6c6f70636578655f) ||
               plVar4[2] != 0x6e656d615f796369) ||
               *(long *)((long)plVar4 + 0x15) != 0x746e656d646e656d;
          *(undefined1 *)(unaff_x29 + -0xa8) = 0;
        }
        else {
          *(undefined1 *)(unaff_x29 + -0xa7) = 1;
          *(undefined1 *)(unaff_x29 + -0xa8) = 0;
        }
        goto joined_r0x0001014306c8;
      }
LAB_10143083c:
      uVar10 = FUN_108855b04(unaff_x29 + -0x88,unaff_x29 + -0x61,&UNK_10b20d0c0);
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
      *(undefined1 *)(unaff_x29 + -0xa8) = 1;
LAB_101430864:
      *(byte **)(unaff_x29 + -200) = pbVar11;
      *(long *)(unaff_x29 + -0xb0) = lVar24 + 1;
      in_stack_000001b8 = in_stack_00000008;
      in_stack_000001c0 = in_stack_00000010;
      in_stack_000000d8 = *(byte **)(unaff_x29 + -0xa0);
      in_stack_000000d0 = (byte *)0x8000000000000007;
      in_stack_000001b0 = pbVar19;
      if (in_stack_00000020 != (byte *)0x8000000000000000) {
joined_r0x0001014313b0:
        in_stack_000000d0 = (byte *)0x8000000000000007;
        if (in_stack_00000010 != (byte *)0x0) {
          in_stack_000000d0 = (byte *)0x8000000000000007;
          pbVar12 = in_stack_00000008 + 8;
          do {
            if (*(long *)(pbVar12 + -8) != 0) {
              _free(*(undefined8 *)pbVar12);
            }
            pbVar12 = pbVar12 + 0x18;
            in_stack_00000010 = in_stack_00000010 + -1;
          } while (in_stack_00000010 != (byte *)0x0);
        }
        if (in_stack_00000020 != (byte *)0x0) {
          _free(in_stack_00000008);
        }
      }
      goto LAB_101431134;
    }
    if (bVar5 == 0xd) {
      if (plVar4 == (long *)0x1d) {
        bVar9 = false;
        if ((*plVar3 == 0x6465736f706f7270 && plVar3[1] == 0x6c6f70636578655f) &&
            plVar3[2] == 0x6e656d615f796369) {
          bVar9 = *(long *)((long)plVar3 + 0x15) == 0x746e656d646e656d;
        }
        goto LAB_101430740;
      }
      bVar9 = true;
      goto LAB_101430744;
    }
    if (bVar5 != 0xe) {
      if (bVar5 != 0xf) goto LAB_10143083c;
      FUN_100bde728(unaff_x29 + -0xa8,plVar3,plVar4);
      goto LAB_10143074c;
    }
    FUN_100bde728(unaff_x29 + -0xa8,plVar4);
joined_r0x0001014306c8:
    if (plVar3 != (long *)0x0) {
      _free(plVar4);
    }
LAB_101430770:
    if ((*(byte *)(unaff_x29 + -0xa8) & 1) != 0) goto LAB_101430864;
    if ((*(byte *)(unaff_x29 + -0xa7) & 1) == 0) {
      if (in_stack_00000020 != (byte *)0x8000000000000000) {
        *(byte **)(unaff_x29 + -200) = pbVar11;
        in_stack_000001b8 = in_stack_00000008;
        in_stack_000001c0 = in_stack_00000010;
        *(long *)(unaff_x29 + -0xb0) = lVar24 + 1;
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_108cb01a5;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0x1d;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
        in_stack_000001b0 = pbVar19;
        in_stack_000000d8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88)
        ;
        goto joined_r0x0001014313b0;
      }
      cVar6 = *(char *)(unaff_x29 + -0xf0);
      *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
      if (cVar6 != '\x16') {
        uVar10 = *in_stack_00000040;
        in_stack_00000058[1] = in_stack_00000040[1];
        *in_stack_00000058 = uVar10;
        uVar10 = *(undefined8 *)((long)in_stack_00000040 + 0xf);
        *(undefined8 *)((long)in_stack_00000058 + 0x17) =
             *(undefined8 *)((long)in_stack_00000040 + 0x17);
        *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
        *(char *)(unaff_x29 + -0x88) = cVar6;
        in_stack_00000020 = (byte *)0x8000000000000000;
        FUN_1004b5b34(unaff_x29 + -0xa8,unaff_x29 + -0x88);
        pbVar19 = *(byte **)(unaff_x29 + -0xa8);
        pbVar12 = *(byte **)(unaff_x29 + -0xa0);
        in_stack_00000008 = pbVar12;
        if (pbVar19 != (byte *)0x8000000000000000) {
          in_stack_00000010 = *(byte **)(unaff_x29 + -0x98);
          in_stack_00000020 = pbVar19;
          goto LAB_10143059c;
        }
        *(byte **)(unaff_x29 + -200) = pbVar11;
        *(long *)(unaff_x29 + -0xb0) = lVar24 + 1;
        goto LAB_10143112c;
      }
      *(byte **)(unaff_x29 + -200) = pbVar11;
      *(long *)(unaff_x29 + -0xb0) = lVar24 + 1;
      in_stack_000001b8 = in_stack_00000008;
      in_stack_000001c0 = in_stack_00000010;
      in_stack_000001b0 = pbVar19;
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto LAB_1014319b8;
    }
    cVar6 = *(char *)(unaff_x29 + -0xf0);
    *(undefined1 *)(unaff_x29 + -0xf0) = 0x16;
    if (cVar6 == '\x16') {
      *(byte **)(unaff_x29 + -200) = pbVar11;
      *(long *)(unaff_x29 + -0xb0) = lVar24 + 1;
      in_stack_000001b8 = in_stack_00000008;
      in_stack_000001c0 = in_stack_00000010;
      in_stack_000001b0 = pbVar19;
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto LAB_1014319b8;
    }
    uVar10 = *in_stack_00000040;
    in_stack_00000058[1] = in_stack_00000040[1];
    *in_stack_00000058 = uVar10;
    uVar10 = *(undefined8 *)((long)in_stack_00000040 + 0xf);
    *(undefined8 *)((long)in_stack_00000058 + 0x17) =
         *(undefined8 *)((long)in_stack_00000040 + 0x17);
    *(undefined8 *)((long)in_stack_00000058 + 0xf) = uVar10;
    *(char *)(unaff_x29 + -0x88) = cVar6;
    FUN_100e077ec(unaff_x29 + -0x88);
LAB_10143059c:
    lVar24 = lVar24 + 1;
    pbVar12 = pbVar21;
    lVar20 = (lVar16 - 0x40U >> 6) + 1;
    pbVar13 = pbVar11;
  } while (pbVar11 != pbVar21);
  *(byte **)(unaff_x29 + -200) = pbVar12;
  *(long *)(unaff_x29 + -0xb0) = lVar20;
  in_stack_000001b8 = in_stack_00000008;
  in_stack_000001c0 = in_stack_00000010;
  in_stack_000001b0 = pbVar19;
  if (in_stack_00000020 == (byte *)0x8000000000000000) {
LAB_1014310ec:
    *(undefined **)(unaff_x29 + -0xa8) = &UNK_108cb01a5;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0x1d;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa8;
    *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
    param_2 = unaff_x29 + -0x88;
    goto code_r0x000101431118;
  }
  in_stack_000000d0 = (byte *)0x8000000000000001;
  in_stack_000000d8 = in_stack_00000020;
  in_stack_000000e0 = in_stack_00000008;
  in_stack_000000e8 = in_stack_00000010;
  FUN_100d34830(unaff_x29 + -0xd0);
  if (pbVar21 == pbVar12) {
    pbVar12 = (byte *)0x8000000000000001;
  }
  else {
    *(long *)(unaff_x29 + -0x88) = lVar20;
    in_stack_000000d8 =
         (byte *)FUN_1087e422c(((ulong)((long)pbVar21 - (long)pbVar12) >> 6) + lVar20,
                               unaff_x29 + -0x88,&UNK_10b23a190);
    in_stack_000000d0 = (byte *)0x8000000000000007;
    if (in_stack_00000010 != (byte *)0x0) {
      pbVar12 = in_stack_00000008 + 8;
      pbVar21 = in_stack_00000010;
      do {
        if (*(long *)(pbVar12 + -8) != 0) {
          _free(*(undefined8 *)pbVar12);
        }
        pbVar12 = pbVar12 + 0x18;
        pbVar21 = pbVar21 + -1;
      } while (pbVar21 != (byte *)0x0);
    }
    if (in_stack_00000020 != (byte *)0x0) {
      _free(in_stack_00000008);
    }
    pbVar12 = (byte *)0x8000000000000007;
  }
  goto LAB_101431218;
LAB_1014317bc:
  do {
    puVar1 = (ulong *)(lVar16 + lVar20 * 0x20);
    uVar14 = *puVar1;
    uVar17 = uVar14 ^ 0x8000000000000000;
    if (-1 < (long)uVar14) {
      uVar17 = 3;
    }
    if (uVar17 == 3) {
      if (uVar14 != 0) {
        uVar17 = puVar1[1];
LAB_1014317a8:
        _free(uVar17);
      }
    }
    else if (uVar17 == 1) {
      uVar17 = puVar1[2];
      uVar14 = puVar1[3];
      if (uVar14 != 0) {
        puVar26 = (undefined8 *)(uVar17 + 8);
        do {
          if (puVar26[-1] != 0) {
            _free(*puVar26);
          }
          puVar26 = puVar26 + 3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (puVar1[1] != 0) goto LAB_1014317a8;
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != lVar24);
LAB_10143181c:
  if (in_stack_00000088 != 0) {
    _free(lVar16);
  }
LAB_101431830:
  lVar16 = ((ulong)((long)in_stack_00000028 - (long)unaff_x21) >> 5) + 1;
  while (lVar16 = lVar16 + -1, lVar16 != 0) {
    FUN_100e077ec(unaff_x21);
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (in_stack_00000038 != 0) goto LAB_101431860;
LAB_101431868:
  lVar20 = *(long *)(unaff_x29 + -0xe8);
LAB_10143186c:
  *in_stack_00000030 = 0x8000000000000001;
  in_stack_00000030[1] = lVar20;
  return;
}

