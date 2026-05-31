
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a65bc(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  char cVar14;
  long *unaff_x22;
  long lVar15;
  char cVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 *puStack0000000000000008;
  undefined *puStack0000000000000010;
  char *pcStack0000000000000018;
  undefined1 *puStack0000000000000020;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char *in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  
  puStack0000000000000020 = &stack0x00000028;
  pcStack0000000000000018 = s_4Overwriting_existing_pending_us_108ac1871;
  puStack0000000000000008 = (undefined1 *)&stack0x00000018;
  puStack0000000000000010 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(undefined1 ***)(unaff_x29 + -0xd8) = &stack0x00000008;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xe0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar17 = *unaff_x22;
    uVar12 = *(undefined8 *)(lVar17 + 0x20);
    uVar19 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xb0) = 2;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar19;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xb0);
    if (iVar6 != 0) {
      in_stack_00000070 = *(long *)(lVar17 + 0x60);
      in_stack_00000078 = *(long *)(lVar17 + 0x68);
      in_stack_00000058 = *(long *)(lVar17 + 0x50);
      in_stack_00000060 = *(undefined8 *)(lVar17 + 0x58);
      in_stack_00000050 = 1;
      if (in_stack_00000058 == 0) {
        in_stack_00000050 = 2;
      }
      in_stack_00000098 = *(undefined8 *)(lVar17 + 8);
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xe0;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      in_stack_00000068 = 1;
      if (in_stack_00000070 == 0) {
        in_stack_00000068 = 2;
      }
      in_stack_00000088 = *(undefined8 *)(unaff_x27 + 0x38);
      in_stack_00000080 = *(long *)(unaff_x27 + 0x30);
      in_stack_00000090 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_000000a8 = unaff_x29 + -0x70;
      in_stack_000000a0 = s__108b39f4f;
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000050);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xdd) = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x60);
  lVar17 = *(long *)(unaff_x19 + 0x50);
  uVar18 = *(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x238);
  lVar15 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x240);
  if (lVar15 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = _malloc(lVar15);
    if (lVar7 == 0) {
      FUN_107c03c64(1,lVar15);
      goto LAB_1005a6d0c;
    }
  }
  _memcpy(lVar7,uVar18,lVar15);
  *(undefined1 *)(unaff_x19 + 0xdc) = 0;
  in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x70);
  in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x68);
  in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined1 *)(unaff_x19 + 0xde) = 1;
  in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,0x25);
  *(undefined1 *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x48) + 0x7a0) + 0xf0) + 0x10) = 1;
  *(undefined1 *)(unaff_x19 + 0xde) = 0;
  in_stack_00000058 = lVar17;
  in_stack_00000060 = uVar12;
  in_stack_00000068 = uVar19;
  in_stack_00000070 = lVar15;
  in_stack_00000078 = lVar7;
  in_stack_00000080 = lVar15;
  _memcpy(unaff_x19 + 0xe0,&stack0x00000050,0x1d8);
  *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x688) = 0;
  iVar6 = FUN_10059e898(unaff_x19 + 0xe0);
  if (iVar6 != 0) {
    *unaff_x20 = 1;
    uVar9 = 5;
    goto LAB_1005a6c80;
  }
  FUN_100d1ddbc(unaff_x19 + 0xe0);
  *(undefined1 *)(unaff_x19 + 0xdb) = 0;
  lVar17 = *(long *)(unaff_x19 + 0xa0);
  *(long *)(unaff_x19 + 0xe0) = lVar17;
  if (lVar17 == 0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd5b1c,0x2b,&UNK_10b24d460);
