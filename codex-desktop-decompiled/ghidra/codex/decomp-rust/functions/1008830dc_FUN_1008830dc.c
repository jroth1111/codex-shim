
void FUN_1008830dc(void)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  char *unaff_x22;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
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
  if (((*(byte *)(unaff_x19 + 0x8fb) & 1) == 0) ||
     ((*(ulong *)(unaff_x19 + 0x6d8) & 0x7fffffffffffffff) == 0)) {
    *(undefined1 *)(unaff_x19 + 0x8fb) = 0;
    uVar5 = *(ulong *)(unaff_x19 + 0x6c0);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x6e0));
    *(undefined1 *)(unaff_x19 + 0x8fb) = 0;
    uVar5 = *(ulong *)(unaff_x19 + 0x6c0);
  }
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    bVar2 = *(byte *)(unaff_x19 + 0x8fc);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x6c8));
    bVar2 = *(byte *)(unaff_x19 + 0x8fc);
  }
  if (((bVar2 & 1) != 0) && (*(short *)(unaff_x19 + 0x628) != 2)) {
    FUN_100e0f38c(unaff_x19 + 0x628);
    __ZN88__LT_codex_network_proxy__proxy__NetworkProxyHandle_u20_as_u20_core__ops__drop__Drop_GT_4drop17h7475fa153e4f7c07E
              ((undefined8 *)(unaff_x19 + 0x698));
    plVar4 = *(long **)(unaff_x19 + 0x698);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == 0xcc) {
        *plVar4 = 0x84;
      }
      else {
        (**(code **)(plVar4[2] + 0x20))();
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x6a0);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == 0xcc) {
        *plVar4 = 0x84;
      }
      else {
        (**(code **)(plVar4[2] + 0x20))();
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x8fc) = 0;
  if ((*(byte *)(unaff_x19 + 0x902) & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 1000);
    lVar7 = *(long *)(unaff_x19 + 0x3f0);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(unaff_x19 + 0x3e0) != 0) {
      _free(lVar6);
    }
  }
  if (((*(byte *)(unaff_x19 + 0x901) & 1) != 0) && (*(long *)(unaff_x19 + 0x3f8) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x400));
  }
  if ((*(byte *)(unaff_x19 + 0x900) & 1) != 0) {
    FUN_100cb56bc(unaff_x19 + 0x5f0);
  }
  pbVar1 = (byte *)(unaff_x19 + 0x8fd);
  if ((((*(byte *)(unaff_x19 + 0x8fd) & 1) != 0) &&
      (FUN_100e71170(unaff_x19 + 0x428), (*(byte *)(unaff_x19 + 0x8fd) & 1) != 0)) &&
     (*(short *)(unaff_x19 + 0x580) != 2)) {
    FUN_100e0f38c(unaff_x19 + 0x580);
  }
  if ((*(byte *)(unaff_x19 + 0x8ff) & 1) != 0) {
    FUN_100df7974(unaff_x19 + 0x568);
  }
  if (((*pbVar1 & 1) != 0) &&
     ((*(long *)(unaff_x19 + 0x410) == 0 ||
      (_free(*(undefined8 *)(unaff_x19 + 0x418)), (*(byte *)(unaff_x19 + 0x8fd) & 1) != 0)))) {
    uVar5 = *(ulong *)(unaff_x19 + 0x540);
    bVar3 = uVar5 == 0x8000000000000000;
    if (uVar5 < 0x8000000000000001) {
      uVar5 = 0;
    }
    if ((((bVar3) || ((uVar5 & 0x7fffffffffffffff) != 0)) ||
        (FUN_100e79780(unaff_x19 + 0x540), (*pbVar1 & 1) != 0)) &&
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
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  if ((((*(byte *)(unaff_x19 + 0x903) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x398) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x398) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x3a0));
  }
  *(undefined1 *)(unaff_x19 + 0x903) = 0;
  if (((*(byte *)(unaff_x19 + 0x904) & 1) == 0) ||
     ((*(ulong *)(unaff_x19 + 0x378) & 0x7fffffffffffffff) == 0)) {
    *(undefined1 *)(unaff_x19 + 0x904) = 0;
    bVar2 = *(byte *)(unaff_x19 + 0x905);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x380));
    *(undefined1 *)(unaff_x19 + 0x904) = 0;
    bVar2 = *(byte *)(unaff_x19 + 0x905);
  }
  if ((bVar2 & 1) != 0) {
    lVar7 = **(long **)(unaff_x19 + 0x370);
    **(long **)(unaff_x19 + 0x370) = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
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

