
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009d0eb8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  char cVar15;
  undefined1 uVar16;
  ulong uVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar18;
  undefined8 *puVar19;
  char cVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *unaff_x24;
  long lVar23;
  long unaff_x29;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  long *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  char *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined2 uStack0000000000000100;
  undefined6 uStack0000000000000102;
  long *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  char *in_stack_00000120;
  code *in_stack_00000128;
  
code_r0x0001009d0eb8:
  *(char **)(unaff_x29 + -0x60) = s__Failed_to_serialize_JSON_RPC_me_108acd25a;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x88;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0x100) = 1;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x70;
  *(undefined8 *)(unaff_x29 + -0xf0) = 1;
  *(long *)(unaff_x29 + -0xe8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0x100);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar18 = *unaff_x21;
    in_stack_00000108 = *(long **)(lVar18 + 0x20);
    in_stack_00000110 = *(long *)(lVar18 + 0x28);
    _uStack0000000000000100 = 1;
    puVar14 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar14 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,&stack0x00000100);
    if (iVar10 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar18,puVar2,puVar14,&stack0x00000100,unaff_x29 + -0x100);
    }
  }
LAB_1009d13ac:
  plVar11 = in_stack_00000098;
  if (*in_stack_00000098 == 1) {
    uVar17 = in_stack_00000098[1];
    if ((uVar17 & 3) != 1) goto LAB_1009d13ec;
    puVar19 = (undefined8 *)(uVar17 - 1);
    uVar12 = *puVar19;
    puVar22 = *(undefined8 **)(uVar17 + 7);
    pcVar7 = (code *)*puVar22;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar12);
    }
    if (puVar22[1] != 0) {
      _free(uVar12);
    }
  }
  else {
    if ((*in_stack_00000098 != 0) || (in_stack_00000098[2] == 0)) goto LAB_1009d13ec;
    puVar19 = (undefined8 *)in_stack_00000098[1];
  }
  _free(puVar19);
LAB_1009d13ec:
  do {
    _free(plVar11);
    do {
      FUN_100d30bd8(unaff_x19 + 0x16);
      *(undefined1 *)(unaff_x19 + 0x2f) = 0;
      unaff_x19[0x2d] = (long)unaff_x19;
      unaff_x19[0x2e] = (long)unaff_x19;
      lVar18 = (*
               ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
               )();
      if (*(char *)(lVar18 + 0x48) == '\x01') {
LAB_1009d08a0:
        cVar9 = *(char *)(lVar18 + 0x44);
        cVar20 = *(char *)(lVar18 + 0x45);
        cVar15 = cVar20;
        if (cVar9 != '\x01') {
LAB_1009d08bc:
          *(char *)(lVar18 + 0x45) = cVar15;
          goto LAB_1009d08c0;
        }
        if (cVar20 != '\0') {
          cVar15 = cVar20 + -1;
          goto LAB_1009d08bc;
        }
        FUN_10610bbb4(*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
        *(undefined1 *)(unaff_x29 + -0xfe) = 0;
        *(undefined2 *)(unaff_x29 + -0x100) = 0;
        __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                  (unaff_x29 - 0x100U | 1);
        goto LAB_1009d1c3c;
      }
      cVar9 = '\0';
      cVar20 = '\0';
      if (*(char *)(lVar18 + 0x48) != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar18,&DAT_100c35d48);
        *(undefined1 *)(lVar18 + 0x48) = 1;
        goto LAB_1009d08a0;
      }
LAB_1009d08c0:
      uStack0000000000000100 = CONCAT11(cVar20,cVar9);
      lVar23 = *unaff_x19;
      func_0x000100fc95fc(unaff_x29 + -0x100,lVar23 + 0x1a0,lVar23 + 0x80);
      uVar17 = *(ulong *)(unaff_x29 + -0x100);
      if (uVar17 != 0x8000000000000004) {
        if (uVar17 != 0x8000000000000005) {
LAB_1009d0944:
          uVar8 = *(ulong *)(lVar23 + 0x1c0);
          *(ulong *)(lVar23 + 0x1c0) = uVar8 - 2;
          LORelease();
          if (1 < uVar8) {
            in_stack_00000048 = unaff_x24[0x1b];
            in_stack_00000040 = unaff_x24[0x1a];
            in_stack_00000058 = unaff_x24[0x1d];
            in_stack_00000050 = unaff_x24[0x1c];
            in_stack_00000068 = unaff_x24[0x1f];
            in_stack_00000060 = unaff_x24[0x1e];
            in_stack_00000008 = unaff_x24[0x13];
            in_stack_00000000 = unaff_x24[0x12];
            in_stack_00000018 = unaff_x24[0x15];
            in_stack_00000010 = unaff_x24[0x14];
            in_stack_00000028 = unaff_x24[0x17];
            in_stack_00000020 = unaff_x24[0x16];
            in_stack_00000038 = unaff_x24[0x19];
            in_stack_00000030 = unaff_x24[0x18];
            goto LAB_1009d09a8;
          }
          __ZN3std7process5abort17hdc01e45e25b715e8E();
          goto LAB_1009d1c88;
        }
        __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                  (lVar23 + 0x100,*unaff_x20);
        func_0x000100fc95fc(unaff_x29 + -0x100,lVar23 + 0x1a0,lVar23 + 0x80);
        uVar17 = *(ulong *)(unaff_x29 + -0x100);
        if (uVar17 == 0x8000000000000004) {
          if (1 < *(ulong *)(lVar23 + 0x1c0)) {
            puVar14 = &UNK_10b23a6b8;
            goto LAB_1009d1cf0;
          }
          goto LAB_1009d09a8;
        }
        if (uVar17 != 0x8000000000000005) goto LAB_1009d0944;
        if ((*(char *)(lVar23 + 0x1b8) != '\x01') || (1 < *(ulong *)(lVar23 + 0x1c0))) {
          if (cVar9 != '\0') {
            if (*(char *)(lVar18 + 0x48) != '\x01') {
              if (*(char *)(lVar18 + 0x48) == '\x02') goto LAB_1009d1c3c;
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar18,&DAT_1060edbcc);
              *(undefined1 *)(lVar18 + 0x48) = 1;
            }
            *(undefined1 *)(lVar18 + 0x44) = 1;
            *(char *)(lVar18 + 0x45) = cVar20;
          }
LAB_1009d1c3c:
          uVar16 = 3;
          *(undefined1 *)(unaff_x19 + 0x2f) = 3;
          uVar12 = 1;
          goto LAB_1009d19a4;
        }
        *(undefined1 *)(unaff_x19 + 0x2f) = 1;
        unaff_x19[7] = -0x7ffffffffffffffc;
        unaff_x19[0x11] = in_stack_00000048;
        unaff_x19[0x10] = in_stack_00000040;
        unaff_x19[0x13] = in_stack_00000058;
        unaff_x19[0x12] = in_stack_00000050;
        unaff_x19[0x15] = in_stack_00000068;
        unaff_x19[0x14] = in_stack_00000060;
        unaff_x19[9] = in_stack_00000008;
        unaff_x19[8] = in_stack_00000000;
        unaff_x19[0xb] = in_stack_00000018;
        unaff_x19[10] = in_stack_00000010;
        unaff_x19[0xd] = in_stack_00000028;
        unaff_x19[0xc] = in_stack_00000020;
        unaff_x19[0xf] = in_stack_00000038;
        unaff_x19[0xe] = in_stack_00000030;
        goto joined_r0x0001009d1bf0;
      }
      if (1 < *(ulong *)(lVar23 + 0x1c0)) {
        puVar14 = &UNK_10b23a6d0;
LAB_1009d1cf0:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar14);
        goto LAB_1009d1db0;
      }
