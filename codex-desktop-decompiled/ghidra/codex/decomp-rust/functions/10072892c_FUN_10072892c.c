
/* WARNING: Type propagation algorithm not settling */

void FUN_10072892c(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  long lVar8;
  code *pcVar9;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong unaff_x23;
  ulong uVar13;
  long unaff_x24;
  ulong uVar14;
  ulong *unaff_x26;
  bool bVar15;
  undefined1 unaff_w28;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined1 uStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined1 uStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined1 uStack0000000000000030;
  undefined7 uStack0000000000000031;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined7 uStack0000000000000061;
  undefined1 in_stack_00000068;
  undefined7 uStack0000000000000069;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  ulong in_stack_000000f0;
  undefined1 uStack00000000000000f8;
  undefined1 uStack00000000000000ff;
  undefined1 uStack0000000000000100;
  undefined8 in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined2 uStack0000000000000114;
  undefined1 uStack0000000000000116;
  undefined1 uStack0000000000000117;
  undefined8 in_stack_00000118;
  
  *(long *)(unaff_x29 + -0xd8) = param_1._8_8_;
  *(long *)(unaff_x29 + -0xe0) = param_1._0_8_;
  *(char **)(unaff_x29 + -0xd0) =
       "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/lib.rs";
  *(undefined8 *)(unaff_x24 + 0xd0) = 5;
  *(undefined8 *)(unaff_x24 + 200) = 0x58;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0xf500000001;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  (**(code **)(puVar1 + 0x20))(puVar2,unaff_x29 + -0xf0);
  uVar10 = CONCAT71(uStack0000000000000021,uStack0000000000000020);
  in_stack_00000058 = (ulong)in_stack_00000018;
  in_stack_00000050 = (ulong)in_stack_00000010;
  in_stack_00000068 = uStack0000000000000028;
  in_stack_00000060 = uStack0000000000000020;
  in_stack_00000070 = CONCAT71(uStack0000000000000031,uStack0000000000000030);
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000080 = in_stack_00000040;
  *(undefined1 **)(unaff_x29 + -0xe8) = in_stack_00000018;
  *(undefined8 **)(unaff_x29 + -0xf0) = in_stack_00000010;
  *(ulong *)(unaff_x29 + -0xd8) = CONCAT71(uStack0000000000000029,uStack0000000000000028);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00000038;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000070;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000040;
  if (*(char *)(unaff_x20 + 0x17a) == '\0') {
    lVar8 = *(long *)(unaff_x29 + -0xf0);
    if (2 < lVar8) {
      if (lVar8 == 3) {
        _uStack00000000000000f8 = CONCAT71(uStack0000000000000021,uStack0000000000000020);
        in_stack_00000108 = CONCAT71(uStack0000000000000031,uStack0000000000000030);
        _uStack0000000000000100 = CONCAT71(uStack0000000000000029,uStack0000000000000028);
        in_stack_000000f0 = (ulong)in_stack_00000018;
        uStack0000000000000110 = 1;
        uStack0000000000000114 = 0x201;
        uStack0000000000000117 = 0;
        if ((*(char *)(unaff_x20 + 0x128) == '\x02') ||
           ((*(char *)(unaff_x20 + 300) != '\0' && (*(char *)(unaff_x20 + 0x12d) == '\x02')))) {
          uVar17 = *(undefined8 *)(unaff_x20 + 0x118);
          uVar16 = *(undefined8 *)(unaff_x20 + 0x130);
          uVar10 = *(undefined8 *)(unaff_x20 + 0x128);
          *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x20 + 0x120);
          *(undefined8 *)(unaff_x29 + -0x80) = uVar17;
          *(undefined8 *)(unaff_x29 + -0x68) = uVar16;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar10;
          uVar13 = *(ulong *)(unaff_x20 + 0x108);
          *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x20 + 0x110);
          *(ulong *)(unaff_x29 + -0x90) = uVar13;
          *(ulong *)(unaff_x20 + 0x110) = _uStack00000000000000f8;
          *(ulong *)(unaff_x20 + 0x108) = (ulong)in_stack_00000018;
          *(undefined8 *)(unaff_x20 + 0x120) = in_stack_00000108;
          *(undefined8 *)(unaff_x20 + 0x118) = _uStack0000000000000100;
          *(undefined8 *)(unaff_x20 + 0x130) = in_stack_00000118;
          *(ulong *)(unaff_x20 + 0x128) = (ulong)CONCAT16(uStack0000000000000116,0x20100000001);
          if (*(char *)(unaff_x29 + -0x70) != '\x02') {
            (**(code **)(*(long *)(unaff_x29 + -0x90) + 0x20))
                      (unaff_x29 + -0x78,*(undefined8 *)(unaff_x29 + -0x88),
                       *(undefined8 *)(unaff_x29 + -0x80));
          }
        }
        else {
          (**(code **)((long)in_stack_00000018 + 0x20))
                    (&stack0x00000108,_uStack00000000000000f8,_uStack0000000000000100);
        }
        *(undefined1 *)(unaff_x29 + -0x70) = 2;
        uVar11 = 0;
        FUN_1006fdc5c(&stack0x000000f0,unaff_x20 + 0x30);
        uVar13 = unaff_x23;
        if (in_stack_000000f0 != 0x15) {
          uVar11 = _uStack00000000000000f8 >> 8;
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x24 + 0x71);
          *(undefined8 *)(unaff_x29 + -0x89) = in_stack_00000108;
          uVar13 = _uStack00000000000000f8;
          unaff_w28 = uStack0000000000000100;
        }
        lVar8 = *(long *)(unaff_x29 + -0xf0);
        uVar14 = in_stack_000000f0;
        if (lVar8 < 3) goto LAB_100728a54;
        if (lVar8 != 3) goto LAB_100728a40;
        goto LAB_100728a6c;
      }
      if (lVar8 != 4) {
        uVar13 = *(ulong *)(unaff_x29 + -0xe8);
        unaff_w28 = *(undefined1 *)(unaff_x29 + -0xe0);
        in_stack_000000d8 = CONCAT17(uStack0000000000000030,uStack0000000000000029);
        in_stack_000000d0 = CONCAT17(uStack0000000000000028,uStack0000000000000021);
        *(ulong *)(unaff_x24 + 0x4f) = CONCAT71(uStack0000000000000031,uStack0000000000000030);
        bVar4 = true;
        uVar11 = *(ulong *)(unaff_x29 + -200);
        uVar10 = *(undefined8 *)(unaff_x29 + -0xc0);
        uVar3 = true;
        bVar5 = false;
        bVar15 = true;
        goto LAB_100728f6c;
      }
      *(undefined1 *)(unaff_x20 + 0x17a) = 1;
      FUN_1006fecf0(unaff_x29 + -0x90,(ulong)&stack0x00000050 | 8);
      FUN_1006fdc5c(&stack0x000000f0,unaff_x20 + 0x30);
      if (in_stack_000000f0 == 0x15) {
        *(undefined1 *)(unaff_x29 + -0x70) = 2;
        FUN_1006fdc5c(&stack0x000000f0,unaff_x20 + 0x30);
        if (in_stack_000000f0 != 0x15) goto LAB_100728cc8;
        if (*(ulong *)(unaff_x20 + 0x88) == 0) {
LAB_100729164:
          uVar11 = 1;
          FUN_1011d2388();
          *(undefined1 *)(unaff_x20 + 0x179) = 0;
          uVar13 = unaff_x23;
          uVar14 = 0x15;
        }
        else {
          lVar8 = *(long *)(unaff_x20 + 0x80);
          uVar11 = *(ulong *)(unaff_x20 + 0x88);
          while( true ) {
            auVar18 = FUN_1011d28cc();
            uVar13 = auVar18._8_8_;
            if ((auVar18._0_8_ & 1) != 0) break;
            if (uVar13 == 0) {
              uVar13 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(3,&UNK_108caa935,0x1e);
              break;
            }
            uVar14 = uVar11 - uVar13;
            if (uVar11 < uVar13) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,uVar13,uVar11,&UNK_10b238358);
              goto LAB_1007293f0;
            }
            *(undefined8 *)(unaff_x20 + 0x88) = 0;
            unaff_x23 = 0;
            if (uVar14 == 0) goto LAB_100729164;
            _memmove(lVar8,lVar8 + uVar13,uVar14);
            *(ulong *)(unaff_x20 + 0x88) = uVar14;
            uVar11 = uVar14;
          }
          uVar11 = uVar13 >> 8;
          uVar14 = 0xb;
        }
      }
      else {
LAB_100728cc8:
        uVar13 = _uStack00000000000000f8 & 0xff;
        uVar11 = (ulong)CONCAT34(CONCAT12(uStack00000000000000ff,*(undefined2 *)(unaff_x24 + 0x6d)),
                                 *(undefined4 *)(unaff_x24 + 0x69));
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x24 + 0x71);
        *(undefined8 *)(unaff_x29 + -0x89) = in_stack_00000108;
        uVar14 = in_stack_000000f0;
        unaff_w28 = uStack0000000000000100;
      }
      if (*(long *)(unaff_x29 + -0xf0) == 4) goto LAB_100728a6c;
      goto LAB_100728a54;
    }
    if (lVar8 == 0) {
      uVar10 = CONCAT71(uStack0000000000000029,uStack0000000000000028);
      *(ulong *)(unaff_x29 + -0x88) = CONCAT71(uStack0000000000000021,uStack0000000000000020);
      *(undefined1 **)(unaff_x29 + -0x90) = in_stack_00000018;
      *(ulong *)(unaff_x29 + -0x78) = CONCAT71(uStack0000000000000031,uStack0000000000000030);
      *(undefined8 *)(unaff_x29 + -0x80) = uVar10;
      *(undefined1 *)(unaff_x29 + -0x70) = 1;
      if (*(char *)(unaff_x20 + 0x170) == '\x02') {
        uVar7 = 0;
        uVar13 = *(ulong *)(unaff_x29 + -0x90);
        unaff_w28 = *(undefined1 *)(unaff_x29 + -0x88);
        in_stack_000000b8 = CONCAT17(uStack0000000000000030,uStack0000000000000029);
        in_stack_000000b0 = CONCAT17(uStack0000000000000028,uStack0000000000000021);
        *(ulong *)(unaff_x24 + 0x2f) = CONCAT71(uStack0000000000000031,uStack0000000000000030);
      }
      else {
        uVar16 = *(undefined8 *)(unaff_x29 + -0x88);
        uVar17 = *(undefined8 *)(unaff_x29 + -0x80);
        __ZN11tungstenite10extensions11compression7deflate14DeflateContext8compress17h63db49d0aa28d5dfE
                  (&stack0x000000f0,unaff_x20 + 0x138,uVar16,uVar17);
        uVar11 = in_stack_000000f0;
        if (in_stack_000000f0 == 0) {
          uVar13 = 0x21;
        }
        else {
          in_stack_000000b8 = *(undefined8 *)(unaff_x24 + 0x71);
          in_stack_000000b0 = *(undefined8 *)(unaff_x24 + 0x69);
          *(undefined8 *)(unaff_x24 + 0x2f) = in_stack_00000108;
          uVar13 = in_stack_000000f0;
        }
        unaff_w28 = uStack00000000000000f8;
        (**(code **)(*(long *)(unaff_x29 + -0x90) + 0x20))(unaff_x29 + -0x78,uVar16,uVar17);
        if (uVar11 == 0) {
          in_stack_00000090 = in_stack_000000b0;
          *(undefined8 *)(unaff_x24 + 7) = *(undefined8 *)(unaff_x24 + 0x27);
          *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000b0;
          *(undefined8 *)(unaff_x29 + -0x89) = *(undefined8 *)(unaff_x24 + 7);
          uVar11 = uVar13 >> 8;
          uVar14 = 0xe;
          lVar8 = *(long *)(unaff_x29 + -0xf0);
          if (lVar8 < 4) {
            if (2 < lVar8 - 1U) goto LAB_1007291f0;
            goto LAB_100728a54;
          }
          goto LAB_100728a40;
        }
        uVar7 = 1;
      }
      bVar15 = false;
      in_stack_00000098 = in_stack_000000b8;
      in_stack_00000090 = in_stack_000000b0;
      *(undefined8 *)(unaff_x24 + 0xf) = *(undefined8 *)(unaff_x24 + 0x2f);
      in_stack_000000d8 = in_stack_000000b8;
      in_stack_000000d0 = in_stack_000000b0;
      *(undefined8 *)(unaff_x24 + 0x4f) = *(undefined8 *)(unaff_x24 + 0x2f);
      uVar3 = true;
      bVar5 = true;
      uVar11 = (ulong)CONCAT15(1,(uint5)CONCAT11(uVar7,1));
      bVar4 = true;
    }
    else {
      if (lVar8 == 1) {
        uVar10 = CONCAT71(uStack0000000000000029,uStack0000000000000028);
        *(ulong *)(unaff_x29 + -0x88) = CONCAT71(uStack0000000000000021,uStack0000000000000020);
        *(undefined1 **)(unaff_x29 + -0x90) = in_stack_00000018;
        *(ulong *)(unaff_x29 + -0x78) = CONCAT71(uStack0000000000000031,uStack0000000000000030);
        *(undefined8 *)(unaff_x29 + -0x80) = uVar10;
        *(undefined1 *)(unaff_x29 + -0x70) = 2;
        if (*(char *)(unaff_x20 + 0x170) == '\x02') {
          uVar7 = 0;
          uVar13 = *(ulong *)(unaff_x29 + -0x90);
          unaff_w28 = *(undefined1 *)(unaff_x29 + -0x88);
          in_stack_000000b8 = CONCAT17(uStack0000000000000030,uStack0000000000000029);
          in_stack_000000b0 = CONCAT17(uStack0000000000000028,uStack0000000000000021);
          *(ulong *)(unaff_x24 + 0x2f) = CONCAT71(uStack0000000000000031,uStack0000000000000030);
        }
        else {
          uVar16 = *(undefined8 *)(unaff_x29 + -0x88);
          uVar17 = *(undefined8 *)(unaff_x29 + -0x80);
          __ZN11tungstenite10extensions11compression7deflate14DeflateContext8compress17h63db49d0aa28d5dfE
                    (&stack0x000000f0,unaff_x20 + 0x138,uVar16,uVar17);
          uVar11 = in_stack_000000f0;
          if (in_stack_000000f0 == 0) {
            uVar13 = 0x21;
          }
          else {
            in_stack_000000b8 = *(undefined8 *)(unaff_x24 + 0x71);
            in_stack_000000b0 = *(undefined8 *)(unaff_x24 + 0x69);
            *(undefined8 *)(unaff_x24 + 0x2f) = in_stack_00000108;
            uVar13 = in_stack_000000f0;
          }
          unaff_w28 = uStack00000000000000f8;
          (**(code **)(*(long *)(unaff_x29 + -0x90) + 0x20))(unaff_x29 + -0x78,uVar16,uVar17);
          if (uVar11 == 0) {
            in_stack_00000090 = in_stack_000000b0;
            *(undefined8 *)(unaff_x24 + 7) = *(undefined8 *)(unaff_x24 + 0x27);
            *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000b0;
            *(undefined8 *)(unaff_x29 + -0x89) = *(undefined8 *)(unaff_x24 + 7);
            uVar11 = uVar13 >> 8;
            uVar14 = 0xe;
            if ((1L << (*(ulong *)(unaff_x29 + -0xf0) & 0x3f) & 0x2dU) != 0) goto LAB_100728a54;
            if (*(ulong *)(unaff_x29 + -0xf0) == 1) goto LAB_1007291f0;
            goto LAB_100728a48;
          }
          uVar7 = 1;
        }
        in_stack_00000098 = in_stack_000000b8;
        in_stack_00000090 = in_stack_000000b0;
        *(undefined8 *)(unaff_x24 + 0xf) = *(undefined8 *)(unaff_x24 + 0x2f);
        in_stack_000000d8 = in_stack_000000b8;
        in_stack_000000d0 = in_stack_000000b0;
        uVar3 = false;
        *(undefined8 *)(unaff_x24 + 0x4f) = *(undefined8 *)(unaff_x24 + 0x2f);
        uVar11 = (ulong)CONCAT15(2,(uint5)CONCAT11(uVar7,1));
        bVar4 = true;
      }
      else {
        bVar4 = false;
        uVar13 = *(ulong *)(unaff_x29 + -0xe8);
        unaff_w28 = *(undefined1 *)(unaff_x29 + -0xe0);
        in_stack_000000d8 = CONCAT17(uStack0000000000000030,uStack0000000000000029);
        in_stack_000000d0 = CONCAT17(uStack0000000000000028,uStack0000000000000021);
        *(ulong *)(unaff_x24 + 0x4f) = CONCAT71(uStack0000000000000031,uStack0000000000000030);
        uVar11 = 0x10100000001;
        uVar3 = true;
      }
      bVar5 = true;
      bVar15 = true;
    }
