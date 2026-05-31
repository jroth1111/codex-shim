
/* WARNING: Removing unreachable block (ram,0x00010091ef60) */
/* WARNING: Removing unreachable block (ram,0x00010091ef00) */
/* WARNING: Removing unreachable block (ram,0x00010091ef04) */
/* WARNING: Removing unreachable block (ram,0x00010091ef74) */
/* WARNING: Removing unreachable block (ram,0x00010091ef08) */
/* WARNING: Removing unreachable block (ram,0x00010091ee14) */
/* WARNING: Removing unreachable block (ram,0x00010091f6f4) */

void FUN_10091eb38(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  short sVar15;
  int unaff_w21;
  long *plVar16;
  long unaff_x24;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined1 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  long *in_stack_00000058;
  undefined1 *in_stack_00000130;
  undefined *in_stack_00000138;
  undefined1 *in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined8 *in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 *in_stack_00000240;
  undefined8 *in_stack_00000248;
  undefined1 *in_stack_00000250;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined *in_stack_00000390;
  undefined *in_stack_00000398;
  ulong in_stack_000003b0;
  long *in_stack_00000498;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (in_stack_00000058,s___wham_accounts_send_add_credits_108aed14f,&stack0x00000390);
  FUN_1011d51fc(&stack0x00000390,*(undefined8 *)(unaff_x24 + 0x58),&UNK_108cab1d8,
                *(undefined8 *)(unaff_x19 + 0x130),*(undefined8 *)(unaff_x19 + 0x138));
  __ZN20codex_backend_client6client6Client7headers17hcdb1e8026a6e5690E(unaff_x29 + -0xe0);
  if (in_stack_00000390 == (undefined *)0x2) {
    _memcpy(&stack0x00000240,&stack0x00000390,0x110);
    FUN_105c21328(unaff_x29 + -0xe0);
  }
  else {
    __ZN7reqwest4util15replace_headers17h5940be829e2e6996E(&stack0x000003b8,unaff_x29 + -0xe0);
    _memcpy(&stack0x00000240,&stack0x00000390,0x110);
  }
  if (in_stack_00000240 != (undefined8 *)0x2) {
    *(undefined8 *)(unaff_x29 + -0xd8) = 0x1d;
    *(undefined8 *)(unaff_x29 + -0xe0) = 0;
    *(undefined8 *)(unaff_x29 + -200) = 0;
    *(undefined8 *)(unaff_x29 + -0xd0) = 0;
    in_stack_00000390 = &UNK_10b209220;
    in_stack_00000398 = &UNK_108c57210;
    in_stack_000003b0 = in_stack_000003b0 & 0xffffffffffffff00;
    cVar5 = func_0x000100ea14b8(&stack0x00000268,unaff_x29 + -0xe0,&stack0x00000390);
    if (cVar5 == '\x02') {
      FUN_107c05cb4(&UNK_108caab02,0x17,unaff_x29 + -0x61,&UNK_10b234e80,&UNK_10b24b1e8);
      goto LAB_10091f8e0;
    }
  }
  _memcpy(&stack0x00000130,&stack0x00000240,0x110);
  if (in_stack_00000130 != (undefined1 *)0x2) {
    puVar6 = (undefined1 *)_malloc(0x80);
    if (puVar6 == (undefined1 *)0x0) {
      func_0x0001087c9084(1,0x80);
      goto LAB_10091f8e0;
    }
    *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000390;
    *puVar6 = 0x7b;
    in_stack_00000240 = (undefined8 *)CONCAT62((int6)((ulong)in_stack_00000240 >> 0x10),0x100);
    in_stack_00000248 = (undefined8 *)(unaff_x29 + -0xe0);
    FUN_1013fe3ec(&stack0x00000240,&UNK_108cba8ed,0xb);
    plVar16 = (long *)*in_stack_00000248;
    lVar9 = plVar16[2];
    if (*plVar16 == lVar9) {
      FUN_108855060(plVar16,lVar9,1,1,1);
      lVar9 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar9) = 0x3a;
    plVar16[2] = lVar9 + 1;
    plVar16 = (long *)*in_stack_00000248;
    if (unaff_w21 == 0) {
      lVar9 = plVar16[2];
      if (*plVar16 == lVar9) {
        FUN_108855060(plVar16,lVar9,1,1,1);
        lVar9 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar9) = 0x22;
      plVar16[2] = lVar9 + 1;
      FUN_100657654(plVar16,&UNK_108cae7df,7);
      lVar9 = plVar16[2];
      if (*plVar16 == lVar9) {
        FUN_108855060(plVar16,lVar9,1,1,1);
        goto LAB_10091f794;
      }
    }
    else {
      lVar9 = plVar16[2];
      if (*plVar16 == lVar9) {
        FUN_108855060(plVar16,lVar9,1,1,1);
        lVar9 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar9) = 0x22;
      plVar16[2] = lVar9 + 1;
      FUN_100657654(plVar16,&UNK_108cba8e2,0xb);
      lVar9 = plVar16[2];
      if (*plVar16 == lVar9) {
        FUN_108855060(plVar16,lVar9,1,1,1);
LAB_10091f794:
        lVar9 = plVar16[2];
      }
    }
    *(undefined1 *)(plVar16[1] + lVar9) = 0x22;
    plVar16[2] = lVar9 + 1;
    plVar16 = (long *)*in_stack_00000248;
    lVar9 = plVar16[2];
    if (*plVar16 == lVar9) {
      FUN_108855060(plVar16,lVar9,1,1,1);
      lVar9 = plVar16[2];
    }
    *(undefined1 *)(plVar16[1] + lVar9) = 0x7d;
    plVar16[2] = lVar9 + 1;
    uVar14 = FUN_100ea213c(&stack0x00000158,&stack0x00000390);
    if ((uVar14 & 1) == 0) {
      in_stack_00000378 = 0x1d;
      in_stack_00000370 = 0;
      in_stack_00000240 = (undefined8 *)&UNK_10b209220;
      in_stack_00000248 = (undefined8 *)&UNK_108c57210;
      in_stack_00000250 = (undefined1 *)0x10;
      FUN_100ea1868(&stack0x00000390,&stack0x00000158,&stack0x00000370,&stack0x00000240);
      if ((char)in_stack_000003b0 == '\x03') {
        FUN_107c05cb4(&UNK_108caab02,0x17,unaff_x29 + -0x61,&UNK_10b234e80,&UNK_10b223528);
        goto LAB_10091f8e0;
      }
      *(undefined8 *)(unaff_x29 + -0xd8) = 0x1d;
      *(undefined8 *)(unaff_x29 + -0xe0) = 0;
      *(undefined8 *)(unaff_x29 + -200) = 0;
      *(undefined8 *)(unaff_x29 + -0xd0) = 0;
      *(ulong *)(unaff_x29 + -0xc0) = in_stack_000003b0;
      if (((uint)in_stack_000003b0 & 0xff) != 2) {
        (**(code **)(*(long *)(unaff_x29 + -0xe0) + 0x20))
                  (unaff_x29 + -200,*(undefined8 *)(unaff_x29 + -0xd8),
                   *(undefined8 *)(unaff_x29 + -0xd0));
      }
    }
    puVar7 = (undefined8 *)_malloc(0x18);
    puVar1 = in_stack_00000148;
    puVar2 = in_stack_00000140;
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x18);
      goto LAB_10091f8e0;
    }
    *puVar7 = puVar6;
    puVar7[1] = 0x80;
    puVar7[2] = 1;
    if (in_stack_00000130 != (undefined1 *)0x0) {
      if (in_stack_00000138 == (undefined *)0x0) {
        if ((code *)*in_stack_00000148 != (code *)0x0) {
          (*(code *)*in_stack_00000148)(in_stack_00000140);
        }
        if (puVar1[1] != 0) {
          _free(puVar2);
        }
      }
      else {
        (**(code **)(in_stack_00000138 + 0x20))
                  (&stack0x00000150,in_stack_00000140,in_stack_00000148);
      }
    }
    in_stack_00000398 = (undefined *)0x1d;
    in_stack_00000130 = (undefined1 *)0x1;
    in_stack_00000390 = (undefined *)0x0;
    in_stack_00000138 = &UNK_10b205b08;
    in_stack_00000140 = puVar6;
    in_stack_00000148 = (undefined8 *)0x1;
    in_stack_00000150 = puVar7;
  }
  _memcpy(&stack0x00000240,&stack0x00000130,0x110);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x138);
  lVar9 = unaff_x19 + 0x140;
  _memcpy(lVar9,&stack0x00000240,0x110);
  *(long *)(unaff_x19 + 0x250) = unaff_x24;
  *(undefined **)(unaff_x19 + 600) = &UNK_108c60ff8;
  *(undefined8 *)(unaff_x19 + 0x260) = 4;
  *(undefined8 *)(unaff_x19 + 0x268) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x270) = uVar10;
  *(undefined1 *)(unaff_x19 + 0x298) = 0;
  *(undefined1 *)(unaff_x19 + 0x299) = 0;
  _memcpy(&stack0x00000390,lVar9,0x110);
  *(undefined **)(unaff_x19 + 0x278) = &UNK_108c60ff8;
  *(undefined8 *)(unaff_x19 + 0x280) = 4;
  *(undefined8 *)(unaff_x19 + 0x288) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x290) = uVar10;
  if (in_stack_00000390 == (undefined *)0x2) {
    auVar21._8_8_ = in_stack_00000398;
    auVar21._0_8_ = 1;
    lVar4 = *in_stack_00000498;
    *in_stack_00000498 = lVar4 + -1;
    LORelease();
  }
  else {
    auVar21 = FUN_105c4eee0(in_stack_00000498,&stack0x00000390);
    lVar4 = *in_stack_00000498;
    *in_stack_00000498 = lVar4 + -1;
    LORelease();
  }
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000498);
  }
  *(undefined1 (*) [16])(unaff_x19 + 0x2a0) = auVar21;
  puVar1 = (undefined8 *)(unaff_x19 + 0x2a8);
  if ((auVar21._0_8_ & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000130,auVar21._8_8_);
    auVar21._8_8_ = in_stack_00000138;
    auVar21._0_8_ = 0x8000000000000002;
    if (in_stack_00000130 != (undefined1 *)0x4) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2a0);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x2a8);
      puVar6 = in_stack_00000130;
      goto LAB_10091f140;
    }
    *(undefined1 *)(unaff_x19 + 0x298) = 3;