LAB_1009d09a8:
      *(undefined1 *)(unaff_x19 + 0x2f) = 1;
      unaff_x19[7] = uVar17;
      unaff_x19[0x11] = in_stack_00000048;
      unaff_x19[0x10] = in_stack_00000040;
      unaff_x19[0x13] = in_stack_00000058;
      unaff_x19[0x12] = in_stack_00000050;
      unaff_x19[0x15] = in_stack_00000068;
      unaff_x19[0x14] = in_stack_00000060;
      unaff_x19[9] = in_stack_00000008;
      unaff_x19[8] = in_stack_00000000;
      unaff_x19[0xb] = in_stack_00000018;
      unaff_x19[10] = in_stack_00000010;
      unaff_x19[0xd] = in_stack_00000028;
      unaff_x19[0xc] = in_stack_00000020;
      unaff_x19[0xf] = in_stack_00000038;
      unaff_x19[0xe] = in_stack_00000030;
      if (uVar17 == 0x8000000000000004) goto joined_r0x0001009d1bf0;
      lVar18 = uVar17 + 0x7fffffffffffffff;
      if (uVar17 < 0x8000000000000001) {
        lVar18 = 3;
      }
      if (lVar18 < 2) {
        if (lVar18 == 0) {
          uVar8 = 0;
          unaff_x24[0x15] = in_stack_00000020;
          unaff_x24[0x14] = in_stack_00000018;
          unaff_x24[0x17] = in_stack_00000030;
          unaff_x24[0x16] = in_stack_00000028;
          unaff_x24[0x19] = in_stack_00000040;
          unaff_x24[0x18] = in_stack_00000038;
          unaff_x24[0x1b] = in_stack_00000050;
          unaff_x24[0x1a] = in_stack_00000048;
          *(long *)(unaff_x29 + -0xf0) = in_stack_00000010;
          *(long *)(unaff_x29 + -0xa8) = in_stack_00000058;
          lVar18 = *(long *)(unaff_x29 + -0xb0);
          unaff_x19[0x22] = *(long *)(unaff_x29 + -0xa8);
          unaff_x19[0x21] = lVar18;
          unaff_x19[0x25] = in_stack_00000068;
          unaff_x19[0x24] = in_stack_00000060;
          *(long *)(unaff_x29 + -0xf8) = in_stack_00000008;
          *(long *)(unaff_x29 + -0x100) = in_stack_00000000;
          lVar18 = *(long *)(unaff_x29 + -0xf0);
          lVar26 = *(long *)(unaff_x29 + -0xd8);
          lVar25 = *(long *)(unaff_x29 + -0xe0);
          unaff_x19[0x1a] = *(long *)(unaff_x29 + -0xe8);
          unaff_x19[0x19] = lVar18;
          unaff_x19[0x18] = in_stack_00000008;
          unaff_x19[0x17] = in_stack_00000000;
          lVar23 = *(long *)(unaff_x29 + -200);
          lVar18 = *(long *)(unaff_x29 + -0xd0);
          lVar13 = *(long *)(unaff_x29 + -0xc0);
          unaff_x19[0x20] = *(long *)(unaff_x29 + -0xb8);
          unaff_x19[0x1f] = lVar13;
          unaff_x19[0x1e] = lVar23;
          unaff_x19[0x1d] = lVar18;
          unaff_x19[0x1c] = lVar26;
          unaff_x19[0x1b] = lVar25;
          unaff_x19[0x23] = 0;
          unaff_x19[0x16] = 0;
        }
        else {
          *(long *)(unaff_x29 + -0xf8) = in_stack_00000008;
          *(long *)(unaff_x29 + -0x100) = in_stack_00000000;
          unaff_x24[0x15] = in_stack_00000020;
          unaff_x24[0x14] = in_stack_00000018;
          unaff_x24[0x17] = in_stack_00000030;
          unaff_x24[0x16] = in_stack_00000028;
          unaff_x24[0x19] = in_stack_00000040;
          unaff_x24[0x18] = in_stack_00000038;
          unaff_x24[0x1b] = in_stack_00000050;
          unaff_x24[0x1a] = in_stack_00000048;
          *(long *)(unaff_x29 + -0xf0) = in_stack_00000010;
          *(long *)(unaff_x29 + -0xa8) = in_stack_00000058;
          unaff_x19[0x18] = in_stack_00000008;
          unaff_x19[0x17] = in_stack_00000000;
          lVar18 = *(long *)(unaff_x29 + -0xf0);
          lVar25 = *(long *)(unaff_x29 + -0xd8);
          lVar13 = *(long *)(unaff_x29 + -0xe0);
          unaff_x19[0x1a] = *(long *)(unaff_x29 + -0xe8);
          unaff_x19[0x19] = lVar18;
          lVar23 = *(long *)(unaff_x29 + -200);
          lVar18 = *(long *)(unaff_x29 + -0xd0);
          lVar27 = *(long *)(unaff_x29 + -0xb8);
          lVar26 = *(long *)(unaff_x29 + -0xc0);
          lVar28 = *(long *)(unaff_x29 + -0xb0);
          unaff_x19[0x22] = *(long *)(unaff_x29 + -0xa8);
          unaff_x19[0x21] = lVar28;
          unaff_x19[0x20] = lVar27;
          unaff_x19[0x1f] = lVar26;
          unaff_x19[0x1e] = lVar23;
          unaff_x19[0x1d] = lVar18;
          unaff_x19[0x1c] = lVar25;
          unaff_x19[0x1b] = lVar13;
          unaff_x19[0x23] = 0;
          uVar8 = 2;
          unaff_x19[0x16] = 2;
        }
      }
      else if (lVar18 == 2) {
        unaff_x24[0x1b] = in_stack_00000050;
        unaff_x24[0x1a] = in_stack_00000048;
        *(long *)(unaff_x29 + -0xc0) = in_stack_00000040;
        *(long *)(unaff_x29 + -0xd8) = in_stack_00000028;
        *(long *)(unaff_x29 + -0xe0) = in_stack_00000020;
        *(long *)(unaff_x29 + -200) = in_stack_00000038;
        *(long *)(unaff_x29 + -0xd0) = in_stack_00000030;
        *(long *)(unaff_x29 + -0xf8) = in_stack_00000008;
        *(long *)(unaff_x29 + -0x100) = in_stack_00000000;
        *(long *)(unaff_x29 + -0xe8) = in_stack_00000018;
        *(long *)(unaff_x29 + -0xf0) = in_stack_00000010;
        unaff_x19[0x1e] = in_stack_00000038;
        unaff_x19[0x1d] = in_stack_00000030;
        unaff_x19[0x1c] = in_stack_00000028;
        unaff_x19[0x1b] = in_stack_00000020;
        unaff_x19[0x18] = in_stack_00000008;
        unaff_x19[0x17] = in_stack_00000000;
        unaff_x19[0x1a] = in_stack_00000018;
        unaff_x19[0x19] = in_stack_00000010;
        unaff_x19[0x21] = *(long *)(unaff_x29 + -0xb0);
        lVar18 = *(long *)(unaff_x29 + -0xc0);
        unaff_x19[0x20] = *(long *)(unaff_x29 + -0xb8);
        unaff_x19[0x1f] = lVar18;
        uVar8 = 1;
        unaff_x19[0x16] = 1;
      }
      else {
        unaff_x19[0x1d] = in_stack_00000028;
        unaff_x19[0x1c] = in_stack_00000020;
        unaff_x19[0x1f] = in_stack_00000038;
        unaff_x19[0x1e] = in_stack_00000030;
        unaff_x19[0x21] = in_stack_00000048;
        unaff_x19[0x20] = in_stack_00000040;
        unaff_x19[0x23] = in_stack_00000058;
        unaff_x19[0x22] = in_stack_00000050;
        unaff_x19[0x19] = in_stack_00000008;
        unaff_x19[0x18] = in_stack_00000000;
        unaff_x19[0x1b] = in_stack_00000018;
        unaff_x19[0x1a] = in_stack_00000010;
        unaff_x19[0x25] = in_stack_00000068;
        unaff_x19[0x24] = in_stack_00000060;
        uVar8 = 3;
        unaff_x19[0x16] = 3;
        unaff_x19[0x17] = uVar17;
      }
      plVar11 = (long *)_malloc(0x80);
      if (plVar11 == (long *)0x0) {
        func_0x0001087c9084(1,0x80);
        goto LAB_1009d1db0;
      }
      _uStack0000000000000100 = 0x80;
      in_stack_00000110 = 0;
      *(undefined2 **)(unaff_x29 + -0x60) = &stack0x00000100;
      in_stack_00000108 = plVar11;
      if (uVar8 < 2) {
        if (uVar8 == 0) {
          *(undefined1 *)plVar11 = 0x7b;
          in_stack_00000110 = 1;
          *(undefined2 *)(unaff_x29 + -0x100) = 0x100;
          *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x60;
          FUN_100642978(unaff_x29 + -0x100);
          lVar18 = unaff_x19[0x24];
          lVar23 = unaff_x19[0x25];
          FUN_1013fe3ec(unaff_x29 + -0x100,&UNK_108ca26b0,2);
          if ((*(byte *)(unaff_x29 + -0x100) & 1) != 0) goto LAB_1009d1c88;
          plVar21 = *(long **)(unaff_x29 + -0xf8);
          plVar11 = (long *)*plVar21;
          lVar13 = plVar11[2];
          if (*plVar11 == lVar13) {
            FUN_108855060(plVar11,lVar13,1,1,1);
            lVar13 = plVar11[2];
          }
          *(undefined1 *)(plVar11[1] + lVar13) = 0x3a;
          plVar11[2] = lVar13 + 1;
          FUN_1011adff8(lVar18,lVar23,*plVar21);
          plVar11 = (long *)FUN_100ea6f10(unaff_x19 + 0x17,unaff_x29 + -0x100);
          if (plVar11 == (long *)0x0) {
            if ((*(byte *)(unaff_x29 + -0x100) & 1) != 0) goto LAB_1009d1cb4;
            if (*(char *)(unaff_x29 + -0xff) != '\0') {
              plVar21 = (long *)**(undefined8 **)(unaff_x29 + -0xf8);
              lVar18 = plVar21[2];
              if (*plVar21 == lVar18) {
                FUN_108855060(plVar21,lVar18,1,1,1);
                goto LAB_1009d0ce4;
              }
LAB_1009d0e20:
              *(undefined1 *)(plVar21[1] + lVar18) = 0x7d;
              plVar21[2] = lVar18 + 1;
            }
          }
        }
        else {
          *(undefined1 *)plVar11 = 0x7b;
          in_stack_00000110 = 1;
          *(undefined2 *)(unaff_x29 + -0x88) = 0x100;
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x60;
          FUN_100642978(unaff_x29 + -0x88);
          if ((*(byte *)(unaff_x29 + -0x88) & 1) == 0) {
            lVar18 = unaff_x19[0x20];
            lVar23 = unaff_x19[0x21];
            FUN_1013fe3ec(unaff_x29 + -0x88,&UNK_108ca26b0,2);
            if ((*(byte *)(unaff_x29 + -0x88) & 1) == 0) {
              plVar21 = *(long **)(unaff_x29 + -0x80);
              plVar11 = (long *)*plVar21;
              lVar13 = plVar11[2];
              if (*plVar11 == lVar13) {
                FUN_108855060(plVar11,lVar13,1,1,1);
                lVar13 = plVar11[2];
              }
              *(undefined1 *)(plVar11[1] + lVar13) = 0x3a;
              plVar11[2] = lVar13 + 1;
              FUN_1011adff8(lVar18,lVar23,*plVar21);
              FUN_1013fe3ec(unaff_x29 + -0x88,&UNK_108ca273b,6);
              if ((*(byte *)(unaff_x29 + -0x88) & 1) == 0) {
                puVar19 = *(undefined8 **)(unaff_x29 + -0x80);
                plVar11 = (long *)*puVar19;
                lVar18 = plVar11[2];
                if (*plVar11 == lVar18) {
                  FUN_108855060(plVar11,lVar18,1,1,1);
                  lVar18 = plVar11[2];
                }
                *(undefined1 *)(plVar11[1] + lVar18) = 0x3a;
                plVar11[2] = lVar18 + 1;
                FUN_100683ae4(unaff_x19 + 0x17,puVar19);
                plVar11 = (long *)0x0;
                if (*(char *)(unaff_x29 + -0x87) != '\0') {
                  plVar21 = (long *)*puVar19;
                  lVar18 = plVar21[2];
                  if (*plVar21 == lVar18) {
                    FUN_108855060(plVar21,lVar18,1,1,1);
                    lVar18 = plVar21[2];
                  }
                  plVar11 = (long *)0x0;
                  goto LAB_1009d0e20;
                }
                goto LAB_1009d0e34;
              }
            }
LAB_1009d1c88:
            puVar14 = &UNK_10b24d400;
LAB_1009d1cbc:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar14);
LAB_1009d1db0:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1009d1db4);
            (*pcVar7)();
          }
          *(undefined8 *)(unaff_x29 + -0x100) = 10;
          plVar11 = (long *)FUN_107c05dbc(unaff_x29 + -0x100,0,0);
        }
      }
      else if (uVar8 == 2) {
        *(undefined1 *)plVar11 = 0x7b;
        in_stack_00000110 = 1;
        *(undefined2 *)(unaff_x29 + -0x100) = 0x100;
        *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x60;
        FUN_100642978(unaff_x29 + -0x100);
        plVar11 = (long *)FUN_100ea6f10(unaff_x19 + 0x17,unaff_x29 + -0x100);
        if (plVar11 == (long *)0x0) {
          if ((*(byte *)(unaff_x29 + -0x100) & 1) != 0) {
LAB_1009d1cb4:
            puVar14 = &UNK_10b24d418;
            goto LAB_1009d1cbc;
          }
          if (*(char *)(unaff_x29 + -0xff) != '\0') {
            plVar21 = (long *)**(undefined8 **)(unaff_x29 + -0xf8);
            lVar18 = plVar21[2];
            if (*plVar21 == lVar18) {
              FUN_108855060(plVar21,lVar18,1,1,1);
LAB_1009d0ce4:
              lVar18 = plVar21[2];
            }
            goto LAB_1009d0e20;
          }
        }
      }
      else {
        plVar11 = (long *)FUN_100eb47e0(unaff_x19 + 0x17,unaff_x29 + -0x60);
      }
