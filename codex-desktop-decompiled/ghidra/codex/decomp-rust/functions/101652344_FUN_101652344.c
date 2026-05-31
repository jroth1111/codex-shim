
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101652344(void)

{
  undefined1 *puVar1;
  byte *pbVar2;
  short sVar3;
  undefined4 uVar4;
  uint6 uVar5;
  ushort uVar6;
  code *pcVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong extraout_x1;
  undefined *puVar15;
  undefined1 uVar16;
  long lVar17;
  ulong uVar18;
  ulong *extraout_x8;
  ulong *puVar19;
  ulong uVar20;
  byte bVar21;
  char cVar22;
  ulong uVar23;
  ulong extraout_x11;
  ulong uVar24;
  ulong extraout_x11_00;
  byte bVar25;
  ulong uVar26;
  long unaff_x19;
  long lVar27;
  long unaff_x22;
  long *unaff_x23;
  long *plVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 unaff_x25;
  bool bVar32;
  ulong uVar33;
  long unaff_x27;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar34;
  undefined8 uVar35;
  byte bVar36;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  long lVar37;
  undefined1 auVar43 [12];
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined1 *in_stack_00000030;
  ulong in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined2 uStack000000000000005c;
  undefined2 uStack000000000000005e;
  undefined4 uStack0000000000000060;
  undefined2 uStack0000000000000064;
  undefined2 uStack0000000000000066;
  ulong in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  byte bStack0000000000000080;
  undefined7 uStack0000000000000081;
  undefined1 uStack0000000000000088;
  undefined7 uStack0000000000000089;
  undefined1 in_stack_00000090;
  ulong in_stack_00000170;
  char cStack0000000000000180;
  char cStack0000000000000181;
  int6 iStack0000000000000182;
  ulong in_stack_000001d0;
  ulong in_stack_00000210;
  ulong in_stack_00000240;
  ulong in_stack_00000248;
  ulong in_stack_00000250;
  ulong in_stack_00000258;
  
code_r0x000101652344:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s__Failed_to_read_session_metadata_108ada1d6,unaff_x29 + -0x70);
  uVar8 = in_stack_00000050;
  puVar12 = (undefined8 *)
            CONCAT26(uStack000000000000005e,CONCAT24(uStack000000000000005c,uStack0000000000000058))
  ;
  uVar31 = CONCAT26(uStack0000000000000066,CONCAT24(uStack0000000000000064,uStack0000000000000060));
  if (unaff_x22 != 0) {
    _free(unaff_x25);
  }
LAB_10165236c:
  lVar17 = *unaff_x23;
  if ((*(long *)(lVar17 + 0x4b8) != -0x8000000000000000) && (*(long *)(lVar17 + 0x4b8) != 0)) {
    _free(*(undefined8 *)(lVar17 + 0x4c0));
    lVar17 = *unaff_x23;
  }
  *(ulong *)(lVar17 + 0x4b8) = uVar8;
  *(undefined8 **)(lVar17 + 0x4c0) = puVar12;
  *(undefined8 *)(lVar17 + 0x4c8) = uVar31;
  lVar17 = *unaff_x23;
  auVar43 = func_0x000106032954(8);
  puVar12 = auVar43._0_8_;
  lVar17 = *(long *)(lVar17 + 0x4d0);
  uVar8 = *(ulong *)(lVar17 + 0x1c0);
  do {
    if ((uVar8 & 1) != 0) goto LAB_101652448;
    if (uVar8 == 0xfffffffffffffffe) goto LAB_101653848;
    uVar24 = uVar8 + 2;
    uVar13 = *(ulong *)(lVar17 + 0x1c0);
    bVar32 = uVar13 != uVar8;
    uVar8 = uVar13;
  } while (bVar32);
  *(ulong *)(lVar17 + 0x1c0) = uVar24;
  LOAcquire();
  uVar8 = *(ulong *)(lVar17 + 0x88);
  *(ulong *)(lVar17 + 0x88) = uVar8 + 1;
  lVar11 = func_0x000105217788(lVar17 + 0x80,uVar8);
  *(undefined1 (*) [12])(lVar11 + (uVar8 & 0x1f) * 0x10) = auVar43;
  *(ulong *)(lVar11 + 0x210) = *(ulong *)(lVar11 + 0x210) | 1L << (uVar8 & 0x1f);
  LORelease();
  puVar19 = (ulong *)(lVar17 + 0x110);
  LOAcquire();
  uVar8 = *puVar19;
  *puVar19 = uVar8 | 2;
  LORelease();
  if (uVar8 == 0) {
    lVar11 = *(long *)(lVar17 + 0x100);
    *(undefined8 *)(lVar17 + 0x100) = 0;
    *puVar19 = in_xzr;
    LORelease();
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x108));
    }
  }
LAB_101652448:
  *(undefined2 *)(unaff_x19 + 0xb80) = 0;
  lVar17 = 4;
LAB_101652450:
  *(ulong *)(unaff_x27 + 0x138) = in_stack_00000248;
  *(ulong *)(unaff_x27 + 0x130) = in_stack_00000240;
  *(ulong *)(unaff_x27 + 0x148) = in_stack_00000258;
  *(ulong *)(unaff_x27 + 0x140) = in_stack_00000250;
  *in_stack_00000030 = 1;
  *(undefined8 *)(unaff_x27 + 0x158) = *(undefined8 *)(unaff_x27 + 0x138);
  *(undefined8 *)(unaff_x27 + 0x150) = *(undefined8 *)(unaff_x27 + 0x130);
  *(undefined8 *)(unaff_x27 + 0x168) = *(undefined8 *)(unaff_x27 + 0x148);
  *(undefined8 *)(unaff_x27 + 0x160) = *(undefined8 *)(unaff_x27 + 0x140);
  FUN_100e8cd40(unaff_x23);
  if (lVar17 != 4) {
    *(undefined8 *)(unaff_x27 + 0x198) = *(undefined8 *)(unaff_x27 + 0x158);
    *(undefined8 *)(unaff_x27 + 400) = *(undefined8 *)(unaff_x27 + 0x150);
    *(undefined8 *)(unaff_x27 + 0x1a8) = *(undefined8 *)(unaff_x27 + 0x168);
    *(undefined8 *)(unaff_x27 + 0x1a0) = *(undefined8 *)(unaff_x27 + 0x160);
LAB_1016524b0:
    *(undefined2 *)(unaff_x19 + 0xb34) = 0;
    lVar11 = *(ulong *)(unaff_x19 + 0xad8) - 5;
    if (*(ulong *)(unaff_x19 + 0xad8) < 5) {
      lVar11 = 1;
    }
joined_r0x000101653b24:
    if (lVar11 == 0) {
      *(undefined1 *)(unaff_x19 + 0xb32) = 0;
      *(undefined2 *)(unaff_x19 + 0xb32) = 0;
      lVar11 = *(long *)(unaff_x19 + 0xad0);
    }
    else {
      if (lVar11 == 1) {
        *(undefined1 *)(unaff_x19 + 0xb33) = 0;
      }
      *(undefined2 *)(unaff_x19 + 0xb32) = 0;
      lVar11 = *(long *)(unaff_x19 + 0xad0);
    }
    if (lVar11 != 0) {
      FUN_100cdd120(unaff_x19 + 0xad0);
    }
    lVar11 = *(long *)(unaff_x19 + 0xac0);
    if (lVar11 != 0) {
      puVar12 = *(undefined8 **)(unaff_x19 + 0xac8);
      pcVar7 = (code *)*puVar12;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(lVar11);
      }
      if (puVar12[1] != 0) {
        _free(lVar11);
      }
    }
    FUN_100e06cec(unaff_x19 + 0x4e8);
    __ZN9codex_tui3tui3Tui16leave_alt_screen17hd8f8b221d5172fdaE(*(undefined8 *)(unaff_x19 + 0x4e0))
    ;
LAB_101653b7c:
    *(undefined2 *)(unaff_x19 + 0xb36) = 0;
    *(undefined2 *)(unaff_x19 + 0xb3c) = 0;
    *(undefined4 *)(unaff_x19 + 0xb38) = 0;
    *in_stack_00000028 = lVar17;
    in_stack_00000028[1] = in_stack_00000010;
    lVar17 = *(long *)(unaff_x27 + 400);
    lVar27 = *(long *)(unaff_x27 + 0x1a8);
    lVar11 = *(long *)(unaff_x27 + 0x1a0);
    in_stack_00000028[3] = *(long *)(unaff_x27 + 0x198);
    in_stack_00000028[2] = lVar17;
    in_stack_00000028[5] = lVar27;
    in_stack_00000028[4] = lVar11;
    uVar16 = 1;
LAB_101653ba0:
    *(undefined1 *)(unaff_x19 + 0xb30) = uVar16;
    return;
  }
