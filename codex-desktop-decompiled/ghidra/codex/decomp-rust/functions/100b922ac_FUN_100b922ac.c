
/* WARNING: Removing unreachable block (ram,0x000100b90e78) */
/* WARNING: Removing unreachable block (ram,0x000100b90eb0) */
/* WARNING: Removing unreachable block (ram,0x000100b90eb4) */
/* WARNING: Removing unreachable block (ram,0x000100b90ec0) */
/* WARNING: Removing unreachable block (ram,0x000100b90ec8) */
/* WARNING: Removing unreachable block (ram,0x000100b90ed8) */
/* WARNING: Removing unreachable block (ram,0x000100b90edc) */
/* WARNING: Removing unreachable block (ram,0x000100b90ee4) */
/* WARNING: Removing unreachable block (ram,0x000100b91154) */
/* WARNING: Removing unreachable block (ram,0x000100b9117c) */
/* WARNING: Removing unreachable block (ram,0x000100b91184) */
/* WARNING: Removing unreachable block (ram,0x000100b91190) */
/* WARNING: Removing unreachable block (ram,0x000100b90f0c) */
/* WARNING: Removing unreachable block (ram,0x000100b90f14) */
/* WARNING: Removing unreachable block (ram,0x000100b90f1c) */
/* WARNING: Removing unreachable block (ram,0x000100b90f28) */

void FUN_100b922ac(void)

