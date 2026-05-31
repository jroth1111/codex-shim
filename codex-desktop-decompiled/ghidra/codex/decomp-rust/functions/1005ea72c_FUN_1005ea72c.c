
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005ea72c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 *unaff_x22;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x27;
  undefined1 *unaff_x28;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_00002da0;
  undefined8 in_stack_00002da8;
  long in_stack_00007b80;
  long in_stack_00007b88;
  long in_stack_00007b90;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00007b80,s_Approved_command_prefix_saved__108af6afd,&stack0x000006b0);
  unaff_x25[2] = in_stack_00007b88;
  unaff_x25[1] = in_stack_00007b80;
  unaff_x25[3] = in_stack_00007b90;
  *unaff_x25 = 0x8000000000000000;
  *(undefined8 *)(in_stack_000000a0 + 0x5c8) = 9;
  *(undefined8 *)(in_stack_000000a0 + 0x5d0) = unaff_x24;
  *(undefined8 *)(in_stack_000000a0 + 0x5d8) = 9;
  *(undefined8 *)(in_stack_000000a0 + 0x5e0) = 1;
  *(undefined8 **)(in_stack_000000a0 + 0x5e8) = unaff_x25;
  *(undefined8 *)(in_stack_000000a0 + 0x5f8) = 0x8000000000000000;
  *(undefined8 *)(in_stack_000000a0 + 0x5f0) = 1;
  *(undefined1 *)(in_stack_000000a0 + 0x610) = 2;
  *(undefined8 *)(in_stack_000000a0 + 0x5c0) = 2;
  if (in_stack_00002da0 != 0) {
    _free(in_stack_00002da8);
  }
  *(long *)(in_stack_000000a0 + 0x6f8) = *(long *)(in_stack_000000a0 + 0x6a0);
  *(undefined8 *)(in_stack_000000a0 + 0x700) = *(undefined8 *)(in_stack_000000a0 + 0x680);
  *(undefined8 *)(in_stack_000000a0 + 0x708) = *(undefined8 *)(in_stack_000000a0 + 0x688);
  *(undefined1 *)(in_stack_000000a0 + 0x798) = 0;
  *(undefined8 *)(in_stack_000000a0 + 0x710) = *(undefined8 *)(in_stack_000000a0 + 0x680);
  *(undefined8 *)(in_stack_000000a0 + 0x718) = *(undefined8 *)(in_stack_000000a0 + 0x688);
  *(long *)(in_stack_000000a0 + 0x720) = *(long *)(in_stack_000000a0 + 0x6a0) + 0x1108;
  *(undefined1 *)(in_stack_000000a0 + 0x790) = 0;
  lVar7 = FUN_100fd3e50(in_stack_000000a0 + 0x720,in_stack_00000098);
  if (lVar7 == 0) {
    uVar12 = 3;
    *(undefined1 *)(in_stack_000000a0 + 0x798) = 3;
LAB_1005eab4c:
    *unaff_x28 = uVar12;
    uVar12 = 4;
  }
  else {
    if (((*(char *)(in_stack_000000a0 + 0x790) == '\x03') &&
        (*(char *)(in_stack_000000a0 + 0x788) == '\x03')) &&
       (*(char *)(in_stack_000000a0 + 0x740) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (in_stack_000000a0 + 0x748);
      if (*(long *)(in_stack_000000a0 + 0x750) != 0) {
        (**(code **)(*(long *)(in_stack_000000a0 + 0x750) + 0x18))
                  (*(undefined8 *)(in_stack_000000a0 + 0x758));
      }
    }
    if (*(long *)(lVar7 + 0x28) == -0x8000000000000000) {
LAB_1005ea898:
      plVar14 = (long *)0x0;
    }
    else {
      auVar17 = FUN_101498120((long *)(lVar7 + 0x28),*(undefined8 *)(in_stack_000000a0 + 0x710),
                              *(undefined8 *)(in_stack_000000a0 + 0x718));
      uVar8 = auVar17._8_8_;
      if ((auVar17._0_8_ & 1) == 0) goto LAB_1005ea898;
      if (*(ulong *)(lVar7 + 0x38) <= uVar8) {
        FUN_107c05cd0(uVar8,*(ulong *)(lVar7 + 0x38),&UNK_10b24da60);
        goto LAB_1005ea894;
      }
      plVar14 = *(long **)(*(long *)(lVar7 + 0x30) + uVar8 * 0xa8 + 0x88);
      lVar4 = *plVar14;
      *plVar14 = lVar4 + 1;
      if (lVar4 < 0) goto LAB_1005ea894;
    }
    __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
    *(undefined1 *)(in_stack_000000a0 + 0x798) = 1;
    *(long **)(in_stack_000000a0 + 0x6d8) = plVar14;
    if (plVar14 == (long *)0x0) {
      uVar15 = *(undefined8 *)(in_stack_000000a0 + 0x6a0);
      puVar9 = (undefined8 *)_malloc(200);
      if (puVar9 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,200);
LAB_1005ea894:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ea898);
        (*pcVar3)();
      }
      puVar10 = (undefined8 *)_malloc(9);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_107c03c64(1,9);
        goto LAB_1005ea894;
      }
      *(undefined1 *)(puVar10 + 1) = 0x72;
      *puVar10 = 0x65706f6c65766564;
      puVar11 = (undefined8 *)_malloc(0x20);
      if (puVar11 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
        goto LAB_1005ea894;
      }
      *(undefined1 *)(in_stack_000000a0 + 0x6f0) = 0;
      uVar16 = *(undefined8 *)(in_stack_000000a0 + 0x6c0);
      puVar11[2] = *(undefined8 *)(in_stack_000000a0 + 0x6c8);
      puVar11[1] = uVar16;
      puVar11[3] = *(undefined8 *)(in_stack_000000a0 + 0x6d0);
      *puVar11 = 0x8000000000000000;
      puVar9[1] = 9;
      *puVar9 = 0x8000000000000000;
      puVar9[2] = puVar10;
      puVar9[4] = 1;
      puVar9[3] = 9;
      puVar9[5] = puVar11;
      puVar9[6] = 1;
      *(undefined1 *)(puVar9 + 7) = 2;
      *(undefined8 *)(in_stack_000000a0 + 0x6f8) = 1;
      *(undefined8 **)(in_stack_000000a0 + 0x700) = puVar9;
      *(undefined8 *)(in_stack_000000a0 + 0x708) = 1;
      *(undefined8 *)(in_stack_000000a0 + 0x710) = uVar15;
      *(undefined1 *)(in_stack_000000a0 + 0x818) = 0;
      FUN_1005abad0(&stack0x00007b80,in_stack_000000a0 + 0x6f8,in_stack_00000098);
      if (in_stack_00007b80 == -0x7fffffffffffffff) {
        uVar12 = 5;
        goto LAB_1005eab4c;
      }
      if (*(char *)(in_stack_000000a0 + 0x818) == '\x03') {
        FUN_100cdae4c(in_stack_000000a0 + 0x718);
      }
      else if (*(char *)(in_stack_000000a0 + 0x818) == '\0') {
        func_0x000100e543d0(in_stack_000000a0 + 0x6f8);
      }
      if (in_stack_00007b80 != -0x8000000000000000) {
        lVar7 = in_stack_00007b90 + 1;
        lVar4 = in_stack_00007b88;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_100e139e8(lVar4);
          lVar4 = lVar4 + 200;
        }
        if (in_stack_00007b80 != 0) {
          _free(in_stack_00007b88);
        }
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b62ade0 - 1 < 2 ||
             ((bRam000000010b62ade0 != 0 &&
              (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7013b391c9fb0221E
                                 ), cVar5 != '\0')))) &&
            (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7013b391c9fb0221E
                               ), (uVar8 & 1) != 0)))) {
          FUN_1005b4a04(&stack0x00007b80);
        }
        else {
          uVar15 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35record_execpolicy_amendment_message28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7013b391c9fb0221E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00005490);
            if (iVar6 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar15,puVar2,puVar1,&stack0x00005490,&stack0x00007b80);
            }
          }
        }
      }
      FUN_100e02a24();
      *(undefined2 *)(in_stack_000000a0 + 0x6f0) = 0;
      *(undefined1 *)(in_stack_000000a0 + 0x6f2) = 0;
    }
    else {
      *(long **)(in_stack_000000a0 + 0x6f8) = plVar14;
      *(undefined8 *)(in_stack_000000a0 + 0x700) = *(undefined8 *)(in_stack_000000a0 + 0x6a0);
      *(long **)(in_stack_000000a0 + 0x708) = plVar14 + 2;
      *(undefined8 *)(in_stack_000000a0 + 0x710) = unaff_x27;
      *(undefined8 *)(in_stack_000000a0 + 0x718) = 1;
      *(undefined1 *)(in_stack_000000a0 + 0x740) = 0;
      uVar8 = FUN_1005af7fc(in_stack_000000a0 + 0x700,in_stack_00000098);
      if ((uVar8 & 1) != 0) {
        uVar12 = 4;
        goto LAB_1005eab4c;
      }
      func_0x000100d50dec(in_stack_000000a0 + 0x700);
      lVar7 = **(long **)(in_stack_000000a0 + 0x6f8);
      **(long **)(in_stack_000000a0 + 0x6f8) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(in_stack_000000a0 + 0x6f8);
      }
      FUN_100e02a24();
      if (*(long *)(in_stack_000000a0 + 0x6c0) != 0) {
        _free(*(undefined8 *)(in_stack_000000a0 + 0x6c8));
      }
      *(undefined2 *)(in_stack_000000a0 + 0x6f0) = 0;
      *(undefined1 *)(in_stack_000000a0 + 0x6f2) = 0;
    }
    *unaff_x28 = 1;
    FUN_100d68ee4();
    if (*(long *)(in_stack_000000a0 + 0x508) == -0x7ffffffffffffffa) {
      *(undefined8 *)(in_stack_000000a0 + 0x5c8) = *(undefined8 *)(in_stack_000000a0 + 0x4e8);
      *(undefined1 *)(in_stack_000000a0 + 0x5d1) = 0;
      uVar8 = func_0x0001005a3a3c(in_stack_000000a0 + 0x5c0,in_stack_00000098);
      if ((uVar8 & 1) == 0) {
        FUN_100d28b1c(in_stack_000000a0 + 0x5c0);
LAB_1005eb24c:
        if (*(long *)(in_stack_000000a0 + 0x528) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x530));
        }
        if ((*(byte *)(in_stack_000000a0 + 0x5b9) & 1) != 0) {
          uVar13 = *(ulong *)(in_stack_000000a0 + 0x508);
          uVar8 = uVar13 ^ 0x8000000000000000;
          if (-1 < (long)uVar13) {
            uVar8 = 3;
          }
          if (uVar8 == 3) {
            if (uVar13 != 0) {
              lVar7 = *(long *)(in_stack_000000a0 + 0x510);
LAB_1005eb2dc:
              _free(lVar7);
            }
          }
          else if (uVar8 == 1) {
            lVar7 = *(long *)(in_stack_000000a0 + 0x518);
            lVar4 = *(long *)(in_stack_000000a0 + 0x520);
            if (lVar4 != 0) {
              puVar9 = (undefined8 *)(lVar7 + 8);
              do {
                if (puVar9[-1] != 0) {
                  _free(*puVar9);
                }
                puVar9 = puVar9 + 3;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
            if (*(long *)(in_stack_000000a0 + 0x510) != 0) goto LAB_1005eb2dc;
          }
        }
        *(undefined1 *)(in_stack_000000a0 + 0x5b9) = 0;
        if (*(long *)(in_stack_000000a0 + 0x4f0) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x4f8));
        }
        *unaff_x22 = 1;
        FUN_100e78334(in_stack_00000070);
        uVar15 = 0;
        uVar8 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
        if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
          uVar8 = 7;
        }
        if (0x18 < uVar8 || (1L << (uVar8 & 0x3f) & 0x161ff1cU) == 0) {
          FUN_100def028(in_stack_000000a0 + 0x200);
        }
        if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
          FUN_100def028(in_stack_000000a0);
        }
        uVar12 = 1;
        goto LAB_1005eb358;
      }
      uVar12 = 6;
    }
    else {
      *(undefined2 *)(in_stack_000000a0 + 0x5b9) = 0x100;
      lVar7 = **(long **)(in_stack_000000a0 + 0x4e8);
      *(undefined1 *)(in_stack_000000a0 + 0x5ba) = 0;
      *(undefined8 *)(in_stack_000000a0 + 0x5d8) = *(undefined8 *)(in_stack_000000a0 + 0x520);
      *(undefined8 *)(in_stack_000000a0 + 0x5d0) = *(undefined8 *)(in_stack_000000a0 + 0x518);
      *(undefined8 *)(in_stack_000000a0 + 0x5c8) = *(undefined8 *)(in_stack_000000a0 + 0x510);
      *(undefined8 *)(in_stack_000000a0 + 0x5c0) = *(undefined8 *)(in_stack_000000a0 + 0x508);
      *(long *)(in_stack_000000a0 + 0x5e0) = lVar7 + 0x10;
      *(undefined8 *)(in_stack_000000a0 + 0x5e8) = *(undefined8 *)(in_stack_000000a0 + 0x4f8);
      *(undefined8 *)(in_stack_000000a0 + 0x5f0) = *(undefined8 *)(in_stack_000000a0 + 0x500);
      *(undefined1 *)(in_stack_000000a0 + 0x630) = 0;
      iVar6 = FUN_1005a4314(in_stack_000000a0 + 0x5c0,in_stack_00000098);
      if (iVar6 == 0) {
        FUN_100d2d6dc(in_stack_000000a0 + 0x5c0);
        *(undefined1 *)(in_stack_000000a0 + 0x5ba) = 0;
        goto LAB_1005eb24c;
      }
      uVar12 = 7;
    }
  }
  *unaff_x22 = uVar12;
  uVar15 = 2;
  uVar12 = 0xe;
LAB_1005eb358:
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar12;
  return uVar15;
}

