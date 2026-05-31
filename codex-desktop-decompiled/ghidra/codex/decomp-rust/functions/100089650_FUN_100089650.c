
/* WARNING: Removing unreachable block (ram,0x00010008a738) */
/* WARNING: Removing unreachable block (ram,0x00010008a484) */
/* WARNING: Removing unreachable block (ram,0x00010008a460) */
/* WARNING: Removing unreachable block (ram,0x00010008a464) */
/* WARNING: Removing unreachable block (ram,0x00010008a474) */
/* WARNING: Removing unreachable block (ram,0x00010008a488) */
/* WARNING: Removing unreachable block (ram,0x00010008a23c) */
/* WARNING: Removing unreachable block (ram,0x00010008a250) */
/* WARNING: Removing unreachable block (ram,0x00010008a168) */
/* WARNING: Removing unreachable block (ram,0x00010008a02c) */
/* WARNING: Removing unreachable block (ram,0x000100089e9c) */
/* WARNING: Removing unreachable block (ram,0x000100089eb0) */
/* WARNING: Removing unreachable block (ram,0x000100089aa8) */
/* WARNING: Removing unreachable block (ram,0x000100089ab8) */
/* WARNING: Removing unreachable block (ram,0x000100089c60) */
/* WARNING: Removing unreachable block (ram,0x000100089c70) */
/* WARNING: Removing unreachable block (ram,0x000100089f8c) */
/* WARNING: Removing unreachable block (ram,0x000100089fa0) */
/* WARNING: Removing unreachable block (ram,0x00010008a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010008a1c0) */
/* WARNING: Removing unreachable block (ram,0x00010008a1d4) */
/* WARNING: Removing unreachable block (ram,0x00010008a4a8) */
/* WARNING: Removing unreachable block (ram,0x00010008a4cc) */
/* WARNING: Removing unreachable block (ram,0x00010008a4ac) */
/* WARNING: Removing unreachable block (ram,0x00010008a4bc) */
/* WARNING: Removing unreachable block (ram,0x00010008a4d0) */
/* WARNING: Removing unreachable block (ram,0x00010008a534) */
/* WARNING: Removing unreachable block (ram,0x00010008a558) */
/* WARNING: Removing unreachable block (ram,0x00010008a538) */
/* WARNING: Removing unreachable block (ram,0x00010008a548) */
/* WARNING: Removing unreachable block (ram,0x00010008a55c) */
/* WARNING: Removing unreachable block (ram,0x00010008a6f0) */
/* WARNING: Removing unreachable block (ram,0x00010008a9e4) */
/* WARNING: Removing unreachable block (ram,0x00010008a9c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089650(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x22;
  undefined8 *in_stack_00000050;
  long *in_stack_000002e0;
  undefined8 in_stack_000002e8;
  long *in_stack_00000308;
  long *in_stack_00000318;
  long in_stack_00000330;
  undefined8 in_stack_00000338;
  long in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  long in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined6 in_stack_000005f2;
  long in_stack_00000638;
  long *in_stack_00000648;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  long in_stack_000007d0;
  undefined8 in_stack_00000818;
  undefined8 in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined8 in_stack_00000830;
  undefined8 in_stack_00000838;
  undefined8 in_stack_00000840;
  long *in_stack_00000858;
  undefined8 in_stack_00000868;
  undefined8 in_stack_00000870;
  
  uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x000007c0,param_2,s__108b19215,&stack0x000005a0);
  if ((uVar4 & 1) == 0) {
    __ZN78__LT_http__uri__Parts_u20_as_u20_core__convert__From_LT_http__uri__Uri_GT__GT_4from17hd84a085c093d57b3E
              (&stack0x000005a0,&stack0x000007c0);
    if (in_stack_000005d0 != 0) {
      (**(code **)(in_stack_000005d0 + 0x20))(&stack0x000005e8,in_stack_000005d8,in_stack_000005e0);
    }
    __ZN4http3uri3Uri10from_parts17h64d8ea6e2c9a88b3E(&stack0x00000330,&stack0x000007c0);
    if ((char)in_stack_00000330 == '\x03') {
      FUN_107c05cb4(&UNK_108c59f27,0x13,&stack0x000007c0,&UNK_10b1dd278,&UNK_10b1d7a10);
    }
    else {
      iVar3 = __ZN53__LT_http__uri__Uri_u20_as_u20_core__fmt__Display_GT_3fmt17he26679adf46c1124E
                        (&stack0x00000a80,&stack0x000007c0);
      if (iVar3 == 0) {
        FUN_1001101a4(&stack0x00000a80);
        FUN_10012fb6c(&stack0x000007c0,unaff_x19 + 0x1e0);
        if (&stack0x00000000 == (undefined1 *)0x7ffffffffffffa60) {
          __ZN86__LT_aws_config__provider_config__ProviderConfig_u20_as_u20_core__default__Default_GT_7default17h7d8fd39c04ecb4a5E
                    (0x7ffffffffffffcd0);
          in_stack_00000858 = in_stack_00000308;
        }
        else {
          *(undefined8 *)(unaff_x22 + 0xb0) = in_stack_00000870;
          *(undefined8 *)(unaff_x22 + 0xa8) = in_stack_00000868;
          *(ulong *)(unaff_x22 + 0x50) = CONCAT62(in_stack_000005f2,0xffff);
          *(undefined8 *)(unaff_x22 + 0x48) = 0;
          *(undefined8 *)(unaff_x22 + 0x60) = in_stack_00000820;
          *(undefined8 *)(unaff_x22 + 0x58) = in_stack_00000818;
          *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000830;
          *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000828;
          *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000840;
          *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000838;
          *(undefined8 *)(unaff_x22 + 0x10) = 0x60000020;
          *(undefined **)(unaff_x22 + 8) = &UNK_10b1dd0c8;
          *(undefined8 *)(unaff_x22 + 0x20) = in_stack_000005c0;
          *(undefined8 *)(unaff_x22 + 0x18) = in_stack_000005b8;
          *(undefined **)(unaff_x22 + 0x30) = &UNK_10b1dd518;
          *(undefined8 *)(unaff_x22 + 0x28) = in_stack_000005c8;
          *(undefined8 *)(unaff_x22 + 0x40) = 1;
          *(undefined **)(unaff_x22 + 0x38) = &UNK_108c59f26;
        }
        FUN_1000e4508(&stack0x000005a0,&stack0x000007c0);
        FUN_1000e7638(&stack0x00000330);
        FUN_1000c10d4(&stack0x00000750,&stack0x000007c0);
        _memcpy(1,1,0);
        puVar5 = (undefined8 *)_malloc(0x28);
        if (puVar5 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
        }
        else {
          puVar5[1] = 1;
          *puVar5 = 1;
          puVar5[2] = 0;
          puVar5[3] = 1;
          puVar5[4] = 0;
          if (in_stack_00000638 != 0) {
            lVar2 = *in_stack_00000648;
            *in_stack_00000648 = lVar2 + -1;
            LORelease();
            if (lVar2 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000648);
            }
          }
          _memcpy(&stack0x000007c0,&stack0x000005a0,0x218);
          FUN_1000e4788(&stack0x000005a0,&stack0x000007c0);
          FUN_1000c0ec0(&stack0x00000750,&stack0x00000330);
          _memcpy(&stack0x000007c0,&stack0x000005a0,0x218);
          FUN_1000c0ab8(&stack0x00000a80);
          puVar5 = (undefined8 *)_malloc(0x48);
          if (puVar5 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
          }
          else {
            puVar5[5] = &UNK_108c59ad0;
            puVar5[4] = 0xf;
            puVar5[7] = 0;
            puVar5[6] = 0;
            puVar5[8] = 0;
            puVar5[1] = 1;
            *puVar5 = 1;
            puVar5[3] = &UNK_108c59afd;
            puVar5[2] = 0x8000000000000000;
            _memcpy(&stack0x000005b0,&stack0x00000330,0x1a8);
            lVar2 = _malloc(0x1b8);
            if (lVar2 == 0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1b8);
            }
            else {
              _memcpy(lVar2,&stack0x000005a0,0x1b8);
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6b325393d3a231f0E(&stack0x00000958)
              ;
              puRam0000000000000010 = &UNK_10b1dcb88;
              lRam0000000000000008 = lVar2;
              _memcpy(&stack0x000005a0,&stack0x000007c0,0x218);
              lVar2 = *in_stack_000002e0;
              *in_stack_000002e0 = lVar2 + 1;
              if (-1 < lVar2) {
                FUN_1000e4cdc(&stack0x000007c0,&stack0x00000550,in_stack_000002e0,in_stack_000002e8)
                ;
                if (in_stack_000007d0 == 0) {
                  lVar2 = 1;
                }
                else {
                  lVar2 = _malloc(in_stack_000007d0);
                  if (lVar2 == 0) {
                    FUN_107c03c64(1,in_stack_000007d0);
                    goto LAB_10008ab08;
                  }
                }
                _memcpy(lVar2,in_stack_000007c8,in_stack_000007d0);
                if (in_stack_00000330 != -0x7fffffffffffffff) {
                  if ((in_stack_00000330 != -0x8000000000000000) && (in_stack_00000330 != 0)) {
                    _free(in_stack_00000338);
                  }
                  if ((in_stack_00000348 != -0x8000000000000000) && (in_stack_00000348 != 0)) {
                    _free(in_stack_00000350);
                  }
                }
                __ZN18aws_smithy_runtime6client7metrics27MetricsRuntimePluginBuilder5build17hd901da71ce5821e2E
                          (&stack0x000007c0,&stack0x00000330);
                if (in_stack_000007d0 == -0x7ffffffffffffffe) {
                  FUN_107c05cb4(&UNK_108c59b30,0x21,&stack0x00000330,&UNK_10b1dd398,&UNK_10b1d7590);
                }
                else {
                  FUN_1000e4668(&stack0x00000330,&stack0x000005a0,&stack0x00000a80);
                  if (in_stack_00000858 != (long *)0x0) {
                    lVar2 = *in_stack_00000858;
                    *in_stack_00000858 = lVar2 + 1;
                    if (lVar2 < 0) goto LAB_10008ab08;
                    _memcpy(&stack0x000007c0,&stack0x00000330,0x218);
                    _memcpy(&stack0x00000330,&stack0x000007c0,0x218);
                  }
                  if (in_stack_00000318 == (long *)0x0) {
                    _memcpy(&stack0x000007c0,&stack0x00000330,0x218);
                    puVar5 = (undefined8 *)_malloc(0x10);
                    if (puVar5 == (undefined8 *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
                      goto LAB_10008ab08;
                    }
                    puVar5[1] = 1;
                    *puVar5 = 1;
                  }
                  else {
                    lVar2 = *in_stack_00000318;
                    *in_stack_00000318 = lVar2 + 1;
                    if (lVar2 < 0) goto LAB_10008ab08;
                    _memcpy(&stack0x000007c0,&stack0x00000330,0x218);
                    FUN_1000c09cc(&stack0x00000970,&stack0x00000a80);
                    puVar5 = (undefined8 *)_malloc(0x30);
                    if (puVar5 == (undefined8 *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
                      goto LAB_10008ab08;
                    }
                    puVar5[1] = 1;
                    *puVar5 = 1;
                    puVar5[3] = &UNK_108c59a00;
                    puVar5[2] = 0;
                    puVar5[5] = &UNK_108c59ad0;
                    puVar5[4] = 0;
                    _memcpy(&stack0x000005a0,&stack0x000007c0,0x218);
                    puVar5 = (undefined8 *)_malloc(0x10);
                    if (puVar5 == (undefined8 *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
                      goto LAB_10008ab08;
                    }
                    puVar5[1] = 1;
                    *puVar5 = 1;
                    uRam0000002118b35a00 = 0;
                    puRam0000002118b35a18 = &UNK_10b1dcde8;
                    uRam0000002118b35a08 = CONCAT62(in_stack_000005f2,0xffff);
                    puRam0000002118b35a10 = puVar5;
                    _memcpy(&stack0x000007c0,&stack0x000005a0,0x218);
                    puVar5 = (undefined8 *)_malloc(0x10);
                    if (puVar5 == (undefined8 *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
                      goto LAB_10008ab08;
                    }
                    puVar5[1] = 1;
                    *puVar5 = 1;
                    /* WARNING: Read-only address (ram,0x000108c5a0ba) is written */
                    /* WARNING: Read-only address (ram,0x000108c5a0c2) is written */
                    /* WARNING: Read-only address (ram,0x000108c5a0ca) is written */
                    /* WARNING: Read-only address (ram,0x000108c5a0d2) is written */
                    _UNK_108c5a0d2 = &UNK_10b1dcdb0;
                    _UNK_108c5a0ba = in_stack_00000378;
                    _UNK_108c5a0c2 = in_stack_00000380;
                    _UNK_108c5a0ca = puVar5;
                    _memcpy(&stack0x000005a0,&stack0x000007c0,0x218);
                    puVar5 = (undefined8 *)_malloc(8);
                    if (puVar5 == (undefined8 *)0x0) {
                      FUN_107c03c64(2,8);
                      goto LAB_10008ab08;
                    }
                    *puVar5 = 0x1f801f701f601f4;
                    puVar6 = (undefined8 *)_malloc(0x28);
                    if (puVar6 == (undefined8 *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                      goto LAB_10008ab08;
                    }
                    puVar6[1] = 1;
                    *puVar6 = 1;
                    puVar6[2] = 4;
                    puVar6[3] = puVar5;
                    puVar6[4] = 4;
                    uRam0000002118b35a20 = 0;
                    puRam0000002118b35a38 = &UNK_10b1dce20;
                    uRam0000002118b35a28 = CONCAT62(in_stack_000005f2,0xffff);
                    puRam0000002118b35a30 = puVar6;
                    _memcpy(&stack0x000007c0,&stack0x000005a0,0x218);
                  }
                  _memcpy(&stack0x00000330,&stack0x000007c0,0x218);
                  _memcpy(&stack0x000007c0,&stack0x00000330,0x218);
                  puVar5 = (undefined8 *)_malloc(0x28);
                  if (puVar5 == (undefined8 *)0x0) {
                    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                  }
                  else {
                    puVar5[1] = 1;
                    *puVar5 = 1;
                    puVar5[2] = in_stack_000007c0;
                    puVar5[3] = in_stack_000007c8;
                    puVar5[4] = in_stack_000007d0;
                    FUN_1000c0d98(&stack0x00000970,&stack0x000005a0);
                    _memcpy(&stack0x000005a0,&stack0x000007c0,0x198);
                    puVar5 = (undefined8 *)_malloc(0x20);
                    if (puVar5 == (undefined8 *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
                    }
                    else {
                      puVar5[1] = 1;
                      *puVar5 = 1;
                      puVar5[2] = &UNK_108c59f3a;
                      puVar5[3] = 0xc;
                      FUN_1000c0fac(&stack0x00000750,&stack0x000007c0);
                      _memcpy(&stack0x000007c0,&stack0x000005a0,0x198);
                      FUN_1000c0c98(&stack0x000009e0,&stack0x000005a0);
                      __ZN18aws_smithy_runtime6client8defaults15default_plugins17hc6e72e2724f568bfE
                                (&stack0x00000a20,&stack0x00000a80);
                      FUN_1000e707c(&stack0x00000a50,&stack0x000005a0,&stack0x00000a20);
                      puVar5 = (undefined8 *)_malloc(0x48);
                      if (puVar5 != (undefined8 *)0x0) {
                        puVar5[5] = &UNK_108c59ad0;
                        puVar5[4] = 9;
                        puVar5[7] = 0;
                        puVar5[6] = 0;
                        puVar5[8] = 0;
                        puVar5[1] = 1;
                        *puVar5 = 1;
                        puVar5[3] = &UNK_108c59ac6;
                        puVar5[2] = 0x8000000000000000;
                        _memcpy(&stack0x00000a80,&stack0x000005a0,0x1a8);
                        FUN_100332b18(&stack0x00000a80);
                        _memcpy(&stack0x00000a80,&stack0x000007c0,0x198);
                        _memcpy(&stack0x000005a0,&stack0x00000a80,0x1a8);
                        FUN_1000e6e60(&stack0x00000a20,&stack0x00000a50,&stack0x000005a0);
                        puVar5 = (undefined8 *)0x8;
                        do {
                          puVar6 = puVar5 + 2;
                          FUN_1000e6c90(&stack0x00000a80,&stack0x000005a0,*puVar5,puVar5[1]);
                          puVar5 = puVar6;
                        } while (puVar6 != (undefined8 *)0x18);
                        FUN_10010a260(&stack0x00000a50);
                        FUN_100114f38(&stack0x00000270);
                        FUN_100114f38(unaff_x19 + 0x1e0);
                        in_stack_00000050[2] = 0x8000000000000000;
                        in_stack_00000050[1] = 1;
                        *(undefined1 *)(unaff_x19 + 0x3b9) = 0;
                        *in_stack_00000050 = 1;
                        in_stack_00000050[4] = 9;
                        in_stack_00000050[3] = &UNK_108c59ac6;
                        in_stack_00000050[5] = &UNK_108c59ad0;
                        in_stack_00000050[6] = 0x8000000000000000;
                        in_stack_00000050[7] = &UNK_108c59ad8;
                        in_stack_00000050[8] = 0x16;
                        in_stack_00000050[9] = 0x8000000000000000;
                        in_stack_00000050[10] = &UNK_108c59aee;
                        in_stack_00000050[0xb] = 0xf;
                        *(undefined1 *)(unaff_x19 + 0x3b8) = 1;
                        return;
                      }
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        FUN_107c05cb4(&UNK_108c5e03d,0x37,&stack0x00000330,&UNK_10b1dd3d8,&UNK_10b1dd0f8);
      }
    }
  }
  else {
    FUN_107c05cb4(&UNK_108c5e03d,0x37,&stack0x00000330,&UNK_10b1dd3d8,&UNK_10b1dd0f8);
  }
LAB_10008ab08:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008ab0c);
  (*pcVar1)();
}