LAB_1009d0e34:
      if (plVar11 != (long *)0x0) {
        if (_uStack0000000000000100 != 0) {
          _free(in_stack_00000108);
        }
LAB_1009d0e5c:
        unaff_x19[0x26] = -0x8000000000000000;
        unaff_x19[0x27] = (long)plVar11;
        in_stack_00000098 = plVar11;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
          unaff_x21 = (long *)&
                              __ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
          ;
          if (((bRam000000010b62ddf0 - 1 < 2) ||
              ((bRam000000010b62ddf0 != 0 &&
               (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
                                  ), cVar9 != '\0')))) &&
             (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
                                 ),
             param_2 = 
             ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
             , (uVar17 & 1) != 0)) {
            param_1 = ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
                      + 0x30;
            *(long ***)(unaff_x29 + -0x88) = &stack0x00000098;
            *(code **)(unaff_x29 + -0x80) =
                 __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
            ;
            goto code_r0x0001009d0eb8;
          }
        }
        lVar18 = 
        ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          in_stack_000000c8 =
               *(undefined8 *)
                (
                ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
                + 0x20);
          in_stack_000000d0 =
               *(undefined8 *)
                (
                ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
                + 0x28);
          in_stack_000000c0 = 1;
          puVar14 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar14 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,&stack0x000000c0);
          if (iVar10 != 0) {
            in_stack_00000118 =
                 ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h07fb3b3d30d54bc3E
                 + 0x30;
            *(long ***)(unaff_x29 + -0x70) = &stack0x00000098;
            *(code **)(unaff_x29 + -0x68) =
                 __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
            ;
            in_stack_00000128 = (code *)(unaff_x29 + -0x70);
            in_stack_00000120 = s__Failed_to_serialize_JSON_RPC_me_108acd25a;
            in_stack_000000d8 = (char *)&stack0x00000120;
            in_stack_000000e0 = (undefined8 *)&UNK_10b208fd0;
            in_stack_00000108 = (long *)&stack0x000000d8;
            _uStack0000000000000100 = 1;
            in_stack_00000110 = 1;
            *(undefined8 *)(unaff_x29 + -200) = in_stack_000000c8;
            *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_000000c0;
            *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_000000d0;
            lVar23 = *(long *)(lVar18 + 0x60);
            uVar5 = *(undefined8 *)(lVar18 + 0x68);
            lVar13 = *(long *)(lVar18 + 0x50);
            uVar6 = *(undefined8 *)(lVar18 + 0x58);
            uVar12 = 1;
            if (lVar13 == 0) {
              uVar12 = 2;
            }
            uVar3 = *(undefined4 *)(lVar18 + 8);
            uVar4 = *(undefined4 *)(lVar18 + 0xc);
            *(undefined2 **)(unaff_x29 + -0x60) = &stack0x00000100;
            *(undefined1 *)(unaff_x29 + -0x58) = 1;
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
            *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
            uVar1 = 1;
            if (lVar23 == 0) {
              uVar1 = 2;
            }
            *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
            *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
            *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
            *(long *)(unaff_x29 + -0xf8) = lVar13;
            *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
            *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
            *(long *)(unaff_x29 + -0xe0) = lVar23;
            *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
            *(undefined4 *)(unaff_x29 + -0xb8) = uVar3;
            *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
            (**(code **)(puVar14 + 0x20))(puVar2,unaff_x29 + -0x100);
          }
        }
        goto LAB_1009d13ac;
      }
      plVar11 = in_stack_00000108;
      if (_uStack0000000000000100 == -0x8000000000000000) goto LAB_1009d0e5c;
      unaff_x19[0x26] = _uStack0000000000000100;
      unaff_x19[0x27] = (long)in_stack_00000108;
      unaff_x19[0x28] = in_stack_00000110;
      unaff_x19[0x2a] = unaff_x19[0x27];
      unaff_x19[0x29] = unaff_x19[0x26];
      unaff_x19[0x2b] = in_stack_00000110;
      unaff_x19[0x2d] = (long)(unaff_x19 + 1);
      unaff_x19[0x2e] = unaff_x19[0x2a];
      unaff_x19[0x2f] = in_stack_00000110;
      lVar18 = in_stack_00000110;
