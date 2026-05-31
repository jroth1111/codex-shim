
/* WARNING: Removing unreachable block (ram,0x0001003f67bc) */
/* WARNING: Removing unreachable block (ram,0x0001003f7384) */
/* WARNING: Removing unreachable block (ram,0x0001003f738c) */
/* WARNING: Removing unreachable block (ram,0x0001003f7398) */
/* WARNING: Removing unreachable block (ram,0x0001003f73a0) */
/* WARNING: Removing unreachable block (ram,0x0001003f73a8) */
/* WARNING: Removing unreachable block (ram,0x0001003f73b0) */

void FUN_1003f71e4(void)

{
  ulong uVar1;
  int unaff_w19;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  undefined8 in_stack_00000038;
  uint in_stack_00000040;
  undefined8 *in_stack_00000048;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E(in_stack_00000038);
  _memcpy(&stack0x00000408,&stack0x000002b0,0x120);
  FUN_100c1fc90(unaff_x27 + 0x128,&stack0x00000400);
  func_0x0001056f7fcc(unaff_x27 + 0x128,0,&stack0x00000220,unaff_x27 + 0x20);
  __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
            (unaff_x27 + 0x20,&stack0x00000400,unaff_w19 != 1000000000);
  if ((((unaff_x23 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
     (uVar1 = FUN_107c05e34(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x26 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*unaff_x22);
  if ((((in_stack_00000040 & 1) == 0) && ((*unaff_x28 & 0x7fffffffffffffff) != 0)) &&
     (uVar1 = FUN_107c05e34(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x27 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*in_stack_00000048);
  return;
}

