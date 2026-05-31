
/* WARNING: Removing unreachable block (ram,0x0001008ce304) */
/* WARNING: Removing unreachable block (ram,0x0001008ce0c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ce008(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 *in_stack_00000030;
  undefined1 *puStack0000000000000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *in_stack_000000d8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 uVar19;
  undefined8 in_stack_00000250;
  undefined8 uVar20;
  undefined8 in_stack_00000258;
  undefined8 uVar21;
  undefined8 in_stack_00000260;
  undefined8 uVar22;
  undefined8 in_stack_00000268;
  undefined8 uVar23;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  long in_stack_00000490;
  undefined1 *in_stack_00000710;
  undefined1 *puVar24;
  undefined1 *in_stack_00000718;
  undefined1 *in_stack_00000720;
  undefined1 *in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000880;
  long in_stack_00000908;
  undefined8 in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined1 *puVar25;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 in_stack_00000968;
  byte bVar26;
  ulong in_stack_00000e70;
  undefined1 *puVar27;
  undefined8 in_stack_00000e90;
  undefined8 in_stack_00000e98;
  undefined8 in_stack_00000ea0;
  undefined8 in_stack_00000ea8;
  undefined8 in_stack_00000eb0;
  undefined8 in_stack_00000eb8;
  undefined8 in_stack_00000ec0;
  undefined8 in_stack_00000ec8;
  undefined8 in_stack_00000ed0;
  undefined8 in_stack_00000ed8;
  undefined8 in_stack_00000ee0;
  undefined8 in_stack_00000ee8;
  undefined8 in_stack_00000ef0;
  undefined8 in_stack_00000ef8;
  undefined8 in_stack_00000f00;
  undefined8 in_stack_00000f08;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000710,s_failed_to_flush_parent_thread___108aca64c,&stack0x00000930);
  if ((in_stack_00000e70 & 3) == 1) {
    uVar9 = *(undefined8 *)(in_stack_00000e70 - 1);
    puVar14 = *(undefined8 **)(in_stack_00000e70 + 7);
    pcVar10 = (code *)*puVar14;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(uVar9);
    }
    if (puVar14[1] != 0) {
      _free(uVar9);
    }
    _free((undefined8 *)(in_stack_00000e70 - 1));
  }
  puVar15 = in_stack_00000718;
  puStack0000000000000040 = in_stack_00000720;
  if (in_stack_00000710 == (undefined1 *)0x8000000000000000) {
    *(long *)(unaff_x20 + 0x2c40) = *(long *)(unaff_x20 + 0x1a8) + 0x10;
    *(undefined2 *)(unaff_x25 + 0x38) = 0x100;
    FUN_1004f1a24(&stack0x00000710,unaff_x25 + 0x10);
    if ((unaff_x25[0x38] == '\x03') && (unaff_x25[0x28] == '\x03')) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0x2c20);
      puVar14 = *(undefined8 **)(unaff_x20 + 0x2c28);
      pcVar10 = (code *)*puVar14;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar9);
      }
      if (puVar14[1] != 0) {
        _free(uVar9);
      }
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x80,s_failed_to_load_parent_thread___108aca671,&stack0x00000710);
    in_stack_00000710 = *(undefined1 **)(unaff_x29 + -0x80);
    puVar15 = *(undefined1 **)(unaff_x29 + -0x78);
    puStack0000000000000040 = *(undefined1 **)(unaff_x29 + -0x70);
    bVar26 = (byte)in_stack_00000718;
    if (bVar26 < 2) {
      if (bVar26 != 0) {
LAB_1008ce388:
        if (in_stack_00000720 != (undefined1 *)0x0) {
          _free(in_stack_00000728);
        }
      }
    }
    else if ((bVar26 == 2) || (bVar26 != 3)) goto LAB_1008ce388;
    if (in_stack_00000710 != (undefined1 *)0x8000000000000000) {
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000958;
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000950;
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000968;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000960;
      *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000938;
      *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000930;
      *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000948;
      *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000940;
LAB_1008cf1e0:
      unaff_x25[10] = 0;
      unaff_x21 = in_stack_00000720;
      goto LAB_1008cf1e4;
    }
    unaff_x25[10] = 1;
    *(undefined1 **)(unaff_x20 + 0x208) = puVar15;
    *(undefined1 **)(unaff_x20 + 0x210) = puStack0000000000000040;
    *(undefined8 *)(unaff_x20 + 0x218) = 0x8000000000000005;
    *(undefined8 *)(unaff_x20 + 0x228) = in_stack_00000938;
    *(undefined8 *)(unaff_x20 + 0x220) = in_stack_00000930;
    FUN_101133118(unaff_x20 + 0x230,*(long *)(*(long *)(unaff_x20 + 0x188) + 0x198) + 0x10);
    if (*(long *)(unaff_x20 + 0x2100) != -0x8000000000000000) {
      func_0x000100025ae8(&stack0x00000930,unaff_x20 + 0x2100);
      if ((*(long *)(unaff_x20 + 0x20d0) != -0x8000000000000000) &&
         (*(long *)(unaff_x20 + 0x20d0) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x20d8));
      }
      *(undefined8 *)(unaff_x20 + 0x20d8) = in_stack_00000938;
      *(undefined8 *)(unaff_x20 + 0x20d0) = in_stack_00000930;
      *(undefined8 *)(unaff_x20 + 0x20e0) = in_stack_00000940;
    }
    *(long *)(unaff_x20 + 0x2c28) = *(long *)(*(long *)(unaff_x20 + 0x188) + 0x188) + 0x10;
    *(undefined8 *)(unaff_x20 + 0x5178) = 1;
    FUN_101133118(unaff_x20 + 0x2c30,unaff_x20 + 0x230);
    unaff_x25[9] = 1;
    uVar18 = *(undefined8 *)(unaff_x20 + 0x1a0);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x198);
    unaff_x25[10] = 0;
    uVar16 = *(undefined8 *)(unaff_x20 + 0x208);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x20 + 0x210);
    *(undefined8 *)(unaff_x29 + -0x80) = uVar16;
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x20 + 0x218);
    __ZN10codex_core12codex_thread11CodexThread12rollout_path17h0bfa07925f939bf2E
              (&stack0x00000e70,*(long *)(unaff_x20 + 0x1a8) + 0x10);
    puStack0000000000000040 = *(undefined1 **)(unaff_x29 + -0x70);
    puVar15 = *(undefined1 **)(unaff_x29 + -0x78);
    puVar24 = *(undefined1 **)(unaff_x29 + -0x80);
    unaff_x25[8] = 1;
    *(undefined1 **)(unaff_x20 + 0x5240) = puVar15;
    *(undefined1 **)(unaff_x20 + 0x5238) = puVar24;
    *(undefined1 **)(unaff_x20 + 0x5250) = in_stack_00000718;
    *(undefined1 **)(unaff_x20 + 0x5248) = puStack0000000000000040;
    *(undefined1 **)(unaff_x20 + 0x5260) = in_stack_00000728;
    *(undefined1 **)(unaff_x20 + 0x5258) = in_stack_00000720;
    *(undefined8 *)(unaff_x20 + 0x5270) = uVar18;
    *(undefined8 *)(unaff_x20 + 0x5268) = uVar9;
    unaff_x25[0x10] = 3;
    *(undefined8 *)(unaff_x20 + 0x5188) = *(undefined8 *)(unaff_x20 + 0x188);
    *(undefined8 *)(unaff_x20 + 0x5190) = *(undefined8 *)(unaff_x20 + 400);
    *(undefined1 *)(in_stack_00000030 + 0x17) = 0;
    FUN_1008d2cc0(&stack0x00000930,unaff_x20 + 0x5188,unaff_x24);
    if (puVar24 != (undefined1 *)0x8000000000000002) {
      if ((((*(char *)(in_stack_00000030 + 0x17) == '\x03') &&
           (*(char *)(in_stack_00000030 + 0x16) == '\x03')) &&
          (*(char *)(in_stack_00000030 + 0x15) == '\x03')) &&
         ((*(char *)(in_stack_00000030 + 0x14) == '\x03' &&
          (*(char *)(in_stack_00000030 + 0xb) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x20 + 0x51d8);
        if (*(long *)(unaff_x20 + 0x51e0) != 0) {
          (**(code **)(*(long *)(unaff_x20 + 0x51e0) + 0x18))(*(undefined8 *)(unaff_x20 + 0x51e8));
        }
      }
      uVar9 = *(undefined8 *)(unaff_x20 + 0x2c28);
      uVar8 = unaff_x25[0x10];
      *(undefined2 *)(unaff_x25 + 8) = 0;
      uVar16 = *in_stack_00000030;
      *(undefined8 *)(unaff_x20 + 0x2c28) = in_stack_00000030[1];
      *(undefined8 *)(unaff_x20 + 0x2c20) = uVar16;
      in_stack_00000030[3] = in_stack_00000718;
      in_stack_00000030[2] = puStack0000000000000040;
      in_stack_00000030[5] = in_stack_00000728;
      in_stack_00000030[4] = in_stack_00000720;
      in_stack_00000030[1] = puVar15;
      *in_stack_00000030 = puVar24;
      *(undefined8 *)(unaff_x20 + 0x51b0) = *(undefined8 *)(unaff_x20 + 0x5240);
      *(undefined8 *)(unaff_x20 + 0x51a8) = *(undefined8 *)(unaff_x20 + 0x5238);
      *(undefined8 *)(unaff_x20 + 0x51c0) = *(undefined8 *)(unaff_x20 + 0x5250);
      *(undefined8 *)(unaff_x20 + 0x51b8) = *(undefined8 *)(unaff_x20 + 0x5248);
      *(undefined8 *)(unaff_x20 + 0x51d0) = *(undefined8 *)(unaff_x20 + 0x5260);
      *(undefined8 *)(unaff_x20 + 0x51c8) = *(undefined8 *)(unaff_x20 + 0x5258);
      *(undefined8 *)(unaff_x20 + 0x51e0) = *(undefined8 *)(unaff_x20 + 0x5270);
      *(undefined8 *)(unaff_x20 + 0x51d8) = *(undefined8 *)(unaff_x20 + 0x5268);
      *(undefined8 *)(unaff_x20 + 0x51e8) = uVar9;
      *unaff_x28 = 0;
      unaff_x28[1] = uVar8;
      unaff_x28[2] = 0;
      FUN_10050f5b0(&stack0x00000930,unaff_x20 + 0x2c20,unaff_x24);
      if (puVar24 == (undefined1 *)0x8000000000000001) {
        uVar8 = 7;
        goto LAB_1008cf0a0;
      }
      _memcpy(&stack0x000002c0,&stack0x000009a0,0x118);
      FUN_100d6e52c(unaff_x20 + 0x2c20);
      if (puVar24 == (undefined1 *)0x8000000000000000) {
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000930;
        *(code **)(unaff_x29 + -0x78) =
             __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000e70,s__error_creating_detached_review_t_108aca622,unaff_x29 + -0x80)
        ;
        FUN_100df5738(&stack0x00000930);
        puVar17 = unaff_x24;
        puStack0000000000000040 = in_stack_00000728;
LAB_1008cf1d8:
        FUN_100de93d0(unaff_x20 + 0x230);
        puVar15 = in_stack_00000720;
        in_stack_00000720 = puVar17;
        in_stack_00000710 = in_stack_00000718;
        goto LAB_1008cf1e0;
      }
      _memcpy(&stack0x00000780,&stack0x000002c0,0x118);
      *(undefined8 *)(unaff_x20 + 0x2780) = in_stack_000003d0;
      *(undefined8 *)(unaff_x20 + 0x2778) = in_stack_000003c8;
      *(undefined8 *)(unaff_x20 + 0x2788) = in_stack_00000880;
      FUN_100e26e4c(&stack0x00000710);
      uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 400) + 0x18);
      *(undefined8 *)(unaff_x20 + 0x2c28) = *(undefined8 *)(unaff_x20 + 0x2780);
      *(undefined8 *)(unaff_x20 + 0x2c20) = *(undefined8 *)(unaff_x20 + 0x2778);
      *(undefined8 *)(unaff_x20 + 0x2c30) = uVar9;
      *(undefined8 *)(unaff_x20 + 0x46c0) = *(undefined8 *)(unaff_x20 + 0x188);
      *(undefined2 *)(unaff_x21 + 0x978) = 0;
      FUN_1008d4740(&stack0x00000930,unaff_x20 + 0x2c20,unaff_x24);
      if (puVar24 == (undefined1 *)0x8000000000000001) {
        uVar8 = 8;
        goto LAB_1008cf0a0;
      }
      if (unaff_x21[0x978] == '\x03') {
        FUN_100d1118c(unaff_x20 + 0x2c38);
      }
      uVar16 = *(undefined8 *)(unaff_x20 + 0x2780);
      puVar17 = *(undefined1 **)(unaff_x20 + 0x2778);
      __ZN16codex_app_server18request_processors16thread_lifecycle26log_listener_attach_result17h2ca3ef2f5c64b959E
                (&stack0x00000420,&stack0x00000930,
                 *(undefined8 *)(*(long *)(unaff_x20 + 400) + 0x18),&UNK_108cb2529,0xd);
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x188) + 0x198);
      uVar9 = *(undefined8 *)(lVar5 + 0x1ba0);
      *(undefined8 *)(unaff_x20 + 0x2790) = *(undefined8 *)(lVar5 + 0x1b98);
      *(undefined8 *)(unaff_x20 + 0x2798) = uVar9;
      *(long *)(unaff_x20 + 0x2c40) = *(long *)(unaff_x20 + 0x2788) + 0x10;
      *(undefined2 *)(unaff_x25 + 0x38) = 0x100;
      unaff_x25[0x3a] = 0;
      func_0x0001004f156c(&stack0x00000490,unaff_x20 + 0x2c20,unaff_x24);
      if (in_stack_00000490 == 3) {
        uVar8 = 9;
        goto LAB_1008cf0a0;
      }
      _memcpy(unaff_x20 + 0x27a0,&stack0x00000490,0x278);
      if ((unaff_x25[0x38] == '\x03') && (unaff_x25[0x28] == '\x03')) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x2c20);
        puVar14 = *(undefined8 **)(unaff_x20 + 0x2c28);
        pcVar10 = (code *)*puVar14;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar9);
        }
        if (puVar14[1] != 0) {
          _free(uVar9);
        }
      }
      puVar25 = puStack0000000000000040;
      if (*(long *)(unaff_x20 + 0x27a0) != 2) {
        _memcpy(&stack0x00000930,unaff_x20 + 0x27a0,0x278);
        __ZN16codex_app_server18request_processors16thread_processor25thread_from_stored_thread17h9999c464848c4bd4E
                  (&stack0x00000710,&stack0x00000930,*(undefined8 *)(unaff_x20 + 0x2790),
                   *(undefined8 *)(unaff_x20 + 0x2798),
                   *(long *)(*(long *)(unaff_x20 + 0x188) + 0x198) + 0x1bc0);
        *(undefined2 *)(unaff_x25 + 2) = 0x101;
        unaff_x25[4] = 1;
        _memcpy(unaff_x20 + 0x2a18,&stack0x00000710,0x1f8);
        if (in_stack_00000908 != -0x8000000000000000) {
          FUN_100e4a6c8(&stack0x00000908);
        }
        FUN_1037433c4(&stack0x00000930,*(long *)(unaff_x20 + 0x2788) + 0x10);
        puVar27 = (undefined1 *)0x0;
        pcVar10 = (code *)0x1;
        uVar9 = 0;
        FUN_10624142c(&stack0x00000710,&stack0x00000a60,0);
        iVar7 = FUN_100f1c4e0(&stack0x00000e70,&stack0x00000710,0x24);
        if (iVar7 != 0) {
          FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000de0,&UNK_10b235000,&UNK_10b2346c0);
          goto LAB_1008cf6f8;
        }
        *(undefined8 *)(unaff_x29 + -0x78) = 1;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        if (*(long *)(unaff_x20 + 0x2a30) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0x2a38));
        }
        unaff_x25[4] = 1;
        uVar18 = *(undefined8 *)(unaff_x29 + -0x80);
        *(undefined8 *)(unaff_x20 + 0x2a38) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x20 + 0x2a30) = uVar18;
        *(undefined8 *)(unaff_x20 + 0x2a40) = *(undefined8 *)(unaff_x29 + -0x70);
        FUN_100e26e4c(&stack0x00000930);
        lVar5 = *(long *)(unaff_x20 + 0x188);
        FUN_1016133e8(&stack0x00000930,unaff_x20 + 0x2a18);
        _memcpy(&stack0x00000710,&stack0x00000930,0x1f8);
        _memcpy(unaff_x20 + 0x2c20,&stack0x00000710,0x1f8);
        *(long *)(unaff_x20 + 0x2e18) = lVar5 + 0x1b0;
        *unaff_x21 = 0;
        iVar7 = FUN_10088ef20(unaff_x20 + 0x2c20,unaff_x24);
        if (iVar7 == 0) {
          FUN_100cd7850(unaff_x20 + 0x2c20);
          *(long *)(unaff_x20 + 0x2c20) = *(long *)(unaff_x20 + 0x188) + 0x1b0;
          *(undefined8 *)(unaff_x20 + 0x2c28) = *(undefined8 *)(unaff_x20 + 0x2a20);
          *(undefined8 *)(unaff_x20 + 0x2c30) = *(undefined8 *)(unaff_x20 + 0x2a28);
          unaff_x25[0xb0] = 0;
          lVar5 = unaff_x20 + 0x2c20;
          FUN_10088f808(&stack0x00000930,lVar5,unaff_x24);
          if (puVar17 == (undefined1 *)0x8000000000000003) {
            uVar8 = 0xb;
          }
          else {
            if ((((unaff_x25[0xb0] == '\x03') && (unaff_x25[0xa8] == '\x03')) &&
                (unaff_x25[0xa0] == '\x03')) && (unaff_x25[0x58] == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (unaff_x20 + 0x2c70);
              if (*(long *)(unaff_x20 + 0x2c78) != 0) {
                (**(code **)(*(long *)(unaff_x20 + 0x2c78) + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x2c80));
              }
            }
            if ((-0x7ffffffffffffffe < *(long *)(unaff_x20 + 0x2b80)) &&
               (*(long *)(unaff_x20 + 0x2b80) != 0)) {
              _free(*(undefined8 *)(unaff_x20 + 0x2b88));
            }
            *(undefined1 **)(unaff_x20 + 0x2b80) = puVar17;
            *(undefined1 **)(unaff_x20 + 0x2b90) = puStack0000000000000040;
            *(undefined8 *)(unaff_x20 + 0x2b88) = uVar16;
            *(undefined2 *)(unaff_x25 + 2) = 0;
            unaff_x25[4] = 0;
            _memcpy(&stack0x00000930,unaff_x20 + 0x2a18,0x1f8);
            __ZN16codex_app_server18request_processors14thread_summary27thread_started_notification17h4a8ff46acd5a3e8aE
                      (&stack0x00000bc0,&stack0x00000930);
            unaff_x25[7] = 1;
            lVar1 = *(long *)(*(long *)(unaff_x20 + 0x188) + 400) + 0x10;
            unaff_x25[7] = 0;
            _memcpy(lVar5,&stack0x00000bc0,0x1f8);
            *(long *)(unaff_x20 + 0x2e18) = lVar1;
            unaff_x25[0xce0] = 0;
            _memcpy(unaff_x20 + 0x2e20,lVar5,0x1f8);
            *(long *)(unaff_x20 + 0x3018) = lVar1;
            *(undefined8 *)(unaff_x20 + 0x3020) = 8;
            *(undefined8 *)(unaff_x20 + 0x3028) = 0;
            unaff_x25[0x620] = 0;
            uVar13 = FUN_100897c70(unaff_x20 + 0x2e20,unaff_x24);
            if ((uVar13 & 1) == 0) {
              FUN_100d40d08(unaff_x20 + 0x2e20);
              unaff_x25[0xce0] = 1;
              unaff_x25[7] = 0;
              *(undefined2 *)(unaff_x25 + 2) = 0;
              unaff_x25[4] = 0;
              in_stack_00000718 = puVar24;
              in_stack_00000720 = puVar15;
              goto LAB_1008ced44;
            }
            unaff_x25[0xce0] = 3;
            uVar8 = 0xc;
          }
        }
        else {
          uVar8 = 10;
        }
        goto LAB_1008cf0a0;
      }
      pcVar10 = *(code **)(unaff_x20 + 0x27b0);
      puVar27 = *(undefined1 **)(unaff_x20 + 0x27a8);
      in_stack_00000730 = *(undefined8 *)(unaff_x20 + 0x27c0);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x27b8);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b627810 - 1 < 2 ||
           ((bRam000000010b627810 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                               ), cVar6 != '\0')))))) &&
         (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                             ), (uVar13 & 1) != 0)) {
        puVar17 = (undefined1 *)(unaff_x20 + 0x2778);
        *(char **)(unaff_x29 + -0x80) = s__failed_to_load_summary_for_revi_108aca5f2;
        *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000930;
        puVar15 = &stack0x00000de0;
        puVar24 = (undefined1 *)0x1;
        puStack0000000000000040 = (undefined1 *)0x1;
        func_0x0001008d2df0(&stack0x00000710);
        puVar25 = &stack0x00000e70;
      }
      else {
        lVar5 = 
        ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar16 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                    + 0x20);
          uVar18 = *(undefined8 *)
                    (
                    ___ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor21start_detached_review28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0a8c10940b4c6d8eE
                    + 0x28);
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000db8);
          if (iVar7 != 0) {
            puVar17 = (undefined1 *)(unaff_x20 + 0x2778);
            puVar25 = &stack0x00000e70;
            puVar15 = &stack0x00000dd0;
            puVar24 = (undefined1 *)0x1;
            puStack0000000000000040 = (undefined1 *)0x1;
            *(undefined8 *)(unaff_x29 + -0x78) = uVar16;
            *(undefined8 *)(unaff_x29 + -0x80) = 2;
            *(undefined8 *)(unaff_x29 + -0x70) = uVar18;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar5,puVar4,puVar3,unaff_x29 + -0x80,&stack0x00000710);
          }
        }
      }
      bVar26 = (byte)puVar27;
      in_stack_00000720 = puVar15;
      in_stack_00000718 = puVar24;
      if (bVar26 < 2) {
        if (bVar26 != 0) {
LAB_1008cf594:
          if (pcVar10 != (code *)0x0) {
            _free(uVar9);
          }
        }
      }
      else if ((bVar26 == 2) || (bVar26 != 3)) goto LAB_1008cf594;
LAB_1008ced44:
      uVar16 = *(undefined8 *)(unaff_x20 + 0x188);
      uVar18 = *(undefined8 *)(unaff_x20 + 400);
      lVar5 = *(long *)(unaff_x20 + 0x2788);
      unaff_x25[1] = 0;
      *(undefined8 *)(unaff_x20 + 0x2c20) = 0x8000000000000015;
      *(undefined8 *)(unaff_x20 + 0x2c68) = *(undefined8 *)(unaff_x20 + 0x1f0);
      *(undefined8 *)(unaff_x20 + 0x2c50) = *(undefined8 *)(unaff_x20 + 0x1d8);
      *(undefined8 *)(unaff_x20 + 0x2c48) = *(undefined8 *)(unaff_x20 + 0x1d0);
      *(undefined8 *)(unaff_x20 + 0x2c60) = *(undefined8 *)(unaff_x20 + 0x1e8);
      *(undefined8 *)(unaff_x20 + 0x2c58) = *(undefined8 *)(unaff_x20 + 0x1e0);
      *(undefined8 *)(unaff_x20 + 0x2c30) = *(undefined8 *)(unaff_x20 + 0x1b8);
      *(undefined8 *)(unaff_x20 + 0x2c28) = *(undefined8 *)(unaff_x20 + 0x1b0);
      *(undefined8 *)(unaff_x20 + 0x2c40) = *(undefined8 *)(unaff_x20 + 0x1c8);
      *(undefined8 *)(unaff_x20 + 0x2c38) = *(undefined8 *)(unaff_x20 + 0x1c0);
      *(undefined8 *)(unaff_x20 + 0x2e08) = uVar16;
      *(undefined8 *)(unaff_x20 + 0x2e10) = uVar18;
      *(long *)(unaff_x20 + 0x2e18) = lVar5 + 0x10;
      unaff_x25[0x210] = 0;
      plVar2 = (long *)(unaff_x20 + 0x2c20);
      FUN_1008d0168(&stack0x00000930,plVar2,unaff_x24);
      if (puVar17 == (undefined1 *)0x8000000000000021) {
        uVar8 = 0xd;
        goto LAB_1008cf0a0;
      }
      FUN_100d2428c(plVar2);
      if (puVar17 != (undefined1 *)0x8000000000000020) {
        puVar27 = &stack0x00000930;
        pcVar10 = 
        __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000710,s__failed_to_start_detached_review_108aca695,&stack0x00000e70);
        FUN_100df5738(&stack0x00000930);
        puVar25 = puStack0000000000000040;
        if (in_stack_00000718 != (undefined1 *)0x8000000000000000) {
          unaff_x25[6] = 0;
          lVar5 = **(long **)(unaff_x20 + 0x2788);
          **(long **)(unaff_x20 + 0x2788) = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x2788);
          }
          goto LAB_1008cf1d8;
        }
      }
      puStack0000000000000040 = puVar25;
      unaff_x25[6] = 0;
      __ZN16codex_app_server18request_processors14turn_processor20TurnRequestProcessor17build_review_turn17h60a4e480e8374341E
                (&stack0x00000e70,&stack0x00000930,*(undefined8 *)(unaff_x20 + 0x1f8),
                 *(undefined8 *)(unaff_x20 + 0x200));
      unaff_x25[5] = 1;
      FUN_10624142c(&stack0x00000930,unaff_x20 + 0x2778,0);
      iVar7 = FUN_100f1c4e0(&stack0x00000710,&stack0x00000930,0x24);
      if (iVar7 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000de0,&UNK_10b235000,&UNK_10b2346c0);
LAB_1008cf6f8:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1008cf6fc);
        (*pcVar10)();
      }
      *(undefined8 *)(unaff_x20 + 0x2ca8) = in_stack_00000ef8;
      *(undefined8 *)(unaff_x20 + 0x2ca0) = in_stack_00000ef0;
      *(undefined8 *)(unaff_x20 + 0x2cb8) = in_stack_00000f08;
      *(undefined8 *)(unaff_x20 + 0x2cb0) = in_stack_00000f00;
      *(undefined8 *)(unaff_x20 + 0x2cc8) = 1;
      *(undefined8 *)(unaff_x20 + 0x2cc0) = 0;
      *(undefined8 *)(unaff_x20 + 0x2c68) = in_stack_00000eb8;
      *(undefined8 *)(unaff_x20 + 0x2c60) = in_stack_00000eb0;
      *(undefined8 *)(unaff_x20 + 0x2c78) = in_stack_00000ec8;
      *(undefined8 *)(unaff_x20 + 0x2c70) = in_stack_00000ec0;
      *(undefined8 *)(unaff_x20 + 0x2c88) = in_stack_00000ed8;
      *(undefined8 *)(unaff_x20 + 0x2c80) = in_stack_00000ed0;
      *(undefined8 *)(unaff_x20 + 0x2c98) = in_stack_00000ee8;
      *(undefined8 *)(unaff_x20 + 0x2c90) = in_stack_00000ee0;
      *(code **)(unaff_x20 + 0x2c28) = pcVar10;
      *plVar2 = (long)puVar27;
      *(undefined8 *)(unaff_x20 + 0x2c38) = in_stack_00000730;
      *(undefined8 *)(unaff_x20 + 0x2c30) = uVar9;
      uVar9 = *(undefined8 *)(unaff_x20 + 0x188);
      uVar16 = *(undefined8 *)(unaff_x20 + 400);
      unaff_x25[5] = 0;
      *(undefined8 *)(unaff_x20 + 0x2cd0) = 0;
      *(undefined8 *)(unaff_x20 + 0x2c48) = in_stack_00000e98;
      *(undefined8 *)(unaff_x20 + 0x2c40) = in_stack_00000e90;
      *(undefined8 *)(unaff_x20 + 0x2c58) = in_stack_00000ea8;
      *(undefined8 *)(unaff_x20 + 0x2c50) = in_stack_00000ea0;
      *(undefined8 *)(unaff_x20 + 0x2cd8) = uVar9;
      *(undefined8 *)(unaff_x20 + 0x2ce0) = uVar16;
      unaff_x25[0xfc0] = 0;
      puVar15 = (undefined1 *)0x2c20;
      iVar7 = FUN_1008d153c(unaff_x20 + 0x2c20,unaff_x24);
      if (iVar7 != 0) {
        uVar8 = 0xe;
        goto LAB_1008cf0a0;
      }
      if (unaff_x25[0xfc0] == '\x03') {
        FUN_100d90384(unaff_x20 + 0x2ce8);
        unaff_x25[0xfc1] = 0;
      }
      else if ((unaff_x25[0xfc0] == '\0') &&
              (FUN_100e4623c(unaff_x20 + 0x2c20), *(long *)(unaff_x20 + 0x2cc0) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x2cc8));
      }
      unaff_x25[5] = 0;
      unaff_x25[6] = 0;
      lVar5 = **(long **)(unaff_x20 + 0x2788);
      **(long **)(unaff_x20 + 0x2788) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x2788);
      }
      FUN_100de93d0(unaff_x20 + 0x230);
      unaff_x25[10] = 0;
      unaff_x25[1] = 0;
      lVar5 = **(long **)(unaff_x20 + 0x1a8);
      **(long **)(unaff_x20 + 0x1a8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x1a8);
      }
      in_stack_000001b8 = *(undefined8 *)(unaff_x29 + -0xb8);
      in_stack_000001b0 = *(undefined8 *)(unaff_x29 + -0xc0);
      in_stack_000001c8 = *(undefined8 *)(unaff_x29 + -0xa8);
      in_stack_000001c0 = *(undefined8 *)(unaff_x29 + -0xb0);
      in_stack_000001d8 = *(undefined8 *)(unaff_x29 + -0x98);
      in_stack_000001d0 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_000001e8 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0x90);
      *unaff_x25 = 1;
      in_stack_00000710 = (undefined1 *)0x8000000000000000;
      goto LAB_1008cf23c;
    }
    uVar8 = 6;
LAB_1008cf0a0:
    *unaff_x25 = uVar8;
  }
  else {
LAB_1008cf1e4:
    if ((unaff_x25[1] & 1) != 0) {
      FUN_100e0cd10(unaff_x20 + 0x1b0);
    }
    unaff_x25[1] = 0;
    lVar5 = **(long **)(unaff_x20 + 0x1a8);
    **(long **)(unaff_x20 + 0x1a8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x1a8);
    }
    in_stack_000001b8 = *(undefined8 *)(unaff_x29 + -0xb8);
    in_stack_000001b0 = *(undefined8 *)(unaff_x29 + -0xc0);
    in_stack_000001c8 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_000001c0 = *(undefined8 *)(unaff_x29 + -0xb0);
    in_stack_000001d8 = *(undefined8 *)(unaff_x29 + -0x98);
    in_stack_000001d0 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_000001e8 = *(undefined8 *)(unaff_x29 + -0x88);
    in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0x90);
    *unaff_x25 = 1;
    unaff_x25 = unaff_x21;
    if (in_stack_00000710 != (undefined1 *)0x8000000000000001) {
LAB_1008cf23c:
      uVar23 = in_stack_000001e8;
      uVar22 = in_stack_000001e0;
      uVar21 = in_stack_000001d8;
      uVar20 = in_stack_000001d0;
      uVar19 = in_stack_000001c8;
      uVar18 = in_stack_000001c0;
      uVar16 = in_stack_000001b8;
      uVar9 = in_stack_000001b0;
      FUN_100d3d340(unaff_x26);
      if (in_stack_00000710 == (undefined1 *)0x8000000000000000) {
        if (*(long *)(unaff_x20 + 0xe8) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xf0));
        }
        *(undefined2 *)(unaff_x20 + 0x104) = 0;
        *(undefined1 *)(unaff_x20 + 0x103) = 0;
        if (((*(byte *)(unaff_x20 + 0x102) & 1) != 0) && (*(long *)(unaff_x20 + 0xd0) != 0)) {
          _free(*(undefined8 *)(unaff_x20 + 0xd8));
        }
        *(undefined1 *)(unaff_x20 + 0x102) = 0;
        in_stack_00000710 = (undefined1 *)0x8000000000000000;
        uVar9 = in_stack_00000230;
        uVar16 = in_stack_00000238;
        uVar18 = in_stack_00000240;
        uVar19 = in_stack_00000248;
        uVar20 = in_stack_00000250;
        uVar21 = in_stack_00000258;
        uVar22 = in_stack_00000260;
        uVar23 = in_stack_00000268;
      }
      else {
        if (*(long *)(unaff_x20 + 0xe8) != 0) {
          _free(*(undefined8 *)(unaff_x20 + 0xf0));
        }
        *(undefined1 *)(unaff_x20 + 0x105) = 0;
        unaff_x25 = (undefined1 *)0xffffffffffff80a5;
        if ((*(byte *)(unaff_x20 + 0x103) & 1) != 0) {
          lVar5 = *in_stack_000000d8;
          *in_stack_000000d8 = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(&stack0x000000d8);
          }
        }
        *(undefined1 *)(unaff_x20 + 0x103) = 0;
        if ((*(byte *)(unaff_x20 + 0x104) & 1) != 0) {
          uVar11 = *(ulong *)(unaff_x20 + 0x108);
          uVar13 = uVar11 ^ 0x8000000000000000;
          if (-1 < (long)uVar11) {
            uVar13 = 2;
          }
          if (uVar13 != 0) {
            if ((uVar13 == 1) || (uVar13 != 2)) {
              if (*(long *)(unaff_x20 + 0x110) != 0) {
                lVar5 = 0x10;
                goto LAB_1008cf358;
              }
            }
            else {
              if (uVar11 != 0) {
                _free(*(undefined8 *)(unaff_x20 + 0x110));
              }
              if ((*(ulong *)(unaff_x20 + 0x120) & 0x7fffffffffffffff) != 0) {
                lVar5 = 0x20;
LAB_1008cf358:
                _free(*(undefined8 *)(unaff_x20 + 0x108 + lVar5));
              }
            }
          }
        }
        *(undefined1 *)(unaff_x20 + 0x104) = 0;
        if (((*(byte *)(unaff_x20 + 0x102) & 1) != 0) && (*(long *)(unaff_x20 + 0xd0) != 0)) {
          _free(*(undefined8 *)(unaff_x20 + 0xd8));
        }
        *(undefined1 *)(unaff_x20 + 0x102) = 0;
      }
      *in_stack_00000048 = 1;
      FUN_100d33230(unaff_x23);
      if (in_stack_00000710 == (undefined1 *)0x8000000000000000) {
        uVar12 = 0x800000000000006f;
      }
      else {
        uVar12 = 0x8000000000000070;
        in_stack_00000090 = uVar9;
        in_stack_00000098 = uVar16;
        in_stack_000000a0 = uVar18;
        in_stack_000000a8 = uVar19;
        in_stack_000000b0 = uVar20;
        in_stack_000000b8 = uVar21;
        in_stack_000000c0 = uVar22;
        in_stack_000000c8 = uVar23;
      }
      unaff_x22[6] = in_stack_00000098;
      unaff_x22[5] = in_stack_00000090;
      unaff_x22[8] = in_stack_000000a8;
      unaff_x22[7] = in_stack_000000a0;
      unaff_x22[10] = in_stack_000000b8;
      unaff_x22[9] = in_stack_000000b0;
      *unaff_x22 = uVar12;
      unaff_x22[1] = in_stack_00000710;
      unaff_x22[2] = puVar15;
      unaff_x22[3] = puStack0000000000000040;
      unaff_x22[4] = 0x8000000000000005;
      unaff_x22[0xc] = in_stack_000000c8;
      unaff_x22[0xb] = in_stack_000000c0;
      uVar8 = 1;
      unaff_x22[0xd] = unaff_x25;
      goto LAB_1008cf40c;
    }
  }
  *in_stack_00000048 = 5;
  *unaff_x22 = 0x8000000000000071;
  uVar8 = 3;
LAB_1008cf40c:
  unaff_x28[8] = uVar8;
  return;
}

