
void FUN_10032bcbc(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 uVar7;
  undefined1 uVar8;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *in_stack_00000008;
  char cStack00000000000000f0;
  undefined1 uStack00000000000000f1;
  undefined1 uStack00000000000000f2;
  undefined5 uStack00000000000000f3;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined5 uStack0000000000000150;
  undefined3 uStack0000000000000155;
  undefined5 uStack0000000000000158;
  undefined3 uStack000000000000015d;
  undefined5 uStack0000000000000160;
  undefined3 uStack0000000000000165;
  undefined5 uStack0000000000000168;
  undefined3 uStack000000000000016d;
  undefined5 uStack0000000000000170;
  undefined3 uStack0000000000000175;
  undefined5 uStack0000000000000178;
  undefined3 uStack000000000000017d;
  undefined5 uStack0000000000000180;
  undefined3 uStack0000000000000185;
  undefined5 uStack0000000000000188;
  undefined3 uStack000000000000018d;
  undefined5 in_stack_00000190;
  undefined5 uStack00000000000001a0;
  undefined3 uStack00000000000001a5;
  undefined5 uStack00000000000001a8;
  undefined3 uStack00000000000001ad;
  undefined5 uStack00000000000001b0;
  undefined3 uStack00000000000001b5;
  undefined5 uStack00000000000001b8;
  undefined3 uStack00000000000001bd;
  undefined5 uStack00000000000001c0;
  undefined3 uStack00000000000001c5;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined5 uStack00000000000001d8;
  undefined3 uStack00000000000001dd;
  undefined5 in_stack_000001e0;
  ulong in_stack_00000358;
  undefined1 in_stack_00000360;
  undefined1 in_stack_00000361;
  undefined6 in_stack_00000362;
  long in_stack_00000368;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003f0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000358,s___108ab8993,&stack0x00000300);
  uVar11 = CONCAT62(in_stack_00000362,CONCAT11(in_stack_00000361,in_stack_00000360));
  (**(code **)(*(long *)(unaff_x29 + -0xc0) + 0x20))
            (unaff_x29 + -0xa8,*(undefined8 *)(unaff_x29 + -0xb8),*(undefined8 *)(unaff_x29 + -0xb0)
            );
  uVar8 = (undefined1)((ulong)in_stack_000003a0 >> 8);
  uVar7 = (undefined1)((ulong)in_stack_000003a0 >> 0x10);
  *(undefined8 *)(unaff_x28 + 0x4d) = in_stack_000003f0;
  if (unaff_w26 != 4) {
    puVar6 = (undefined8 *)((ulong)&stack0x000003a0 | 3);
    uVar9 = puVar6[4];
    uVar10 = puVar6[7];
    uVar12 = puVar6[6];
    *(undefined8 *)(unaff_x29 + -0x95) = puVar6[5];
    *(undefined8 *)(unaff_x29 + -0x9d) = uVar9;
    *(undefined8 *)(unaff_x29 + -0x85) = uVar10;
    *(undefined8 *)(unaff_x29 + -0x8d) = uVar12;
    uVar9 = puVar6[8];
    *(undefined8 *)(unaff_x29 + -0x75) = puVar6[9];
    *(undefined8 *)(unaff_x29 + -0x7d) = uVar9;
    uVar9 = *puVar6;
    uVar10 = puVar6[3];
    uVar12 = puVar6[2];
    *(undefined8 *)(unaff_x29 + -0xb5) = puVar6[1];
    *(undefined8 *)(unaff_x29 + -0xbd) = uVar9;
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)((long)puVar6 + 0x4d);
    *(undefined8 *)(unaff_x29 + -0xa5) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xad) = uVar12;
    *(char *)(unaff_x29 + -0xc0) = (char)unaff_w26;
    *(undefined1 *)(unaff_x29 + -0xbf) = uVar8;
    *(undefined1 *)(unaff_x29 + -0xbe) = uVar7;
    if (in_stack_00000368 != 0) {
      lVar4 = _malloc(in_stack_00000368);
      if (lVar4 == 0) {
        FUN_107c03c64(1,in_stack_00000368);
        goto LAB_10032c1a4;
      }
      _memcpy(lVar4,uVar11,in_stack_00000368);
    }
    __ZN4http3uri4path12PathAndQuery11from_shared17h0fd9feee435985a3E
              (&stack0x00000358,&stack0x00000380);
    if (in_stack_00000358 == 0) {
      FUN_100331f18(unaff_x29 + -0xc0);
      uVar8 = 2;
      uVar7 = in_stack_00000360;
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x28 + 0x6a);
      uVar9 = *(undefined8 *)(unaff_x28 + 0x62);
      *(undefined8 *)(unaff_x28 + 0x96) = *(undefined8 *)(unaff_x28 + 0x78);
      *(undefined8 *)(unaff_x28 + 0x8e) = *(undefined8 *)(unaff_x28 + 0x70);
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        (**(code **)(*(long *)(unaff_x29 + -0x90) + 0x20))
                  (unaff_x29 + -0x78,*(undefined8 *)(unaff_x29 + -0x88),
                   *(undefined8 *)(unaff_x29 + -0x80));
        unaff_w26 = (uint)*(byte *)(unaff_x29 + -0xc0);
        uVar8 = *(undefined1 *)(unaff_x29 + -0xbf);
        uVar7 = *(undefined1 *)(unaff_x29 + -0xbe);
      }
      *(ulong *)(unaff_x29 + -0x90) = in_stack_00000358;
      puVar6 = (undefined8 *)(unaff_x29 - 0xc0U | 3);
      *(undefined1 *)(unaff_x29 + -0x88) = in_stack_00000360;
      *(undefined1 *)(unaff_x29 + -0x87) = in_stack_00000361;
      *(undefined8 *)(unaff_x29 + -0x7e) = uVar12;
      *(undefined8 *)(unaff_x29 + -0x86) = uVar9;
      uVar9 = *(undefined8 *)(unaff_x28 + 0x8e);
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x28 + 0x96);
      *(undefined8 *)(unaff_x29 + -0x78) = uVar9;
      uVar13 = puVar6[5];
      uVar9 = puVar6[4];
      uVar18 = puVar6[7];
      uVar16 = puVar6[6];
      uVar14 = puVar6[9];
      uVar12 = puVar6[8];
      *(undefined8 *)(unaff_x28 + 0x4d) = *(undefined8 *)((long)puVar6 + 0x4d);
      uVar15 = puVar6[1];
      uVar10 = *puVar6;
      uVar19 = puVar6[3];
      uVar17 = puVar6[2];
      if (unaff_w26 != 4) {
        *(undefined8 *)(unaff_x28 + 0xcb) = uVar13;
        *(undefined8 *)(unaff_x28 + 0xc3) = uVar9;
        *(undefined8 *)(unaff_x28 + 0xdb) = uVar18;
        *(undefined8 *)(unaff_x28 + 0xd3) = uVar16;
        *(undefined8 *)(unaff_x28 + 0xeb) = uVar14;
        *(undefined8 *)(unaff_x28 + 0xe3) = uVar12;
        *(undefined8 *)(unaff_x28 + 0xab) = uVar15;
        *(undefined8 *)(unaff_x28 + 0xa3) = uVar10;
        *(undefined8 *)(unaff_x28 + 0xbb) = uVar19;
        *(undefined8 *)(unaff_x28 + 0xb3) = uVar17;
        __ZN4http3uri3Uri10from_parts17h6e34d4eb1058be1fE(unaff_x29 + -0xc0,&stack0x000003a0);
        cVar1 = *(char *)(unaff_x29 + -0xc0);
        uVar7 = *(undefined1 *)(unaff_x29 + -0xbf);
        if (cVar1 != '\x03') {
          uStack00000000000000f2 = *(undefined1 *)(unaff_x29 + -0xbe);
          in_stack_000001e0 = (undefined5)((ulong)*(undefined8 *)(unaff_x29 + -0x80) >> 0x18);
          uVar12 = *(undefined8 *)(unaff_x29 + -0x85);
          in_stack_000001d0 = *(undefined8 *)(unaff_x29 + -0x8d);
          uVar14 = *(undefined8 *)(unaff_x29 + -0xa5);
          uVar13 = *(undefined8 *)(unaff_x29 + -0xad);
          in_stack_000001c8 = *(undefined8 *)(unaff_x29 + -0x95);
          uVar15 = *(undefined8 *)(unaff_x29 + -0x9d);
          uStack00000000000001c0 = (undefined5)uVar15;
          uStack00000000000001c5 = (undefined3)((ulong)uVar15 >> 0x28);
          uStack00000000000001d8 = (undefined5)uVar12;
          uStack00000000000001dd = (undefined3)((ulong)uVar12 >> 0x28);
          uVar10 = *(undefined8 *)(unaff_x29 + -0xb5);
          uVar9 = *(undefined8 *)(unaff_x29 + -0xbd);
          uStack00000000000001a8 = (undefined5)uVar10;
          uStack00000000000001ad = (undefined3)((ulong)uVar10 >> 0x28);
          uStack00000000000001a0 = (undefined5)uVar9;
          uStack00000000000001a5 = (undefined3)((ulong)uVar9 >> 0x28);
          uStack00000000000001b8 = (undefined5)uVar14;
          uStack00000000000001bd = (undefined3)((ulong)uVar14 >> 0x28);
          uStack00000000000001b0 = (undefined5)uVar13;
          uStack00000000000001b5 = (undefined3)((ulong)uVar13 >> 0x28);
          uVar17 = *(undefined8 *)(unaff_x29 + -0x70);
          uVar16 = *(undefined8 *)(unaff_x29 + -0x78);
          in_stack_00000190 = in_stack_000001e0;
          uStack0000000000000178 = (undefined5)in_stack_000001c8;
          uStack000000000000017d = (undefined3)((ulong)in_stack_000001c8 >> 0x28);
          uStack0000000000000180 = (undefined5)in_stack_000001d0;
          uStack0000000000000185 = (undefined3)((ulong)in_stack_000001d0 >> 0x28);
          *(undefined8 *)(unaff_x27 + 0x83) = uVar10;
          *(undefined8 *)(unaff_x27 + 0x7b) = uVar9;
          in_stack_00000130 = CONCAT53(in_stack_000001e0,uStack00000000000001dd);
          *(undefined8 *)(unaff_x27 + 0xb3) = uVar12;
          *(undefined8 *)(unaff_x27 + 0xab) = in_stack_000001d0;
          *(undefined8 *)(unaff_x27 + 0xa3) = in_stack_000001c8;
          *(undefined8 *)(unaff_x27 + 0x9b) = uVar15;
          *(undefined8 *)(unaff_x27 + 0x93) = uVar14;
          *(undefined8 *)(unaff_x27 + 0x8b) = uVar13;
          *(undefined8 *)(unaff_x27 + 200) = uVar17;
          *(undefined8 *)(unaff_x27 + 0xc0) = uVar16;
          cStack00000000000000f0 = cVar1;
          uStack00000000000000f1 = uVar7;
          uStack0000000000000150 = uStack00000000000001a0;
          uStack0000000000000155 = uStack00000000000001a5;
          uStack0000000000000158 = uStack00000000000001a8;
          uStack000000000000015d = uStack00000000000001ad;
          uStack0000000000000160 = uStack00000000000001b0;
          uStack0000000000000165 = uStack00000000000001b5;
          uStack0000000000000168 = uStack00000000000001b8;
          uStack000000000000016d = uStack00000000000001bd;
          uStack0000000000000170 = uStack00000000000001c0;
          uStack0000000000000175 = uStack00000000000001c5;
          uStack0000000000000188 = uStack00000000000001d8;
          uStack000000000000018d = uStack00000000000001dd;
          if ((in_stack_00000358 & 0x7fffffffffffffff) != 0) {
            _free(uVar11);
          }
          *(undefined8 *)(unaff_x29 + -0xb0) = 0x60000020;
          *(undefined1 **)(unaff_x29 + -0xc0) = &stack0x000003a0;
          *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b2015d8;
          iVar3 = __ZN53__LT_http__uri__Uri_u20_as_u20_core__fmt__Display_GT_3fmt17h7daf1b361563a444E
                            (&stack0x000000f0,unaff_x29 + -0xc0);
          if (iVar3 == 0) {
            if (unaff_x20[0xc] != 0) {
              _free(unaff_x20[0xd]);
            }
            unaff_x20[0xd] = 1;
            unaff_x20[0xc] = 0;
            unaff_x20[0xe] = 0;
            *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000118;
            *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000110;
            *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000128;
            *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000120;
            *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000138;
            *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000130;
            *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000140;
            *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_000000f8;
            *(ulong *)(unaff_x29 + -0xc0) =
                 CONCAT53(uStack00000000000000f3,
                          CONCAT12(uStack00000000000000f2,
                                   CONCAT11(uStack00000000000000f1,cStack00000000000000f0)));
            *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000108;
            *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000100;
            FUN_100331e10(in_stack_00000008);
            *unaff_x20 = 0;
            uVar11 = *(undefined8 *)(unaff_x29 + -0xa0);
            uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
            uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
            in_stack_00000008[5] = *(undefined8 *)(unaff_x29 + -0x98);
            in_stack_00000008[4] = uVar11;
            in_stack_00000008[7] = uVar12;
            in_stack_00000008[6] = uVar9;
            uVar11 = *(undefined8 *)(unaff_x29 + -0x80);
            in_stack_00000008[9] = *(undefined8 *)(unaff_x29 + -0x78);
            in_stack_00000008[8] = uVar11;
            in_stack_00000008[10] = *(undefined8 *)(unaff_x29 + -0x70);
            uVar11 = *(undefined8 *)(unaff_x29 + -0xc0);
            uVar12 = *(undefined8 *)(unaff_x29 + -0xa8);
            uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
            in_stack_00000008[1] = *(undefined8 *)(unaff_x29 + -0xb8);
            *in_stack_00000008 = uVar11;
            in_stack_00000008[3] = uVar12;
            in_stack_00000008[2] = uVar9;
            *unaff_x19 = 0x8000000000000008;
            return;
          }
          FUN_107c05cb4(&UNK_108c82428,0x37,&stack0x00000300,&UNK_10b201690,&UNK_10b201608);
          goto LAB_10032c1a4;
        }
        uVar8 = 3;
      }
    }
  }
  *(undefined8 *)(unaff_x29 + -0xc0) = 0x8000000000000005;
  puVar5 = (undefined1 *)_malloc(2);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = uVar8;
    puVar5[1] = uVar7;
    uVar13 = *(undefined8 *)(unaff_x29 + -0x98);
    uVar10 = *(undefined8 *)(unaff_x29 + -0xa0);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar17 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar16 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
    uStack00000000000001ad = (undefined3)uVar17;
    uStack00000000000001b0 = (undefined5)((ulong)uVar17 >> 0x18);
    uStack00000000000001a5 = (undefined3)uVar16;
    uStack00000000000001a8 = (undefined5)((ulong)uVar16 >> 0x18);
    uStack00000000000001bd = (undefined3)uVar15;
    uStack00000000000001c0 = (undefined5)((ulong)uVar15 >> 0x18);
    uStack00000000000001b5 = (undefined3)uVar14;
    uStack00000000000001b8 = (undefined5)((ulong)uVar14 >> 0x18);
    uStack000000000000017d = (undefined3)uVar13;
    uStack0000000000000180 = (undefined5)((ulong)uVar13 >> 0x18);
    uStack0000000000000175 = (undefined3)uVar10;
    uStack0000000000000178 = (undefined5)((ulong)uVar10 >> 0x18);
    uStack000000000000018d = (undefined3)uVar12;
    in_stack_00000190 = (undefined5)((ulong)uVar12 >> 0x18);
    uStack0000000000000185 = (undefined3)uVar9;
    uStack0000000000000188 = (undefined5)((ulong)uVar9 >> 0x18);
    unaff_x19[5] = uVar13;
    unaff_x19[4] = uVar10;
    unaff_x19[7] = uVar12;
    unaff_x19[6] = uVar9;
    unaff_x19[1] = uVar17;
    *unaff_x19 = uVar16;
    unaff_x19[3] = uVar15;
    unaff_x19[2] = uVar14;
    unaff_x19[8] = puVar5;
    unaff_x19[9] = &UNK_10b200a68;
    if ((in_stack_00000358 & 0x7fffffffffffffff) != 0) {
      uStack0000000000000155 = uStack00000000000001a5;
      uStack0000000000000158 = uStack00000000000001a8;
      uStack000000000000015d = uStack00000000000001ad;
      uStack0000000000000160 = uStack00000000000001b0;
      uStack0000000000000165 = uStack00000000000001b5;
      uStack0000000000000168 = uStack00000000000001b8;
      uStack000000000000016d = uStack00000000000001bd;
      uStack0000000000000170 = uStack00000000000001c0;
      _free(uVar11);
    }
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,2);
LAB_10032c1a4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10032c1a8);
  (*pcVar2)();
}

