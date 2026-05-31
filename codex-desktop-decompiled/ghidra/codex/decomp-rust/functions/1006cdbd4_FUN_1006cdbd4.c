
void FUN_1006cdbd4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  byte *in_stack_00000098;
  long in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000ea0;
  undefined8 in_stack_00000ea8;
  undefined8 in_stack_00000eb0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000002b0,s__failed_to_serialize_session_sta_108ac314f,unaff_x29 + -0x80);
  in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x1d8);
  in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x1d0);
  __ZN11codex_hooks6events6common33serialization_failure_hook_events17hfa8430faf905ecd9E
            (&stack0x00000ea0,unaff_x29 + -0xf0,&stack0x000001d0,&stack0x000000e0);
  if (*in_stack_000000a8 == 1) {
    uVar7 = in_stack_000000a8[1];
    if ((uVar7 & 3) != 1) goto LAB_1006cdc54;
    puVar6 = (undefined8 *)(uVar7 - 1);
    uVar9 = *puVar6;
    puVar5 = *(undefined8 **)(uVar7 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar9);
    }
    if (puVar5[1] != 0) {
      _free(uVar9);
    }
  }
  else {
    if ((*in_stack_000000a8 != 0) || (in_stack_000000a8[2] == 0)) goto LAB_1006cdc54;
    puVar6 = (undefined8 *)in_stack_000000a8[1];
  }
  _free(puVar6);
LAB_1006cdc54:
  _free(in_stack_000000a8);
  FUN_100e1eb1c(&stack0x00000870);
  if ((*in_stack_00000098 & 1) != 0) {
    lVar1 = *(long *)(in_stack_000000a0 + 0x1c0);
    lVar4 = *(long *)(in_stack_000000a0 + 0x1c8);
    if (lVar4 != 0) {
      lVar8 = lVar1 + 0x60;
      do {
        if (*(long *)(lVar8 + -0x30) == -0x8000000000000000 || *(long *)(lVar8 + -0x30) == 0) {
          lVar2 = *(long *)(lVar8 + -0x60);
        }
        else {
          _free(*(undefined8 *)(lVar8 + -0x28));
          lVar2 = *(long *)(lVar8 + -0x60);
        }
        if (lVar2 != 0) {
          _free(*(undefined8 *)(lVar8 + -0x58));
        }
        if (*(long *)(lVar8 + -0x18) == -0x8000000000000000 || *(long *)(lVar8 + -0x18) == 0) {
          lVar2 = *(long *)(lVar8 + -0x48);
        }
        else {
          _free(*(undefined8 *)(lVar8 + -0x10));
          lVar2 = *(long *)(lVar8 + -0x48);
        }
        if (lVar2 != 0) {
          _free(*(undefined8 *)(lVar8 + -0x40));
        }
        FUN_100cb56bc(lVar8);
        lVar8 = lVar8 + 0xa8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*unaff_x24 != 0) {
      _free(lVar1);
    }
  }
  *(undefined1 *)(in_stack_000000a0 + 0x2b2) = 0;
  if ((((*(byte *)(in_stack_000000a0 + 0x2b1) & 1) != 0) &&
      (*(long *)(in_stack_000000a0 + 0x1a0) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000a0 + 0x1a0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x1a8));
  }
  *(undefined1 *)(in_stack_000000a0 + 0x2b1) = 0;
  if (*(long *)(in_stack_000000a0 + 0xe8) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0xf0));
  }
  if ((*(long *)(in_stack_000000a0 + 0x130) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000a0 + 0x130) != 0)) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x138));
  }
  if (*(long *)(in_stack_000000a0 + 0x100) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x108));
  }
  if (*(long *)(in_stack_000000a0 + 0x118) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x120));
  }
  if (*(long *)(in_stack_000000a0 + 0x148) != -0x8000000000000000) {
    if (((*(byte *)(in_stack_000000a0 + 0x2b5) & 1) != 0) &&
       (*(long *)(in_stack_000000a0 + 0x148) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x150));
    }
    if (((*(byte *)(in_stack_000000a0 + 0x2b4) & 1) != 0) &&
       (*(long *)(in_stack_000000a0 + 0x160) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x168));
    }
    if (((*(byte *)(in_stack_000000a0 + 0x2b3) & 1) != 0) &&
       (*(long *)(in_stack_000000a0 + 0x178) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x180));
    }
  }
  *(undefined2 *)(in_stack_000000a0 + 0x2b3) = 0;
  *(undefined1 *)(in_stack_000000a0 + 0x2b5) = 0;
  *in_stack_00000048 = in_stack_00000ea0;
  in_stack_00000048[1] = in_stack_00000ea8;
  in_stack_00000048[2] = in_stack_00000eb0;
  in_stack_00000048[3] = 0;
  in_stack_00000048[4] = 8;
  in_stack_00000048[5] = 0;
  in_stack_00000048[6] = 0x8000000000000000;
  in_stack_00000048[7] = unaff_x25;
  in_stack_00000048[8] = 0x8000000000000000;
  *(undefined1 *)(in_stack_00000048 + 9) = 0;
  *(undefined1 *)(in_stack_000000a0 + 0x2b0) = 1;
  return;
}

