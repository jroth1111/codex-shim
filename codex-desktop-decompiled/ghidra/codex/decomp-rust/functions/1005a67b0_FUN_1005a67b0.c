
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a67b0(undefined8 param_1)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  char cVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  undefined8 uVar16;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  
  *(char **)(unaff_x29 + -0x70) = s_4Overwriting_existing_pending_us_108ac1871;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xb0;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  lStack0000000000000058 = unaff_x29 + -0x80;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  *(undefined8 *)(unaff_x26 + 0x248) = in_stack_00000040;
  *(undefined8 *)(unaff_x26 + 0x240) = in_stack_00000038;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000048;
  uStack0000000000000068 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0xdd) = 0;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x60);
  lVar14 = *(long *)(unaff_x19 + 0x50);
  uVar16 = *(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x238);
  lVar13 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x240);
  if (lVar13 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = _malloc(lVar13);
    if (lVar5 == 0) {
      FUN_107c03c64(1,lVar13);
      goto LAB_1005a6d0c;
    }
  }
  _memcpy(lVar5,uVar16,lVar13);
  *(undefined1 *)(unaff_x19 + 0xdc) = 0;
  in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x70);
  in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x68);
  in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined1 *)(unaff_x19 + 0xde) = 1;
  uStack0000000000000050 = CONCAT44(uStack0000000000000050._4_4_,0x25);
  *(undefined1 *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x48) + 0x7a0) + 0xf0) + 0x10) = 1;
  *(undefined1 *)(unaff_x19 + 0xde) = 0;
  lStack0000000000000058 = lVar14;
  uStack0000000000000060 = uVar10;
  uStack0000000000000068 = uVar17;
  in_stack_00000070 = lVar13;
  in_stack_00000078 = lVar5;
  in_stack_00000080 = lVar13;
  _memcpy(unaff_x19 + 0xe0,&stack0x00000050,0x1d8);
  *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x688) = 0;
  iVar4 = FUN_10059e898(unaff_x19 + 0xe0);
  if (iVar4 != 0) {
    *unaff_x20 = 1;
    uVar7 = 5;
    goto LAB_1005a6c80;
  }
  FUN_100d1ddbc(unaff_x19 + 0xe0);
  *(undefined1 *)(unaff_x19 + 0xdb) = 0;
  lVar14 = *(long *)(unaff_x19 + 0xa0);
  *(long *)(unaff_x19 + 0xe0) = lVar14;
  if (lVar14 == 0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd5b1c,0x2b,&UNK_10b24d460);
