
/* WARNING: Possible PIC construction at 0x0001060fc710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060fc714) */
/* WARNING: Removing unreachable block (ram,0x0001060fc724) */
/* WARNING: Removing unreachable block (ram,0x0001060fc72c) */
/* WARNING: Removing unreachable block (ram,0x0001060fc750) */
/* WARNING: Removing unreachable block (ram,0x0001060fc758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                 (int param_1,int *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined4 *extraout_x8;
  long lVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 unaff_x22;
  uint *puVar19;
  code *pcVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char acStack_81 [65];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar4 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar4 + 0x48) == '\x01') {
LAB_1060fc6ec:
    if (((param_1 != 0) && ((*(byte *)(lVar4 + 0x44) & 1) != 0)) &&
       (*(char *)(lVar4 + 0x45) == '\0')) {
      *(undefined1 *)(lVar4 + 0x44) = 0;
      unaff_x30 = 0x1060fc714;
      register0x00000008 = (BADSPACEBASE *)auStack_40;
      unaff_x19 = param_3;
      unaff_x20 = param_2;
      unaff_x21 = lVar4;
      unaff_x29 = puVar1;
    }
  }
  else if (*(char *)(lVar4 + 0x48) != '\x02') {
    lStack_38 = lVar4;
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar4,&DAT_1060edbcc);
    *(undefined1 *)(lStack_38 + 0x48) = 1;
    lVar4 = lStack_38;
    goto LAB_1060fc6ec;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  param_3 = (undefined8 *)*param_3;
  lVar4 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar4 + 0x48) == '\x01') {
LAB_1061147ac:
    bVar3 = *(byte *)(lVar4 + 0x45);
    bVar16 = bVar3;
    if (*(byte *)(lVar4 + 0x44) == 1) {
      if (bVar3 == 0) {
        FUN_10610bbb4(*param_3,param_3[1]);
        return (uint *)0x1;
      }
      bVar16 = bVar3 - 1;
    }
    *(byte *)(lVar4 + 0x45) = bVar16;
    puVar19 = (uint *)(ulong)((uint)*(byte *)(lVar4 + 0x44) << 8 | (uint)bVar3 << 0x10);
  }
  else {
    if (*(char *)(lVar4 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar4,&DAT_1060edbcc);
      *(undefined1 *)(lVar4 + 0x48) = 1;
      goto LAB_1061147ac;
    }
    puVar19 = (uint *)0x0;
  }
  lVar14 = 0x140;
  if (*param_2 == 0) {
    lVar14 = 0x200;
  }
  if (*(int *)(*(long *)(param_2 + 2) + lVar14 + 0xd8) == 1000000000) {
    puVar12 = &UNK_10b4cdec8;
    uVar6 = 0x73;
    puVar5 = &UNK_109bebb98;
  }
  else {
    if (*(char *)(*(long *)(param_2 + 2) + lVar14 + 200) != '\0') {
      *(undefined **)((long)register0x00000008 + -0x40) = &UNK_10b4cdea0;
      *(undefined **)((long)register0x00000008 + -0x38) = &DAT_1060ef478;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__108b36d0c,(undefined1 *)((long)register0x00000008 + -0x40),&UNK_10b4cdeb0);
      goto LAB_10611492c;
    }
    if ((*(byte *)(param_2 + 0x1a) & 1) == 0) {
      FUN_1061075e0(param_2,*(undefined8 *)(param_2 + 0x16),param_2[0x18],1);
    }
    if (param_2[4] == 1) {
      __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                (param_2 + 0xe,param_3);
      uVar18 = (uint)puVar19;
      if (*(long *)(param_2 + 0xc) != -1) {
        if ((uVar18 >> 8 & 1) == 0) {
          return (uint *)0x1;
        }
        if (*(char *)(lVar4 + 0x48) != '\x01') {
          if (*(char *)(lVar4 + 0x48) == '\x02') {
            return (uint *)0x1;
          }
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar4,&DAT_1060edbcc);
          *(undefined1 *)(lVar4 + 0x48) = 1;
        }
        *(undefined1 *)(lVar4 + 0x44) = 1;
        *(char *)(lVar4 + 0x45) = (char)((ulong)puVar19 >> 0x10);
        return (uint *)0x1;
      }
      if ((char)param_2[0x14] == '\0') {
        return (uint *)0x0;
      }
      *(char *)((long)register0x00000008 + -0x41) = (char)param_2[0x14];
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x41);
      *(undefined **)((long)register0x00000008 + -0x38) =
           &
           __ZN64__LT_tokio__time__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h1ce8c47cd22de8b9E
      ;
      uVar6 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s_timer_error__108b38135,(undefined1 *)((long)register0x00000008 + -0x40),
                         &UNK_10b4ce850);
      FUN_1060f3e90(uVar18 >> 8,uVar18 >> 0x10);
      __Unwind_Resume(uVar6);
      auVar21 = func_0x000108a07bc4();
      puVar7 = auVar21._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(uint **)((long)register0x00000008 + -0x80) = puVar19;
      *(undefined8 **)((long)register0x00000008 + -0x78) = param_3;
      *(int **)((long)register0x00000008 + -0x70) = param_2;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x106114978;
      do {
        puVar8 = (uint *)__ZN5tokio6signal8RxFuture9poll_recv17h0ea5d46b865c9716E
                                   (puVar7 + 6,auVar21._8_8_);
        if (*puVar7 == 2) {
          auVar22 = func_0x000108a079f0(&UNK_109beb6a8,0x13,&UNK_10b4cd768);
          puVar10 = auVar22._8_8_;
          lVar4 = auVar22._0_8_;
          *(uint **)((long)register0x00000008 + -0xd0) = puVar19;
          *(long *)((long)register0x00000008 + -200) = auVar21._8_8_;
          *(uint **)((long)register0x00000008 + -0xc0) = puVar7;
          *(undefined4 **)((long)register0x00000008 + -0xb8) = extraout_x8;
          *(undefined1 **)((long)register0x00000008 + -0xb0) =
               (undefined1 *)((long)register0x00000008 + -0x60);
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x106114a8c;
          puVar17 = *(undefined8 **)(lVar4 + 8);
          if (puVar17 == (undefined8 *)0x0) {
            *(long *)((long)register0x00000008 + -0xf0) = lVar4;
            *(undefined **)((long)register0x00000008 + -0xe8) = &DAT_106112724;
            uVar6 = *puVar10;
            uVar11 = puVar10[1];
            pcVar13 = s_JoinError__Cancelled____108b38145;
          }
          else {
            pcVar20 = *(code **)(*(long *)(lVar4 + 0x10) + 0x18);
            (*pcVar20)((undefined1 *)((long)register0x00000008 + -0xf0),puVar17);
            if (*(long *)((long)register0x00000008 + -0xe8) == -0x3a9d1c0c47df6f72 &&
                *(long *)((long)register0x00000008 + -0xf0) == -0x3e9032c8f95954af) {
              lVar14 = 0x10;
              puVar15 = puVar17 + 1;
            }
            else {
              (*pcVar20)((undefined1 *)((long)register0x00000008 + -0xf0),puVar17);
              if (*(long *)((long)register0x00000008 + -0xe8) != -0x4674e48ea859be88 ||
                  *(long *)((long)register0x00000008 + -0xf0) != 0x63eb502cd6cb5d6d) {
                *(long *)((long)register0x00000008 + -0xf0) = lVar4;
                *(undefined **)((long)register0x00000008 + -0xe8) = &DAT_106112724;
                uVar6 = *puVar10;
                uVar11 = puVar10[1];
                pcVar13 = s_JoinError__Panic_________108b3815f;
                goto LAB_106114bb0;
              }
              lVar14 = 8;
              puVar15 = puVar17;
            }
            uVar6 = *(undefined8 *)((long)puVar17 + lVar14);
            *(undefined8 *)((long)register0x00000008 + -0x100) = *puVar15;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar6;
            *(long *)((long)register0x00000008 + -0xf0) = lVar4;
            *(undefined **)((long)register0x00000008 + -0xe8) = &DAT_106112724;
            *(undefined1 **)((long)register0x00000008 + -0xe0) =
                 (undefined1 *)((long)register0x00000008 + -0x100);
            *(undefined **)((long)register0x00000008 + -0xd8) = &DAT_1060ef110;
            uVar6 = *puVar10;
            uVar11 = puVar10[1];
            pcVar13 = s_JoinError__Panic___________108b3817a;
          }
LAB_106114bb0:
          puVar19 = (uint *)__ZN4core3fmt5write17h64810b21425781ecE
                                      (uVar6,uVar11,pcVar13,
                                       (undefined1 *)((long)register0x00000008 + -0xf0));
          return puVar19;
        }
        if ((*puVar7 & 1) != 0) {
          uVar18 = puVar7[1];
LAB_106114a38:
          *extraout_x8 = 0;
          extraout_x8[1] = uVar18;
          return puVar8;
        }
        *(undefined4 *)((long)register0x00000008 + -0x94) = 0;
        puVar9 = (uint *)_waitpid(puVar7[2],(undefined1 *)((long)register0x00000008 + -0x94),1);
        if ((int)puVar9 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x98) = 0;
          iVar2 = *(int *)((long)register0x00000008 + -0x98);
        }
        else {
          if ((int)puVar9 == -1) {
            puVar19 = (uint *)___error();
            uVar18 = *puVar19;
            *extraout_x8 = 1;
            *(ulong *)(extraout_x8 + 2) = (ulong)uVar18 << 0x20 | 2;
            return puVar19;
          }
          uVar18 = *(uint *)((long)register0x00000008 + -0x94);
          puVar9 = (uint *)(ulong)uVar18;
          *puVar7 = 1;
          puVar7[1] = uVar18;
          *(undefined4 *)((long)register0x00000008 + -0x98) = 1;
          *(uint *)((long)register0x00000008 + -0xa0) = uVar18;
          iVar2 = *(int *)((long)register0x00000008 + -0x98);
        }
        if (iVar2 == 1) {
          uVar18 = *(uint *)((long)register0x00000008 + -0xa0);
          puVar8 = puVar9;
          goto LAB_106114a38;
        }
        puVar19 = puVar8;
        if (((uint)puVar8 & 0xff) == 2) {
          *extraout_x8 = 2;
          return puVar9;
        }
      } while( true );
    }
    puVar12 = &UNK_10b4cde88;
    uVar6 = 0x35;
    puVar5 = &UNK_109beba82;
  }
  func_0x000108a079f0(puVar5,uVar6,puVar12);
LAB_10611492c:
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x106114930);
  (*pcVar20)();
}

