
void FUN_1016b8034(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 in_stack_000005c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000005b8,s__Failed_to_rebuild_config_for_cw_108adb423,&stack0x00000b68);
  uVar4 = unaff_x24[1];
  uVar3 = *unaff_x24;
  if (lRam000000010b66fc68 != 2) {
    FUN_108a0ad4c();
  }
  auVar5 = (**(code **)(lRam000000010b66fc60 + 0x28))
                     (uRam000000010b66fc58,&stack0x00000890,&UNK_10b2356d8);
  (**(code **)(auVar5._8_8_ + 0x30))(auVar5._0_8_,&UNK_10b251e30);
  puVar2 = (undefined8 *)_malloc(0x38);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016b8204);
    (*pcVar1)();
  }
  puVar2[1] = auVar5._0_8_;
  *puVar2 = &UNK_10b235f10;
  puVar2[3] = uVar3;
  puVar2[2] = auVar5._8_8_;
  puVar2[5] = in_stack_000005c8;
  puVar2[4] = uVar4;
  puVar2[6] = unaff_x21;
  if (*unaff_x25 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1f8));
  }
  *(undefined2 *)(unaff_x19 + 0x4f1) = 0;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x28));
  }
  *unaff_x20 = unaff_x23;
  unaff_x20[1] = puVar2;
  _memcpy(unaff_x20 + 2,&stack0x000055e8,0x2538);
  *(undefined1 *)(unaff_x19 + 0x4f0) = 1;
  return;
}

