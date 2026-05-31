
/* WARNING: Type propagation algorithm not settling */

void FUN_100a91228(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char *unaff_x19;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x28;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_000001c8;
  ulong in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  ulong in_stack_000001f8;
  ulong in_stack_00000200;
  ulong in_stack_00000208;
  long in_stack_00000210;
  long in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000580);
  *unaff_x24 = 0x8000000000000000;
  unaff_x24[1] = uVar2;
  if ((in_stack_000001d0 != 0x8000000000000001) && ((in_stack_000001d0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000118);
  }
  if (((in_stack_00000210 != -0x7fffffffffffffff) && (in_stack_00000210 != -0x8000000000000000)) &&
     (FUN_100e40160(in_stack_00000280,in_stack_00000288), in_stack_00000210 != 0)) {
    _free(in_stack_00000280);
  }
  if ((-0x7fffffffffffffff < in_stack_000001c8) && (in_stack_000001c8 != 0)) {
    _free(in_stack_00000140);
  }
  if ((-0x7fffffffffffffff < in_stack_000001d8) && (in_stack_000001d8 != 0)) {
    _free(in_stack_00000120);
  }
  if ((-0x7fffffffffffffff < in_stack_000001e0) && (in_stack_000001e0 != 0)) {
    _free(in_stack_00000128);
  }
  if ((-0x7fffffffffffffff < in_stack_000001e8) && (in_stack_000001e8 != 0)) {
    _free(in_stack_00000130);
  }
  if ((-0x7fffffffffffffff < in_stack_000001f0) && (in_stack_000001f0 != 0)) {
    _free(in_stack_00000138);
  }
  if (unaff_x25 != 0x800000000000000e) {
    lVar3 = unaff_x25 + 0x7ffffffffffffffa;
    if (unaff_x25 < 0x8000000000000006) {
      lVar3 = 6;
    }
    if (lVar3 == 6) {
      FUN_100e0fca4(&stack0x00000218);
    }
    else if ((lVar3 == 4) && (in_stack_00000220 != 0)) {
      _free(in_stack_00000228);
    }
  }
  if ((in_stack_000001f8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000148);
  }
  if ((in_stack_00000200 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000150);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000158);
  }
  if ((in_stack_00000208 & 0x7fffffffffffffff) == 0) {
    cVar1 = *unaff_x19;
  }
  else {
    _free(in_stack_00000160);
    cVar1 = *unaff_x19;
  }
  if (cVar1 != '\x16') {
    FUN_100e077ec();
  }
  return;
}

