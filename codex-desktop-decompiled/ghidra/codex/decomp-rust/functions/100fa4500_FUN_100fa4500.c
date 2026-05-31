
/* WARNING: Removing unreachable block (ram,0x000100faa5d4) */
/* WARNING: Removing unreachable block (ram,0x000100faa504) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_100fa4500(void)

{
  ushort *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x19;
  undefined8 *puVar14;
  long unaff_x20;
  long *plVar15;
  undefined8 unaff_x21;
  long lVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined1 *unaff_x26;
  long *plVar21;
  long unaff_x27;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 *in_stack_000000b0;
  undefined1 *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long *in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long *in_stack_00005f80;
  long *in_stack_00005f88;
  long *in_stack_00005f90;
  ulong in_stack_00005f98;
  undefined8 in_stack_00005fa0;
  undefined8 in_stack_00005fa8;
  undefined8 in_stack_00005fb0;
  undefined8 in_stack_00005fb8;
  undefined8 in_stack_00005fc0;
  undefined8 in_stack_00005fc8;
  undefined8 in_stack_00005fd0;
  undefined8 in_stack_00005fd8;
  undefined8 in_stack_00005fe0;
  undefined8 in_stack_00005fe8;
  undefined8 in_stack_00005ff0;
  undefined8 in_stack_00005ff8;
  undefined8 in_stack_00006000;
  undefined8 in_stack_00006008;
  int in_stack_00006010;
  char cVar24;
  long *in_stack_0000e210;
  long *in_stack_0000e218;
  long *in_stack_0000e220;
  long *in_stack_00010910;
  long *plVar25;
  long *in_stack_00010918;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00010910,s___108ab8993,&stack0x00005f80);
  uVar18 = *unaff_x19;
  *(undefined8 *)(in_stack_000000f8 + 0x2ec0) = unaff_x19[1];
  *(undefined8 *)(in_stack_000000f8 + 0x2eb8) = uVar18;
  lVar16 = unaff_x19[2];
  *(long *)(in_stack_000000f8 + 0x2ec8) = lVar16;
  uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x2eb0);
  uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x2ec0);
  if (lVar16 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar16,1);
    if (lVar8 == 0) {
      func_0x0001087c9084(1,lVar16);
      goto LAB_100fb1ca4;
    }
  }
  _memcpy(lVar8,uVar18,lVar16);
  FUN_1011d51fc(&stack0x0000e210,uVar19,&stack0x00012ee0,*(undefined8 *)(in_stack_000000f8 + 0x2ec0)
                ,*(undefined8 *)(in_stack_000000f8 + 0x2ec8));
  _memcpy(&stack0x00005f80,&stack0x0000e210,0x110);
  auVar23 = __ZN20codex_model_provider4auth23auth_provider_from_auth17h1d4b85161056ffcaE
                      (in_stack_000000f8 + unaff_x20);
  plVar17 = auVar23._8_8_;
  plVar21 = auVar23._0_8_;
  (*(code *)plVar17[4])
            (&stack0x0000e210,(long)plVar21 + (plVar17[2] - 1U & 0xfffffffffffffff0) + 0x10);
  __ZN12codex_client14default_client19CodexRequestBuilder7headers17h601ccdbb0a4d4e69E
            (&stack0x00010910,&stack0x00005f80,&stack0x0000e210);
  _memcpy(&stack0x00005f80,&stack0x00010910,0x110);
  FUN_1011d5650(&stack0x0000e210,&stack0x00005f80,&UNK_108cad010,0xf,&UNK_108cad01f,5);
  _memcpy(&stack0x00005f80,&stack0x0000e210,0x110);
  FUN_1011d5650(&stack0x00010910,&stack0x00005f80,&UNK_108ca7be3,0xc,&UNK_108c57210,0x10);
  _memcpy(&stack0x0000e3d0,&stack0x00010910,0x110);
  *(undefined1 *)(in_stack_000000e0 + 0x2bf) = 1;
  lVar16 = *plVar21;
  *plVar21 = lVar16 + -1;
  LORelease();
  if (lVar16 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001046b10a8(&stack0x00012ee0);
  }
  uVar3 = *(uint *)(in_stack_000000f8 + 0x2e00);
  if (uVar3 != 1000000000) {
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x2df8);
    *(undefined1 *)(in_stack_000000e0 + 0x2bf) = 0;
    _memcpy(&stack0x00005f80,&stack0x0000e3d0,0x140);
    __ZN12codex_client14default_client19CodexRequestBuilder7timeout17h26aea1b2176d3533E
              (&stack0x00010910,&stack0x00005f80,uVar18,(long *)(ulong)uVar3);
    *(undefined1 *)(in_stack_000000e0 + 0x2bf) = 1;
    _memcpy(&stack0x0000e3d0,&stack0x00010910,0x140);
  }
  *(undefined1 *)(in_stack_000000e0 + 0x2bf) = 0;
  _memcpy(in_stack_000000f8 + unaff_x27,&stack0x0000e3d0,0x140);
  *(undefined1 *)(in_stack_000000e0 + 0x555) = 0;
  puVar1 = (ushort *)(in_stack_000000e0 + 0x2c5);
  FUN_10072d0a8(&stack0x00005f80,puVar1,in_stack_000000f0);
  if (in_stack_00005f80 == (long *)0x4) {
    uVar10 = 5;
    in_stack_00005f88 = (long *)(ulong)uVar3;
    goto LAB_100fa207c;
  }
  FUN_100cadf84(puVar1);
  if (in_stack_00005f80 == (long *)0x3) {
    in_stack_0000e218 = (long *)FUN_108854894(in_stack_00005f88,&UNK_108cad094,0x16);
    in_stack_00005f80 = in_stack_00010910;
    in_stack_00005f88 = in_stack_00010918;
    goto LAB_100faa678;
  }
  *(undefined8 *)(in_stack_000000f8 + 0x2f48) = in_stack_00005ff8;
  *(undefined8 *)(in_stack_000000f8 + 0x2f40) = in_stack_00005ff0;
  *(undefined8 *)(in_stack_000000f8 + 0x2f38) = in_stack_00005fe8;
  *(undefined8 *)(in_stack_000000f8 + 0x2f30) = in_stack_00005fe0;
  *(undefined8 *)(in_stack_000000f8 + 0x2f28) = in_stack_00005fd8;
  *(undefined8 *)(in_stack_000000f8 + 0x2f20) = in_stack_00005fd0;
  *(ulong *)(in_stack_000000f8 + 0x2ee8) = in_stack_00005f98;
  *(long **)(in_stack_000000f8 + 12000) = in_stack_00005f90;
  *(undefined8 *)(in_stack_000000f8 + 0x2ef8) = in_stack_00005fa8;
  *(undefined8 *)(in_stack_000000f8 + 0x2ef0) = in_stack_00005fa0;
  *(undefined8 *)(in_stack_000000f8 + 0x2f08) = in_stack_00005fb8;
  *(undefined8 *)(in_stack_000000f8 + 0x2f00) = in_stack_00005fb0;
  *(undefined1 *)(in_stack_000000e0 + 0x2be) = 1;
  *(long **)(in_stack_000000f8 + 0x2ed0) = in_stack_00005f80;
  *(long **)(in_stack_000000f8 + 0x2ed8) = in_stack_00005f88;
  *(undefined8 *)(in_stack_000000f8 + 0x2f50) = in_stack_00006000;
  *(undefined8 *)(in_stack_000000f8 + 0x2f18) = in_stack_00005fc8;
  *(undefined8 *)(in_stack_000000f8 + 0x2f10) = in_stack_00005fc0;
  if (*(ushort *)(in_stack_000000e0 + 0x29d) - 200 < 100) {
    *(undefined1 *)(in_stack_000000e0 + 0x2be) = 0;
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x2f30);
    uVar22 = *(undefined8 *)(in_stack_000000f8 + 0x2f48);
    uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x2f40);
    *(undefined8 *)(in_stack_000000e0 + 0x32d) = *(undefined8 *)(in_stack_000000f8 + 0x2f38);
    *(undefined8 *)(in_stack_000000e0 + 0x325) = uVar18;
    *(undefined8 *)(in_stack_000000e0 + 0x33d) = uVar22;
    *(undefined8 *)(in_stack_000000e0 + 0x335) = uVar19;
    *(undefined8 *)(in_stack_000000e0 + 0x345) = *(undefined8 *)(in_stack_000000f8 + 0x2f50);
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x2ef0);
    uVar22 = *(undefined8 *)(in_stack_000000f8 + 0x2f08);
    uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x2f00);
    *(undefined8 *)(in_stack_000000e0 + 0x2ed) = *(undefined8 *)(in_stack_000000f8 + 0x2ef8);
    *(undefined8 *)(in_stack_000000e0 + 0x2e5) = uVar18;
    *(undefined8 *)(in_stack_000000e0 + 0x2fd) = uVar22;
    *(undefined8 *)(in_stack_000000e0 + 0x2f5) = uVar19;
    uVar22 = *(undefined8 *)(in_stack_000000f8 + 0x2f10);
    uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x2f28);
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x2f20);
    *(undefined8 *)(in_stack_000000e0 + 0x30d) = *(undefined8 *)(in_stack_000000f8 + 0x2f18);
    *(undefined8 *)(in_stack_000000e0 + 0x305) = uVar22;
    *(undefined8 *)(in_stack_000000e0 + 0x31d) = uVar19;
    *(undefined8 *)(in_stack_000000e0 + 0x315) = uVar18;
    uVar22 = *(undefined8 *)(in_stack_000000f8 + 0x2ed0);
    uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x2ee8);
    uVar18 = *(undefined8 *)(in_stack_000000f8 + 12000);
    *(undefined8 *)(in_stack_000000e0 + 0x2cd) = *(undefined8 *)(in_stack_000000f8 + 0x2ed8);
    *(undefined8 *)puVar1 = uVar22;
    *(undefined8 *)(in_stack_000000e0 + 0x2dd) = uVar19;
    *(undefined8 *)(in_stack_000000e0 + 0x2d5) = uVar18;
    puVar2 = (undefined1 *)(in_stack_000000e0 + 0x4f5);
    *(undefined1 *)(in_stack_000000e0 + 0x4f5) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x3068) = *(undefined8 *)(in_stack_000000e0 + 0x345);
    uVar18 = *(undefined8 *)(in_stack_000000e0 + 0x325);
    uVar22 = *(undefined8 *)(in_stack_000000e0 + 0x33d);
    uVar19 = *(undefined8 *)(in_stack_000000e0 + 0x335);
    *(undefined8 *)(in_stack_000000f8 + 0x3050) = *(undefined8 *)(in_stack_000000e0 + 0x32d);
    *(undefined8 *)(in_stack_000000f8 + 0x3048) = uVar18;
    *(undefined8 *)(in_stack_000000f8 + 0x3060) = uVar22;
    *(undefined8 *)(in_stack_000000f8 + 0x3058) = uVar19;
    uVar18 = *(undefined8 *)(in_stack_000000e0 + 0x2e5);
    uVar22 = *(undefined8 *)(in_stack_000000e0 + 0x2fd);
    uVar19 = *(undefined8 *)(in_stack_000000e0 + 0x2f5);
    *(undefined8 *)(in_stack_000000f8 + 0x3010) = *(undefined8 *)(in_stack_000000e0 + 0x2ed);
    *(undefined8 *)(in_stack_000000f8 + 0x3008) = uVar18;
    *(undefined8 *)(in_stack_000000f8 + 0x3020) = uVar22;
    *(undefined8 *)(in_stack_000000f8 + 0x3018) = uVar19;
    uVar22 = *(undefined8 *)(in_stack_000000e0 + 0x305);
    uVar19 = *(undefined8 *)(in_stack_000000e0 + 0x31d);
    uVar18 = *(undefined8 *)(in_stack_000000e0 + 0x315);
    *(undefined8 *)(in_stack_000000f8 + 0x3030) = *(undefined8 *)(in_stack_000000e0 + 0x30d);
    *(undefined8 *)(in_stack_000000f8 + 0x3028) = uVar22;
    *(undefined8 *)(in_stack_000000f8 + 0x3040) = uVar19;
    *(undefined8 *)(in_stack_000000f8 + 0x3038) = uVar18;
    uVar22 = *(undefined8 *)puVar1;
    uVar19 = *(undefined8 *)(in_stack_000000e0 + 0x2dd);
    uVar18 = *(undefined8 *)(in_stack_000000e0 + 0x2d5);
    *(undefined8 *)(in_stack_000000f8 + 0x2ff0) = *(undefined8 *)(in_stack_000000e0 + 0x2cd);
    *(undefined8 *)(in_stack_000000f8 + 0x2fe8) = uVar22;
    *(undefined8 *)(in_stack_000000f8 + 0x3000) = uVar19;
    *(undefined8 *)(in_stack_000000f8 + 0x2ff8) = uVar18;
    *(undefined1 *)(in_stack_000000e0 + 0x4ed) = 0;
    FUN_1011d7320(&stack0x00005f80,in_stack_000000f8 + 0x2fe8,in_stack_000000f0);
    if ((int)in_stack_00005f80 == 1) {
      *puVar2 = 3;
      uVar10 = 6;
      goto LAB_100fa207c;
    }
    if (*(char *)(in_stack_000000e0 + 0x4ed) == '\x03') {
      FUN_100da9d08(in_stack_000000f8 + 0x30f8);
      plVar15 = *(long **)(in_stack_000000f8 + 0x30f0);
      if (*plVar15 != 0) {
        _free(plVar15[1]);
      }
      _free(plVar15);
    }
    else if (*(char *)(in_stack_000000e0 + 0x4ed) == '\0') {
      FUN_100e0d524(in_stack_000000f8 + 0x2fe8);
    }
    if (in_stack_00005f88 != (long *)0x0) {
      in_stack_00005fb0 = 0;
      uVar12 = 0;
      if (in_stack_00005f98 != 0) {
        do {
          bVar4 = *(byte *)((long)in_stack_00005f90 + uVar12);
          if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
            cVar24 = (char)((ulong)in_stack_0000e210 >> 8);
            if (bVar4 != 0x5b) {
              if (bVar4 == 0x7b) {
                lVar16 = uVar12 + 1;
                plVar15 = (long *)0x8000000000000001;
                plVar25 = in_stack_000000f0;
                goto LAB_100fa5d10;
              }
              plVar21 = (long *)FUN_108831eec(&stack0x00005f80,&stack0x0000df40,&UNK_10b24f058);
              goto LAB_100faa5a8;
            }
            FUN_1011de2a4(&stack0x0000e210,&stack0x00012ee0);
            if ((char)in_stack_0000e210 == '\x01') {
LAB_100fa9af4:
              in_stack_0000e210 = (long *)0x8000000000000001;
              in_stack_0000e220 = in_stack_000000f0;
            }
            else {
              if (cVar24 != '\x01') {
                in_stack_0000e218 = (long *)FUN_1087e422c(0,&UNK_10b22cbd0,&UNK_10b20a590);
                goto LAB_100fa9af4;
              }
              func_0x0001012d4574(&stack0x0000e210,&stack0x00005f80);
              if (in_stack_0000e210 == (long *)0x8000000000000001) goto LAB_100fa9af4;
            }
            plVar17 = (long *)FUN_100654840(&stack0x00005f80);
            in_stack_000000f0 = in_stack_0000e220;
            if (in_stack_0000e210 == (long *)0x8000000000000001) {
              plVar21 = in_stack_0000e218;
              if (plVar17 == (long *)0x0) goto LAB_100faa5a8;
              lVar16 = *plVar17;
              if (lVar16 != 1) goto LAB_100faa43c;
              FUN_100de21d4(plVar17 + 1);
              goto LAB_100faa5a0;
            }
            if (plVar17 == (long *)0x0) goto LAB_100faa4a4;
            plVar21 = plVar17;
            if (in_stack_0000e210 == (long *)0x8000000000000000) goto LAB_100faa5a8;
            if (in_stack_0000e220 != (long *)0x0) {
              plVar17 = in_stack_0000e218 + 1;
              plVar15 = in_stack_0000e220;
              do {
                if ((plVar17[-1] & 0x7fffffffffffffffU) != 0) {
                  _free(*plVar17);
                }
                plVar17 = plVar17 + 3;
                plVar15 = (long *)((long)plVar15 + -1);
                in_stack_0000e220 = (long *)0x0;
              } while (plVar15 != (long *)0x0);
            }
            goto LAB_100faa510;
          }
          uVar12 = uVar12 + 1;
        } while (in_stack_00005f98 != uVar12);
      }
      uVar18 = FUN_108831e2c(&stack0x00005f80,&stack0x0000e210);
      goto LAB_100faa5cc;
    }
    *puVar2 = 1;
    in_stack_0000e210 = (long *)0x8000000000000001;
    in_stack_0000e218 = in_stack_00005f90;
    goto LAB_100faa644;
  }
  *puVar1 = *(ushort *)(in_stack_000000e0 + 0x29d);
  *(undefined1 *)(in_stack_000000e0 + 0x2be) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x2fd0) = *(undefined8 *)(in_stack_000000f8 + 0x2f38);
  *(undefined8 *)(in_stack_000000f8 + 0x2fc8) = *(undefined8 *)(in_stack_000000f8 + 0x2f30);
  *(undefined8 *)(in_stack_000000f8 + 0x2fe0) = *(undefined8 *)(in_stack_000000f8 + 0x2f48);
  *(undefined8 *)(in_stack_000000f8 + 0x2fd8) = *(undefined8 *)(in_stack_000000f8 + 0x2f40);
  *(undefined8 *)(in_stack_000000f8 + 0x2fe8) = *(undefined8 *)(in_stack_000000f8 + 0x2f50);
  *(undefined8 *)(in_stack_000000f8 + 0x2f90) = *(undefined8 *)(in_stack_000000f8 + 0x2ef8);
  *(undefined8 *)(in_stack_000000f8 + 0x2f88) = *(undefined8 *)(in_stack_000000f8 + 0x2ef0);
  *(undefined8 *)(in_stack_000000f8 + 0x2fa0) = *(undefined8 *)(in_stack_000000f8 + 0x2f08);
  *(undefined8 *)(in_stack_000000f8 + 0x2f98) = *(undefined8 *)(in_stack_000000f8 + 0x2f00);
  *(undefined8 *)(in_stack_000000f8 + 0x2fb0) = *(undefined8 *)(in_stack_000000f8 + 0x2f18);
  *(undefined8 *)(in_stack_000000f8 + 0x2fa8) = *(undefined8 *)(in_stack_000000f8 + 0x2f10);
  *(undefined8 *)(in_stack_000000f8 + 0x2fc0) = *(undefined8 *)(in_stack_000000f8 + 0x2f28);
  *(undefined8 *)(in_stack_000000f8 + 0x2fb8) = *(undefined8 *)(in_stack_000000f8 + 0x2f20);
  *(undefined8 *)(in_stack_000000f8 + 0x2f70) = *(undefined8 *)(in_stack_000000f8 + 0x2ed8);
  *(undefined8 *)(in_stack_000000f8 + 0x2f68) = *(undefined8 *)(in_stack_000000f8 + 0x2ed0);
  *(undefined8 *)(in_stack_000000f8 + 0x2f80) = *(undefined8 *)(in_stack_000000f8 + 0x2ee8);
  *(undefined8 *)(in_stack_000000f8 + 0x2f78) = *(undefined8 *)(in_stack_000000f8 + 12000);
  *(undefined1 *)(in_stack_000000e0 + 0x685) = 0;
  FUN_1011d6b78(&stack0x00005f80,in_stack_000000f8 + 0x2f68,in_stack_000000f0);
  if (in_stack_00005f80 != (long *)0x8000000000000001) {
    if (*(char *)(in_stack_000000e0 + 0x685) == '\x03') {
      FUN_100cbe7c8(in_stack_000000f8 + 0x2ff0);
    }
    else if (*(char *)(in_stack_000000e0 + 0x685) == '\0') {
      FUN_100e0d524(in_stack_000000f8 + 0x2f68);
    }
    if (in_stack_00005f80 == (long *)0x8000000000000000) {
      in_stack_00005f80 = (long *)0x0;
      FUN_100de20f8(in_stack_00005f88);
      _free(in_stack_00005f88);
      in_stack_00005f88 = (long *)0x1;
    }
    in_stack_0000e218 =
         (long *)FUN_108858fa8(s_Request_failed_with_status___108ac696a,&stack0x00005f80);
    if (in_stack_00005f80 != (long *)0x0) {
      _free(in_stack_00005f88);
    }
    goto LAB_100faa678;
  }
  uVar10 = 7;
  goto LAB_100fa207c;
LAB_100fa5d10:
  plVar20 = plVar25;
  FUN_1011dda68(&stack0x0000e210,&stack0x0000e1a0);
  plVar9 = in_stack_0000e218;
  if ((char)in_stack_0000e210 == '\x01') goto joined_r0x000100faa390;
  if (cVar24 != '\x01') {
    bVar6 = plVar15 != (long *)0x8000000000000001;
    in_stack_0000e220 = (long *)0x8000000000000000;
    if (bVar6) {
      in_stack_0000e220 = plVar20;
    }
    in_stack_0000e218 = (long *)0x8000000000000000;
    if (bVar6) {
      in_stack_0000e218 = in_stack_000000f0;
    }
    in_stack_0000e210 = (long *)0x8000000000000000;
    if (bVar6) {
      in_stack_0000e210 = plVar15;
    }
    goto LAB_100faa3e4;
  }
  uVar11 = lVar16 + 1;
  __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
            (&stack0x0000e210,&stack0x00005f98,&stack0x00005f80);
  if (in_stack_0000e210 != (long *)0x2) {
    if ((in_stack_0000e220 == (long *)0x16) &&
       ((*in_stack_0000e218 == 0x5f746e6572727563 && in_stack_0000e218[1] == 0x7361745f66666964) &&
        *(long *)((long)in_stack_0000e218 + 0xe) == 0x6e7275745f6b7361)) {
      if (plVar15 != (long *)0x8000000000000001) {
        plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x0000e210);
        goto joined_r0x000100fad24c;
      }
      if (uVar11 < in_stack_00005f98) {
        while( true ) {
          bVar4 = *(byte *)((long)in_stack_00005f90 + uVar11);
          if (0x3a < bVar4) goto LAB_100fad290;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          uVar11 = uVar11 + 1;
          if (in_stack_00005f98 == uVar11) goto LAB_100fab794;
        }
        if ((ulong)bVar4 == 0x3a) goto code_r0x000100fa5e8c;
LAB_100fad290:
        in_stack_000000f0 = (long *)FUN_108831e2c(&stack0x00005f80,&stack0x0000e210);
      }
      else {
LAB_100fab794:
        in_stack_000000f0 = (long *)FUN_108831e2c(&stack0x00005f80,&stack0x0000e210);
      }
      goto LAB_100fab7c8;
    }
    if (uVar11 < in_stack_00005f98) {
      while( true ) {
        bVar4 = *(byte *)((long)in_stack_00005f90 + uVar11);
        if (0x3a < bVar4) goto LAB_100fac070;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        uVar11 = uVar11 + 1;
        if (in_stack_00005f98 == uVar11) goto LAB_100fa8e0c;
      }
      if ((ulong)bVar4 != 0x3a) {
LAB_100fac070:
        plVar9 = (long *)FUN_108831e2c(&stack0x00005f80,&stack0x0000e210);
        goto joined_r0x000100faa390;
      }
      lVar16 = uVar11 + 1;
      plVar9 = (long *)FUN_100651420(&stack0x00005f80);
      plVar25 = plVar20;
      if (plVar9 == (long *)0x0) goto LAB_100fa5d10;
    }
    else {
LAB_100fa8e0c:
      plVar9 = (long *)FUN_108831e2c(&stack0x00005f80,&stack0x0000e210);
    }
  }
joined_r0x000100faa390:
  in_stack_0000e218 = plVar9;
  in_stack_0000e210 = (long *)0x8000000000000001;
  in_stack_0000e220 = plVar20;
  if (plVar15 != (long *)0x8000000000000001) {
joined_r0x000100fad24c:
    if (plVar15 != (long *)0x8000000000000000) {
      if (plVar20 != (long *)0x0) {
        plVar21 = in_stack_000000f0 + 1;
        plVar17 = plVar20;
        do {
          if ((plVar21[-1] & 0x7fffffffffffffffU) != 0) {
            _free(*plVar21);
          }
          plVar21 = plVar21 + 3;
          plVar17 = (long *)((long)plVar17 + -1);
          plVar20 = (long *)0x0;
        } while (plVar17 != (long *)0x0);
      }
      if (plVar15 != (long *)0x0) {
        _free(in_stack_000000f0);
      }
    }
    in_stack_0000e218 = plVar9;
    in_stack_0000e210 = (long *)0x8000000000000001;
    in_stack_0000e220 = plVar20;
  }
  goto LAB_100faa3e4;
code_r0x000100fa5e8c:
  lVar16 = uVar11 + 1;
  func_0x0001012d4574(&stack0x00012ee0,&stack0x00005f80);
  plVar15 = plVar21;
  plVar25 = (long *)0x0;
  in_stack_000000f0 = plVar17;
  if (plVar21 == (long *)0x8000000000000001) goto LAB_100fab7c8;
  goto LAB_100fa5d10;
code_r0x000100fa27bc:
  lVar16 = lVar16 + -0x18;
  plVar15 = plVar25 + 3;
  if (*plVar25 != -0x8000000000000000) goto code_r0x000100fa27cc;
  goto LAB_100fa27b8;
code_r0x000100fa27cc:
  lVar16 = plVar25[1];
  lVar8 = plVar25[2];
  *(undefined1 *)(in_stack_000000e0 + 0x14e) = 0;
  *(long **)(in_stack_000000f8 + 0x2db8) = plVar17;
  *(long **)(in_stack_000000f8 + 0x2dc0) = plVar21;
  *(undefined8 *)(in_stack_000000f8 + 0x2dc8) = uVar18;
  *(long *)(in_stack_000000f8 + 0x2dd0) = lVar16;
  *(long *)(in_stack_000000f8 + 0x2dd8) = lVar8;
  *(undefined1 *)(in_stack_000000e0 + 0x145) = 0;
  __ZN3std3env11current_dir17he7f55ba519818f7aE(&stack0x00005f80);
  plVar15 = in_stack_0000e210;
  plVar25 = in_stack_00005f88;
  if ((in_stack_0000e210 == (long *)0x8000000000000000) &&
     (__ZN3std3env8temp_dir17hdae32a1be2ce37beE(&stack0x00010910), plVar15 = in_stack_00005f80,
     plVar25 = in_stack_00010918, ((ulong)in_stack_00005f88 & 3) == 1)) {
    uVar18 = *(undefined8 *)((long)in_stack_00005f88 + -1);
    puVar13 = *(undefined8 **)((long)in_stack_00005f88 + 7);
    pcVar5 = (code *)*puVar13;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar18);
    }
    if (puVar13[1] != 0) {
      _free(uVar18);
    }
    _free((undefined8 *)((long)in_stack_00005f88 + -1));
  }
  plVar20 = plVar25;
  if ((plVar17 != (long *)0x8000000000000000) &&
     (bVar6 = plVar15 != (long *)0x0, plVar20 = plVar21, plVar15 = plVar17, bVar6)) {
    _free(plVar25);
  }
  if (lVar8 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar8,1);
    if (lVar7 == 0) {
      func_0x0001087c9084(1,lVar8);
LAB_100fb1ca4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
      (*pcVar5)();
    }
  }
  _memcpy(lVar7,lVar16,lVar8);
  __ZN15codex_git_utils5apply15apply_git_patch17h8d4de39cbbadcd15E
            (&stack0x00005f80,&stack0x0000e210);
  if (in_stack_0000e210 == (long *)0x8000000000000000) {
    in_stack_00005f88 = (long *)FUN_1088566c8();
LAB_100fa2a80:
    if (plVar15 != (long *)0x0) {
      _free(plVar20);
    }
  }
  else {
    if (in_stack_00006010 != 0) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000100,s_Git_apply_failed__applied____ski_108ac68d5,&stack0x00005f80);
      in_stack_00005f88 = (long *)FUN_108856624(&stack0x00012f70);
      FUN_100e09284(&stack0x00010910);
      goto LAB_100fa2a80;
    }
    func_0x00010602ab90(&UNK_108cacfcd,0x35);
    FUN_100e09284(&stack0x00010910);
    if (plVar15 != (long *)0x0) {
      _free(plVar20);
    }
    in_stack_00005f88 = (long *)0x0;
  }
  if (lVar8 != 0) {
    _free(lVar7);
  }
  *(undefined1 *)(in_stack_000000e0 + 0x145) = 1;
  plVar21 = *(long **)(in_stack_000000f8 + 0x2da8);
  lVar16 = *(long *)(in_stack_000000f8 + 0x2db0);
  if (lVar16 != 0) {
    plVar17 = plVar21 + 1;
    do {
      if ((plVar17[-1] & 0x7fffffffffffffffU) != 0) {
        _free(*plVar17);
      }
      plVar17 = plVar17 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  uVar12 = *(ulong *)(in_stack_000000f8 + 0x2da0);
joined_r0x000100fa2ae8:
  if (uVar12 != 0) {
    _free(plVar21);
  }
  *(undefined1 *)(in_stack_000000e0 + 0x14e) = 0;
  *(undefined1 *)(in_stack_000000e0 + 0x14d) = 1;
  FUN_100c96cc0(puVar14);
  *(undefined1 *)(in_stack_000000e0 + 0xb8) = 0;
  FUN_100de93d0(in_stack_000000f8 + 0x808);
  *(undefined1 *)(in_stack_000000e0 + 0xb7) = 0;
  lVar8 = *(long *)(in_stack_000000f8 + 0x7e0);
  lVar16 = *(long *)(in_stack_000000f8 + 0x7e8);
  if (lVar16 != 0) {
    puVar14 = (undefined8 *)(lVar8 + 8);
    do {
      if (puVar14[-1] != 0) {
        _free(*puVar14);
      }
      puVar14 = puVar14 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
LAB_100fa2bc8:
  if (*(long *)(in_stack_000000f8 + 0x7d8) != 0) {
    _free(lVar8);
  }
  *(undefined1 *)(in_stack_000000e0 + 0xb6) = 0;
  bVar6 = false;
  *in_stack_000000d8 = 1;
  goto LAB_100fa2bf0;
LAB_100fab7c8:
  in_stack_0000e218 = in_stack_000000f0;
  in_stack_0000e210 = (long *)0x8000000000000001;
  in_stack_0000e220 = plVar20;
LAB_100faa3e4:
  plVar17 = (long *)FUN_1006546a8(&stack0x00005f80);
  in_stack_000000f0 = in_stack_0000e220;
  if (in_stack_0000e210 == (long *)0x8000000000000001) {
    plVar21 = in_stack_0000e218;
    if (plVar17 != (long *)0x0) {
      lVar16 = *plVar17;
      if (lVar16 == 1) {
        FUN_100de21d4(plVar17 + 1);
      }
      else {
LAB_100faa43c:
        if ((lVar16 == 0) && (plVar17[2] != 0)) {
          _free(plVar17[1]);
        }
      }
LAB_100faa5a0:
      _free(plVar17);
      plVar21 = in_stack_0000e218;
      in_stack_000000f0 = in_stack_0000e220;
    }
LAB_100faa5a8:
    uVar18 = FUN_108832dfc(plVar21,&stack0x00005f80);
LAB_100faa5cc:
    in_stack_0000e210 = (long *)0x8000000000000001;
    in_stack_0000e218 = (long *)FUN_1011d7b00(&stack0x00005f80,uVar18);
  }
  else {
    if (plVar17 != (long *)0x0) {
      plVar21 = plVar17;
      if (in_stack_0000e210 != (long *)0x8000000000000000) {
        if (in_stack_0000e220 != (long *)0x0) {
          plVar17 = in_stack_0000e218 + 1;
          plVar15 = in_stack_0000e220;
          do {
            if ((plVar17[-1] & 0x7fffffffffffffffU) != 0) {
              _free(*plVar17);
            }
            plVar17 = plVar17 + 3;
            plVar15 = (long *)((long)plVar15 + -1);
            in_stack_0000e220 = (long *)0x0;
          } while (plVar15 != (long *)0x0);
        }
LAB_100faa510:
        plVar17 = in_stack_0000e218;
        in_stack_0000e218 = plVar21;
        in_stack_000000f0 = in_stack_0000e220;
        if (in_stack_0000e210 != (long *)0x0) goto LAB_100faa5a0;
      }
      goto LAB_100faa5a8;
    }
LAB_100faa4a4:
    uVar12 = uVar12 + 1;
    if (uVar12 < in_stack_00005f98) {
      do {
        if (0x20 < *(byte *)((long)in_stack_00005f90 + uVar12) ||
            (1L << ((ulong)*(byte *)((long)in_stack_00005f90 + uVar12) & 0x3f) & 0x100002600U) == 0)
        {
          uVar18 = FUN_108831e2c(&stack0x00005f80,&stack0x0000e210);
          if (in_stack_0000e210 != (long *)0x8000000000000000) {
            if (in_stack_000000f0 != (long *)0x0) {
              plVar21 = in_stack_0000e218 + 1;
              plVar17 = in_stack_000000f0;
              do {
                if ((plVar21[-1] & 0x7fffffffffffffffU) != 0) {
                  _free(*plVar21);
                }
                plVar21 = plVar21 + 3;
                plVar17 = (long *)((long)plVar17 + -1);
                in_stack_000000f0 = (long *)0x0;
              } while (plVar17 != (long *)0x0);
            }
            if (in_stack_0000e210 != (long *)0x0) {
              _free(in_stack_0000e218);
            }
          }
          goto LAB_100faa5cc;
        }
        uVar12 = uVar12 + 1;
      } while (in_stack_00005f98 != uVar12);
    }
  }
  in_stack_00005fb8 = CONCAT71((int7)((ulong)in_stack_00005fb8 >> 8),0x80);
  (*(code *)in_stack_00005f88[4])(&stack0x00010928,in_stack_00005f90,in_stack_00005f98);
  *puVar2 = 1;
  in_stack_00010910 = in_stack_00005f88;
  in_stack_00010918 = in_stack_00005f90;
  if (in_stack_0000e210 != (long *)0x8000000000000002) {
LAB_100faa644:
    FUN_100cfddd4(puVar1);
    in_stack_00005f80 = in_stack_00010910;
    if (in_stack_0000e210 == (long *)0x8000000000000001) {
      in_stack_0000e218 = (long *)FUN_108854894(in_stack_0000e218,&UNK_108cad0aa,0x1d);
      in_stack_00005f88 = in_stack_00010918;
LAB_100faa678:
      *(undefined2 *)(in_stack_000000e0 + 0x2be) = 0;
      if (*(long *)(in_stack_000000f8 + 0x2eb8) != 0) {
        _free(*(undefined8 *)(in_stack_000000f8 + 0x2ec0));
      }
      lVar16 = **(long **)(in_stack_000000f8 + 0x2eb0);
      **(long **)(in_stack_000000f8 + 0x2eb0) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(in_stack_000000f8 + 0x2eb0);
      }
      FUN_100e0609c(in_stack_000000f8 + 0x2e18);
      lVar16 = **(long **)(in_stack_000000f8 + 0x2e10);
      **(long **)(in_stack_000000f8 + 0x2e10) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(in_stack_000000f8 + 0x2e10);
      }
      lVar16 = *(long *)(in_stack_000000f8 + 0x2de0);
      in_stack_0000e210 = (long *)0x8000000000000001;
      in_stack_00010918 = in_stack_00005f88;
    }
    else {
      *(undefined2 *)(in_stack_000000e0 + 0x2be) = 0;
      if (*(long *)(in_stack_000000f8 + 0x2eb8) != 0) {
        _free(*(undefined8 *)(in_stack_000000f8 + 0x2ec0));
      }
      lVar16 = **(long **)(in_stack_000000f8 + 0x2eb0);
      **(long **)(in_stack_000000f8 + 0x2eb0) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(in_stack_000000f8 + 0x2eb0);
      }
      FUN_100e0609c(in_stack_000000f8 + 0x2e18);
      lVar16 = **(long **)(in_stack_000000f8 + 0x2e10);
      **(long **)(in_stack_000000f8 + 0x2e10) = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(in_stack_000000f8 + 0x2e10);
      }
      lVar16 = *(long *)(in_stack_000000f8 + 0x2de0);
    }
    in_stack_00005f88 = in_stack_0000e218;
    if (lVar16 != 0) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x2de8));
    }
    *in_stack_000000d0 = 1;
    FUN_100d643ac(unaff_x21);
    *in_stack_000000b0 = 1;
    if (*(long *)(in_stack_000000f8 + 0x2d78) != 0) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x2d80));
    }
    *unaff_x26 = 1;
    FUN_100e4f5f0();
    if (in_stack_0000e210 != (long *)0x8000000000000001) {
      *(undefined2 *)(in_stack_000000e0 + 0xb7) = 0;
      uVar22 = *(undefined8 *)(in_stack_000000f8 + 0x7f8);
      uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x7f0);
      uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x800);
      unaff_x23[1] = in_stack_00005f88;
      *unaff_x23 = in_stack_0000e210;
      unaff_x23[7] = in_stack_00005fb8;
      unaff_x23[6] = in_stack_00005fb0;
      unaff_x23[9] = in_stack_00005fc8;
      unaff_x23[8] = in_stack_00005fc0;
      unaff_x23[3] = uVar19;
      unaff_x23[2] = in_stack_000000f0;
      unaff_x23[5] = uVar18;
      unaff_x23[4] = uVar22;
      unaff_x23[0xf] = in_stack_00005ff8;
      unaff_x23[0xe] = in_stack_00005ff0;
      unaff_x23[0x11] = in_stack_00006008;
      unaff_x23[0x10] = in_stack_00006000;
      unaff_x23[0xb] = in_stack_00005fd8;
      unaff_x23[10] = in_stack_00005fd0;
      unaff_x23[0xd] = in_stack_00005fe8;
      unaff_x23[0xc] = in_stack_00005fe0;
      puVar14 = (undefined8 *)(in_stack_000000f8 + 0x2d58);
      *(undefined1 *)(in_stack_000000e0 + 0x14d) = 0;
      *(undefined8 *)(in_stack_000000f8 + 0x2d90) = *(undefined8 *)(in_stack_000000f8 + 0x2d60);
      *(undefined8 *)(in_stack_000000f8 + 0x2d88) = *puVar14;
      *(undefined8 *)(in_stack_000000f8 + 0x2d98) = *(undefined8 *)(in_stack_000000f8 + 0x2d68);
      *(undefined1 *)(in_stack_000000e0 + 0x14e) = 1;
      plVar17 = *(long **)(in_stack_000000f8 + 0x2d70);
      plVar21 = *(long **)(in_stack_000000f8 + 0x2d78);
      if (*(long *)(in_stack_000000f8 + 0x2d88) != -0x8000000000000000) {
        uVar18 = *(undefined8 *)(in_stack_000000f8 + 0x2d80);
        *(undefined8 *)(in_stack_000000f8 + 0x2da8) = *(undefined8 *)(in_stack_000000f8 + 0x2d60);
        *(undefined8 *)(in_stack_000000f8 + 0x2da0) = *puVar14;
        *(long *)(in_stack_000000f8 + 0x2db0) = *(long *)(in_stack_000000f8 + 0x2d68);
        lVar16 = *(long *)(in_stack_000000f8 + 0x2d68) * 0x18;
        plVar15 = *(long **)(in_stack_000000f8 + 0x2da8);
LAB_100fa27b8:
        plVar25 = plVar15;
        if (lVar16 != 0) goto code_r0x000100fa27bc;
        in_stack_00005f88 = (long *)func_0x000108856688(&UNK_108cacff9,0x17);
        lVar8 = *(long *)(in_stack_000000f8 + 0x2da8);
        lVar16 = *(long *)(in_stack_000000f8 + 0x2db0);
        if (lVar16 != 0) {
          puVar13 = (undefined8 *)(lVar8 + 8);
          do {
            if ((puVar13[-1] & 0x7fffffffffffffff) != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (*(long *)(in_stack_000000f8 + 0x2da0) != 0) {
          _free(lVar8);
        }
        goto LAB_100fa2b5c;
      }
      in_stack_00005f88 = (long *)func_0x000108856688(&UNK_108cacfe7,0x12);
LAB_100fa2b5c:
      uVar12 = (ulong)plVar17 & 0x7fffffffffffffff;
      goto joined_r0x000100fa2ae8;
    }
    *(undefined1 *)(in_stack_000000e0 + 0xb8) = 0;
    FUN_100de93d0(in_stack_000000f8 + 0x808);
    if ((*(long *)(in_stack_000000f8 + 0x7f0) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x7f0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x7f8));
    }
    *(undefined1 *)(in_stack_000000e0 + 0xb7) = 0;
    if (((*(byte *)(in_stack_000000e0 + 0xb6) & 1) != 0) &&
       (*(long *)(in_stack_000000f8 + 0x7c0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x7c8));
    }
    lVar8 = *(long *)(in_stack_000000f8 + 0x7e0);
    lVar16 = *(long *)(in_stack_000000f8 + 0x7e8);
    if (lVar16 != 0) {
      puVar14 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    goto LAB_100fa2bc8;
  }
  uVar10 = 6;
  in_stack_00005f88 = in_stack_0000e218;
LAB_100fa207c:
  *in_stack_000000d0 = uVar10;
  *in_stack_000000b0 = 3;
  in_stack_000000b0[8] = 3;
  *in_stack_000000d8 = 4;
  bVar6 = true;
LAB_100fa2bf0:
  if (bVar6) {
    *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 0x2a;
    uVar18 = 1;
    goto LAB_100fb1a40;
  }
  FUN_100e822b4(in_stack_000000e8);
  if (in_stack_00005f88 == (long *)0x0) {
    *(undefined1 *)(in_stack_000000f8 + 0x6fb) = 0;
    if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
    }
    if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
    }
    *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
    if (*(long *)(in_stack_000000f8 + 0x228) != -0x7fffffffffffffe9) {
      *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
    if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
      FUN_100ddd750(in_stack_000000f8 + 0x108);
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
    *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
    FUN_100c973ec(in_stack_000000f8 + 0xa8);
    if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
      lVar16 = *(long *)(in_stack_000000f8 + 0x98);
      lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar8 != 0) {
        puVar14 = (undefined8 *)(lVar16 + 8);
        do {
          if (puVar14[-1] != 0) {
            _free(*puVar14);
          }
          puVar14 = puVar14 + 3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar16);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar16 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar16 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar16 != -0x8000000000000000) && (lVar16 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    in_stack_00005f88 = (long *)0x0;
    uVar12 = *(ulong *)(in_stack_000000f8 + 0x78);
    goto joined_r0x000100fb1c88;
  }
  if ((*(byte *)(in_stack_000000f8 + 0x6fb) & 1) == 0) {
    *(undefined1 *)(in_stack_000000f8 + 0x6fb) = 0;
  }
  else {
    FUN_100e15ef8(in_stack_000000f8 + 0x748);
    *(undefined1 *)(in_stack_000000f8 + 0x6fb) = 0;
  }
  if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
  }
  if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
  lVar16 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar16 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar16 + 0x8000000000000001U & lVar16 >> 0x3f) {
  case 0:
    if ((*(byte *)(in_stack_000000f8 + 0x711) & 1) != 0) {
      func_0x000100ddff3c(in_stack_000000f8 + 0x228);
    }
    break;
  case 1:
    bVar4 = *(byte *)(in_stack_000000f8 + 0x712);
    goto joined_r0x000100fabebc;
  case 2:
    if ((*(byte *)(in_stack_000000f8 + 0x71d) & 1) != 0) {
      func_0x000100ddcd80(in_stack_000000f8 + 0x230);
    }
    break;
  case 3:
    if ((*(byte *)(in_stack_000000f8 + 0x71e) & 1) != 0) {
      func_0x000100ddfecc(in_stack_000000f8 + 0x230);
    }
    break;
  case 4:
    if ((*(byte *)(in_stack_000000f8 + 0x713) & 1) != 0) {
      func_0x000100de394c(in_stack_000000f8 + 0x230);
    }
    break;
  case 5:
    if ((*(byte *)(in_stack_000000f8 + 0x714) & 1) != 0) {
      func_0x000100deea20(in_stack_000000f8 + 0x230);
    }
    break;
  case 7:
    if ((*(byte *)(in_stack_000000f8 + 0x715) & 1) != 0) {
      func_0x000100de4fb8(in_stack_000000f8 + 0x230);
    }
    break;
  case 9:
    if ((*(byte *)(in_stack_000000f8 + 0x716) & 1) != 0) {
      func_0x000100de8f9c(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xd:
    if ((*(byte *)(in_stack_000000f8 + 0x720) & 1) != 0) {
      func_0x000100ddb3d0(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xe:
    if ((*(byte *)(in_stack_000000f8 + 0x721) & 1) != 0) {
      func_0x000100de3864(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xf:
    if ((*(byte *)(in_stack_000000f8 + 0x722) & 1) != 0) {
      func_0x000100e436d4(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x10:
    if ((*(byte *)(in_stack_000000f8 + 0x723) & 1) != 0) {
      FUN_100e15ef8(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x11:
    if ((((*(byte *)(in_stack_000000f8 + 0x719) & 1) != 0) &&
        (*(long *)(in_stack_000000f8 + 0x350) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000f8 + 0x350) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x358));
    }
    if ((*(byte *)(in_stack_000000f8 + 0x718) & 1) != 0) {
      FUN_100df3274(in_stack_000000f8 + 0x368);
    }
    bVar4 = *(byte *)(in_stack_000000f8 + 0x717);
    goto joined_r0x000100fabcfc;
  case 0x12:
    if ((((*(byte *)(in_stack_000000f8 + 0x71c) & 1) != 0) &&
        (*(long *)(in_stack_000000f8 + 0x350) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000f8 + 0x350) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x358));
    }
    if ((*(byte *)(in_stack_000000f8 + 0x71b) & 1) != 0) {
      FUN_100df3274(in_stack_000000f8 + 0x368);
    }
    bVar4 = *(byte *)(in_stack_000000f8 + 0x71a);
joined_r0x000100fabcfc:
    if ((bVar4 & 1) != 0) {
      FUN_100ddd750(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x13:
    if ((*(byte *)(in_stack_000000f8 + 0x71f) & 1) != 0) {
      func_0x000100decaec(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x14:
    if ((*(byte *)(in_stack_000000f8 + 0x724) & 1) != 0) {
      func_0x000100df5e34(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x15:
    if (((*(byte *)(in_stack_000000f8 + 0x725) & 1) != 0) &&
       (*(long *)(in_stack_000000f8 + 0x230) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x238));
    }
    break;
  case 0x16:
    bVar4 = *(byte *)(in_stack_000000f8 + 0x726);
joined_r0x000100fabebc:
    if ((bVar4 & 1) != 0) {
      func_0x000100de60ac(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x17:
    if ((*(byte *)(in_stack_000000f8 + 0x727) & 1) != 0) {
      func_0x000100de7bc8(in_stack_000000f8 + 0x230);
    }
  }
LAB_100fabef4:
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
LAB_100fabefc:
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
  if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
    FUN_100ddd750(in_stack_000000f8 + 0x108);
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
  if ((((*(byte *)(in_stack_000000f8 + 0x729) & 1) != 0) &&
      (*(long *)(in_stack_000000f8 + 0xd8) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000f8 + 0xd8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0xe0));
  }
  if ((((*(byte *)(in_stack_000000f8 + 0x728) & 1) != 0) &&
      (*(long *)(in_stack_000000f8 + 0xf0) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000f8 + 0xf0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0xf8));
  }
  *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
  FUN_100c973ec(in_stack_000000f8 + 0xa8);
  if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
    lVar16 = *(long *)(in_stack_000000f8 + 0x98);
    lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar8 != 0) {
      puVar14 = (undefined8 *)(lVar16 + 8);
      do {
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar16);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar16 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar16 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar16 != -0x8000000000000000) && (lVar16 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar12 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fb1c88:
  if ((uVar12 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  uVar18 = 0;
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
LAB_100fb1a40:
  auVar23._8_8_ = in_stack_00005f88;
  auVar23._0_8_ = uVar18;
  return auVar23;
}

