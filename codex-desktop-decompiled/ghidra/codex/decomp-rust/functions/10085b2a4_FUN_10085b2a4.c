
void FUN_10085b2a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  long unaff_x22;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  int iStack0000000000000078;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000048,s_refs_heads__108ac93f1);
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000050;
    *(long *)(unaff_x19 + 0xa0) = in_stack_00000048;
    *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x60) = &UNK_108cb16e6;
    *(undefined8 *)(unaff_x19 + 0x68) = 9;
    *(undefined **)(unaff_x19 + 0x70) = &UNK_108c98370;
    *(undefined8 *)(unaff_x19 + 0x78) = 8;
    *(undefined **)(unaff_x19 + 0x80) = &UNK_108cb17ad;
    *(undefined8 *)(unaff_x19 + 0x88) = 7;
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 **)(unaff_x19 + 0xb8) = (undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0xc0) = 4;
    *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0x580) = 0;
    FUN_10085bb5c(&stack0x00000048,unaff_x19 + 0xb8);
    uVar6 = _iStack0000000000000078;
    uVar5 = in_stack_00000070;
    uVar4 = in_stack_00000068;
    lVar9 = in_stack_00000060;
    uVar3 = in_stack_00000058;
    uVar2 = in_stack_00000050;
    lVar1 = in_stack_00000048;
    if (in_stack_00000048 == -0x7fffffffffffffff) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar8 = 3;
LAB_10085b390:
      *(undefined1 *)(unaff_x19 + 0x588) = uVar8;
      return;
    }
    FUN_100c9e158(unaff_x19 + 0xb8);
    if (lVar1 != -0x8000000000000000) {
      iStack0000000000000078 = (int)uVar6;
      in_stack_00000048 = lVar1;
      in_stack_00000050 = uVar2;
      in_stack_00000058 = uVar3;
      in_stack_00000060 = lVar9;
      in_stack_00000068 = uVar4;
      in_stack_00000070 = uVar5;
      _iStack0000000000000078 = uVar6;
      if (iStack0000000000000078 != 0) {
        if (lVar1 != 0) {
          _free(uVar2);
        }
        if (in_stack_00000060 != 0) {
          _free(in_stack_00000068);
        }
        goto LAB_10085b260;
      }
      uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
      lVar9 = *(long *)(unaff_x19 + 0x58);
      if (lVar9 == 0) {
        unaff_x22 = 1;
        _memcpy(1,uVar2,0);
      }
      else {
        unaff_x22 = _malloc(lVar9);
        if (unaff_x22 == 0) {
          func_0x0001087c9084(1,lVar9);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10085b3d8);
          (*pcVar7)();
        }
        _memcpy(unaff_x22,uVar2,lVar9);
      }
      if (lVar1 != 0) {
        _free(in_stack_00000050);
      }
      if (in_stack_00000060 != 0) {
        _free(in_stack_00000068);
      }
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0xa8));
      }
LAB_10085b384:
      *unaff_x20 = lVar9;
      unaff_x20[1] = unaff_x22;
      uVar8 = 1;
      unaff_x20[2] = lVar9;
      goto LAB_10085b390;
    }
LAB_10085b260:
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (*(long *)(unaff_x19 + 0x28) == lVar1) {
      lVar9 = -0x8000000000000000;
      goto LAB_10085b384;
    }
    lVar9 = unaff_x19 + lVar1 * 0x10;
    uVar2 = *(undefined8 *)(lVar9 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(lVar9 + 0x30);
    *(long *)(unaff_x19 + 0x20) = lVar1 + 1;
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  } while( true );
}

