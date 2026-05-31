
void FUN_10026d79c(undefined8 param_1)

{
  long unaff_x21;
  long *plVar1;
  byte *unaff_x27;
  long unaff_x29;
  undefined8 uStack00000000000001a0;
  undefined1 *puStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  
  puStack00000000000001a8 = &stack0x00000220;
  uStack00000000000001a0 = 1;
  uStack00000000000001b0 = 1;
  *(undefined8 **)(unaff_x29 + -0x70) = &stack0x000001a0;
  *(undefined1 *)(unaff_x29 + -0x68) = 1;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x98) = &DAT_1061c2098;
  uStack00000000000001b8 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  if (1 < *unaff_x27) {
    plVar1 = *(long **)(unaff_x27 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1 + 3,plVar1[1],plVar1[2]);
    _free(plVar1);
  }
  (**(code **)(*(long *)(unaff_x27 + 0x10) + 0x20))
            (unaff_x27 + 0x28,*(undefined8 *)(unaff_x27 + 0x18),*(undefined8 *)(unaff_x27 + 0x20));
  return;
}

