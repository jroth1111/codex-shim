
void FUN_1018ab3c8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 *in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  undefined *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined *in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
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
  
code_r0x0001018ab3c8:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (param_1,s_Overridden_by_project_config____108ade184,param_3);
  lVar4 = in_stack_00000078;
  puVar6 = in_stack_00000080;
  lVar9 = in_stack_00000088;
LAB_1018ab4c0:
  in_stack_000000b8 = in_stack_00000050;
  in_stack_000000b0 = in_stack_00000048;
  in_stack_000000c8 = in_stack_00000060;
  in_stack_000000c0 = in_stack_00000058;
  in_stack_000000d8 = in_stack_00000070;
  in_stack_000000d0 = in_stack_00000068;
  in_stack_00000098 = (undefined *)in_stack_00000030;
  in_stack_00000090 = in_stack_00000028;
  in_stack_000000a8 = (undefined *)in_stack_00000040;
  in_stack_000000a0 = (undefined *)in_stack_00000038;
  if (unaff_x28 != 0) {
    FUN_1019a9cc8(unaff_x29 + -0xb0,unaff_x28);
    lVar10 = *(long *)(unaff_x29 + -0xb0);
    if (lVar10 != -0x7ffffffffffffffb) {
      in_stack_000000e8 = *(long *)(unaff_x29 + -0xa0);
      in_stack_000000e0 = *(long *)(unaff_x29 + -0xa8);
      in_stack_000000f8 = *(long *)(unaff_x29 + -0x90);
      in_stack_000000f0 = *(long *)(unaff_x29 + -0x98);
      in_stack_00000108 = *(long *)(unaff_x29 + -0x80);
      in_stack_00000100 = *(long *)(unaff_x29 + -0x88);
      in_stack_00000118 = *(long *)(unaff_x29 + -0x70);
      in_stack_00000110 = *(long *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0xb0) = 0x8000000000000000;
      func_0x00010194dc28(unaff_x29 + -0xb0);
      goto LAB_1018ab548;
    }
    FUN_10192f45c(unaff_x29 + -0xb0);
  }
  lVar10 = -0x8000000000000000;
