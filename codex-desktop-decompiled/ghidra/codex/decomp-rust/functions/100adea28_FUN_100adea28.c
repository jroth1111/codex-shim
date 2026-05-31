
/* WARNING: Removing unreachable block (ram,0x000100adec58) */
/* WARNING: Removing unreachable block (ram,0x000100ade128) */
/* WARNING: Removing unreachable block (ram,0x000100ade7bc) */
/* WARNING: Removing unreachable block (ram,0x000100ade7f4) */
/* WARNING: Removing unreachable block (ram,0x000100ade154) */
/* WARNING: Removing unreachable block (ram,0x000100ade168) */
/* WARNING: Removing unreachable block (ram,0x000100ade170) */
/* WARNING: Removing unreachable block (ram,0x000100ade18c) */
/* WARNING: Removing unreachable block (ram,0x000100ade174) */
/* WARNING: Removing unreachable block (ram,0x000100ade19c) */
/* WARNING: Removing unreachable block (ram,0x000100ade1d4) */

void FUN_100adea28(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_000000b0;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  uint in_stack_000000f0;
  char in_stack_00000670;
  long in_stack_000006c0;
  long in_stack_000006c8;
  long in_stack_000006d0;
  ulong in_stack_000006e0;
  long in_stack_00000710;
  long in_stack_00000718;
  long in_stack_00000720;
  long in_stack_00000728;
  long in_stack_00000730;
  long in_stack_00000738;
  ulong in_stack_00000740;
  long in_stack_00000770;
  undefined8 in_stack_00000778;
  long in_stack_00000788;
  undefined8 in_stack_00000790;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000620);
  if ((in_stack_00000770 != -0x7fffffffffffffff) && (in_stack_00000770 != -0x8000000000000000)) {
    if (in_stack_00000770 != 0) {
      _free(in_stack_00000778);
    }
    if ((in_stack_00000788 != -0x8000000000000000) && (in_stack_00000788 != 0)) {
      _free(in_stack_00000790);
    }
  }
  if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_00000740 | 0xfffffffffffffffc) < 0xfffffffffffffffe) {
    FUN_100e79780(&stack0x00000750);
  }
  if (-0x7fffffffffffffff < in_stack_00000710) {
    if (in_stack_00000720 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000718 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        in_stack_00000720 = in_stack_00000720 + -1;
      } while (in_stack_00000720 != 0);
    }
    if (in_stack_00000710 != 0) {
      _free(in_stack_00000718);
    }
    if (in_stack_00000738 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000730 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        in_stack_00000738 = in_stack_00000738 + -1;
      } while (in_stack_00000738 != 0);
    }
    if (in_stack_00000728 != 0) {
      _free(in_stack_00000730);
    }
  }
  if (in_stack_000006e0 < 0x8000000000000003) {
    bVar1 = in_stack_000006e0 != 0x8000000000000000;
    if (in_stack_000006e0 < 0x8000000000000001) {
      in_stack_000006e0 = 0;
    }
    if ((bVar1) && ((in_stack_000006e0 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(&stack0x000006e0);
    }
  }
  if ((in_stack_000006c0 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < in_stack_000006c0)) {
    if (in_stack_000006d0 != 0) {
      puVar3 = (undefined8 *)(in_stack_000006c8 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        in_stack_000006d0 = in_stack_000006d0 + -1;
      } while (in_stack_000006d0 != 0);
    }
    if (in_stack_000006c0 != 0) {
      _free(in_stack_000006c8);
    }
  }
  if ((in_stack_000000c8 != 0x8000000000000001) && ((in_stack_000000c8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000d0 != 0x8000000000000001) && ((in_stack_000000d0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000048);
  }
  if ((in_stack_000000e0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  if ((in_stack_000000d8 != 0x8000000000000001) && ((in_stack_000000d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x00000690);
  if (in_stack_00000670 != '\x16') {
    FUN_100e077ec(&stack0x00000670);
  }
  if ((in_stack_000000f0 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_000000e8);
  }
  *in_stack_000000b0 = 5;
  in_stack_000000b0[1] = uVar2;
  return;
}