LAB_10165247c:
  *(undefined2 *)(unaff_x19 + 0xb34) = 0;
  lVar17 = *(ulong *)(unaff_x19 + 0xad8) - 5;
  if (*(ulong *)(unaff_x19 + 0xad8) < 5) {
    lVar17 = 1;
  }
  do {
    if (lVar17 != 2) {
      if (lVar17 != 1) goto LAB_1016529cc;
      *(undefined1 *)(unaff_x19 + 0xb33) = 0;
    }
LAB_1016529d0:
    *(undefined2 *)(unaff_x19 + 0xb32) = 0;
    pbVar2 = (byte *)(unaff_x19 + 0xb31);
    *(undefined1 *)(unaff_x19 + 0xb31) = 0;
    *(long *)(unaff_x19 + 0xb40) = unaff_x19 + 0xac0;
    puVar30 = (undefined8 *)(unaff_x19 + 0xb40);
    *(long *)(unaff_x19 + 0xb48) = unaff_x19 + 0xad0;
    *(byte **)(unaff_x19 + 0xb50) = pbVar2;
    *(undefined8 **)(unaff_x19 + 0xb58) = puVar30;
    puVar12 = (undefined8 *)
              (*
              ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
              )();
    if (*(char *)(puVar12 + 9) != '\x01') {
      if (*(char *)(puVar12 + 9) == '\x02') {
        func_0x000108a82a50(&UNK_10b4cce20);
        goto LAB_101653c9c;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar12,&DAT_100c35d48);
      *(undefined1 *)(puVar12 + 9) = 1;
    }
    if (*(char *)((long)puVar12 + 0x44) == '\x01' && *(char *)((long)puVar12 + 0x45) == '\0') {
      FUN_10610bbb4(*(undefined8 *)*in_stack_00000020,((undefined8 *)*in_stack_00000020)[1]);
LAB_101652ed0:
      *in_stack_00000028 = 5;
      uVar16 = 3;
      goto LAB_101653ba0;
    }
    if ((*(uint *)(puVar12 + 7) & 1) == 0) {
      uVar10 = FUN_1060fcce0();
      uVar8 = extraout_x1;
    }
    else {
      uVar10 = *(uint *)((long)puVar12 + 0x3c);
      uVar8 = (ulong)*(uint *)(puVar12 + 8);
    }
    uVar10 = uVar10 ^ uVar10 << 0x11;
    uVar14 = (uint)uVar8;
    uVar10 = (uint)(uVar8 >> 0x10) & 0xffff ^ uVar10 >> 7 ^ uVar14 ^ uVar10;
    *(undefined4 *)(puVar12 + 7) = 1;
    *(uint *)((long)puVar12 + 0x3c) = uVar14;
    *(uint *)(puVar12 + 8) = uVar10;
    puVar19 = (ulong *)&stack0x00000058;
    bVar25 = *pbVar2;
    if ((int)(uVar10 + uVar14) < 0) {
      if ((bVar25 >> 1 & 1) == 0) {
        plVar28 = *(long **)(unaff_x19 + 0xb48);
        lVar17 = *plVar28;
        if (lVar17 == 0) {
LAB_101652e38:
          bVar25 = bVar25 | 2;
          *pbVar2 = bVar25;
          goto LAB_101652e40;
        }
        if (*(char *)(puVar12 + 9) == '\x01') {
LAB_101652af8:
          cVar38 = *(char *)((long)puVar12 + 0x44);
          cVar22 = *(char *)((long)puVar12 + 0x45);
          cVar39 = cVar22;
          if (cVar38 != '\x01') {
LAB_101652b14:
            *(char *)((long)puVar12 + 0x45) = cVar39;
            goto LAB_101652b18;
          }
          if (cVar22 != '\0') {
            cVar39 = cVar22 + -1;
            goto LAB_101652b14;
          }
          FUN_10610bbb4(*(undefined8 *)*in_stack_00000020,((undefined8 *)*in_stack_00000020)[1]);
          goto LAB_101653a34;
        }
        cVar38 = '\0';
        cVar22 = '\0';
        if (*(char *)(puVar12 + 9) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (puVar12,&DAT_100c35d48);
          *(undefined1 *)(puVar12 + 9) = 1;
          goto LAB_101652af8;
        }
LAB_101652b18:
        cStack0000000000000180 = cVar38;
        cStack0000000000000181 = cVar22;
        func_0x000100fc80f0(&stack0x00000240,lVar17 + 0x1a0,lVar17 + 0x80);
        if (in_stack_00000240 != 5) {
          if (in_stack_00000240 != 4) {
LAB_101652d04:
            uVar8 = *(ulong *)(lVar17 + 0x1c0);
            *(ulong *)(lVar17 + 0x1c0) = uVar8 - 2;
            LORelease();
            puVar19 = (ulong *)&stack0x00000248;
            uVar18 = in_stack_00000240;
joined_r0x000101652d18:
            if (1 < uVar8) {
              uVar8 = *puVar19;
              uVar24 = puVar19[1];
              uVar13 = puVar19[2];
              uVar23 = puVar19[3];
              uVar20 = puVar19[6];
              uVar26 = puVar19[5];
              *(ulong *)(unaff_x27 + 0xf8) = puVar19[4];
              *(ulong *)(unaff_x27 + 0xf0) = uVar23;
              *(ulong *)(unaff_x27 + 0x108) = uVar20;
              *(ulong *)(unaff_x27 + 0x100) = uVar26;
              uVar23 = puVar19[7];
              *(ulong *)(unaff_x27 + 0x118) = puVar19[8];
              *(ulong *)(unaff_x27 + 0x110) = uVar23;
              in_stack_00000170 = puVar19[9];
              bVar25 = 2;
              goto LAB_101652ee4;
            }
            goto LAB_101653848;
          }
          if (*(ulong *)(lVar17 + 0x1c0) < 2) goto LAB_101652e24;
LAB_101652d38:
          puVar15 = &UNK_10b23a6d0;
LAB_101653c50:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar15);
          goto LAB_101653c9c;
        }
        __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                  (lVar17 + 0x100,*in_stack_00000020);
        func_0x000100fc80f0(&stack0x00000050,lVar17 + 0x1a0,lVar17 + 0x80);
        if (in_stack_00000050 != 5) {
          if (in_stack_00000050 == 4) {
            if (*(ulong *)(lVar17 + 0x1c0) < 2) goto LAB_101652e24;
LAB_101653c48:
            puVar15 = &UNK_10b23a6b8;
            goto LAB_101653c50;
          }
LAB_101652da0:
          uVar8 = *(ulong *)(lVar17 + 0x1c0);
          *(ulong *)(lVar17 + 0x1c0) = uVar8 - 2;
          LORelease();
          uVar18 = in_stack_00000050;
          goto joined_r0x000101652d18;
        }
        if ((*(char *)(lVar17 + 0x1b8) == '\x01') && (*(ulong *)(lVar17 + 0x1c0) < 2)) {
LAB_101652e24:
          FUN_100cdd120(plVar28);
          *plVar28 = 0;
          bVar25 = *pbVar2;
          goto LAB_101652e38;
        }
        if (cVar38 != '\0') {
          if (*(char *)(puVar12 + 9) != '\x01') {
            if (*(char *)(puVar12 + 9) == '\x02') goto LAB_101653a34;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (puVar12,&DAT_1060edbcc);
            *(undefined1 *)(puVar12 + 9) = 1;
          }
          *(undefined1 *)((long)puVar12 + 0x44) = 1;
          *(char *)((long)puVar12 + 0x45) = cVar22;
        }
LAB_101653a34:
        bVar25 = *pbVar2;
        bVar32 = true;
        if ((bVar25 & 1) != 0) goto LAB_101652ec8;
LAB_101652e44:
        plVar28 = (long *)*puVar30;
        lVar17 = *plVar28;
        if (lVar17 != 0) {
          puVar12 = (undefined8 *)plVar28[1];
          (*(code *)puVar12[3])(&stack0x00000050,lVar17,in_stack_00000020);
          if (in_stack_00000050 == 0x8000000000000005) goto LAB_101652ed0;
          uVar24 = CONCAT26(uStack000000000000005e,
                            CONCAT24(uStack000000000000005c,uStack0000000000000058));
          uVar13 = CONCAT26(uStack0000000000000066,
                            CONCAT24(uStack0000000000000064,uStack0000000000000060));
          bVar25 = 1;
          uVar18 = 5;
          uVar8 = in_stack_00000050;
          if (in_stack_00000050 != 0x8000000000000004) goto LAB_101652ee4;
          if ((code *)*puVar12 != (code *)0x0) {
            (*(code *)*puVar12)(lVar17);
          }
          if (puVar12[1] != 0) {
            _free(lVar17);
          }
          *plVar28 = 0;
          bVar25 = *pbVar2;
        }
        bVar25 = bVar25 | 1;
LAB_101652ec4:
        *pbVar2 = bVar25;
      }
      else {
LAB_101652e40:
        bVar32 = false;
        if ((bVar25 & 1) == 0) goto LAB_101652e44;
      }
LAB_101652ec8:
      uVar18 = 7;
      if (bVar32) goto LAB_101652ed0;
    }
    else {
      if ((bVar25 & 1) != 0) {
        bVar32 = false;
        if ((bVar25 >> 1 & 1) != 0) goto LAB_101652ec8;
LAB_101652c1c:
        plVar28 = *(long **)(unaff_x19 + 0xb48);
        lVar17 = *plVar28;
        if (lVar17 == 0) {
          bVar25 = bVar25 | 2;
        }
        else {
          if (*(char *)(puVar12 + 9) == '\x01') {
LAB_101652c5c:
            cVar38 = *(char *)((long)puVar12 + 0x45);
            cVar22 = cVar38;
            if (*(char *)((long)puVar12 + 0x44) == '\x01') {
              if (cVar38 == '\0') {
                FUN_10610bbb4(*(undefined8 *)*in_stack_00000020,
                              ((undefined8 *)*in_stack_00000020)[1]);
                in_stack_00000050 = in_stack_00000050 & 0xffffffffff000000;
                __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                          ((ulong)&stack0x00000050 | 1);
                goto LAB_101652ed0;
              }
              cVar22 = cVar38 + -1;
            }
            *(char *)((long)puVar12 + 0x45) = cVar22;
            cVar22 = *(char *)((long)puVar12 + 0x44);
          }
          else {
            cVar22 = '\0';
            cVar38 = '\0';
            if (*(char *)(puVar12 + 9) != '\x02') {
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (puVar12,&DAT_100c35d48);
              *(undefined1 *)(puVar12 + 9) = 1;
              goto LAB_101652c5c;
            }
          }
          cStack0000000000000181 = cVar38;
          cStack0000000000000180 = cVar22;
          func_0x000100fc80f0(&stack0x00000240,lVar17 + 0x1a0,lVar17 + 0x80);
          if (in_stack_00000240 == 4) {
            if (1 < *(ulong *)(lVar17 + 0x1c0)) goto LAB_101652d38;
          }
          else {
            if (in_stack_00000240 != 5) goto LAB_101652d04;
            __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                      (lVar17 + 0x100,*in_stack_00000020);
            func_0x000100fc80f0(&stack0x00000050,lVar17 + 0x1a0,lVar17 + 0x80);
            if (in_stack_00000050 == 4) {
              if (1 < *(ulong *)(lVar17 + 0x1c0)) goto LAB_101653c48;
            }
            else {
              if (in_stack_00000050 != 5) goto LAB_101652da0;
              if ((*(char *)(lVar17 + 0x1b8) != '\x01') || (1 < *(ulong *)(lVar17 + 0x1c0))) {
                __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                          (&stack0x00000180);
                goto LAB_101652ed0;
              }
            }
          }
          FUN_100cdd120(plVar28);
          *plVar28 = 0;
          bVar25 = *pbVar2 | 2;
        }
        goto LAB_101652ec4;
      }
      plVar28 = (long *)*puVar30;
      lVar17 = *plVar28;
      if (lVar17 == 0) {
LAB_101652c0c:
        bVar32 = false;
        *pbVar2 = bVar25 | 1;
        bVar21 = bVar25 & 2;
        bVar25 = bVar25 | 1;
joined_r0x000101652bac:
        if (bVar21 == 0) goto LAB_101652c1c;
        goto LAB_101652ec8;
      }
      puVar30 = (undefined8 *)plVar28[1];
      (*(code *)puVar30[3])(&stack0x00000050,lVar17,in_stack_00000020);
      if (in_stack_00000050 == 0x8000000000000005) {
        bVar32 = true;
        bVar21 = *pbVar2 >> 1 & 1;
        bVar25 = *pbVar2;
        goto joined_r0x000101652bac;
      }
      uVar24 = CONCAT26(uStack000000000000005e,
                        CONCAT24(uStack000000000000005c,uStack0000000000000058));
      uVar13 = CONCAT26(uStack0000000000000066,
                        CONCAT24(uStack0000000000000064,uStack0000000000000060));
      bVar25 = 1;
      uVar18 = 5;
      uVar8 = in_stack_00000050;
      if (in_stack_00000050 == 0x8000000000000004) {
        if ((code *)*puVar30 != (code *)0x0) {
          (*(code *)*puVar30)(lVar17);
        }
        if (puVar30[1] != 0) {
          _free(lVar17);
        }
        *plVar28 = 0;
        bVar25 = *pbVar2;
        goto LAB_101652c0c;
      }
LAB_101652ee4:
      *pbVar2 = *pbVar2 | bVar25;
      in_stack_00000000 = uVar13;
      in_stack_00000008 = uVar24;
      in_stack_00000018 = uVar8;
    }
    *(undefined2 *)(unaff_x19 + 0xb32) = 0x101;
    *(ulong *)(unaff_x19 + 0xad8) = uVar18;
    *(ulong *)(unaff_x19 + 0xae0) = in_stack_00000018;
    *(ulong *)(unaff_x19 + 0xae8) = in_stack_00000008;
    *(ulong *)(unaff_x19 + 0xaf0) = in_stack_00000000;
    *(ulong *)(unaff_x19 + 0xb28) = in_stack_00000170;
    uVar31 = *(undefined8 *)(unaff_x27 + 0xf0);
    uVar35 = *(undefined8 *)(unaff_x27 + 0x108);
    uVar34 = *(undefined8 *)(unaff_x27 + 0x100);
    *(undefined8 *)(unaff_x19 + 0xb00) = *(undefined8 *)(unaff_x27 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0xaf8) = uVar31;
    *(undefined8 *)(unaff_x19 + 0xb10) = uVar35;
    *(undefined8 *)(unaff_x19 + 0xb08) = uVar34;
    uVar31 = *(undefined8 *)(unaff_x27 + 0x110);
    *(undefined8 *)(unaff_x19 + 0xb20) = *(undefined8 *)(unaff_x27 + 0x118);
    *(undefined8 *)(unaff_x19 + 0xb18) = uVar31;
    if (uVar18 < 5) {
      if (uVar18 != 4) goto LAB_101652fbc;
LAB_101653c64:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108caae4f,0x7d,&UNK_10b250720);
      goto LAB_101653c9c;
    }
    if (uVar18 == 5) {
      if (in_stack_00000018 == 0x8000000000000004) goto LAB_101653c64;
      puVar19 = (ulong *)(unaff_x19 + 0xae0);
      *(undefined2 *)(unaff_x19 + 0xb34) = 0x101;
      *(undefined8 *)(unaff_x19 + 0xb48) = *(undefined8 *)(unaff_x19 + 0xae8);
      *(ulong *)(unaff_x19 + 0xb40) = *puVar19;
      *(undefined8 *)(unaff_x19 + 0xb50) = *(undefined8 *)(unaff_x19 + 0xaf0);
      puVar12 = (undefined8 *)(unaff_x19 + 0x4e8);
      if (*(long *)(unaff_x19 + 0x558) != 3) {
        *(undefined2 *)(unaff_x19 + 0xb34) = 0;
        uVar31 = *(undefined8 *)(unaff_x19 + 0xae8);
        in_stack_00000050 = *puVar19;
        uStack0000000000000058 = (undefined4)uVar31;
        uStack000000000000005c = (undefined2)((ulong)uVar31 >> 0x20);
        uStack000000000000005e = (undefined2)((ulong)uVar31 >> 0x30);
        uVar31 = *(undefined8 *)(unaff_x19 + 0xaf0);
        uStack0000000000000060 = (undefined4)uVar31;
        uStack0000000000000064 = (undefined2)((ulong)uVar31 >> 0x20);
        uStack0000000000000066 = (undefined2)((ulong)uVar31 >> 0x30);
        lVar11 = __ZN9codex_tui13resume_picker11PickerState20handle_overlay_event17hec2219cbe21354c1E
                           (puVar12,*(undefined8 *)(unaff_x19 + 0x4e0),&stack0x00000050);
        if (lVar11 == 0) break;
        lVar17 = 4;
        in_stack_00000010 = lVar11;
        goto LAB_1016524b0;
      }
      uVar8 = *(ulong *)(unaff_x19 + 0xb40) ^ 0x8000000000000000;
      if (-1 < (long)*(ulong *)(unaff_x19 + 0xb40)) {
        uVar8 = 1;
      }
      if (1 < uVar8 - 2) {
        if (uVar8 != 0) goto LAB_10165384c;
        if (*(char *)(unaff_x19 + 0xb52) == '\x02') {
          *(undefined2 *)(unaff_x19 + 0xb34) = 0;
          goto LAB_1016529cc;
        }
        uVar31 = *(undefined8 *)(unaff_x19 + 0xae8);
        uStack000000000000005c = (undefined2)uVar31;
        uStack000000000000005e = (undefined2)((ulong)uVar31 >> 0x10);
        uStack0000000000000060 = (undefined4)((ulong)uVar31 >> 0x20);
        uStack0000000000000064 = *(undefined2 *)(unaff_x19 + 0xaf0);
        *(undefined8 **)(unaff_x19 + 0xb60) = puVar12;
        *(ulong *)(unaff_x19 + 0xb70) =
             CONCAT26(uStack000000000000005e,CONCAT24(uStack000000000000005c,uStack0000000000000058)
                     );
        *(ulong *)(unaff_x19 + 0xb68) = in_stack_00000050;
        *(ulong *)(unaff_x19 + 0xb76) =
             CONCAT62((int6)(CONCAT26(uStack0000000000000064,(int6)((ulong)uVar31 >> 0x10)) >> 0x10)
                      ,uStack000000000000005e);
        *(char *)(unaff_x19 + 0xb7e) = *(char *)(unaff_x19 + 0xb52);
        *(undefined1 *)(unaff_x19 + 0xb7f) = *(undefined1 *)(unaff_x19 + 0xb53);
        in_stack_00000030 = (undefined1 *)(unaff_x19 + 0xb82);
        *(undefined1 *)(unaff_x19 + 0xb82) = 0;
        unaff_x23 = (long *)(unaff_x19 + 0xb58);
        *(undefined2 *)(unaff_x19 + 0xb80) = 0;
        *(undefined8 **)(unaff_x19 + 0xb58) = puVar12;
        puVar19 = (ulong *)(unaff_x19 + 0xb68);
        *(undefined4 *)(unaff_x19 + 0xb70) = *(undefined4 *)(unaff_x19 + 0xb7c);
        *(undefined8 *)(unaff_x19 + 0xb68) = *(undefined8 *)(unaff_x19 + 0xb74);
        if (*(long *)(unaff_x19 + 0x9a0) != -0x8000000000000000 && *(long *)(unaff_x19 + 0x9a0) != 0
           ) {
          _free(*(undefined8 *)(unaff_x19 + 0x9a8));
          puVar12 = (undefined8 *)*unaff_x23;
        }
        puVar12[0x97] = 0x8000000000000000;
        puVar12 = (undefined8 *)*unaff_x23;
        if ((*(byte *)((long)puVar12 + 0x5c1) & 1) == 0) {
          in_stack_00000050 = *puVar19;
          uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
          lVar11 = puVar12[0x7b] * 0xc;
          lVar17 = puVar12[0x7a];
          goto LAB_101651748;
        }
        lVar17 = 3;
        if ((*(byte *)(unaff_x19 + 0xb70) & 2) == 0) {
          lVar17 = 4;
        }
        if (*(int *)(unaff_x19 + 0xb6c) != 99 || *(char *)(unaff_x19 + 0xb68) != '\x0f') {
          lVar17 = 4;
        }
        goto LAB_101652450;
      }
      __ZN9crossterm8terminal4size17h59acbc74b9110907E(&stack0x00000050);
      if ((in_stack_00000050 & 1) != 0) {
        lVar17 = CONCAT26(uStack000000000000005e,
                          CONCAT24(uStack000000000000005c,uStack0000000000000058));
        if (((ulong)CONCAT24(uStack000000000000005c,uStack0000000000000058) & 3) == 1) {
          puVar29 = (undefined8 *)(lVar17 + -1);
          uVar31 = *puVar29;
          puVar30 = *(undefined8 **)(lVar17 + 7);
          pcVar7 = (code *)*puVar30;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(uVar31);
          }
          if (puVar30[1] != 0) {
            _free(uVar31);
          }
          _free(puVar29);
        }
        goto LAB_101653acc;
      }
      uVar6 = in_stack_00000050._4_2_;
      uVar14 = (uint)in_stack_00000050._4_2_;
      uVar10 = 0;
      if (7 < uVar14) {
        uVar10 = uVar14 - 8;
      }
      uVar8 = (ulong)uVar10;
      sVar3 = 0;
      if (3 < in_stack_00000050._2_2_) {
        sVar3 = in_stack_00000050._2_2_ - 4;
      }
      *(ulong *)(unaff_x19 + 0x508) = (ulong)(7 < uVar14 && uVar14 - 8 != 0);
      *(ulong *)(unaff_x19 + 0x510) = uVar8;
      *(undefined2 *)(unaff_x19 + 0xa80) = 1;
      *(short *)(unaff_x19 + 0xa82) = sVar3;
      if (*(ulong *)(unaff_x19 + 0x728) == 0) {
        *(undefined8 *)(unaff_x19 + 0xa68) = 0;
        goto LAB_101653a48;
      }
      uVar24 = uVar8;
      if (in_stack_00000050._4_2_ < 9) {
        uVar24 = 0xffffffffffffffff;
      }
      uVar18 = *(ulong *)(unaff_x19 + 0xa60);
      uVar13 = *(ulong *)(unaff_x19 + 0xa68);
      if (uVar18 < *(ulong *)(unaff_x19 + 0xa68)) {
        *(ulong *)(unaff_x19 + 0xa68) = uVar18;
        uVar13 = uVar18;
      }
      uVar33 = (ulong)(uVar18 + 1 < *(ulong *)(unaff_x19 + 0x728) ||
                      *(long *)(unaff_x19 + 0x530) != -0x8000000000000000);
      uVar26 = FUN_105486678(puVar12,uVar13,uVar18);
      uVar20 = uVar24 - (uVar13 != 0);
      uVar23 = 0;
      if (uVar33 <= uVar20) {
        uVar23 = uVar20 - uVar33;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if ((uVar18 <= uVar13) || (uVar26 <= uVar23)) goto LAB_101653a48;
      uVar23 = 0;
      if (uVar33 <= uVar24 - 1) {
        uVar23 = (uVar24 - 1) - uVar33;
      }
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      goto LAB_101653934;
    }
    if (uVar18 != 6) {
      *(undefined2 *)(unaff_x19 + 0xb32) = 0;
      if (*(long *)(unaff_x19 + 0xad0) != 0) {
        FUN_100cdd120(unaff_x19 + 0xad0);
      }
      lVar17 = *(long *)(unaff_x19 + 0xac0);
      if (lVar17 != 0) {
        puVar12 = *(undefined8 **)(unaff_x19 + 0xac8);
        pcVar7 = (code *)*puVar12;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(lVar17);
        }
        if (puVar12[1] != 0) {
          _free(lVar17);
        }
      }
      FUN_100e06cec(unaff_x19 + 0x4e8);
      __ZN9codex_tui3tui3Tui16leave_alt_screen17hd8f8b221d5172fdaE
                (*(undefined8 *)(unaff_x19 + 0x4e0));
      lVar17 = 0;
      goto LAB_101653b7c;
    }
