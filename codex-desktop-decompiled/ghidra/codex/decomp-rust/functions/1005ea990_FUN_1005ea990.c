
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005ea990(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *puVar11;
  long unaff_x25;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar12;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_00007b80;
  undefined8 in_stack_00007b88;
  undefined8 in_stack_00007b90;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00007b80,s__Failed_to_apply_execpolicy_amen_108ac1f65,&stack0x00005490);
  in_stack_00000080[2] = in_stack_00007b90;
  in_stack_00000080[1] = in_stack_00007b88;
  *in_stack_00000080 = in_stack_00007b80;
  *(undefined1 *)(unaff_x25 + 0x5bc) = 1;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
     (((bRam000000010b62b050 - 1 < 2 ||
       ((bRam000000010b62b050 != 0 &&
        (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core7session8handlers13exec_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb8b6add3027ed4fE
                           ), cVar3 != '\0')))) &&
      (uVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN10codex_core7session8handlers13exec_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb8b6add3027ed4fE
                         ), (uVar5 & 1) != 0)))) {
    FUN_1005deddc(&stack0x00007b80);
  }
  else {
    lVar8 = 
    ___ZN10codex_core7session8handlers13exec_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb8b6add3027ed4fE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar10 = *(undefined8 *)
                (
                ___ZN10codex_core7session8handlers13exec_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcb8b6add3027ed4fE
                + 0x20);
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x0000ca70);
      if (iVar4 != 0) {
        unaff_x28[1] = uVar10;
        *unaff_x28 = 2;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar8,puVar2,puVar1,&stack0x00005490,&stack0x00007b80);
      }
    }
  }
  *(undefined1 *)(in_stack_000000a0 + 0x5bc) = 0;
  uVar12 = in_stack_00000080[1];
  uVar10 = *in_stack_00000080;
  *(undefined1 *)(in_stack_000000a0 + 0x5bb) = 1;
  *(undefined8 *)(unaff_x21 + 0x10) = uVar12;
  *(undefined8 *)(unaff_x21 + 8) = uVar10;
  lVar8 = **(long **)(in_stack_000000a0 + 0x4e8);
  func_0x000100025ae8(&stack0x000006b0,in_stack_000000a0 + 0x528);
  *(undefined1 *)(in_stack_000000a0 + 0x5bb) = 0;
  _memcpy(&stack0x00007b98,&stack0x00002da0,0x1d8);
  _memcpy(&stack0x00005490,&stack0x00007b80,0x1f0);
  _memcpy(in_stack_000000a0 + 0x648,&stack0x00005490,0x1f0);
  *(long *)(in_stack_000000a0 + 0x838) = lVar8 + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0xa50) = 0;
  iVar4 = FUN_1005a4060(in_stack_000000a0 + 0x648,in_stack_00000098);
  if (iVar4 == 0) {
    FUN_100d28c3c(in_stack_000000a0 + 0x648);
    *(undefined1 *)(in_stack_000000a0 + 0x5bb) = 0;
    *(undefined1 *)(in_stack_000000a0 + 0x5bc) = 0;
    func_0x000100e20fec(in_stack_000000a0 + 0x5d8);
    if (*(long *)(in_stack_000000a0 + 0x508) == -0x7ffffffffffffffa) {
      *(undefined8 *)(in_stack_000000a0 + 0x5c8) = *(undefined8 *)(in_stack_000000a0 + 0x4e8);
      *(undefined1 *)(in_stack_000000a0 + 0x5d1) = 0;
      uVar5 = func_0x0001005a3a3c(in_stack_000000a0 + 0x5c0,in_stack_00000098);
      if ((uVar5 & 1) == 0) {
        FUN_100d28b1c(in_stack_000000a0 + 0x5c0);
LAB_1005eb24c:
        if (*(long *)(in_stack_000000a0 + 0x528) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x530));
        }
        if ((*(byte *)(in_stack_000000a0 + 0x5b9) & 1) != 0) {
          uVar7 = *(ulong *)(in_stack_000000a0 + 0x508);
          uVar5 = uVar7 ^ 0x8000000000000000;
          if (-1 < (long)uVar7) {
            uVar5 = 3;
          }
          if (uVar5 == 3) {
            if (uVar7 != 0) {
              lVar8 = *(long *)(in_stack_000000a0 + 0x510);
LAB_1005eb2dc:
              _free(lVar8);
            }
          }
          else if (uVar5 == 1) {
            lVar8 = *(long *)(in_stack_000000a0 + 0x518);
            lVar9 = *(long *)(in_stack_000000a0 + 0x520);
            if (lVar9 != 0) {
              puVar11 = (undefined8 *)(lVar8 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
            if (*(long *)(in_stack_000000a0 + 0x510) != 0) goto LAB_1005eb2dc;
          }
        }
        *(undefined1 *)(in_stack_000000a0 + 0x5b9) = 0;
        if (*(long *)(in_stack_000000a0 + 0x4f0) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x4f8));
        }
        *unaff_x22 = 1;
        FUN_100e78334(unaff_x27);
        uVar10 = 0;
        uVar5 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
        if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
          uVar5 = 7;
        }
        if (0x18 < uVar5 || (1L << (uVar5 & 0x3f) & 0x161ff1cU) == 0) {
          FUN_100def028(in_stack_000000a0 + 0x200);
        }
        if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
          FUN_100def028(in_stack_000000a0);
        }
        uVar6 = 1;
        goto LAB_1005eb358;
      }
      uVar6 = 6;
    }
    else {
      *(undefined2 *)(in_stack_000000a0 + 0x5b9) = 0x100;
      lVar8 = **(long **)(in_stack_000000a0 + 0x4e8);
      *(undefined1 *)(in_stack_000000a0 + 0x5ba) = 0;
      *(undefined8 *)(in_stack_000000a0 + 0x5d8) = *(undefined8 *)(in_stack_000000a0 + 0x520);
      *(undefined8 *)(in_stack_000000a0 + 0x5d0) = *(undefined8 *)(in_stack_000000a0 + 0x518);
      *(undefined8 *)(in_stack_000000a0 + 0x5c8) = *(undefined8 *)(in_stack_000000a0 + 0x510);
      *(undefined8 *)(in_stack_000000a0 + 0x5c0) = *(undefined8 *)(in_stack_000000a0 + 0x508);
      *(long *)(in_stack_000000a0 + 0x5e0) = lVar8 + 0x10;
      *(undefined8 *)(in_stack_000000a0 + 0x5e8) = *(undefined8 *)(in_stack_000000a0 + 0x4f8);
      *(undefined8 *)(in_stack_000000a0 + 0x5f0) = *(undefined8 *)(in_stack_000000a0 + 0x500);
      *(undefined1 *)(in_stack_000000a0 + 0x630) = 0;
      iVar4 = FUN_1005a4314(in_stack_000000a0 + 0x5c0,in_stack_00000098);
      if (iVar4 == 0) {
        FUN_100d2d6dc(in_stack_000000a0 + 0x5c0);
        *(undefined1 *)(in_stack_000000a0 + 0x5ba) = 0;
        goto LAB_1005eb24c;
      }
      uVar6 = 7;
    }
  }
  else {
    uVar6 = 5;
  }
  *unaff_x22 = uVar6;
  uVar10 = 2;
  uVar6 = 0xe;
LAB_1005eb358:
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar6;
  return uVar10;
}

