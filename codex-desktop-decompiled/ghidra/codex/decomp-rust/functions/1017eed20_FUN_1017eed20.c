
void FUN_1017eed20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  long *unaff_x19;
  undefined8 *unaff_x23;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  iVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x00000050,param_2,s__108b3b1c5,&stack0x00000030);
  uVar3 = in_stack_00000060;
  uVar2 = in_stack_00000058;
  uVar1 = in_stack_00000050;
  if (iVar6 == 0) {
    in_stack_00000050 = 0;
    in_stack_00000058 = 1;
    in_stack_00000060 = 0;
    if (in_stack_00000010 != 0) {
      FUN_108880448(&stack0x00000050,0,in_stack_00000010,1,1);
    }
    lVar4 = in_stack_00000060;
    _memcpy(in_stack_00000058 + in_stack_00000060,in_stack_00000008,in_stack_00000010);
    in_stack_00000040 = lVar4 + in_stack_00000010;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    (**(code **)(in_stack_00000000 + 0x20))(&stack0x00000018,in_stack_00000008,in_stack_00000010);
    *unaff_x23 = uVar1;
    unaff_x23[1] = uVar2;
    unaff_x23[2] = uVar3;
    unaff_x23[4] = in_stack_00000038;
    unaff_x23[3] = in_stack_00000030;
    unaff_x23[5] = in_stack_00000040;
    if (*unaff_x19 != 4) {
      (**(code **)(unaff_x19[1] + 0x20))(unaff_x19 + 4,unaff_x19[2],unaff_x19[3]);
    }
    return;
  }
  func_0x000108a07a3c(&UNK_108ce42c8,0x37,&stack0x00000030,&UNK_10b259ef8,&UNK_10b259de0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1017eee0c);
  (*pcVar5)();
}

