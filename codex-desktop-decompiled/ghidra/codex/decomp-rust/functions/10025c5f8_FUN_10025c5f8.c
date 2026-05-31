
undefined8 FUN_10025c5f8(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000008,s____REDACTED_____To_print_E_bytes_108ab85af,&stack0x00000048);
  uVar2 = (**(code **)(unaff_x19[1] + 0x18))(*unaff_x19,&UNK_108c72c7a,5);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)unaff_x19 + 0x12) < '\0') {
      uVar2 = (**(code **)(unaff_x19[1] + 0x18))(*unaff_x19,&UNK_108f5892f,2);
      uVar3 = 1;
      if ((uVar2 & 1) != 0) goto LAB_10025c62c;
      in_stack_00000040._7_1_ = 1;
      in_stack_00000028 = unaff_x19[1];
      in_stack_00000020 = *unaff_x19;
      in_stack_00000030 = (long)&stack0x00000040 + 7;
      in_stack_00000058 = unaff_x19[2];
      in_stack_00000048 = &stack0x00000020;
      in_stack_00000050 = &UNK_10b392408;
      iVar1 = __ZN40__LT_str_u20_as_u20_core__fmt__Debug_GT_3fmt17h2bb9f3519979c641E
                        (in_stack_00000010,in_stack_00000018,&stack0x00000048);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(in_stack_00000050 + 0x18))(in_stack_00000048,&UNK_108f5892c,2);
        goto LAB_10025c834;
      }
    }
    else {
      uVar2 = (**(code **)(unaff_x19[1] + 0x18))(*unaff_x19,&UNK_108f5892e,1);
      if ((uVar2 & 1) == 0) {
        uVar2 = __ZN40__LT_str_u20_as_u20_core__fmt__Debug_GT_3fmt17h2bb9f3519979c641E
                          (in_stack_00000010,in_stack_00000018);
LAB_10025c834:
        if ((uVar2 & 1) == 0) {
          uVar3 = (**(code **)(unaff_x19[1] + 0x18))(*unaff_x19,&UNK_108f58934,1);
          goto LAB_10025c62c;
        }
      }
    }
  }
  uVar3 = 1;
LAB_10025c62c:
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000010);
  }
  return uVar3;
}

