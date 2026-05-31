
undefined8 FUN_100a447f0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x21;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000028;
  long lStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  *(char **)(unaff_x29 + -0x70) = s__http_upgrade_proxy_client_conn_f_108acec63;
  *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000280;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
  lStack0000000000000030 = unaff_x29 + -0x98;
  uStack0000000000000028 = 1;
  uStack0000000000000038 = 1;
  *(undefined8 **)(unaff_x29 + -0xf0) = &stack0x00000028;
  *(undefined1 *)(unaff_x29 + -0xe8) = 1;
  *(undefined8 *)(unaff_x24 + 0xa8) = in_stack_00000010;
  *(undefined8 *)(unaff_x24 + 0xa0) = in_stack_00000008;
  uStack0000000000000040 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  plVar2 = *(long **)(unaff_x29 + -0xb0);
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)plVar2[1];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(lVar3);
    }
    if (puVar4[1] != 0) {
      _free(lVar3);
    }
  }
  _free(plVar2);
  *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
  return 0;
}

