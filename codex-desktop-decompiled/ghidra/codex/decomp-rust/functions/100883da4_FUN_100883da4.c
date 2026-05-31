
void FUN_100883da4(void)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  char *unaff_x22;
  long lVar8;
  undefined8 *puVar9;
  ulong in_xzr;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000031f0;
  undefined8 in_stack_000031f8;
  undefined8 in_stack_00003200;
  long in_stack_00004900;
  undefined8 in_stack_00004908;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000031f0,s__duplicate_active_command_exec_p_108ac9b91,&stack0x00001ae0);
  if (in_stack_00004900 != 0) {
    _free(in_stack_00004908);
  }
  if (*unaff_x22 == '\0') {
    *unaff_x22 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
  }
  FUN_1060fa678();
  lVar5 = **(long **)(unaff_x19 + 0x7a8);
  **(long **)(unaff_x19 + 0x7a8) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7df7af726d1ba829E(unaff_x19 + 0x7a8);
  }
  *(undefined1 *)(unaff_x19 + 0x906) = 0;
  if ((*(long *)(unaff_x19 + 0x790) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x790) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x798));
  }
  *(undefined1 *)(unaff_x19 + 0x907) = 0;
  FUN_100cdfd50(unaff_x19 + 0x788);
  *(undefined1 *)(unaff_x19 + 0x908) = 0;
  if ((*(byte *)(unaff_x19 + 0x8fa) & 1) != 0) {
    lVar8 = *(long *)(unaff_x19 + 0x910);
    LOAcquire();
    lVar5 = *(long *)(lVar8 + 0x1f0);
    *(long *)(lVar8 + 0x1f0) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      LOAcquire();
      lVar5 = *(long *)(lVar8 + 0x88);
      *(long *)(lVar8 + 0x88) = lVar5 + 1;
      lVar5 = func_0x000100fcac10(lVar8 + 0x80,lVar5);
      *(ulong *)(lVar5 + 0x610) = *(ulong *)(lVar5 + 0x610) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar8 + 0x110);
      LOAcquire();
      uVar6 = *puVar1;
      *puVar1 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar5 = *(long *)(lVar8 + 0x100);
        *(undefined8 *)(lVar8 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar8 + 0x108));
        }
      }
    }
    plVar7 = *(long **)(unaff_x19 + 0x910);
    lVar5 = *plVar7;
    *plVar7 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h72380cac90072f23E
                ((undefined8 *)(unaff_x19 + 0x910));
    }
  }
  *(undefined1 *)(unaff_x19 + 0x8fa) = 0;
  if ((*(long *)(unaff_x19 + 0x770) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x770) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x778));
  }
  FUN_100df7974(unaff_x19 + 0x758);
  *(undefined1 *)(unaff_x19 + 0x909) = 0;
  FUN_100cb56bc(unaff_x19 + 0x728);
  if (*(long *)(unaff_x19 + 0x710) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x718));
  }
  lVar8 = *(long *)(unaff_x19 + 0x700);
  lVar5 = *(long *)(unaff_x19 + 0x708);
  if (lVar5 != 0) {
    puVar9 = (undefined8 *)(lVar8 + 8);
    do {
      if (puVar9[-1] != 0) {
        _free(*puVar9);
      }
      puVar9 = puVar9 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(long *)(unaff_x19 + 0x6f8) != 0) {
    _free(lVar8);
  }
  if (((*(byte *)(unaff_x19 + 0x8fb) & 1) == 0) ||
     ((*(ulong *)(unaff_x19 + 0x6d8) & 0x7fffffffffffffff) == 0)) {
    *(undefined1 *)(unaff_x19 + 0x8fb) = 0;
    uVar6 = *(ulong *)(unaff_x19 + 0x6c0);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x6e0));
    *(undefined1 *)(unaff_x19 + 0x8fb) = 0;
    uVar6 = *(ulong *)(unaff_x19 + 0x6c0);
  }
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    bVar3 = *(byte *)(unaff_x19 + 0x8fc);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x6c8));
    bVar3 = *(byte *)(unaff_x19 + 0x8fc);
  }
  if (((bVar3 & 1) != 0) && (*(short *)(unaff_x19 + 0x628) != 2)) {
    FUN_100e0f38c(unaff_x19 + 0x628);
    __ZN88__LT_codex_network_proxy__proxy__NetworkProxyHandle_u20_as_u20_core__ops__drop__Drop_GT_4drop17h7475fa153e4f7c07E
              ((undefined8 *)(unaff_x19 + 0x698));
    plVar7 = *(long **)(unaff_x19 + 0x698);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 == 0xcc) {
        *plVar7 = 0x84;
      }
      else {
        (**(code **)(plVar7[2] + 0x20))();
      }
    }
    plVar7 = *(long **)(unaff_x19 + 0x6a0);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 == 0xcc) {
        *plVar7 = 0x84;
      }
      else {
        (**(code **)(plVar7[2] + 0x20))();
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x8fc) = 0;
  if ((*(byte *)(unaff_x19 + 0x902) & 1) != 0) {
    lVar8 = *(long *)(unaff_x19 + 1000);
    lVar5 = *(long *)(unaff_x19 + 0x3f0);
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(long *)(unaff_x19 + 0x3e0) != 0) {
      _free(lVar8);
    }
  }
  if (((*(byte *)(unaff_x19 + 0x901) & 1) != 0) && (*(long *)(unaff_x19 + 0x3f8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x400));
  }
  if ((*(byte *)(unaff_x19 + 0x900) & 1) != 0) {
    FUN_100cb56bc(unaff_x19 + 0x5f0);
  }
  pbVar2 = (byte *)(unaff_x19 + 0x8fd);
  if ((((*(byte *)(unaff_x19 + 0x8fd) & 1) != 0) &&
      (FUN_100e71170(unaff_x19 + 0x428), (*(byte *)(unaff_x19 + 0x8fd) & 1) != 0)) &&
     (*(short *)(unaff_x19 + 0x580) != 2)) {
    FUN_100e0f38c(unaff_x19 + 0x580);
  }
  if ((*(byte *)(unaff_x19 + 0x8ff) & 1) != 0) {
    FUN_100df7974(unaff_x19 + 0x568);
  }
  if (((*pbVar2 & 1) != 0) &&
     ((*(long *)(unaff_x19 + 0x410) == 0 ||
      (_free(*(undefined8 *)(unaff_x19 + 0x418)), (*(byte *)(unaff_x19 + 0x8fd) & 1) != 0)))) {
    uVar6 = *(ulong *)(unaff_x19 + 0x540);
    bVar4 = uVar6 == 0x8000000000000000;
    if (uVar6 < 0x8000000000000001) {
      uVar6 = 0;
    }
    if ((((bVar4) || ((uVar6 & 0x7fffffffffffffff) != 0)) ||
        (FUN_100e79780(unaff_x19 + 0x540), (*pbVar2 & 1) != 0)) &&
       (FUN_100e79780(unaff_x19 + 0x3c0), (*(byte *)(unaff_x19 + 0x8fd) & 1) != 0)) {
      FUN_100c98110(unaff_x19 + 0x4c0);
    }
  }
  if ((((*(byte *)(unaff_x19 + 0x8fe) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x528) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x528) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x530));
  }
  *(undefined2 *)(unaff_x19 + 0x901) = 0;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  if ((((*(byte *)(unaff_x19 + 0x903) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x398) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x398) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x3a0));
  }
  *(undefined1 *)(unaff_x19 + 0x903) = 0;
  if (((*(byte *)(unaff_x19 + 0x904) & 1) == 0) ||
     ((*(ulong *)(unaff_x19 + 0x378) & 0x7fffffffffffffff) == 0)) {
    *(undefined1 *)(unaff_x19 + 0x904) = 0;
    bVar3 = *(byte *)(unaff_x19 + 0x905);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x380));
    *(undefined1 *)(unaff_x19 + 0x904) = 0;
    bVar3 = *(byte *)(unaff_x19 + 0x905);
  }
  if ((bVar3 & 1) != 0) {
    lVar5 = **(long **)(unaff_x19 + 0x370);
    **(long **)(unaff_x19 + 0x370) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x370);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x905) = 0;
  *unaff_x20 = in_stack_000031f0;
  unaff_x20[1] = in_stack_000031f8;
  unaff_x20[2] = in_stack_00003200;
  unaff_x20[3] = 0x8000000000000005;
  unaff_x20[5] = in_stack_00000388;
  unaff_x20[4] = in_stack_00000380;
  unaff_x20[7] = in_stack_00000398;
  unaff_x20[6] = in_stack_00000390;
  unaff_x20[9] = in_stack_000003a8;
  unaff_x20[8] = in_stack_000003a0;
  unaff_x20[0xb] = in_stack_000003b8;
  unaff_x20[10] = in_stack_000003b0;
  unaff_x20[0xc] = 0xffffffffffff80a8;
  *(undefined1 *)(unaff_x19 + 0x8f6) = 1;
  return;
}

