
void FUN_1003d1360(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long lVar11;
  long unaff_x29;
  uint in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s__108ac137a,param_3);
    puVar1 = (ulong *)(unaff_x20 + 0x1e8);
    if ((*puVar1 & 0x7fffffffffffffff) == 0) {
      *(undefined8 *)(unaff_x20 + 0x1f0) = in_stack_00000070;
      *puVar1 = in_stack_00000068;
      *(undefined8 *)(unaff_x20 + 0x1f8) = in_stack_00000078;
      lVar7 = *(long *)(unaff_x29 + -0x70);
    }
    else {
      _free(*(undefined8 *)(unaff_x20 + 0x1f0));
      *(undefined8 *)(unaff_x20 + 0x1f0) = in_stack_00000070;
      *puVar1 = in_stack_00000068;
      *(undefined8 *)(unaff_x20 + 0x1f8) = in_stack_00000078;
      lVar7 = *(long *)(unaff_x29 + -0x70);
    }
    lVar10 = unaff_x20;
    if (lVar7 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    do {
      if (*(long *)(lVar10 + 0x128) == unaff_x23) {
        puVar9 = &UNK_108c9504e;
        if (in_stack_00000048 == 0) {
          puVar9 = (undefined *)0x1;
        }
        *(undefined **)(unaff_x29 + -0xb0) = puVar9;
        *(ulong *)(unaff_x29 + -0xa8) = (ulong)(in_stack_00000048 != 0);
        uVar8 = *(undefined8 *)(lVar10 + 0x238);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(lVar10 + 0x230);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar8;
        *(long **)(unaff_x29 + -0xa0) = &stack0x00000038;
        *(undefined8 *)(unaff_x29 + -0x98) = unaff_x24;
        *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb0;
        *(undefined8 *)(unaff_x29 + -0x88) = unaff_x21;
        *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x78) = unaff_x21;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000080,s__108ac137a,unaff_x29 + -0xa0);
        if ((*(ulong *)(lVar10 + 0x128) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(lVar10 + 0x130));
        }
        *(undefined8 *)(lVar10 + 0x130) = in_stack_00000088;
        *(ulong *)(lVar10 + 0x128) = in_stack_00000080;
        *(undefined8 *)(lVar10 + 0x138) = in_stack_00000090;
      }
      if (*(long *)(lVar10 + 0x110) == unaff_x23) {
        lVar7 = *(long *)(in_stack_00000018 + 0x110);
        if ((in_stack_00000010 & 1) == 0) {
          plVar2 = (long *)(in_stack_00000018 + 0x238);
          if (lVar7 != unaff_x23) {
            plVar2 = (long *)(in_stack_00000018 + 0x120);
          }
          in_stack_000000a0 = *plVar2;
          puVar3 = (undefined8 *)(in_stack_00000018 + 0x230);
          if (lVar7 != unaff_x23) {
            puVar3 = (undefined8 *)(in_stack_00000018 + 0x118);
          }
          in_stack_00000098 = *puVar3;
          if (in_stack_000000a0 == 0) goto LAB_1003d14c0;
LAB_1003d147c:
          puVar9 = &UNK_108c950d6;
          uVar8 = 1;
        }
        else {
          if (lVar7 == unaff_x23) {
            in_stack_00000098 = 1;
            in_stack_000000a0 = 0;
          }
          else {
            in_stack_00000098 = *(undefined8 *)(in_stack_00000018 + 0x118);
            in_stack_000000a0 = *(long *)(in_stack_00000018 + 0x120);
            if (in_stack_000000a0 != 0) goto LAB_1003d147c;
          }
LAB_1003d14c0:
          uVar8 = 0;
          puVar9 = (undefined *)0x1;
        }
        *(undefined **)(unaff_x29 + -0xb0) = puVar9;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
        uVar8 = *(undefined8 *)(lVar10 + 0x238);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(lVar10 + 0x230);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar8;
        *(undefined8 **)(unaff_x29 + -0xa0) = &stack0x00000098;
        *(undefined8 *)(unaff_x29 + -0x98) = unaff_x21;
        *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xb0;
        *(undefined8 *)(unaff_x29 + -0x88) = unaff_x21;
        *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x78) = unaff_x21;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000000a8,s__108ac137a,unaff_x29 + -0xa0);
        if ((*(ulong *)(lVar10 + 0x110) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(lVar10 + 0x118));
        }
        *(undefined8 *)(lVar10 + 0x118) = in_stack_000000b0;
        *(undefined8 *)(lVar10 + 0x110) = in_stack_000000a8;
        *(undefined8 *)(lVar10 + 0x120) = in_stack_000000b8;
      }
      unaff_x20 = lVar10 + unaff_x22;
      FUN_1003d0d1c(lVar10);
      if (unaff_x20 == unaff_x25) {
        *(uint *)(in_stack_00000018 + 700) = *(uint *)(in_stack_00000018 + 700) | 0x80000000;
        if (in_stack_00000038 != 0) {
          _free(in_stack_00000040);
        }
        if (in_stack_00000020 != 0) {
          _free(in_stack_00000028);
        }
        return;
      }
      unaff_x22 = 0x2c8;
      lVar10 = unaff_x20;
    } while (*(long *)(unaff_x20 + 0x1e8) != unaff_x23);
    lVar10 = 0;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(undefined8 *)(unaff_x29 + -0x68) = 1;
    *(undefined8 *)(unaff_x29 + -0x60) = 0;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x230);
    lVar7 = 1;
    lVar11 = *(long *)(unaff_x20 + 0x238);
    if (lVar11 != 0) {
      thunk_FUN_1087e3480(unaff_x29 + -0x70,0,lVar11,1,1);
      lVar7 = *(long *)(unaff_x29 + -0x68);
      lVar10 = *(long *)(unaff_x29 + -0x60);
    }
    _memcpy(lVar7 + lVar10,uVar8,lVar11);
    *(long *)(unaff_x29 + -0x60) = lVar10 + lVar11;
    if (*(long *)(unaff_x20 + 0x240) == 0) {
      iVar5 = *(int *)(unaff_x20 + 0x2b8);
      if (iVar5 != 0x110000) {
LAB_1003d12d4:
        *(int *)(unaff_x29 + -0xb0) = iVar5;
        *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xb0;
        *(undefined **)(unaff_x29 + -0x98) =
             &__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hccc65653b32ebe4fE;
        iVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                          (unaff_x29 + -0x70,&UNK_10b2080a0,s____108abe5ce,unaff_x29 + -0xa0);
        if (iVar5 == 0) goto LAB_1003d130c;
        puVar9 = &UNK_10b208160;
LAB_1003d15c4:
        FUN_107c05cb4(&UNK_108c96578,0x2b,&stack0x00000098,&UNK_10b208388,puVar9);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d1638);
        (*pcVar4)();
      }
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x248);
      *(long *)(unaff_x29 + -0xb0) = *(long *)(unaff_x20 + 0x240);
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xb0;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x21;
      uVar6 = __ZN4core3fmt5write17h64810b21425781ecE
                        (unaff_x29 + -0x70,&UNK_10b2080a0,s_____108abe5c8,unaff_x29 + -0xa0);
      if ((uVar6 & 1) != 0) {
        puVar9 = &UNK_10b208148;
        goto LAB_1003d15c4;
      }
      iVar5 = *(int *)(unaff_x20 + 0x2b8);
      if (iVar5 != 0x110000) goto LAB_1003d12d4;
LAB_1003d130c:
      *(undefined8 *)(unaff_x29 + -0xa0) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x24;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000050,s_____108abdfdc,unaff_x29 + -0xa0);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000058;
      *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000050;
      *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000060;
    }
    *(long **)(unaff_x29 + -0xa0) = &stack0x00000038;
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x24;
    *(long **)(unaff_x29 + -0x90) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x24;
    param_1 = &stack0x00000068;
    param_3 = unaff_x29 + -0xa0;
  } while( true );
}

