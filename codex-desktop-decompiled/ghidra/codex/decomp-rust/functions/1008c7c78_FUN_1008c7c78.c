
void FUN_1008c7c78(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_stack_000000a0;
  undefined1 *in_stack_000000b0;
  undefined1 in_stack_000000b8;
  undefined8 in_stack_00004bb0;
  undefined8 in_stack_00004bb8;
  undefined8 in_stack_00004bc0;
  undefined7 in_stack_00004bc8;
  undefined1 in_stack_00004bcf;
  undefined7 in_stack_00004bd0;
  undefined8 in_stack_00004be0;
  undefined8 in_stack_00004be8;
  undefined8 in_stack_00004bf0;
  undefined8 in_stack_00004c00;
  undefined8 in_stack_00004c08;
  undefined8 in_stack_00004c10;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004c00,s__timed_out_waiting_for_app_lists_108aca485,&stack0x000112a0);
  *(undefined2 *)(unaff_x20 + 0x96) = 0;
  *(undefined4 *)(unaff_x20 + 0x99) = 0;
  lVar4 = *(long *)(unaff_x19 + 0x4bb8);
  if (lVar4 != -0x8000000000000000) {
    lVar2 = *(long *)(unaff_x19 + 0x4bc0);
    lVar1 = lVar2;
    for (lVar3 = *(long *)(unaff_x19 + 0x4bc8); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e3b46c(lVar1);
      lVar1 = lVar1 + 0x270;
    }
    if (lVar4 != 0) {
      _free(lVar2);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x9d) = 0;
  FUN_100d3fd38(unaff_x19 + 0x4ba0);
  *(undefined1 *)(unaff_x20 + 0x9e) = 0;
  lVar4 = *(long *)(unaff_x19 + 0x4b80);
  if (lVar4 != -0x8000000000000000) {
    lVar2 = *(long *)(unaff_x19 + 0x4b88);
    lVar1 = lVar2;
    for (lVar3 = *(long *)(unaff_x19 + 0x4b90); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e3b46c(lVar1);
      lVar1 = lVar1 + 0x270;
    }
    if (lVar4 != 0) {
      _free(lVar2);
    }
  }
  lVar4 = *(long *)(unaff_x19 + 0x4b68);
  if (lVar4 != -0x8000000000000000) {
    lVar2 = *(long *)(unaff_x19 + 0x4b70);
    lVar1 = lVar2;
    for (lVar3 = *(long *)(unaff_x19 + 0x4b78); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e3b46c(lVar1);
      lVar1 = lVar1 + 0x270;
    }
    if (lVar4 != 0) {
      _free(lVar2);
    }
  }
  lVar4 = *(long *)(unaff_x19 + 0x4b50);
  if (lVar4 != -0x8000000000000000) {
    lVar2 = *(long *)(unaff_x19 + 0x4b58);
    lVar1 = lVar2;
    for (lVar3 = *(long *)(unaff_x19 + 0x4b60); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e3b46c(lVar1);
      lVar1 = lVar1 + 0x270;
    }
    if (lVar4 != 0) {
      _free(lVar2);
    }
  }
  if ((*(byte *)(unaff_x20 + 0x98) & 1) != 0) {
    lVar4 = **(long **)(unaff_x19 + 0x4be0);
    **(long **)(unaff_x19 + 0x4be0) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(unaff_x19 + 0x4be0);
    }
  }
  *(undefined1 *)(unaff_x20 + 0x98) = 0;
  FUN_100de93d0(unaff_x19 + 0x25e0);
  if ((*(long *)(unaff_x19 + 0x25b8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x25b8) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x19 + 0x25c0));
  }
  in_stack_000000a0[5] = in_stack_00004be8;
  in_stack_000000a0[4] = in_stack_00004be0;
  *(undefined8 *)((long)in_stack_000000a0 + 0x41) = in_stack_00004bb8;
  *(undefined8 *)((long)in_stack_000000a0 + 0x39) = in_stack_00004bb0;
  *in_stack_000000a0 = in_stack_00004c00;
  in_stack_000000a0[1] = in_stack_00004c08;
  in_stack_000000a0[2] = in_stack_00004c10;
  in_stack_000000a0[3] = 0x8000000000000005;
  in_stack_000000a0[6] = in_stack_00004bf0;
  *(undefined1 *)(in_stack_000000a0 + 7) = in_stack_000000b8;
  *(ulong *)((long)in_stack_000000a0 + 0x51) = CONCAT17(in_stack_00004bcf,in_stack_00004bc8);
  *(undefined8 *)((long)in_stack_000000a0 + 0x49) = in_stack_00004bc0;
  in_stack_000000a0[0xb] = CONCAT71(in_stack_00004bd0,in_stack_00004bcf);
  in_stack_000000a0[0xc] = 0xffffffffffff80a5;
  *in_stack_000000b0 = 1;
  return;
}

