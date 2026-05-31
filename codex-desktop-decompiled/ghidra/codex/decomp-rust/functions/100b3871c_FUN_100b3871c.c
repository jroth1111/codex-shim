
/* WARNING: Type propagation algorithm not settling */

void FUN_100b3871c(void)

{
  char cVar1;
  undefined8 uVar2;
  char *unaff_x19;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar3;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000178;
  long in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000860);
  unaff_x26[1] = uVar2;
  *unaff_x26 = 0x8000000000000000;
  if (in_stack_000001d0 != -0x8000000000000000) {
    FUN_100e3dc10(&stack0x00000208);
  }
  if ((in_stack_000001f0 != -0x7fffffffffffffff) && (in_stack_000001f0 != -0x8000000000000000)) {
    if (in_stack_00000200 != 0) {
      puVar3 = (undefined8 *)(in_stack_000001f8 + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 7;
        in_stack_00000200 = in_stack_00000200 + -1;
      } while (in_stack_00000200 != 0);
    }
    if (in_stack_000001f0 != 0) {
      _free(in_stack_000001f8);
    }
  }
  if ((in_stack_000001e8 != 0x8000000000000001) && ((in_stack_000001e8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000140);
  }
  if ((in_stack_000001d8 != 0x8000000000000001) && ((in_stack_000001d8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000148);
  }
  if ((in_stack_000001e0 != 0x8000000000000001) && ((in_stack_000001e0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000150);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000160);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) == 0) {
    cVar1 = *unaff_x19;
  }
  else {
    _free(in_stack_00000178);
    cVar1 = *unaff_x19;
  }
  if (cVar1 != '\x16') {
    FUN_100e077ec(unaff_x19);
  }
  return;
}

