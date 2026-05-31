
undefined8 FUN_1005eb0e8(void)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *unaff_x22;
  undefined8 *puVar8;
  undefined1 *unaff_x28;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100e02a24();
  *(undefined2 *)(in_stack_000000a0 + 0x6f0) = 0;
  *(undefined1 *)(in_stack_000000a0 + 0x6f2) = 0;
  *unaff_x28 = 1;
  FUN_100d68ee4();
  if (*(long *)(in_stack_000000a0 + 0x508) == -0x7ffffffffffffffa) {
    *(undefined8 *)(in_stack_000000a0 + 0x5c8) = *(undefined8 *)(in_stack_000000a0 + 0x4e8);
    *(undefined1 *)(in_stack_000000a0 + 0x5d1) = 0;
    uVar2 = func_0x0001005a3a3c(in_stack_000000a0 + 0x5c0,in_stack_00000098);
    if ((uVar2 & 1) == 0) {
      FUN_100d28b1c(in_stack_000000a0 + 0x5c0);
LAB_1005eb24c:
      if (*(long *)(in_stack_000000a0 + 0x528) != 0) {
        _free(*(undefined8 *)(in_stack_000000a0 + 0x530));
      }
      if ((*(byte *)(in_stack_000000a0 + 0x5b9) & 1) != 0) {
        uVar4 = *(ulong *)(in_stack_000000a0 + 0x508);
        uVar2 = uVar4 ^ 0x8000000000000000;
        if (-1 < (long)uVar4) {
          uVar2 = 3;
        }
        if (uVar2 == 3) {
          if (uVar4 != 0) {
            lVar7 = *(long *)(in_stack_000000a0 + 0x510);
LAB_1005eb2dc:
            _free(lVar7);
          }
        }
        else if (uVar2 == 1) {
          lVar7 = *(long *)(in_stack_000000a0 + 0x518);
          lVar5 = *(long *)(in_stack_000000a0 + 0x520);
          if (lVar5 != 0) {
            puVar8 = (undefined8 *)(lVar7 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          if (*(long *)(in_stack_000000a0 + 0x510) != 0) goto LAB_1005eb2dc;
        }
      }
      *(undefined1 *)(in_stack_000000a0 + 0x5b9) = 0;
      if (*(long *)(in_stack_000000a0 + 0x4f0) != 0) {
        _free(*(undefined8 *)(in_stack_000000a0 + 0x4f8));
      }
      *unaff_x22 = 1;
      FUN_100e78334(in_stack_00000070);
      uVar6 = 0;
      uVar2 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
      if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
        uVar2 = 7;
      }
      if (0x18 < uVar2 || (1L << (uVar2 & 0x3f) & 0x161ff1cU) == 0) {
        FUN_100def028(in_stack_000000a0 + 0x200);
      }
      if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
        FUN_100def028(in_stack_000000a0);
      }
      uVar3 = 1;
      goto LAB_1005eb358;
    }
    uVar3 = 6;
  }
  else {
    *(undefined2 *)(in_stack_000000a0 + 0x5b9) = 0x100;
    lVar7 = **(long **)(in_stack_000000a0 + 0x4e8);
    *(undefined1 *)(in_stack_000000a0 + 0x5ba) = 0;
    *(undefined8 *)(in_stack_000000a0 + 0x5d8) = *(undefined8 *)(in_stack_000000a0 + 0x520);
    *(undefined8 *)(in_stack_000000a0 + 0x5d0) = *(undefined8 *)(in_stack_000000a0 + 0x518);
    *(undefined8 *)(in_stack_000000a0 + 0x5c8) = *(undefined8 *)(in_stack_000000a0 + 0x510);
    *(undefined8 *)(in_stack_000000a0 + 0x5c0) = *(undefined8 *)(in_stack_000000a0 + 0x508);
    *(long *)(in_stack_000000a0 + 0x5e0) = lVar7 + 0x10;
    *(undefined8 *)(in_stack_000000a0 + 0x5e8) = *(undefined8 *)(in_stack_000000a0 + 0x4f8);
    *(undefined8 *)(in_stack_000000a0 + 0x5f0) = *(undefined8 *)(in_stack_000000a0 + 0x500);
    *(undefined1 *)(in_stack_000000a0 + 0x630) = 0;
    iVar1 = FUN_1005a4314(in_stack_000000a0 + 0x5c0,in_stack_00000098);
    if (iVar1 == 0) {
      FUN_100d2d6dc(in_stack_000000a0 + 0x5c0);
      *(undefined1 *)(in_stack_000000a0 + 0x5ba) = 0;
      goto LAB_1005eb24c;
    }
    uVar3 = 7;
  }
  *unaff_x22 = uVar3;
  uVar6 = 2;
  uVar3 = 0xe;
LAB_1005eb358:
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar3;
  return uVar6;
}

