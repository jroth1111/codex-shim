
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005e60d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(long *)(in_stack_000000a0 + 0x638) =
       *(long *)(**(long **)(in_stack_000000a0 + 0x4c8) + 0x6f0) + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0x6b8) = 0;
  bVar4 = FUN_10052acf0(in_stack_000000a0 + 0x638,in_stack_00000098);
  if (bVar4 == 2) {
    uVar8 = 4;
LAB_1005e5ff4:
    *unaff_x20 = uVar8;
    uVar9 = 2;
    uVar8 = 8;
  }
  else {
    if ((((*(char *)(in_stack_000000a0 + 0x6b8) == '\x03') &&
         (*(char *)(in_stack_000000a0 + 0x6b0) == '\x03')) &&
        (*(char *)(in_stack_000000a0 + 0x6a8) == '\x03')) &&
       (*(char *)(in_stack_000000a0 + 0x660) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (in_stack_000000a0 + 0x668);
      if (*(long *)(in_stack_000000a0 + 0x670) != 0) {
        (**(code **)(*(long *)(in_stack_000000a0 + 0x670) + 0x18))
                  (*(undefined8 *)(in_stack_000000a0 + 0x678));
      }
    }
    if ((bVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(in_stack_000000a0 + 0x4c8);
      *(undefined1 *)(in_stack_000000a0 + 0x631) = 0;
      uVar11 = *(undefined8 *)(in_stack_000000a0 + 0x4d0);
      uVar10 = *(undefined8 *)(in_stack_000000a0 + 0x4d8);
      uVar12 = *(undefined8 *)(in_stack_000000a0 + 0x4e0);
      iVar6 = __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
                        (in_stack_000000a0 + 0x598,&stack0x00005490);
      if (iVar6 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000caff,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ea898);
        (*pcVar3)();
      }
      *(undefined8 *)(in_stack_000000a0 + 0x638) = uVar11;
      *(undefined8 *)(in_stack_000000a0 + 0x640) = uVar10;
      *(undefined8 *)(in_stack_000000a0 + 0x648) = uVar12;
      *(undefined8 *)(in_stack_000000a0 + 0x658) = 1;
      *(undefined8 *)(in_stack_000000a0 + 0x650) = 0;
      *(undefined8 *)(in_stack_000000a0 + 0x660) = 0;
      *(undefined8 *)(in_stack_000000a0 + 0x668) = uVar9;
      *(undefined2 *)(in_stack_00000090 + 0xa99) = 0;
      *(undefined4 *)(in_stack_00000090 + 0xa95) = 8;
      *(undefined1 *)(in_stack_00000090 + 0xa9b) = 0;
      iVar6 = FUN_1005260c0((long *)(in_stack_000000a0 + 0x638),in_stack_00000098);
      if (iVar6 != 0) {
        uVar8 = 5;
        goto LAB_1005e5ff4;
      }
      if (*(char *)(in_stack_00000090 + 0xa9b) == '\x03') {
        FUN_100d28c3c(in_stack_000000a0 + 0x670);
        *(undefined2 *)(in_stack_00000090 + 0xa9c) = 0;
      }
      else if (*(char *)(in_stack_00000090 + 0xa9b) == '\0') {
        if (*(long *)(in_stack_000000a0 + 0x638) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x640));
        }
        if (*(long *)(in_stack_000000a0 + 0x650) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x658));
        }
      }
    }
    else if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
            (((bRam000000010b629d90 - 1 < 2 ||
              ((bRam000000010b629d90 != 0 &&
               (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN10codex_core21realtime_conversation11handle_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0bbb57254bbf2c2E
                                  ), cVar5 != '\0')))) &&
             (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN10codex_core21realtime_conversation11handle_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0bbb57254bbf2c2E
                                ), (uVar7 & 1) != 0)))) {
      FUN_100521880(&stack0x00005490);
    }
    else {
      uVar9 = 
      ___ZN10codex_core21realtime_conversation11handle_text28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0bbb57254bbf2c2E
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
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x0000a310);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar9,puVar2,puVar1,&stack0x0000a310,&stack0x00005490);
        }
      }
    }
    FUN_100df5738(in_stack_000000a0 + 0x598);
    *(undefined1 *)(in_stack_000000a0 + 0x632) = 0;
    if (((*(byte *)(in_stack_000000a0 + 0x631) & 1) != 0) &&
       (*(long *)(in_stack_000000a0 + 0x4d0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x4d8));
    }
    *(undefined2 *)(in_stack_000000a0 + 0x630) = 1;
    func_0x000100e7e840();
    uVar9 = 0;
    *(undefined1 *)(in_stack_000000a0 + 0x486) = 0;
    uVar7 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
    if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
      uVar7 = 7;
    }
    if (0x18 < uVar7 || (1L << (uVar7 & 0x3f) & 0x161ff1cU) == 0) {
      FUN_100def028(in_stack_000000a0 + 0x200);
    }
    if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
      FUN_100def028(in_stack_000000a0);
    }
    uVar8 = 1;
  }
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar8;
  return uVar9;
}

