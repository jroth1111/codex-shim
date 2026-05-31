
/* WARNING: Removing unreachable block (ram,0x000101079cfc) */
/* WARNING: Removing unreachable block (ram,0x00010107a258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101079a24(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined8 in_stack_000006e8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  long in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined8 in_stack_00000740;
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  ulong in_stack_00000870;
  long lVar26;
  long in_stack_00000978;
  long in_stack_00000980;
  long in_stack_00000988;
  undefined8 in_stack_00000990;
  undefined8 in_stack_00000998;
  long in_stack_000009a0;
  long in_stack_000009a8;
  undefined8 in_stack_000009b0;
  undefined8 in_stack_000009b8;
  undefined8 in_stack_000009c0;
  undefined8 in_stack_000009c8;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  undefined8 in_stack_000009e0;
  undefined8 in_stack_000009e8;
  undefined8 in_stack_000009f0;
  undefined8 in_stack_000009f8;
  undefined8 in_stack_00000a00;
  undefined8 in_stack_00000a08;
  undefined8 in_stack_00000a10;
  undefined8 in_stack_00000a18;
  undefined8 in_stack_00000a20;
  undefined8 in_stack_00000a28;
  undefined8 in_stack_00000a30;
  undefined8 in_stack_00000a38;
  undefined8 in_stack_00000a40;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined8 in_stack_00000a58;
  undefined8 in_stack_00000a70;
  undefined8 in_stack_00000a78;
  undefined4 in_stack_00000a8c;
  undefined8 in_stack_00000ba0;
  undefined8 in_stack_00000ba8;
  undefined8 in_stack_00000bb0;
  undefined8 in_stack_00000bb8;
  undefined8 in_stack_00000bc0;
  undefined8 in_stack_00000bc8;
  undefined8 in_stack_00000bd0;
  undefined8 in_stack_00000bd8;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined8 in_stack_00000bf0;
  undefined8 in_stack_00000bf8;
  undefined8 in_stack_00000c00;
  undefined8 in_stack_00000c08;
  undefined8 in_stack_00000c10;
  undefined8 in_stack_00000c18;
  undefined8 in_stack_00000c20;
  undefined8 in_stack_00000c28;
  undefined8 in_stack_00000c30;
  undefined8 in_stack_00000c38;
  undefined8 in_stack_00000c40;
  undefined8 in_stack_00000c48;
  undefined8 in_stack_00000c50;
  undefined8 in_stack_00000c58;
  undefined8 in_stack_00000c60;
  undefined8 in_stack_00000c68;
  undefined8 in_stack_00000c70;
  undefined8 in_stack_00000c78;
  undefined8 in_stack_00000c80;
  undefined8 in_stack_00000c88;
  undefined8 in_stack_00000c90;
  undefined8 in_stack_00000c98;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000660);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar12 = *unaff_x21;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000008c0);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar12,puVar3,puVar2,&stack0x000008c0,&stack0x00000660);
    }
  }
  if ((in_stack_00000870 & 3) == 1) {
    uVar12 = *(undefined8 *)(in_stack_00000870 - 1);
    puVar11 = *(undefined8 **)(in_stack_00000870 + 7);
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar12);
    }
    if (puVar11[1] != 0) {
      _free(uVar12);
    }
    _free((undefined8 *)(in_stack_00000870 - 1));
  }
  __ZN11codex_login10token_data24parse_chatgpt_jwt_claims17h06178fe0c45bead9E
            (&stack0x00000988,in_stack_00000078);
  if (in_stack_00000988 == -0x8000000000000000) {
    puVar11 = (undefined8 *)_malloc(0x10);
    if (puVar11 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
      goto LAB_10107a350;
    }
    puVar11[1] = in_stack_00000998;
    *puVar11 = in_stack_00000990;
    plVar6 = (long *)_malloc(0x18);
    if (plVar6 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10107a350;
    }
    *plVar6 = (long)puVar11;
    plVar6[1] = (long)&UNK_10b21e4d0;
    *(undefined1 *)(plVar6 + 2) = 0x28;
LAB_101079d04:
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000070);
    }
    if (in_stack_00000058 != 0) {
      _free(in_stack_00000078);
    }
    in_stack_00000008 = &stack0x000008a0;
    in_stack_000009a0 = 1;
    in_stack_000009a8 = param_1;
    in_stack_000009b0 = in_stack_00000680;
    in_stack_000009b8 = in_stack_00000688;
    in_stack_000009c0 = in_stack_00000690;
    in_stack_000009c8 = in_stack_00000698;
    in_stack_000009d0 = in_stack_000006a0;
    in_stack_000009d8 = in_stack_000006a8;
    in_stack_000009e0 = in_stack_000006b0;
    in_stack_000009e8 = in_stack_000006b8;
    in_stack_000009f0 = in_stack_000006c0;
    in_stack_000009f8 = in_stack_000006c8;
    in_stack_00000a00 = in_stack_000006d0;
    in_stack_00000a08 = in_stack_000006d8;
    in_stack_00000a10 = in_stack_000006e0;
    in_stack_00000a18 = in_stack_000006e8;
    in_stack_00000a20 = in_stack_000006f0;
    in_stack_00000a28 = in_stack_000006f8;
    in_stack_00000a30 = in_stack_00000700;
    in_stack_00000a38 = in_stack_00000708;
    in_stack_00000a40 = in_stack_00000710;
    in_stack_00000a48 = in_stack_00000718;
    in_stack_00000a50 = in_stack_00000720;
    in_stack_00000a58 = in_stack_00000728;
    in_stack_00000980 = in_stack_00000730;
    in_stack_00000a70 = in_stack_00000740;
    in_stack_00000a78 = in_stack_00000748;
    if (in_stack_00000988 == -0x8000000000000000) {
      if (in_stack_00000048 != 0) {
        _free(in_stack_00000038);
      }
      if (in_stack_00000050 != 0) {
        _free(in_stack_00000040);
      }
      if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
        in_stack_00000060 = 0x8000000000000001;
        in_stack_00000078 = in_stack_00000030;
        in_stack_00000030 = 1;
LAB_10107a0bc:
        _free(in_stack_00000078);
        goto LAB_10107a0c0;
      }
    }
    in_stack_00000060 = 0x8000000000000001;
    in_stack_00000030 = 1;
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x27 + 0x278);
    uVar12 = *(undefined8 *)(unaff_x27 + 0x270);
    uVar23 = *(undefined8 *)(unaff_x27 + 0x288);
    uVar20 = *(undefined8 *)(unaff_x27 + 0x280);
    uVar17 = *(undefined8 *)(unaff_x27 + 0x298);
    uVar13 = *(undefined8 *)(unaff_x27 + 0x290);
    uVar18 = *(undefined8 *)(unaff_x27 + 0x238);
    uVar14 = *(undefined8 *)(unaff_x27 + 0x230);
    uVar24 = *(undefined8 *)(unaff_x27 + 0x248);
    uVar21 = *(undefined8 *)(unaff_x27 + 0x240);
    uVar25 = *(undefined8 *)(unaff_x27 + 600);
    uVar22 = *(undefined8 *)(unaff_x27 + 0x250);
    uVar19 = *(undefined8 *)(unaff_x27 + 0x268);
    uVar15 = *(undefined8 *)(unaff_x27 + 0x260);
    lVar26 = -0x8000000000000000;
    __ZN11codex_login6server15jwt_auth_claims17h671fee3f74ef5c68E
              (&stack0x00000988,in_stack_00000078);
    plVar6 = (long *)func_0x0001014982c8(&stack0x00000988,&UNK_108ca806c,0x12);
    if ((plVar6 == (long *)0x0) || (*plVar6 != -0x7ffffffffffffffd)) {
      if ((in_stack_000009a8 != 0) && (in_stack_000009a8 * 9 != -0x11)) {
        _free(in_stack_000009a0 + in_stack_000009a8 * -8 + -8);
      }
      func_0x000100cd7284(&stack0x00000988);
    }
    else {
      lVar4 = plVar6[2];
      lVar26 = plVar6[3];
      if (lVar26 == 0) {
        in_stack_00000978 = 1;
      }
      else {
        in_stack_00000978 = _malloc(lVar26);
        if (in_stack_00000978 == 0) {
          func_0x0001087c9084(1,lVar26);
          goto LAB_10107a350;
        }
      }
      _memcpy(in_stack_00000978,lVar4,lVar26);
      if ((in_stack_000009a8 != 0) && (in_stack_000009a8 * 9 != -0x11)) {
        _free(in_stack_000009a0 + in_stack_000009a8 * -8 + -8);
      }
      func_0x000100cd7284(&stack0x00000988);
      in_stack_00000980 = lVar26;
    }
    __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(&stack0x00000660);
    *(long *)(unaff_x26 + 0xb0) = in_stack_00000050;
    *(undefined8 *)(unaff_x26 + 0xa8) = in_stack_00000020;
    *(undefined8 *)(unaff_x26 + 0xc0) = unaff_x25;
    *(undefined8 *)(unaff_x26 + 0xb8) = in_stack_00000040;
    *(long *)(unaff_x26 + 0xd0) = in_stack_00000978;
    *(long *)(unaff_x26 + 200) = lVar26;
    *(undefined8 *)(unaff_x26 + 0x70) = uVar16;
    *(undefined8 *)(unaff_x26 + 0x68) = uVar12;
    *(undefined8 *)(unaff_x26 + 0x80) = uVar23;
    *(undefined8 *)(unaff_x26 + 0x78) = uVar20;
    *(undefined8 *)(unaff_x26 + 0x90) = uVar17;
    *(undefined8 *)(unaff_x26 + 0x88) = uVar13;
    *(undefined8 *)(unaff_x26 + 0xa0) = in_stack_00000038;
    *(long *)(unaff_x26 + 0x98) = in_stack_00000048;
    *(undefined8 *)(unaff_x26 + 0x30) = uVar18;
    *(undefined8 *)(unaff_x26 + 0x28) = uVar14;
    *(undefined8 *)(unaff_x26 + 0x40) = uVar24;
    *(undefined8 *)(unaff_x26 + 0x38) = uVar21;
    *(undefined8 *)(unaff_x26 + 0x50) = uVar25;
    *(undefined8 *)(unaff_x26 + 0x48) = uVar22;
    *(undefined8 *)(unaff_x26 + 0x60) = uVar19;
    *(undefined8 *)(unaff_x26 + 0x58) = uVar15;
    *(undefined8 *)(unaff_x26 + 0x20) = in_stack_00000990;
    *(long *)(unaff_x26 + 0x18) = in_stack_00000988;
    lVar26 = func_0x000103cda7b0(in_stack_00000070,in_stack_00000018,&stack0x00000988,
                                 in_stack_00000010._4_4_);
    if (lVar26 != 0) {
      FUN_100e0c53c(&stack0x00000988);
      goto LAB_101079d04;
    }
    in_stack_00000c68 = *(undefined8 *)(unaff_x27 + 0xd0);
    in_stack_00000c60 = *(undefined8 *)(unaff_x27 + 200);
    in_stack_00000c78 = *(undefined8 *)(unaff_x27 + 0xe0);
    in_stack_00000c70 = *(undefined8 *)(unaff_x27 + 0xd8);
    in_stack_00000c88 = *(undefined8 *)(unaff_x27 + 0xf0);
    in_stack_00000c80 = *(undefined8 *)(unaff_x27 + 0xe8);
    in_stack_00000c98 = *(undefined8 *)(unaff_x27 + 0x100);
    in_stack_00000c90 = *(undefined8 *)(unaff_x27 + 0xf8);
    in_stack_00000c28 = *(undefined8 *)(unaff_x27 + 0x90);
    in_stack_00000c20 = *(undefined8 *)(unaff_x27 + 0x88);
    in_stack_00000c38 = *(undefined8 *)(unaff_x27 + 0xa0);
    in_stack_00000c30 = *(undefined8 *)(unaff_x27 + 0x98);
    in_stack_00000c48 = *(undefined8 *)(unaff_x27 + 0xb0);
    in_stack_00000c40 = *(undefined8 *)(unaff_x27 + 0xa8);
    in_stack_00000c58 = *(undefined8 *)(unaff_x27 + 0xc0);
    in_stack_00000c50 = *(undefined8 *)(unaff_x27 + 0xb8);
    in_stack_00000be8 = *(undefined8 *)(unaff_x27 + 0x50);
    in_stack_00000be0 = *(undefined8 *)(unaff_x27 + 0x48);
    in_stack_00000bf8 = *(undefined8 *)(unaff_x27 + 0x60);
    in_stack_00000bf0 = *(undefined8 *)(unaff_x27 + 0x58);
    in_stack_00000c08 = *(undefined8 *)(unaff_x27 + 0x70);
    in_stack_00000c00 = *(undefined8 *)(unaff_x27 + 0x68);
    in_stack_00000c18 = *(undefined8 *)(unaff_x27 + 0x80);
    in_stack_00000c10 = *(undefined8 *)(unaff_x27 + 0x78);
    in_stack_00000ba8 = *(undefined8 *)(unaff_x27 + 0x10);
    in_stack_00000ba0 = *(undefined8 *)(unaff_x27 + 8);
    in_stack_00000bb8 = *(undefined8 *)(unaff_x27 + 0x20);
    in_stack_00000bb0 = *(undefined8 *)(unaff_x27 + 0x18);
    in_stack_00000bc8 = *(undefined8 *)(unaff_x27 + 0x30);
    in_stack_00000bc0 = *(undefined8 *)(unaff_x27 + 0x28);
    in_stack_00000bd8 = *(undefined8 *)(unaff_x27 + 0x40);
    in_stack_00000bd0 = *(undefined8 *)(unaff_x27 + 0x38);
    in_stack_00000738 = 0x8000000000000000;
    in_stack_00000758 =
         CONCAT44(CONCAT31((int3)((uint)in_stack_00000a8c >> 8),1),(int)&stack0x000008a0);
    in_stack_00000750 = 1;
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000070);
    }
    if (in_stack_00000058 != 0) goto LAB_10107a0bc;
  }
LAB_10107a0c0:
  *(undefined8 *)(unaff_x20 + 0xd0) = in_stack_00000c68;
  *(undefined8 *)(unaff_x20 + 200) = in_stack_00000c60;
  *(undefined8 *)(unaff_x20 + 0xe0) = in_stack_00000c78;
  *(undefined8 *)(unaff_x20 + 0xd8) = in_stack_00000c70;
  *(undefined8 *)(unaff_x20 + 0xf0) = in_stack_00000c88;
  *(undefined8 *)(unaff_x20 + 0xe8) = in_stack_00000c80;
  *(undefined8 *)(unaff_x20 + 0x100) = in_stack_00000c98;
  *(undefined8 *)(unaff_x20 + 0xf8) = in_stack_00000c90;
  *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000c28;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000c20;
  *(undefined8 *)(unaff_x20 + 0xa0) = in_stack_00000c38;
  *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000c30;
  *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000c48;
  *(undefined8 *)(unaff_x20 + 0xa8) = in_stack_00000c40;
  *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000c58;
  *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000c50;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000be8;
  *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000be0;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000bf8;
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000bf0;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000c08;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000c00;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000c18;
  *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000c10;
  *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000ba8;
  *(undefined8 *)(unaff_x20 + 8) = in_stack_00000ba0;
  *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000bb8;
  *(undefined8 *)(unaff_x20 + 0x18) = in_stack_00000bb0;
  *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000bc8;
  *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000bc0;
  *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000bd8;
  *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000bd0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = in_stack_00000a58;
  *(undefined8 *)(unaff_x20 + 0x1d0) = in_stack_00000a50;
  *(undefined8 *)(unaff_x20 + 0x1e8) = in_stack_00000738;
  *(long *)(unaff_x20 + 0x1e0) = in_stack_00000980;
  *(undefined8 *)(unaff_x20 + 0x1f8) = in_stack_00000a78;
  *(undefined8 *)(unaff_x20 + 0x1f0) = in_stack_00000a70;
  *(undefined8 *)(unaff_x20 + 0x208) = in_stack_00000758;
  *(undefined8 *)(unaff_x20 + 0x200) = in_stack_00000750;
  *(undefined8 *)(unaff_x20 + 0x198) = in_stack_00000a18;
  *(undefined8 *)(unaff_x20 + 400) = in_stack_00000a10;
  *(undefined8 *)(unaff_x20 + 0x1a8) = in_stack_00000a28;
  *(undefined8 *)(unaff_x20 + 0x1a0) = in_stack_00000a20;
  *(undefined8 *)(unaff_x20 + 0x1b8) = in_stack_00000a38;
  *(undefined8 *)(unaff_x20 + 0x1b0) = in_stack_00000a30;
  *(undefined8 *)(unaff_x20 + 0x1c8) = in_stack_00000a48;
  *(undefined8 *)(unaff_x20 + 0x1c0) = in_stack_00000a40;
  *(undefined8 *)(unaff_x20 + 0x158) = in_stack_000009d8;
  *(undefined8 *)(unaff_x20 + 0x150) = in_stack_000009d0;
  *(undefined8 *)(unaff_x20 + 0x168) = in_stack_000009e8;
  *(undefined8 *)(unaff_x20 + 0x160) = in_stack_000009e0;
  *(undefined8 *)(unaff_x20 + 0x178) = in_stack_000009f8;
  *(undefined8 *)(unaff_x20 + 0x170) = in_stack_000009f0;
  *(undefined8 *)(unaff_x20 + 0x188) = in_stack_00000a08;
  *(undefined8 *)(unaff_x20 + 0x180) = in_stack_00000a00;
  *(undefined1 **)(unaff_x20 + 0x118) = in_stack_00000008;
  *(undefined8 *)(unaff_x20 + 0x110) = in_stack_00000030;
  *(long *)(unaff_x20 + 0x128) = in_stack_000009a8;
  *(long *)(unaff_x20 + 0x120) = in_stack_000009a0;
  *(undefined8 *)(unaff_x20 + 0x138) = in_stack_000009b8;
  *(undefined8 *)(unaff_x20 + 0x130) = in_stack_000009b0;
  *(undefined8 *)(unaff_x20 + 0x148) = in_stack_000009c8;
  *(undefined8 *)(unaff_x20 + 0x140) = in_stack_000009c0;
  if (*(char *)(unaff_x23 + 0x48) == '\x01') {
LAB_10107a36c:
    *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000028;
  }
  else if (*(char *)(unaff_x23 + 0x48) != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE();
    *(undefined1 *)(unaff_x23 + 0x48) = 1;
    goto LAB_10107a36c;
  }
  if (in_stack_00000060 == 0x8000000000000002) {
    uVar8 = *unaff_x19;
    do {
      if ((uVar8 & 1) == 0) goto LAB_10107a2e8;
      if (((uint)uVar8 >> 5 & 1) != 0) {
        uVar9 = 3;
        goto LAB_10107a280;
      }
      if (((uint)uVar8 >> 2 & 1) == 0) {
        if (uVar8 < 0x40) goto LAB_10107a2d0;
        uVar10 = (uVar8 & 0xffffffffffffffde) - 0x40;
        uVar9 = 2;
        if (0x3f < uVar10) {
          uVar9 = 0;
        }
      }
      else {
        if ((long)uVar8 < 0) goto LAB_10107a300;
        uVar10 = (uVar8 & 0xffffffffffffffde) + 0x40;
        uVar9 = 1;
      }
      bVar1 = *unaff_x19 != uVar8;
      uVar8 = *unaff_x19;
    } while (bVar1);
    *unaff_x19 = uVar10;
LAB_10107a280:
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        return;
      }
      __ZN103__LT_tokio__runtime__blocking__schedule__BlockingSchedule_u20_as_u20_tokio__runtime__task__Schedule_GT_8schedule17h14b32b2ca08f83f8E
                (unaff_x19 + 4);
LAB_10107a2d0:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9d6,0x26,&UNK_10b4cddf0);
LAB_10107a2e8:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb879,0x23,&UNK_10b4cdd00);
LAB_10107a300:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
      func_0x000108a079f0(&UNK_108ca1ac4,0x2d,&UNK_10b2093f8);
LAB_10107a350:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10107a354);
      (*pcVar7)();
    }
    if (uVar9 == 2) {
      FUN_100db585c();
      _free();
      return;
    }
    FUN_1010d5364(unaff_x19 + 4,&stack0x00000ba0);
    FUN_1010d5364(unaff_x19 + 4,&stack0x00000988);
  }
  else {
    FUN_1010d5364(unaff_x19 + 4,&stack0x00000988);
    FUN_1010d5364(unaff_x19 + 4,&stack0x00000ba0);
  }
  FUN_101108c4c();
  return;
}

