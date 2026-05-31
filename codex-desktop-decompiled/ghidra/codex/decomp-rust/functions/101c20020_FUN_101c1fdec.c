
void FUN_101c1fdec(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 unaff_w21;
  undefined8 unaff_x23;
  undefined8 unaff_x26;
  undefined2 unaff_w28;
  long unaff_x29;
  long in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xc0,s_remotePluginId_____108adef00,&stack0x00000068);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0xc0);
  *(undefined8 *)(unaff_x29 + -0x88) = 1;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  puVar4 = (undefined4 *)_malloc(6);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar4 = unaff_w21;
    *(undefined2 *)(puVar4 + 1) = unaff_w28;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar4;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000068 = unaff_x29 + -0x88;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xc0,s_pluginId_____108adf031,&stack0x00000068);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    *(undefined8 *)(unaff_x29 + -0x88) = 1;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    puVar4 = (undefined4 *)_malloc(6);
    if (puVar4 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar4 = unaff_w21;
      *(undefined2 *)(puVar4 + 1) = unaff_w28;
      *(undefined8 *)(unaff_x29 + -0x78) = 6;
      *(undefined4 **)(unaff_x29 + -0x70) = puVar4;
      *(undefined8 *)(unaff_x29 + -0x68) = 6;
      in_stack_00000068 = unaff_x29 + -0x88;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xc0,s_pluginName_____108ae1e5f,&stack0x00000068);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      *(undefined8 *)(unaff_x29 + -0x88) = 1;
      *(undefined8 *)(unaff_x29 + -0x80) = 0;
      puVar5 = (undefined8 *)_malloc(0xf);
      if (puVar5 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0xf);
      }
      else {
        *puVar5 = 0x6574756c6f736241;
        *(undefined8 *)((long)puVar5 + 7) = 0x6675426874615065;
        *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
        *(undefined8 **)(unaff_x29 + -0x70) = puVar5;
        *(undefined8 *)(unaff_x29 + -0x68) = 0xf;
        in_stack_00000068 = unaff_x29 + -0x88;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xc0,s_pluginPath_____108adeeed,&stack0x00000068);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        *(undefined8 *)(unaff_x29 + -0x88) = 1;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        puVar4 = (undefined4 *)_malloc(6);
        if (puVar4 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,6);
        }
        else {
          *puVar4 = unaff_w21;
          *(undefined2 *)(puVar4 + 1) = unaff_w28;
          *(undefined8 *)(unaff_x29 + -0x78) = 6;
          *(undefined4 **)(unaff_x29 + -0x70) = puVar4;
          *(undefined8 *)(unaff_x29 + -0x68) = 6;
          in_stack_00000068 = unaff_x29 + -0x88;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xc0,s_marketplaceName_____108adf788,&stack0x00000068);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          *(undefined8 *)(unaff_x29 + -0x88) = 1;
          *(undefined8 *)(unaff_x29 + -0x80) = 0;
          puVar5 = (undefined8 *)_malloc(0xf);
          if (puVar5 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0xf);
          }
          else {
            *puVar5 = 0x6574756c6f736241;
            *(undefined8 *)((long)puVar5 + 7) = 0x6675426874615065;
            *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
            *(undefined8 **)(unaff_x29 + -0x70) = puVar5;
            *(undefined8 *)(unaff_x29 + -0x68) = 0xf;
            in_stack_00000068 = unaff_x29 + -0x88;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xc0,s_marketplacePath_____108ae08c3,&stack0x00000068);
            if (*(long *)(unaff_x29 + -0x78) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x70));
            }
            *(undefined8 *)(unaff_x29 + -0x88) = 1;
            *(undefined8 *)(unaff_x29 + -0x80) = 0;
            puVar4 = (undefined4 *)_malloc(6);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = unaff_w21;
              *(undefined2 *)(puVar4 + 1) = unaff_w28;
              in_stack_00000068 = 6;
              *(long **)(unaff_x29 + -0xc0) = &stack0x00000068;
              *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x26;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xc0);
              if (in_stack_00000068 != 0) {
                _free(puVar4);
              }
              in_stack_00000068 = unaff_x29 + -0x88;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0xa0,s_remoteVersion_____108ae1e72,&stack0x00000068);
              if (*(long *)(unaff_x29 + -0x78) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x70));
              }
              in_stack_00000068 = uVar1;
              FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000068,7,&UNK_108cf9cc0,1);
              *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x70);
              *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x78);
              *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
              *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xc0;
              *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0x88);
              if (*(long *)(unaff_x29 + -0xc0) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0xb8));
              }
              FUN_102038274(&stack0x00000068);
              lVar2 = *(long *)(unaff_x29 + -0x78);
              uVar1 = *(undefined8 *)(unaff_x29 + -0x70);
              func_0x000102167960(unaff_x23,uVar1,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,
                                  7,&UNK_108cf9cc0,1);
              if (lVar2 != 0) {
                _free(uVar1);
              }
              return;
            }
            func_0x0001087c9084(1,6);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c2025c);
  (*pcVar3)();
}