LAB_1005a6d0c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005a6d10);
    (*pcVar2)();
  }
  lVar13 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  if (*(char *)(lVar13 + 0x48) == '\x01') {
LAB_1005a6990:
    cVar15 = *(char *)(lVar13 + 0x44);
    cVar12 = *(char *)(lVar13 + 0x45);
    cVar6 = cVar12;
    if (cVar15 == '\x01') {
      if (cVar12 != '\0') {
        cVar6 = cVar12 + -1;
        goto LAB_1005a69ac;
      }
      FUN_10610bbb4(*(undefined8 *)*unaff_x21,((undefined8 *)*unaff_x21)[1]);
      goto LAB_1005a6aa0;
    }
LAB_1005a69ac:
    *(char *)(lVar13 + 0x45) = cVar6;
    *(char *)(unaff_x29 + -0x70) = cVar15;
    *(char *)(unaff_x29 + -0x6f) = cVar12;
    uVar8 = (uint)*(undefined8 *)(lVar14 + 0x60);
    if ((uVar8 >> 1 & 1) == 0) goto LAB_1005a69c0;
LAB_1005a6ab8:
    lVar13 = *(long *)(lVar14 + 0x10);
    *(undefined8 *)(lVar14 + 0x10) = 0;
    if (lVar13 != 0) {
      uVar10 = *(undefined8 *)(lVar14 + 0x18);
      uVar16 = *(undefined8 *)(lVar14 + 0x30);
      uVar17 = *(undefined8 *)(lVar14 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(lVar14 + 0x20);
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar16;
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar17;
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(lVar14 + 0x38);
    }
LAB_1005a6ad8:
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xb0);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(long *)(unaff_x29 + -0xe0) = lVar13;
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x90);
    plVar9 = *(long **)(unaff_x19 + 0xe0);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      *plVar9 = lVar14 + -1;
      LORelease();
      if (lVar14 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(unaff_x19 + 0xe0);
      }
    }
    *(undefined8 *)(unaff_x19 + 0xe0) = 0;
    uVar16 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar17 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar19 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar18 = *(undefined8 *)(unaff_x29 + -200);
    uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
    FUN_100ce2bd0(unaff_x19 + 0xe0);
    if (lVar13 != 0) {
      in_stack_00000260 = uVar17;
      in_stack_00000268 = uVar16;
      in_stack_00000270 = uVar18;
      in_stack_00000278 = uVar19;
      in_stack_00000280 = uVar10;
    }
    *(undefined1 *)(unaff_x19 + 0xde) = 0;
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      plVar9 = *(long **)(unaff_x19 + 200);
      if (plVar9 != (long *)0x0) {
        uVar3 = plVar9[0xc];
        do {
          uVar11 = uVar3;
          if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_1005a6b88;
          uVar3 = plVar9[0xc];
        } while (uVar3 != uVar11);
        plVar9[0xc] = uVar11 | 2;
LAB_1005a6b88:
        if ((uVar11 & 5) == 1) {
          (**(code **)(plVar9[10] + 0x10))(plVar9[0xb]);
        }
        lVar14 = *plVar9;
        *plVar9 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
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
      plVar9 = *(long **)(unaff_x19 + 0x98);
      if (plVar9 != (long *)0x0) {
        uVar3 = plVar9[0xc];
        do {
          uVar11 = uVar3;
          if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_1005a6c0c;
          uVar3 = plVar9[0xc];
        } while (uVar3 != uVar11);
        plVar9[0xc] = uVar11 | 2;
LAB_1005a6c0c:
        if ((uVar11 & 5) == 1) {
          (**(code **)(plVar9[10] + 0x10))(plVar9[0xb]);
        }
        lVar14 = *plVar9;
        *plVar9 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
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
    unaff_x20[1] = lVar13;
    uVar7 = 1;
    goto LAB_1005a6c80;
  }
  if (*(char *)(lVar13 + 0x48) != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar13,&DAT_100c35d48)
    ;
    *(undefined1 *)(lVar13 + 0x48) = 1;
    goto LAB_1005a6990;
  }
  cVar15 = '\0';
  cVar12 = '\0';
  *(undefined1 *)(unaff_x29 + -0x70) = 0;
  *(undefined1 *)(unaff_x29 + -0x6f) = 0;
  uVar8 = (uint)*(undefined8 *)(lVar14 + 0x60);
  if ((uVar8 >> 1 & 1) != 0) goto LAB_1005a6ab8;
LAB_1005a69c0:
  if ((uVar8 >> 2 & 1) != 0) {
    lVar13 = 0;
    goto LAB_1005a6ad8;
  }
  if ((uVar8 & 1) == 0) {
LAB_1005a6a14:
    auVar20 = (*(code *)**(undefined8 **)*unaff_x21)(((undefined8 *)*unaff_x21)[1]);
    *(undefined1 (*) [16])(lVar14 + 0x50) = auVar20;
    LOAcquire();
    uVar3 = *(ulong *)(lVar14 + 0x60);
    *(ulong *)(lVar14 + 0x60) = uVar3 | 1;
    LORelease();
    if (((uint)uVar3 >> 1 & 1) != 0) goto LAB_1005a6ab8;
  }
  else if ((*(long *)(lVar14 + 0x58) != ((long *)*unaff_x21)[1]) ||
          (*(long *)(lVar14 + 0x50) != *(long *)*unaff_x21)) {
    puVar1 = (ulong *)(lVar14 + 0x60);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 & 0xfffffffffffffffe;
    LORelease();
    if (((uint)uVar3 >> 1 & 1) != 0) {
      LOAcquire();
      *puVar1 = *puVar1 | 1;
      LORelease();
      goto LAB_1005a6ab8;
    }
    (**(code **)(*(long *)(lVar14 + 0x50) + 0x18))(*(undefined8 *)(lVar14 + 0x58));
    goto LAB_1005a6a14;
  }
  if (cVar15 != '\0') {
    if (*(char *)(lVar13 + 0x48) != '\x01') {
      if (*(char *)(lVar13 + 0x48) == '\x02') goto LAB_1005a6aa0;
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar13,&DAT_1060edbcc);
      *(undefined1 *)(lVar13 + 0x48) = 1;
    }
    *(undefined1 *)(lVar13 + 0x44) = 1;
    *(char *)(lVar13 + 0x45) = cVar12;
  }
LAB_1005a6aa0:
  *unaff_x20 = 1;
  uVar7 = 6;
LAB_1005a6c80:
  *(undefined1 *)(unaff_x19 + 0xd8) = uVar7;
  return;
}