LAB_10091f2e0:
    *in_stack_00000030 = 3;
    *unaff_x27 = 4;
  }
  else {
    *puVar1 = 0;
    if (auVar21._8_8_ == 0) {
      FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
      goto LAB_10091f8e0;
    }
    uVar10 = 0;
    uVar8 = 1;
    puVar6 = (undefined1 *)0x3;
LAB_10091f140:
    puVar19 = auVar21._0_8_;
    *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000188;
    *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000180;
    *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000198;
    *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000190;
    *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000001a8;
    *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000001a0;
    *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000001b0;
    *(undefined8 **)(unaff_x29 + -0xd8) = in_stack_00000148;
    *(undefined1 **)(unaff_x29 + -0xe0) = in_stack_00000140;
    *(undefined8 *)(unaff_x29 + -200) = in_stack_00000158;
    *(undefined8 **)(unaff_x29 + -0xd0) = in_stack_00000150;
    *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000168;
    *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000160;
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000178;
    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000170;
    FUN_100e03d7c(uVar8,uVar10);
    if (puVar6 == (undefined1 *)0x3) {
      puVar6 = (undefined1 *)FUN_108858dec(auVar21._8_8_);
      puVar17 = (undefined *)0x8000000000000000;
LAB_10091f374:
      sVar15 = 0;
      *(undefined2 *)(unaff_x19 + 0x298) = 1;
    }
    else {
      *(undefined1 *)(unaff_x19 + 0x299) = 1;
      *(undefined1 **)(unaff_x19 + 0x2a8) = puVar6;
      *(long *)(unaff_x19 + 0x2b0) = auVar21._8_8_;
      *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x29 + -0x70);
      uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar20 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x90);
      *(undefined8 *)(unaff_x19 + 0x300) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)(unaff_x19 + 0x2f8) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x310) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x308) = uVar10;
      uVar8 = *(undefined8 *)(unaff_x29 + -0x80);
      *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x19 + 0x318) = uVar8;
      uVar8 = *(undefined8 *)(unaff_x29 + -0xe0);
      uVar20 = *(undefined8 *)(unaff_x29 + -200);
      uVar10 = *(undefined8 *)(unaff_x29 + -0xd0);
      *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x29 + -0xd8);
      *(undefined8 *)(unaff_x19 + 0x2b8) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x2d0) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x2c8) = uVar10;
      uVar8 = *(undefined8 *)(unaff_x29 + -0xc0);
      uVar20 = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar10 = *(undefined8 *)(unaff_x29 + -0xb0);
      *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x29 + -0xb8);
      *(undefined8 *)(unaff_x19 + 0x2d8) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x2f0) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x2e8) = uVar10;
      *(undefined2 *)(unaff_x19 + 0x2a0) = *(undefined2 *)(unaff_x19 + 0x310);
      in_stack_00000138 = (undefined *)0x1d;
      in_stack_00000130 = (undefined1 *)0x0;
      in_stack_00000148 = (undefined8 *)0x0;
      in_stack_00000140 = (undefined1 *)0x0;
      lVar4 = FUN_100ea2edc(puVar1,&stack0x00000130);
      if (lVar4 == 0) {
        lVar4 = 0;
        lVar11 = 1;
LAB_10091f238:
        lVar18 = 1;
      }
      else {
        lVar11 = *(long *)(lVar4 + 8);
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) goto LAB_10091f238;
        lVar13 = 0;
        lVar18 = 1;
        do {
          if ((*(byte *)(lVar11 + lVar13) != 9) && (0x5e < *(byte *)(lVar11 + lVar13) - 0x20)) {
            lVar4 = 0;
            lVar11 = 1;
            goto LAB_10091f25c;
          }
          lVar13 = lVar13 + 1;
        } while (lVar4 != lVar13);
        lVar18 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar4,1);
        if (lVar18 == 0) {
          func_0x0001087c9084(1,lVar4);
          goto LAB_10091f8e0;
        }
      }