LAB_100728f6c:
    *(ulong *)(unaff_x29 + -0x90) = uVar13;
    *(undefined1 *)(unaff_x29 + -0x88) = unaff_w28;
    *(undefined8 *)(unaff_x29 + -0x7f) = in_stack_000000d8;
    *(undefined8 *)(unaff_x29 + -0x87) = in_stack_000000d0;
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x24 + 0x4f);
    *(ulong *)(unaff_x29 + -0x70) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar10;
    FUN_1006fdc5c(&stack0x000000f0,unaff_x20 + 0x30);
    uVar13 = _uStack00000000000000f8 & 0xff;
    if (in_stack_000000f0 == 0x15) {
      if ((_uStack00000000000000f8 & 1) == 0) goto LAB_100728a74;
      *(undefined1 *)(unaff_x29 + -0x70) = 2;
      FUN_1006fdc5c(&stack0x000000f0,unaff_x20 + 0x30);
      if (in_stack_000000f0 == 0x15) {
        if (*(ulong *)(unaff_x20 + 0x88) == 0) {
LAB_1007290b8:
          FUN_1011d2388();
          *(undefined1 *)(unaff_x20 + 0x179) = 0;
          goto LAB_100728a74;
        }
        lVar8 = *(long *)(unaff_x20 + 0x80);
        uVar11 = *(ulong *)(unaff_x20 + 0x88);
        while( true ) {
          auVar18 = FUN_1011d28cc();
          uVar13 = auVar18._8_8_;
          uVar14 = 0xb;
          if ((auVar18._0_8_ & 1) != 0) break;
          if (uVar13 == 0) {
            uVar13 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(3,&UNK_108caa935,0x1e);
            uVar14 = 0xb;
            break;
          }
          uVar14 = uVar11 - uVar13;
          if (uVar11 < uVar13) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (0,uVar13,uVar11,&UNK_10b238358);
LAB_1007293f0:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1007293f4);
            (*pcVar9)();
          }
          *(undefined8 *)(unaff_x20 + 0x88) = 0;
          if (uVar14 == 0) goto LAB_1007290b8;
          _memmove(lVar8,lVar8 + uVar13,uVar14);
          *(ulong *)(unaff_x20 + 0x88) = uVar14;
          uVar11 = uVar14;
        }
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x24 + 0x71);
        *(undefined8 *)(unaff_x24 + 0x97) = in_stack_00000108;
        uVar13 = _uStack00000000000000f8;
        uVar14 = in_stack_000000f0;
        unaff_w28 = uStack0000000000000100;
      }
      uVar11 = uVar13 >> 8;
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x100);
      *(undefined8 *)(unaff_x29 + -0x89) = *(undefined8 *)(unaff_x24 + 0x97);
      lVar8 = *(long *)(unaff_x29 + -0xf0);
    }
    else {
      uVar11 = (ulong)CONCAT34(CONCAT12(uStack00000000000000ff,*(undefined2 *)(unaff_x24 + 0x6d)),
                               *(undefined4 *)(unaff_x24 + 0x69));
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x24 + 0x71);
      *(undefined8 *)(unaff_x29 + -0x89) = in_stack_00000108;
      lVar8 = *(long *)(unaff_x29 + -0xf0);
      unaff_w28 = uStack0000000000000100;
      uVar14 = in_stack_000000f0;
    }
    if (lVar8 < 3) {
      bVar5 = bVar15;
      if ((lVar8 == 0) || (bVar5 = bVar4, lVar8 != 1)) goto joined_r0x0001007290b0;
    }
    else {
      if (lVar8 == 3) goto LAB_100728a54;
      if (lVar8 == 4) goto LAB_100728a48;
joined_r0x0001007290b0:
      uVar3 = bVar5;
    }
    if (!(bool)uVar3) goto LAB_1007291f0;
