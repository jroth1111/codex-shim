
void FUN_10026d4f4(void)

{
  long *plVar1;
  long unaff_x22;
  byte *unaff_x27;
  long unaff_x29;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  
  puStack0000000000000058 = &stack0x000001a0;
  pcStack0000000000000050 = s__put__existing_idle_HTTP_2_conne_108ab8df9;
  *(char ***)(unaff_x29 + -0xa0) = &stack0x00000050;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b1f3630;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_1002c2300(unaff_x22 + 0x18);
  if (*(char *)(unaff_x22 + 0x10) == '\x02') {
    FUN_1002c523c();
  }
  else {
    FUN_1002b7d4c();
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

