
void FUN_100286ce4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x27;
  long unaff_x28;
  long in_stack_00000070;
  undefined8 in_stack_00005d00;
  undefined8 in_stack_00005d08;
  undefined8 in_stack_00005d10;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005d00,s__invalid_server_name_for_TLS_han_108ab9546,&stack0x00000900);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002872cc);
    (*pcVar1)();
  }
  *puVar3 = in_stack_00005d00;
  puVar3[1] = in_stack_00005d08;
  puVar3[2] = in_stack_00005d10;
  *(undefined1 *)(unaff_x28 + 0x143) = 0;
  if ((*(byte *)(unaff_x28 + 0x141) & 1) != 0) {
    if (in_stack_00000070 == 2) {
      FUN_1002c0e80(&stack0x00000078);
    }
    else {
      FUN_1002c0e80(&stack0x00000070);
      FUN_1002b3a9c(&stack0x00000090);
    }
  }
  *(undefined1 *)(unaff_x28 + 0x141) = 0;
  FUN_1002b828c();
  FUN_1002bd1ac(unaff_x28 + 0xe0);
  if (*(char *)(unaff_x28 + 0x142) == '\x01') {
    lVar2 = **(long **)(unaff_x28 + 0x138);
    **(long **)(unaff_x28 + 0x138) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E(unaff_x28 + 0x138);
    }
  }
  *unaff_x27 = (long)puVar3;
  unaff_x27[1] = (long)&UNK_10b1f3778;
  *(undefined1 *)(unaff_x27 + 2) = 2;
  *(undefined1 *)(unaff_x28 + 0x140) = 1;
  return;
}