LAB_10091f25c:
      _memcpy(lVar18,lVar11,lVar4);
      *(long *)(unaff_x19 + 0x330) = lVar4;
      *(long *)(unaff_x19 + 0x338) = lVar18;
      *(long *)(unaff_x19 + 0x340) = lVar4;
      *(undefined1 *)(unaff_x19 + 0x299) = 0;
      *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x310);
      *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x308);
      *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 800);
      *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x318);
      *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x328);
      *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(unaff_x19 + 0x2d0);
      *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x19 + 0x2c8);
      *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x2e0);
      *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x19 + 0x2d8);
      *(undefined8 *)(unaff_x19 + 0x390) = *(undefined8 *)(unaff_x19 + 0x2f0);
      *(undefined8 *)(unaff_x19 + 0x388) = *(undefined8 *)(unaff_x19 + 0x2e8);
      *(undefined8 *)(unaff_x19 + 0x3a0) = *(undefined8 *)(unaff_x19 + 0x300);
      *(undefined8 *)(unaff_x19 + 0x398) = *(undefined8 *)(unaff_x19 + 0x2f8);
      *(undefined8 *)(unaff_x19 + 0x350) = *(undefined8 *)(unaff_x19 + 0x2b0);
      *(undefined8 *)(unaff_x19 + 0x348) = *puVar1;
      *(undefined8 *)(unaff_x19 + 0x360) = *(undefined8 *)(unaff_x19 + 0x2c0);
      *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x19 + 0x2b8);
      *(undefined1 *)(unaff_x19 + 0x700) = 0;
      FUN_1011d6b78(&stack0x00000130,unaff_x19 + 0x348);
      puVar19 = in_stack_00000138;
      puVar6 = in_stack_00000130;
      if (in_stack_00000130 == (undefined1 *)0x8000000000000001) {
        *(undefined1 *)(unaff_x19 + 0x298) = 4;
        goto LAB_10091f2e0;
      }
      if (*(char *)(unaff_x19 + 0x700) == '\x03') {
        FUN_100cbe7c8(unaff_x19 + 0x3d0);
      }
      else if (*(char *)(unaff_x19 + 0x700) == '\0') {
        FUN_100e0d524(unaff_x19 + 0x348);
      }
      if (puVar6 == (undefined1 *)0x8000000000000000) {
        FUN_100de20f8(puVar19);
        _free(puVar19);
        puVar6 = (undefined1 *)0x0;
        puVar19 = (undefined *)0x1;
      }
      if (*(ushort *)(unaff_x19 + 0x2a0) - 200 < 100) {
        in_stack_00000018 = *(long *)(unaff_x19 + 0x330);
        in_stack_00000010 = *(long *)(unaff_x19 + 0x338);
        puVar17 = (undefined *)0x8000000000000001;
        goto LAB_10091f374;
      }
      uVar8 = *(undefined8 *)(unaff_x19 + 0x278);
      puVar17 = *(undefined **)(unaff_x19 + 0x280);
      if (puVar17 == (undefined *)0x0) {
        puVar6 = (undefined1 *)0x1;
      }
      else {
        puVar6 = (undefined1 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(puVar17,1);
        if (puVar6 == (undefined1 *)0x0) {
          func_0x0001087c9084(1,puVar17);
          goto LAB_10091f8e0;
        }
      }
      _memcpy(puVar6,uVar8,puVar17);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x288);
      in_stack_00000010 = *(long *)(unaff_x19 + 0x290);
      if (in_stack_00000010 == 0) {
        in_stack_00000018 = 1;
      }
      else {
        in_stack_00000018 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00000010,1);
        if (in_stack_00000018 == 0) {
          func_0x0001087c9084(1,in_stack_00000010);
LAB_10091f8e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10091f8e4);
          (*pcVar3)();
        }
      }
      _memcpy(in_stack_00000018,uVar8,in_stack_00000010);
      sVar15 = *(short *)(unaff_x19 + 0x2a0);
      in_stack_00000378 = *(undefined8 *)(unaff_x19 + 0x340);
      in_stack_00000370 = *(undefined8 *)(unaff_x19 + 0x338);
      *(undefined2 *)(unaff_x19 + 0x298) = 1;
      puVar19 = puVar17;
      if (puVar17 == (undefined *)0x8000000000000002) goto LAB_10091f2e0;
    }
    FUN_100c96bd0(lVar9);
    if (puVar17 == (undefined *)0x8000000000000001) {
      if (puVar6 != (undefined1 *)0x0) {
        _free(puVar19);
      }
      if (in_stack_00000018 != 0) {
        _free(in_stack_00000010);
      }
      if (*in_stack_00000058 == 0) {
        *in_stack_00000030 = 1;
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x130));
        *(undefined1 *)(unaff_x19 + 0x710) = 1;
      }
      in_stack_00000248 = (undefined8 *)0x0;
      in_stack_00000240 = (undefined8 *)0x8000000000000000;
      in_stack_00000250 = puVar6;
    }
    else {
      if (*in_stack_00000058 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x130));
      }
      *in_stack_00000030 = 1;
      if ((sVar15 == 0x1ad) && (puVar17 != (undefined *)0x8000000000000000)) {
        *(undefined8 *)(unaff_x28 + 0x40) = in_stack_00000378;
        *(undefined8 *)(unaff_x28 + 0x38) = in_stack_00000370;
        FUN_100e15e70(&stack0x00000390);
        in_stack_00000240 = (undefined8 *)0x8000000000000000;
        in_stack_00000248 = (undefined8 *)0x1;
        in_stack_00000250 = puVar6;
      }
      else {
        *(undefined8 *)(unaff_x28 + 0x40) = in_stack_00000378;
        *(undefined8 *)(unaff_x28 + 0x38) = in_stack_00000370;
        in_stack_00000130 = &stack0x00000390;
        in_stack_00000138 =
             &
             __ZN81__LT_codex_backend_client__client__RequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h03b2fd1e2a87e301E
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000240,s__failed_to_notify_workspace_owne_108acb589,&stack0x00000130);
        FUN_100e15e70(&stack0x00000390);
      }
    }
    FUN_100e01a3c(unaff_x19 + 0xb0);
    FUN_100e0609c(unaff_x19 + 0x18);
    *unaff_x27 = 1;
    if (in_stack_00000240 != (undefined8 *)0x8000000000000001) {
      FUN_100d701d8();
      *in_stack_00000038 = 1;
      if (in_stack_00000240 == (undefined8 *)0x8000000000000000) {
        uVar14 = 0;
        uVar8 = 0x8000000000000056;
        in_stack_00000240 = in_stack_00000248;
      }
      else {
        uVar14 = (ulong)in_stack_00000240 & 0xffffffffffffff00;
        uVar8 = 0x8000000000000070;
      }
      *unaff_x20 = uVar8;
      unaff_x20[1] = uVar14 | (ulong)in_stack_00000240 & 0xff;
      unaff_x20[2] = in_stack_00000248;
      unaff_x20[3] = in_stack_00000250;
      unaff_x20[4] = 0x8000000000000005;
      unaff_x20[0xd] = 0xffffffffffff80a5;
      uVar12 = 1;
      goto LAB_10091f5e8;
    }
  }
  uVar12 = 3;
  *in_stack_00000038 = 3;
  *unaff_x20 = 0x8000000000000071;
LAB_10091f5e8:
  *(undefined1 *)(unaff_x19 + 0xfb8) = uVar12;
  return;
}

