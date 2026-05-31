
/* WARNING: Type propagation algorithm not settling */

void FUN_101733d74(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x24;
  undefined8 uVar7;
  long unaff_x29;
  undefined1 in_stack_00000000;
  byte in_stack_00000008;
  ulong in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000070;
  byte bStack00000000000000f1;
  undefined1 uStack00000000000000f2;
  undefined1 uStack00000000000000f3;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe8,s_user__108adc739,&stack0x00000070);
  if (unaff_x24 == -0x8000000000000000) {
    uVar7 = 0x11;
    puVar3 = (undefined8 *)_malloc(0x11);
    if (puVar3 == (undefined8 *)0x0) {
LAB_1017340ac:
      func_0x0001087c9084(1,uVar7);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1017340ec);
      (*pcVar2)();
    }
    uStack00000000000000f3 = 0;
    *(undefined1 *)(puVar3 + 2) = 0x6e;
    puVar3[1] = 0x6f69747563657865;
    *puVar3 = 0x5f646e616d6d6f63;
  }
  else {
    uVar7 = 0xe;
    puVar3 = (undefined8 *)_malloc(0xe);
    if (puVar3 == (undefined8 *)0x0) goto LAB_1017340ac;
    *puVar3 = 0x5f6b726f7774656e;
    *(undefined8 *)((long)puVar3 + 6) = 0x7373656363615f6b;
    uStack00000000000000f3 = 4;
  }
  uStack00000000000000f2 = in_stack_00000000;
  bStack00000000000000f1 = in_stack_00000008 & 1;
  FUN_101774864(unaff_x29 + -0xe8,in_stack_00000048 + 0xf0,&stack0x00000150,&stack0x00000070);
  if (*(long *)(unaff_x29 + -0xe8) != -0x8000000000000000) {
    if (*(long *)(unaff_x29 + -0xe8) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xe0));
    }
    if (*(long *)(unaff_x29 + -0xd0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -200));
    }
    if ((*(ulong *)(unaff_x29 + -0x88) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x80));
    }
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xb0));
    }
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
  }
  if ((in_stack_00000028 & 0x7fffffffffffffff) == 0) {
    uVar4 = *(ulong *)(unaff_x19 + 0x60);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x50));
    uVar4 = *(ulong *)(unaff_x19 + 0x60);
  }
  if ((uVar4 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x68));
  }
  if ((in_stack_00000038 & 0x7fffffffffffffff) == 0) {
    uVar4 = *(ulong *)(unaff_x19 + 0x98);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x80));
    uVar4 = *(ulong *)(unaff_x19 + 0x98);
  }
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    uVar4 = *(ulong *)(unaff_x19 + 0xb0);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0xa0));
    uVar4 = *(ulong *)(unaff_x19 + 0xb0);
  }
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    lVar5 = *(long *)(unaff_x19 + 200);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0xb8));
    lVar5 = *(long *)(unaff_x19 + 200);
  }
  if (lVar5 != -0x8000000000000000) {
    FUN_1017467a0();
  }
  if (in_stack_00000030 == -0x7ffffffffffffffe) {
    lVar5 = *(long *)(unaff_x19 + 0xe0);
  }
  else {
    func_0x00010174b108(unaff_x19 + 0x128);
    lVar5 = *(long *)(unaff_x19 + 0xe0);
  }
  if (lVar5 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x19 + 0xe8);
    lVar6 = *(long *)(unaff_x19 + 0xf0);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0xf8);
  if (lVar5 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x19 + 0x100);
    lVar6 = *(long *)(unaff_x19 + 0x108);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  func_0x00010174b938(unaff_x19 + 0x110);
  if ((*(ulong *)(unaff_x29 + -0x100) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xf8));
  }
  return;
}

