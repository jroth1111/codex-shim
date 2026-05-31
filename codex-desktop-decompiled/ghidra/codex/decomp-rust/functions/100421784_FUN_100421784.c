
void FUN_100421784(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  long *plVar7;
  long in_xzr;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  
  unaff_x23[3] = param_1._8_8_;
  unaff_x23[2] = param_1._0_8_;
  unaff_x23[6] = 5;
  unaff_x23[5] = 0x5e;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000002f0);
  plVar7 = (long *)*unaff_x21;
  lVar5 = *(long *)(in_stack_00000028 + 0x20);
  if (lVar5 == 0) {
    *(long *)(in_stack_00000028 + 0x20) = 1;
  }
  if (lVar5 == 2) {
    lVar5 = plVar7[1];
    puVar6 = (undefined8 *)(*plVar7 + 0x10);
LAB_1004218b8:
    (*(code *)*puVar6)(lVar5);
  }
  else if (lVar5 == 0) {
    if (*(undefined8 **)(in_stack_00000028 + 0x10) == (undefined8 *)0x0) {
      lVar5 = plVar7[1];
LAB_100421864:
      auVar8 = (**(code **)*plVar7)(lVar5);
      if (*(long *)(in_stack_00000028 + 0x10) != 0) {
        (**(code **)(*(long *)(in_stack_00000028 + 0x10) + 0x18))
                  (*(undefined8 *)(in_stack_00000028 + 0x18));
      }
      *(undefined1 (*) [16])(in_stack_00000028 + 0x10) = auVar8;
      if (*(long *)(in_stack_00000028 + 0x20) == 1) {
        *(long *)(in_stack_00000028 + 0x20) = in_xzr;
        goto LAB_1004218c0;
      }
    }
    else {
      lVar5 = plVar7[1];
      if ((*(undefined8 **)(in_stack_00000028 + 0x10) != (undefined8 *)*plVar7) ||
         (*(long *)(in_stack_00000028 + 0x18) != lVar5)) goto LAB_100421864;
      if (*(long *)(in_stack_00000028 + 0x20) == 1) {
        *(long *)(in_stack_00000028 + 0x20) = in_xzr;
        goto LAB_1004218c0;
      }
    }
    lVar3 = *(long *)(in_stack_00000028 + 0x10);
    lVar5 = *(long *)(in_stack_00000028 + 0x18);
    *(undefined8 *)(in_stack_00000028 + 0x10) = 0;
    if (lVar3 == 0) goto LAB_100421aa8;
    LOAcquire();
    *(long *)(in_stack_00000028 + 0x20) = in_xzr;
    LORelease();
    puVar6 = (undefined8 *)(lVar3 + 8);
    goto LAB_1004218b8;
  }
LAB_1004218c0:
  lVar5 = *(long *)(in_stack_00000030 + 0x20);
  if (lVar5 == 0) {
    *(long *)(in_stack_00000030 + 0x20) = 1;
  }
  if (lVar5 == 2) {
    lVar5 = plVar7[1];
    puVar6 = (undefined8 *)(*plVar7 + 0x10);
  }
  else {
    if (lVar5 != 0) goto LAB_100421984;
    if (*(undefined8 **)(in_stack_00000030 + 0x10) == (undefined8 *)0x0) {
      lVar5 = plVar7[1];
LAB_100421928:
      auVar8 = (**(code **)*plVar7)(lVar5);
      if (*(long *)(in_stack_00000030 + 0x10) != 0) {
        (**(code **)(*(long *)(in_stack_00000030 + 0x10) + 0x18))
                  (*(undefined8 *)(in_stack_00000030 + 0x18));
      }
      *(undefined1 (*) [16])(in_stack_00000030 + 0x10) = auVar8;
      if (*(long *)(in_stack_00000030 + 0x20) == 1) {
        *(long *)(in_stack_00000030 + 0x20) = in_xzr;
        goto LAB_100421984;
      }
    }
    else {
      lVar5 = plVar7[1];
      if ((*(undefined8 **)(in_stack_00000030 + 0x10) != (undefined8 *)*plVar7) ||
         (*(long *)(in_stack_00000030 + 0x18) != lVar5)) goto LAB_100421928;
      if (*(long *)(in_stack_00000030 + 0x20) == 1) {
        *(long *)(in_stack_00000030 + 0x20) = in_xzr;
        goto LAB_100421984;
      }
    }
    lVar3 = *(long *)(in_stack_00000030 + 0x10);
    lVar5 = *(long *)(in_stack_00000030 + 0x18);
    *(undefined8 *)(in_stack_00000030 + 0x10) = 0;
    if (lVar3 == 0) {
LAB_100421aa8:
      FUN_107c05cb0(&UNK_10b398268);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100421ab8);
      (*pcVar4)();
    }
    LOAcquire();
    *(long *)(in_stack_00000030 + 0x20) = in_xzr;
    LORelease();
    puVar6 = (undefined8 *)(lVar3 + 8);
  }
  (*(code *)*puVar6)(lVar5);
