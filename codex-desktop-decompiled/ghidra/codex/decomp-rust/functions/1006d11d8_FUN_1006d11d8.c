
void FUN_1006d11d8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 extraout_x10_03;
  undefined8 extraout_x10_04;
  undefined8 extraout_x10_05;
  undefined8 extraout_x10_06;
  undefined8 extraout_x10_07;
  undefined8 extraout_x10_08;
  undefined8 extraout_x10_09;
  undefined8 extraout_x10_10;
  long unaff_x19;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  undefined4 *in_stack_00000090;
  long *in_stack_00000098;
  long in_stack_000000a0;
  long *in_stack_000000c0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000ed0;
  undefined8 in_stack_00000ed8;
  undefined8 in_stack_00000ee0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000002e0,s__failed_to_serialize_subagent_st_108ac32a9,unaff_x29 + -0x80);
  in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x208);
  in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x200);
  __ZN11codex_hooks6events6common33serialization_failure_hook_events17hfa8430faf905ecd9E
            (&stack0x00000ed0,unaff_x29 + -0xf0,&stack0x000001e0,&stack0x000000e0);
  if (*in_stack_000000c0 == 1) {
    uVar7 = in_stack_000000c0[1];
    if ((uVar7 & 3) != 1) goto LAB_1006d1258;
    puVar6 = (undefined8 *)(uVar7 - 1);
    uVar9 = *puVar6;
    puVar4 = *(undefined8 **)(uVar7 + 7);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar9);
    }
    if (puVar4[1] != 0) {
      _free(uVar9);
    }
  }
  else {
    if ((*in_stack_000000c0 != 0) || (in_stack_000000c0[2] == 0)) goto LAB_1006d1258;
    puVar6 = (undefined8 *)in_stack_000000c0[1];
  }
  _free(puVar6);
LAB_1006d1258:
  _free(in_stack_000000c0);
  FUN_100e1ebc0(&stack0x000008a0);
  uVar9 = extraout_x10;
  if ((*(byte *)(in_stack_000000a0 + 0x2f1) & 1) != 0) {
    lVar5 = *(long *)(in_stack_000000a0 + 0x200);
    lVar3 = *(long *)(in_stack_000000a0 + 0x208);
    if (lVar3 != 0) {
      lVar8 = lVar5 + 0x60;
      do {
        if (*(long *)(lVar8 + -0x30) == -0x8000000000000000 || *(long *)(lVar8 + -0x30) == 0) {
          lVar1 = *(long *)(lVar8 + -0x60);
        }
        else {
          _free(*(undefined8 *)(lVar8 + -0x28));
          lVar1 = *(long *)(lVar8 + -0x60);
        }
        if (lVar1 != 0) {
          _free(*(undefined8 *)(lVar8 + -0x58));
        }
        if (*(long *)(lVar8 + -0x18) == -0x8000000000000000 || *(long *)(lVar8 + -0x18) == 0) {
          lVar1 = *(long *)(lVar8 + -0x48);
        }
        else {
          _free(*(undefined8 *)(lVar8 + -0x10));
          lVar1 = *(long *)(lVar8 + -0x48);
        }
        if (lVar1 != 0) {
          _free(*(undefined8 *)(lVar8 + -0x40));
        }
        FUN_100cb56bc(lVar8);
        lVar8 = lVar8 + 0xa8;
        lVar3 = lVar3 + -1;
        uVar9 = extraout_x10_00;
      } while (lVar3 != 0);
    }
    if (*in_stack_00000098 != 0) {
      _free(lVar5);
      uVar9 = extraout_x10_01;
    }
  }
  *(undefined1 *)(in_stack_000000a0 + 0x2f1) = 0;
  if (((*(byte *)(in_stack_000000a0 + 0x2f2) & 1) != 0) && (*unaff_x20 != 0)) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x110));
    uVar9 = extraout_x10_02;
  }
  if (*(long *)(in_stack_000000a0 + 0x120) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x128));
    uVar9 = extraout_x10_03;
  }
  if ((*(long *)(in_stack_000000a0 + 0x168) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000a0 + 0x168) != 0)) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x170));
    uVar9 = extraout_x10_04;
  }
  if (*(long *)(in_stack_000000a0 + 0x138) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x140));
    uVar9 = extraout_x10_05;
  }
  if (*(long *)(in_stack_000000a0 + 0x150) != 0) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x158));
    uVar9 = extraout_x10_06;
  }
  if ((*(long *)(in_stack_000000a0 + 0x180) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000a0 + 0x180) != 0)) {
    _free(*(undefined8 *)(in_stack_000000a0 + 0x188));
    uVar9 = extraout_x10_07;
  }
  if (*(long *)(in_stack_000000a0 + 0x198) != -0x8000000000000000) {
    if (((*(byte *)(in_stack_000000a0 + 0x2f5) & 1) != 0) &&
       (*(long *)(in_stack_000000a0 + 0x198) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x1a0));
      uVar9 = extraout_x10_08;
    }
    if (((*(byte *)(in_stack_000000a0 + 0x2f4) & 1) != 0) &&
       (*(long *)(in_stack_000000a0 + 0x1b0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x1b8));
      uVar9 = extraout_x10_09;
    }
    if ((((*(byte *)(in_stack_000000a0 + 0x2f3) & 1) != 0) &&
        (*(long *)(in_stack_000000a0 + 0x1c8) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000a0 + 0x1c8) != 0)) {
      _free(*(undefined8 *)(in_stack_000000a0 + 0x1d0));
      uVar9 = extraout_x10_10;
    }
  }
  *in_stack_00000090 = 0;
  *in_stack_00000048 = in_stack_00000ed0;
  in_stack_00000048[1] = in_stack_00000ed8;
  in_stack_00000048[2] = in_stack_00000ee0;
  in_stack_00000048[3] = 0;
  in_stack_00000048[4] = 8;
  in_stack_00000048[5] = 0;
  in_stack_00000048[6] = 0x8000000000000000;
  in_stack_00000048[7] = uVar9;
  in_stack_00000048[8] = 0x8000000000000000;
  in_stack_00000048[9] = 0x8000000000000000;
  in_stack_00000048[10] = in_stack_000000a0;
  in_stack_00000048[0xb] = unaff_x20;
  *(undefined1 *)(in_stack_00000048 + 0xc) = 0;
  *(undefined1 *)((long)in_stack_00000048 + 0x61) = 0;
  *(undefined1 *)(in_stack_000000a0 + 0x2f0) = 1;
  return;
}

