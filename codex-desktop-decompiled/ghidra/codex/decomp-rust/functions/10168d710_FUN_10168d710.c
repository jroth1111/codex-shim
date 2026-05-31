
undefined8 FUN_10168d710(void)

{
  long unaff_x19;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001940,s_Failed_to_save_shortcut__108adad22,&stack0x00001820);
  *(undefined8 *)(unaff_x24 + 0xbf8) = *(undefined8 *)(unaff_x24 + 0xcc8);
  *(undefined8 *)(unaff_x24 + 0xbf0) = *(undefined8 *)(unaff_x24 + 0xcc0);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)**(undefined8 **)(unaff_x29 + -0xc0))();
  *(undefined1 *)(unaff_x23 + 0x687) = 0;
  FUN_100df8020(unaff_x19 + 0xd58);
  if (((*(byte *)(unaff_x23 + 0x681) & 1) != 0) && (*(long *)(unaff_x19 + 0xd40) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xd48));
  }
  *(undefined1 *)(unaff_x23 + 0x681) = 0;
  lVar1 = *(long *)(unaff_x19 + 0xd30);
  lVar2 = *(long *)(unaff_x19 + 0xd38);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(long *)(unaff_x19 + 0xd28) != 0) {
    _free(lVar1);
  }
  if ((*(byte *)(unaff_x23 + 0x682) & 1) != 0) {
    FUN_100e0bbc0(unaff_x19 + 0x108);
    FUN_100e0ba70(unaff_x19 + 0x248);
    FUN_100e18a28(unaff_x19 + 0x2a8);
    FUN_100e127ac(unaff_x19 + 0x348);
    FUN_100e1bc08(unaff_x19 + 0x568);
    FUN_100e2093c(unaff_x19 + 0x828);
    FUN_100e0bbc0(unaff_x19 + 0x9a8);
    FUN_100e0bbc0(unaff_x19 + 0xae8);
    FUN_100e186f8(unaff_x19 + 0xc28);
  }
  *(undefined1 *)(unaff_x23 + 0x682) = 0;
  *(undefined4 *)(unaff_x19 + 0x1688) = 0;
  if ((-0x7fffffffffffffff < *(long *)(unaff_x19 + 0xb8)) && (*(long *)(unaff_x19 + 0xb8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xc0));
  }
  *(undefined1 *)(unaff_x23 + 0x683) = 0;
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xa8));
  }
  *(undefined1 *)(unaff_x23 + 0x684) = 0;
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x90));
  }
  *(undefined1 *)(unaff_x23 + 0x685) = 0;
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
  }
  *(undefined1 *)(unaff_x23 + 0x686) = 0;
  *(undefined1 *)(unaff_x23 + 0x680) = 1;
  return 0;
}

