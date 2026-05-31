
void FUN_101c16b64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x29;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  undefined8 *in_stack_00000160;
  long in_stack_00000230;
  undefined8 in_stack_00000238;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xc0,s_source_____108ae056b,&stack0x00000160);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xc0);
  uVar9 = *(undefined8 *)(unaff_x29 + -0xb8);
  in_stack_00000148 = 1;
  puVar20 = (undefined4 *)_malloc(6);
  if (puVar20 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar20 = 0x69727473;
    *(undefined2 *)(puVar20 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000160 = &stack0x00000148;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xc0,s_command_____108ade9ae,&stack0x00000160);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    lVar2 = *(long *)(unaff_x29 + -0xc0);
    uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    puVar21 = (undefined8 *)_malloc(0xf);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0xf);
    }
    else {
      *puVar21 = 0x6574756c6f736241;
      *(undefined8 *)((long)puVar21 + 7) = 0x6675426874615065;
      *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
      *(undefined8 **)(unaff_x29 + -0x70) = puVar21;
      *(undefined8 *)(unaff_x29 + -0x68) = 0xf;
      in_stack_00000160 = (undefined8 *)(unaff_x29 + -0xc0);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000a0,s_cwd_____108ae0597,&stack0x00000160);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      uVar11 = in_stack_000000a8;
      lVar3 = in_stack_000000a0;
      in_stack_00000160 = (undefined8 *)0x12;
      FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,4,&UNK_108cf9cc0,1);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000148 = unaff_x29 + -0xc0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000148);
      if (*(long *)(unaff_x29 + -0xc0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xb8));
      }
      _free();
      if (lVar1 != 0) {
        _free(uVar9);
      }
      if (lVar2 != 0) {
        _free(uVar10);
      }
      if (lVar3 != 0) {
        _free(uVar11);
      }
      lVar1 = *(long *)(unaff_x29 + -0x78);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000102167960(&stack0x00000088,uVar9,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7
                          ,&UNK_108cf9cc0,1);
      puVar21 = (undefined8 *)_malloc(0x11);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x11);
      }
      else {
        *(undefined1 *)(puVar21 + 2) = 0x2c;
        puVar21[1] = 0x2265766365786522;
        *puVar21 = 0x203a226570797422;
        in_stack_00000148 = 1;
        puVar22 = (undefined8 *)_malloc(0x15);
        if (puVar22 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x15);
        }
        else {
          puVar22[1] = in_stack_00000068;
          *puVar22 = in_stack_00000060;
          *(undefined8 *)((long)puVar22 + 0xd) = unaff_x23;
          *(undefined8 *)(unaff_x29 + -0x78) = 0x15;
          *(undefined8 **)(unaff_x29 + -0x70) = puVar22;
          *(undefined8 *)(unaff_x29 + -0x68) = 0x15;
          in_stack_00000160 = &stack0x00000148;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xc0,s_source_____108ae056b,&stack0x00000160);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          lVar2 = *(long *)(unaff_x29 + -0xc0);
          uVar10 = *(undefined8 *)(unaff_x29 + -0xb8);
          in_stack_00000148 = 1;
          puVar20 = (undefined4 *)_malloc(6);
          if (puVar20 == (undefined4 *)0x0) {
            func_0x0001087c9084(1,6);
          }
          else {
            *puVar20 = 0x69727473;
            *(undefined2 *)(puVar20 + 1) = 0x676e;
            *(undefined8 *)(unaff_x29 + -0x78) = 6;
            *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
            *(undefined8 *)(unaff_x29 + -0x68) = 6;
            in_stack_00000160 = &stack0x00000148;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xc0,s_program_____108ae057a,&stack0x00000160);
            if (*(long *)(unaff_x29 + -0x78) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x70));
            }
            lVar3 = *(long *)(unaff_x29 + -0xc0);
            uVar11 = *(undefined8 *)(unaff_x29 + -0xb8);
            in_stack_00000148 = 1;
            puVar20 = (undefined4 *)_malloc(6);
            if (puVar20 == (undefined4 *)0x0) {
              func_0x0001087c9084(1,6);
            }
            else {
              *puVar20 = 0x69727473;
              *(undefined2 *)(puVar20 + 1) = 0x676e;
              in_stack_00000160 = (undefined8 *)0x6;
              *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000160;
              *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x22;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0x78,s_Array<_>_108ae5df7,unaff_x29 + -0xc0);
              if (in_stack_00000160 != (undefined8 *)0x0) {
                _free(puVar20);
              }
              in_stack_00000160 = &stack0x00000148;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0xc0,s_argv_____108ae058a,&stack0x00000160);
              if (*(long *)(unaff_x29 + -0x78) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x70));
              }
              lVar4 = *(long *)(unaff_x29 + -0xc0);
              uVar12 = *(undefined8 *)(unaff_x29 + -0xb8);
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(undefined8 *)(unaff_x29 + -0xb8) = 0;
              puVar22 = (undefined8 *)_malloc(0xf);
              if (puVar22 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,0xf);
              }
              else {
                *puVar22 = 0x6574756c6f736241;
                *(undefined8 *)((long)puVar22 + 7) = 0x6675426874615065;
                *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
                *(undefined8 **)(unaff_x29 + -0x70) = puVar22;
                *(undefined8 *)(unaff_x29 + -0x68) = 0xf;
                in_stack_00000160 = (undefined8 *)(unaff_x29 + -0xc0);
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&stack0x000000d0,s_cwd_____108ae0597,&stack0x00000160);
                if (*(long *)(unaff_x29 + -0x78) != 0) {
                  _free(*(undefined8 *)(unaff_x29 + -0x70));
                }
                uVar13 = in_stack_000000d8;
                lVar5 = in_stack_000000d0;
                in_stack_00000160 = (undefined8 *)0x11;
                FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,5,&UNK_108cf9cc0,1);
                *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
                in_stack_00000148 = unaff_x29 + -0xc0;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000148);
                if (*(long *)(unaff_x29 + -0xc0) != 0) {
                  _free(*(undefined8 *)(unaff_x29 + -0xb8));
                }
                _free(puVar21);
                if (lVar2 != 0) {
                  _free(uVar10);
                }
                if (lVar3 != 0) {
                  _free(uVar11);
                }
                if (lVar4 != 0) {
                  _free(uVar12);
                }
                if (lVar5 != 0) {
                  _free(uVar13);
                }
                lVar2 = *(long *)(unaff_x29 + -0x78);
                uVar10 = *(undefined8 *)(unaff_x29 + -0x70);
                func_0x000102167960(&stack0x000000b8,uVar10,*(undefined8 *)(unaff_x29 + -0x68),
                                    &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
                puVar21 = (undefined8 *)_malloc(0x15);
                if (puVar21 == (undefined8 *)0x0) {
                  func_0x0001087c9084(1,0x15);
                }
                else {
                  puVar21[1] = 0x6150796c70706122;
                  *puVar21 = 0x203a226570797422;
                  *(undefined8 *)((long)puVar21 + 0xd) = 0x2c22686374615079;
                  in_stack_00000148 = 1;
                  puVar22 = (undefined8 *)_malloc(0xf);
                  if (puVar22 == (undefined8 *)0x0) {
                    func_0x0001087c9084(1,0xf);
                  }
                  else {
                    *puVar22 = 0x6574756c6f736241;
                    *(undefined8 *)((long)puVar22 + 7) = 0x6675426874615065;
                    *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
                    *(undefined8 **)(unaff_x29 + -0x70) = puVar22;
                    *(undefined8 *)(unaff_x29 + -0x68) = 0xf;
                    in_stack_00000160 = &stack0x00000148;
                    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                              (unaff_x29 + -0xc0,s_cwd_____108ae0597,&stack0x00000160);
                    if (*(long *)(unaff_x29 + -0x78) != 0) {
                      _free(*(undefined8 *)(unaff_x29 + -0x70));
                    }
                    lVar3 = *(long *)(unaff_x29 + -0xc0);
                    uVar11 = *(undefined8 *)(unaff_x29 + -0xb8);
                    in_stack_00000148 = 1;
                    puVar22 = (undefined8 *)_malloc(0xf);
                    if (puVar22 == (undefined8 *)0x0) {
                      func_0x0001087c9084(1,0xf);
                    }
                    else {
                      *puVar22 = 0x6574756c6f736241;
                      *(undefined8 *)((long)puVar22 + 7) = 0x6675426874615065;
                      in_stack_00000160 = (undefined8 *)0xf;
                      *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000160;
                      *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x22;
                      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                (unaff_x29 + -0x78,s_Array<_>_108ae5df7,unaff_x29 + -0xc0);
                      if (in_stack_00000160 != (undefined8 *)0x0) {
                        _free(puVar22);
                      }
                      in_stack_00000160 = &stack0x00000148;
                      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                (&stack0x00000100,s_files_____108ae132a,&stack0x00000160);
                      if (*(long *)(unaff_x29 + -0x78) != 0) {
                        _free(*(undefined8 *)(unaff_x29 + -0x70));
                      }
                      uVar12 = in_stack_00000108;
                      lVar4 = in_stack_00000100;
                      in_stack_00000160 = (undefined8 *)0x15;
                      FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,3,&UNK_108cf9cc0,1);
                      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
                      in_stack_00000148 = unaff_x29 + -0xc0;
                      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000148);
                      if (*(long *)(unaff_x29 + -0xc0) != 0) {
                        _free(*(undefined8 *)(unaff_x29 + -0xb8));
                      }
                      _free(puVar21);
                      if (lVar3 != 0) {
                        _free(uVar11);
                      }
                      if (lVar4 != 0) {
                        _free(uVar12);
                      }
                      lVar3 = *(long *)(unaff_x29 + -0x78);
                      uVar11 = *(undefined8 *)(unaff_x29 + -0x70);
                      func_0x000102167960(&stack0x000000e8,uVar11,*(undefined8 *)(unaff_x29 + -0x68)
                                          ,&UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
                      puVar21 = (undefined8 *)_malloc(0x18);
                      if (puVar21 == (undefined8 *)0x0) {
                        func_0x0001087c9084(1,0x18);
                      }
                      else {
                        puVar21[1] = 0x6b726f7774656e22;
                        *puVar21 = 0x203a226570797422;
                        puVar21[2] = 0x2c22737365636341;
                        in_stack_00000148 = 1;
                        puVar20 = (undefined4 *)_malloc(6);
                        if (puVar20 == (undefined4 *)0x0) {
                          func_0x0001087c9084(1,6);
                        }
                        else {
                          *puVar20 = 0x69727473;
                          *(undefined2 *)(puVar20 + 1) = 0x676e;
                          *(undefined8 *)(unaff_x29 + -0x78) = 6;
                          *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
                          *(undefined8 *)(unaff_x29 + -0x68) = 6;
                          in_stack_00000160 = &stack0x00000148;
                          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                    (unaff_x29 + -0xc0,s_target_____108ae1338,&stack0x00000160);
                          if (*(long *)(unaff_x29 + -0x78) != 0) {
                            _free(*(undefined8 *)(unaff_x29 + -0x70));
                          }
                          lVar4 = *(long *)(unaff_x29 + -0xc0);
                          uVar12 = *(undefined8 *)(unaff_x29 + -0xb8);
                          in_stack_00000148 = 1;
                          puVar20 = (undefined4 *)_malloc(6);
                          if (puVar20 == (undefined4 *)0x0) {
                            func_0x0001087c9084(1,6);
                          }
                          else {
                            *puVar20 = 0x69727473;
                            *(undefined2 *)(puVar20 + 1) = 0x676e;
                            *(undefined8 *)(unaff_x29 + -0x78) = 6;
                            *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
                            *(undefined8 *)(unaff_x29 + -0x68) = 6;
                            in_stack_00000160 = &stack0x00000148;
                            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                      (unaff_x29 + -0xc0,s_host_____108ae1347,&stack0x00000160);
                            if (*(long *)(unaff_x29 + -0x78) != 0) {
                              _free(*(undefined8 *)(unaff_x29 + -0x70));
                            }
                            lVar5 = *(long *)(unaff_x29 + -0xc0);
                            uVar13 = *(undefined8 *)(unaff_x29 + -0xb8);
                            in_stack_00000148 = 1;
                            puVar22 = (undefined8 *)_malloc(0x17);
                            if (puVar22 == (undefined8 *)0x0) {
                              func_0x0001087c9084(1,0x17);
                            }
                            else {
                              puVar22[1] = 0x506c61766f727070;
                              *puVar22 = 0x416b726f7774654e;
                              *(undefined8 *)((long)puVar22 + 0xf) = 0x6c6f636f746f7250;
                              *(undefined8 *)(unaff_x29 + -0x78) = 0x17;
                              *(undefined8 **)(unaff_x29 + -0x70) = puVar22;
                              *(undefined8 *)(unaff_x29 + -0x68) = 0x17;
                              in_stack_00000160 = &stack0x00000148;
                              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                        (unaff_x29 + -0xc0,s_protocol_____108ae1354,&stack0x00000160
                                        );
                              if (*(long *)(unaff_x29 + -0x78) != 0) {
                                _free(*(undefined8 *)(unaff_x29 + -0x70));
                              }
                              lVar6 = *(long *)(unaff_x29 + -0xc0);
                              uVar14 = *(undefined8 *)(unaff_x29 + -0xb8);
                              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                              *(undefined8 *)(unaff_x29 + -0xb8) = 0;
                              puVar20 = (undefined4 *)_malloc(6);
                              if (puVar20 == (undefined4 *)0x0) {
                                func_0x0001087c9084(1,6);
                              }
                              else {
                                *puVar20 = 0x626d756e;
                                *(undefined2 *)(puVar20 + 1) = 0x7265;
                                *(undefined8 *)(unaff_x29 + -0x78) = 6;
                                *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
                                *(undefined8 *)(unaff_x29 + -0x68) = 6;
                                in_stack_00000160 = (undefined8 *)(unaff_x29 + -0xc0);
                                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                          (&stack0x00000130,s_port_____108ae1365,&stack0x00000160);
                                if (*(long *)(unaff_x29 + -0x78) != 0) {
                                  _free(*(undefined8 *)(unaff_x29 + -0x70));
                                }
                                uVar15 = in_stack_00000138;
                                lVar7 = in_stack_00000130;
                                in_stack_00000160 = (undefined8 *)0x18;
                                FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,5,&UNK_108cf9cc0,1)
                                ;
                                *(undefined8 *)(unaff_x29 + -0xb0) =
                                     *(undefined8 *)(unaff_x29 + -0x68);
                                in_stack_00000148 = unaff_x29 + -0xc0;
                                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                          (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000148);
                                if (*(long *)(unaff_x29 + -0xc0) != 0) {
                                  _free(*(undefined8 *)(unaff_x29 + -0xb8));
                                }
                                _free(puVar21);
                                if (lVar4 != 0) {
                                  _free(uVar12);
                                }
                                if (lVar5 != 0) {
                                  _free(uVar13);
                                }
                                if (lVar6 != 0) {
                                  _free(uVar14);
                                }
                                if (lVar7 != 0) {
                                  _free(uVar15);
                                }
                                lVar4 = *(long *)(unaff_x29 + -0x78);
                                uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
                                func_0x000102167960(&stack0x00000118,uVar12,
                                                    *(undefined8 *)(unaff_x29 + -0x68),
                                                    &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
                                puVar21 = (undefined8 *)_malloc(0x16);
                                if (puVar21 == (undefined8 *)0x0) {
                                  func_0x0001087c9084(1,0x16);
                                }
                                else {
                                  puVar21[1] = 0x6c6f6f5470636d22;
                                  *puVar21 = 0x203a226570797422;
                                  *(undefined8 *)((long)puVar21 + 0xe) = 0x2c226c6c61436c6f;
                                  in_stack_00000148 = 1;
                                  puVar20 = (undefined4 *)_malloc(6);
                                  if (puVar20 == (undefined4 *)0x0) {
                                    func_0x0001087c9084(1,6);
                                  }
                                  else {
                                    *puVar20 = 0x69727473;
                                    *(undefined2 *)(puVar20 + 1) = 0x676e;
                                    *(undefined8 *)(unaff_x29 + -0x78) = 6;
                                    *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
                                    *(undefined8 *)(unaff_x29 + -0x68) = 6;
                                    in_stack_00000160 = &stack0x00000148;
                                    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                              (unaff_x29 + -0xc0,s_server_____108ae1372,
                                               &stack0x00000160);
                                    if (*(long *)(unaff_x29 + -0x78) != 0) {
                                      _free(*(undefined8 *)(unaff_x29 + -0x70));
                                    }
                                    lVar5 = *(long *)(unaff_x29 + -0xc0);
                                    uVar13 = *(undefined8 *)(unaff_x29 + -0xb8);
                                    in_stack_00000148 = 1;
                                    puVar20 = (undefined4 *)_malloc(6);
                                    if (puVar20 == (undefined4 *)0x0) {
                                      func_0x0001087c9084(1,6);
                                    }
                                    else {
                                      *puVar20 = 0x69727473;
                                      *(undefined2 *)(puVar20 + 1) = 0x676e;
                                      *(undefined8 *)(unaff_x29 + -0x78) = 6;
                                      *(undefined4 **)(unaff_x29 + -0x70) = puVar20;
                                      *(undefined8 *)(unaff_x29 + -0x68) = 6;
                                      in_stack_00000160 = &stack0x00000148;
                                      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                (unaff_x29 + -0xc0,s_toolName_____108ae1381,
                                                 &stack0x00000160);
                                      if (*(long *)(unaff_x29 + -0x78) != 0) {
                                        _free(*(undefined8 *)(unaff_x29 + -0x70));
                                      }
                                      lVar6 = *(long *)(unaff_x29 + -0xc0);
                                      uVar14 = *(undefined8 *)(unaff_x29 + -0xb8);
                                      in_stack_00000148 = 1;
                                      puVar20 = (undefined4 *)_malloc(6);
                                      if (puVar20 == (undefined4 *)0x0) {
                                        func_0x0001087c9084(1,6);
                                      }
                                      else {
                                        *puVar20 = 0x69727473;
                                        *(undefined2 *)(puVar20 + 1) = 0x676e;
                                        in_stack_00000160 = (undefined8 *)0x6;
                                        *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000160;
                                        *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x22;
                                        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                  (unaff_x29 + -0x78,s___null_108ae5e02,
                                                   unaff_x29 + -0xc0);
                                        if (in_stack_00000160 != (undefined8 *)0x0) {
                                          _free(puVar20);
                                        }
                                        in_stack_00000160 = &stack0x00000148;
                                        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                  (unaff_x29 + -0xc0,s_connectorId_____108ae1392,
                                                   &stack0x00000160);
                                        if (*(long *)(unaff_x29 + -0x78) != 0) {
                                          _free(*(undefined8 *)(unaff_x29 + -0x70));
                                        }
                                        lVar7 = *(long *)(unaff_x29 + -0xc0);
                                        uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
                                        in_stack_00000148 = 1;
                                        puVar20 = (undefined4 *)_malloc(6);
                                        if (puVar20 == (undefined4 *)0x0) {
                                          func_0x0001087c9084(1,6);
                                        }
                                        else {
                                          *puVar20 = 0x69727473;
                                          *(undefined2 *)(puVar20 + 1) = 0x676e;
                                          in_stack_00000160 = (undefined8 *)0x6;
                                          *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000160;
                                          *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x22;
                                          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                    (unaff_x29 + -0x78,s___null_108ae5e02,
                                                     unaff_x29 + -0xc0);
                                          if (in_stack_00000160 != (undefined8 *)0x0) {
                                            _free(puVar20);
                                          }
                                          in_stack_00000160 = &stack0x00000148;
                                          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                    (unaff_x29 + -0xc0,s_connectorName_____108ae13a6
                                                     ,&stack0x00000160);
                                          if (*(long *)(unaff_x29 + -0x78) != 0) {
                                            _free(*(undefined8 *)(unaff_x29 + -0x70));
                                          }
                                          lVar8 = *(long *)(unaff_x29 + -0xc0);
                                          uVar16 = *(undefined8 *)(unaff_x29 + -0xb8);
                                          in_stack_00000148 = 1;
                                          puVar20 = (undefined4 *)_malloc(6);
                                          if (puVar20 == (undefined4 *)0x0) {
                                            func_0x0001087c9084(1,6);
                                          }
                                          else {
                                            *puVar20 = 0x69727473;
                                            *(undefined2 *)(puVar20 + 1) = 0x676e;
                                            in_stack_00000160 = (undefined8 *)0x6;
                                            *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000160;
                                            *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x22;
                                            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                      (unaff_x29 + -0x78,s___null_108ae5e02,
                                                       unaff_x29 + -0xc0);
                                            if (in_stack_00000160 != (undefined8 *)0x0) {
                                              _free(puVar20);
                                            }
                                            in_stack_00000160 = &stack0x00000148;
                                            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                      (unaff_x29 + -0xd8,s_toolTitle_____108ae13bc,
                                                       &stack0x00000160);
                                            if (*(long *)(unaff_x29 + -0x78) != 0) {
                                              _free(*(undefined8 *)(unaff_x29 + -0x70));
                                            }
                                            in_stack_00000160 = (undefined8 *)0x16;
                                            uVar26 = *(undefined8 *)(unaff_x29 + -0xd0);
                                            lVar23 = *(long *)(unaff_x29 + -0xd8);
                                            FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,6,
                                                          &UNK_108cf9cc0,1);
                                            *(undefined8 *)(unaff_x29 + -0xb0) =
                                                 *(undefined8 *)(unaff_x29 + -0x68);
                                            in_stack_00000148 = unaff_x29 + -0xc0;
                                            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                      (unaff_x29 + -0x78,s_____108ab6fcb,
                                                       &stack0x00000148);
                                            if (*(long *)(unaff_x29 + -0xc0) != 0) {
                                              _free(*(undefined8 *)(unaff_x29 + -0xb8));
                                            }
                                            _free(puVar21);
                                            if (lVar5 != 0) {
                                              _free(uVar13);
                                            }
                                            if (lVar6 != 0) {
                                              _free(uVar14);
                                            }
                                            if (lVar7 != 0) {
                                              _free(uVar15);
                                            }
                                            if (lVar8 != 0) {
                                              _free(uVar16);
                                            }
                                            if (lVar23 != 0) {
                                              _free(uVar26);
                                            }
                                            lVar5 = *(long *)(unaff_x29 + -0x78);
                                            uVar13 = *(undefined8 *)(unaff_x29 + -0x70);
                                            func_0x000102167960(&stack0x00000148,uVar13,
                                                                *(undefined8 *)(unaff_x29 + -0x68),
                                                                &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
                                            puVar21 = (undefined8 *)_malloc(0x1d);
                                            if (puVar21 == (undefined8 *)0x0) {
                                              func_0x0001087c9084(1,0x1d);
                                            }
                                            else {
                                              puVar21[1] = 0x7473657571657222;
                                              *puVar21 = 0x203a226570797422;
                                              *(undefined8 *)((long)puVar21 + 0x15) =
                                                   0x2c22736e6f697373;
                                              *(undefined8 *)((long)puVar21 + 0xd) =
                                                   0x696d726550747365;
                                              *(undefined8 *)(unaff_x29 + -0x88) = 1;
                                              *(undefined8 *)(unaff_x29 + -0x80) = 0;
                                              puVar20 = (undefined4 *)_malloc(6);
                                              if (puVar20 == (undefined4 *)0x0) {
                                                func_0x0001087c9084(1,6);
                                              }
                                              else {
                                                *puVar20 = 0x69727473;
                                                *(undefined2 *)(puVar20 + 1) = 0x676e;
                                                in_stack_00000160 = (undefined8 *)0x6;
                                                *(undefined8 ***)(unaff_x29 + -0xc0) =
                                                     &stack0x00000160;
                                                *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x22;
                                                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                          (unaff_x29 + -0x78,s___null_108ae5e02,
                                                           unaff_x29 + -0xc0);
                                                if (in_stack_00000160 != (undefined8 *)0x0) {
                                                  _free(puVar20);
                                                }
                                                in_stack_00000160 =
                                                     (undefined8 *)(unaff_x29 + -0x88);
                                                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                          (unaff_x29 + -0xc0,s_reason_____108adf4b7,
                                                           &stack0x00000160);
                                                if (*(long *)(unaff_x29 + -0x78) != 0) {
                                                  _free(*(undefined8 *)(unaff_x29 + -0x70));
                                                }
                                                lVar6 = *(long *)(unaff_x29 + -0xc0);
                                                uVar14 = *(undefined8 *)(unaff_x29 + -0xb8);
                                                *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                                                *(undefined8 *)(unaff_x29 + -0xb8) = 0;
                                                puVar22 = (undefined8 *)_malloc(0x18);
                                                if (puVar22 != (undefined8 *)0x0) {
                                                  puVar22[1] = 0x6f697373696d7265;
                                                  *puVar22 = 0x5074736575716552;
                                                  puVar22[2] = 0x656c69666f72506e;
                                                  *(undefined8 *)(unaff_x29 + -0x78) = 0x18;
                                                  *(undefined8 **)(unaff_x29 + -0x70) = puVar22;
                                                  *(undefined8 *)(unaff_x29 + -0x68) = 0x18;
                                                  in_stack_00000160 =
                                                       (undefined8 *)(unaff_x29 + -0xc0);
                                                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                            (unaff_x29 + -0xa0,
                                                             s_permissions_____108ae13ce,
                                                             &stack0x00000160);
                                                  if (*(long *)(unaff_x29 + -0x78) != 0) {
                                                    _free(*(undefined8 *)(unaff_x29 + -0x70));
                                                  }
                                                  in_stack_00000160 = (undefined8 *)0x1d;
                                                  FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,3
                                                                ,&UNK_108cf9cc0,1);
                                                  *(undefined8 *)(unaff_x29 + -0xb0) =
                                                       *(undefined8 *)(unaff_x29 + -0x68);
                                                  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xc0;
                                                  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x22;
                                                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                                                            (unaff_x29 + -0x78,s_____108ab6fcb,
                                                             unaff_x29 + -0x88);
                                                  if (*(long *)(unaff_x29 + -0xc0) != 0) {
                                                    _free(*(undefined8 *)(unaff_x29 + -0xb8));
                                                  }
                                                  _free(puVar21);
                                                  if (lVar6 != 0) {
                                                    _free(uVar14);
                                                  }
                                                  if (in_stack_00000230 != 0) {
                                                    _free(in_stack_00000238);
                                                  }
                                                  lVar6 = *(long *)(unaff_x29 + -0x78);
                                                  uVar14 = *(undefined8 *)(unaff_x29 + -0x70);
                                                  func_0x000102167960(unaff_x29 + -0x78,uVar14,
                                                                      *(undefined8 *)
                                                                       (unaff_x29 + -0x68),
                                                                      &UNK_108cf9cc1,7,
                                                                      &UNK_108cf9cc0,1);
                                                  lVar18 = in_stack_00000148;
                                                  uVar17 = in_stack_00000120;
                                                  lVar23 = in_stack_00000118;
                                                  uVar26 = in_stack_000000f0;
                                                  lVar8 = in_stack_000000e8;
                                                  uVar16 = in_stack_000000c0;
                                                  lVar7 = in_stack_000000b8;
                                                  uVar15 = in_stack_00000090;
                                                  in_stack_00000160 =
                                                       (undefined8 *)in_stack_00000088;
                                                  uVar27 = *(undefined8 *)(unaff_x29 + -0x70);
                                                  lVar24 = *(long *)(unaff_x29 + -0x78);
                                                  FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000160,6
                                                                ,&UNK_108cf9ded,3);
                                                  uVar25 = *(undefined8 *)(unaff_x29 + -0x78);
                                                  unaff_x21[1] = *(undefined8 *)(unaff_x29 + -0x70);
                                                  *unaff_x21 = uVar25;
                                                  unaff_x21[2] = *(undefined8 *)(unaff_x29 + -0x68);
                                                  if (in_stack_00000160 != (undefined8 *)0x0) {
                                                    _free(uVar15);
                                                  }
                                                  if (lVar7 != 0) {
                                                    _free(uVar16);
                                                  }
                                                  if (lVar8 != 0) {
                                                    _free(uVar26);
                                                  }
                                                  if (lVar23 != 0) {
                                                    _free(uVar17);
                                                  }
                                                  if (lVar18 != 0) {
                                                    _free(unaff_x22);
                                                  }
                                                  if (lVar24 != 0) {
                                                    _free(uVar27);
                                                  }
                                                  if (lVar6 != 0) {
                                                    _free(uVar14);
                                                  }
                                                  if (lVar5 != 0) {
                                                    _free(uVar13);
                                                  }
                                                  if (lVar4 != 0) {
                                                    _free(uVar12);
                                                  }
                                                  if (lVar3 != 0) {
                                                    _free(uVar11);
                                                  }
                                                  if (lVar2 != 0) {
                                                    _free(uVar10);
                                                  }
                                                  if (lVar1 != 0) {
                                                    _free(uVar9);
                                                  }
                                                  return;
                                                }
                                                func_0x0001087c9084(1,0x18);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x101c17ecc);
  (*pcVar19)();
}

