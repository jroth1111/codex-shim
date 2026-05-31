
/* WARNING: Removing unreachable block (ram,0x00010022fdf8) */
/* WARNING: Removing unreachable block (ram,0x00010023174c) */
/* WARNING: Removing unreachable block (ram,0x00010022fe04) */
/* WARNING: Removing unreachable block (ram,0x00010022fe20) */
/* WARNING: Removing unreachable block (ram,0x00010023176c) */

void FUN_10022fc24(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x24;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *in_stack_00000030;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  long in_stack_000005d0;
  long in_stack_000005d8;
  long in_stack_000005e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000638,s__invalid_root__expected_AssumeRo_108ab83fc,&stack0x00000880);
  __ZN79__LT_aws_smithy_xml__decode__ScopedDecoder_u20_as_u20_core__ops__drop__Drop_GT_4drop17h2b111c3882e0d66eE
            (&stack0x000005d0);
  if (in_stack_000005e0 != 0) {
    puVar2 = (undefined8 *)(in_stack_000005d8 + 8);
    do {
      if ((puVar2[-1] & 0x7fffffffffffffff) != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 7;
      in_stack_000005e0 = in_stack_000005e0 + -1;
    } while (in_stack_000005e0 != 0);
  }
  if (in_stack_000005d0 != 0) {
    _free(in_stack_000005d8);
  }
  FUN_1002475b0(&stack0x00000450);
  puVar2 = (undefined8 *)_malloc(0x30);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
  }
  else {
    uVar4 = unaff_x24[0x22];
    uVar6 = unaff_x24[0x25];
    uVar5 = unaff_x24[0x24];
    puVar2[1] = unaff_x24[0x23];
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar4 = unaff_x24[0x26];
    puVar2[5] = unaff_x24[0x27];
    puVar2[4] = uVar4;
    unaff_x24[10] = in_stack_00000380;
    unaff_x24[9] = in_stack_00000378;
    unaff_x24[0xc] = in_stack_00000390;
    unaff_x24[0xb] = in_stack_00000388;
    unaff_x24[0xe] = &UNK_10b1eed78;
    unaff_x24[0xd] = puVar2;
    unaff_x24[8] = in_stack_00000370;
    unaff_x24[7] = 0;
    unaff_x24[2] = in_stack_00000068;
    unaff_x24[1] = 0x8000000000000000;
    unaff_x24[4] = 0x8000000000000000;
    unaff_x24[3] = in_stack_00000070;
    puVar2 = (undefined8 *)_malloc(0x80);
    if (puVar2 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x80);
    }
    else {
      uVar4 = unaff_x24[8];
      uVar6 = unaff_x24[0xb];
      uVar5 = unaff_x24[10];
      puVar2[9] = unaff_x24[9];
      puVar2[8] = uVar4;
      puVar2[0xb] = uVar6;
      puVar2[10] = uVar5;
      uVar4 = unaff_x24[0xc];
      uVar6 = unaff_x24[0xf];
      uVar5 = unaff_x24[0xe];
      puVar2[0xd] = unaff_x24[0xd];
      puVar2[0xc] = uVar4;
      puVar2[0xf] = uVar6;
      puVar2[0xe] = uVar5;
      uVar4 = *unaff_x24;
      uVar6 = unaff_x24[3];
      uVar5 = unaff_x24[2];
      puVar2[1] = unaff_x24[1];
      *puVar2 = uVar4;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      uVar4 = unaff_x24[4];
      uVar6 = unaff_x24[7];
      uVar5 = unaff_x24[6];
      puVar2[5] = unaff_x24[5];
      puVar2[4] = uVar4;
      puVar2[7] = uVar6;
      puVar2[6] = uVar5;
      puVar3 = (undefined8 *)_malloc(0x10);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 1;
        *puVar3 = 1;
        *in_stack_00000030 = 6;
        *(undefined8 **)(in_stack_00000030 + 4) = puVar2;
        *(undefined **)(in_stack_00000030 + 8) = &UNK_10b1f0158;
        *(undefined8 **)(in_stack_00000030 + 0xc) = puVar3;
        *(undefined **)(in_stack_00000030 + 0x10) = &UNK_10b1f0178;
        *(undefined8 *)(in_stack_00000030 + 0x14) = 1;
        *(undefined **)(in_stack_00000030 + 0x18) = &UNK_10b1f01a8;
        return;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002317f4);
  (*pcVar1)();
}