LAB_1009d0fbc:
      if (lVar18 != 0) {
        auVar29 = __ZN80__LT_tokio__io__stdout__Stdout_u20_as_u20_tokio__io__async_write__AsyncWrite_GT_10poll_write17h417afbaf1993bff8E
                            (unaff_x19[0x2d]);
        uVar17 = auVar29._8_8_;
        if (auVar29._0_8_ != 2) {
          if ((auVar29._0_8_ & 1) != 0) goto LAB_1009d0ffc;
          lVar23 = unaff_x19[0x2e];
          uVar8 = unaff_x19[0x2f];
          unaff_x19[0x2e] = 1;
          unaff_x19[0x2f] = 0;
          lVar18 = uVar8 - uVar17;
          if (uVar17 <= uVar8) goto code_r0x0001009d0fe8;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
          goto LAB_1009d1db0;
        }
        uVar12 = 1;
        uVar16 = 4;
        goto LAB_1009d19a4;
      }
      unaff_x19[0x2d] = (long)(unaff_x19 + 1);
      unaff_x19[0x2e] = (long)&UNK_108ca14f4;
      lVar18 = 1;
      unaff_x19[0x2f] = 1;
LAB_1009d11a4:
      if (lVar18 != 0) {
        auVar29 = __ZN80__LT_tokio__io__stdout__Stdout_u20_as_u20_tokio__io__async_write__AsyncWrite_GT_10poll_write17h417afbaf1993bff8E
                            (unaff_x19[0x2d]);
        uVar17 = auVar29._8_8_;
        if (auVar29._0_8_ != 2) {
          if ((auVar29._0_8_ & 1) != 0) goto LAB_1009d11e4;
          lVar23 = unaff_x19[0x2e];
          uVar8 = unaff_x19[0x2f];
          unaff_x19[0x2e] = 1;
          unaff_x19[0x2f] = 0;
          lVar18 = uVar8 - uVar17;
          if (uVar17 <= uVar8) goto code_r0x0001009d11d0;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
          goto LAB_1009d1db0;
        }
        uVar12 = 1;
        uVar16 = 5;
        goto LAB_1009d19a4;
      }
    } while (unaff_x19[0x29] == 0);
    plVar11 = (long *)unaff_x19[0x2a];
  } while( true );