LAB_100728a54:
    (**(code **)(*(long *)(unaff_x29 + -0xe8) + 0x20))
              (unaff_x29 + -0xd0,*(undefined8 *)(unaff_x29 + -0xe0),
               *(undefined8 *)(unaff_x29 + -0xd8));
  }
  else {
    if (*(char *)(unaff_x20 + 0x17a) == '\x04') {
      uVar14 = 10;
    }
    else {
      uVar14 = 0xe;
    }
    uVar11 = 0;
    lVar8 = *(long *)(unaff_x29 + -0xf0);
    uVar13 = 0x11;
LAB_100728a40:
    if (lVar8 != 4) goto LAB_100728a54;
LAB_100728a48:
    if (*(short *)(unaff_x29 + -200) != 0x12) goto LAB_100728a54;
  }
LAB_100728a6c:
  if (uVar14 == 0x15) {
LAB_100728a74:
    *(undefined1 *)(unaff_x20 + 0x182) = 1;
    *unaff_x19 = 0x15;
    return;
  }
LAB_1007291f0:
  uVar11 = uVar13 & 0xff | uVar11 << 8;
  if ((uVar14 == 0xb) && (cVar6 = FUN_100c355d4(uVar11), cVar6 == '\r')) {
    *(undefined1 *)(unaff_x20 + 0x182) = 0;
    *unaff_x19 = 0x15;
    if ((uVar13 & 3) != 1) {
      return;
    }
    uVar10 = *(undefined8 *)(uVar11 - 1);
    puVar12 = *(undefined8 **)(uVar11 + 7);
    pcVar9 = (code *)*puVar12;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar10);
    }
    if (puVar12[1] != 0) {
      _free(uVar10);
    }
    _free((undefined8 *)(uVar11 - 1));
    return;
  }
  uStack0000000000000061 = (undefined7)*(undefined8 *)(unaff_x29 + -0x90);
  in_stack_00000068 = (undefined1)*(undefined8 *)(unaff_x29 + -0x89);
  uStack0000000000000069 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x89) >> 8);
  *(undefined1 *)(unaff_x20 + 0x182) = 1;
  in_stack_00000050 = uVar14;
  in_stack_00000058 = uVar11;
  in_stack_00000060 = unaff_w28;
  if (3 < *unaff_x26) {
    in_stack_00000010 = &stack0x00000050;
    in_stack_00000018 =
         &
         __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
    ;
    *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cab0bd;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0x11;
    *(char **)(unaff_x29 + -0xa0) = s_websocket_start_send_error__108ac570a;
    *(undefined8 ***)(unaff_x29 + -0x98) = &stack0x00000010;
    *(undefined8 *)(unaff_x29 + -0xf0) = 0;
    *(undefined **)(unaff_x29 + -0xe8) = &UNK_108cab0bd;
    *(undefined8 *)(unaff_x29 + -0xd8) = 0;
    *(undefined8 *)(unaff_x29 + -0xe0) = 0x11;
    *(char **)(unaff_x29 + -0xd0) =
         "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/lib.rs";
    *(undefined8 *)(unaff_x24 + 0xd0) = 4;
    *(undefined8 *)(unaff_x24 + 200) = 0x58;
    *(undefined8 *)(unaff_x29 + -0xa8) = 0x16900000001;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    (**(code **)(puVar1 + 0x20))(puVar2,unaff_x29 + -0xf0);
  }
  unaff_x19[1] = in_stack_00000058;
  *unaff_x19 = in_stack_00000050;
  unaff_x19[3] = CONCAT71(uStack0000000000000069,in_stack_00000068);
  unaff_x19[2] = CONCAT71(uStack0000000000000061,in_stack_00000060);
  return;
}

