
void FUN_1008a2f28(void)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x25;
  ulong uVar7;
  long lVar8;
  long in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  long in_stack_00000380;
  byte in_stack_00000388;
  undefined7 in_stack_00000389;
  long in_stack_00000390;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000380,s_Invalid_clientInfo_name________M_108acb900,&stack0x00011180);
  uVar7 = (ulong)in_stack_00000388;
  if (((*(byte *)(unaff_x25 + 0xc) & 1) != 0) && (*(long *)(unaff_x19 + 0x628) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x630));
  }
  *(undefined1 *)(unaff_x25 + 0xc) = 0;
  if ((*(long *)(unaff_x19 + 0x610) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x610) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x618));
  }
  if (*(long *)(unaff_x19 + 0x5f8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x600));
  }
  if ((*(byte *)(unaff_x25 + 0xd) & 1) != 0) {
    if (unaff_x20 != 0) {
      puVar4 = (undefined8 *)(in_stack_000000c0 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
    }
    if (in_stack_000000b8 != 0) {
      _free(in_stack_000000c0);
    }
  }
  *(undefined1 *)(unaff_x25 + 0xd) = 0;
  if ((*(byte *)(unaff_x25 + 0xe) & 1) != 0) {
    FUN_100e427f4(&stack0x00000100);
  }
  *(undefined1 *)(unaff_x25 + 0xe) = 0;
  if (((*(byte *)(unaff_x25 + 0xf) & 1) == 0) || ((in_stack_000000d8 & 0x7fffffffffffffff) == 0)) {
    *(undefined1 *)(unaff_x25 + 0xf) = 0;
    bVar3 = *(byte *)(unaff_x25 + 0x12);
  }
  else {
    _free(in_stack_000000c8);
    *(undefined1 *)(unaff_x25 + 0xf) = 0;
    bVar3 = *(byte *)(unaff_x25 + 0x12);
  }
  if (((bVar3 & 1) != 0) && (*(long *)(unaff_x19 + 0x588) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x590));
  }
  if ((((*(byte *)(unaff_x25 + 0x11) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x5b8) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x5b8) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x5c0));
  }
  if (((*(byte *)(unaff_x25 + 0x10) & 1) != 0) && (*(long *)(unaff_x19 + 0x5a0) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x5a8));
  }
  lVar5 = *(long *)(unaff_x19 + 0x5d0);
  if (((lVar5 != -0x7fffffffffffffff) && (*(char *)(unaff_x25 + 0x13) == '\x01')) &&
     (lVar5 != -0x8000000000000000)) {
    lVar6 = *(long *)(unaff_x19 + 0x5d8);
    lVar8 = *(long *)(unaff_x19 + 0x5e0);
    if (lVar8 != 0) {
      puVar4 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar6);
    }
  }
  *(undefined4 *)(unaff_x25 + 0x10) = 0;
  *(undefined1 *)(unaff_x25 + 8) = 1;
  if (in_stack_00000380 == -0x7fffffffffffffff) {
    *in_stack_000000f8 = -0x7fffffffffffffff;
    uVar2 = 3;
  }
  else {
    FUN_100d411d4(in_stack_000000f0);
    if (in_stack_00000380 == -0x8000000000000000) {
      if ((in_stack_00000388 & 1) != 0) {
        lVar5 = **(long **)(unaff_x19 + 0x270);
        if (*(long *)(*(long *)(unaff_x19 + 0x458) + 0x18) == 0) {
          bVar3 = *(byte *)(*(long *)(unaff_x19 + 0x458) + 0x81);
        }
        else {
          bVar3 = 0;
        }
        *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0x4d8);
        *(long *)(unaff_x19 + 0x588) = lVar5 + 0xe90;
        *(undefined1 *)(unaff_x19 + 0x590) = 0;
        *(byte *)(unaff_x19 + 0x591) = bVar3 & 1;
        iVar1 = FUN_1009100fc(unaff_x19 + 0x4e8,in_stack_000000e0);
        if (iVar1 != 0) {
          *in_stack_000000f8 = -0x7fffffffffffffff;
          uVar2 = 4;
          goto LAB_1008a50e0;
        }
        in_stack_00000390 = in_stack_000000e0;
        if ((((*(char *)(unaff_x19 + 0x590) == '\x03') && (*(char *)(unaff_x19 + 0x581) == '\x03'))
            && (*(char *)(unaff_x19 + 0x570) == '\x03')) &&
           ((*(char *)(unaff_x19 + 0x568) == '\x03' && (*(char *)(unaff_x19 + 0x520) == '\x04')))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x528);
          if (*(long *)(unaff_x19 + 0x530) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x530) + 0x18))(*(undefined8 *)(unaff_x19 + 0x538));
          }
        }
      }
      in_stack_00000380 = -0x8000000000000000;
    }
    else {
      uVar7 = CONCAT71(in_stack_00000389,in_stack_00000388);
    }
    *(undefined1 *)(unaff_x19 + 0x4e5) = 0;
    *(undefined1 *)(unaff_x19 + 0x4e6) = 0;
    func_0x000100e2ce28(unaff_x19 + 0x460);
    *(undefined1 *)(unaff_x19 + 0x4e1) = 0;
    lVar5 = **(long **)(unaff_x19 + 0x458);
    **(long **)(unaff_x19 + 0x458) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(unaff_x19 + 0x458);
    }
    *(undefined1 *)(unaff_x19 + 0x4e2) = 0;
    if (*(long *)(unaff_x19 + 0x298) != -0x8000000000000000) {
      FUN_100e44f40(unaff_x19 + 0x298);
    }
    *(undefined1 *)(unaff_x19 + 0x4e3) = 0;
    if ((*(ulong *)(unaff_x19 + 0x278) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x280));
    }
    *(undefined1 *)(unaff_x19 + 0x4e4) = 0;
    *in_stack_000000f8 = in_stack_00000380;
    in_stack_000000f8[1] = uVar7;
    in_stack_000000f8[2] = in_stack_00000390;
    in_stack_000000f8[3] = -0x7ffffffffffffffb;
    uVar2 = 1;
    in_stack_000000f8[0xc] = -0x7f58;
  }
LAB_1008a50e0:
  *(undefined1 *)(unaff_x19 + 0x4e0) = uVar2;
  return;
}

