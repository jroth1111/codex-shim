
/* WARNING: Switch with 1 destination removed at 0x00010042a5a8 */

void FUN_10042a178(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined7 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  code *pcVar10;
  long *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 *in_stack_00000008;
  ulong *in_stack_00000018;
  long *in_stack_00000020;
  ulong *in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  undefined1 uStack0000000000000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  undefined *in_stack_00000090;
  undefined *in_stack_00000098;
  int *in_stack_000000a0;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long *in_stack_000000c0;
  char cStack0000000000000178;
  undefined7 uStack0000000000000179;
  undefined1 uStack0000000000000180;
  undefined7 uStack0000000000000181;
  undefined1 uStack0000000000000188;
  undefined7 uStack0000000000000189;
  undefined1 uStack0000000000000190;
  undefined7 uStack0000000000000191;
  long *in_stack_00000198;
  undefined *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined *in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  long *in_stack_000001d8;
  undefined1 uStack00000000000001e0;
  undefined1 uStack00000000000001e1;
  undefined5 uStack00000000000001e2;
  char cStack00000000000001e7;
  undefined7 uStack00000000000001e8;
  undefined1 uStack00000000000001ef;
  char cVar21;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  long *in_stack_00000260;
  long in_stack_00000268;
  long *plVar22;
  char cVar23;
  undefined *in_stack_00000290;
  undefined *in_stack_00000298;
  long *in_stack_000002b0;
  long *plVar24;
  long *in_stack_000002b8;
  undefined8 *in_stack_000002c0;
  long *in_stack_000002c8;
  undefined7 in_stack_000002d1;
  undefined *in_stack_000002f0;
  undefined *puVar25;
  undefined *in_stack_000002f8;
  int *in_stack_00000300;
  int *piVar26;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_00000388;
  long in_stack_00000390;
  long in_stack_00000398;
  long in_stack_000003a0;
  long in_stack_000003a8;
  long in_stack_000003b0;
  long in_stack_000003b8;
  long in_stack_000003c0;
  long in_stack_000003c8;
  long in_stack_000003d0;
  long in_stack_000003d8;
  long in_stack_000003e0;
  long in_stack_000003e8;
  long in_stack_000003f0;
  
code_r0x00010042a178:
  uVar6 = thunk_FUN_108856088(s_missing_field_____108ac28f7,param_2);
  uStack0000000000000180 = (undefined1)uVar6;
  uStack0000000000000181 = (undefined7)((ulong)uVar6 >> 8);
code_r0x00010042a188:
  cVar23 = '\x0f';
  uVar5 = uStack0000000000000180;
  puVar11 = in_stack_000002c0;
code_r0x00010042a18c:
  uStack0000000000000180 = uVar5;
  lVar13 = ((ulong)((long)unaff_x19 - (long)unaff_x28) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar13 = lVar13 + -1, lVar13 != 0) {
    FUN_100de6690(unaff_x28);
    unaff_x28 = unaff_x28 + 9;
  }
  if (puVar11 != (undefined8 *)0x0) {
    _free(in_stack_000002b0);
  }
  plVar7 = (long *)CONCAT71(uStack0000000000000181,uStack0000000000000180);
  plVar24 = in_stack_000002b0;
  while (cVar23 != '\x0f') {
    while( true ) {
      in_stack_000001d0 = CONCAT71(uStack0000000000000191,uStack0000000000000190);
      in_stack_000001c8 = CONCAT71(uStack0000000000000189,uStack0000000000000188);
      in_stack_000001d8 = in_stack_00000198;
      in_stack_000001c0 = plVar7;
      func_0x00010047e5e8(&stack0x000000b8,&stack0x000001c0);
      plVar7 = in_stack_000000c0;
      if (in_stack_000000b8 == 0x11) goto LAB_10042a900;
      in_stack_00000098 = *(undefined **)(unaff_x26 + 0x10);
      in_stack_00000090 = *(undefined **)(unaff_x26 + 8);
      uVar6 = *(undefined8 *)(unaff_x26 + 0x80);
      uVar19 = *(undefined8 *)(unaff_x26 + 0x98);
      uVar18 = *(undefined8 *)(unaff_x26 + 0x90);
      *(undefined8 *)(unaff_x27 + 0x80) = *(undefined8 *)(unaff_x26 + 0x88);
      *(undefined8 *)(unaff_x27 + 0x78) = uVar6;
      *(undefined8 *)(unaff_x27 + 0x90) = uVar19;
      *(undefined8 *)(unaff_x27 + 0x88) = uVar18;
      uVar6 = *(undefined8 *)(unaff_x26 + 0xa0);
      uVar19 = *(undefined8 *)(unaff_x26 + 0xb8);
      uVar18 = *(undefined8 *)(unaff_x26 + 0xb0);
      *(undefined8 *)(unaff_x27 + 0xa0) = *(undefined8 *)(unaff_x26 + 0xa8);
      *(undefined8 *)(unaff_x27 + 0x98) = uVar6;
      *(undefined8 *)(unaff_x27 + 0xb0) = uVar19;
      *(undefined8 *)(unaff_x27 + 0xa8) = uVar18;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x40);
      uVar19 = *(undefined8 *)(unaff_x26 + 0x58);
      uVar18 = *(undefined8 *)(unaff_x26 + 0x50);
      *(undefined8 *)(unaff_x27 + 0x40) = *(undefined8 *)(unaff_x26 + 0x48);
      *(undefined8 *)(unaff_x27 + 0x38) = uVar6;
      *(undefined8 *)(unaff_x27 + 0x50) = uVar19;
      *(undefined8 *)(unaff_x27 + 0x48) = uVar18;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x60);
      uVar19 = *(undefined8 *)(unaff_x26 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x26 + 0x70);
      *(undefined8 *)(unaff_x27 + 0x60) = *(undefined8 *)(unaff_x26 + 0x68);
      *(undefined8 *)(unaff_x27 + 0x58) = uVar6;
      *(undefined8 *)(unaff_x27 + 0x70) = uVar19;
      *(undefined8 *)(unaff_x27 + 0x68) = uVar18;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x20);
      uVar19 = *(undefined8 *)(unaff_x26 + 0x38);
      uVar18 = *(undefined8 *)(unaff_x26 + 0x30);
      *(undefined8 *)(unaff_x27 + 0x20) = *(undefined8 *)(unaff_x26 + 0x28);
      *(undefined8 *)(unaff_x27 + 0x18) = uVar6;
      in_stack_000000a0 = *(int **)(unaff_x26 + 0x18);
      *(undefined8 *)(unaff_x27 + 0x30) = uVar19;
      *(undefined8 *)(unaff_x27 + 0x28) = uVar18;
      unaff_x25 = unaff_x25 + 1;
      *(long *)(in_stack_00000038 + 0x20) = unaff_x25;
      if (in_stack_000000b8 != 0x12) {
        in_stack_00000020[0x12] = in_stack_000003c8;
        in_stack_00000020[0x11] = in_stack_000003c0;
        in_stack_00000020[0x14] = in_stack_000003d8;
        in_stack_00000020[0x13] = in_stack_000003d0;
        in_stack_00000020[0x16] = in_stack_000003e8;
        in_stack_00000020[0x15] = in_stack_000003e0;
        in_stack_00000020[10] = in_stack_00000388;
        in_stack_00000020[9] = in_stack_00000380;
        in_stack_00000020[0xc] = in_stack_00000398;
        in_stack_00000020[0xb] = in_stack_00000390;
        in_stack_00000020[0xe] = in_stack_000003a8;
        in_stack_00000020[0xd] = in_stack_000003a0;
        in_stack_00000020[0x10] = in_stack_000003b8;
        in_stack_00000020[0xf] = in_stack_000003b0;
        in_stack_00000020[2] = (long)in_stack_00000098;
        in_stack_00000020[1] = (long)in_stack_00000090;
        in_stack_00000020[4] = in_stack_00000358;
        in_stack_00000020[3] = (long)in_stack_000000a0;
        in_stack_00000020[6] = in_stack_00000368;
        in_stack_00000020[5] = in_stack_00000360;
        in_stack_00000020[0x17] = in_stack_000003f0;
        in_stack_00000020[8] = in_stack_00000378;
        in_stack_00000020[7] = in_stack_00000370;
        goto code_r0x00010042a9c8;
      }
      if (unaff_x21 == in_stack_00000030) goto code_r0x00010042a9c0;
      in_stack_00000058 = unaff_x21[3];
      in_stack_00000050 = unaff_x21[2];
      in_stack_00000068 = unaff_x21[5];
      in_stack_00000060 = unaff_x21[4];
      in_stack_00000078 = unaff_x21[7];
      uVar20 = unaff_x21[6];
      in_stack_00000080 = unaff_x21[8];
      _uStack0000000000000048 = unaff_x21[1];
      in_stack_00000040 = *unaff_x21;
      in_stack_000002c0 = (undefined8 *)unaff_x21[1];
      in_stack_000002b0 = (long *)unaff_x21[2];
      uVar3 = unaff_x21[3];
      uVar8 = unaff_x21[4];
      unaff_x21 = unaff_x21 + 9;
      *(ulong **)(in_stack_00000038 + 8) = unaff_x21;
      in_stack_000001a0 = &UNK_108cde34c;
      in_stack_000001a8 = 4;
      in_stack_000001b0 = &UNK_108cae54a;
      in_stack_000001b8 = 0x23;
      uVar12 = in_stack_00000040 ^ 0x8000000000000000;
      if (-1 < (long)in_stack_00000040) {
        uVar12 = 5;
      }
      in_stack_00000070 = uVar20;
      in_stack_000000b0 = unaff_x25;
      if ((long)uVar12 < 4) break;
      if (uVar12 == 4) {
        unaff_x19 = in_stack_000002b0 + uVar3 * 9;
        unaff_x28 = in_stack_000002b0;
        in_stack_000002c8 = unaff_x19;
        if (uVar3 != 0) {
          unaff_x28 = in_stack_000002b0 + 9;
          lVar13 = *in_stack_000002b0;
          if (lVar13 != unaff_x20) {
            uStack00000000000001e0 = (undefined1)lVar13;
            uStack00000000000001e1 = (undefined1)((ulong)lVar13 >> 8);
            uStack00000000000001e2 = (undefined5)((ulong)lVar13 >> 0x10);
            cStack00000000000001e7 = (char)((ulong)lVar13 >> 0x38);
            lVar16 = in_stack_000002b0[2];
            lVar15 = in_stack_000002b0[1];
            uStack00000000000001e8 = (undefined7)lVar15;
            uStack00000000000001ef = (undefined1)((ulong)lVar15 >> 0x38);
            if (lVar13 == -0x7ffffffffffffffd) {
              func_0x000100ac58fc(&stack0x00000290,lVar16,in_stack_000002b0[3]);
              if (lVar15 != 0) {
                _free(lVar16);
              }
            }
            else {
              in_stack_00000298 =
                   (undefined *)
                   func_0x000107c0565c(&stack0x000001e0,unaff_x29 + -0x61,&UNK_10b2127a0);
              in_stack_00000290 = (undefined *)CONCAT71((int7)((ulong)in_stack_00000290 >> 8),1);
              FUN_100de6690(&stack0x000001e0);
            }
            in_stack_000002b8 = unaff_x28;
            if ((char)in_stack_00000290 == '\x01') {
              uStack0000000000000180 = SUB81(in_stack_00000298,0);
              uStack0000000000000181 = (undefined7)((ulong)in_stack_00000298 >> 8);
              goto code_r0x00010042a188;
            }
            cVar23 = (char)((ulong)in_stack_00000290 >> 8);
            func_0x0001013f0180(&stack0x00000250,&stack0x000002b0);
            uVar4 = uStack0000000000000181;
            uVar5 = uStack0000000000000180;
            cVar21 = (char)in_stack_00000250;
            uStack0000000000000180 = (undefined1)in_stack_00000258;
            uStack0000000000000181 = (undefined7)((ulong)in_stack_00000258 >> 8);
            if (cVar21 == '\x16') goto code_r0x00010042a188;
            uStack00000000000001e8 = (undefined7)((ulong)in_stack_00000250 >> 8);
            in_stack_00000008[1] = CONCAT17(uStack0000000000000180,uStack00000000000001e8);
            *in_stack_00000008 =
                 CONCAT17(cVar21,CONCAT52(uStack00000000000001e2,
                                          CONCAT11(uStack00000000000001e1,uStack00000000000001e0)));
            in_stack_00000008[3] =
                 CONCAT17((char)in_stack_00000268,(int7)((ulong)in_stack_00000260 >> 8));
            in_stack_00000008[2] = CONCAT17((char)in_stack_00000260,uStack0000000000000181);
            *(long *)((long)in_stack_00000008 + 0x1f) = in_stack_00000268;
            in_stack_000002f8 = (undefined *)CONCAT71(uVar4,uVar5);
            in_stack_000002f0 = (undefined *)CONCAT71(uStack0000000000000179,cVar23);
            in_stack_00000300 = (int *)CONCAT71(uStack0000000000000189,uStack0000000000000188);
            cStack0000000000000178 = cVar23;
            uStack0000000000000181 = uVar4;
            cStack00000000000001e7 = cVar21;
            uStack00000000000001ef = uStack0000000000000180;
            puVar11 = in_stack_000002c0;
            if (unaff_x19 == unaff_x28) goto code_r0x00010042a18c;
            uStack0000000000000180 = uVar5;
            uVar6 = thunk_FUN_1087e422c(uVar3,&UNK_10b21cb80,&UNK_10b20a590);
            uStack0000000000000180 = (undefined1)uVar6;
            uStack0000000000000181 = (undefined7)((ulong)uVar6 >> 8);
            FUN_100e077ec(&stack0x000002f8);
            goto code_r0x00010042a188;
          }
        }
        in_stack_00000290 = &UNK_108cde34c;
        in_stack_00000298 = (undefined *)0x4;
        uStack00000000000001e0 = SUB81(&stack0x00000290,0);
        uStack00000000000001e1 = (undefined1)((ulong)&stack0x00000290 >> 8);
        uStack00000000000001e2 = (undefined5)((ulong)&stack0x00000290 >> 0x10);
        cStack00000000000001e7 = (char)((ulong)&stack0x00000290 >> 0x38);
        uStack00000000000001e8 = 0x100c7b3a0;
        uStack00000000000001ef = 0;
        param_2 = (undefined8 *)&stack0x000001e0;
        in_stack_000002b8 = unaff_x28;
        goto code_r0x00010042a178;
      }
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(uVar3 + uVar8 * -8 + -8);
      }
      lVar13 = (long)in_stack_000002b0 * 0x68;
      puVar14 = in_stack_000002c0 + (long)in_stack_000002b0 * 0xd;
      uStack00000000000001e0 = (undefined1)unaff_x20;
      uStack00000000000001e1 = (undefined1)((ulong)unaff_x20 >> 8);
      uStack00000000000001e2 = (undefined5)((ulong)unaff_x20 >> 0x10);
      cStack00000000000001e7 = (char)((ulong)unaff_x20 >> 0x38);
      in_stack_00000260 = in_stack_000002b0;
      if ((long *)0x3fff < in_stack_000002b0) {
        in_stack_00000260 = (long *)0x4000;
      }
      cVar23 = cStack0000000000000178;
      plVar7 = in_stack_00000198;
      if (in_stack_000002b0 == (long *)0x0) {
code_r0x00010042a200:
        in_stack_00000198 = plVar7;
        cStack0000000000000178 = cVar23;
        in_stack_000002f8 = &DAT_100c7b3a0;
        uVar6 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
        in_stack_000002f0 = &stack0x000002b0;
LAB_10042a238:
        uStack0000000000000180 = (undefined1)uVar6;
        uStack0000000000000181 = (undefined7)((ulong)uVar6 >> 8);
LAB_10042a53c:
        FUN_100d03040(&stack0x00000278);
        FUN_100de8910(&stack0x00000228);
        if (CONCAT17(cStack00000000000001e7,
                     CONCAT52(uStack00000000000001e2,
                              CONCAT11(uStack00000000000001e1,uStack00000000000001e0))) != unaff_x20
           ) {
          FUN_100de6690(&stack0x000001e0);
        }
        plVar7 = (long *)CONCAT71(uStack0000000000000181,uStack0000000000000180);
        goto LAB_10042a900;
      }
      in_stack_00000268 = _malloc((long)in_stack_00000260 << 6);
      if (in_stack_00000268 == 0) {
        FUN_107c03c64(8,(long)in_stack_00000260 << 6);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10042aa28);
        (*pcVar10)();
      }
      plVar22 = (long *)0x0;
      puVar9 = (undefined *)*in_stack_000002c0;
      if (puVar9 == (undefined *)0x8000000000000000) {
        cVar21 = '\x0f';
      }
      else {
        cVar21 = '\x0f';
        puVar25 = in_stack_000002f0;
        piVar26 = in_stack_00000300;
        do {
          lVar13 = lVar13 + -0x68;
          piVar2 = (int *)in_stack_000002c0[1];
          lVar15 = in_stack_000002c0[2];
          puVar17 = (undefined *)in_stack_000002c0[4];
          in_stack_000002f0 = (undefined *)in_stack_000002c0[3];
          uStack00000000000001e8 = SUB87(puVar17,0);
          uStack00000000000001ef = (undefined1)((ulong)puVar17 >> 0x38);
          uStack00000000000001e0 = SUB81(in_stack_000002f0,0);
          uStack00000000000001e1 = (undefined1)((ulong)in_stack_000002f0 >> 8);
          uStack00000000000001e2 = (undefined5)((ulong)in_stack_000002f0 >> 0x10);
          cStack00000000000001e7 = (char)((ulong)in_stack_000002f0 >> 0x38);
          uVar6 = in_stack_000002c0[6];
          in_stack_00000300 = (int *)in_stack_000002c0[5];
          if ((lVar15 != 4) || (*piVar2 != 0x65707974)) {
            in_stack_00000290 = (undefined *)CONCAT71((int7)((ulong)in_stack_00000290 >> 8),0xc);
            uStack00000000000001e0 = 5;
            uStack00000000000001e1 = 0;
            uStack00000000000001e2 = 0;
            cStack00000000000001e7 = -0x80;
            unaff_x20 = -0x7ffffffffffffffb;
            if (in_stack_000002f0 == (undefined *)0x8000000000000005) {
              in_stack_000002b8 = (long *)func_0x000107c058e8(&UNK_108cde170,0x10);
              in_stack_000002f0 = puVar25;
              in_stack_00000300 = piVar26;
            }
            else {
              func_0x000100673418(&stack0x000002b0,&stack0x000002f0);
              in_stack_000002f8 = puVar17;
              if ((char)plVar24 != '\x16') {
                if (plVar22 == in_stack_00000260) {
                  func_0x000107c05d34(&stack0x00000278);
                }
                puVar1 = (undefined8 *)(in_stack_00000268 + (long)plVar22 * 0x40);
                puVar1[1] = puVar9;
                *puVar1 = in_stack_00000290;
                puVar1[3] = lVar15;
                puVar1[2] = piVar2;
                puVar1[5] = in_stack_000002b8;
                puVar1[4] = plVar24;
                puVar1[7] = in_stack_000002c8;
                puVar1[6] = puVar11;
                plVar22 = (long *)((long)plVar22 + 1);
                in_stack_00000298 = puVar9;
                in_stack_000002f0 = in_stack_00000290;
                in_stack_000002f8 = puVar9;
                in_stack_00000300 = piVar2;
                if (lVar13 != 0) goto code_r0x00010042a368;
code_r0x00010042a500:
                unaff_x20 = -0x7ffffffffffffffb;
                puVar1 = puVar14;
                cVar23 = cStack0000000000000178;
                plVar7 = in_stack_00000198;
                in_stack_00000198 = plVar22;
                cStack0000000000000178 = cVar21;
                goto joined_r0x00010042a50c;
              }
            }
            uStack0000000000000180 = SUB81(in_stack_000002b8,0);
            uStack0000000000000181 = (undefined7)((ulong)in_stack_000002b8 >> 8);
            FUN_100e077ec(&stack0x00000290);
            goto LAB_10042a53c;
          }
          if (puVar9 != (undefined *)0x0) {
            _free();
          }
          if (cVar21 != '\x0f') {
            in_stack_000002f0 = &stack0x000002b0;
            in_stack_000002f8 = &DAT_100c7b3a0;
            uVar6 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
            in_stack_00000300 = piVar26;
            goto LAB_10042a238;
          }
          in_stack_000002f0 =
               (undefined *)
               CONCAT17(cStack00000000000001e7,
                        CONCAT52(uStack00000000000001e2,
                                 CONCAT11(uStack00000000000001e1,uStack00000000000001e0)));
          uStack00000000000001e0 = 5;
          uStack00000000000001e1 = 0;
          uStack00000000000001e2 = 0;
          cStack00000000000001e7 = -0x80;
          unaff_x20 = -0x7ffffffffffffffb;
          if (in_stack_000002f0 == (undefined *)0x8000000000000005) {
            uVar6 = func_0x000107c058e8(&UNK_108cde170,0x10);
            in_stack_000002f0 = puVar25;
            in_stack_00000300 = piVar26;
            goto LAB_10042a238;
          }
          in_stack_000002f8 = (undefined *)CONCAT17(uStack00000000000001ef,uStack00000000000001e8);
          if (in_stack_000002f0 == (undefined *)0x8000000000000003) {
            func_0x000100ac58fc(&stack0x000002b0,in_stack_00000300,uVar6);
            if (in_stack_000002f8 != (undefined *)0x0) {
              _free(in_stack_00000300);
            }
          }
          else {
            in_stack_000002b8 =
                 (long *)func_0x000107c0565c(&stack0x000002f0,unaff_x29 + -0x61,&UNK_10b2127a0);
            plVar24 = (long *)CONCAT71((int7)((ulong)plVar24 >> 8),1);
            FUN_100de6690(&stack0x000002f0);
          }
          if ((char)plVar24 == '\x01') {
            uStack0000000000000180 = SUB81(in_stack_000002b8,0);
            uStack0000000000000181 = (undefined7)((ulong)in_stack_000002b8 >> 8);
            goto LAB_10042a53c;
          }
          cVar21 = (char)((ulong)plVar24 >> 8);
          if (lVar13 == 0) goto code_r0x00010042a500;
code_r0x00010042a368:
          unaff_x20 = -0x7ffffffffffffffb;
          in_stack_000002c0 = in_stack_000002c0 + 0xd;
          puVar9 = (undefined *)*in_stack_000002c0;
          puVar25 = in_stack_000002f0;
          piVar26 = in_stack_00000300;
        } while (puVar9 != (undefined *)0x8000000000000000);
      }
      puVar1 = in_stack_000002c0 + 0xd;
      cVar23 = cStack0000000000000178;
      plVar7 = in_stack_00000198;
      in_stack_00000198 = plVar22;
      cStack0000000000000178 = cVar21;
