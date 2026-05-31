
undefined8 FUN_1011d323c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = __ZN4core3fmt5write17h64810b21425781ecE();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(unaff_x21 + 0x18) == -0x7ffffffffffffffb) {
      uVar2 = 0;
    }
    else {
      uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

