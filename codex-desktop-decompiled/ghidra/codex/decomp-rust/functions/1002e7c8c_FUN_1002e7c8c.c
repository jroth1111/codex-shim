
undefined8 FUN_1002e7c8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000000;
  ulong *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  uVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (param_1,param_2,s_Error_at_offset___108aba5ed,&stack0x00000010);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar1 < 0x8000000000000001) {
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0x7fffffffffffffff;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        in_stack_00000010 = &stack0x00000008;
        uVar2 = *unaff_x19;
        uVar4 = unaff_x19[1];
        pcVar5 = s_failed_to_parse_JSON__108aba603;
        in_stack_00000008 = (ulong *)(unaff_x20 + 0x10);
      }
      else {
        in_stack_00000008 = (ulong *)(unaff_x20 + 0x18);
        in_stack_00000010 = &stack0x00000008;
        uVar2 = *unaff_x19;
        uVar4 = unaff_x19[1];
        pcVar5 = s_expected_literal__108aba61c;
      }
    }
    else {
      if (uVar1 != 2) {
        uVar2 = *unaff_x19;
        pcVar6 = *(code **)(unaff_x19[1] + 0x18);
        puVar3 = &UNK_108c78d38;
        uVar4 = 0xe;
        goto LAB_1002e7e38;
      }
      in_stack_00000008 = (ulong *)(unaff_x20 + 0x18);
      in_stack_00000010 = &stack0x00000008;
      uVar2 = *unaff_x19;
      uVar4 = unaff_x19[1];
      pcVar5 = s_invalid_JSON_escape____108aba5b2;
    }
  }
  else {
    if (uVar1 < 6) {
      if (uVar1 == 4) {
        uVar2 = *unaff_x19;
        pcVar6 = *(code **)(unaff_x19[1] + 0x18);
        puVar3 = &UNK_108c78d46;
        uVar4 = 0x26;
      }
      else {
        uVar2 = *unaff_x19;
        pcVar6 = *(code **)(unaff_x19[1] + 0x18);
        puVar3 = &UNK_108c78d6c;
        uVar4 = 0x1e;
      }
LAB_1002e7e38:
      uVar2 = (*pcVar6)(uVar2,puVar3,uVar4);
      return uVar2;
    }
    if (uVar1 == 6) {
      in_stack_00000010 = &stack0x00000008;
      uVar2 = *unaff_x19;
      uVar4 = unaff_x19[1];
      pcVar5 = s_5encountered_unescaped_control_c_108aba631;
      in_stack_00000008 = (ulong *)(unaff_x20 + 0x18);
    }
    else {
      if (uVar1 == 7) {
        uVar2 = *unaff_x19;
        pcVar6 = *(code **)(unaff_x19[1] + 0x18);
        puVar3 = &UNK_108c78d8a;
        uVar4 = 0x18;
        goto LAB_1002e7e38;
      }
      in_stack_00000000 = unaff_x20 + 0x28;
      uVar2 = *unaff_x19;
      uVar4 = unaff_x19[1];
      pcVar5 = s_unexpected_token______Expected_o_108aba669;
      in_stack_00000008 = (ulong *)(unaff_x20 + 0x18);
      in_stack_00000010 = (undefined8 *)register0x00000008;
    }
  }
  uVar2 = __ZN4core3fmt5write17h64810b21425781ecE(uVar2,uVar4,pcVar5,&stack0x00000010);
  return uVar2;
}

