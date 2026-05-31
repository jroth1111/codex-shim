
void FUN_1016f9908(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  puStack_90 = &UNK_108cd999b;
  uStack_88 = 0x15;
  lVar1 = (param_1 & 0xff) * 8;
  uStack_68 = *(undefined8 *)(&UNK_108cdb7c0 + lVar1);
  puStack_80 = &UNK_108cde5bc;
  uStack_78 = 4;
  uStack_70 = *(undefined8 *)(&UNK_10b254ce0 + lVar1);
  ppuStack_60 = &puStack_90;
  puStack_58 = &DAT_100c7b3a0;
  ppuStack_50 = &puStack_80;
  puStack_48 = &DAT_100c7b3a0;
  puStack_40 = &uStack_70;
  puStack_38 = &DAT_100c7b3a0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&uStack_a8,s_mismatched_types__Rust_type_______108adc36c,&ppuStack_60);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uStack_a8;
    puVar3[1] = uStack_a0;
    puVar3[2] = uStack_98;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f99d0);
  (*pcVar2)();
}