{
  long *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 uVar14;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar15;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined1 *in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  char in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  long in_stack_00000248;
  undefined8 in_stack_00000250;
  long in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  long in_stack_00000298;
  long in_stack_00000350;
  long in_stack_00000358;
  undefined8 in_stack_00000360;
  long in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  long in_stack_000003a8;
  uint in_stack_000003b0;
  undefined4 in_stack_000003b4;
  undefined1 in_stack_000003b8;
  undefined7 in_stack_000003b9;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  
  auVar3._8_8_ = in_stack_00000358;
  auVar3._0_8_ = in_stack_00000350;
  in_stack_00000148 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001e0);
  in_stack_00000140 = -0x8000000000000000;
  if ((in_stack_00000058 != 0x8000000000000001) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100de8910(&stack0x00000398);
  if (in_stack_00000350 != unaff_x28) {
    FUN_100de6690(&stack0x00000350);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != unaff_x28 - 1U)) {
    FUN_100de6690(&stack0x00000190);
  }
  cVar4 = in_stack_00000188;
  uVar17 = in_stack_00000150;
  uVar14 = in_stack_00000148;
  lVar7 = in_stack_00000140;
  if (in_stack_00000140 == -0x8000000000000000) {
    lVar7 = FUN_108854818(in_stack_00000148,&UNK_108cbf9b6,0x2d);
    *in_stack_00000070 = 1;
LAB_100b91264:
    *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
    FUN_100e3d46c(unaff_x19 + 0xd8);
    FUN_100e3d46c(unaff_x19 + 0x30);
    uVar14 = 0x8000000000000000;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000170;
    *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000168;
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000180;
    *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000178;
    puVar15 = (undefined8 *)(unaff_x29 - 0x80U | 8);
    if (in_stack_00000158 != 0) {
      _free(in_stack_00000160);
    }
    uVar18 = puVar15[1];
    uVar16 = *puVar15;
    uVar9 = puVar15[2];
    *(undefined1 *)(unaff_x19 + 0x260) = 1;
    *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
    *(long *)(unaff_x19 + 0x180) = lVar7;
    *(undefined8 *)(unaff_x19 + 0x188) = uVar14;
    *(undefined8 *)(unaff_x19 + 400) = uVar17;
    *(undefined8 *)(unaff_x19 + 0x1a0) = uVar18;
    *(undefined8 *)(unaff_x19 + 0x198) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x1a8) = uVar9;
    *(undefined1 *)(unaff_x19 + 0x1b0) = 0;
    *(char *)(unaff_x19 + 0x1b1) = cVar4;
    if (cVar4 == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x18);
      lVar11 = *(long *)(unaff_x19 + 0x20);
      iVar2 = *(int *)(unaff_x19 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x188);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x180);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x198);
      uVar16 = *(undefined8 *)(unaff_x19 + 400);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x1a8);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x1a0);
      unaff_x22[6] = *(undefined8 *)(unaff_x19 + 0x1b0);
      unaff_x22[3] = uVar18;
      unaff_x22[2] = uVar16;
      unaff_x22[5] = uVar20;
      unaff_x22[4] = uVar19;
      unaff_x22[1] = uVar9;
      *unaff_x22 = uVar17;
      *(long *)(unaff_x19 + 0x1f8) = lVar11;
      *(int *)(unaff_x19 + 0x200) = iVar2;
      *(undefined8 *)(unaff_x19 + 0x208) = uVar14;
      *(undefined1 *)(unaff_x19 + 0x2f0) = 0;
      *(undefined8 *)(unaff_x19 + 0x210) = uVar14;
      *(undefined1 *)(unaff_x19 + 0x2f1) = 1;
      *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x1c8);
      *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x1c0);
      *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x1d8);
      *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x1d0);
      *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x1e8);
      *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 0x1e0);
      *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x1f0);
      auVar22 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
      lVar7 = auVar22._0_8_ + lVar11;
      if (lVar11 < 0 != SCARRY8(auVar22._0_8_,lVar11)) {
LAB_100b90ad4:
        func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
LAB_100b912c8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b912cc);
        (*pcVar5)();
      }
      uVar10 = auVar22._8_4_ + iVar2;
      if (999999999 < uVar10) {
        bVar6 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar6) goto LAB_100b90ad4;
        uVar10 = uVar10 + 0xc4653600;
      }
      *(long *)(unaff_x19 + 0x250) = lVar7;
      *(uint *)(unaff_x19 + 600) = uVar10;
      while( true ) {
        auVar3._8_8_ = in_stack_00000358;
        auVar3._0_8_ = in_stack_00000350;
        auVar22 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
        bVar6 = auVar22._8_4_ < *(uint *)(unaff_x19 + 600);
        if (auVar22._0_8_ != *(long *)(unaff_x19 + 0x250)) {
          bVar6 = auVar22._0_8_ < *(long *)(unaff_x19 + 0x250);
        }
        if (!bVar6) {
          *(undefined1 *)(unaff_x19 + 0x248) = 1;
          lVar11 = *(long *)(unaff_x19 + 0x218);
          lVar7 = *(long *)(unaff_x19 + 0x220);
          in_stack_000001e8 = *(undefined8 *)(unaff_x19 + 0x230);
          in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x228);
          in_stack_000001f8 = *(undefined8 *)(unaff_x19 + 0x240);
          in_stack_000001f0 = *(undefined8 *)(unaff_x19 + 0x238);
          in_stack_00000200 = *(undefined8 *)(unaff_x19 + 0x248);
          goto LAB_100b90fd4;
        }
        __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
        func_0x000106032878(&stack0x00000350,unaff_x19 + 0x250,&stack0x00000238);
        iVar2 = 0;
        if ((int)in_stack_00000350 == 0) {
          iVar2 = (int)in_stack_00000360;
        }
        uVar14 = *(undefined8 *)(unaff_x19 + 0x210);
        auVar22 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
        lVar7 = 0;
        if ((int)in_stack_00000350 == 0) {
          lVar7 = in_stack_00000358;
        }
        lVar11 = auVar22._0_8_ + lVar7;
        if ((lVar7 < 0 != SCARRY8(auVar22._0_8_,lVar7)) ||
           ((uVar10 = auVar22._8_4_ + iVar2, 999999999 < uVar10 &&
            ((bVar6 = SCARRY8(lVar11,1), lVar11 = lVar11 + 1, bVar6 ||
             (uVar10 = uVar10 + 0xc4653600, uVar10 == 1000000000)))))) {
          __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(&stack0x00000350,0);
          auVar21 = _in_stack_00000140;
        }
        else {
          auVar21 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b230f70);
          lVar7 = 0x140;
          if ((auVar21._0_8_ & 1) == 0) {
            lVar7 = 0x200;
          }
          if (*(int *)(auVar21._8_8_ + lVar7 + 0xd8) == 1000000000) {
            _in_stack_00000140 = auVar21;
            func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b230f70);
            goto LAB_100b912c8;
          }
          in_stack_00000360 = 0;
          in_stack_000003b8 = 0;
          in_stack_000003a8 = lVar11;
          in_stack_000003b0 = uVar10;
          auVar3 = auVar21;
        }
        lVar7 = auVar3._8_8_;
        in_stack_00000350 = auVar3._0_8_;
        *(undefined8 *)(unaff_x19 + 0x2a8) = in_stack_00000398;
        *(undefined8 *)(unaff_x19 + 0x2a0) = in_stack_00000390;
        *(long *)(unaff_x19 + 0x2b8) = in_stack_000003a8;
        *(undefined8 *)(unaff_x19 + 0x2b0) = in_stack_000003a0;
        *(ulong *)(unaff_x19 + 0x2c8) = CONCAT71(in_stack_000003b9,in_stack_000003b8);
        *(ulong *)(unaff_x19 + 0x2c0) = CONCAT44(in_stack_000003b4,in_stack_000003b0);
        *(undefined1 (*) [16])(unaff_x19 + 0x260) = auVar3;
        *(long *)(unaff_x19 + 0x278) = in_stack_00000368;
        *(undefined8 *)(unaff_x19 + 0x270) = in_stack_00000360;
        *(undefined8 *)(unaff_x19 + 0x288) = in_stack_00000378;
        *(undefined8 *)(unaff_x19 + 0x280) = in_stack_00000370;
        *(undefined8 *)(unaff_x19 + 0x298) = in_stack_00000388;
        *(undefined8 *)(unaff_x19 + 0x290) = in_stack_00000380;
        *(undefined8 *)(unaff_x19 + 0x2d0) = uVar14;
        *(undefined1 *)(unaff_x19 + 0x2e8) = 0;
        _in_stack_00000140 = auVar21;
        FUN_1013f0f04(&stack0x00000350,unaff_x19 + 0x260,in_stack_00000078);
        if (in_stack_00000350 == unaff_x28) {
          *(undefined1 *)(unaff_x19 + 0x2f0) = 3;
          goto LAB_100b91000;
        }
        FUN_100de8a5c(unaff_x19 + 0x260);
        if (in_stack_00000350 == -0x7ffffffffffffffd) {
          lVar11 = -0x8000000000000000;
          goto LAB_100b90fa0;
        }
        if (in_stack_00000350 == -0x7ffffffffffffffc) break;
        *(undefined8 *)(unaff_x27 + 0x78) = in_stack_000003c8;
        *(undefined8 *)(unaff_x27 + 0x70) = in_stack_000003c0;
        *(undefined8 *)(unaff_x27 + 0x88) = in_stack_000003d8;
        *(undefined8 *)(unaff_x27 + 0x80) = in_stack_000003d0;
        *(undefined8 *)(unaff_x27 + 0x98) = in_stack_000003e8;
        *(undefined8 *)(unaff_x27 + 0x90) = in_stack_000003e0;
        *(undefined8 *)(unaff_x27 + 0x38) = in_stack_00000388;
        *(undefined8 *)(unaff_x27 + 0x30) = in_stack_00000380;
        *(undefined8 *)(unaff_x27 + 0x48) = in_stack_00000398;
        *(undefined8 *)(unaff_x27 + 0x40) = in_stack_00000390;
        *(long *)(unaff_x27 + 0x58) = in_stack_000003a8;
        *(undefined8 *)(unaff_x27 + 0x50) = in_stack_000003a0;
        *(ulong *)(unaff_x27 + 0x68) = CONCAT71(in_stack_000003b9,in_stack_000003b8);
        *(ulong *)(unaff_x27 + 0x60) = CONCAT44(in_stack_000003b4,in_stack_000003b0);
        *(long *)(unaff_x27 + 0x18) = in_stack_00000368;
        *(undefined8 *)(unaff_x27 + 0x10) = in_stack_00000360;
        *(undefined8 *)(unaff_x27 + 0x28) = in_stack_00000378;
        *(undefined8 *)(unaff_x27 + 0x20) = in_stack_00000370;
        if (in_stack_00000350 == -0x8000000000000000) {
          __ZN23codex_app_server_daemon21remote_control_client34remote_control_status_notification17h4a782c311c1eb059E
                    (&stack0x000002e0,&stack0x00000350);
          if (lVar7 != 0) {
            _free(in_stack_00000248);
          }
          in_stack_00000350 = lVar7;
          in_stack_00000358 = in_stack_00000248;
          in_stack_00000360 = in_stack_00000250;
          in_stack_00000368 = in_stack_00000258;
          in_stack_00000370 = in_stack_00000260;
          in_stack_00000378 = in_stack_00000268;
          in_stack_00000380 = in_stack_00000270;
          in_stack_00000388 = in_stack_00000278;
          in_stack_00000390 = in_stack_00000280;
          in_stack_00000398 = in_stack_00000288;
          in_stack_000003a0 = in_stack_00000290;
          in_stack_000003a8 = in_stack_00000298;
          if (in_stack_00000258 != unaff_x28) {
            FUN_100de6690(&stack0x00000368);
          }
        }
        else {
          FUN_100e3d46c(&stack0x00000238);
          in_stack_00000358 = lVar7;
        }
      }
      *(undefined1 *)(unaff_x19 + 0x248) = 1;
      *(undefined1 *)(unaff_x19 + 0x2f1) = 0;
      lVar11 = *(long *)(unaff_x19 + 0x218);
      lVar7 = *(long *)(unaff_x19 + 0x220);
      in_stack_000001e8 = *(undefined8 *)(unaff_x19 + 0x230);
      in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x228);
      in_stack_000001f8 = *(undefined8 *)(unaff_x19 + 0x240);
      in_stack_000001f0 = *(undefined8 *)(unaff_x19 + 0x238);
      in_stack_00000200 = *(undefined8 *)(unaff_x19 + 0x248);
