
void FUN_101681f44(void)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 unaff_x22;
  long unaff_x27;
  
  FUN_100f3f484(&stack0x00003e30,s_Personality_set_to_108ada991,&stack0x00000140);
  lVar1 = *(long *)(unaff_x27 + 0xb18);
  if (lVar1 != 0) {
    unaff_x22 = *(undefined8 *)(unaff_x27 + 0xb20);
    FUN_100f41b28(&stack0x00003d40,&UNK_108cd8776,5);
    FUN_100f41b28(&stack0x00003d40,lVar1,unaff_x22);
    FUN_100f41b28(&stack0x00003d40,&UNK_108c987e0,8);
  }
  __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE
            (*(undefined8 *)(unaff_x27 + 1000),&stack0x00003d40,&stack0x00003e30);
  if (*(long *)(unaff_x27 + 0xb00) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xb08));
  }
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