LAB_1018ab548:
  unaff_x19[5] = in_stack_000000b8;
  unaff_x19[4] = in_stack_000000b0;
  unaff_x19[7] = in_stack_000000c8;
  unaff_x19[6] = in_stack_000000c0;
  unaff_x19[9] = in_stack_000000d8;
  unaff_x19[8] = in_stack_000000d0;
  unaff_x19[1] = (long)in_stack_00000098;
  *unaff_x19 = in_stack_00000090;
  unaff_x19[3] = (long)in_stack_000000a8;
  unaff_x19[2] = (long)in_stack_000000a0;
  unaff_x19[0xf] = in_stack_000000e8;
  unaff_x19[0xe] = in_stack_000000e0;
  unaff_x19[0x11] = in_stack_000000f8;
  unaff_x19[0x10] = in_stack_000000f0;
  unaff_x19[0x13] = in_stack_00000108;
  unaff_x19[0x12] = in_stack_00000100;
  unaff_x19[0x15] = in_stack_00000118;
  unaff_x19[0x14] = in_stack_00000110;
  unaff_x19[10] = lVar4;
  unaff_x19[0xb] = (long)puVar6;
  unaff_x19[0xc] = lVar9;
  unaff_x19[0xd] = lVar10;
  lVar4 = unaff_x20;
  if (*unaff_x19 == 7) {
    while (unaff_x20 = lVar4 + 0x18, unaff_x20 != in_stack_00000010) {
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar1 = *(undefined8 *)(lVar4 + 0x28);
      lVar4 = __ZN16codex_app_server22config_manager_service13value_at_path17h81c0bdeec0651b6dE
                        (in_stack_00000018 + 0x98,uVar7,uVar1);
      unaff_x28 = __ZN16codex_app_server22config_manager_service13value_at_path17h81c0bdeec0651b6dE
                            (in_stack_00000020,uVar7,uVar1);
      if (lVar4 == 0) {
        if (unaff_x28 != 0) goto LAB_1018ab288;
      }
      else if ((unaff_x28 == 0) || (iVar3 = FUN_10198acb0(lVar4,unaff_x28), iVar3 == 0)) {
LAB_1018ab288:
        __ZN12codex_config5state16ConfigLayerStack10get_layers17h67e3e6a60e8f7673E
                  (&stack0x00000090,in_stack_00000008,1,0);
        lVar9 = (long)in_stack_00000098;
        lVar4 = in_stack_00000090;
        if (in_stack_000000a0 != (undefined *)0x0) {
          lVar10 = 0;
          lVar8 = (long)in_stack_000000a0 * 8;
          do {
            lVar11 = *(long *)(lVar9 + lVar10);
            lVar5 = __ZN16codex_app_server22config_manager_service13value_at_path17h81c0bdeec0651b6dE
                              (lVar11 + 0x98,uVar7,uVar1);
            if (lVar5 != 0) {
              FUN_1028e42d0(&stack0x00000090,lVar11);
              uVar7 = *(undefined8 *)(lVar11 + 0x40);
              in_stack_00000060 = *(long *)(lVar11 + 0x48);
              if (in_stack_00000060 == 0) {
                in_stack_00000068 = 1;
              }
              else {
                in_stack_00000068 = _malloc(in_stack_00000060);
                if (in_stack_00000068 == 0) {
                  func_0x0001087c9084(1,in_stack_00000060);
                  goto LAB_1018ab648;
                }
              }
              _memcpy(in_stack_00000068,uVar7,in_stack_00000060);
              in_stack_00000028 = in_stack_00000090;
              in_stack_00000128 = (long)in_stack_000000a0;
              in_stack_00000120 = (long)in_stack_00000098;
              in_stack_00000138 = in_stack_000000b0;
              in_stack_00000130 = (long)in_stack_000000a8;
              in_stack_00000148 = in_stack_000000c0;
              in_stack_00000140 = in_stack_000000b8;
              if (lVar4 != 0) {
                _free(lVar9);
              }
              if (in_stack_00000028 == 7) goto LAB_1018ab220;
              in_stack_00000000[1] = in_stack_00000128;
              *in_stack_00000000 = in_stack_00000120;
              in_stack_00000000[3] = in_stack_00000138;
              in_stack_00000000[2] = in_stack_00000130;
              in_stack_00000000[5] = in_stack_00000148;
              in_stack_00000000[4] = in_stack_00000140;
              in_stack_00000070 = in_stack_00000060;
              if (in_stack_00000028 < 3) {
                if (in_stack_00000028 == 0) {
                  *(long **)(unaff_x29 + -0xb0) = in_stack_00000000;
                  in_stack_00000090 = unaff_x29 + -0xb0;
                  in_stack_00000098 = &DAT_10192d980;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&stack0x00000078,s__Overridden_by_managed_policy__M_108ade115,
                             &stack0x00000090);
                  lVar4 = in_stack_00000078;
                  puVar6 = in_stack_00000080;
                  lVar9 = in_stack_00000088;
                }
                else if (in_stack_00000028 == 1) {
                  *(long *)(unaff_x29 + -0xb0) = in_stack_00000038;
                  *(long *)(unaff_x29 + -0xa8) = in_stack_00000040;
                  in_stack_00000090 = unaff_x29 + -0xb0;
                  in_stack_00000098 =
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&stack0x00000078,s__Overridden_by_managed_config__s_108ade13c,
                             &stack0x00000090);
                  lVar4 = in_stack_00000078;
                  puVar6 = in_stack_00000080;
                  lVar9 = in_stack_00000088;
                }
                else {
                  *(long *)(unaff_x29 + -0xb0) = in_stack_00000050;
                  *(long *)(unaff_x29 + -0xa8) = in_stack_00000058;
                  in_stack_00000090 = unaff_x29 + -0xb0;
                  in_stack_00000098 =
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&stack0x00000078,s_Overridden_by_user_config__108ade166,
                             &stack0x00000090);
                  lVar4 = in_stack_00000078;
                  puVar6 = in_stack_00000080;
                  lVar9 = in_stack_00000088;
                }
                goto LAB_1018ab4c0;
              }
              if (in_stack_00000028 < 5) {
                if (in_stack_00000028 == 3) {
                  *(long *)(unaff_x29 + -0xb0) = in_stack_00000038;
                  *(long *)(unaff_x29 + -0xa8) = in_stack_00000040;
                  in_stack_00000090 = unaff_x29 + -0xb0;
                  in_stack_00000098 =
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  in_stack_000000a0 = &UNK_10b267430;
                  in_stack_000000a8 = &DAT_10192d9a4;
                  param_1 = &stack0x00000078;
                  param_3 = &stack0x00000090;
                  goto code_r0x0001018ab3c8;
                }
                puVar6 = (undefined8 *)_malloc(0x1b);
                uVar7 = 0x1b;
                if (puVar6 != (undefined8 *)0x0) {
                  puVar6[1] = 0x6573207962206e65;
                  *puVar6 = 0x646469727265764f;
                  *(undefined8 *)((long)puVar6 + 0x13) = 0x7367616c66206e6f;
                  *(undefined8 *)((long)puVar6 + 0xb) = 0x6973736573207962;
                  lVar4 = 0x1b;
                  lVar9 = 0x1b;
                  goto LAB_1018ab4c0;
                }
              }
              else {
                if (in_stack_00000028 == 5) {
                  *(long *)(unaff_x29 + -0xb0) = in_stack_00000038;
                  *(long *)(unaff_x29 + -0xa8) = in_stack_00000040;
                  in_stack_00000090 = unaff_x29 + -0xb0;
                  in_stack_00000098 =
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&stack0x00000078,s__Overridden_by_legacy_managed_co_108ade1a8,
                             &stack0x00000090);
                  lVar4 = in_stack_00000078;
                  puVar6 = in_stack_00000080;
                  lVar9 = in_stack_00000088;
                  goto LAB_1018ab4c0;
                }
                puVar6 = (undefined8 *)_malloc(0x33);
                uVar7 = 0x33;
                if (puVar6 != (undefined8 *)0x0) {
                  *(undefined4 *)((long)puVar6 + 0x2f) = 0x4d444d20;
                  puVar6[1] = 0x656c207962206e65;
                  *puVar6 = 0x646469727265764f;
                  puVar6[3] = 0x6e6f632064656761;
                  puVar6[2] = 0x6e616d2079636167;
                  puVar6[5] = 0x206d6f7266206e6f;
                  puVar6[4] = 0x6974617275676966;
                  lVar4 = 0x33;
                  lVar9 = 0x33;
                  goto LAB_1018ab4c0;
                }
              }
              func_0x0001087c9084(1,uVar7);
LAB_1018ab648:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ab64c);
              (*pcVar2)();
            }
            lVar10 = lVar10 + 8;
          } while (lVar8 - lVar10 != 0);
        }
        if (lVar4 != 0) {
          _free(lVar9);
        }
      }
LAB_1018ab220:
      *unaff_x19 = 7;
      lVar4 = unaff_x20;
    }
    *unaff_x19 = 7;
  }
  return;
}

