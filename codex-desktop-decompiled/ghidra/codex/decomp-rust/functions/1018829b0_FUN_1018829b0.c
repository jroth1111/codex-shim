
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018829b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar8;
  long in_stack_00000400;
  ulong in_stack_00000800;
  long in_stack_00000808;
  
  *(char **)(unaff_x29 + -0xe8) = s_failed_to_send_request_to_client_108ac9f54;
  *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x00000400;
  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0xe8;
  *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b25d1e8;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000600);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar7 = *(long *)(unaff_x20 + 0x608);
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xa0) = 2;
    *(undefined8 *)(unaff_x29 + -0x98) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0xa0);
    if (iVar3 != 0) {
      in_stack_00000808 = *(long *)(lVar7 + 0x50);
      in_stack_00000800 = 1;
      if (in_stack_00000808 == 0) {
        in_stack_00000800 = 2;
      }
      *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000600;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(undefined8 *)(unaff_x26 + 0x668) = *(undefined8 *)(unaff_x26 + 0xaa8);
      *(undefined8 *)(unaff_x26 + 0x660) = *(undefined8 *)(unaff_x26 + 0xaa0);
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000800);
    }
  }
  *(long *)(unaff_x19 + 0x9d8) = *(long *)(unaff_x19 + 0x1a0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0xa48) = 0;
  pcVar4 = (char *)FUN_1019971ac(unaff_x19 + 0x9d8);
  if (pcVar4 == (char *)0x0) {
    *unaff_x27 = 0x8000000000000001;
    uVar5 = 6;
  }
  else {
    if (((*(char *)(unaff_x19 + 0xa48) == '\x03') && (*(char *)(unaff_x19 + 0xa40) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x9f8) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0xa00);
      if (*(long *)(unaff_x19 + 0xa08) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0xa08) + 0x18))(*(undefined8 *)(unaff_x19 + 0xa10));
      }
    }
    FUN_101ba5e80(&stack0x00000800,pcVar4 + 0x28,unaff_x19 + 0x1d0);
    uVar6 = extraout_x1;
    if (in_stack_00000800 != 0x8000000000000001) {
      _memcpy(&stack0x00000400,&stack0x00000818,0x1c0);
      uVar6 = extraout_x1_00;
      if ((in_stack_00000800 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000808);
        uVar6 = extraout_x1_01;
      }
      if (in_stack_00000400 != -0x7ffffffffffffff7) {
        FUN_1019615a8(&stack0x00000400);
        uVar6 = extraout_x1_02;
      }
    }
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar4,uVar6,1000000000);
    }
    FUN_1060fa678(pcVar4,1,pcVar4);
    FUN_10195fc88(unaff_x19 + 0xa50);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x1d0);
    *(undefined8 *)(unaff_x26 + 0xa88) = *(undefined8 *)(unaff_x19 + 0x1d8);
    *(undefined8 *)(unaff_x26 + 0xa80) = uVar6;
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x19 + 0x1e0);
    *(undefined2 *)(unaff_x19 + 0x9ce) = 0;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x388);
    if ((*(byte *)(unaff_x19 + 0x9cb) & 1) != 0) {
      func_0x00010196452c(unaff_x19 + 0x390);
    }
    *(undefined2 *)(unaff_x19 + 0x9cb) = 0;
    *(undefined1 *)(unaff_x19 + 0x9ce) = 0;
    FUN_101962cd4(unaff_x19 + 0x1e8);
    *(undefined2 *)(unaff_x19 + 0x9cf) = 0;
    *(undefined1 *)(unaff_x19 + 0x9cd) = 0;
    uVar8 = *(undefined8 *)(unaff_x26 + 0xa80);
    unaff_x27[1] = *(undefined8 *)(unaff_x26 + 0xa88);
    *unaff_x27 = uVar8;
    unaff_x27[2] = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x27[3] = uVar6;
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x9b9) = uVar5;
  return;
}

