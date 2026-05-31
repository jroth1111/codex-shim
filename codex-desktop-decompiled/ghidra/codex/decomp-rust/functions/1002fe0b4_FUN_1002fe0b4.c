
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fe0b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *unaff_x19;
  char *unaff_x26;
  int unaff_w27;
  long unaff_x29;
  undefined1 auVar5 [16];
  ulong in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000030;
  
  *(char **)(unaff_x29 + -0x80) = s__timeout_settings_for_this_opera_108abadce;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b1f8a98;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000006f0);
  if ((*unaff_x26 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000560);
    if (iVar3 != 0) {
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000006f0;
      *(undefined1 *)(unaff_x29 + -0x90) = 1;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000890);
    }
  }
  FUN_1002f7c70();
  auVar5 = __ZN22aws_smithy_runtime_api6client18runtime_components17RuntimeComponents21validate_final_config17h5c7200b1b4830a82E
                     (&stack0x000003d0);
  if (auVar5._0_8_ == 0) {
    _memcpy();
    FUN_10031bdc4(&stack0x000001f0);
    FUN_10031bdc4(&stack0x00000040);
    if (unaff_w27 == 0) {
      return;
    }
    if (in_stack_00000010 != 2) {
      lVar4 = in_stack_00000018;
      if ((in_stack_00000010 & 1) != 0) {
        lVar4 = in_stack_00000018 + (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0)
                + 0x10;
      }
      (**(code **)(in_stack_00000020 + 0x68))(lVar4,&stack0x00000028);
    }
    if ((*unaff_x26 == '\0') && (in_stack_00000030 != 0)) {
      FUN_1003239f0(&stack0x00000010,&UNK_108c80723,0x15,s_<____108ab67c5,&stack0x00000890);
    }
  }
  else {
    *(undefined1 (*) [16])(unaff_x19 + 1) = auVar5;
    *unaff_x19 = 0x8000000000000000;
    FUN_10031b7e8(&stack0x000003d0);
    FUN_10031bdc4(&stack0x000001f0);
    FUN_10031bdc4(&stack0x00000040);
    if (unaff_w27 == 0) {
      return;
    }
    if (in_stack_00000010 != 2) {
      lVar4 = in_stack_00000018;
      if ((in_stack_00000010 & 1) != 0) {
        lVar4 = in_stack_00000018 + (*(long *)(in_stack_00000020 + 0x10) - 1U & 0xfffffffffffffff0)
                + 0x10;
      }
      (**(code **)(in_stack_00000020 + 0x68))(lVar4,&stack0x00000028);
    }
    if ((*unaff_x26 == '\0') && (in_stack_00000030 != 0)) {
      FUN_1003239f0(&stack0x00000010,&UNK_108c80723,0x15,s_<____108ab67c5,&stack0x00000890);
    }
  }
  FUN_100319104(&stack0x00000010);
  return;
}

