
void FUN_101c8c29c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 unaff_x22;
  long unaff_x29;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000088;
  undefined8 in_stack_00000090;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s__108ac0bb6,unaff_x29 + -0x80);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(in_stack_00000060);
  }
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x58);
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  puVar5 = (undefined8 *)_malloc(0x11);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x11);
  }
  else {
    *(undefined1 *)(puVar5 + 2) = 0x74;
    puVar5[1] = 0x6f687370616e5374;
    *puVar5 = 0x696d694c65746152;
    *(undefined8 *)(unaff_x29 + -0x68) = 0x11;
    *(undefined8 **)(unaff_x29 + -0x60) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x58) = 0x11;
    in_stack_00000058 = (undefined8 *)(unaff_x29 + -0x80);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000088,s_rateLimits_____108ae2515,&stack0x00000058);
    if (*(long *)(unaff_x29 + -0x68) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x60));
    }
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x78));
    }
    lVar1 = in_stack_00000088;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000058,&UNK_10b2700c8,1);
    *(undefined8 ***)(unaff_x29 + -0x80) = &stack0x00000058;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x22;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x68,s__108ac0bb6,unaff_x29 + -0x80);
    if (in_stack_00000058 != (undefined8 *)0x0) {
      _free(unaff_x22);
    }
    in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x60);
    in_stack_00000030 = *(long *)(unaff_x29 + -0x68);
    in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x58);
    in_stack_00000048 = 1;
    in_stack_00000050 = 0;
    puVar6 = (undefined4 *)_malloc(6);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar6 = 0x69727473;
      *(undefined2 *)(puVar6 + 1) = 0x676e;
      *(undefined8 *)(unaff_x29 + -0x80) = 6;
      *(undefined4 **)(unaff_x29 + -0x78) = puVar6;
      *(undefined8 *)(unaff_x29 + -0x70) = 6;
      puVar5 = (undefined8 *)_malloc(0x11);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar5 + 2) = 0x74;
        puVar5[1] = 0x6f687370616e5374;
        *puVar5 = 0x696d694c65746152;
        *(undefined8 *)(unaff_x29 + -0x68) = 0x11;
        *(undefined8 **)(unaff_x29 + -0x60) = puVar5;
        *(undefined8 *)(unaff_x29 + -0x58) = 0x11;
        in_stack_00000058 = (undefined8 *)(unaff_x29 + -0x80);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000088,s____key_in_______108ae6002,&stack0x00000058);
        if (*(long *)(unaff_x29 + -0x68) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x60));
        }
        if (*(long *)(unaff_x29 + -0x80) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x78));
        }
        in_stack_00000058 = &stack0x00000088;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x68,s___null_108ae5e02,&stack0x00000058);
        if (in_stack_00000088 != 0) {
          _free(in_stack_00000090);
        }
        in_stack_00000058 = &stack0x00000030;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000018,s_rateLimitsByLimitId_____108ae2529,&stack0x00000058);
        if (*(long *)(unaff_x29 + -0x68) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x60));
        }
        if (in_stack_00000030 != 0) {
          _free(in_stack_00000038);
        }
        uVar2 = in_stack_00000020;
        lVar3 = in_stack_00000018;
        in_stack_00000058 = (undefined8 *)lVar1;
        FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000058,2,&UNK_108cf9cc0,1);
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x58);
        in_stack_00000088 = unaff_x29 + -0x80;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x68,s_____108ab6fcb,&stack0x00000088);
        if (*(long *)(unaff_x29 + -0x80) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x78));
        }
        if (lVar1 != 0) {
          _free(in_stack_00000090);
        }
        if (lVar3 != 0) {
          _free(uVar2);
        }
        lVar1 = *(long *)(unaff_x29 + -0x68);
        uVar2 = *(undefined8 *)(unaff_x29 + -0x60);
        func_0x000102167960();
        if (lVar1 != 0) {
          _free(uVar2);
        }
        return;
      }
      func_0x0001087c9084(1,0x11);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101c8c5ec);
  (*pcVar4)();
}
