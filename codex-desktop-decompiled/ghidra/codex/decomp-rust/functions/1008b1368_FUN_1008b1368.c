
void FUN_1008b1368(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x19;
  long *unaff_x20;
  long lVar13;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x29;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  long in_stack_00000108;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000a8,s__fs_writeFile_requires_valid_bas_108aca1b0,unaff_x29 + -0x60);
  lVar4 = in_stack_000000b8;
  puVar3 = in_stack_000000b0;
  lVar7 = *(long *)(unaff_x25 + 0x48);
  lVar10 = *(long *)(unaff_x25 + 0x40);
  lVar19 = *(long *)(unaff_x25 + 0x58);
  lVar17 = *(long *)(unaff_x25 + 0x50);
  lVar20 = *(long *)(unaff_x25 + 0x28);
  lVar18 = *(long *)(unaff_x25 + 0x20);
  lVar16 = *(long *)(unaff_x25 + 0x38);
  lVar6 = *(long *)(unaff_x25 + 0x30);
  if (in_stack_000000a8 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0xf1) = 1;
    lVar10 = *unaff_x26;
    plVar12 = *(long **)(lVar10 + 0x98);
    if (plVar12 == (long *)0x0) {
      puVar8 = (undefined8 *)_malloc(0x22);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x22);
        goto LAB_1008b1698;
      }
      puVar8[1] = 0x6d6574737973656c;
      *puVar8 = 0x6966206c61636f6c;
      puVar8[3] = 0x72756769666e6f63;
      puVar8[2] = 0x20746f6e20736920;
      *(undefined2 *)(puVar8 + 4) = 0x6465;
      lVar13 = 0x22;
      *(undefined8 *)(unaff_x19 + 0x78) = 0x22;
      *(undefined8 **)(unaff_x19 + 0x80) = puVar8;
      *(undefined8 *)(unaff_x19 + 0x90) = 0x8000000000000005;
      *(undefined8 *)(unaff_x19 + 0x88) = 0x22;
      *(undefined8 *)(unaff_x19 + 0xd8) = 0xffffffffffff80a5;
      in_stack_000000a0 = -0x7f5b;
      in_stack_00000078 = *(long *)(unaff_x19 + 0xb0);
      in_stack_00000070 = *(long *)(unaff_x19 + 0xa8);
      in_stack_00000088 = *(long *)(unaff_x19 + 0xc0);
      in_stack_00000080 = *(long *)(unaff_x19 + 0xb8);
      in_stack_00000098 = *(long *)(unaff_x19 + 0xd0);
      in_stack_00000090 = *(long *)(unaff_x19 + 200);
      in_stack_00000068 = *(long *)(unaff_x19 + 0xa0);
      in_stack_00000060 = *(long *)(unaff_x19 + 0x98);
      puVar14 = (undefined8 *)0x8000000000000005;
      lVar15 = 0x22;
    }
    else {
      lVar6 = *plVar12;
      *plVar12 = lVar6 + 1;
      if (lVar6 < 0) {
LAB_1008b1698:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008b169c);
        (*pcVar5)();
      }
      plVar12 = *(long **)(lVar10 + 0x98);
      lVar10 = *(long *)plVar12[0x1e];
      *(long *)plVar12[0x1e] = lVar10 + 1;
      if (lVar10 < 0) goto LAB_1008b1698;
      lVar10 = plVar12[0x1e];
      lVar6 = plVar12[0x1f];
      lVar7 = *plVar12;
      *plVar12 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h81f873d6dcb2525bE();
      }
      *(long *)(unaff_x19 + 0x80) = lVar10;
      *(long *)(unaff_x19 + 0x88) = lVar6;
      *(long *)(unaff_x19 + 0x70) = lVar6;
      *(undefined8 *)(unaff_x19 + 0x78) = 0x8000000000000000;
      *(long *)(unaff_x19 + 0x68) = lVar10;
      lVar7 = *(long *)(lVar6 + 0x10);
      *(undefined1 *)(unaff_x19 + 0xf1) = 0;
      auVar21 = (**(code **)(lVar6 + 0x28))
                          (lVar10 + (lVar7 - 1U & 0xfffffffffffffff0) + 0x10,unaff_x19 + 0x38);
      *(undefined1 (*) [16])(unaff_x19 + 0xe0) = auVar21;
      auVar21 = (**(code **)(auVar21._8_8_ + 0x18))();
      if ((auVar21._0_8_ & 1) != 0) {
        *unaff_x20 = -0x7fffffffffffffff;
        uVar9 = 3;
        goto LAB_1008b1650;
      }
      uVar1 = *(undefined8 *)(unaff_x19 + 0xe0);
      puVar2 = *(undefined8 **)(unaff_x19 + 0xe8);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        _free(uVar1);
      }
      if ((auVar21._8_8_ == 0) ||
         (__ZN16codex_app_server18request_processors12fs_processor12map_fs_error17h54c5543e6bbf0f80E
                    (&stack0x000000a8,auVar21._8_8_), puVar14 = in_stack_000000c0,
         lVar15 = in_stack_000000b8, puVar8 = in_stack_000000b0, lVar13 = in_stack_000000a8,
         in_stack_000000a8 == -0x8000000000000000)) {
        lVar10 = **(long **)(unaff_x19 + 0x68);
        **(long **)(unaff_x19 + 0x68) = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E();
        }
        *(undefined1 *)(unaff_x19 + 0xf1) = 0;
        lVar11 = *(long *)(unaff_x19 + 0x38);
        puVar14 = puVar2;
        lVar13 = -0x8000000000000000;
        puVar8 = puVar3;
        lVar15 = lVar4;
        goto joined_r0x0001008b1580;
      }
      in_stack_00000088 = *(long *)(unaff_x25 + 0x48);
      in_stack_00000080 = *(long *)(unaff_x25 + 0x40);
      in_stack_00000098 = *(long *)(unaff_x25 + 0x58);
      in_stack_00000090 = *(long *)(unaff_x25 + 0x50);
      in_stack_000000a0 = in_stack_00000108;
      in_stack_00000068 = *(long *)(unaff_x25 + 0x28);
      in_stack_00000060 = *(long *)(unaff_x25 + 0x20);
      in_stack_00000078 = *(long *)(unaff_x25 + 0x38);
      in_stack_00000070 = *(long *)(unaff_x25 + 0x30);
      lVar10 = **(long **)(unaff_x19 + 0x68);
      **(long **)(unaff_x19 + 0x68) = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E();
      }
    }
    if ((*(char *)(unaff_x19 + 0xf1) == '\x01') && (puVar3 != (undefined8 *)0x0)) {
      _free(lVar4);
    }
    *(undefined1 *)(unaff_x19 + 0xf1) = 0;
    lVar11 = *(long *)(unaff_x19 + 0x38);
  }
  else {
    in_stack_000000a0 = -0x7f58;
    puVar14 = (undefined8 *)0x8000000000000005;
    *(undefined1 *)(unaff_x19 + 0xf1) = 0;
    lVar11 = *(long *)(unaff_x19 + 0x38);
    lVar13 = in_stack_000000a8;
    puVar8 = puVar3;
    lVar15 = lVar4;
    in_stack_00000060 = lVar18;
    in_stack_00000068 = lVar20;
    in_stack_00000070 = lVar6;
    in_stack_00000078 = lVar16;
    in_stack_00000080 = lVar10;
    in_stack_00000088 = lVar7;
    in_stack_00000090 = lVar17;
    in_stack_00000098 = lVar19;
  }
joined_r0x0001008b1580:
  if (lVar11 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x40));
  }
  *unaff_x20 = lVar13;
  unaff_x20[1] = (long)puVar8;
  unaff_x20[2] = lVar15;
  unaff_x20[3] = (long)puVar14;
  unaff_x20[9] = in_stack_00000088;
  unaff_x20[8] = in_stack_00000080;
  unaff_x20[0xb] = in_stack_00000098;
  unaff_x20[10] = in_stack_00000090;
  unaff_x20[0xc] = in_stack_000000a0;
  uVar9 = 1;
  unaff_x20[5] = in_stack_00000068;
  unaff_x20[4] = in_stack_00000060;
  unaff_x20[7] = in_stack_00000078;
  unaff_x20[6] = in_stack_00000070;
LAB_1008b1650:
  *(undefined1 *)(unaff_x19 + 0xf0) = uVar9;
  return;
}

