
void FUN_10178f21c(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong *in_stack_00000040;
  long in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000140;
  
  uVar2 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  puVar1 = in_stack_00000040;
  if (in_stack_00000058 != -0x8000000000000000) {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      uVar3 = *puVar1;
      uVar5 = uVar3 ^ 0x8000000000000000;
      if (-1 < (long)uVar3) {
        uVar5 = 1;
      }
      if ((uVar5 == 0) || (uVar5 != 1)) {
        if (puVar1[1] != 0) {
          lVar4 = 0x10;
          goto LAB_10178b680;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_10178b680:
        _free(*(undefined8 *)((long)puVar1 + lVar4));
      }
      puVar1 = puVar1 + 4;
    }
    if (in_stack_00000058 != 0) {
      _free(in_stack_00000040);
    }
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000068 != 0x8000000000000001) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

