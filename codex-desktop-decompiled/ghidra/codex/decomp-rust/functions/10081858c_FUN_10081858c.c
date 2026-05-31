
void FUN_10081858c(undefined8 param_1)

{
  long lVar1;
  long unaff_x21;
  long *plVar2;
  undefined8 *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  *(char **)(unaff_x29 + -0xf8) = s_incoming_body_decode_error__108ac8b6f;
  *(undefined1 **)(unaff_x29 + -0xf0) = &stack0x000000c8;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xf8;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x70;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x29 + -0xe0) = 4;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_000000c0;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000158;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000150;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000168;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000160;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000178;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000170;
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00000138;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000130;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000140;
  if ((((*unaff_x28 == 1) || (*unaff_x28 == 2)) && (*(ulong *)(unaff_x21 + 0xd0) < 2)) &&
     (*(long *)(unaff_x21 + 0x100) != 0)) {
    plVar2 = *(long **)(unaff_x21 + 0x118);
    if (((ulong)plVar2 & 1) == 0) {
      lVar1 = plVar2[4];
      plVar2[4] = lVar1 + -1;
      LORelease();
      if (lVar1 != 1) goto LAB_100818688;
      if (*plVar2 != 0) {
        _free(plVar2[1]);
      }
    }
    else {
      if (*(long *)(unaff_x21 + 0x110) + ((ulong)plVar2 >> 5) == 0) goto LAB_100818688;
      plVar2 = (long *)(*(long *)(unaff_x21 + 0x100) - ((ulong)plVar2 >> 5));
    }
    _free(plVar2);
  }
LAB_100818688:
  *unaff_x28 = 4;
  FUN_10081c074(unaff_x28 + -4);
  FUN_100817084();
  uVar3 = *(undefined8 *)(unaff_x29 + -0xc0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xa8);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x25[5] = *(undefined8 *)(unaff_x29 + -0xb8);
  unaff_x25[4] = uVar3;
  unaff_x25[7] = uVar5;
  unaff_x25[6] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x25[9] = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x25[8] = uVar3;
  unaff_x25[0xb] = uVar5;
  unaff_x25[10] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar5 = *(undefined8 *)(unaff_x29 + -200);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xd0);
  unaff_x25[1] = *(undefined8 *)(unaff_x29 + -0xd8);
  *unaff_x25 = uVar3;
  unaff_x25[3] = uVar5;
  unaff_x25[2] = uVar4;
  return;
}