LAB_101652fbc:
    *(undefined8 *)(unaff_x19 + 0xb68) = *(undefined8 *)(unaff_x19 + 0xb00);
    *(undefined8 *)(unaff_x19 + 0xb60) = *(undefined8 *)(unaff_x19 + 0xaf8);
    *(undefined8 *)(unaff_x19 + 0xb78) = *(undefined8 *)(unaff_x19 + 0xb10);
    *(undefined8 *)(unaff_x19 + 0xb70) = *(undefined8 *)(unaff_x19 + 0xb08);
    *(undefined8 *)(unaff_x19 + 0xb88) = *(undefined8 *)(unaff_x19 + 0xb20);
    *(undefined8 *)(unaff_x19 + 0xb80) = *(undefined8 *)(unaff_x19 + 0xb18);
    *(undefined8 *)(unaff_x19 + 0xb48) = *(undefined8 *)(unaff_x19 + 0xae0);
    *(undefined8 *)(unaff_x19 + 0xb40) = *(undefined8 *)(unaff_x19 + 0xad8);
    lVar17 = unaff_x19 + 0x4e8;
    *(undefined8 *)(unaff_x19 + 0xb90) = *(undefined8 *)(unaff_x19 + 0xb28);
    *(undefined8 *)(unaff_x19 + 0xb58) = *(undefined8 *)(unaff_x19 + 0xaf0);
    *(undefined8 *)(unaff_x19 + 0xb50) = *(undefined8 *)(unaff_x19 + 0xae8);
    *(long *)(unaff_x19 + 0xb98) = lVar17;
    *(undefined1 *)(unaff_x19 + 0xba0) = 0;
    lVar27 = *(long *)(unaff_x19 + 0xb40);
    uVar8 = *(ulong *)(unaff_x19 + 0xb48);
    puVar19 = (ulong *)(unaff_x19 + 0xb50);
    lVar11 = 0;
    if (lVar27 != 0) {
      lVar11 = lVar27 + -1;
    }
    if (lVar11 == 2) {
      in_stack_00000240 = *(ulong *)(unaff_x19 + 0xb58);
      uVar24 = *puVar19;
      if (uVar8 == 0x8000000000000000) {
        in_stack_00000240 = 0x8000000000000002;
        FUN_100c307cc(&stack0x00000180,unaff_x19 + 0xa30,unaff_x29 + -0x70,&stack0x00000240);
        if ((CONCAT62(iStack0000000000000182,CONCAT11(cStack0000000000000181,cStack0000000000000180)
                     ) != -0x7ffffffffffffffd) && (-1 < iStack0000000000000182)) {
          func_0x000100cca000(&stack0x00000180);
        }
        if ((*(char *)(unaff_x19 + 0xaa9) == '\x01') &&
           (*(long *)(unaff_x19 + 0xab2) == *(long *)(unaff_x29 + -0xa8) &&
            *(long *)(unaff_x19 + 0xaaa) == *(long *)(unaff_x29 + -0xb0))) {
          *(undefined1 *)(unaff_x19 + 0xaa9) = 0;
          *(undefined1 *)(unaff_x19 + 0xaba) = 0;
          puVar12 = (undefined8 *)_malloc(0x21);
          if (puVar12 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x21);
            goto LAB_101653c9c;
          }
          *(undefined1 *)(puVar12 + 4) = 0x77;
          puVar12[1] = 0x742064616f6c2074;
          *puVar12 = 0x6f6e20646c756f43;
          puVar12[3] = 0x6569766572702074;
          puVar12[2] = 0x70697263736e6172;
          if ((*(long *)(unaff_x19 + 0x9a0) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x9a0) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x9a8));
          }
          *(undefined8 *)(unaff_x19 + 0x9a0) = 0x21;
          *(undefined8 **)(unaff_x19 + 0x9a8) = puVar12;
          *(undefined8 *)(unaff_x19 + 0x9b0) = 0x21;
        }
        auVar43 = func_0x000106032954(8);
        puVar12 = auVar43._0_8_;
        lVar17 = *(long *)(unaff_x19 + 0x9b8);
        uVar8 = *(ulong *)(lVar17 + 0x1c0);
        do {
          if ((uVar8 & 1) != 0) goto LAB_1016531d8;
          if (uVar8 == 0xfffffffffffffffe) goto LAB_101653848;
          uVar13 = uVar8 + 2;
          uVar18 = *(ulong *)(lVar17 + 0x1c0);
          bVar32 = uVar18 != uVar8;
          uVar8 = uVar18;
        } while (bVar32);
        *(ulong *)(lVar17 + 0x1c0) = uVar13;
        LOAcquire();
        uVar8 = *(ulong *)(lVar17 + 0x88);
        *(ulong *)(lVar17 + 0x88) = uVar8 + 1;
        lVar11 = func_0x000105217788(lVar17 + 0x80,uVar8);
        *(undefined1 (*) [12])(lVar11 + (uVar8 & 0x1f) * 0x10) = auVar43;
        *(ulong *)(lVar11 + 0x210) = *(ulong *)(lVar11 + 0x210) | 1L << (uVar8 & 0x1f);
        LORelease();
        puVar19 = (ulong *)(lVar17 + 0x110);
        LOAcquire();
        uVar8 = *puVar19;
        *puVar19 = uVar8 | 2;
        LORelease();
        if (uVar8 == 0) {
          lVar11 = *(long *)(lVar17 + 0x100);
          *(undefined8 *)(lVar17 + 0x100) = 0;
          *puVar19 = in_xzr;
          LORelease();
          if (lVar11 != 0) {
            (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x108));
          }
        }