LAB_100b90fa0:
      if ((*(byte *)(unaff_x19 + 0x2f1) & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x220));
        }
        if ((*(long *)(unaff_x19 + 0x230) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x230) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x238));
        }
      }
LAB_100b90fd4:
      uVar17 = in_stack_000001e8;
      uVar14 = in_stack_000001e0;
      *(undefined1 *)(unaff_x19 + 0x2f1) = 0;
      in_stack_00000198 = in_stack_000001e8;
      in_stack_00000190 = in_stack_000001e0;
      *(undefined1 *)(unaff_x19 + 0x2f0) = 1;
      if (lVar11 == -0x7fffffffffffffff) {
LAB_100b91000:
        *unaff_x26 = 0x8000000000000001;
        uVar8 = 7;
        goto LAB_100b91288;
      }
      in_stack_000001a0 = in_stack_000001f0;
      in_stack_000001a8 = in_stack_000001f8;
      in_stack_000001b0 = in_stack_00000200;
      FUN_100d5e2cc((undefined8 *)(unaff_x19 + 0x1c0));
      if (lVar11 == -0x8000000000000000) goto LAB_100b91264;
      *(undefined1 *)(unaff_x19 + 0x1b9) = 1;
      *(long *)(unaff_x19 + 0x180) = lVar11;
      *(long *)(unaff_x19 + 0x188) = lVar7;
      *(undefined8 *)(unaff_x19 + 0x198) = uVar17;
      *(undefined8 *)(unaff_x19 + 400) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_000001f8;
      *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_000001f0;
      *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000200;
    }
    *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined2 *)(unaff_x19 + 0x228) = 0x12;
    *(undefined1 *)(unaff_x19 + 0x230) = 0;
    plVar1 = (long *)(unaff_x19 + 0x1c0);
    func_0x000100a4c754(&stack0x00000350,plVar1,in_stack_00000078);
    if (auVar3._0_8_ == 0x16) {
      *unaff_x26 = 0x8000000000000001;
      uVar8 = 8;
      goto LAB_100b91288;
    }
    in_stack_00000100 = in_stack_00000360;
    if (*(char *)(unaff_x19 + 0x230) == '\0') {
      if (*(short *)(unaff_x19 + 0x228) != 0x12) {
        lVar7 = 0x58;
        lVar12 = 0x50;
        lVar11 = 0x60;
        lVar13 = 0x208;
LAB_100b910fc:
        _in_stack_000000f0 = auVar3;
        (**(code **)(*(long *)(unaff_x19 + lVar13) + 0x20))
                  ((long)plVar1 + lVar11,*(undefined8 *)((long)plVar1 + lVar12),
                   *(undefined8 *)((long)plVar1 + lVar7));
        auVar3 = _in_stack_000000f0;
      }
    }
    else if ((*(char *)(unaff_x19 + 0x230) == '\x03') && (*plVar1 != 6)) {
      lVar7 = 0x18;
      lVar12 = 0x10;
      lVar11 = 0x20;
      lVar13 = 0x1c8;
      if ((*plVar1 != 4) || (*(short *)(unaff_x19 + 0x1e8) != 0x12)) goto LAB_100b910fc;
    }
    in_stack_000000f0 = auVar3._0_8_;
    bVar6 = in_stack_000000f0 != 0x15;
    _in_stack_000000f0 = auVar3;
    if (bVar6) {
      FUN_100de8b24(&stack0x000000f0);
    }
    uVar14 = *(undefined8 *)(unaff_x19 + 0x180);
    lVar7 = *(long *)(unaff_x19 + 0x188);
    in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0x198);
    in_stack_00000110 = *(undefined8 *)(unaff_x19 + 400);
    in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x1a8);
    in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x1a0);
    in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0x1b0);
    *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
    FUN_100e3d46c(unaff_x19 + 0xd8);
    FUN_100e3d46c(unaff_x19 + 0x30);
  }
  *unaff_x26 = uVar14;
  unaff_x26[1] = lVar7;
  unaff_x26[3] = in_stack_00000118;
  unaff_x26[2] = in_stack_00000110;
  unaff_x26[5] = in_stack_00000128;
  unaff_x26[4] = in_stack_00000120;
  unaff_x26[6] = in_stack_00000130;
  uVar8 = 1;
LAB_100b91288:
  *(undefined1 *)(unaff_x19 + 0x1b8) = uVar8;
  return;
}