LAB_100421984:
  unaff_x23[0x15] = in_stack_000000b0;
  unaff_x23[0x14] = in_stack_000000a8;
  unaff_x23[0x17] = in_stack_000000c0;
  unaff_x23[0x16] = in_stack_000000b8;
  unaff_x23[0x19] = in_stack_000000d0;
  unaff_x23[0x18] = in_stack_000000c8;
  unaff_x23[0x1b] = in_stack_000000e0;
  unaff_x23[0x1a] = in_stack_000000d8;
  unaff_x23[0xd] = in_stack_00000070;
  unaff_x23[0xc] = in_stack_00000068;
  unaff_x23[0xf] = in_stack_00000080;
  unaff_x23[0xe] = in_stack_00000078;
  unaff_x23[0x11] = in_stack_00000090;
  unaff_x23[0x10] = in_stack_00000088;
  unaff_x23[0x13] = in_stack_000000a0;
  unaff_x23[0x12] = in_stack_00000098;
  unaff_x23[5] = in_stack_00000030;
  unaff_x23[4] = in_stack_00000028;
  unaff_x23[7] = in_stack_00000040;
  unaff_x23[6] = in_stack_00000038;
  unaff_x23[9] = in_stack_00000050;
  unaff_x23[8] = in_stack_00000048;
  unaff_x23[0xb] = in_stack_00000060;
  unaff_x23[10] = in_stack_00000058;
  unaff_x23[1] = in_stack_00000010;
  *unaff_x23 = in_stack_00000008;
  unaff_x23[3] = in_stack_00000020;
  unaff_x23[2] = in_stack_00000018;
  FUN_10070074c(&stack0x000000e8,&stack0x000002f0);
  if ((in_stack_000000e8 == 2) && (in_stack_000000f0 != 2)) {
    unaff_x20[0x15] = in_stack_00000198;
    unaff_x20[0x14] = in_stack_00000190;
    unaff_x20[0x17] = in_stack_000001a8;
    unaff_x20[0x16] = in_stack_000001a0;
    unaff_x20[0x19] = in_stack_000001b8;
    unaff_x20[0x18] = in_stack_000001b0;
    unaff_x20[0x1b] = in_stack_000001c8;
    unaff_x20[0x1a] = in_stack_000001c0;
    unaff_x20[0xd] = in_stack_00000158;
    unaff_x20[0xc] = in_stack_00000150;
    unaff_x20[0xf] = in_stack_00000168;
    unaff_x20[0xe] = in_stack_00000160;
    unaff_x20[0x11] = in_stack_00000178;
    unaff_x20[0x10] = in_stack_00000170;
    unaff_x20[0x13] = in_stack_00000188;
    unaff_x20[0x12] = in_stack_00000180;
    unaff_x20[5] = in_stack_00000118;
    unaff_x20[4] = in_stack_00000110;
    unaff_x20[7] = in_stack_00000128;
    unaff_x20[6] = in_stack_00000120;
    unaff_x20[9] = in_stack_00000138;
    unaff_x20[8] = in_stack_00000130;
    unaff_x20[0xb] = in_stack_00000148;
    unaff_x20[10] = in_stack_00000140;
    unaff_x20[1] = in_stack_000000f8;
    *unaff_x20 = in_stack_000000f0;
    unaff_x20[3] = in_stack_00000108;
    unaff_x20[2] = in_stack_00000100;
    *unaff_x19 = 3;
  }
  else {
    _memcpy();
  }
  return;
}

