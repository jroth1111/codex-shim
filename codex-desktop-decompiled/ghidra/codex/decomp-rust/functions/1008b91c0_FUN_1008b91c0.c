
/* WARNING: Removing unreachable block (ram,0x0001008b9298) */

void FUN_1008b91c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  undefined1 *in_stack_00000010;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined1 *in_stack_00000050;
  code *in_stack_00000058;
  long in_stack_00004c58;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe0,s_failed_to_load_thread___108ac9b04,&stack0x00000050);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar2 = *(undefined8 *)(unaff_x29 + -0xd8);
  uVar10 = *(undefined8 *)(unaff_x29 + -0xd0);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_1008b854c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1008b8550);
    (*pcVar8)();
  }
  *puVar3 = uVar9;
  puVar3[1] = uVar2;
  puVar3[2] = uVar10;
  puVar4 = (undefined8 *)_malloc(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_1008b854c;
  }
  *puVar4 = puVar3;
  puVar4[1] = &UNK_10b209118;
  *(undefined1 *)(puVar4 + 2) = 0x28;
  FUN_100df5738(&stack0x00004c58);
  *(undefined1 *)((long)unaff_x19 + 0x71) = 0;
  if (unaff_x19[2] != 0) {
    _free(*unaff_x19);
  }
  if ((*(byte *)(unaff_x19 + 0xe) & 1) != 0) {
    lVar1 = unaff_x19[9];
    lVar7 = unaff_x19[10] + 1;
    lVar5 = lVar1;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      FUN_100d7f9ac(lVar5);
      lVar5 = lVar5 + 0xa8;
    }
    if (unaff_x19[8] != 0) {
      _free(lVar1);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xe) = 0;
  *in_stack_00000010 = 1;
  FUN_100c9a120();
  if ((long)puVar4 + 1U == 0) {
LAB_1008b90b8:
    *unaff_x26 = 1;
    lVar7 = unaff_x27 + 0x47;
    in_stack_00004c58 = -0x8000000000000000;
  }
  else {
    in_stack_00000050 = &stack0x00002598;
    in_stack_00000058 =
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00004c58,s_failed_to_refresh_MCP_servers__108aca310,&stack0x00000050);
    in_stack_00000058 = *(code **)(unaff_x28 + 0x10);
    in_stack_00000050 = *(undefined1 **)(unaff_x28 + 8);
    if (((long)puVar4 + 1U & 3) == 1) {
      uVar9 = *puVar4;
      puVar3 = (undefined8 *)puVar4[1];
      pcVar8 = (code *)*puVar3;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar9);
      }
      if (puVar3[1] != 0) {
        _free(uVar9);
      }
      _free(puVar4);
    }
    if (in_stack_00004c58 == -0x8000000000000000) goto LAB_1008b90b8;
    *unaff_x26 = 1;
    if (in_stack_00004c58 == -0x7fffffffffffffff) {
      *in_stack_00000008 = unaff_x27 + 0x6c;
      uVar6 = 3;
      goto LAB_1008b92b0;
    }
    lVar7 = unaff_x27 + 0x6b;
    in_stack_00000030 = (long)in_stack_00000050;
    in_stack_00000038 = (long)in_stack_00000058;
  }
  *in_stack_00000008 = lVar7;
  in_stack_00000008[1] = in_stack_00004c58;
  in_stack_00000008[3] = in_stack_00000038;
  in_stack_00000008[2] = in_stack_00000030;
  in_stack_00000008[4] = unaff_x27;
  in_stack_00000008[0xd] = -0x7f5b;
  uVar6 = 1;
LAB_1008b92b0:
  unaff_x26[0x10] = uVar6;
  return;
}

