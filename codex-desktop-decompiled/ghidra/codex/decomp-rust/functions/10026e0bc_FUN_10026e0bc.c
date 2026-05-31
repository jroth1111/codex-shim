
void FUN_10026e0bc(void)

{
  long *plVar1;
  byte *unaff_x27;
  long unaff_x29;
  char in_stack_000001b0;
  
  *(char **)(unaff_x29 + -0x70) = s_max_idle_per_host_for___dropping_108ab8dca;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xa0;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b1f3630;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_1002c2300(&stack0x000001b8);
  if (in_stack_000001b0 == '\x02') {
    FUN_1002c523c(&stack0x000001a0);
  }
  else {
    FUN_1002b7d4c(&stack0x000001a0);
  }
  if (1 < *unaff_x27) {
    plVar1 = *(long **)(unaff_x27 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1 + 3,plVar1[1],plVar1[2]);
    _free(plVar1);
  }
  (**(code **)(*(long *)(unaff_x27 + 0x10) + 0x20))
            (unaff_x27 + 0x28,*(undefined8 *)(unaff_x27 + 0x18),*(undefined8 *)(unaff_x27 + 0x20));
  return;
}