LAB_1016531d8:
        if ((uVar24 & 3) == 1) {
          puVar30 = (undefined8 *)(uVar24 - 1);
          uVar31 = *puVar30;
          puVar12 = *(undefined8 **)(uVar24 + 7);
          if ((code *)*puVar12 != (code *)0x0) {
            (*(code *)*puVar12)(uVar31);
          }
LAB_1016537b8:
          if (puVar12[1] != 0) {
            _free(uVar31);
          }
LAB_1016537c8:
          _free(puVar30);
        }
      }
      else {
        bVar25 = 0;
        if (*(long *)(unaff_x19 + 0xaaa) == *(long *)(unaff_x29 + -0xb0) &&
            *(long *)(unaff_x19 + 0xab2) == *(long *)(unaff_x29 + -0xa8)) {
          bVar25 = *(byte *)(unaff_x19 + 0xaa9);
        }
        in_stack_00000248 = 8;
        if (in_stack_00000240 != 0) {
          lVar11 = in_stack_00000240 * 0x10;
          in_stack_00000248 = _malloc(lVar11);
          if (in_stack_00000248 == 0) {
            func_0x0001087c9084(8,lVar11);
            goto LAB_101653c9c;
          }
          lVar27 = 0;
          uVar8 = in_stack_00000240;
          do {
            if (lVar11 - lVar27 == 0) break;
            uVar31 = ((undefined8 *)(uVar24 + lVar27))[1];
            plVar28 = *(long **)(uVar24 + lVar27);
            lVar37 = *plVar28;
            *plVar28 = lVar37 + 1;
            if (lVar37 < 0) goto LAB_101653c9c;
            ((undefined8 *)(in_stack_00000248 + lVar27))[1] = uVar31;
            *(undefined8 *)(in_stack_00000248 + lVar27) = plVar28;
            lVar27 = lVar27 + 0x10;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        FUN_100c307cc(&stack0x00000180,unaff_x19 + 0xa30,unaff_x29 + -0xb0,&stack0x00000240);
        if ((CONCAT62(iStack0000000000000182,CONCAT11(cStack0000000000000181,cStack0000000000000180)
                     ) != -0x7ffffffffffffffd) && (-1 < iStack0000000000000182)) {
          func_0x000100cca000(&stack0x00000180);
        }
        if ((bVar25 & 1) != 0) {
          __ZN9codex_tui13resume_picker11PickerState32open_pending_transcript_if_ready17hef885fcfc1bf39f2E
                    (lVar17);
        }
        auVar43 = func_0x000106032954(8);
        puVar12 = auVar43._0_8_;
        lVar17 = *(long *)(unaff_x19 + 0x9b8);
        uVar8 = *(ulong *)(lVar17 + 0x1c0);
        do {
          in_stack_00000250 = in_stack_00000240;
          if ((uVar8 & 1) != 0) goto LAB_1016535a0;
          if (uVar8 == 0xfffffffffffffffe) goto LAB_101653848;
          uVar24 = uVar8 + 2;
          uVar13 = *(ulong *)(lVar17 + 0x1c0);
          bVar32 = uVar13 != uVar8;
          uVar8 = uVar13;
        } while (bVar32);
        *(ulong *)(lVar17 + 0x1c0) = uVar24;
        LOAcquire();
        uVar8 = *(ulong *)(lVar17 + 0x88);
        *(ulong *)(lVar17 + 0x88) = uVar8 + 1;
        lVar11 = func_0x000105217788(lVar17 + 0x80,uVar8);
        *(undefined1 (*) [12])(lVar11 + (uVar8 & 0x1f) * 0x10) = auVar43;
        *(ulong *)(lVar11 + 0x210) = *(ulong *)(lVar11 + 0x210) | 1L << (uVar8 & 0x1f);
        LORelease();
        puVar19 = (ulong *)(lVar17 + 0x110);
        LOAcquire();
        uVar8 = *puVar19;
        *puVar19 = uVar8 | 2;
        LORelease();
        if (uVar8 == 0) {
          lVar11 = *(long *)(lVar17 + 0x100);
          *(undefined8 *)(lVar17 + 0x100) = 0;
          *puVar19 = in_xzr;
          LORelease();
          if (lVar11 != 0) {
            (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x108));
          }
        }
LAB_1016535a0:
        func_0x000100cca000(&stack0x00000220);
      }
    }
    else if (lVar11 == 1) {
      lVar11 = *(long *)(unaff_x19 + 0xb68);
      lVar17 = *(long *)(unaff_x19 + 0xb60);
      in_stack_00000250 = *(ulong *)(unaff_x19 + 0xb58);
      in_stack_00000248 = *puVar19;
      if (uVar8 != 0x8000000000000000) {
        *(ulong *)(unaff_x27 + 0x1b8) = in_stack_00000248;
        *(ulong *)(unaff_x27 + 0x1b0) = uVar8;
        in_stack_00000210 = in_stack_00000250;
      }
      uVar13 = FUN_100e8ed88(*(undefined8 *)(unaff_x19 + 0xa20),*(undefined8 *)(unaff_x19 + 0xa28),
                             unaff_x19 + 0xb60);
      uVar24 = extraout_x11;
      if (*(long *)(unaff_x19 + 0xa10) == 0) {
        __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h0c99567050122bfaE
                  (unaff_x19 + 0xa00,1,unaff_x19 + 0xa20,1);
        uVar24 = extraout_x11_00;
      }
      bVar32 = false;
      lVar27 = 0;
      plVar28 = *(long **)(unaff_x19 + 0xa00);
      uVar23 = *(ulong *)(unaff_x19 + 0xa08);
      bVar25 = (byte)(uVar13 >> 0x38);
      bVar21 = bVar25 >> 1;
      uVar13 = uVar13 & uVar23;
      lVar37 = *(long *)((long)plVar28 + uVar13);
      uVar18 = CONCAT17(-((byte)((ulong)lVar37 >> 0x38) == bVar21),
                        CONCAT16(-((byte)((ulong)lVar37 >> 0x30) == bVar21),
                                 CONCAT15(-((byte)((ulong)lVar37 >> 0x28) == bVar21),
                                          CONCAT14(-((byte)((ulong)lVar37 >> 0x20) == bVar21),
                                                   CONCAT13(-((byte)((ulong)lVar37 >> 0x18) ==
                                                             bVar21),CONCAT12(-((byte)((ulong)lVar37
                                                                                      >> 0x10) ==
                                                                               bVar21),CONCAT11(-((
                                                  byte)((ulong)lVar37 >> 8) == bVar21),
                                                  -((byte)lVar37 == bVar21)))))))) &
               0x8080808080808080;
joined_r0x000101653354:
      while (uVar18 == 0) {
        cVar38 = (char)((ulong)lVar37 >> 8);
        cVar22 = (char)((ulong)lVar37 >> 0x10);
        cVar39 = (char)((ulong)lVar37 >> 0x18);
        cVar40 = (char)((ulong)lVar37 >> 0x20);
        cVar41 = (char)((ulong)lVar37 >> 0x28);
        cVar42 = (char)((ulong)lVar37 >> 0x30);
        if (bVar32) {
LAB_1016533b0:
          bVar36 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar37 >> 0x38) == -1),
                                       CONCAT16(-(cVar42 == -1),
                                                CONCAT15(-(cVar41 == -1),
                                                         CONCAT14(-(cVar40 == -1),
                                                                  CONCAT13(-(cVar39 == -1),
                                                                           CONCAT12(-(cVar22 == -1),
                                                                                    CONCAT11(-(
                                                  cVar38 == -1),-((char)lVar37 == -1)))))))),1);
          if ((bVar36 & 1) != 0) {
            uVar13 = (ulong)*(char *)((long)plVar28 + uVar24);
            if (-1 < *(char *)((long)plVar28 + uVar24)) {
              lVar27 = *plVar28;
              uVar24 = CONCAT17(-(lVar27 < 0),
                                CONCAT16(-((char)((ulong)lVar27 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar27 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar27 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar27 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar27 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar27 >> 8) < '\0'),
                                                           -((char)lVar27 < '\0'))))))));
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              uVar13 = (ulong)*(byte *)((long)plVar28 + uVar24);
            }
            *(byte *)((long)plVar28 + uVar24) = bVar25 >> 1;
            *(byte *)((long)plVar28 + (uVar24 - 8 & uVar23) + 8) = bVar25 >> 1;
            *(long *)(unaff_x19 + 0xa18) = *(long *)(unaff_x19 + 0xa18) + 1;
            *(long *)(unaff_x19 + 0xa10) = *(long *)(unaff_x19 + 0xa10) - (uVar13 & 1);
            plVar28[uVar24 * -5 + -5] = lVar17;
            plVar28[uVar24 * -5 + -4] = lVar11;
            lVar17 = *(long *)(unaff_x27 + 0x1b0);
            plVar28[uVar24 * -5 + -2] = *(long *)(unaff_x27 + 0x1b8);
            plVar28[uVar24 * -5 + -3] = lVar17;
            plVar28[uVar24 * -5 + -1] = in_stack_00000210;
            goto LAB_1016536e0;
          }
          bVar32 = true;
        }
        else {
          uVar24 = CONCAT17(-(lVar37 < 0),
                            CONCAT16(-(cVar42 < '\0'),
                                     CONCAT15(-(cVar41 < '\0'),
                                              CONCAT14(-(cVar40 < '\0'),
                                                       CONCAT13(-(cVar39 < '\0'),
                                                                CONCAT12(-(cVar22 < '\0'),
                                                                         CONCAT11(-(cVar38 < '\0'),
                                                                                  -((char)lVar37 <
                                                                                   '\0'))))))));
          if (uVar24 != 0) {
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = uVar13 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) & uVar23;
            goto LAB_1016533b0;
          }
          bVar32 = false;
          uVar24 = 0;
        }
        lVar27 = lVar27 + 8;
        uVar13 = lVar27 + uVar13 & uVar23;
        lVar37 = *(long *)((long)plVar28 + uVar13);
        uVar18 = CONCAT17(-((byte)((ulong)lVar37 >> 0x38) == bVar21),
                          CONCAT16(-((byte)((ulong)lVar37 >> 0x30) == bVar21),
                                   CONCAT15(-((byte)((ulong)lVar37 >> 0x28) == bVar21),
                                            CONCAT14(-((byte)((ulong)lVar37 >> 0x20) == bVar21),
                                                     CONCAT13(-((byte)((ulong)lVar37 >> 0x18) ==
                                                               bVar21),CONCAT12(-((byte)((ulong)
                                                  lVar37 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)lVar37 >> 8) == bVar21),
                                                           -((byte)lVar37 == bVar21)))))))) &
                 0x8080808080808080;
      }
      uVar26 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar13 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3) & uVar23;
      if (lVar11 != plVar28[uVar26 * -5 + -4] || lVar17 != plVar28[uVar26 * -5 + -5]) {
        uVar18 = uVar18 - 1 & uVar18;
        goto joined_r0x000101653354;
      }
      lVar17 = plVar28[uVar26 * -5 + -3];
      lVar11 = plVar28[uVar26 * -5 + -2];
      lVar27 = plVar28[uVar26 * -5 + -1];
      lVar37 = *(long *)(unaff_x27 + 0x1b0);
      plVar28[uVar26 * -5 + -2] = *(long *)(unaff_x27 + 0x1b8);
      plVar28[uVar26 * -5 + -3] = lVar37;
      plVar28[uVar26 * -5 + -1] = in_stack_00000210;
      if ((lVar17 != -0x7ffffffffffffffd) && (-1 < lVar17)) {
        if (lVar27 != 0) {
          puVar12 = (undefined8 *)(lVar11 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 4;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (lVar17 != 0) {
          _free(lVar11);
        }
      }
LAB_1016536e0:
      auVar43 = func_0x000106032954(8);
      puVar12 = auVar43._0_8_;
      lVar17 = *(long *)(unaff_x19 + 0x9b8);
      uVar24 = *(ulong *)(lVar17 + 0x1c0);
      do {
        in_stack_00000240 = uVar8;
        if ((uVar24 & 1) != 0) goto LAB_101653784;
        if (uVar24 == 0xfffffffffffffffe) goto LAB_101653848;
        uVar13 = uVar24 + 2;
        uVar18 = *(ulong *)(lVar17 + 0x1c0);
        bVar32 = uVar18 != uVar24;
        uVar24 = uVar18;
      } while (bVar32);
      *(ulong *)(lVar17 + 0x1c0) = uVar13;
      LOAcquire();
      uVar24 = *(ulong *)(lVar17 + 0x88);
      *(ulong *)(lVar17 + 0x88) = uVar24 + 1;
      lVar11 = func_0x000105217788(lVar17 + 0x80,uVar24);
      *(undefined1 (*) [12])(lVar11 + (uVar24 & 0x1f) * 0x10) = auVar43;
      *(ulong *)(lVar11 + 0x210) = *(ulong *)(lVar11 + 0x210) | 1L << (uVar24 & 0x1f);
      LORelease();
      puVar19 = (ulong *)(lVar17 + 0x110);
      LOAcquire();
      uVar24 = *puVar19;
      *puVar19 = uVar24 | 2;
      LORelease();
      if (uVar24 == 0) {
        lVar11 = *(long *)(lVar17 + 0x100);
        *(undefined8 *)(lVar17 + 0x100) = 0;
        *puVar19 = in_xzr;
        LORelease();
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar17 + 0x108));
        }
      }
