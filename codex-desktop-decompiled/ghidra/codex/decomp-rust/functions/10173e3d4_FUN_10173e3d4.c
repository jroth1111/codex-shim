
/* WARNING: Removing unreachable block (ram,0x00010173eef8) */
/* WARNING: Removing unreachable block (ram,0x00010173efa0) */
/* WARNING: Removing unreachable block (ram,0x00010173ef00) */
/* WARNING: Removing unreachable block (ram,0x00010173efc8) */
/* WARNING: Removing unreachable block (ram,0x00010173efd0) */
/* WARNING: Removing unreachable block (ram,0x00010173eb8c) */
/* WARNING: Removing unreachable block (ram,0x00010173ec34) */
/* WARNING: Removing unreachable block (ram,0x00010173eb94) */
/* WARNING: Removing unreachable block (ram,0x00010173ec5c) */
/* WARNING: Removing unreachable block (ram,0x00010173ec64) */
/* WARNING: Removing unreachable block (ram,0x00010173f658) */
/* WARNING: Removing unreachable block (ram,0x00010173f5cc) */
/* WARNING: Removing unreachable block (ram,0x00010173f600) */
/* WARNING: Removing unreachable block (ram,0x00010173f564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10173e3d4(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  byte bVar8;
  undefined1 uVar9;
  long unaff_x19;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong *puVar15;
  undefined4 uVar16;
  int *piVar17;
  int *piVar18;
  char cVar19;
  int *piVar20;
  undefined8 *unaff_x24;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *unaff_x26;
  ulong *unaff_x27;
  undefined8 *unaff_x28;
  long lVar23;
  long unaff_x29;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  int *piStack0000000000000020;
  int *piStack0000000000000028;
  int *piStack0000000000000030;
  undefined1 *puStack0000000000000038;
  int *piStack0000000000000048;
  long lStack0000000000000050;
  ulong uStack0000000000000058;
  undefined8 *in_stack_00000060;
  int *in_stack_00000440;
  int *in_stack_00000448;
  undefined8 in_stack_00000450;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000440,s_core_hooksPath__108ac941b,&stack0x00000068);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x20,&UNK_108ce1709,2);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x20,in_stack_00000448,in_stack_00000450);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x20,&UNK_108ce1709,2);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
            (unaff_x19 + 0x20,&UNK_108ce170b,0x14);
  if (unaff_x26 != (undefined8 *)0x0) {
    puVar22 = unaff_x24 + (long)unaff_x26 * 2;
    puVar21 = unaff_x24;
    do {
      unaff_x24 = puVar21 + 2;
      __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                (unaff_x19 + 0x20,*puVar21,puVar21[1]);
      puVar21 = unaff_x24;
    } while (unaff_x24 != puVar22);
  }
  __ZN3std3sys7process4unix6common7Command3cwd17h4267741f6f8380b4E(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  if (in_stack_00000440 != (int *)0x0) {
    _free(in_stack_00000448);
  }
  __ZN5tokio7process7Command6output17he0b139d844368e05E(&stack0x00000818,unaff_x19 + 0x20);
  auVar27 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
  uVar10 = auVar27._8_4_;
  lVar23 = auVar27._0_8_;
  piVar17 = (int *)(lVar23 + 5);
  if ((SCARRY8(lVar23,5)) ||
     ((999999999 < uVar10 &&
      ((bVar3 = SCARRY8((long)piVar17,1), piVar17 = (int *)(lVar23 + 6), bVar3 ||
       (uVar10 = uVar10 + 0xc4653600, uVar10 == 1000000000)))))) {
    __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(unaff_x29 + -0x100,0);
  }
  else {
    auVar26 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b257288);
    *(undefined1 (*) [16])(unaff_x29 + -0x90) = auVar26;
    lVar23 = 0x140;
    if ((auVar26._0_8_ & 1) == 0) {
      lVar23 = 0x200;
    }
    if (*(int *)(auVar26._8_8_ + lVar23 + 0xd8) == 1000000000) {
      func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b257288);
      goto LAB_10173f7f4;
    }
    *(undefined1 (*) [16])(unaff_x29 + -0x100) = auVar26;
    *(undefined8 *)(unaff_x29 + -0xf0) = 0;
    *(int **)(unaff_x29 + -0xa8) = piVar17;
    *(uint *)(unaff_x29 + -0xa0) = uVar10;
    *(undefined1 *)(unaff_x29 + -0x98) = 0;
  }
  _memcpy(&stack0x000004b0,&stack0x00000818,0x368);
  unaff_x28[9] = unaff_x28[0xf1];
  unaff_x28[8] = unaff_x28[0xf0];
  unaff_x28[0xb] = unaff_x28[0xf3];
  unaff_x28[10] = unaff_x28[0xf2];
  unaff_x28[0xd] = unaff_x28[0xf5];
  unaff_x28[0xc] = unaff_x28[0xf4];
  unaff_x28[1] = unaff_x28[0xe9];
  *unaff_x28 = unaff_x28[0xe8];
  unaff_x28[3] = unaff_x28[0xeb];
  unaff_x28[2] = unaff_x28[0xea];
  unaff_x28[5] = unaff_x28[0xed];
  unaff_x28[4] = unaff_x28[0xec];
  unaff_x28[7] = unaff_x28[0xef];
  unaff_x28[6] = unaff_x28[0xee];
  _memcpy(&stack0x00000068,&stack0x00000440,0x3d8);
  _memcpy(unaff_x19 + 0xf0,&stack0x00000068,0x3d8);
  piVar4 = (int *)(*
                  ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                  )();
  if ((char)piVar4[0x12] == '\x01') {
LAB_10173e66c:
    uVar10 = (uint)(*(char *)((long)piVar4 + 0x45) != '\0') |
             (*(byte *)(piVar4 + 0x11) ^ 0xffffffff) & 1;
    piVar18 = (int *)(ulong)uVar10;
    cVar19 = '\x01';
    piVar20 = (int *)(ulong)(uVar10 == 2);
    bVar8 = *(byte *)(unaff_x19 + 0x4c0);
    piVar12 = piVar18;
    if (1 < bVar8) goto LAB_10173e6a0;
LAB_10173e5d8:
    piVar18 = piVar12;
    if (bVar8 != 0) {
      func_0x000108a07af4(&UNK_10b257b58);
      goto LAB_10173f7f4;
    }
    unaff_x24 = *(undefined8 **)(unaff_x19 + 0x168);
    if (*(long *)(unaff_x19 + 0x160) != 3) {
      *(long *)(unaff_x19 + 0x1f0) = *(long *)(unaff_x19 + 0x160);
      *(undefined8 **)(unaff_x19 + 0x1f8) = unaff_x24;
      *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x198);
      *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 400);
      *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 0x1a8);
      *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x1a0);
      *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x178);
      *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x170);
      *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x188);
      *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x180);
      *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x1b8);
      *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x1b0);
      *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 0x1c8);
      *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x1c0);
      *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x1d8);
      *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x19 + 0x1d0);
      *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x19 + 0x1e8);
      *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 0x1e0);
      *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + 0x1f8);
      *(undefined8 *)(unaff_x19 + 0x280) = *(undefined8 *)(unaff_x19 + 0x1f0);
      *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x208);
      *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x200);
      *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x218);
      *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x19 + 0x210);
      *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x228);
      *(undefined8 *)(unaff_x19 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x220);
      *(undefined8 *)(unaff_x19 + 0x2f8) = *(undefined8 *)(unaff_x19 + 0x268);
      *(undefined8 *)(unaff_x19 + 0x2f0) = *(undefined8 *)(unaff_x19 + 0x260);
      *(undefined8 *)(unaff_x19 + 0x308) = *(undefined8 *)(unaff_x19 + 0x278);
      *(undefined8 *)(unaff_x19 + 0x300) = *(undefined8 *)(unaff_x19 + 0x270);
      *(undefined8 *)(unaff_x19 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0x248);
      *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(unaff_x19 + 0x240);
      *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x19 + 600);
      *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x19 + 0x250);
      *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x19 + 0x238);
      *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x230);
      *(undefined1 *)(unaff_x19 + 0x4b8) = 0;
      goto LAB_10173e6cc;
    }
    *(undefined8 *)(unaff_x19 + 0x1f0) = 3;
    *(undefined8 **)(unaff_x19 + 0x1f8) = unaff_x24;
    uVar11 = 0x8000000000000000;
LAB_10173f240:
    *(undefined1 *)(unaff_x19 + 0x4c0) = 1;
LAB_10173f248:
    uVar16 = SUB84(piVar17,0);
    FUN_101755de0(unaff_x19 + 0x160);
    FUN_10174d47c(unaff_x19 + 0xf0);
    puVar22 = unaff_x24;
    if ((long)uVar11 < -0x7ffffffffffffffe) {
      if ((uVar11 == 0x8000000000000000) && (((ulong)unaff_x24 & 3) == 1)) {
        puVar22 = (undefined8 *)((long)unaff_x24 + -1);
        uVar14 = *puVar22;
        piVar17 = *(int **)((long)unaff_x24 + 7);
        if (*(code **)piVar17 != (code *)0x0) {
          (**(code **)piVar17)(uVar14);
        }
        if (*(long *)(piVar17 + 2) != 0) {
          _free(uVar14);
        }
        _free(puVar22);
      }
      uVar16 = SUB84(piVar17,0);
      uVar11 = 0x8000000000000000;
    }
    func_0x00010174cf40(unaff_x19 + 0x20);
    *unaff_x27 = uVar11;
    unaff_x27[1] = (ulong)puVar22;
    unaff_x27[2] = (ulong)piVar18;
    unaff_x27[3] = (ulong)unaff_x26;
    unaff_x27[4] = (ulong)piVar20;
    unaff_x27[5] = (ulong)piVar4;
    uVar9 = 1;
    *(undefined4 *)(unaff_x27 + 6) = uVar16;
LAB_10173f2d0:
    *(undefined1 *)(unaff_x19 + 0x4c8) = uVar9;
    return;
  }
  if ((char)piVar4[0x12] != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(piVar4,&LAB_101744560)
    ;
    *(undefined1 *)(piVar4 + 0x12) = 1;
    goto LAB_10173e66c;
  }
  piVar20 = (int *)0x1;
  bVar8 = *(byte *)(unaff_x19 + 0x4c0);
  cVar19 = '\x02';
  piVar18 = (int *)0x2;
  piVar12 = (int *)0x2;
  if (bVar8 < 2) goto LAB_10173e5d8;
LAB_10173e6a0:
  uStack0000000000000018 = (uint)piVar20;
  if (bVar8 != 3) {
    func_0x000108a07b10(&UNK_10b257b58);
    goto LAB_10173f7f4;
  }
  bVar8 = *(byte *)(unaff_x19 + 0x4b8);
  if (bVar8 < 2) {
    if (bVar8 != 0) {
      func_0x000108a07af4(&UNK_10b257b28);
      goto LAB_10173f7f4;
    }
LAB_10173e6cc:
    uStack0000000000000018 = (uint)piVar20;
    *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x19 + 0x2e8);
    *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(unaff_x19 + 0x2e0);
    *(undefined8 *)(unaff_x19 + 0x388) = *(undefined8 *)(unaff_x19 + 0x2f8);
    *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x2f0);
    *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x19 + 0x2a0);
    *(undefined8 *)(unaff_x19 + 0x348) = *(undefined8 *)(unaff_x19 + 0x2b8);
    *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(unaff_x19 + 0x2b0);
    *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x19 + 0x2c8);
    *(undefined8 *)(unaff_x19 + 0x350) = *(undefined8 *)(unaff_x19 + 0x2c0);
    *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x19 + 0x2d8);
    *(undefined8 *)(unaff_x19 + 0x360) = *(undefined8 *)(unaff_x19 + 0x2d0);
    *(undefined8 *)(unaff_x19 + 0x318) = *(undefined8 *)(unaff_x19 + 0x288);
    *(undefined8 *)(unaff_x19 + 0x310) = *(undefined8 *)(unaff_x19 + 0x280);
    *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x19 + 0x298);
    *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x290);
    *(undefined8 *)(unaff_x19 + 0x398) = *(undefined8 *)(unaff_x19 + 0x308);
    *(undefined8 *)(unaff_x19 + 0x390) = *(undefined8 *)(unaff_x19 + 0x300);
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x2a8);
    *(undefined8 *)(unaff_x19 + 0x3a0) = *(undefined8 *)(unaff_x19 + 0x2a0);
    *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x2b8);
    *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x2b0);
    *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x2c8);
    *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 0x2c0);
    puVar22 = (undefined8 *)(unaff_x19 + 0x310);
    *(undefined8 *)(unaff_x19 + 0x330) = 2;
    *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x2d8);
    *(undefined8 *)(unaff_x19 + 0x3d0) = *(undefined8 *)(unaff_x19 + 0x2d0);
    *(undefined8 *)(unaff_x19 + 0x350) = 2;
    *(undefined4 *)(unaff_x19 + 0x4b9) = 0x1010000;
    *(undefined4 *)(unaff_x19 + 0x3e0) = 0;
    *(undefined8 **)(unaff_x19 + 1000) = puVar22;
    *(undefined1 *)(unaff_x19 + 0x400) = 0;
    *(undefined4 *)(unaff_x19 + 0x408) = 0;
    *(long *)(unaff_x19 + 0x410) = unaff_x19 + 0x3a0;
    *(undefined1 *)(unaff_x19 + 0x458) = 0;
    *(undefined4 *)(unaff_x19 + 0x460) = 0;
    *(long *)(unaff_x19 + 0x468) = unaff_x19 + 0x3c0;
    *(undefined1 *)(unaff_x19 + 0x4b0) = 0;
LAB_10173e76c:
    *(undefined8 **)(unaff_x19 + 0x3f0) = puVar22;
    uVar14 = *puVar22;
    uVar25 = puVar22[3];
    uVar24 = puVar22[2];
    unaff_x28[1] = puVar22[1];
    *unaff_x28 = uVar14;
    unaff_x28[3] = uVar25;
    unaff_x28[2] = uVar24;
    *puVar22 = 2;
    if (in_stack_00000440 != (int *)0x2) {
      func_0x00010174df10(&stack0x00000440);
    }
    piVar17 = (int *)(*(long *)(unaff_x19 + 0x3f0) + 0x60);
    uStack000000000000001c = (uint)piVar18;
    if (*piVar17 != 3) {
      *(int **)(unaff_x19 + 0x3f8) = piVar17;
      cVar19 = (char)piVar4[0x12];
      if (cVar19 == '\x01') {
LAB_10173e984:
        cVar19 = (char)piVar4[0x11];
        bVar8 = *(byte *)((long)piVar4 + 0x45);
        piVar18 = (int *)(ulong)bVar8;
        if (cVar19 != '\x01') {
LAB_10173e9a0:
          *(byte *)((long)piVar4 + 0x45) = bVar8;
          goto LAB_10173e9a4;
        }
        if (bVar8 != 0) {
          bVar8 = bVar8 - 1;
          goto LAB_10173e9a0;
        }
        FUN_10610bbb4(*(undefined8 *)*in_stack_00000060,((undefined8 *)*in_stack_00000060)[1]);
      }
      else {
LAB_10173e8fc:
        if (cVar19 != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (piVar4,&LAB_101744560);
          *(undefined1 *)(piVar4 + 0x12) = 1;
          goto LAB_10173e984;
        }
        cVar19 = '\0';
        piVar18 = (int *)0x0;
LAB_10173e9a4:
        func_0x000106114978(&stack0x00000440,piVar17,in_stack_00000060);
        if ((int)in_stack_00000440 != 2) {
          uVar10 = (uint)((ulong)in_stack_00000440 >> 0x20);
          if (((ulong)in_stack_00000440 & 1) == 0) {
            *(undefined1 *)(piVar17 + 10) = 0;
            unaff_x24 = (undefined8 *)(ulong)uVar10;
            FUN_10174d544(*(long *)(unaff_x19 + 0x3f0) + 0x60);
            piVar20 = (int *)0x0;
            lVar23 = *(long *)(unaff_x19 + 0x3f0);
            *(undefined4 *)(lVar23 + 0x60) = 3;
            *(uint *)(lVar23 + 100) = uVar10;
          }
          else {
            unaff_x24 = (undefined8 *)(ulong)uVar10;
            piVar20 = (int *)0x1;
          }
          goto LAB_10173e7b4;
        }
        if (cVar19 != '\0') {
          if ((char)piVar4[0x12] != '\x01') {
            if ((char)piVar4[0x12] == '\x02') goto LAB_10173ea5c;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (piVar4,&DAT_1060edbcc);
            unaff_x28 = (undefined8 *)&stack0x00000440;
            *(undefined1 *)(piVar4 + 0x12) = 1;
          }
          *(undefined1 *)(piVar4 + 0x11) = 1;
          *(char *)((long)piVar4 + 0x45) = (char)piVar18;
        }
      }
LAB_10173ea5c:
      piStack0000000000000030 = (int *)(unaff_x19 + 0x408);
      bVar3 = false;
      *(undefined1 *)(unaff_x19 + 0x400) = 3;
      iVar1 = *piStack0000000000000030;
      goto joined_r0x00010173ea70;
    }
    piVar20 = (int *)0x0;
    unaff_x24 = (undefined8 *)(ulong)*(uint *)(*(long *)(unaff_x19 + 0x3f0) + 100);
    in_stack_00000448 = piVar4;
LAB_10173e7b4:
    piStack0000000000000048 = (int *)(unaff_x19 + 0x3e0);
    piVar18 = (int *)0x1;
    *(undefined1 *)(unaff_x19 + 0x400) = 1;
    if (((*piStack0000000000000048 == 1) && (*(int *)(unaff_x19 + 1000) != 0)) &&
       (uVar11 = *(ulong *)(unaff_x19 + 0x3f0), (uVar11 & 3) == 1)) {
      piVar17 = *(int **)(uVar11 - 1);
      unaff_x26 = *(undefined8 **)(uVar11 + 7);
      if ((code *)*unaff_x26 != (code *)0x0) {
        (*(code *)*unaff_x26)(piVar17);
      }
      if (unaff_x26[1] != 0) {
        _free(piVar17);
      }
      _free((ulong *)(uVar11 - 1));
    }
    *(undefined4 *)(unaff_x19 + 0x3e0) = 1;
    *(int *)(unaff_x19 + 1000) = (int)piVar20;
    *(int *)(unaff_x19 + 0x3ec) = (int)unaff_x24;
    *(int **)(unaff_x19 + 0x3f0) = in_stack_00000448;
    piVar4 = in_stack_00000448;
    if ((int)piVar20 == 0) goto LAB_10173e87c;
LAB_10173e828:
    *(undefined4 *)(unaff_x19 + 0x3e0) = 2;
    unaff_x24 = *(undefined8 **)(unaff_x19 + 0x3f0);
    if (unaff_x24 == (undefined8 *)0x0) {
      func_0x000108a07a20(&UNK_10b2563a0);
      goto LAB_10173f7f4;
    }
LAB_10173f180:
    uVar11 = 0x8000000000000000;
LAB_10173f184:
    lStack0000000000000050 = unaff_x19 + 0x280;
    piStack0000000000000048 = (int *)(unaff_x19 + 0x3e0);
    puStack0000000000000038 = (undefined1 *)(unaff_x19 + 0x4b8);
    FUN_10174ca60(piStack0000000000000048);
    if (uVar11 == 0x8000000000000000) {
      *(undefined2 *)(unaff_x19 + 0x4b9) = 0;
      if (*(long *)(unaff_x19 + 0x3c0) != 2) {
        func_0x00010174df10(unaff_x19 + 0x3c0);
      }
      *(undefined1 *)(unaff_x19 + 0x4bb) = 0;
      if (*(long *)(unaff_x19 + 0x3a0) != 2) {
        func_0x00010174df10(unaff_x19 + 0x3a0);
      }
      *(undefined1 *)(unaff_x19 + 0x4bc) = 0;
      func_0x00010174ce7c(unaff_x19 + 0x310);
    }
    else {
      *(undefined1 *)(unaff_x19 + 0x4bc) = 0;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x3a0);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x3b8);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x3b0);
      unaff_x28[1] = *(undefined8 *)(unaff_x19 + 0x3a8);
      *unaff_x28 = uVar14;
      unaff_x28[3] = uVar25;
      unaff_x28[2] = uVar24;
      if (in_stack_00000440 != (int *)0x2) {
        func_0x00010174df10(&stack0x00000440);
      }
      *(undefined1 *)(unaff_x19 + 0x4bb) = 0;
      uVar14 = *(undefined8 *)(unaff_x19 + 0x3c0);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x3d8);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x3d0);
      unaff_x28[1] = *(undefined8 *)(unaff_x19 + 0x3c8);
      *unaff_x28 = uVar14;
      unaff_x28[3] = uVar25;
      unaff_x28[2] = uVar24;
      if (in_stack_00000440 != (int *)0x2) {
        func_0x00010174df10(&stack0x00000440);
      }
      *(undefined4 *)(unaff_x19 + 0x4b9) = 0;
      func_0x00010174ce7c(unaff_x19 + 0x310);
    }
    *puStack0000000000000038 = 1;
    func_0x00010175a880(lStack0000000000000050);
    goto LAB_10173f240;
  }
  if (bVar8 != 3) {
    func_0x000108a07b10(&UNK_10b257b28);
    goto LAB_10173f7f4;
  }
  uStack000000000000001c = (uint)piVar18;
  if (*(int *)(unaff_x19 + 0x3e0) != 1) {
    if (*(int *)(unaff_x19 + 0x3e0) == 2) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce208b,0x45,&UNK_10b2583a0);
      goto LAB_10173f7f4;
    }
    bVar8 = *(byte *)(unaff_x19 + 0x400);
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        func_0x000108a07af4(&UNK_10b257b40);
        goto LAB_10173f7f4;
      }
      puVar22 = *(undefined8 **)(unaff_x19 + 1000);
      unaff_x28 = (undefined8 *)&stack0x00000440;
      goto LAB_10173e76c;
    }
    if (bVar8 != 3) {
      func_0x000108a07b10(&UNK_10b257b40);
      goto LAB_10173f7f4;
    }
    piVar17 = *(int **)(unaff_x19 + 0x3f8);
    unaff_x28 = (undefined8 *)&stack0x00000440;
    if (cVar19 != '\x01') goto LAB_10173e8fc;
    goto LAB_10173e984;
  }
  piVar20 = (int *)(ulong)*(uint *)(unaff_x19 + 1000);
  if (*(uint *)(unaff_x19 + 1000) != 0) goto LAB_10173e828;
LAB_10173e87c:
  piStack0000000000000030 = (int *)(unaff_x19 + 0x408);
  bVar3 = true;
  iVar1 = *piStack0000000000000030;
joined_r0x00010173ea70:
  auVar26._8_8_ = unaff_x24;
  auVar26._0_8_ = unaff_x26;
  if (iVar1 == 0) {
    piStack0000000000000030 = (int *)(unaff_x19 + 0x408);
    piStack0000000000000028 = (int *)(unaff_x19 + 0x460);
    bVar8 = *(byte *)(unaff_x19 + 0x458);
    if (1 < bVar8) {
      if (bVar8 == 3) {
        plVar5 = *(long **)(unaff_x19 + 0x430);
        puVar13 = *(ulong **)(unaff_x19 + 0x438);
        piStack0000000000000020 = *(int **)(unaff_x19 + 0x448);
        uStack0000000000000058 = *(long *)(unaff_x19 + 0x450);
        piVar18 = *(int **)(unaff_x19 + 0x440);
LAB_10173eaf8:
        piVar17 = (int *)puVar13[2];
        piVar20 = (int *)*puVar13;
        piVar4 = piVar18;
        if (0x1f < (ulong)((long)piVar20 - (long)piVar17)) goto LAB_10173eba0;
        while ((piVar4 = piVar17, (int *)0x1f < piStack0000000000000020 &&
               (piStack0000000000000020 == piVar20))) {
          auVar26 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                              (plVar5,in_stack_00000060,&stack0x00000818);
          piVar17 = (int *)0x0;
          piVar12 = (int *)puVar13[2];
          if (piVar18 < piVar12) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce1bca,0x5d,&UNK_10b257a20);
            goto LAB_10173f7f4;
          }
          piVar20 = (int *)*puVar13;
          in_stack_00000440 = (int *)puVar13[1];
          *(int **)(unaff_x29 + -0x90) = in_stack_00000440;
          *(int **)(unaff_x29 + -0x88) = piVar20;
          *(int **)(unaff_x29 + -0x80) = piVar12;
          *(int **)(unaff_x29 + -0x78) = piVar18;
          if (piVar20 < piVar12) {
            func_0x000108a07904(piVar12,piVar12,piVar20,&UNK_10b257a08);
            goto LAB_10173f7f4;
          }
          _memcpy((long)in_stack_00000440 + (long)piVar12,unaff_x29 + -0x100,0);
          if (piVar18 < piVar12) {
            *(int **)(unaff_x29 + -0x78) = piVar12;
            piVar18 = piVar12;
          }
          *(int **)(unaff_x29 + -0x80) = piVar12;
          if (piVar20 < piVar12) {
LAB_10173f448:
            puVar7 = &UNK_10b4cd1c8;
            piVar18 = piVar12;
LAB_10173f460:
            func_0x000108a07904(0,piVar18,piVar20,puVar7);
            goto LAB_10173f7f4;
          }
          while( true ) {
            unaff_x24 = auVar26._8_8_;
            uVar11 = auVar26._0_8_;
            if (piVar20 < piVar18) {
              puVar7 = &UNK_10b4cd1b0;
              goto LAB_10173f460;
            }
            if ((int *)puVar13[1] != in_stack_00000440) {
              __ZN4core9panicking13assert_failed17hec2b10233cd65be6E
                        (0,&stack0x00000818,&stack0x00000440,0);
              goto LAB_10173f7f4;
            }
            *(int **)(unaff_x19 + 0x440) = piVar18;
            puVar13[2] = (ulong)piVar12;
            if ((uVar11 & 1) != 0) {
              bVar3 = false;
              *(undefined1 *)(unaff_x19 + 0x458) = 3;
              unaff_x28 = (undefined8 *)&stack0x00000440;
              iVar1 = *piStack0000000000000028;
              piVar4 = in_stack_00000440;
              goto joined_r0x00010173ed44;
            }
            if (unaff_x24 != (undefined8 *)0x0) {
              if (*(long *)(unaff_x19 + 0x418) != 0) {
                _free(*(undefined8 *)(unaff_x19 + 0x420));
              }
              piVar20 = (int *)0x8000000000000000;
              unaff_x28 = (undefined8 *)&stack0x00000440;
              goto LAB_10173ed68;
            }
            if (piVar17 == (int *)0x0) {
              *(undefined8 *)(unaff_x19 + 0x450) = 0;
              piVar20 = *(int **)(unaff_x19 + 0x418);
              unaff_x24 = *(undefined8 **)(unaff_x19 + 0x420);
              auVar26._8_8_ = unaff_x24;
              auVar26._0_8_ = uVar11;
              piVar4 = *(int **)(unaff_x19 + 0x428);
              *(undefined1 *)(unaff_x19 + 0x458) = 1;
              if (piVar20 == (int *)0x8000000000000001) {
                bVar3 = false;
                unaff_x28 = (undefined8 *)&stack0x00000440;
                iVar1 = *piStack0000000000000028;
                goto joined_r0x00010173ed44;
              }
              unaff_x28 = (undefined8 *)&stack0x00000440;
              iVar1 = *piStack0000000000000030;
              goto joined_r0x00010173f13c;
            }
            uStack0000000000000058 = uStack0000000000000058 + (long)piVar17;
            *(ulong *)(unaff_x19 + 0x450) = uStack0000000000000058;
            piVar20 = (int *)*puVar13;
            piVar4 = piVar18;
            piVar17 = piVar12;
            if ((ulong)((long)piVar20 - (long)piVar12) < 0x20) break;
LAB_10173eba0:
            if (piVar4 < piVar17) goto LAB_10173f528;
LAB_10173ebe8:
            *(ulong *)(unaff_x29 + -0x90) = puVar13[1];
            *(int **)(unaff_x29 + -0x88) = piVar20;
            *(int **)(unaff_x29 + -0x80) = piVar17;
            *(int **)(unaff_x29 + -0x78) = piVar4;
            if (piVar20 < piVar17) {
              func_0x000108a07904(0,piVar17,piVar20,&UNK_10b2579f0);
              goto LAB_10173f7f4;
            }
            auVar26 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                                (plVar5,in_stack_00000060,unaff_x29 + -0x90);
            piVar20 = *(int **)(unaff_x29 + -0x88);
            piVar12 = *(int **)(unaff_x29 + -0x80);
            if (piVar20 < piVar12) {
              func_0x000108a07904(0,piVar12,piVar20,&UNK_10b2579f0);
              goto LAB_10173f7f4;
            }
            piVar17 = (int *)((long)piVar12 - (long)piVar17);
            in_stack_00000440 = *(int **)(unaff_x29 + -0x90);
            piVar18 = *(int **)(unaff_x29 + -0x78);
            if (piVar20 < piVar12) goto LAB_10173f448;
          }
        }
        *(int **)(unaff_x19 + 0x440) = piVar4;
        FUN_108875fcc(puVar13,piVar4,0x20,1,1);
        piVar17 = (int *)puVar13[2];
        piVar20 = (int *)*puVar13;
        if (piVar17 <= piVar4) goto LAB_10173ebe8;
LAB_10173f528:
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce1bca,0x5d,&UNK_10b257a20);
        goto LAB_10173f7f4;
      }
LAB_10173f73c:
      func_0x000108a07b10(&UNK_10b257b10);
      goto LAB_10173f7f4;
    }
    if (bVar8 == 0) {
      piVar20 = (int *)0x0;
      plVar5 = *(long **)(unaff_x19 + 0x410);
      *(undefined8 *)(unaff_x19 + 0x418) = 0;
      auVar26._8_8_ = 1;
      *(undefined8 *)(unaff_x19 + 0x420) = 1;
      *(undefined8 *)(unaff_x19 + 0x428) = 0;
      if (*plVar5 != 2) {
        piVar18 = (int *)0x0;
        uStack0000000000000058 = 0;
        piStack0000000000000020 = (int *)0x0;
        *(long **)(unaff_x19 + 0x430) = plVar5;
        puVar13 = (ulong *)(unaff_x19 + 0x418);
        *(ulong **)(unaff_x19 + 0x438) = puVar13;
        *(undefined8 *)(unaff_x19 + 0x440) = 0;
        *(undefined8 *)(unaff_x19 + 0x450) = 0;
        *(undefined8 *)(unaff_x19 + 0x448) = 0;
        goto LAB_10173eaf8;
      }
LAB_10173ed68:
      piVar4 = (int *)0x0;
      *(undefined1 *)(unaff_x19 + 0x458) = 1;
      iVar1 = *piStack0000000000000030;
joined_r0x00010173f13c:
      if (iVar1 == 1) {
        puVar22 = auVar26._0_8_;
        puVar13 = *(ulong **)(unaff_x19 + 0x418);
        if (*(long *)(unaff_x19 + 0x410) == -0x8000000000000000) {
          if (((ulong)puVar13 & 3) == 1) {
            puVar15 = (ulong *)((long)puVar13 + -1);
            piVar17 = (int *)*puVar15;
            puVar22 = *(undefined8 **)((long)puVar13 + 7);
            if ((code *)*puVar22 != (code *)0x0) {
              (*(code *)*puVar22)(piVar17);
            }
            if (puVar22[1] != 0) {
              _free(piVar17);
            }
            goto LAB_10173ed9c;
          }
        }
        else {
          puVar15 = puVar13;
          if (*(long *)(unaff_x19 + 0x410) != 0) {
LAB_10173ed9c:
            auVar26._8_8_ = auVar26._8_8_;
            auVar26._0_8_ = puVar22;
            _free(puVar15);
          }
        }
      }
      *(undefined4 *)(unaff_x19 + 0x408) = 1;
      *(int **)(unaff_x19 + 0x410) = piVar20;
      *(long *)(unaff_x19 + 0x418) = auVar26._8_8_;
      *(int **)(unaff_x19 + 0x420) = piVar4;
      goto joined_r0x00010173f16c;
    }
LAB_10173f72c:
    func_0x000108a07af4(&UNK_10b257b10);
    goto LAB_10173f7f4;
  }
  if (iVar1 != 1) {
LAB_10173e92c:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce208b,0x45,&UNK_10b2583a0);
    goto LAB_10173f7f4;
  }
  piVar20 = *(int **)(unaff_x19 + 0x410);
joined_r0x00010173f16c:
  unaff_x24 = auVar26._8_8_;
  unaff_x26 = auVar26._0_8_;
  if (piVar20 == (int *)0x8000000000000000) {
    *(undefined4 *)(unaff_x19 + 0x408) = 2;
    unaff_x24 = *(undefined8 **)(unaff_x19 + 0x418);
    if (unaff_x24 != (undefined8 *)0x0) goto LAB_10173f180;
    puVar7 = &UNK_10b2563b8;
    goto LAB_10173f6a0;
  }
  piStack0000000000000028 = (int *)(unaff_x19 + 0x460);
  iVar1 = *piStack0000000000000028;
joined_r0x00010173ed44:
  if (iVar1 == 0) {
    piStack0000000000000028 = (int *)(unaff_x19 + 0x460);
    bVar8 = *(byte *)(unaff_x19 + 0x4b0);
    if (bVar8 < 2) {
      if (bVar8 != 0) goto LAB_10173f72c;
      unaff_x26 = (undefined8 *)0x0;
      plVar5 = *(long **)(unaff_x19 + 0x468);
      *(undefined8 *)(unaff_x19 + 0x470) = 0;
      unaff_x24 = (undefined8 *)0x1;
      *(undefined8 *)(unaff_x19 + 0x478) = 1;
      *(undefined8 *)(unaff_x19 + 0x480) = 0;
      if (*plVar5 == 2) {
LAB_10173f0bc:
        piVar20 = (int *)0x0;
        *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
LAB_10173f0c8:
        if (*piStack0000000000000028 == 1) {
          puVar13 = *(ulong **)(unaff_x19 + 0x470);
          if (*(long *)(unaff_x19 + 0x468) == -0x8000000000000000) {
            if (((ulong)puVar13 & 3) == 1) {
              puVar15 = (ulong *)((long)puVar13 + -1);
              piVar17 = (int *)*puVar15;
              piVar4 = *(int **)((long)puVar13 + 7);
              if (*(code **)piVar4 != (code *)0x0) {
                (**(code **)piVar4)(piVar17);
              }
              if (*(long *)(piVar4 + 2) != 0) {
                _free(piVar17);
              }
              goto LAB_10173f0f0;
            }
          }
          else {
            puVar15 = puVar13;
            if (*(long *)(unaff_x19 + 0x468) != 0) {
LAB_10173f0f0:
              _free(puVar15);
            }
          }
        }
        *(undefined4 *)(unaff_x19 + 0x460) = 1;
        *(undefined8 **)(unaff_x19 + 0x468) = unaff_x26;
        *(undefined8 **)(unaff_x19 + 0x470) = unaff_x24;
        *(int **)(unaff_x19 + 0x478) = piVar20;
        goto joined_r0x00010173f31c;
      }
      piVar4 = (int *)0x0;
      unaff_x26 = (undefined8 *)0x0;
      piStack0000000000000020 = (int *)0x0;
      *(long **)(unaff_x19 + 0x488) = plVar5;
      puVar13 = (ulong *)(unaff_x19 + 0x470);
      *(ulong **)(unaff_x19 + 0x490) = puVar13;
      *(undefined8 *)(unaff_x19 + 0x498) = 0;
      *(undefined8 *)(unaff_x19 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x19 + 0x4a0) = 0;
    }
    else {
      if (bVar8 != 3) goto LAB_10173f73c;
      plVar5 = *(long **)(unaff_x19 + 0x488);
      puVar13 = *(ulong **)(unaff_x19 + 0x490);
      piStack0000000000000020 = *(int **)(unaff_x19 + 0x4a0);
      unaff_x26 = *(undefined8 **)(unaff_x19 + 0x4a8);
      piVar4 = *(int **)(unaff_x19 + 0x498);
    }
    piVar17 = (int *)puVar13[2];
    piVar20 = (int *)*puVar13;
    piVar18 = piVar17;
    if (0x1f < (ulong)((long)piVar20 - (long)piVar17)) goto LAB_10173ef0c;
    while (((int *)0x1f < piStack0000000000000020 && (piStack0000000000000020 == piVar20))) {
      auVar26 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                          (plVar5,in_stack_00000060,&stack0x00000818);
      lVar23 = 0;
      piVar17 = (int *)puVar13[2];
      if (piVar4 < piVar17) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce1bca,0x5d,&UNK_10b257a20);
        goto LAB_10173f7f4;
      }
      piVar20 = (int *)*puVar13;
      piVar18 = (int *)puVar13[1];
      *(int **)(unaff_x29 + -0x90) = piVar18;
      *(int **)(unaff_x29 + -0x88) = piVar20;
      *(int **)(unaff_x29 + -0x80) = piVar17;
      *(int **)(unaff_x29 + -0x78) = piVar4;
      if (piVar20 < piVar17) {
        func_0x000108a07904(piVar17,piVar17,piVar20,&UNK_10b257a08);
        goto LAB_10173f7f4;
      }
      _memcpy((long)piVar18 + (long)piVar17,unaff_x29 + -0x100,0);
      if (piVar4 < piVar17) {
        *(int **)(unaff_x29 + -0x78) = piVar17;
        piVar4 = piVar17;
      }
      *(int **)(unaff_x29 + -0x80) = piVar17;
      if (piVar20 < piVar17) {
LAB_10173f4a8:
        puVar7 = &UNK_10b4cd1c8;
        piVar4 = piVar17;
LAB_10173f4c0:
        func_0x000108a07904(0,piVar4,piVar20,puVar7);
        goto LAB_10173f7f4;
      }
      while( true ) {
        unaff_x24 = auVar26._8_8_;
        uStack0000000000000058 = auVar26._0_8_;
        if (piVar20 < piVar4) {
          puVar7 = &UNK_10b4cd1b0;
          goto LAB_10173f4c0;
        }
        if ((int *)puVar13[1] != piVar18) {
          __ZN4core9panicking13assert_failed17hec2b10233cd65be6E
                    (0,&stack0x00000818,&stack0x00000440,0);
          goto LAB_10173f7f4;
        }
        *(int **)(unaff_x19 + 0x498) = piVar4;
        puVar13[2] = (ulong)piVar17;
        if ((uStack0000000000000058 & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x4b0) = 3;
          goto LAB_10173f3b4;
        }
        in_stack_00000440 = piVar18;
        if (unaff_x24 != (undefined8 *)0x0) {
          if (*(long *)(unaff_x19 + 0x470) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x478));
          }
          unaff_x26 = (undefined8 *)0x8000000000000000;
          unaff_x28 = (undefined8 *)&stack0x00000440;
          goto LAB_10173f0bc;
        }
        if (lVar23 == 0) {
          *(undefined8 *)(unaff_x19 + 0x4a8) = 0;
          unaff_x26 = *(undefined8 **)(unaff_x19 + 0x470);
          unaff_x24 = *(undefined8 **)(unaff_x19 + 0x478);
          piVar20 = *(int **)(unaff_x19 + 0x480);
          *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
          unaff_x28 = (undefined8 *)&stack0x00000440;
          if (unaff_x26 != (undefined8 *)0x8000000000000001) goto LAB_10173f0c8;
          goto LAB_10173f3b4;
        }
        unaff_x26 = (undefined8 *)((long)unaff_x26 + lVar23);
        *(undefined8 **)(unaff_x19 + 0x4a8) = unaff_x26;
        piVar20 = (int *)*puVar13;
        piVar18 = piVar17;
        if ((ulong)((long)piVar20 - (long)piVar17) < 0x20) break;
LAB_10173ef0c:
        piVar17 = piVar4;
        if (piVar17 < piVar18) goto LAB_10173f598;
LAB_10173ef54:
        *(ulong *)(unaff_x29 + -0x90) = puVar13[1];
        *(int **)(unaff_x29 + -0x88) = piVar20;
        *(int **)(unaff_x29 + -0x80) = piVar18;
        *(int **)(unaff_x29 + -0x78) = piVar17;
        if (piVar20 < piVar18) {
          func_0x000108a07904(0,piVar18,piVar20,&UNK_10b2579f0);
          goto LAB_10173f7f4;
        }
        auVar26 = __ZN84__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17hf3382467d9b98973E
                            (plVar5,in_stack_00000060,unaff_x29 + -0x90);
        piVar20 = *(int **)(unaff_x29 + -0x88);
        piVar17 = *(int **)(unaff_x29 + -0x80);
        if (piVar20 < piVar17) {
          func_0x000108a07904(0,piVar17,piVar20,&UNK_10b2579f0);
          goto LAB_10173f7f4;
        }
        lVar23 = (long)piVar17 - (long)piVar18;
        piVar18 = *(int **)(unaff_x29 + -0x90);
        piVar4 = *(int **)(unaff_x29 + -0x78);
        if (piVar20 < piVar17) goto LAB_10173f4a8;
      }
    }
    *(int **)(unaff_x19 + 0x498) = piVar17;
    FUN_108875fcc(puVar13,piVar17,0x20,1,1);
    piVar18 = (int *)puVar13[2];
    piVar20 = (int *)*puVar13;
    if (piVar18 <= piVar17) goto LAB_10173ef54;
LAB_10173f598:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce1bca,0x5d,&UNK_10b257a20);
    goto LAB_10173f7f4;
  }
  if (iVar1 != 1) goto LAB_10173e92c;
  unaff_x26 = *(undefined8 **)(unaff_x19 + 0x468);
joined_r0x00010173f31c:
  if (unaff_x26 == (undefined8 *)0x8000000000000000) {
    *(undefined4 *)(unaff_x19 + 0x460) = 2;
    unaff_x24 = *(undefined8 **)(unaff_x19 + 0x470);
    if (unaff_x24 != (undefined8 *)0x0) goto LAB_10173f180;
    puVar7 = &UNK_10b256430;
  }
  else {
    piStack0000000000000048 = (int *)(unaff_x19 + 0x3e0);
    piStack0000000000000030 = (int *)(unaff_x19 + 0x408);
    piStack0000000000000028 = (int *)(unaff_x19 + 0x460);
    if (!bVar3) {
LAB_10173f3b4:
      *(undefined1 *)(unaff_x19 + 0x4b8) = 3;
      *(undefined1 *)(unaff_x19 + 0x4c0) = 3;
      uVar6 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                        (uStack0000000000000018 | uStack000000000000001c & 1,unaff_x19 + 0xf0,
                         in_stack_00000060);
      uVar11 = 0x8000000000000001;
      if ((uVar6 & 1) != 0) {
        *unaff_x27 = 0x8000000000000001;
        uVar9 = 3;
        goto LAB_10173f2d0;
      }
      goto LAB_10173f248;
    }
    if (*piStack0000000000000048 == 1) {
      *(undefined4 *)(unaff_x19 + 0x3e0) = 2;
      if (1 < *(uint *)(unaff_x19 + 1000)) {
LAB_10173f6a8:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cdff74,0x28,&UNK_10b257af8);
        goto LAB_10173f7f4;
      }
      if ((*(uint *)(unaff_x19 + 1000) & 1) == 0) {
        if (*piStack0000000000000030 == 1) {
          piVar17 = (int *)(ulong)*(uint *)(unaff_x19 + 0x3ec);
          uVar11 = *(ulong *)(unaff_x19 + 0x410);
          *(undefined4 *)(unaff_x19 + 0x408) = 2;
          if (0x8000000000000000 < uVar11) goto LAB_10173f6a8;
          unaff_x24 = *(undefined8 **)(unaff_x19 + 0x418);
          if (uVar11 != 0x8000000000000000) {
            piVar18 = *(int **)(unaff_x19 + 0x420);
            *piStack0000000000000028 = 2;
            if ((undefined8 *)0x8000000000000000 < unaff_x26) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cdff74,0x28,&UNK_10b257af8);
              goto LAB_10173f7f4;
            }
            piVar20 = *(int **)(unaff_x19 + 0x470);
            piVar4 = *(int **)(unaff_x19 + 0x478);
            goto LAB_10173f184;
          }
          FUN_10175d574(0x8000000000000000,unaff_x24);
          puVar7 = &UNK_10b256418;
        }
        else {
          puVar7 = &UNK_10b256400;
        }
        func_0x000108a07a20(puVar7);
        goto LAB_10173f7f4;
      }
      FUN_10175ce74(1,*(undefined8 *)(unaff_x19 + 0x3f0));
      puVar7 = &UNK_10b2563e8;
    }
    else {
      puVar7 = &UNK_10b2563d0;
    }
  }
LAB_10173f6a0:
  func_0x000108a07a20(puVar7);
LAB_10173f7f4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10173f7f8);
  (*pcVar2)();
}

