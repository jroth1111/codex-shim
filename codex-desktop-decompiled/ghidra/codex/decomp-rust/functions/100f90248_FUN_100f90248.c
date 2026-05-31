
void FUN_100f90248(void)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *unaff_x19;
  long unaff_x29;
  undefined1 auVar5 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s__108ac265a,&stack0x00000010);
  in_stack_00000010 = 0;
  in_stack_00000018 = 1;
  in_stack_00000020 = 0;
  if (lRam000000010b63d0b8 != 0) {
    FUN_108a82980();
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0x10b63d0c0;
  auVar5 = __ZN3std2io5stdio5Stdin9read_line17hdab9695982a426f0E(unaff_x29 + -0x18,&stack0x00000010)
  ;
  uVar1 = in_stack_00000018;
  if ((auVar5._0_8_ & 1) == 0) {
    auVar5 = FUN_100e8d6f8(in_stack_00000018,in_stack_00000020);
    pbVar2 = auVar5._0_8_;
    if (auVar5._8_8_ == 3) {
      uVar3 = 0x20;
      uVar4 = uVar3;
      if (0x19 < *pbVar2 - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | *pbVar2) == 0x79) {
        if (0x19 < pbVar2[1] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | pbVar2[1]) == 0x65) {
          uVar4 = 0x20;
          if (0x19 < pbVar2[2] - 0x41) {
            uVar4 = 0;
          }
          unaff_x19[1] = (uVar4 | pbVar2[2]) == 0x73;
          *unaff_x19 = 0;
          goto joined_r0x000100f90364;
        }
      }
    }
    else if (auVar5._8_8_ == 1) {
      uVar4 = 0x20;
      if (0x19 < *pbVar2 - 0x41) {
        uVar4 = 0;
      }
      unaff_x19[1] = (uVar4 | *pbVar2) == 0x79;
      *unaff_x19 = 0;
      goto joined_r0x000100f90364;
    }
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  else {
    *(long *)(unaff_x19 + 8) = auVar5._8_8_;
    *unaff_x19 = 1;
  }
joined_r0x000100f90364:
  if (in_stack_00000010 != 0) {
    _free(uVar1);
  }
  return;
}

