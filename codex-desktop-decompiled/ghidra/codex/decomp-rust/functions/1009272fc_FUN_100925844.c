
/* WARNING: Removing unreachable block (ram,0x0001009268b4) */
/* WARNING: Removing unreachable block (ram,0x0001009268ec) */
/* WARNING: Removing unreachable block (ram,0x000100926914) */
/* WARNING: Removing unreachable block (ram,0x000100926918) */
/* WARNING: Removing unreachable block (ram,0x0001009269d4) */
/* WARNING: Removing unreachable block (ram,0x000100926a0c) */
/* WARNING: Removing unreachable block (ram,0x000100926a34) */
/* WARNING: Removing unreachable block (ram,0x000100926a38) */
/* WARNING: Removing unreachable block (ram,0x000100926a44) */
/* WARNING: Removing unreachable block (ram,0x000100926a58) */
/* WARNING: Removing unreachable block (ram,0x000100926a64) */
/* WARNING: Removing unreachable block (ram,0x000100926a74) */
/* WARNING: Removing unreachable block (ram,0x000100926be8) */
/* WARNING: Removing unreachable block (ram,0x000100926ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100925844(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x11;
  long extraout_x11_00;
  long unaff_x19;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar14;
  char *pcVar15;
  undefined1 *unaff_x26;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  char cStack00000000000001c0;
  undefined8 uStack00000000000001c1;
  undefined7 uStack00000000000001c9;
  undefined1 uStack00000000000001d0;
  undefined7 uStack00000000000001d1;
  undefined8 in_stack_000001d8;
  long *in_stack_000001e0;
  long in_stack_000002c0;
  long in_stack_000002c8;
  long in_stack_000002d0;
  long in_stack_000002d8;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  long in_stack_00003f00;
  long in_stack_00003f08;
  long in_stack_00003f10;
  undefined8 *in_stack_00005298;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003f00,s_failed_to_start_login_server__108acb449,&stack0x00001940);
  lVar3 = extraout_x9;
  lVar6 = extraout_x11;
  puVar14 = in_stack_00005298;
  if (((ulong)in_stack_00005298 & 3) == 1) {
    puVar14 = (undefined8 *)((long)in_stack_00005298 + -1);
    uVar16 = *puVar14;
    puVar12 = *(undefined8 **)((long)in_stack_00005298 + 7);
    pcVar9 = (code *)*puVar12;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar16);
    }
    if (puVar12[1] != 0) {
      _free(uVar16);
    }
    _free(puVar14);
    lVar3 = extraout_x9_00;
    lVar6 = extraout_x11_00;
  }
  if (in_stack_00003f00 != -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0x109) = 0;
    *(undefined1 *)(unaff_x19 + 0x10a) = 0;
    *(undefined1 *)(unaff_x19 + 0x10b) = 1;
    if (in_stack_00003f00 == -0x7fffffffffffffff) {
LAB_100925408:
      uVar8 = 3;
    }
    else {
      *(undefined1 *)(unaff_x19 + 0xf3) = 1;
      func_0x000100d54a84(in_stack_00000080);
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x148);
      *(undefined2 *)(unaff_x19 + 0xf2) = 0;
      lVar18 = *(long *)(unaff_x19 + 0x1d0);
      lVar21 = *(long *)(unaff_x19 + 0x1e8);
      lVar20 = *(long *)(unaff_x19 + 0x1e0);
      in_stack_00000080[1] = *(long *)(unaff_x19 + 0x1d8);
      *in_stack_00000080 = lVar18;
      in_stack_00000080[7] = -0x7ffffffffffffffb;
      in_stack_00000080[6] = in_stack_00003f10;
      in_stack_00000080[9] = lVar6;
      in_stack_00000080[8] = lVar3;
      in_stack_00000080[3] = lVar21;
      in_stack_00000080[2] = lVar20;
      in_stack_00000080[5] = in_stack_00003f08;
      in_stack_00000080[4] = in_stack_00003f00;
      in_stack_00000080[0x10] = -0x7f5b;
      in_stack_00000080[0xd] = in_stack_000002c8;
      in_stack_00000080[0xc] = in_stack_000002c0;
      in_stack_00000080[0xf] = in_stack_000002d8;
      in_stack_00000080[0xe] = in_stack_000002d0;
      in_stack_00000080[0xb] = (long)puVar14;
      in_stack_00000080[10] = in_stack_00000070;
      *(long *)(unaff_x19 + 0x180) = lVar11 + 0x10;
      *(undefined1 *)(unaff_x19 + 0x1f0) = 0;
      uVar13 = func_0x000100892a8c(unaff_x19 + 0xf8,in_stack_00000088);
      if ((uVar13 & 1) == 0) {
        FUN_100db1748(unaff_x19 + 0xf8);
        *(undefined1 *)(unaff_x19 + 0xf3) = 0;
        *(undefined2 *)(unaff_x19 + 0xf1) = 1;
        func_0x000100d40ec8(in_stack_00000078);
        *unaff_x21 = 0x8000000000000000;
        uVar8 = 1;
        goto LAB_1009270f8;
      }
      uVar8 = 4;
    }
    *unaff_x22 = uVar8;
    *unaff_x21 = 0x8000000000000001;
    uVar8 = 4;
LAB_1009270f8:
    *(undefined1 *)(unaff_x19 + 0xb8) = uVar8;
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x109) = 1;
  *(long *)(unaff_x19 + 400) = in_stack_00003f08;
  *(long *)(unaff_x19 + 0x198) = in_stack_00003f10;
  *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0x8000000000000005;
  *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000668;
  *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000660;
  iVar4 = _getentropy(&stack0x00002c20,0x10);
  if (iVar4 != 0) {
    ___error();
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__could_not_retrieve_random_bytes_108b3c856,&stack0x00003f00,&UNK_10b4dc178);
    goto LAB_1009276f0;
  }
  *(undefined8 *)(unaff_x19 + 0x1c0) = 0x40000000000000;
  *(undefined8 *)(unaff_x19 + 0x1c8) = 0x80;
  plVar10 = *(long **)(unaff_x19 + 0x1b0);
  lVar3 = *plVar10;
  *plVar10 = lVar3 + 1;
  if (lVar3 < 0) goto LAB_1009276f0;
  *(long **)(unaff_x19 + 0x110) = plVar10;
  *(undefined1 *)(unaff_x19 + 0x108) = 1;
  *(long *)(unaff_x19 + 0x118) = *(long *)(*(long *)(unaff_x19 + 0xf8) + 0x158) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x188) = 0;
  auVar22 = FUN_100fd3e50(unaff_x19 + 0x118,in_stack_00000088);
  uVar16 = auVar22._8_8_;
  pcVar5 = auVar22._0_8_;
  if (pcVar5 == (char *)0x0) {
    *unaff_x26 = 4;
    goto LAB_100925408;
  }
  if (((*(char *)(unaff_x19 + 0x188) == '\x03') && (*(char *)(unaff_x19 + 0x180) == '\x03')) &&
     (*(char *)(unaff_x19 + 0x138) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x140);
    uVar16 = extraout_x1;
    if (*(long *)(unaff_x19 + 0x148) != 0) {
      (**(code **)(*(long *)(unaff_x19 + 0x148) + 0x18))(*(undefined8 *)(unaff_x19 + 0x150));
      uVar16 = extraout_x1_00;
    }
  }
  pcVar15 = pcVar5 + 0x28;
  cVar2 = *pcVar15;
  *pcVar15 = '\x02';
  if (cVar2 != '\x02') {
    uStack00000000000001c1 = *(undefined8 *)(pcVar5 + 0x29);
    uStack00000000000001c9 = (undefined7)*(undefined8 *)(pcVar5 + 0x31);
    in_stack_000001d8 = *(undefined8 *)(pcVar5 + 0x40);
    uStack00000000000001d0 = (undefined1)*(undefined8 *)(pcVar5 + 0x38);
    uStack00000000000001d1 = (undefined7)((ulong)*(undefined8 *)(pcVar5 + 0x38) >> 8);
    cStack00000000000001c0 = cVar2;
    FUN_100e65408(&stack0x000001c0);
    uVar16 = extraout_x1_01;
  }
  plVar10 = *(long **)(unaff_x19 + 0x110);
  lVar3 = *plVar10;
  *plVar10 = lVar3 + 1;
  if (lVar3 < 0) goto LAB_1009276f0;
  uVar19 = *(undefined8 *)(unaff_x19 + 0x1c8);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x1c0);
  if (*pcVar15 != '\x02') {
    FUN_100e65408(pcVar15);
    uVar16 = extraout_x1_02;
  }
  pcVar5[0x28] = '\0';
  *(undefined8 *)(pcVar5 + 0x31) = uVar19;
  *(undefined8 *)(pcVar5 + 0x29) = uVar17;
  *(long **)(pcVar5 + 0x40) = plVar10;
  if (*pcVar5 == '\0') {
    *pcVar5 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar5,uVar16,1000000000);
  }
  FUN_1060fa678(pcVar5,1,pcVar5);
  lVar3 = **(long **)(*in_stack_00000080 + 0x148);
  **(long **)(*in_stack_00000080 + 0x148) = lVar3 + 1;
  if (lVar3 < 0) goto LAB_1009276f0;
  func_0x000101213294(&stack0x000002f0,*in_stack_00000080);
  lVar3 = **(long **)(*in_stack_00000080 + 0x140);
  **(long **)(*in_stack_00000080 + 0x140) = lVar3 + 1;
  if (lVar3 < 0) goto LAB_1009276f0;
  uVar16 = *(undefined8 *)(*(long *)(*in_stack_00000080 + 0x150) + 0x1c58);
  lVar3 = *(long *)(*(long *)(*in_stack_00000080 + 0x150) + 0x1c60);
  if (lVar3 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lVar3);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_1009276f0;
    }
  }
  _memcpy(lVar6,uVar16,lVar3);
  plVar10 = *(long **)(*in_stack_00000080 + 0x158);
  lVar3 = *plVar10;
  *plVar10 = lVar3 + 1;
  if (lVar3 < 0) goto LAB_1009276f0;
  uVar16 = *(undefined8 *)(unaff_x19 + 0x198);
  lVar3 = *(long *)(unaff_x19 + 0x1a0);
  in_stack_000001e0 = plVar10;
  if (lVar3 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lVar3);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar3);
      goto LAB_1009276f0;
    }
  }
  _memcpy(lVar6,uVar16,lVar3);
  *(undefined2 *)(unaff_x19 + 0x108) = 0;
  _memcpy(&stack0x00000460,&stack0x000002f0,0x138);
  do {
    lVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar3;
  } while (bVar1);
  _memcpy(&stack0x00000670,&stack0x00000430,0x168);
  puVar7 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar7[9] == '\x01') {
LAB_10092674c:
    _memcpy(&stack0x00001940,&stack0x00000660,0x1240);
    if (0x7ffffffffffffffe < *puVar7) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1009276f0;
    }
    *puVar7 = *puVar7 + 1;
    uVar13 = puVar7[1];
    _memcpy(&stack0x00002c20,&stack0x00000660,0x1240);
    if (uVar13 != 2) {
      if ((uVar13 & 1) == 0) {
        plVar10 = (long *)puVar7[2];
        lVar3 = *plVar10;
        *plVar10 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar10 = (long *)plVar10[0x5e], plVar10 == (long *)0x0 ||
            (lVar3 = *plVar10, *plVar10 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x0000529c,&stack0x00001950,0x1230);
          _memcpy((ulong)&stack0x00003f00 | 0x34,&stack0x00005298,0x1234);
          _posix_memalign(&stack0x000002b0,0x80,0x1300);
          func_0x0001087c906c(0x80,0x1300);
        }
      }
      else {
        plVar10 = (long *)puVar7[2];
        lVar3 = *plVar10;
        *plVar10 = lVar3 + 1;
        if ((-1 < lVar3) &&
           ((plVar10 = (long *)plVar10[0x4a], plVar10 == (long *)0x0 ||
            (lVar3 = *plVar10, *plVar10 = lVar3 + 1, -1 < lVar3)))) {
          _memcpy(&stack0x0000529c,&stack0x00001950,0x1230);
          _memcpy((ulong)&stack0x00003f00 | 0x34,&stack0x00005298,0x1234);
          _posix_memalign(&stack0x000002b0,0x80,0x1300);
          func_0x0001087c906c(0x80,0x1300);
        }
      }
      goto LAB_1009276f0;
    }
    func_0x000100d82f10(&stack0x00002c30);
    *puVar7 = *puVar7 - 1;
  }
  else {
    if ((char)puVar7[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar7,&DAT_100c35d48);
      *(undefined1 *)(puVar7 + 9) = 1;
      goto LAB_10092674c;
    }
    func_0x000100d82f10(&stack0x00000670);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00003f00,&UNK_10b226858);
LAB_1009276f0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1009276f4);
  (*pcVar9)();
}