code_r0x0001009d0fe8:
  unaff_x19[0x2e] = lVar23 + uVar17;
  unaff_x19[0x2f] = lVar18;
  if (uVar17 == 0) {
    uVar17 = 0x1700000003;
LAB_1009d0ffc:
    in_stack_00000090 = uVar17;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
        ((bRam000000010b62de50 - 1 < 2 ||
         ((bRam000000010b62de50 != 0 &&
          (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
                             ), cVar9 != '\0')))))) &&
       (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
                           ), (uVar17 & 1) != 0)) {
      in_stack_00000118 =
           ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
           + 0x30;
      in_stack_00000120 = (char *)&stack0x00000090;
      in_stack_00000128 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      in_stack_000000e0 = &stack0x00000120;
      in_stack_000000d8 = s_Failed_to_write_to_stdout__108acd23c;
      in_stack_00000098 = (long *)&stack0x000000d8;
      in_stack_000000a0 = &UNK_10b208fd0;
      in_stack_00000108 = (long *)&stack0x00000098;
      _uStack0000000000000100 = 1;
      in_stack_00000110 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
                 ,&stack0x00000100);
      lVar18 = 
      ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uVar12 = *(undefined8 *)
                  (
                  ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
                  + 0x20);
        uVar5 = *(undefined8 *)
                 (
                 ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x88) = 1;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar12;
        *(undefined8 *)(unaff_x29 + -0x78) = uVar5;
        puVar14 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,unaff_x29 + -0x88);
        if (iVar10 != 0) {
          lVar23 = *(long *)(lVar18 + 0x60);
          uVar5 = *(undefined8 *)(lVar18 + 0x68);
          lVar13 = *(long *)(lVar18 + 0x50);
          uVar6 = *(undefined8 *)(lVar18 + 0x58);
          uVar12 = 1;
          if (lVar13 == 0) {
            uVar12 = 2;
          }
          uVar3 = *(undefined4 *)(lVar18 + 8);
          uVar4 = *(undefined4 *)(lVar18 + 0xc);
          *(undefined2 **)(unaff_x29 + -0x70) = &stack0x00000100;
          *(undefined1 *)(unaff_x29 + -0x68) = 1;
          *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
          *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
          uVar1 = 1;
          if (lVar23 == 0) {
            uVar1 = 2;
          }
          uVar24 = unaff_x24[0x20];
          *(undefined8 *)(unaff_x29 + -200) = unaff_x24[0x21];
          *(undefined8 *)(unaff_x29 + -0xd0) = uVar24;
          *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x78);
          *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
          *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x60;
          *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
          *(long *)(unaff_x29 + -0xf8) = lVar13;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
          *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
          *(long *)(unaff_x29 + -0xe0) = lVar23;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
          *(undefined4 *)(unaff_x29 + -0xb8) = uVar3;
          *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
          (**(code **)(puVar14 + 0x20))(puVar2,unaff_x29 + -0x100);
        }
      }
    }
    else {
      lVar18 = 
      ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_00000080 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
              + 0x20);
        in_stack_00000088 =
             *(undefined8 *)
              (
              ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
              + 0x28);
        in_stack_00000078 = 1;
        puVar14 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,&stack0x00000078);
        if (iVar10 != 0) {
          in_stack_00000118 =
               ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h840d93a83eac0938E
               + 0x30;
          *(ulong **)(unaff_x29 + -0x70) = &stack0x00000090;
          *(code **)(unaff_x29 + -0x68) =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          in_stack_00000128 = (code *)(unaff_x29 + -0x70);
          in_stack_00000120 = s_Failed_to_write_to_stdout__108acd23c;
          in_stack_000000d8 = (char *)&stack0x00000120;
          in_stack_000000e0 = (undefined8 *)&UNK_10b208fd0;
          in_stack_00000108 = (long *)&stack0x000000d8;
          _uStack0000000000000100 = 1;
          in_stack_00000110 = 1;
          *(undefined8 *)(unaff_x29 + -200) = in_stack_00000080;
          *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000078;
          *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000088;
          lVar23 = *(long *)(lVar18 + 0x60);
          uVar5 = *(undefined8 *)(lVar18 + 0x68);
          lVar13 = *(long *)(lVar18 + 0x50);
          uVar6 = *(undefined8 *)(lVar18 + 0x58);
          uVar12 = 1;
          if (lVar13 == 0) {
            uVar12 = 2;
          }
          uVar3 = *(undefined4 *)(lVar18 + 8);
          uVar4 = *(undefined4 *)(lVar18 + 0xc);
          *(undefined2 **)(unaff_x29 + -0x60) = &stack0x00000100;
          *(undefined1 *)(unaff_x29 + -0x58) = 1;
          *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
          *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
          uVar1 = 1;
          if (lVar23 == 0) {
            uVar1 = 2;
          }
          *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
          *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
          *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
          *(long *)(unaff_x29 + -0xf8) = lVar13;
          *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
          *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
          *(long *)(unaff_x29 + -0xe0) = lVar23;
          *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
          *(undefined4 *)(unaff_x29 + -0xb8) = uVar3;
          *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
          (**(code **)(puVar14 + 0x20))(puVar2,unaff_x29 + -0x100);
        }
      }
    }
    if ((in_stack_00000090 & 3) != 1) goto LAB_1009d16d8;
    puVar19 = (undefined8 *)(in_stack_00000090 - 1);
    uVar12 = *puVar19;
    puVar22 = *(undefined8 **)(in_stack_00000090 + 7);
    if ((code *)*puVar22 != (code *)0x0) {
      (*(code *)*puVar22)(uVar12);
    }
    goto LAB_1009d1b1c;
  }
  goto LAB_1009d0fbc;
