
void FUN_100216694(void)

{
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s___108aba6c8,&stack0x00000030);
  if (*unaff_x21 == -0x8000000000000000) {
    *unaff_x20 = 0x8000000000000002;
    if ((in_stack_00000000 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000008);
    }
  }
  else {
    __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE();
    *unaff_x20 = 0x8000000000000002;
  }
  if ((*unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x19[1]);
  }
  return;
}

