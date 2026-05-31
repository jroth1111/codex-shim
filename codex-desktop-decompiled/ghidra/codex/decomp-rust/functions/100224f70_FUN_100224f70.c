
/* WARNING: Removing unreachable block (ram,0x0001002258c4) */
/* WARNING: Removing unreachable block (ram,0x000100225a7c) */
/* WARNING: Removing unreachable block (ram,0x0001002258d0) */
/* WARNING: Removing unreachable block (ram,0x000100225918) */
/* WARNING: Removing unreachable block (ram,0x000100225a9c) */

void FUN_100224f70(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x24;
  undefined2 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  long in_stack_00000480;
  long in_stack_00000488;
  long in_stack_00000490;
  long in_stack_00000560;
  long in_stack_00000568;
  long in_stack_00000570;
  ulong in_stack_000005c8;
  ulong in_stack_000005d0;
  ulong in_stack_000005d8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000005c8,s__invalid_result__expected_Assume_108ab83cb,unaff_x29 + -0xf0);
  __ZN79__LT_aws_smithy_xml__decode__ScopedDecoder_u20_as_u20_core__ops__drop__Drop_GT_4drop17h2b111c3882e0d66eE
            (&stack0x00000560);
  if (in_stack_00000570 != 0) {
    puVar2 = (undefined8 *)(in_stack_00000568 + 8);
    do {
      if ((puVar2[-1] & 0x7fffffffffffffff) != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 7;
      in_stack_00000570 = in_stack_00000570 + -1;
    } while (in_stack_00000570 != 0);
  }
  if (in_stack_00000560 != 0) {
    _free(in_stack_00000568);
  }
  __ZN79__LT_aws_smithy_xml__decode__ScopedDecoder_u20_as_u20_core__ops__drop__Drop_GT_4drop17h2b111c3882e0d66eE
            (&stack0x00000480);
  if (in_stack_00000490 != 0) {
    puVar2 = (undefined8 *)(in_stack_00000488 + 8);
    do {
      if ((puVar2[-1] & 0x7fffffffffffffff) != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 7;
      in_stack_00000490 = in_stack_00000490 + -1;
    } while (in_stack_00000490 != 0);
  }
  if (in_stack_00000480 != 0) {
    _free(in_stack_00000488);
  }
  FUN_1002455fc(&stack0x00000350);
  puVar4 = (ulong *)_malloc(0x30);
  if (puVar4 == (ulong *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
  }
  else {
    puVar4[1] = in_stack_000005c8;
    *puVar4 = unaff_x24 << 0x20 | 0xb;
    puVar4[3] = in_stack_000005d8;
    puVar4[2] = in_stack_000005d0;
    puVar4[5] = unaff_x20;
    puVar4[4] = unaff_x19;
    puVar2 = (undefined8 *)_malloc(0x80);
    if (puVar2 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x80);
    }
    else {
      puVar2[9] = in_stack_000002b8;
      puVar2[8] = in_stack_000002b0;
      puVar2[0xb] = in_stack_000002c8;
      puVar2[10] = in_stack_000002c0;
      puVar2[0xd] = puVar4;
      puVar2[0xc] = in_stack_000002d0;
      puVar2[0xf] = in_stack_000000f0;
      puVar2[0xe] = &UNK_10b1eed78;
      puVar2[1] = 0x8000000000000000;
      *puVar2 = 4;
      puVar2[3] = in_stack_00000090;
      puVar2[2] = in_stack_00000088;
      puVar2[5] = in_stack_000000a0;
      puVar2[4] = 0x8000000000000000;
      puVar2[7] = 0;
      puVar2[6] = in_stack_000000a8;
      puVar3 = (undefined8 *)_malloc(0x10);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 1;
        *puVar3 = 1;
        *unaff_x28 = 6;
        *(undefined8 **)(unaff_x28 + 4) = puVar2;
        *(undefined **)(unaff_x28 + 8) = &UNK_10b1f00d8;
        *(undefined8 **)(unaff_x28 + 0xc) = puVar3;
        *(undefined **)(unaff_x28 + 0x10) = &UNK_10b1f00f8;
        *(undefined8 *)(unaff_x28 + 0x14) = 1;
        *(undefined **)(unaff_x28 + 0x18) = &UNK_10b1f0128;
        return;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100225b48);
  (*pcVar1)();
}