code_r0x0001009d11d0:
  unaff_x19[0x2e] = lVar23 + uVar17;
  unaff_x19[0x2f] = lVar18;
  if (uVar17 != 0) goto LAB_1009d11a4;
  uVar17 = 0x1700000003;
LAB_1009d11e4:
  in_stack_00000090 = uVar17;
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
      ((bRam000000010b62de68 - 1 < 2 ||
       ((bRam000000010b62de68 != 0 &&
        (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
                           ), cVar9 != '\0')))))) &&
     (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
                         ), (uVar17 & 1) != 0)) {
    in_stack_00000118 =
         ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
         + 0x30;
    in_stack_00000120 = (char *)&stack0x00000090;
    in_stack_00000128 =
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    in_stack_000000e0 = &stack0x00000120;
    in_stack_000000d8 = s__Failed_to_write_newline_to_stdo_108acd216;
    in_stack_00000098 = (long *)&stack0x000000d8;
    in_stack_000000a0 = &UNK_10b208fd0;
    in_stack_00000108 = (long *)&stack0x00000098;
    _uStack0000000000000100 = 1;
    in_stack_00000110 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
               ,&stack0x00000100);
    lVar18 = 
    ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      uVar12 = *(undefined8 *)
                (
                ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
                + 0x20);
      uVar5 = *(undefined8 *)
               (
               ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
               + 0x28);
      *(undefined8 *)(unaff_x29 + -0x88) = 1;
      *(undefined8 *)(unaff_x29 + -0x80) = uVar12;
      *(undefined8 *)(unaff_x29 + -0x78) = uVar5;
      puVar14 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,unaff_x29 + -0x88);
      if (iVar10 != 0) {
        lVar23 = *(long *)(lVar18 + 0x60);
        uVar5 = *(undefined8 *)(lVar18 + 0x68);
        lVar13 = *(long *)(lVar18 + 0x50);
        uVar6 = *(undefined8 *)(lVar18 + 0x58);
        uVar12 = 1;
        if (lVar13 == 0) {
          uVar12 = 2;
        }
        uVar3 = *(undefined4 *)(lVar18 + 8);
        uVar4 = *(undefined4 *)(lVar18 + 0xc);
        *(undefined2 **)(unaff_x29 + -0x70) = &stack0x00000100;
        *(undefined1 *)(unaff_x29 + -0x68) = 1;
        *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
        uVar1 = 1;
        if (lVar23 == 0) {
          uVar1 = 2;
        }
        uVar24 = unaff_x24[0x20];
        *(undefined8 *)(unaff_x29 + -200) = unaff_x24[0x21];
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar24;
        *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x78);
        *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x60;
        *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
        *(long *)(unaff_x29 + -0xf8) = lVar13;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
        *(long *)(unaff_x29 + -0xe0) = lVar23;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
        *(undefined4 *)(unaff_x29 + -0xb8) = uVar3;
        *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
        (**(code **)(puVar14 + 0x20))(puVar2,unaff_x29 + -0x100);
      }
    }
  }
  else {
    lVar18 = 
    ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      in_stack_000000b0 =
           *(undefined8 *)
            (
            ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
            + 0x20);
      in_stack_000000b8 =
           *(undefined8 *)
            (
            ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
            + 0x28);
      in_stack_000000a8 = 1;
      puVar14 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,&stack0x000000a8);
      if (iVar10 != 0) {
        in_stack_00000118 =
             ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd144049752f6d492E
             + 0x30;
        *(ulong **)(unaff_x29 + -0x70) = &stack0x00000090;
        *(code **)(unaff_x29 + -0x68) =
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        in_stack_00000128 = (code *)(unaff_x29 + -0x70);
        in_stack_00000120 = s__Failed_to_write_newline_to_stdo_108acd216;
        in_stack_000000d8 = (char *)&stack0x00000120;
        in_stack_000000e0 = (undefined8 *)&UNK_10b208fd0;
        in_stack_00000108 = (long *)&stack0x000000d8;
        _uStack0000000000000100 = 1;
        in_stack_00000110 = 1;
        uVar12 = *unaff_x24;
        *(undefined8 *)(unaff_x29 + -200) = unaff_x24[1];
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar12;
        *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_000000b8;
        lVar23 = *(long *)(lVar18 + 0x60);
        uVar5 = *(undefined8 *)(lVar18 + 0x68);
        lVar13 = *(long *)(lVar18 + 0x50);
        uVar6 = *(undefined8 *)(lVar18 + 0x58);
        uVar12 = 1;
        if (lVar13 == 0) {
          uVar12 = 2;
        }
        uVar3 = *(undefined4 *)(lVar18 + 8);
        uVar4 = *(undefined4 *)(lVar18 + 0xc);
        *(undefined2 **)(unaff_x29 + -0x60) = &stack0x00000100;
        *(undefined1 *)(unaff_x29 + -0x58) = 1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
        uVar1 = 1;
        if (lVar23 == 0) {
          uVar1 = 2;
        }
        *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
        *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
        *(long *)(unaff_x29 + -0xf8) = lVar13;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
        *(long *)(unaff_x29 + -0xe0) = lVar23;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
        *(undefined4 *)(unaff_x29 + -0xb8) = uVar3;
        *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
        (**(code **)(puVar14 + 0x20))(puVar2,unaff_x29 + -0x100);
      }
    }
  }
  if ((in_stack_00000090 & 3) == 1) {
    puVar19 = (undefined8 *)(in_stack_00000090 - 1);
    uVar12 = *puVar19;
    puVar22 = *(undefined8 **)(in_stack_00000090 + 7);
    if ((code *)*puVar22 != (code *)0x0) {
      (*(code *)*puVar22)(uVar12);
    }
LAB_1009d1b1c:
    if (puVar22[1] != 0) {
      _free(uVar12);
    }
    _free(puVar19);
    lVar18 = unaff_x19[0x29];
  }
  else {
LAB_1009d16d8:
    lVar18 = unaff_x19[0x29];
  }
  if (lVar18 != 0) {
    _free(unaff_x19[0x2a]);
  }
  FUN_100d30bd8(unaff_x19 + 0x16);