LAB_101653784:
      if ((uVar8 == 0x8000000000000000) && ((in_stack_00000248 & 3) == 1)) {
        puVar30 = (undefined8 *)(in_stack_00000248 - 1);
        uVar31 = *puVar30;
        puVar12 = *(undefined8 **)(in_stack_00000248 + 7);
        if ((code *)*puVar12 != (code *)0x0) {
          (*(code *)*puVar12)(uVar31);
        }
        goto LAB_1016537b8;
      }
    }
    else {
      in_stack_00000248 = *(ulong *)(unaff_x19 + 0xb58);
      in_stack_00000240 = *puVar19;
      in_stack_00000258 = *(ulong *)(unaff_x19 + 0xb68);
      in_stack_00000250 = *(ulong *)(unaff_x19 + 0xb60);
      puVar30 = *(undefined8 **)(unaff_x19 + 0xb70);
      uVar24 = *(ulong *)(unaff_x19 + 0x518);
      if ((uVar24 == 2) || (*(long *)(unaff_x19 + 0x528) != *(long *)(unaff_x19 + 0xb90))) {
        if (in_stack_00000240 == 0x8000000000000000) {
          if ((in_stack_00000248 & 3) == 1) {
            puVar30 = (undefined8 *)(in_stack_00000248 - 1);
            uVar31 = *puVar30;
            puVar12 = *(undefined8 **)(in_stack_00000248 + 7);
            if ((code *)*puVar12 != (code *)0x0) {
              (*(code *)*puVar12)(uVar31);
            }
            goto LAB_1016537b8;
          }
        }
        else {
          FUN_100e33b40(&stack0x00000240);
          if ((in_stack_00000258 & 0x7fffffffffffffff) != 0) goto LAB_1016537c8;
        }
      }
      else {
        uVar13 = *(ulong *)(unaff_x19 + 0x520);
        *(undefined8 *)(unaff_x19 + 0x518) = 2;
        if (in_stack_00000240 == 0x8000000000000000) {
          in_stack_00000010 = FUN_100e9fa98(in_stack_00000248,&UNK_10b224028);
          *(undefined1 *)(unaff_x19 + 0xba0) = 1;
          lVar17 = 4;
          lVar11 = *(ulong *)(unaff_x19 + 0xad8) - 5;
          if (*(ulong *)(unaff_x19 + 0xad8) < 5) {
            lVar11 = 1;
          }
          goto joined_r0x000101653b24;
        }
        uStack0000000000000060 = (undefined4)in_stack_00000250;
        uStack0000000000000064 = (undefined2)(in_stack_00000250 >> 0x20);
        uStack0000000000000066 = (undefined2)(in_stack_00000250 >> 0x30);
        uStack0000000000000088 = (undefined1)*(undefined8 *)(unaff_x19 + 0xb88);
        uStack0000000000000089 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0xb88) >> 8);
        bStack0000000000000080 = (byte)*(undefined8 *)(unaff_x19 + 0xb80);
        uStack0000000000000081 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0xb80) >> 8);
        uStack0000000000000058 = (undefined4)in_stack_00000248;
        uStack000000000000005c = (undefined2)(in_stack_00000248 >> 0x20);
        uStack000000000000005e = (undefined2)(in_stack_00000248 >> 0x30);
        in_stack_00000050 = in_stack_00000240;
        in_stack_00000068 = in_stack_00000258;
        in_stack_00000070 = puVar30;
        in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0xb78);
        __ZN9codex_tui13resume_picker11PickerState11ingest_page17h6d55f1a6e843d905E
                  (lVar17,&stack0x00000050);
        __ZN9codex_tui13resume_picker11PickerState26complete_pending_page_down17hbcbbc4a0ac807e19E
                  (lVar17);
        if (*(int *)(unaff_x19 + 0x4f8) == 1) {
          if ((uVar24 & 1) == 0) {
            uVar13 = uVar8;
          }
          if (((((uint)uVar24 | (uint)lVar27) & 1) == 0) ||
             (uVar13 == *(ulong *)(unaff_x19 + 0x500))) {
            if ((*(long *)(unaff_x19 + 0x728) == 0) &&
               (((*(byte *)(unaff_x19 + 0x550) & 1) == 0 &&
                (*(long *)(unaff_x19 + 0x530) != -0x8000000000000000)))) {
              __ZN9codex_tui13resume_picker11PickerState19load_more_if_needed17hc99e7e3a43ca6febE
                        (lVar17,1);
            }
            else {
              *(undefined8 *)(unaff_x19 + 0x4f8) = 0;
            }
          }
        }
      }
    }
    *(undefined1 *)(unaff_x19 + 0xba0) = 1;
    lVar17 = *(ulong *)(unaff_x19 + 0xad8) - 5;
    if (*(ulong *)(unaff_x19 + 0xad8) < 5) {
      lVar17 = 1;
    }
  } while( true );
  *(undefined2 *)(unaff_x19 + 0xb34) = 0;
  if (*(long *)(unaff_x19 + 0xad8) == 5) {
LAB_1016529cc:
    *(undefined1 *)(unaff_x19 + 0xb32) = 0;
  }
  goto LAB_1016529d0;
  while( true ) {
    iVar9 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if (iVar9 != 0) break;
LAB_101651748:
    if (lVar11 == 0) {
      *puVar12 = 0;
      cVar38 = *(char *)(unaff_x19 + 0xb68);
      bVar25 = *(byte *)(unaff_x19 + 0xb70);
      goto joined_r0x000101651794;
    }
  }
  cVar38 = *(char *)(unaff_x19 + 0xb68);
  bVar25 = *(byte *)(unaff_x19 + 0xb70);