LAB_1005a6d0c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6d10);
    (*pcVar4)();
  }
  lVar15 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  if (*(char *)(lVar15 + 0x48) == '\x01') {
LAB_1005a6990:
    cVar16 = *(char *)(lVar15 + 0x44);
    cVar14 = *(char *)(lVar15 + 0x45);
    cVar8 = cVar14;
    if (cVar16 == '\x01') {
      if (cVar14 != '\0') {
        cVar8 = cVar14 + -1;
        goto LAB_1005a69ac;
      }
      FUN_10610bbb4(*(undefined8 *)*unaff_x21,((undefined8 *)*unaff_x21)[1]);
      goto LAB_1005a6aa0;
    }
LAB_1005a69ac:
    *(char *)(lVar15 + 0x45) = cVar8;
    *(char *)(unaff_x29 + -0x70) = cVar16;
    *(char *)(unaff_x29 + -0x6f) = cVar14;
    uVar10 = (uint)*(undefined8 *)(lVar17 + 0x60);
    if ((uVar10 >> 1 & 1) == 0) goto LAB_1005a69c0;
LAB_1005a6ab8:
    lVar15 = *(long *)(lVar17 + 0x10);
    *(undefined8 *)(lVar17 + 0x10) = 0;
    if (lVar15 != 0) {
      uVar12 = *(undefined8 *)(lVar17 + 0x18);
      uVar18 = *(undefined8 *)(lVar17 + 0x30);
      uVar19 = *(undefined8 *)(lVar17 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(lVar17 + 0x20);
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar12;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar18;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar19;
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(lVar17 + 0x38);
    }
LAB_1005a6ad8:
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(long *)(unaff_x29 + -0xe0) = lVar15;
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x90);
    plVar11 = *(long **)(unaff_x19 + 0xe0);
    if (plVar11 != (long *)0x0) {
      lVar17 = *plVar11;
      *plVar11 = lVar17 + -1;
      LORelease();
      if (lVar17 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(unaff_x19 + 0xe0);
      }
    }
    *(undefined8 *)(unaff_x19 + 0xe0) = 0;
    uVar18 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar19 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar21 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar20 = *(undefined8 *)(unaff_x29 + -200);
    uVar12 = *(undefined8 *)(unaff_x29 + -0xb8);
    FUN_100ce2bd0(unaff_x19 + 0xe0);
    if (lVar15 != 0) {
      in_stack_00000260 = uVar19;
      in_stack_00000268 = uVar18;
      in_stack_00000270 = uVar20;
      in_stack_00000278 = uVar21;
      in_stack_00000280 = uVar12;
    }
    *(undefined1 *)(unaff_x19 + 0xde) = 0;
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      plVar11 = *(long **)(unaff_x19 + 200);
      if (plVar11 != (long *)0x0) {
        uVar5 = plVar11[0xc];
        do {
          uVar13 = uVar5;
          if (((uint)uVar13 >> 2 & 1) != 0) goto LAB_1005a6b88;
          uVar5 = plVar11[0xc];
        } while (uVar5 != uVar13);
        plVar11[0xc] = uVar13 | 2;
LAB_1005a6b88:
        if ((uVar13 & 5) == 1) {
          (**(code **)(plVar11[10] + 0x10))(plVar11[0xb]);
        }
        lVar17 = *plVar11;
        *plVar11 = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E
                    ((undefined8 *)(unaff_x19 + 200));
        }
      }
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
    *(undefined1 *)(unaff_x19 + 0xdb) = 0;
    if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
      plVar11 = *(long **)(unaff_x19 + 0x98);
      if (plVar11 != (long *)0x0) {
        uVar5 = plVar11[0xc];
        do {
          uVar13 = uVar5;
          if (((uint)uVar13 >> 2 & 1) != 0) goto LAB_1005a6c0c;
          uVar5 = plVar11[0xc];
        } while (uVar5 != uVar13);
        plVar11[0xc] = uVar13 | 2;
LAB_1005a6c0c:
        if ((uVar13 & 5) == 1) {
          (**(code **)(plVar11[10] + 0x10))(plVar11[0xb]);
        }
        lVar17 = *plVar11;
        *plVar11 = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E
                    ((undefined8 *)(unaff_x19 + 0x98));
        }
      }
    }
    *(undefined1 *)(unaff_x19 + 0xd9) = 0;
    if (((*(byte *)(unaff_x19 + 0xda) & 1) != 0) && (*(long *)(unaff_x19 + 0x80) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x88));
    }
    *(undefined1 *)(unaff_x19 + 0xda) = 0;
    *(undefined2 *)(unaff_x19 + 0xdc) = 0;
    unaff_x20[3] = in_stack_00000268;
    unaff_x20[2] = in_stack_00000260;
    unaff_x20[5] = in_stack_00000278;
    unaff_x20[4] = in_stack_00000270;
    unaff_x20[6] = in_stack_00000280;
    *unaff_x20 = 0;
    unaff_x20[1] = lVar15;
    uVar9 = 1;
    goto LAB_1005a6c80;
  }
  if (*(char *)(lVar15 + 0x48) != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar15,&DAT_100c35d48)
    ;
    *(undefined1 *)(lVar15 + 0x48) = 1;
    goto LAB_1005a6990;
  }
  cVar16 = '\0';
  cVar14 = '\0';
  *(undefined1 *)(unaff_x29 + -0x70) = 0;
  *(undefined1 *)(unaff_x29 + -0x6f) = 0;
  uVar10 = (uint)*(undefined8 *)(lVar17 + 0x60);
  if ((uVar10 >> 1 & 1) != 0) goto LAB_1005a6ab8;
LAB_1005a69c0:
  if ((uVar10 >> 2 & 1) != 0) {
    lVar15 = 0;
    goto LAB_1005a6ad8;
  }
  if ((uVar10 & 1) == 0) {
LAB_1005a6a14:
    auVar22 = (*(code *)**(undefined8 **)*unaff_x21)(((undefined8 *)*unaff_x21)[1]);
    *(undefined1 (*) [16])(lVar17 + 0x50) = auVar22;
    LOAcquire();
    uVar5 = *(ulong *)(lVar17 + 0x60);
    *(ulong *)(lVar17 + 0x60) = uVar5 | 1;
    LORelease();
    if (((uint)uVar5 >> 1 & 1) != 0) goto LAB_1005a6ab8;
  }
  else if ((*(long *)(lVar17 + 0x58) != ((long *)*unaff_x21)[1]) ||
          (*(long *)(lVar17 + 0x50) != *(long *)*unaff_x21)) {
    puVar1 = (ulong *)(lVar17 + 0x60);
    LOAcquire();
    uVar5 = *puVar1;
    *puVar1 = uVar5 & 0xfffffffffffffffe;
    LORelease();
    if (((uint)uVar5 >> 1 & 1) != 0) {
      LOAcquire();
      *puVar1 = *puVar1 | 1;
      LORelease();
      goto LAB_1005a6ab8;
    }
    (**(code **)(*(long *)(lVar17 + 0x50) + 0x18))(*(undefined8 *)(lVar17 + 0x58));
    goto LAB_1005a6a14;
  }
  if (cVar16 != '\0') {
    if (*(char *)(lVar15 + 0x48) != '\x01') {
      if (*(char *)(lVar15 + 0x48) == '\x02') goto LAB_1005a6aa0;
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar15,&DAT_1060edbcc);
      *(undefined1 *)(lVar15 + 0x48) = 1;
    }
    *(undefined1 *)(lVar15 + 0x44) = 1;
    *(char *)(lVar15 + 0x45) = cVar14;
  }
LAB_1005a6aa0:
  *unaff_x20 = 1;
  uVar9 = 6;
LAB_1005a6c80:
  *(undefined1 *)(unaff_x19 + 0xd8) = uVar9;
  return;
}

