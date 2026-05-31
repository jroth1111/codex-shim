
void FUN_10055e094(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x19;
  undefined2 *unaff_x20;
  undefined4 in_stack_00000348;
  undefined3 in_stack_0000034c;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined4 in_stack_000003b8;
  undefined2 in_stack_000003bc;
  undefined8 *in_stack_00000cb0;
  undefined8 in_stack_00001a00;
  undefined8 in_stack_00001a08;
  undefined8 in_stack_00001a10;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001a00,s_failed_to_build_network_proxy__108ac1055,&stack0x00001358);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar3 = in_stack_00001a00;
    puVar3[1] = in_stack_00001a08;
    puVar3[2] = in_stack_00001a10;
    plVar4 = (long *)_malloc(0x18);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)puVar3;
      plVar4[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar4 + 2) = 0x28;
      (**(code **)*in_stack_00000cb0)();
      *(undefined2 *)(unaff_x19 + 300) = 0;
      *(undefined1 *)(unaff_x19 + 0x12e) = 0;
      plVar5 = *(long **)(unaff_x19 + 0x118);
      if ((plVar5 != (long *)0x0) && ((*(byte *)(unaff_x19 + 299) & 1) != 0)) {
        lVar2 = *plVar5;
        *plVar5 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x118);
        }
      }
      *(undefined1 *)(unaff_x19 + 299) = 0;
      plVar5 = *(long **)(unaff_x19 + 0x108);
      if ((plVar5 != (long *)0x0) && (*(char *)(unaff_x19 + 0x12a) == '\x01')) {
        lVar2 = *plVar5;
        *plVar5 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x108);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x12a) = 0;
      *unaff_x20 = 2;
      *(undefined4 *)(unaff_x20 + 1) = in_stack_000003b8;
      unaff_x20[3] = in_stack_000003bc;
      *(long *)(unaff_x20 + 4) = (long)plVar4 + 1;
      *(undefined8 *)(unaff_x20 + 0x1c) = in_stack_00000378;
      *(undefined8 *)(unaff_x20 + 0x18) = in_stack_00000370;
      *(undefined8 *)(unaff_x20 + 0x24) = in_stack_00000388;
      *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000380;
      *(undefined8 *)(unaff_x20 + 0x2c) = in_stack_00000398;
      *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000390;
      *(undefined8 *)(unaff_x20 + 0x34) = in_stack_000003a8;
      *(undefined8 *)(unaff_x20 + 0x30) = in_stack_000003a0;
      *(undefined8 *)(unaff_x20 + 0xc) = in_stack_00000358;
      *(undefined8 *)(unaff_x20 + 8) = in_stack_00000350;
      *(undefined8 *)(unaff_x20 + 0x14) = in_stack_00000368;
      *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000360;
      *(long **)(unaff_x20 + 0x38) = plVar4;
      *(undefined8 *)(unaff_x20 + 0x3c) = in_stack_00001a00;
      *(undefined1 *)(unaff_x20 + 0x40) = 0;
      *(undefined4 *)((long)unaff_x20 + 0x81) = in_stack_00000348;
      *(uint *)(unaff_x20 + 0x42) =
           CONCAT31(in_stack_0000034c,(char)((uint)in_stack_00000348 >> 0x18));
      *(undefined1 *)(unaff_x19 + 0x129) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10055f74c);
  (*pcVar1)();
}