joined_r0x000101651794:
  bVar32 = false;
  if (cVar38 == '\x0f') {
    uVar10 = *(uint *)(unaff_x19 + 0xb6c);
    bVar32 = 0x1f < uVar10 && (uVar10 != 0x7f && (bVar25 & 6) == 0);
    lVar17 = 3;
    if (uVar10 == 99 && (bVar25 & 2) != 0) goto LAB_101652450;
  }
  puVar12 = (undefined8 *)*unaff_x23;
  in_stack_00000050 = *puVar19;
  uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
  lVar11 = puVar12[0x87] * 0xc;
  lVar17 = puVar12[0x86];
  while (lVar11 != 0) {
    uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if ((uVar8 & 1) != 0) {
      if (puVar12[0x4b] == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = 4;
        __ZN9codex_tui13resume_picker11PickerState32clear_query_preserving_selection17h660de1246d1bbaf6E
                  (puVar12);
      }
      goto LAB_101652450;
    }
  }
  if (cVar38 == '\x0f') {
    iVar9 = *(int *)(unaff_x19 + 0xb6c);
    if (iVar9 < 0x65) {
      if (iVar9 == 5) {
        if (bVar25 == 0) {
          lVar17 = 4;
          func_0x000105486e3c(puVar12);
          goto LAB_101652450;
        }
      }
      else if (iVar9 == 0xf) {
        if (bVar25 == 0) {
          *(undefined8 **)(unaff_x19 + 0xb88) = puVar12;
          *(undefined1 *)(unaff_x19 + 0xc00) = 0;
          uVar8 = FUN_101650abc(unaff_x19 + 0xb88,in_stack_00000020);
          if ((uVar8 & 1) == 0) {
            lVar17 = 4;
            if ((*(char *)(unaff_x19 + 0xc00) == '\x03') &&
               (lVar17 = 4, *(char *)(unaff_x19 + 0xbf8) == '\x03')) {
              lVar17 = 4;
              FUN_100c9cc4c(unaff_x19 + 0xba0);
            }
            goto LAB_101652450;
          }
          uVar16 = 4;
          goto LAB_1016524f0;
        }
      }
      else if ((iVar9 == 0x14) && (bVar25 == 0)) {
        lVar17 = 4;
        __ZN9codex_tui13resume_picker11PickerState24open_selected_transcript17hf2278971458375a1E
                  (puVar12);
        goto LAB_101652450;
      }
    }
    else if (iVar9 == 0x65) {
      if ((bVar25 >> 1 & 1) != 0) {
        lVar17 = 4;
        func_0x000105486e3c(puVar12);
        goto LAB_101652450;
      }
    }
    else if (iVar9 == 0x6f) {
      if ((bVar25 >> 1 & 1) != 0) {
        *(undefined8 **)(unaff_x19 + 0xb88) = puVar12;
        *(undefined1 *)(unaff_x19 + 0xc00) = 0;
        uVar8 = FUN_101650abc(unaff_x19 + 0xb88,in_stack_00000020);
        if ((uVar8 & 1) == 0) {
          lVar17 = 4;
          if ((*(char *)(unaff_x19 + 0xc00) == '\x03') &&
             (lVar17 = 4, *(char *)(unaff_x19 + 0xbf8) == '\x03')) {
            lVar17 = 4;
            FUN_100c9cc4c(unaff_x19 + 0xba0);
          }
          goto LAB_101652450;
        }
        uVar16 = 3;
LAB_1016524f0:
        *in_stack_00000030 = uVar16;
        *in_stack_00000028 = 5;
        uVar16 = 4;
        goto LAB_101653ba0;
      }
    }
    else if ((iVar9 == 0x74) && ((bVar25 >> 1 & 1) != 0)) {
      lVar17 = 4;
      __ZN9codex_tui13resume_picker11PickerState24open_selected_transcript17hf2278971458375a1E
                (puVar12);
      goto LAB_101652450;
    }
  }
  in_stack_00000050 = *puVar19;
  uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
  lVar11 = puVar12[0x84] * 0xc;
  lVar17 = puVar12[0x83];
  while (lVar11 != 0) {
    uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if ((uVar8 & 1) != 0) {
      lVar17 = 4;
      if ((ulong)puVar12[0x48] <= (ulong)puVar12[0xaf]) goto LAB_101652450;
      lVar17 = puVar12[0x47] + puVar12[0xaf] * 0xa8;
      if (*(long *)(lVar17 + 0x18) == -0x8000000000000000) {
        *(undefined8 *)(unaff_x19 + 0xb88) = 0x8000000000000000;
        *(undefined2 *)(unaff_x19 + 0xb80) = 0x101;
        if (*(char *)(lVar17 + 0x90) == '\x01') {
LAB_101651df4:
          uVar13 = *(ulong *)(lVar17 + 0x91);
          uVar18 = *(ulong *)(lVar17 + 0x99);
LAB_1016522a8:
          in_stack_00000258 = uVar18;
          in_stack_00000250 = uVar13;
          in_stack_00000010 = *(long *)(unaff_x19 + 0xb88);
          in_stack_00000248 = *(ulong *)(unaff_x19 + 0xb98);
          in_stack_00000240 = *(ulong *)(unaff_x19 + 0xb90);
          lVar17 = 1;
          if (*(char *)(*(long *)(unaff_x19 + 0xb58) + 0x5ae) != '\0') {
            lVar17 = 2;
          }
          *(undefined2 *)(unaff_x19 + 0xb80) = 0;
          goto LAB_101652450;
        }
      }
      else {
        uVar31 = *(undefined8 *)(lVar17 + 0x20);
        lVar11 = *(long *)(lVar17 + 0x28);
        lVar27 = 1;
        if ((lVar11 != 0) && (lVar27 = _malloc(lVar11), lVar27 == 0)) {
          func_0x0001087c9084(1,lVar11);
          goto LAB_101653c9c;
        }
        _memcpy(lVar27,uVar31,lVar11);
        *(long *)(unaff_x19 + 0xb88) = lVar11;
        *(long *)(unaff_x19 + 0xb90) = lVar27;
        *(long *)(unaff_x19 + 0xb98) = lVar11;
        *(undefined2 *)(unaff_x19 + 0xb80) = 0x101;
        if ((*(byte *)(lVar17 + 0x90) & 1) != 0) goto LAB_101651df4;
        if (lVar11 == -0x8000000000000000) goto LAB_1016522e8;
        *(long *)(unaff_x19 + 0xba0) = lVar27;
        *(long *)(unaff_x19 + 0xba8) = lVar11;
        *(undefined8 *)(unaff_x19 + 0xbb0) = 0;
        puVar1 = (undefined1 *)(unaff_x19 + 0xd20);
        *(undefined1 *)(unaff_x19 + 0xd20) = 0;
        *(long *)(unaff_x19 + 0xbd0) = lVar27;
        *(long *)(unaff_x19 + 0xbd8) = lVar11;
        *(undefined1 *)(unaff_x19 + 0xbe3) = 0;
        FUN_10165523c(&stack0x00000050,unaff_x19 + 0xbc0,in_stack_00000020);
        bVar25 = bStack0000000000000080;
        puVar12 = in_stack_00000070;
        uVar24 = in_stack_00000068;
        uVar8 = in_stack_00000050;
        if (in_stack_00000050 == 0x8000000000000002) {
          *puVar1 = 3;
LAB_1016524ec:
          uVar16 = 5;
          goto LAB_1016524f0;
        }
        uVar5 = CONCAT24(uStack000000000000005c,uStack0000000000000058);
        lVar17 = CONCAT26(uStack000000000000005e,uVar5);
        uVar18 = CONCAT17(in_stack_00000090,uStack0000000000000089);
        uVar13 = CONCAT17(uStack0000000000000088,uStack0000000000000081);
        FUN_100ca3844(unaff_x19 + 0xbc0);
        if ((uVar8 == 0x8000000000000000) || (uVar8 == 0)) {
LAB_10165226c:
          if ((uVar24 & 0x7fffffffffffffff) != 0) {
            _free(puVar12);
          }
          *puVar1 = 1;
          if (bVar25 == 2) goto LAB_1016524ec;
          if ((bVar25 & 1) != 0) goto LAB_1016522a8;
        }
        else {
          if (uVar8 != 0x8000000000000001) {
            _free(lVar17);
            goto LAB_10165226c;
          }
          if (((ulong)uVar5 & 3) == 1) {
            uVar31 = *(undefined8 *)(lVar17 + -1);
            puVar12 = *(undefined8 **)(lVar17 + 7);
            pcVar7 = (code *)*puVar12;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(uVar31);
            }
            if (puVar12[1] != 0) {
              _free(uVar31);
            }
            _free((undefined8 *)(lVar17 + -1));
          }
          *puVar1 = 1;
        }
        unaff_x22 = *(long *)(unaff_x19 + 0xb88);
        if (unaff_x22 != -0x8000000000000000) {
          *(undefined1 *)(unaff_x19 + 0xb81) = 0;
          unaff_x25 = *(undefined8 *)(unaff_x19 + 0xb90);
          uVar31 = *(undefined8 *)(unaff_x19 + 0xb98);
          *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x25;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar31;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xb0;
          *(undefined **)(unaff_x29 + -0x68) =
               &
               __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
          ;
          goto code_r0x000101652344;
        }
      }
LAB_1016522e8:
      puVar12 = (undefined8 *)_malloc(0x35);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x35);