joined_r0x00010042a50c:
      if (cStack0000000000000178 == '\x0f') goto code_r0x00010042a200;
      uStack0000000000000190 = (undefined1)in_stack_00000268;
      uStack0000000000000188 = SUB81(in_stack_00000260,0);
      uStack0000000000000189 = (undefined7)((ulong)in_stack_00000260 >> 8);
      uStack0000000000000180 = 0x15;
      uStack0000000000000191 = (undefined7)((ulong)in_stack_00000268 >> 8);
      in_stack_00000258 = CONCAT71(in_stack_000002d1,0x15);
      in_stack_00000250 = CONCAT71(uStack0000000000000179,cStack0000000000000178);
      uStack0000000000000181 = in_stack_000002d1;
      cVar23 = cStack0000000000000178;
      if (puVar14 != puVar1) {
        uVar6 = thunk_FUN_1087e422c(uVar20,&UNK_10b21cb90,&UNK_10b20a590);
        uStack0000000000000180 = (undefined1)uVar6;
        uStack0000000000000181 = (undefined7)((ulong)uVar6 >> 8);
        FUN_100e077ec(&stack0x00000258);
        cVar23 = '\x0f';
      }
      FUN_100de8910(&stack0x00000228);
      plVar7 = (long *)CONCAT71(uStack0000000000000181,uStack0000000000000180);
      if (cVar23 == '\x0f') goto LAB_10042a900;
    }
    if ((long)uVar12 < 3) {
      if (uVar12 == 0) {
        uStack00000000000001e0 = 7;
      }
      else if (uVar12 == 1) {
        uStack00000000000001e1 = uStack0000000000000048;
        uStack00000000000001e0 = 0;
      }
      else {
        uStack00000000000001ef = (undefined1)(in_stack_00000050 >> 0x38);
        uStack00000000000001e8 = (undefined7)in_stack_00000050;
        if (_uStack0000000000000048 == 0) {
          uStack00000000000001e0 = 1;
        }
        else if (_uStack0000000000000048 == 1) {
          uStack00000000000001e0 = 2;
        }
        else {
          uStack00000000000001e0 = 3;
        }
      }
      plVar7 = (long *)func_0x000107c05dcc(&stack0x000001e0,&stack0x000001a0,&UNK_10b21b390);
      break;
    }
    func_0x000107c04aa4(&stack0x00000178,&stack0x000001a0,(ulong)&stack0x00000040 | 8);
    plVar7 = (long *)CONCAT71(uStack0000000000000181,uStack0000000000000180);
    cVar23 = cStack0000000000000178;
  }
