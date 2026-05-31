
void FUN_1016852c0(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 unaff_x22;
  long unaff_x27;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  
  FUN_100f3f484(&stack0x00003e30,s_Service_tier_set_to_108ada9fe,&stack0x00006610);
  if (in_stack_00000140 != 0) {
    _free(in_stack_00000148);
  }
  lVar1 = *(long *)(unaff_x27 + 0xaf8);
  if (lVar1 != 0) {
    unaff_x22 = *(undefined8 *)(unaff_x27 + 0xb00);
    FUN_100f41b28(&stack0x00003d70,&UNK_108cd8776,5);
    FUN_100f41b28(&stack0x00003d70,lVar1,unaff_x22);
    FUN_100f41b28(&stack0x00003d70,&UNK_108c987e0,8);
  }
  __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE
            (*(undefined8 *)(unaff_x27 + 1000),&stack0x00003d70,&stack0x00003e30);
  *(undefined1 *)(unaff_x27 + 0xae8) = 0;
  if (((*(long *)(unaff_x27 + 0xa70) != -0x8000000000000000) &&
      ((*(byte *)(unaff_x27 + 0xad7) & 1) != 0)) && (*(long *)(unaff_x27 + 0xa70) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0xa78));
  }
  *(undefined1 *)(unaff_x27 + 0xad7) = 0;
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

