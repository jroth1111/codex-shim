
void FUN_100ba2f24(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x26;
  long unaff_x27;
  
  uVar1 = FUN_108858fa8(s_pid_managed_app_server_has_no_re_108ad1ab2,&stack0x00000378);
  if (unaff_x27 != 0) {
    _free();
  }
  if (unaff_x26 != 0) {
    _free();
  }
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = 0x8000000000000000;
  *(undefined1 *)(unaff_x19 + 0x458) = 1;
  return;
}

