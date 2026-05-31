
/* WARNING: Removing unreachable block (ram,0x00010178d414) */
/* WARNING: Removing unreachable block (ram,0x00010178d418) */
/* WARNING: Removing unreachable block (ram,0x00010178d430) */
/* WARNING: Removing unreachable block (ram,0x00010178d438) */
/* WARNING: Removing unreachable block (ram,0x00010178d424) */
/* WARNING: Removing unreachable block (ram,0x00010178d444) */
/* WARNING: Removing unreachable block (ram,0x00010178d448) */

void FUN_10178ae44(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *puVar3;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000140;
  long in_stack_00000228;
  long in_stack_00000230;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if (unaff_x22 != 0) {
    _free();
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000010);
  }
  if ((in_stack_00000068 != -0x7fffffffffffffff) && (in_stack_00000068 != -0x8000000000000000)) {
    if (in_stack_00000230 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000228 + 0x10);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        in_stack_00000230 = in_stack_00000230 + -1;
      } while (in_stack_00000230 != 0);
    }
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000228);
    }
  }
  uVar1 = 0;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w21;
  }
  if ((uVar1 & 1) != 0) {
    _free();
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

