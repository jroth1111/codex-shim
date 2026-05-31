
void FUN_10167db3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long lVar1;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined1 auVar2 [16];
  long lStack0000000000000140;
  undefined1 *puStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  long in_stack_00006750;
  undefined8 in_stack_00006758;
  
  puStack0000000000000148 = &stack0x00006710;
  lStack0000000000000140 = 1;
  uStack0000000000000150 = 1;
  uStack0000000000000158 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lStack0000000000000140 = unaff_x27 + 0xb00;
  puStack0000000000000148 = &DAT_10112965c;
  FUN_100f3f484(&stack0x00003e30,s_Model_changed_to_108ada932,&stack0x00000140);
  auVar2 = __ZN9codex_tui3app18config_persistence37__LT_impl_u20_codex_tui__app__App_GT_19reasoning_label_for17he80b3e11143e9e33E
                     (*(undefined8 *)(unaff_x27 + 0xb08),*(undefined8 *)(unaff_x27 + 0xb10),
                      *(undefined1 *)(unaff_x27 + 0xaf8));
  if (auVar2._0_8_ != 0) {
    FUN_100f41a0c(&stack0x00003cf0,0x20);
    FUN_100f41b28(&stack0x00003cf0,auVar2._0_8_,auVar2._8_8_);
    unaff_x22 = auVar2._8_8_;
  }
  lVar1 = *(long *)(unaff_x27 + 0xb18);
  if (lVar1 != 0) {
    unaff_x22 = *(undefined8 *)(unaff_x27 + 0xb20);
    FUN_100f41b28(&stack0x00003cf0,&UNK_108cd8776,5);
    FUN_100f41b28(&stack0x00003cf0,lVar1,unaff_x22);
    FUN_100f41b28(&stack0x00003cf0,&UNK_108c987e0,8);
  }
  __ZN9codex_tui10chatwidget10ChatWidget16add_info_message17h49887c2279bddcacE
            (*(undefined8 *)(unaff_x27 + 1000),&stack0x00003cf0,&stack0x00003e30);
  if (in_stack_00006750 != 0) {
    _free(in_stack_00006758);
  }
  if (*(long *)(unaff_x27 + 0xb00) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xb08));
  }
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

