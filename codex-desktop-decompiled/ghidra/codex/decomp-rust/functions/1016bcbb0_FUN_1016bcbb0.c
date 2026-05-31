
/* WARNING: Removing unreachable block (ram,0x0001016bcc50) */
/* WARNING: Removing unreachable block (ram,0x0001016bcc8c) */
/* WARNING: Removing unreachable block (ram,0x0001016bcc60) */
/* WARNING: Removing unreachable block (ram,0x0001016bd758) */

void FUN_1016bcbb0(void)

{
  code *pcVar1;
  ulong unaff_x19;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  long *in_stack_000007a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000200,s_1failed_to_serialize_request_use_108adb515,unaff_x29 + -0xd0);
  if (*in_stack_000007a0 == 1) {
    uVar4 = in_stack_000007a0[1];
    if ((uVar4 & 3) != 1) goto LAB_1016bcc00;
    puVar3 = (undefined8 *)(uVar4 - 1);
    uVar5 = *puVar3;
    puVar2 = *(undefined8 **)(uVar4 + 7);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar5);
    }
    if (puVar2[1] != 0) {
      _free(uVar5);
    }
  }
  else {
    if ((*in_stack_000007a0 != 0) || (in_stack_000007a0[2] == 0)) goto LAB_1016bcc00;
    puVar3 = (undefined8 *)in_stack_000007a0[1];
  }
  _free(puVar3);
LAB_1016bcc00:
  _free(in_stack_000007a0);
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (unaff_x25 != 0) {
    _free(in_stack_00000010);
  }
  in_stack_00000040[2] = in_stack_00000208;
  in_stack_00000040[3] = in_stack_00000210;
  in_stack_00000040[1] = in_stack_00000200;
  *in_stack_00000040 = 0x8000000000000002;
  FUN_100dfca00(&stack0x00000048);
  return;
}

