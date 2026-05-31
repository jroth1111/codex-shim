
void FUN_10186e210(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  char *pcStack00000000000000c0;
  long lStack00000000000000c8;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s_5failed_to_serialize_app_server_a_108add1c5;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b25d1e8;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  lStack0000000000000090 = *(long *)(unaff_x22 + 0x60);
  uStack0000000000000098 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack0000000000000078 = *(long *)(unaff_x22 + 0x50);
  uStack0000000000000080 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack0000000000000070 = 1;
  if (lStack0000000000000078 == 0) {
    uStack0000000000000070 = 2;
  }
  uStack00000000000000b8 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000bc = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000020;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
  uStack0000000000000088 = 1;
  if (lStack0000000000000090 == 0) {
    uStack0000000000000088 = 2;
  }
  uStack00000000000000a8 = in_stack_00000010;
  uStack00000000000000a0 = in_stack_00000008;
  uStack00000000000000b0 = in_stack_00000018;
  lStack00000000000000c8 = unaff_x29 + -0x40;
  pcStack00000000000000c0 = s__108b39f4f;
  uStack0000000000000038 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  if (*in_stack_00000000 == 1) {
    uVar3 = in_stack_00000000[1];
    if ((uVar3 & 3) != 1) goto LAB_10186e2f4;
    puVar2 = (undefined8 *)(uVar3 - 1);
    uVar4 = *puVar2;
    puVar5 = *(undefined8 **)(uVar3 + 7);
    pcVar1 = (code *)*puVar5;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
  }
  else {
    if ((*in_stack_00000000 != 0) || (in_stack_00000000[2] == 0)) goto LAB_10186e2f4;
    puVar2 = (undefined8 *)in_stack_00000000[1];
  }
  _free(puVar2);
LAB_10186e2f4:
  _free(in_stack_00000000);
  *unaff_x19 = 0x8000000000000000;
  return;
}