LAB_101653c9c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101653ca0);
        (*pcVar7)();
      }
      puVar12[1] = 0x732064616572206f;
      *puVar12 = 0x742064656c696146;
      puVar12[3] = 0x2061746164617465;
      puVar12[2] = 0x6d206e6f69737365;
      puVar12[5] = 0x6573206465746365;
      puVar12[4] = 0x6c6573206d6f7266;
      *(undefined8 *)((long)puVar12 + 0x2d) = 0x6e6f697373657320;
      uVar8 = 0x35;
      uVar31 = 0x35;
      goto LAB_10165236c;
    }
  }
  if (!bVar32) {
    in_stack_00000050 = *puVar19;
    uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
    lVar11 = puVar12[0x6c] * 0xc;
    lVar17 = puVar12[0x6b];
    do {
      if (lVar11 == 0) {
        in_stack_00000050 = *puVar19;
        uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
        lVar11 = puVar12[0x6f] * 0xc;
        lVar17 = puVar12[0x6e];
        goto LAB_101651c64;
      }
      iVar9 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                        (lVar17,&stack0x00000050);
      lVar11 = lVar11 + -0xc;
      lVar17 = lVar17 + 0xc;
    } while (iVar9 == 0);
    if (puVar12[0xaf] != 0) {
      puVar12[0xaf] = puVar12[0xaf] + -1;
      lVar17 = *unaff_x23;
      if (*(ulong *)(lVar17 + 0x240) == 0) {
        *(undefined8 *)(lVar17 + 0x580) = 0;
      }
      else {
        uVar8 = *(ulong *)(lVar17 + 0x28);
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        if (*(int *)(lVar17 + 0x20) == 0) {
          uVar8 = 0xffffffffffffffff;
        }
        uVar13 = *(ulong *)(lVar17 + 0x578);
        uVar24 = *(ulong *)(lVar17 + 0x580);
        if (uVar13 < *(ulong *)(lVar17 + 0x580)) {
          *(ulong *)(lVar17 + 0x580) = uVar13;
          uVar24 = uVar13;
        }
        uVar20 = (ulong)(uVar13 + 1 < *(ulong *)(lVar17 + 0x240) ||
                        *(long *)(lVar17 + 0x48) != -0x8000000000000000);
        uVar23 = FUN_105486678(lVar17,uVar24,uVar13);
        uVar26 = uVar8 - (uVar24 != 0);
        uVar18 = 0;
        if (uVar20 <= uVar26) {
          uVar18 = uVar26 - uVar20;
        }
        if (uVar18 < 2) {
          uVar18 = 1;
        }
        if ((uVar24 < uVar13) && (uVar18 < uVar23)) {
          uVar18 = 0;
          if (uVar20 <= uVar8 - 1) {
            uVar18 = (uVar8 - 1) - uVar20;
          }
          if (uVar18 < 2) {
            uVar18 = 1;
          }
          do {
            uVar24 = uVar24 + 1;
            *(ulong *)(lVar17 + 0x580) = uVar24;
            uVar8 = FUN_105486678(lVar17,uVar24,uVar13);
            if (uVar13 <= uVar24) break;
          } while (uVar18 < uVar8);
        }
      }
      puVar12 = (undefined8 *)*unaff_x23;
    }
    auVar43 = func_0x000106032954(8);
    lVar11 = puVar12[0x9a];
    lVar17 = 4;
    uVar8 = *(ulong *)(lVar11 + 0x1c0);
    while( true ) {
      if ((uVar8 & 1) != 0) goto LAB_101652450;
      if (uVar8 == 0xfffffffffffffffe) break;
      uVar24 = uVar8 + 2;
      uVar13 = *(ulong *)(lVar11 + 0x1c0);
      bVar32 = uVar13 == uVar8;
      uVar8 = uVar13;
      if (bVar32) {
        *(ulong *)(lVar11 + 0x1c0) = uVar24;
        LOAcquire();
        uVar8 = *(ulong *)(lVar11 + 0x88);
        *(ulong *)(lVar11 + 0x88) = uVar8 + 1;
        lVar17 = func_0x000105217788(lVar11 + 0x80,uVar8);
        *(undefined1 (*) [12])(lVar17 + (uVar8 & 0x1f) * 0x10) = auVar43;
        *(ulong *)(lVar17 + 0x210) = *(ulong *)(lVar17 + 0x210) | 1L << (uVar8 & 0x1f);
        LORelease();
        puVar19 = (ulong *)(lVar11 + 0x110);
        LOAcquire();
        uVar8 = *puVar19;
        *puVar19 = uVar8 | 2;
        LORelease();
        lVar17 = 4;
        if (uVar8 == 0) {
          lVar27 = *(long *)(lVar11 + 0x100);
          *(undefined8 *)(lVar11 + 0x100) = 0;
          *puVar19 = in_xzr;
          LORelease();
          lVar17 = 4;
          if (lVar27 != 0) {
            lVar17 = 4;
            (**(code **)(lVar27 + 8))(*(undefined8 *)(lVar11 + 0x108));
          }
        }
        goto LAB_101652450;
      }
    }
    goto LAB_101653848;
  }
LAB_101651a48:
  if (cVar38 == '\n') {
    *(byte *)((long)puVar12 + 0x5ab) = *(byte *)((long)puVar12 + 0x5ab) ^ 1;
    lVar17 = *unaff_x23;
    auVar43 = func_0x000106032954(8);
    puVar12 = auVar43._0_8_;
    lVar11 = *(long *)(lVar17 + 0x4d0);
    lVar17 = 4;
    uVar8 = *(ulong *)(lVar11 + 0x1c0);
    while( true ) {
      if ((uVar8 & 1) != 0) goto LAB_101652450;
      if (uVar8 == 0xfffffffffffffffe) break;
      uVar24 = uVar8 + 2;
      uVar13 = *(ulong *)(lVar11 + 0x1c0);
      bVar32 = uVar13 == uVar8;
      uVar8 = uVar13;
      if (bVar32) {
        *(ulong *)(lVar11 + 0x1c0) = uVar24;
        LOAcquire();
        uVar8 = *(ulong *)(lVar11 + 0x88);
        *(ulong *)(lVar11 + 0x88) = uVar8 + 1;
        lVar17 = func_0x000105217788(lVar11 + 0x80,uVar8);
        *(undefined1 (*) [12])(lVar17 + (uVar8 & 0x1f) * 0x10) = auVar43;
        *(ulong *)(lVar17 + 0x210) = *(ulong *)(lVar17 + 0x210) | 1L << (uVar8 & 0x1f);
        LORelease();
        puVar19 = (ulong *)(lVar11 + 0x110);
        LOAcquire();
        uVar8 = *puVar19;
        *puVar19 = uVar8 | 2;
        LORelease();
        lVar17 = 4;
        if (uVar8 == 0) {
          lVar27 = *(long *)(lVar11 + 0x100);
          *(undefined8 *)(lVar11 + 0x100) = 0;
          *puVar19 = in_xzr;
          LORelease();
          lVar17 = 4;
          if (lVar27 != 0) {
            lVar17 = 4;
            (**(code **)(lVar27 + 8))(*(undefined8 *)(lVar11 + 0x108));
          }
        }
        goto LAB_101652450;
      }
    }
  }
  else {
    if (cVar38 != '\v') {
      if (bVar32) goto LAB_101651ecc;
      in_stack_00000050 = *puVar19;
      uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
      lVar11 = puVar12[0x72] * 0xc;
      lVar17 = puVar12[0x71];
      goto LAB_101652060;
    }
    *(byte *)((long)puVar12 + 0x5ab) = *(byte *)((long)puVar12 + 0x5ab) ^ 1;
    lVar17 = *unaff_x23;
    auVar43 = func_0x000106032954(8);
    puVar12 = auVar43._0_8_;
    lVar11 = *(long *)(lVar17 + 0x4d0);
    lVar17 = 4;
    uVar8 = *(ulong *)(lVar11 + 0x1c0);
    while( true ) {
      if ((uVar8 & 1) != 0) goto LAB_101652450;
      if (uVar8 == 0xfffffffffffffffe) break;
      uVar24 = uVar8 + 2;
      uVar13 = *(ulong *)(lVar11 + 0x1c0);
      bVar32 = uVar13 == uVar8;
      uVar8 = uVar13;
      if (bVar32) {
        *(ulong *)(lVar11 + 0x1c0) = uVar24;
        LOAcquire();
        uVar8 = *(ulong *)(lVar11 + 0x88);
        *(ulong *)(lVar11 + 0x88) = uVar8 + 1;
        lVar17 = func_0x000105217788(lVar11 + 0x80,uVar8);
        *(undefined1 (*) [12])(lVar17 + (uVar8 & 0x1f) * 0x10) = auVar43;
        *(ulong *)(lVar17 + 0x210) = *(ulong *)(lVar17 + 0x210) | 1L << (uVar8 & 0x1f);
        LORelease();
        puVar19 = (ulong *)(lVar11 + 0x110);
        LOAcquire();
        uVar8 = *puVar19;
        *puVar19 = uVar8 | 2;
        LORelease();
        lVar17 = 4;
        if (uVar8 == 0) {
          lVar27 = *(long *)(lVar11 + 0x100);
          *(undefined8 *)(lVar11 + 0x100) = 0;
          *puVar19 = in_xzr;
          LORelease();
          lVar17 = 4;
          if (lVar27 != 0) {
            lVar17 = 4;
            (**(code **)(lVar27 + 8))(*(undefined8 *)(lVar11 + 0x108));
          }
        }
        goto LAB_101652450;
      }
    }
  }
