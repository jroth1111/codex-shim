
/* WARNING: Removing unreachable block (ram,0x000100765048) */
/* WARNING: Removing unreachable block (ram,0x000100765050) */
/* WARNING: Removing unreachable block (ram,0x000100764f38) */
/* WARNING: Removing unreachable block (ram,0x000100765068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100764820(void)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  byte bVar14;
  uint uVar15;
  undefined *puVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  long *unaff_x19;
  undefined1 *unaff_x21;
  long *plVar20;
  undefined8 *puVar21;
  long unaff_x25;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar26;
  byte bVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long *in_stack_00000000;
  long in_stack_00000140;
  long in_stack_00000148;
  char cVar32;
  long *in_stack_00000280;
  undefined1 *puVar31;
  long *in_stack_00000288;
  long in_stack_00000290;
  long in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined4 in_stack_000003a9;
  undefined3 in_stack_000003ad;
  long in_stack_000003c0;
  long in_stack_000003c8;
  long in_stack_000003d0;
  long in_stack_000003d8;
  long in_stack_000003e0;
  long in_stack_000003e8;
  long in_stack_000003f0;
  undefined1 in_stack_000003f8;
  undefined7 in_stack_000003f9;
  long in_stack_00000400;
  long in_stack_00000408;
  long in_stack_00000410;
  long in_stack_00000418;
  long in_stack_00000420;
  long in_stack_00000428;
  long in_stack_00000430;
  long in_stack_00000438;
  long in_stack_00000440;
  long in_stack_00000448;
  long in_stack_00000450;
  long in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005d0;
  long in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  
  auVar30._8_8_ = in_stack_000002a8;
  auVar30._0_8_ = in_stack_000002a0;
  FUN_100f3f484(&stack0x000003c0,s__accounts___settings_108ac698c,&stack0x00000280);
  plVar20 = unaff_x19 + 0x25;
  unaff_x19[0x26] = in_stack_000003c8;
  *plVar20 = in_stack_000003c0;
  unaff_x19[0x27] = in_stack_000003d0;
  unaff_x19[0x28] = 10;
  *(undefined4 *)(unaff_x19 + 0x29) = 0;
  unaff_x19[0x2a] = unaff_x25;
  plVar24 = unaff_x19 + 0x5a;
  *(undefined1 *)(unaff_x19 + 0x5a) = 0;
  *(undefined2 *)((long)unaff_x19 + 0x2d1) = 0;
  unaff_x19[0x2c] = unaff_x19[0x26];
  unaff_x19[0x2b] = *plVar20;
  unaff_x19[0x2d] = unaff_x19[0x27];
  unaff_x19[0x2e] = 10;
  *(undefined4 *)(unaff_x19 + 0x2f) = 0;
  unaff_x19[0x30] = unaff_x25 + 0x1c40;
  unaff_x19[0x1d0] = unaff_x25;
  *(undefined2 *)(unaff_x19 + 0x1d1) = 0;
  lVar5 = FUN_1006d95b0(unaff_x19 + 0x5b);
  if (lVar5 == 0) {
    uVar11 = 3;
  }
  else {
    unaff_x19[0x31] = lVar5;
    if ((char)unaff_x19[0x1d1] == '\x03') {
      if (*(char *)((long)unaff_x19 + 0xe72) == '\x03') {
        func_0x000100e78740(unaff_x19 + 0x61);
      }
      else if (*(char *)((long)unaff_x19 + 0xe72) == '\0') {
        if (unaff_x19[0x5b] != 0) {
          _free(unaff_x19[0x5c]);
        }
        if ((unaff_x19[0x5e] != -0x8000000000000000) && (unaff_x19[0x5e] != 0)) {
          _free(unaff_x19[0x5f]);
        }
      }
    }
    unaff_x19[0x5c] = unaff_x19[0x31] + 0x10;
    *(undefined1 *)((long)unaff_x19 + 0x2e9) = 0;
    FUN_1006dd9c8(&stack0x000003c0,unaff_x19 + 0x5b);
    if (in_stack_000003c0 != -0x7ffffffffffffffc) {
      if (*(char *)((long)unaff_x19 + 0x2e9) != '\x04') {
        if (*(char *)((long)unaff_x19 + 0x2e9) == '\x03') {
          FUN_100ce72d8(unaff_x19 + 0x5e);
        }
        if (in_stack_000003c0 == -0x7ffffffffffffffd) goto LAB_100764938;
LAB_100764970:
        unaff_x19[0x32] = in_stack_000003c0;
        unaff_x19[0x33] = in_stack_000003c8;
        unaff_x19[0x41] = in_stack_00000438;
        unaff_x19[0x40] = in_stack_00000430;
        unaff_x19[0x43] = in_stack_00000448;
        unaff_x19[0x42] = in_stack_00000440;
        unaff_x19[0x44] = in_stack_00000450;
        unaff_x19[0x39] = CONCAT71(in_stack_000003f9,in_stack_000003f8);
        unaff_x19[0x38] = in_stack_000003f0;
        unaff_x19[0x3b] = in_stack_00000408;
        unaff_x19[0x3a] = in_stack_00000400;
        unaff_x19[0x3d] = in_stack_00000418;
        unaff_x19[0x3c] = in_stack_00000410;
        unaff_x19[0x3f] = in_stack_00000428;
        unaff_x19[0x3e] = in_stack_00000420;
        unaff_x19[0x35] = in_stack_000003d8;
        unaff_x19[0x34] = in_stack_000003d0;
        unaff_x19[0x37] = in_stack_000003e8;
        unaff_x19[0x36] = in_stack_000003e0;
        if (in_stack_000003c0 != -0x8000000000000000) {
          __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                    (&stack0x000003c0,unaff_x19 + 0x32);
          if (in_stack_000003c0 == -0x8000000000000000) {
            plVar6 = (long *)FUN_107c058fc(&UNK_108cad024,0x3d);
            goto LAB_1007652b8;
          }
          if (in_stack_000003c0 != 0) {
            _free(in_stack_000003c8);
          }
          lVar5 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E()
          ;
          unaff_x19[0x45] = lVar5;
          lVar12 = *(long *)(unaff_x19[0x30] + 8);
          lVar5 = *(long *)(unaff_x19[0x30] + 0x10);
          do {
            if (lVar5 == 0) break;
            lVar5 = lVar12 + lVar5;
            pbVar17 = (byte *)(lVar5 + -1);
            uVar15 = (uint)(char)*pbVar17;
            if ((int)uVar15 < 0) {
              pbVar17 = (byte *)(lVar5 + -2);
              bVar14 = *pbVar17;
              if ((char)bVar14 < -0x40) {
                pbVar17 = (byte *)(lVar5 + -3);
                bVar27 = *pbVar17;
                if ((char)bVar27 < -0x40) {
                  pbVar17 = (byte *)(lVar5 + -4);
                  uVar18 = bVar27 & 0x3f | (*pbVar17 & 7) << 6;
                }
                else {
                  uVar18 = (int)(char)bVar27 & 0xf;
                }
                uVar18 = bVar14 & 0x3f | uVar18 << 6;
              }
              else {
                uVar18 = (int)(char)bVar14 & 0x1f;
              }
              uVar15 = uVar15 & 0x3f | uVar18 << 6;
            }
            lVar5 = (long)pbVar17 - lVar12;
          } while (uVar15 == 0x2f);
          in_stack_00000140 = unaff_x19[0x2c];
          in_stack_00000148 = unaff_x19[0x2d];
          lVar5 = 0;
          do {
            lVar12 = in_stack_00000148;
            if (lVar5 == in_stack_00000148) break;
            pbVar2 = (byte *)(in_stack_00000140 + lVar5);
            pbVar17 = pbVar2 + 1;
            uVar15 = (uint)*pbVar2;
            if ((char)*pbVar2 < '\0') {
              if (uVar15 < 0xe0) {
                pbVar17 = pbVar2 + 2;
                uVar15 = pbVar2[1] & 0x3f | (uVar15 & 0x1f) << 6;
              }
              else {
                uVar18 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
                if (uVar15 < 0xf0) {
                  pbVar17 = pbVar2 + 3;
                  uVar15 = uVar18 | (uVar15 & 0x1f) << 0xc;
                }
                else {
                  pbVar17 = pbVar2 + 4;
                  uVar15 = pbVar2[3] & 0x3f | uVar18 << 6 | (uVar15 & 7) << 0x12;
                }
              }
            }
            lVar12 = lVar5;
            lVar5 = (long)pbVar17 - in_stack_00000140;
          } while (uVar15 == 0x2f);
          in_stack_00000148 = in_stack_00000148 - lVar12;
          in_stack_00000140 = in_stack_00000140 + lVar12;
          puVar31 = &stack0x000005c0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000280,s___108ab8993,&stack0x000003c0);
          unaff_x19[0x47] = (long)in_stack_00000288;
          unaff_x19[0x46] = (long)in_stack_00000280;
          unaff_x19[0x48] = in_stack_00000290;
          lVar5 = unaff_x19[0x45];
          lVar12 = unaff_x19[0x47];
          if (in_stack_00000290 == 0) {
            lVar7 = 1;
          }
          else {
            lVar7 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00000290,1);
            if (lVar7 == 0) {
              FUN_107c03c64(1,in_stack_00000290);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100765f74);
              (*pcVar4)();
            }
          }
          _memcpy(lVar7,lVar12,in_stack_00000290);
          *(undefined1 *)(unaff_x29 + -0x100) = 1;
          *(undefined8 *)(unaff_x29 + -0xf0) = 0;
          FUN_1011d51fc(&stack0x000005c0,lVar5,unaff_x29 + -0x100,unaff_x19[0x47],unaff_x19[0x48]);
          _memcpy(&stack0x000003c0,&stack0x000005c0,0x110);
          auVar29 = __ZN20codex_model_provider4auth23auth_provider_from_auth17h1d4b85161056ffcaE
                              (unaff_x19 + 0x32);
          *(undefined1 (*) [16])(unaff_x29 + -0x100) = auVar29;
          (**(code **)(auVar29._8_8_ + 0x20))
                    (&stack0x000005c0,
                     auVar29._0_8_ + (*(long *)(auVar29._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) +
                     0x10);
          __ZN12codex_client14default_client19CodexRequestBuilder7headers17h601ccdbb0a4d4e69E
                    (&stack0x00000280,&stack0x000003c0,&stack0x000005c0);
          _memcpy(&stack0x000003c0,&stack0x00000280,0x110);
          FUN_1011d5650(&stack0x000005c0,&stack0x000003c0,&UNK_108cad010,0xf,&UNK_108cad01f,5);
          *(uint *)(unaff_x29 + -0xcd) =
               CONCAT31(in_stack_000003ad,(char)((uint)in_stack_000003a9 >> 0x18));
          *(undefined4 *)(unaff_x29 + -0xd0) = in_stack_000003a9;
          _memcpy(&stack0x000003c0,&stack0x000005c0,0x110);
          FUN_1011d5650(&stack0x00000280,&stack0x000003c0,&UNK_108ca7be3,0xc,&UNK_108c57210,0x10);
          _memcpy(&stack0x00000140,&stack0x00000280,0x110);
          *(undefined1 *)((long)unaff_x19 + 0x2d2) = 1;
          lVar5 = **(long **)(unaff_x29 + -0x100);
          **(long **)(unaff_x29 + -0x100) = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001046b10a8(unaff_x29 + -0x100);
          }
          if ((int)unaff_x19[0x2f] != 1000000000) {
            *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
            __ZN12codex_client14default_client19CodexRequestBuilder7timeout17h26aea1b2176d3533E
                      (&stack0x000003c0,&stack0x00000140,unaff_x19[0x2e]);
            *(undefined1 *)((long)unaff_x19 + 0x2d2) = 1;
            _memcpy(&stack0x00000140,&stack0x000003c0,0x140);
          }
          *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
          _memcpy(unaff_x19 + 0x5b,&stack0x00000140,0x140);
          *(undefined1 *)(unaff_x19 + 0xad) = 0;
          plVar1 = unaff_x19 + 0x5b;
          FUN_10072d0a8(&stack0x000003c0,plVar1);
          if (puVar31 == (undefined1 *)0x4) {
            uVar11 = 5;
            goto LAB_1007650c8;
          }
          FUN_100cadf84(plVar1);
          if (puVar31 != (undefined1 *)0x3) {
            *(undefined1 *)((long)unaff_x19 + 0x2d1) = 1;
            unaff_x19[0x49] = (long)puVar31;
            unaff_x19[0x4a] = (long)&DAT_100c7b3a0;
            unaff_x19[0x59] = in_stack_00000440;
            unaff_x19[0x54] = in_stack_00000418;
            unaff_x19[0x53] = in_stack_00000410;
            unaff_x19[0x56] = in_stack_00000428;
            unaff_x19[0x55] = in_stack_00000420;
            unaff_x19[0x58] = in_stack_00000438;
            unaff_x19[0x57] = in_stack_00000430;
            unaff_x19[0x4c] = (long)&DAT_100c7b3a0;
            unaff_x19[0x4b] = (long)&stack0x00000140;
            unaff_x19[0x4e] = in_stack_000003e8;
            unaff_x19[0x4d] = in_stack_000003e0;
            unaff_x19[0x50] = CONCAT71(in_stack_000003f9,in_stack_000003f8);
            unaff_x19[0x4f] = in_stack_000003f0;
            unaff_x19[0x52] = in_stack_00000408;
            unaff_x19[0x51] = in_stack_00000400;
            if (99 < *(ushort *)(unaff_x19 + 0x56) - 200) {
              *(ushort *)(unaff_x19 + 0x5b) = *(ushort *)(unaff_x19 + 0x56);
              *(undefined1 *)((long)unaff_x19 + 0x2d1) = 0;
              unaff_x19[0x69] = unaff_x19[0x56];
              unaff_x19[0x68] = unaff_x19[0x55];
              unaff_x19[0x6b] = unaff_x19[0x58];
              unaff_x19[0x6a] = unaff_x19[0x57];
              unaff_x19[0x6c] = unaff_x19[0x59];
              unaff_x19[0x61] = unaff_x19[0x4e];
              unaff_x19[0x60] = unaff_x19[0x4d];
              unaff_x19[99] = unaff_x19[0x50];
              unaff_x19[0x62] = unaff_x19[0x4f];
              unaff_x19[0x65] = unaff_x19[0x52];
              unaff_x19[100] = unaff_x19[0x51];
              unaff_x19[0x67] = unaff_x19[0x54];
              unaff_x19[0x66] = unaff_x19[0x53];
              unaff_x19[0x5d] = unaff_x19[0x4a];
              unaff_x19[0x5c] = unaff_x19[0x49];
              unaff_x19[0x5f] = unaff_x19[0x4c];
              unaff_x19[0x5e] = unaff_x19[0x4b];
              *(undefined1 *)(unaff_x19 + 0xd3) = 0;
              FUN_1011d6b78(&stack0x000003c0,unaff_x19 + 0x5c);
              if (puVar31 == (undefined1 *)0x8000000000000001) {
                uVar11 = 7;
                goto LAB_1007650c8;
              }
              if ((char)unaff_x19[0xd3] == '\x03') {
                FUN_100cbe7c8(unaff_x19 + 0x6d);
              }
              else if ((char)unaff_x19[0xd3] == '\0') {
                FUN_100e0d524(unaff_x19 + 0x5c);
              }
              if (puVar31 == (undefined1 *)0x8000000000000000) {
                puVar31 = (undefined1 *)0x0;
                puVar16 = (undefined *)0x1;
                FUN_100de20f8(&DAT_100c7b3a0);
                _free(&DAT_100c7b3a0);
              }
              else {
                puVar16 = &DAT_100c7b3a0;
              }
              plVar6 = (long *)thunk_FUN_108858fa8(s_Request_failed_with_status___108ac696a,
                                                   &stack0x000003c0);
              if (puVar31 != (undefined1 *)0x0) {
                _free(puVar16);
              }
              goto LAB_100765280;
            }
            *(undefined1 *)((long)unaff_x19 + 0x2d1) = 0;
            unaff_x19[0x68] = unaff_x19[0x56];
            unaff_x19[0x67] = unaff_x19[0x55];
            unaff_x19[0x6a] = unaff_x19[0x58];
            unaff_x19[0x69] = unaff_x19[0x57];
            unaff_x19[0x6b] = unaff_x19[0x59];
            unaff_x19[0x60] = unaff_x19[0x4e];
            unaff_x19[0x5f] = unaff_x19[0x4d];
            unaff_x19[0x62] = unaff_x19[0x50];
            unaff_x19[0x61] = unaff_x19[0x4f];
            unaff_x19[100] = unaff_x19[0x52];
            unaff_x19[99] = unaff_x19[0x51];
            unaff_x19[0x66] = unaff_x19[0x54];
            unaff_x19[0x65] = unaff_x19[0x53];
            unaff_x19[0x5c] = unaff_x19[0x4a];
            *plVar1 = unaff_x19[0x49];
            unaff_x19[0x5e] = unaff_x19[0x4c];
            unaff_x19[0x5d] = unaff_x19[0x4b];
            *(undefined1 *)(unaff_x19 + 0xa1) = 0;
            unaff_x19[0x79] = unaff_x19[0x68];
            unaff_x19[0x78] = unaff_x19[0x67];
            unaff_x19[0x7b] = unaff_x19[0x6a];
            unaff_x19[0x7a] = unaff_x19[0x69];
            unaff_x19[0x7c] = unaff_x19[0x6b];
            unaff_x19[0x71] = unaff_x19[0x60];
            unaff_x19[0x70] = unaff_x19[0x5f];
            unaff_x19[0x73] = unaff_x19[0x62];
            unaff_x19[0x72] = unaff_x19[0x61];
            unaff_x19[0x75] = unaff_x19[100];
            unaff_x19[0x74] = unaff_x19[99];
            unaff_x19[0x77] = unaff_x19[0x66];
            unaff_x19[0x76] = unaff_x19[0x65];
            unaff_x19[0x6d] = unaff_x19[0x5c];
            unaff_x19[0x6c] = *plVar1;
            unaff_x19[0x6f] = unaff_x19[0x5e];
            unaff_x19[0x6e] = unaff_x19[0x5d];
            *(undefined1 *)(unaff_x19 + 0xa0) = 0;
            FUN_1011d7320(&stack0x000003c0,unaff_x19 + 0x6c);
            if ((char)unaff_x19[0xa0] == '\x03') {
              FUN_100da9d08(unaff_x19 + 0x8e);
              plVar6 = (long *)unaff_x19[0x8d];
              if (*plVar6 != 0) {
                _free(plVar6[1]);
              }
              _free(plVar6);
            }
            else if ((char)unaff_x19[0xa0] == '\0') {
              FUN_100e0d524(unaff_x19 + 0x6c);
            }
            puVar16 = (undefined *)0x0;
            puVar21 = (undefined8 *)&stack0x000005c8;
            do {
              bVar14 = *(byte *)((long)&stack0x00000140 + (long)puVar16);
              if (0x20 < bVar14 || (1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) {
                cVar32 = (char)((ulong)in_stack_00000280 >> 8);
                plVar6 = in_stack_00000288;
                if (bVar14 != 0x5b) {
                  if (bVar14 == 0x7b) {
                    *(undefined1 **)(unaff_x29 + -0xa0) = &stack0x000003c0;
                    *(undefined1 *)(unaff_x29 + -0x98) = 1;
                    plVar22 = (long *)0x0;
                    goto LAB_100765680;
                  }
                  plVar6 = (long *)thunk_FUN_108831eec(&stack0x000003c0,unaff_x29 + -0x61,
                                                       &UNK_10b24f018);
                  goto LAB_100765f04;
                }
                *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000003c0;
                *(undefined1 *)(unaff_x29 + -0x78) = 1;
                auVar29 = FUN_1011de2a4(&stack0x00000280,unaff_x29 + -0x80);
                if ((char)in_stack_00000280 == '\x01') {
                  plVar22 = (long *)0x0;
                }
                else {
                  if (cVar32 == '\x01') {
                    auVar29 = FUN_101369560(&stack0x00000280,*(undefined8 *)(unaff_x29 + -0x80));
                    plVar22 = in_stack_00000280;
                    if (in_stack_00000280 == (long *)0x0) goto LAB_100765910;
                    puVar13 = (undefined8 *)&stack0x000005c0;
                    auVar29 = auVar30;
                  }
                  else {
                    pauVar10 = (undefined1 (*) [16])
                               (*
                               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                               )();
                    if (pauVar10[1][0] == '\x01') {
                      auVar29 = *pauVar10;
                    }
                    else {
                      auVar29 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                      *(long *)(*pauVar10 + 8) = auVar29._8_8_;
                      pauVar10[1][0] = 1;
                    }
                    *(long *)*pauVar10 = auVar29._0_8_ + 1;
                    puVar13 = (undefined8 *)&UNK_10b209510;
                    puVar21 = (undefined8 *)&UNK_10b209518;
                    in_stack_00000280 = (long *)&UNK_108c56c70;
                  }
                  plVar6 = (long *)*puVar13;
                  uVar28 = *puVar21;
                  *(undefined8 *)(unaff_x29 + -0x98) = puVar21[1];
                  *(undefined8 *)(unaff_x29 + -0xa0) = uVar28;
                  plVar22 = in_stack_00000280;
                }
LAB_100765910:
                lVar5 = *(long *)(unaff_x29 + -0x98);
                lVar12 = *(long *)(unaff_x29 + -0xa0);
                in_stack_00000000 = (long *)FUN_100654840(&stack0x000003c0);
                if (plVar22 != (long *)0x0) {
                  if (in_stack_00000000 == (long *)0x0) goto LAB_100765d78;
                  if (plVar6 == (long *)0x0) goto LAB_100765db0;
                  if (lVar5 != 0) {
                    plVar8 = plVar22 + 1;
                    lVar12 = *plVar22;
                    uVar23 = CONCAT17(-(-1 < lVar12),
                                      CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                               CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                        CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20
                                                                              )),
                                                                 CONCAT13(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar12 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar12)))))))) &
                             0x8080808080808080;
                    plVar25 = plVar22;
                    lVar12 = lVar5;
                    do {
                      while (uVar23 == 0) {
                        lVar5 = *plVar8;
                        plVar8 = plVar8 + 1;
                        plVar25 = plVar25 + -0x20;
                        uVar23 = CONCAT17(-(-1 < lVar5),
                                          CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                                   CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                                            CONCAT14(-(-1 < (char)((ulong)lVar5 >>
                                                                                  0x20)),
                                                                     CONCAT13(-(-1 < (char)((ulong)
                                                  lVar5 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar5 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar5 >> 8)
                                                                     ),-(-1 < (char)lVar5)))))))) &
                                 0x8080808080808080;
                      }
                      uVar9 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                              (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
                      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar9 & 0xffff0000ffff) << 0x10;
                      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) & 0x78;
                      if (*(long *)((long)plVar25 + uVar9 * -4 + -0x20) != 0) {
                        _free(*(undefined8 *)((long)plVar25 + uVar9 * -4 + -0x18));
                      }
                      uVar23 = uVar23 - 1 & uVar23;
                      lVar12 = lVar12 + -1;
                      lVar5 = 0;
                    } while (lVar12 != 0);
                  }
                  goto LAB_100765d4c;
                }
                if (in_stack_00000000 == (long *)0x0) goto LAB_100765dd0;
                lVar12 = *in_stack_00000000;
                if (lVar12 != 1) goto LAB_100765d94;
                FUN_100de21d4(in_stack_00000000 + 1);
                goto LAB_100765dc8;
              }
              puVar16 = puVar16 + 1;
            } while (puVar16 != &DAT_100c7b3a0);
            plVar8 = (long *)thunk_FUN_108831e2c(&stack0x000003c0,&stack0x00000280);
            goto LAB_100765038;
          }
          plVar6 = (long *)thunk_FUN_108854894(&DAT_100c7b3a0,&UNK_108cad094,0x16);
          goto LAB_100765280;
        }
        plVar6 = (long *)FUN_107c058fc(&UNK_108cad061,0x33);
        goto LAB_1007652b8;
      }
      FUN_100cab424(unaff_x19 + 0x71);
      FUN_100e0609c(unaff_x19 + 0x5e);
      *(undefined1 *)(unaff_x19 + 0x5d) = 0;
      if (in_stack_000003c0 != -0x7ffffffffffffffd) goto LAB_100764970;
LAB_100764938:
      plVar6 = (long *)FUN_107c058fc(&UNK_108cacfb3,0x1a);
      goto LAB_1007652c0;
    }
    uVar11 = 4;
  }
LAB_1007650c8:
  *(undefined1 *)plVar24 = uVar11;
  *unaff_x21 = 2;
  uVar11 = 3;
  goto LAB_100765610;
LAB_100765680:
  do {
    auVar29._8_8_ = in_stack_000005e8;
    auVar29._0_8_ = in_stack_000005e0;
    auVar30 = FUN_1011dda68(&stack0x00000280,unaff_x29 + -0xa0);
    plVar6 = in_stack_00000288;
    if ((char)in_stack_00000280 == '\x01') break;
    if (cVar32 != '\x01') {
      if (plVar22 == (long *)0x0) {
        pauVar10 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar10[1][0] == '\x01') {
          auVar29 = *pauVar10;
        }
        else {
          auVar29 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar10 + 8) = auVar29._8_8_;
          pauVar10[1][0] = 1;
        }
        plVar6 = (long *)0x0;
        *(long *)*pauVar10 = auVar29._0_8_ + 1;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        plVar22 = (long *)&UNK_108c56c70;
      }
      else {
        *(long *)(unaff_x29 + -0x88) = in_stack_000005d8;
        *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000005d0;
        plVar6 = in_stack_00000000;
      }
      goto LAB_100765c7c;
    }
    lVar5 = *(long *)(unaff_x29 + -0xa0);
    *(long *)(lVar5 + 0x28) = *(long *)(lVar5 + 0x28) + 1;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    auVar30 = __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                        (&stack0x00000280,lVar5 + 0x18,lVar5);
    if (in_stack_00000280 == (long *)0x2) break;
    if ((in_stack_00000290 == 0xd) &&
       (*in_stack_00000288 == 0x7465735f61746562 &&
        *(long *)((long)in_stack_00000288 + 5) == 0x73676e6974746573)) {
      if (plVar22 != (long *)0x0) {
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad0c7;
        *(undefined8 *)(unaff_x29 + -0x78) = 0xd;
        auVar30 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000280);
        plVar6 = auVar30._0_8_;
        goto joined_r0x000100765c74;
      }
      uVar23 = *(ulong *)(lVar5 + 0x28);
      if (uVar23 < *(ulong *)(lVar5 + 0x20)) {
        while( true ) {
          bVar14 = *(byte *)(*(long *)(lVar5 + 0x18) + uVar23);
          if (0x3a < bVar14) goto LAB_100765f14;
          if ((1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) break;
          uVar23 = uVar23 + 1;
          *(ulong *)(lVar5 + 0x28) = uVar23;
          if (*(ulong *)(lVar5 + 0x20) == uVar23) goto LAB_100765b58;
        }
        if ((ulong)bVar14 == 0x3a) {
          *(ulong *)(lVar5 + 0x28) = uVar23 + 1;
          auVar29 = FUN_101369560(&stack0x00000280,lVar5);
          in_stack_00000000 = in_stack_00000288;
          if (in_stack_00000280 != (long *)0x0) {
            in_stack_000005d0 = 0xd;
            plVar22 = in_stack_00000280;
            in_stack_000005d8 = in_stack_00000298;
            in_stack_000005e0 = in_stack_000002a0;
            in_stack_000005e8 = in_stack_000002a8;
            goto LAB_100765680;
          }
        }
        else {
LAB_100765f14:
          *(undefined8 *)(unaff_x29 + -0x80) = 6;
          auVar29 = thunk_FUN_108831e2c(lVar5,unaff_x29 + -0x80);
          in_stack_00000000 = auVar29._0_8_;
        }
      }
      else {
LAB_100765b58:
        *(undefined8 *)(unaff_x29 + -0x80) = 3;
        auVar29 = thunk_FUN_108831e2c(lVar5,unaff_x29 + -0x80);
        in_stack_00000000 = auVar29._0_8_;
      }
      plVar22 = (long *)0x0;
      plVar6 = in_stack_00000000;
      goto LAB_100765c7c;
    }
    uVar23 = *(ulong *)(lVar5 + 0x28);
    if (*(ulong *)(lVar5 + 0x20) <= uVar23) {
LAB_100765850:
      auVar30 = thunk_FUN_108831e2c(lVar5,&stack0x00000280);
      plVar6 = auVar30._0_8_;
      break;
    }
    while( true ) {
      bVar14 = *(byte *)(*(long *)(lVar5 + 0x18) + uVar23);
      if (0x3a < bVar14) goto LAB_100765b90;
      if ((1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) break;
      uVar23 = uVar23 + 1;
      *(ulong *)(lVar5 + 0x28) = uVar23;
      if (*(ulong *)(lVar5 + 0x20) == uVar23) goto LAB_100765850;
    }
    if ((ulong)bVar14 != 0x3a) {
LAB_100765b90:
      auVar30 = thunk_FUN_108831e2c(lVar5,&stack0x00000280);
      plVar6 = auVar30._0_8_;
      break;
    }
    *(ulong *)(lVar5 + 0x28) = uVar23 + 1;
    auVar30 = FUN_100651420(lVar5);
    plVar6 = auVar30._0_8_;
  } while (plVar6 == (long *)0x0);
  if (plVar22 == (long *)0x0) {
LAB_100765c78:
    plVar22 = (long *)0x0;
    auVar29 = auVar30;
  }
  else {
joined_r0x000100765c74:
    if (in_stack_00000000 == (long *)0x0) goto LAB_100765c78;
    auVar29 = auVar30;
    if (in_stack_000005d8 != 0) {
      plVar8 = plVar22 + 1;
      lVar5 = *plVar22;
      uVar23 = CONCAT17(-(-1 < lVar5),
                        CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar5 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
               0x8080808080808080;
      plVar25 = plVar22;
      do {
        while (uVar23 == 0) {
          lVar5 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar25 = plVar25 + -0x20;
          uVar23 = CONCAT17(-(-1 < lVar5),
                            CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18))
                                                                ,CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                       >> 0x10)),
                                                                          CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                   0x8080808080808080;
        }
        uVar9 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) & 0x78;
        if (*(long *)((long)plVar25 + uVar9 * -4 + -0x20) != 0) {
          auVar29 = _free(*(undefined8 *)((long)plVar25 + uVar9 * -4 + -0x18));
        }
        uVar23 = uVar23 - 1 & uVar23;
        in_stack_000005d8 = in_stack_000005d8 + -1;
      } while (in_stack_000005d8 != 0);
    }
    if ((long)in_stack_00000000 * 0x21 != -0x29) {
      auVar29 = _free(plVar22 + (long)in_stack_00000000 * -4 + -4);
    }
    plVar22 = (long *)0x0;
  }
LAB_100765c7c:
  lVar5 = *(long *)(unaff_x29 + -0x88);
  lVar12 = *(long *)(unaff_x29 + -0x90);
  in_stack_00000000 = (long *)FUN_1006546a8(&stack0x000003c0);
  if (plVar22 == (long *)0x0) {
    if (in_stack_00000000 != (long *)0x0) {
      lVar12 = *in_stack_00000000;
      if (lVar12 == 1) {
        FUN_100de21d4(in_stack_00000000 + 1);
      }
      else {
LAB_100765d94:
        if ((lVar12 == 0) && (in_stack_00000000[2] != 0)) {
          _free(in_stack_00000000[1]);
        }
      }
LAB_100765dc8:
      _free(in_stack_00000000);
      lVar12 = extraout_x8_00;
    }
LAB_100765dd0:
    plVar22 = (long *)0x0;
  }
  else if (in_stack_00000000 == (long *)0x0) {
LAB_100765d78:
    *(undefined1 (*) [16])(unaff_x29 + -0xb0) = auVar29;
  }
  else if (plVar6 == (long *)0x0) {
LAB_100765db0:
    plVar22 = (long *)0x0;
    plVar6 = in_stack_00000000;
  }
  else {
    if (lVar5 != 0) {
      plVar8 = plVar22 + 1;
      lVar12 = *plVar22;
      uVar23 = CONCAT17(-(-1 < lVar12),
                        CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
               0x8080808080808080;
      plVar25 = plVar22;
      lVar12 = lVar5;
      do {
        while (uVar23 == 0) {
          lVar5 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar25 = plVar25 + -0x20;
          uVar23 = CONCAT17(-(-1 < lVar5),
                            CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18))
                                                                ,CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                       >> 0x10)),
                                                                          CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                   0x8080808080808080;
        }
        uVar9 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) & 0x78;
        if (*(long *)((long)plVar25 + uVar9 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar25 + uVar9 * -4 + -0x18));
        }
        uVar23 = uVar23 - 1 & uVar23;
        lVar12 = lVar12 + -1;
        lVar5 = 0;
      } while (lVar12 != 0);
    }
LAB_100765d4c:
    lVar12 = (long)plVar6 * 0x20;
    if ((long)plVar6 * 0x21 != -0x29) {
      _free(plVar22 + (long)plVar6 * -4 + -4);
      lVar12 = extraout_x8;
    }
    plVar22 = (long *)0x0;
    plVar6 = in_stack_00000000;
  }
  puVar16 = puVar16 + 1;
  if (plVar22 == (long *)0x0) {
LAB_100765f04:
    plVar8 = (long *)thunk_FUN_108832dfc(plVar6,&stack0x000003c0);
LAB_100765038:
    *(undefined8 *)(unaff_x29 + -0x100) = 0;
    *(long **)(unaff_x29 + -0xf8) = plVar8;
LAB_100765198:
    plVar6 = (long *)FUN_1011d7b00(&stack0x000003c0,plVar8);
    plVar22 = (long *)0x0;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(long **)(unaff_x29 + -0x100) = plVar22;
    *(long **)(unaff_x29 + -0xf8) = plVar6;
    *(long *)(unaff_x29 + -0xf0) = lVar12;
    *(long *)(unaff_x29 + -0xe8) = lVar5;
    if (puVar16 < &DAT_100c7b3a0) {
      do {
        bVar14 = *(byte *)((long)&stack0x00000140 + (long)puVar16);
        if (0x20 < bVar14 || (1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) {
          plVar8 = (long *)thunk_FUN_108831e2c(&stack0x000003c0,&stack0x00000280);
          *(undefined8 *)(unaff_x29 + -0x100) = 0;
          *(long **)(unaff_x29 + -0xf8) = plVar8;
          if (plVar6 != (long *)0x0) {
            if (lVar5 != 0) {
              plVar25 = plVar22 + 1;
              lVar12 = *plVar22;
              uVar23 = CONCAT17(-(-1 < lVar12),
                                CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar12 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                       0x8080808080808080;
              plVar3 = plVar22;
              do {
                while (uVar23 == 0) {
                  lVar12 = *plVar25;
                  plVar25 = plVar25 + 1;
                  plVar3 = plVar3 + -0x20;
                  uVar23 = CONCAT17(-(-1 < lVar12),
                                    CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar12
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                           0x8080808080808080;
                }
                uVar9 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) & 0x78;
                if (*(long *)((long)plVar3 + uVar9 * -4 + -0x20) != 0) {
                  _free(*(undefined8 *)((long)plVar3 + uVar9 * -4 + -0x18));
                }
                uVar23 = uVar23 - 1 & uVar23;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
            if ((long)plVar6 * 0x21 != -0x29) {
              _free(plVar22 + (long)plVar6 * -4 + -4);
            }
          }
          goto LAB_100765198;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != &DAT_100c7b3a0);
    }
    plVar8 = plVar6;
    if (plVar22 == (long *)0x0) goto LAB_100765198;
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xe8);
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xf0);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0xd8);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xe0);
  }
  (*(code *)0x540000e1eb0a013f)(&stack0x000006e8,&stack0x00000140,&DAT_100c7b3a0);
  lVar5 = *(long *)(unaff_x29 + -200);
  uVar26 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar28 = *(undefined8 *)(unaff_x29 + -0xc0);
  *(undefined1 *)(unaff_x19 + 0xa1) = 1;
  FUN_100cfddd4(plVar1);
  if (plVar22 == (long *)0x0) {
    plVar6 = (long *)thunk_FUN_108854894(plVar6,&UNK_108cad0aa,0x1d);
LAB_100765280:
    *(undefined2 *)((long)unaff_x19 + 0x2d1) = 0;
    if (unaff_x19[0x46] != 0) {
      _free(unaff_x19[0x47]);
    }
    lVar5 = *(long *)unaff_x19[0x45];
    *(long *)unaff_x19[0x45] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(unaff_x19 + 0x45);
    }
LAB_1007652b8:
    FUN_100e0609c(unaff_x19 + 0x32);
LAB_1007652c0:
    lVar5 = *(long *)unaff_x19[0x31];
    *(long *)unaff_x19[0x31] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(unaff_x19 + 0x31);
    }
    plVar22 = (long *)0x0;
    lVar5 = in_stack_000005a8;
    uVar28 = in_stack_000005b0;
    uVar26 = in_stack_000005b8;
  }
  else {
    *(undefined2 *)((long)unaff_x19 + 0x2d1) = 0;
    if (unaff_x19[0x46] != 0) {
      _free(unaff_x19[0x47]);
    }
    lVar12 = *(long *)unaff_x19[0x45];
    *(long *)unaff_x19[0x45] = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(unaff_x19 + 0x45);
    }
    FUN_100e0609c(unaff_x19 + 0x32);
    lVar12 = *(long *)unaff_x19[0x31];
    *(long *)unaff_x19[0x31] = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(unaff_x19 + 0x31);
    }
  }
  if (unaff_x19[0x2b] != 0) {
    _free(unaff_x19[0x2c]);
  }
  *(undefined1 *)plVar24 = 1;
  FUN_100d643ac(plVar20);
  if (plVar22 == (long *)0x0) {
    if (unaff_x19[0x22] == 0) {
      lVar5 = *unaff_x19;
    }
    else {
      _free(unaff_x19[0x23]);
      lVar5 = *unaff_x19;
    }
    if (lVar5 != 0) {
      _free(unaff_x19[1]);
    }
    uVar11 = 1;
    if (unaff_x19[3] != 0) {
      _free(unaff_x19[4]);
    }
    *(undefined1 *)(unaff_x27 + 0x268) = 0;
    FUN_100e02748(unaff_x19 + 9);
    if (unaff_x19[0x19] != 0) {
      _free(unaff_x19[0x1a]);
    }
    if (unaff_x19[0x1c] != 0) {
      _free(unaff_x19[0x1d]);
    }
    if ((unaff_x19[0x1f] != -0x8000000000000000) && (unaff_x19[0x1f] != 0)) {
      _free(unaff_x19[0x20]);
    }
  }
  else {
    if (lVar5 != 0) {
      uVar9 = FUN_100e8e738(uVar28,uVar26,&UNK_108cad0f7,0xe);
      lVar12 = 0;
      bVar14 = (byte)(uVar9 >> 0x39);
      uVar9 = uVar9 & (ulong)plVar6;
      uVar28 = *(undefined8 *)((long)plVar22 + uVar9);
      uVar23 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar14),
                        CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar14),
                                 CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar14),
                                          CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar14),
                                                   CONCAT13(-((byte)((ulong)uVar28 >> 0x18) ==
                                                             bVar14),CONCAT12(-((byte)((ulong)uVar28
                                                                                      >> 0x10) ==
                                                                               bVar14),CONCAT11(-((
                                                  byte)((ulong)uVar28 >> 8) == bVar14),
                                                  -((byte)uVar28 == bVar14)))))))) &
               0x8080808080808080;
      while( true ) {
        for (; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
          uVar19 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar19 = uVar9 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & (ulong)plVar6;
          if ((plVar22[uVar19 * -4 + -2] == 0xe) &&
             (*(long *)plVar22[uVar19 * -4 + -3] == 0x705f656c62616e65 &&
              *(long *)(plVar22[uVar19 * -4 + -3] + 6) == 0x736e6967756c705f)) {
            uVar15 = (uint)(*(byte *)(plVar22 + uVar19 * -4 + -1) == 2 |
                           *(byte *)(plVar22 + uVar19 * -4 + -1));
            lVar12 = unaff_x19[8];
            goto joined_r0x0001007654bc;
          }
        }
        bVar27 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar28 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar28 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar28 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar28 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar28
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar28 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar28 >> 8) == -1),
                                                           -((char)uVar28 == -1)))))))),1);
        if ((bVar27 & 1) != 0) break;
        lVar12 = lVar12 + 8;
        uVar9 = uVar9 + lVar12 & (ulong)plVar6;
        uVar28 = *(undefined8 *)((long)plVar22 + uVar9);
        uVar23 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar14),
                          CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar14),
                                   CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar14),
                                            CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar14),
                                                     CONCAT13(-((byte)((ulong)uVar28 >> 0x18) ==
                                                               bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar28 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar28 >> 8) == bVar14),
                                                           -((byte)uVar28 == bVar14)))))))) &
                 0x8080808080808080;
      }
    }
    uVar15 = 1;
    lVar12 = unaff_x19[8];
joined_r0x0001007654bc:
    if (lVar12 != 0) {
      *(undefined1 *)(unaff_x27 + 0x268) = 0;
      __ZN13codex_chatgpt18workspace_settings22WorkspaceSettingsCache25set_codex_plugins_enabled17h0527ab8476486345E
                (lVar12,&stack0x000003c0,uVar15 & 1);
    }
    if (plVar6 != (long *)0x0) {
      if (lVar5 != 0) {
        plVar20 = plVar22 + 1;
        lVar12 = *plVar22;
        uVar23 = CONCAT17(-(-1 < lVar12),
                          CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar12
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                 0x8080808080808080;
        plVar24 = plVar22;
        do {
          while (uVar23 == 0) {
            lVar12 = *plVar20;
            plVar20 = plVar20 + 1;
            plVar24 = plVar24 + -0x20;
            uVar23 = CONCAT17(-(-1 < lVar12),
                              CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar12 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                     0x8080808080808080;
          }
          uVar9 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) & 0x78;
          if (*(long *)((long)plVar24 + uVar9 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar24 + uVar9 * -4 + -0x18));
          }
          uVar23 = uVar23 - 1 & uVar23;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if ((long)plVar6 * 0x21 != -0x29) {
        _free(plVar22 + (long)plVar6 * -4 + -4);
      }
    }
    if (unaff_x19[0x22] != 0) {
      _free(unaff_x19[0x23]);
    }
    if ((*(byte *)(unaff_x27 + 0x268) & 1) != 0) {
      if (*unaff_x19 != 0) {
        _free(unaff_x19[1]);
      }
      if (unaff_x19[3] != 0) {
        _free(unaff_x19[4]);
      }
    }
    *(undefined1 *)(unaff_x27 + 0x268) = 0;
    FUN_100e02748(unaff_x19 + 9);
    if (unaff_x19[0x19] != 0) {
      _free(unaff_x19[0x1a]);
    }
    plVar24 = (long *)(ulong)(uVar15 & 1);
    if (unaff_x19[0x1c] != 0) {
      _free(unaff_x19[0x1d]);
    }
    if ((unaff_x19[0x1f] != -0x8000000000000000) && (unaff_x19[0x1f] != 0)) {
      _free(unaff_x19[0x20]);
    }
    uVar11 = 0;
  }
  *unaff_x21 = uVar11;
  unaff_x21[1] = (char)plVar24;
  uVar11 = 1;
  *(long **)(unaff_x21 + 8) = plVar6;
LAB_100765610:
  *(undefined1 *)(unaff_x27 + 0x269) = uVar11;
  return;
}