LAB_10042a900:
  uStack00000000000001e0 = SUB81(&stack0x000000b0,0);
  uStack00000000000001e1 = (undefined1)((ulong)&stack0x000000b0 >> 8);
  uStack00000000000001e2 = (undefined5)((ulong)&stack0x000000b0 >> 0x10);
  cStack00000000000001e7 = (char)((ulong)&stack0x000000b0 >> 0x38);
  uStack00000000000001e8 = 0x1055b4878;
  uStack00000000000001ef = 0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000002f0,s_items____is_not_a_valid_response_108aca7ec,&stack0x000001e0);
  if (*plVar7 == 1) {
    uVar12 = plVar7[1];
    if ((uVar12 & 3) != 1) goto LAB_10042a974;
    puVar11 = (undefined8 *)(uVar12 - 1);
    uVar6 = *puVar11;
    puVar14 = *(undefined8 **)(uVar12 + 7);
    pcVar10 = (code *)*puVar14;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar6);
    }
    if (puVar14[1] != 0) {
      _free(uVar6);
    }
  }
  else {
    if ((*plVar7 != 0) || (plVar7[2] == 0)) goto LAB_10042a974;
    puVar11 = (undefined8 *)plVar7[1];
  }
  _free(puVar11);
LAB_10042a974:
  _free(plVar7);
  in_stack_00000090 = in_stack_000002f0;
  in_stack_00000098 = in_stack_000002f8;
  in_stack_000000a0 = in_stack_00000300;
  if ((*in_stack_00000018 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018[1]);
  }
  in_stack_00000018[1] = (ulong)in_stack_00000098;
  *in_stack_00000018 = (ulong)in_stack_00000090;
  in_stack_00000018[2] = (ulong)in_stack_000000a0;
  *(long *)(in_stack_00000038 + 0x20) = unaff_x25 + 1;
code_r0x00010042a9c0:
  in_stack_000000b8 = 0x11;
code_r0x00010042a9c8:
  *in_stack_00000020 = in_stack_000000b8;
  return;
}