LAB_101653848:
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  puVar19 = extraout_x8;
LAB_10165384c:
  *(undefined1 *)(unaff_x19 + 0xb35) = 0;
  uVar8 = *puVar19;
  *(ulong *)(unaff_x27 + 0x178) = puVar19[1];
  *(ulong *)(unaff_x27 + 0x170) = uVar8;
  in_stack_000001d0 = puVar19[2];
  __ZN9codex_tui13resume_picker11PickerState12handle_paste17hf6d837d544dddee3E
            (puVar12,&stack0x000001c0);
  goto LAB_10165247c;
  while( true ) {
    uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if ((uVar8 & 1) != 0) break;
LAB_101651c64:
    if (lVar11 == 0) {
      in_stack_00000050 = *puVar19;
      uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
      lVar11 = puVar12[0x78] * 0xc;
      lVar17 = puVar12[0x77];
      goto LAB_101651f4c;
    }
  }
  if (puVar12[0xaf] + 1 < (ulong)puVar12[0x48]) {
    puVar12[0xaf] = puVar12[0xaf] + 1;
    __ZN9codex_tui13resume_picker11PickerState23ensure_selected_visible17h89835f40d6d0e283E
              (*unaff_x23);
    puVar12 = (undefined8 *)*unaff_x23;
  }
  if (((puVar12[6] == 2) && (puVar12[9] != -0x8000000000000000)) &&
     (uVar8 = puVar12[0x48], uVar8 != 0)) {
    uVar24 = 0;
    if (puVar12[0xaf] + 1 <= uVar8) {
      uVar24 = uVar8 - (puVar12[0xaf] + 1);
    }
    if (uVar24 < 6) {
      __ZN9codex_tui13resume_picker11PickerState19load_more_if_needed17hc99e7e3a43ca6febE(puVar12,0)
      ;
      puVar12 = (undefined8 *)*unaff_x23;
    }
  }
  auVar43 = func_0x000106032954(8);
  lVar11 = puVar12[0x9a];
  lVar17 = 4;
  uVar8 = *(ulong *)(lVar11 + 0x1c0);
  while( true ) {
    if ((uVar8 & 1) != 0) goto LAB_101652450;
    if (uVar8 == 0xfffffffffffffffe) break;
    uVar24 = uVar8 + 2;
    uVar13 = *(ulong *)(lVar11 + 0x1c0);
    bVar32 = uVar13 == uVar8;
    uVar8 = uVar13;
    if (bVar32) {
      *(ulong *)(lVar11 + 0x1c0) = uVar24;
      LOAcquire();
      uVar8 = *(ulong *)(lVar11 + 0x88);
      *(ulong *)(lVar11 + 0x88) = uVar8 + 1;
      lVar17 = func_0x000105217788(lVar11 + 0x80,uVar8);
      *(undefined1 (*) [12])(lVar17 + (uVar8 & 0x1f) * 0x10) = auVar43;
      *(ulong *)(lVar17 + 0x210) = *(ulong *)(lVar17 + 0x210) | 1L << (uVar8 & 0x1f);
      LORelease();
      puVar19 = (ulong *)(lVar11 + 0x110);
      LOAcquire();
      uVar8 = *puVar19;
      *puVar19 = uVar8 | 2;
      LORelease();
      lVar17 = 4;
      if (uVar8 == 0) {
        lVar27 = *(long *)(lVar11 + 0x100);
        *(undefined8 *)(lVar11 + 0x100) = 0;
        *puVar19 = in_xzr;
        LORelease();
        lVar17 = 4;
        if (lVar27 != 0) {
          lVar17 = 4;
          (**(code **)(lVar27 + 8))(*(undefined8 *)(lVar11 + 0x108));
        }
      }
      goto LAB_101652450;
    }
  }
  goto LAB_101653848;
LAB_101651f4c:
  if (lVar11 == 0) goto LAB_101652084;
  uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE(lVar17,&stack0x00000050);
  lVar11 = lVar11 + -0xc;
  lVar17 = lVar17 + 0xc;
  if ((uVar8 & 1) != 0) {
    uVar8 = puVar12[0xaf];
    lVar17 = 4;
    if (uVar8 != 0) {
      uVar24 = puVar12[5];
      if (uVar24 < 2) {
        uVar24 = 1;
      }
      if (*(int *)(puVar12 + 4) == 0) {
        uVar24 = 10;
      }
      lVar17 = 0;
      if (uVar24 <= uVar8) {
        lVar17 = uVar8 - uVar24;
      }
      puVar12[0xaf] = lVar17;
      __ZN9codex_tui13resume_picker11PickerState23ensure_selected_visible17h89835f40d6d0e283E
                (*unaff_x23);
      lVar17 = 4;
      __ZN9codex_tui13resume_picker11PickerState13request_frame17h803ca34a29cb8f15E(*unaff_x23);
    }
    goto LAB_101652450;
  }
  goto LAB_101651f4c;
LAB_101652084:
  in_stack_00000050 = *puVar19;
  uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
  lVar11 = puVar12[0x7e] * 0xc;
  lVar17 = puVar12[0x7d];
  while (lVar11 != 0) {
    uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if ((uVar8 & 1) != 0) {
      lVar17 = 4;
      if (puVar12[0x48] != 0) {
        puVar12[0xaf] = 0;
        __ZN9codex_tui13resume_picker11PickerState23ensure_selected_visible17h89835f40d6d0e283E
                  (*unaff_x23);
        lVar17 = 4;
        __ZN9codex_tui13resume_picker11PickerState13request_frame17h803ca34a29cb8f15E(*unaff_x23);
      }
      goto LAB_101652450;
    }
  }
  in_stack_00000050 = *puVar19;
  uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
  lVar11 = puVar12[0x81] * 0xc;
  lVar17 = puVar12[0x80];
  while (lVar11 != 0) {
    uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if ((uVar8 & 1) != 0) {
      lVar17 = 4;
      if (puVar12[0x48] != 0) {
        puVar12[0xaf] = puVar12[0x48] + -1;
        __ZN9codex_tui13resume_picker11PickerState23ensure_selected_visible17h89835f40d6d0e283E
                  (*unaff_x23);
        __ZN9codex_tui13resume_picker11PickerState26maybe_load_more_for_scroll17ha95bb70574b9eab8E
                  (*unaff_x23);
        lVar17 = 4;
        __ZN9codex_tui13resume_picker11PickerState13request_frame17h803ca34a29cb8f15E(*unaff_x23);
      }
      goto LAB_101652450;
    }
  }
  in_stack_00000050 = *puVar19;
  uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
  lVar11 = puVar12[0x7b] * 0xc;
  lVar17 = puVar12[0x7a];
  while (lVar11 != 0) {
    uVar8 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if ((uVar8 & 1) != 0) {
      lVar17 = 4;
      if (puVar12[0x48] != 0) {
        uVar8 = puVar12[5];
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        if (*(int *)(puVar12 + 4) == 0) {
          uVar8 = 10;
        }
        uVar24 = puVar12[0xaf] + uVar8;
        if (CARRY8(puVar12[0xaf],uVar8)) {
          uVar24 = 0xffffffffffffffff;
        }
        uVar8 = puVar12[0x48] - 1;
        if ((uVar8 < uVar24) && (puVar12[9] != -0x8000000000000000)) {
          *puVar12 = 1;
          puVar12[1] = uVar24;
          __ZN9codex_tui13resume_picker11PickerState19load_more_if_needed17hc99e7e3a43ca6febE
                    (*unaff_x23,0);
        }
        else {
          if (uVar24 <= uVar8) {
            uVar8 = uVar24;
          }
          puVar12[0xaf] = uVar8;
          __ZN9codex_tui13resume_picker11PickerState23ensure_selected_visible17h89835f40d6d0e283E
                    (*unaff_x23);
          __ZN9codex_tui13resume_picker11PickerState26maybe_load_more_for_scroll17ha95bb70574b9eab8E
                    (*unaff_x23);
        }
        lVar17 = 4;
        __ZN9codex_tui13resume_picker11PickerState13request_frame17h803ca34a29cb8f15E(*unaff_x23);
      }
      goto LAB_101652450;
    }
  }
  goto LAB_101651a48;
  while( true ) {
    iVar9 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if (iVar9 != 0) break;
LAB_101652060:
    if (lVar11 == 0) {
      in_stack_00000050 = *puVar19;
      uStack0000000000000058 = *(undefined4 *)(unaff_x19 + 0xb70);
      lVar11 = puVar12[0x75] * 0xc;
      lVar17 = puVar12[0x74];
      goto LAB_10165252c;
    }
  }
  goto LAB_10165254c;
  while( true ) {
    iVar9 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                      (lVar17,&stack0x00000050);
    lVar11 = lVar11 + -0xc;
    lVar17 = lVar17 + 0xc;
    if (iVar9 != 0) break;
LAB_10165252c:
    if (lVar11 == 0) goto LAB_101651ecc;
  }
LAB_10165254c:
  __ZN9codex_tui13resume_picker11PickerState28change_focused_toolbar_value17h69f14a7e106913bcE
            (puVar12);
  lVar17 = 4;
  __ZN9codex_tui13resume_picker11PickerState13request_frame17h803ca34a29cb8f15E(*unaff_x23);
  goto LAB_101652450;
LAB_101651ecc:
  if (cVar38 == '\0') {
    func_0x000100025ae8(unaff_x29 + -0xa0,puVar12 + 0x49);
    FUN_100f41960(unaff_x29 + -0xa0);
    lVar17 = 4;
    __ZN9codex_tui13resume_picker11PickerState9set_query17heef92106a2f74efbE
              (*unaff_x23,unaff_x29 + -0xa0);
  }
  else {
    lVar17 = 4;
    if ((cVar38 == '\x0f') && (lVar17 = 4, (bVar25 & 6) == 0)) {
      uVar4 = *(undefined4 *)(unaff_x19 + 0xb6c);
      func_0x000100025ae8(unaff_x29 + -0x88,puVar12 + 0x49);
      FUN_100f41a0c(unaff_x29 + -0x88,uVar4);
      lVar17 = 4;
      __ZN9codex_tui13resume_picker11PickerState9set_query17heef92106a2f74efbE
                (*unaff_x23,unaff_x29 + -0x88);
    }
  }
  goto LAB_101652450;
  while (uVar23 < uVar24) {
LAB_101653934:
    uVar13 = uVar13 + 1;
    *(ulong *)(unaff_x19 + 0xa68) = uVar13;
    uVar24 = FUN_105486678(puVar12,uVar13,uVar18);
    if (uVar18 <= uVar13) break;
  }
LAB_101653a48:
  if ((8 < uVar6) &&
     (*(long *)(unaff_x19 + 0x518) == 2 && *(long *)(unaff_x19 + 0x530) != -0x8000000000000000)) {
    uVar24 = 0;
    if (*(long *)(unaff_x19 + 0x728) != 0) {
      uVar24 = FUN_105486678(puVar12,0,*(long *)(unaff_x19 + 0x728) + -1);
    }
    lVar17 = uVar8 - (*(long *)(unaff_x19 + 0xa68) != 0);
    uVar8 = 0;
    if (lVar17 != 0) {
      uVar8 = lVar17 - 1;
    }
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    if (uVar24 < uVar8) {
      __ZN9codex_tui13resume_picker11PickerState19load_more_if_needed17hc99e7e3a43ca6febE
                (puVar12,*(int *)(unaff_x19 + 0x4f8) == 1);
    }
  }
LAB_101653acc:
  lVar17 = __ZN9codex_tui13resume_picker11draw_picker17hb13e4fcfd6e8f6cbE
                     (*(undefined8 *)(unaff_x19 + 0x4e0),puVar12);
  if (lVar17 != 0) {
    in_stack_00000010 = FUN_100e9fa98(lVar17,&UNK_10b250708);
    lVar17 = 4;
    goto LAB_1016524b0;
  }
  if (*(char *)(unaff_x19 + 0xaa9) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0xaba) = 1;
    __ZN9codex_tui13resume_picker11PickerState32open_pending_transcript_if_ready17hef885fcfc1bf39f2E
              (puVar12);
  }
  goto LAB_10165247c;
}

