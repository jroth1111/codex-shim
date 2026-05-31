
void FUN_101b9a804(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x25;
  undefined1 unaff_w26;
  ulong unaff_x28;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_1019aaab4(s_duplicate_field_____108ac2973,&stack0x000000d0);
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000008);
  }
  *(undefined1 *)(unaff_x20 + 0xb) = unaff_w26;
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x25 + 0x38) = unaff_x20[1];
  *(undefined8 *)(unaff_x25 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x25 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x25 + 0x40) = uVar3;
  uVar1 = __ZN10serde_yaml5error8fix_mark17h40966cb431052c9fE
                    (uVar1,&stack0x000000a0,&stack0x000000d0);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar1;
  return;
}

