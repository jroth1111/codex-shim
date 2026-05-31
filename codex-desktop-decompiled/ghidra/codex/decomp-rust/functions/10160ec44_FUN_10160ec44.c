
void FUN_10160ec44(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 unaff_w25;
  ulong unaff_x26;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  uVar1 = FUN_1011447dc(s_duplicate_field_____108ac2973,&stack0x000000c0);
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  *(undefined1 *)(unaff_x20 + 0xb) = unaff_w25;
  in_stack_000000c8 = unaff_x20[1];
  in_stack_000000c0 = *unaff_x20;
  in_stack_000000d8 = unaff_x20[3];
  in_stack_000000d0 = unaff_x20[2];
  uVar1 = __ZN10serde_yaml5error8fix_mark17h40966cb431052c9fE
                    (uVar1,&stack0x000000a8,&stack0x000000c0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  return;
}

