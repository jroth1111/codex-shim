
void FUN_1011af6f8(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  undefined2 *puVar7;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 uVar9;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000048;
  undefined2 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000048,s_failed_to_resolve_socket_path_____108ad4595,&stack0x00000020);
  if ((in_stack_00000018 & 3) == 1) {
    puVar5 = (undefined8 *)(in_stack_00000018 - 1);
    uVar6 = *puVar5;
    puVar8 = *(undefined8 **)(in_stack_00000018 + 7);
    pcVar1 = (code *)*puVar8;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar6);
    }
    if (puVar8[1] != 0) {
      _free(uVar6);
    }
    _free(puVar5);
    puVar7 = in_stack_00000050;
    uVar6 = in_stack_00000048;
    uVar9 = in_stack_00000058;
    if (unaff_x24 == 0) goto LAB_1011af824;
LAB_1011af728:
    in_stack_00000048 = 0;
    in_stack_00000050 = (undefined2 *)0x1;
    in_stack_00000058 = 0;
    in_stack_00000020 = &stack0x00000048;
    iVar2 = __ZN70__LT_clap_builder__builder__arg__Arg_u20_as_u20_core__fmt__Display_GT_3fmt17h2f1f476a71d8085dE
                      ();
    if (iVar2 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x00000008,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_1011af91c;
    }
    if (unaff_x22 != (undefined8 *)0x0) goto LAB_1011af774;
LAB_1011af854:
    lVar3 = 1;
  }
  else {
    puVar7 = in_stack_00000050;
    uVar6 = in_stack_00000048;
    uVar9 = in_stack_00000058;
    if (unaff_x24 != 0) goto LAB_1011af728;
LAB_1011af824:
    uVar9 = in_stack_00000058;
    puVar7 = in_stack_00000050;
    uVar6 = in_stack_00000048;
    puVar4 = (undefined2 *)_malloc(3);
    if (puVar4 == (undefined2 *)0x0) {
      func_0x0001087c9084(1,3);
      goto LAB_1011af91c;
    }
    *(undefined1 *)(puVar4 + 1) = 0x2e;
    *puVar4 = 0x2e2e;
    in_stack_00000048 = 3;
    in_stack_00000058 = 3;
    in_stack_00000050 = puVar4;
    if (unaff_x22 == (undefined8 *)0x0) goto LAB_1011af854;
LAB_1011af774:
    lVar3 = _malloc();
    if (lVar3 == 0) {
      func_0x0001087c9084(1);
      goto LAB_1011af91c;
    }
  }
  _memcpy(lVar3,unaff_x23);
  in_stack_00000020 = unaff_x22;
  puVar5 = (undefined8 *)_malloc(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = uVar6;
    puVar5[1] = puVar7;
    puVar5[2] = uVar9;
    FUN_10072a5e8(&stack0x00000048,&stack0x00000020,puVar5,&UNK_10b209118);
    uVar6 = FUN_10072aebc();
    *unaff_x19 = 0x8000000000000000;
    unaff_x19[1] = uVar6;
    return;
  }
  func_0x0001087c906c(8,0x18);
LAB_1011af91c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011af920);
  (*pcVar1)();
}

