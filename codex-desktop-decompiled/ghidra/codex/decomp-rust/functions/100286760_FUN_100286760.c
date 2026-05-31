
void FUN_100286760(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00002a70;
  undefined8 in_stack_00002a78;
  undefined8 in_stack_00002a80;
  long in_stack_00005d00;
  undefined8 *in_stack_00005d08;
  undefined8 *in_stack_00005d10;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002a70,s_CONNECT_tunnel_failed__108ab952c,&stack0x00000900);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002872cc);
    (*pcVar3)();
  }
  *puVar2 = in_stack_00002a70;
  puVar2[1] = in_stack_00002a78;
  puVar2[2] = in_stack_00002a80;
  if (in_stack_00005d00 == 1) {
    if (((ulong)in_stack_00005d08 & 3) != 1) goto LAB_100286ba8;
    puVar5 = (undefined8 *)((long)in_stack_00005d08 + -1);
    uVar6 = *puVar5;
    puVar4 = *(undefined8 **)((long)in_stack_00005d08 + 7);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar6);
    }
    if (puVar4[1] != 0) {
      _free(uVar6);
    }
  }
  else {
    if (in_stack_00005d00 != 0) goto LAB_100286ba8;
    if ((code *)*in_stack_00005d10 != (code *)0x0) {
      (*(code *)*in_stack_00005d10)(in_stack_00005d08);
    }
    puVar5 = in_stack_00005d08;
    if (in_stack_00005d10[1] == 0) goto LAB_100286ba8;
  }
  _free(puVar5);
LAB_100286ba8:
  *(undefined1 *)(unaff_x28 + 0x141) = 0;
  FUN_1002b828c();
  FUN_1002bd1ac(unaff_x28 + 0xe0);
  if (*(char *)(unaff_x28 + 0x142) == '\x01') {
    lVar1 = **(long **)(unaff_x28 + 0x138);
    **(long **)(unaff_x28 + 0x138) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E(unaff_x28 + 0x138);
    }
  }
  *unaff_x27 = (long)puVar2;
  unaff_x27[1] = (long)&UNK_10b1f3778;
  *(undefined1 *)(unaff_x27 + 2) = 2;
  *(undefined1 *)(unaff_x28 + 0x140) = 1;
  return;
}