joined_r0x0001009d1bf0:
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bRam000000010b62de38 - 1 < 2 ||
       ((bRam000000010b62de38 != 0 &&
        (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
                           ), cVar9 != '\0')))) &&
      (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
                          ),
      lVar18 = 
      ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
      , (uVar17 & 1) != 0)))) {
    lVar23 = ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
             + 0x30;
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108cb4a6e;
    *(undefined8 *)(unaff_x29 + -0x80) = 0x4b;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
    *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
    *(undefined8 *)(unaff_x29 + -0x100) = 1;
    *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x60;
    *(undefined8 *)(unaff_x29 + -0xf0) = 1;
    *(long *)(unaff_x29 + -0xe8) = lVar23;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar18,unaff_x29 + -0x100);
    lVar18 = 
    ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000108 =
           *(long **)(
                     ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
                     + 0x20);
      in_stack_00000110 =
           *(long *)(
                    ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
                    + 0x28);
      _uStack0000000000000100 = 3;
      puVar14 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,&stack0x00000100);
      if (iVar10 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar18,puVar2,puVar14,&stack0x00000100,unaff_x29 + -0x100);
      }
    }
  }
  else {
    lVar18 = 
    ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000000f0 =
           *(undefined8 *)
            (
            ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
            + 0x20);
      in_stack_000000f8 =
           *(undefined8 *)
            (
            ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
            + 0x28);
      in_stack_000000e8 = 3;
      puVar14 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar14 + 0x18))(puVar2,&stack0x000000e8);
      if (iVar10 != 0) {
        in_stack_00000118 =
             ___ZN16codex_mcp_server8run_main28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f8b561426920506E
             + 0x30;
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cb4a6e;
        *(undefined8 *)(unaff_x29 + -0x68) = 0x4b;
        in_stack_00000120 = (char *)(unaff_x29 + -0x70);
        in_stack_00000128 = (code *)&UNK_10b208fd0;
        in_stack_00000108 = (long *)&stack0x00000120;
        _uStack0000000000000100 = 1;
        in_stack_00000110 = 1;
        lVar23 = *(long *)(lVar18 + 0x60);
        uVar5 = *(undefined8 *)(lVar18 + 0x68);
        lVar13 = *(long *)(lVar18 + 0x50);
        uVar6 = *(undefined8 *)(lVar18 + 0x58);
        uVar12 = 1;
        if (lVar13 == 0) {
          uVar12 = 2;
        }
        uVar3 = *(undefined4 *)(lVar18 + 8);
        uVar4 = *(undefined4 *)(lVar18 + 0xc);
        *(undefined2 **)(unaff_x29 + -0x60) = &stack0x00000100;
        *(undefined1 *)(unaff_x29 + -0x58) = 1;
        *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x60;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_1061c2098;
        uVar1 = 1;
        if (lVar23 == 0) {
          uVar1 = 2;
        }
        uVar24 = unaff_x24[8];
        *(undefined8 *)(unaff_x29 + -200) = unaff_x24[9];
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar24;
        *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_000000f8;
        *(char **)(unaff_x29 + -0xb0) = s__108b39f4f;
        *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
        *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
        *(long *)(unaff_x29 + -0xf8) = lVar13;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
        *(long *)(unaff_x29 + -0xe0) = lVar23;
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
        *(undefined4 *)(unaff_x29 + -0xb8) = uVar3;
        *(undefined4 *)(unaff_x29 + -0xb4) = uVar4;
        (**(code **)(puVar14 + 0x20))(puVar2,unaff_x29 + -0x100);
      }
    }
  }
  lVar18 = unaff_x19[1];
  if (lVar18 != -0x8000000000000000) {
    plVar11 = (long *)unaff_x19[2];
    if (lVar18 == -0x7fffffffffffffff) {
      if (*plVar11 == 0xcc) {
        *plVar11 = 0x84;
      }
      else {
        (**(code **)(plVar11[2] + 0x20))();
      }
    }
    else if (lVar18 != 0) {
      _free();
    }
  }
  FUN_100cfe32c();
  uVar12 = 0;
  uVar16 = 1;
LAB_1009d19a4:
  *(undefined1 *)(unaff_x19 + 0x2c) = uVar16;
  return uVar12;
}

