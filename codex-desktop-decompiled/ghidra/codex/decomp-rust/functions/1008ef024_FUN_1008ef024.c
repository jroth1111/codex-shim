
undefined8 FUN_1008ef024(undefined8 param_1)

{
  long *unaff_x19;
  long unaff_x29;
  undefined8 uStack0000000000000080;
  long lStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  char *pcStack0000000000000100;
  undefined1 *puStack0000000000000108;
  
  puStack0000000000000108 = &stack0x00000170;
  pcStack0000000000000100 = s_0failed_to_read_thread_goal_for_r_108acac4e;
  *(long **)(unaff_x29 + -0x48) = unaff_x19 + 0x12;
  *(char ***)(unaff_x29 + -0xf0) = &stack0x00000100;
  *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b208fd0;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x48;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b2163a8;
  lStack0000000000000088 = unaff_x29 + -0xf0;
  uStack0000000000000080 = 1;
  uStack0000000000000090 = 2;
  uStack0000000000000098 = param_1;
  FUN_1008ef50c(&stack0x00000080);
  (**(code **)**(undefined8 **)(unaff_x29 + -0x68))();
  if (*unaff_x19 != 3) {
    *(undefined1 *)(unaff_x19 + 0x17) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x17) = 0;
  *(undefined1 *)((long)unaff_x19 + 0xba) = 1;
  return 0;
}

