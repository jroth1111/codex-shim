
/* WARNING: Removing unreachable block (ram,0x0001008c4224) */

undefined8 FUN_1008c41f0(void)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x23;
  undefined8 unaff_x25;
  long unaff_x29;
  long in_stack_00000008;
  undefined *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 in_stack_00000040;
  
  puVar6 = (undefined8 *)FUN_108858fa8(s_OAuth_login_task_was_cancelled__108ace9a7,&stack0x00000008)
  ;
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x70));
  }
  *unaff_x23 = 1;
  if ((char)unaff_x20[9] == '\x03') {
    FUN_100cc9c58(unaff_x20 + 8);
    if (unaff_x20[4] != 0) {
      _free(unaff_x20[5]);
    }
  }
  else if ((char)unaff_x20[9] == '\0') {
    if (*unaff_x20 != 0) {
      _free(unaff_x20[1]);
    }
    FUN_100cc9c58(unaff_x20 + 3);
  }
  if (puVar6 == (undefined8 *)0x0) {
    uVar5 = 0x8000000000000000;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(undefined8 *)(unaff_x29 + -0x68) = 1;
    *(undefined8 *)(unaff_x29 + -0x60) = 0;
    in_stack_00000018 = 0x60000020;
    in_stack_00000008 = unaff_x29 + -0x70;
    in_stack_00000010 = &UNK_10b209290;
    iVar3 = __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                      ();
    if (iVar3 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,unaff_x29 + -0x51,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c42c0);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(unaff_x29 + -0x70);
    unaff_x23 = *(undefined1 **)(unaff_x29 + -0x68);
    unaff_x25 = *(undefined8 *)(unaff_x29 + -0x60);
    (**(code **)*puVar6)(puVar6);
  }
  in_stack_00000040 = puVar6 == (undefined8 *)0x0;
  *(undefined2 *)(unaff_x19 + 0x41) = 0;
  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x28);
  in_stack_00000010 = *(undefined **)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x43) = 0;
  in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar2 = *(long *)(unaff_x19 + 0x38) + 0x10;
  in_stack_00000008 = 0x8000000000000022;
  in_stack_00000028 = uVar5;
  in_stack_00000030 = unaff_x23;
  in_stack_00000038 = unaff_x25;
  _memmove();
  *(long *)(unaff_x19 + 0x240) = lVar2;
  *(undefined1 *)(unaff_x19 + 0xd18) = 0;
  _memcpy(unaff_x19 + 0x248,unaff_x19 + 0x48,0x1f8);
  *(long *)(unaff_x19 + 0x440) = lVar2;
  *(undefined8 *)(unaff_x19 + 0x448) = 8;
  *(undefined8 *)(unaff_x19 + 0x450) = 0;
  *(undefined1 *)(unaff_x19 + 0x658) = 0;
  uVar4 = FUN_100897c70(unaff_x19 + 0x248);
  if ((uVar4 & 1) == 0) {
    FUN_100d40d08(unaff_x19 + 0x248);
    uVar7 = 1;
    *(undefined1 *)(unaff_x19 + 0xd18) = 1;
    *(undefined1 *)(unaff_x19 + 0x42) = 0;
    *(undefined1 *)(unaff_x19 + 0x43) = 0;
    lVar2 = **(long **)(unaff_x19 + 0x38);
    **(long **)(unaff_x19 + 0x38) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
      uVar5 = 0;
      uVar7 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0xd18) = 3;
    uVar5 = 1;
    uVar7 = 4;
  }
  *(undefined1 *)(unaff_x19 + 0x40) = uVar7;
  return uVar5;
}

