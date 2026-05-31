
/* WARNING: Removing unreachable block (ram,0x000100a09c34) */
/* WARNING: Removing unreachable block (ram,0x000100a09c50) */
/* WARNING: Removing unreachable block (ram,0x000100a09ffc) */
/* WARNING: Removing unreachable block (ram,0x000100a0a628) */
/* WARNING: Removing unreachable block (ram,0x000100a0a028) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0b4) */
/* WARNING: Removing unreachable block (ram,0x000100a0a118) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0c0) */
/* WARNING: Removing unreachable block (ram,0x000100a0a078) */
/* WARNING: Removing unreachable block (ram,0x000100a0a638) */
/* WARNING: Removing unreachable block (ram,0x000100a0a08c) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0a8) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0c8) */
/* WARNING: Removing unreachable block (ram,0x000100a0a124) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0dc) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0e4) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0ec) */
/* WARNING: Removing unreachable block (ram,0x000100a0a130) */
/* WARNING: Removing unreachable block (ram,0x000100a0a0f8) */
/* WARNING: Removing unreachable block (ram,0x000100a0a138) */
/* WARNING: Removing unreachable block (ram,0x000100a0a178) */
/* WARNING: Removing unreachable block (ram,0x000100a0a180) */
/* WARNING: Removing unreachable block (ram,0x000100a0a1c8) */
/* WARNING: Removing unreachable block (ram,0x000100a0a468) */

undefined8 FUN_100a09998(void)

{
  ushort *puVar1;
  ulong *puVar2;
  long *plVar3;
  code *pcVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x19;
  long lVar14;
  long *plVar15;
  code *unaff_x26;
  undefined8 *puVar16;
  ushort *puVar17;
  undefined1 *unaff_x27;
  long unaff_x29;
  ulong in_xzr;
  undefined1 auVar18 [16];
  undefined *in_stack_00000020;
  ushort *in_stack_00000090;
  code *in_stack_00000098;
  ushort *in_stack_000000a0;
  code *in_stack_000000a8;
  long *in_stack_000000b0;
  code *in_stack_000000b8;
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
  long *plVar19;
  undefined8 in_stack_000004a8;
  code *in_stack_000004b8;
  undefined8 in_stack_000004c0;
  long in_stack_000004c8;
  long *in_stack_00000598;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000090,s_env__git_origins__108acd690,&stack0x000005a0);
  puVar17 = in_stack_000000a0;
  plVar19 = (long *)in_stack_00000090;
  FUN_1009f8e14(&stack0x00000490);
  unaff_x19[0x20] = 0;
  unaff_x19[0x21] = 8;
  unaff_x19[0x22] = 0;
  lVar7 = unaff_x19[0x1e];
  lVar13 = lVar7 + unaff_x19[0x1f] * 0x18;
  unaff_x19[0x31] = lVar7;
  unaff_x19[0x32] = lVar13;
  pcVar5 = in_stack_00000098;
  if (lVar7 != lVar13) {
    do {
      unaff_x19[0x31] = lVar7 + 0x18;
      plVar3 = unaff_x19 + 0x33;
      __ZN17codex_cloud_tasks10env_detect16parse_owner_repo17h2b8af90c77a2e1c6E
                (plVar3,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      if (*plVar3 != -0x8000000000000000) {
        plVar15 = unaff_x19 + 0x17;
        plVar10 = (long *)*plVar15;
        unaff_x19[0x29] = unaff_x19[0x34];
        unaff_x19[0x28] = *plVar3;
        unaff_x19[0x2a] = unaff_x19[0x35];
        unaff_x19[0x2c] = unaff_x19[0x37];
        unaff_x19[0x2b] = unaff_x19[0x36];
        unaff_x19[0x2d] = unaff_x19[0x38];
        uVar6 = unaff_x19[0x18];
        if (uVar6 < 0xd) {
          if ((uVar6 != 0xc) || (*plVar10 != 0x646e656b6361622f || (int)plVar10[1] != 0x6970612d))
          goto LAB_100a0acbc;
LAB_100a0ace8:
          in_stack_00000090 = (ushort *)plVar15;
          in_stack_000000a0 = (ushort *)(unaff_x19 + 0x28);
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000490,s___wham_environments_by_repo_gith_108acd60a,&stack0x00000090)
          ;
        }
        else {
          __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                    (&stack0x00000090,plVar10,uVar6,&UNK_108cb4ed4,0xc);
          FUN_1011dd528(&stack0x00000490,&stack0x00000090);
          if (((ulong)plVar19 & 1) != 0) goto LAB_100a0ace8;
LAB_100a0acbc:
          in_stack_00000090 = (ushort *)plVar15;
          in_stack_000000a0 = (ushort *)(unaff_x19 + 0x28);
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000490,s___api_codex_environments_by_repo_108acd5dc,&stack0x00000090)
          ;
        }
        in_stack_00000098 = (code *)&DAT_100c7b3a0;
        pcVar4 = in_stack_00000098;
        unaff_x19[0x2f] = (long)pcVar5;
        unaff_x19[0x2e] = (long)plVar19;
        unaff_x19[0x30] = (long)puVar17;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000090,s_env__GET_108acd6f7,&stack0x000005a0);
        puVar17 = in_stack_000000a0;
        plVar19 = (long *)in_stack_00000090;
        FUN_1009f8e14(&stack0x00000490);
        unaff_x19[0x3b] = unaff_x19[0x2f];
        unaff_x19[0x3c] = unaff_x19[0x30];
        unaff_x19[0x3e] = unaff_x19[0x19];
        *(undefined1 *)((long)unaff_x19 + 0x1f9) = 0;
        FUN_1009f5dac(&stack0x00000090,unaff_x19 + 0x39);
        puVar1 = in_stack_000000a0;
        plVar3 = (long *)in_stack_00000090;
        if (in_stack_00000090 == (ushort *)0x8000000000000001) {
          uVar11 = 3;
          goto LAB_100a0ab54;
        }
        FUN_100d7130c(unaff_x19 + 0x39);
        if (plVar3 == (long *)0x8000000000000000) {
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          in_stack_00000090 = (ushort *)(unaff_x19 + 0x28);
          in_stack_000000a0 = (ushort *)(unaff_x19 + 0x2b);
          in_stack_000000b0 = (long *)(unaff_x29 + -0x70);
          in_stack_000000b8 =
               __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000490,s_env__by_repo_fetch_failed_for_____108acd6cf,&stack0x00000090
                    );
          FUN_1009f8e14(&stack0x000005a0);
          (**(code **)**(undefined8 **)(unaff_x29 + -0x70))();
          in_stack_00000098 = unaff_x26;
        }
        else {
          *(long **)(unaff_x29 + -0x70) = plVar3;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_100c7b3a0;
          *(ushort **)(unaff_x29 + -0x60) = puVar1;
          *(ushort **)(unaff_x29 + -0x98) = puVar1;
          in_stack_000000b0 = unaff_x19 + 0x2b;
          in_stack_000000a0 = (ushort *)(unaff_x19 + 0x28);
          in_stack_00000090 = (ushort *)(unaff_x29 + -0x98);
          in_stack_00000098 =
               (code *)&
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          in_stack_000000b8 = unaff_x26;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000490,s_env__by_repo_returned_env_s__for_108acd6a5,&stack0x00000090)
          ;
          FUN_1009f8e14(&stack0x000005a0);
          lVar7 = unaff_x19[0x22];
          if ((ushort *)(unaff_x19[0x20] - lVar7) < puVar1) {
            FUN_108855060(unaff_x19 + 0x20,lVar7,puVar1,8,0x48);
            lVar7 = unaff_x19[0x22];
          }
          _memcpy(unaff_x19[0x21] + lVar7 * 0x48,&DAT_100c7b3a0,(long)puVar1 * 0x48);
          unaff_x19[0x22] = lVar7 + (long)puVar1;
          if (plVar3 != (long *)0x0) {
            _free(&DAT_100c7b3a0);
          }
        }
        if (unaff_x19[0x2e] != 0) {
          _free(unaff_x19[0x2f]);
        }
        if (unaff_x19[0x2b] != 0) {
          _free(unaff_x19[0x2c]);
        }
        in_stack_000000a8 = unaff_x26;
        pcVar5 = pcVar4;
        if (unaff_x19[0x28] != 0) {
          _free(unaff_x19[0x29]);
          pcVar5 = (code *)&DAT_100c7b3a0;
        }
      }
      lVar7 = unaff_x19[0x31];
    } while (lVar7 != unaff_x19[0x32]);
  }
  lVar7 = 0;
  if (unaff_x19[0x1a] != -0x8000000000000000) {
    lVar7 = unaff_x19[0x1b];
  }
  func_0x00010284ac90(&stack0x00000090,unaff_x19[0x21],unaff_x19[0x22],lVar7,unaff_x19[0x1c]);
  pcVar5 = in_stack_000000b8;
  puVar17 = in_stack_000000a0;
  if (in_stack_00000090 == (ushort *)0x2) {
    plVar3 = (long *)unaff_x19[0x17];
    uVar6 = unaff_x19[0x18];
    if (uVar6 < 0xd) {
      if ((uVar6 != 0xc) || (*plVar3 != 0x646e656b6361622f || (int)plVar3[1] != 0x6970612d))
      goto LAB_100a09aac;
LAB_100a09b44:
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000090,s__wham_environments_108acd5c7,&stack0x00000490);
    }
    else {
      __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                (&stack0x00000090,plVar3,uVar6,&UNK_108cb4ed4,0xc);
      FUN_1011dd528(&stack0x00000490,&stack0x00000090);
      if (((ulong)plVar19 & 1) != 0) goto LAB_100a09b44;
LAB_100a09aac:
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000090,s__api_codex_environments_108acd5ad,&stack0x00000490);
    }
    unaff_x19[0x25] = (long)in_stack_000000a0;
    unaff_x19[0x24] = (long)in_stack_00000098;
    unaff_x19[0x23] = (long)in_stack_00000090;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000090,s_env__GET_108acd6f7,&stack0x000005a0);
    puVar17 = in_stack_000000a0;
    plVar19 = (long *)in_stack_00000090;
    FUN_1009f8e14(&stack0x00000490);
    __ZN7reqwest10async_impl6client13ClientBuilder3new17h08a006e79f8bdad0E(&stack0x00000090);
    FUN_102795040(&stack0x00000490,&stack0x00000090);
    if (plVar19 != (long *)0x8000000000000005) {
      in_stack_00000090 = (ushort *)plVar19;
      in_stack_000000a0 = puVar17;
      in_stack_000000b8 = in_stack_000004b8;
      lVar7 = FUN_1088588a8(&stack0x00000090);
      in_stack_000000b0 = (long *)0x8000000000000000;
LAB_100a0a24c:
      if (unaff_x19[0x23] != 0) {
        _free(unaff_x19[0x24]);
      }
      goto LAB_100a0a25c;
    }
    unaff_x19[0x26] = (long)in_stack_00000098;
    FUN_1011d51fc(&stack0x00000090,in_stack_00000098,&UNK_108ca1660,unaff_x19[0x24],unaff_x19[0x25])
    ;
    func_0x0001011c2214(&stack0x000005a0,unaff_x19[0x19]);
    if (in_stack_00000090 == (ushort *)0x2) {
      _memcpy(&stack0x00000490,&stack0x00000090,0x110);
      FUN_105c21328(&stack0x000005a0);
    }
    else {
      __ZN7reqwest4util15replace_headers17h5940be829e2e6996E(&stack0x000000b8,&stack0x000005a0);
      _memcpy(&stack0x00000490,&stack0x00000090,0x110);
    }
    auVar18 = FUN_105c4eee0(in_stack_00000598,&stack0x00000490);
    pcVar5 = auVar18._8_8_;
    lVar7 = *in_stack_00000598;
    *in_stack_00000598 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(&stack0x00000598);
    }
    *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar18;
    plVar3 = unaff_x19 + 0x29;
    if ((auVar18._0_8_ & 1) != 0) {
      *plVar3 = 0;
      if (pcVar5 == (code *)0x0) {
        func_0x000108a079f0(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
        goto LAB_100a0a658;
      }
      lVar13 = 0;
      lVar7 = 1;
      plVar10 = (long *)0x3;
LAB_100a09d28:
      pcVar4 = in_stack_000000b8;
      puVar1 = in_stack_000000a0;
      FUN_100e03d7c(lVar7,lVar13);
      if (plVar10 == (long *)0x3) {
        lVar7 = FUN_108858dec(pcVar5);
        in_stack_000000b0 = (long *)0x8000000000000000;
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x139) = 1;
        unaff_x19[0x29] = (long)plVar10;
        unaff_x19[0x2a] = (long)pcVar5;
        unaff_x19[0x39] = in_stack_00000110;
        unaff_x19[0x34] = in_stack_000000e8;
        unaff_x19[0x33] = in_stack_000000e0;
        unaff_x19[0x36] = in_stack_000000f8;
        unaff_x19[0x35] = in_stack_000000f0;
        unaff_x19[0x38] = in_stack_00000108;
        unaff_x19[0x37] = in_stack_00000100;
        unaff_x19[0x2c] = (long)in_stack_000000a8;
        unaff_x19[0x2b] = (long)puVar1;
        unaff_x19[0x2e] = (long)pcVar4;
        unaff_x19[0x2d] = (long)in_stack_000000b0;
        unaff_x19[0x30] = in_stack_000000c8;
        unaff_x19[0x2f] = in_stack_000000c0;
        unaff_x19[0x32] = in_stack_000000d8;
        unaff_x19[0x31] = in_stack_000000d0;
        *(short *)(unaff_x19 + 0x28) = (short)unaff_x19[0x36];
        in_stack_00000090 = (ushort *)0x0;
        in_stack_000000a0 = (ushort *)0x0;
        lVar7 = FUN_100ea2edc(plVar3,&stack0x00000090);
        if (lVar7 == 0) {
          lVar7 = 0;
          lVar13 = 1;
LAB_100a09e54:
          lVar14 = 1;
        }
        else {
          lVar13 = *(long *)(lVar7 + 8);
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) goto LAB_100a09e54;
          lVar12 = 0;
          lVar14 = 1;
          do {
            if ((*(byte *)(lVar13 + lVar12) != 9) && (0x5e < *(byte *)(lVar13 + lVar12) - 0x20)) {
              lVar7 = 0;
              lVar13 = 1;
              goto LAB_100a09e78;
            }
            lVar12 = lVar12 + 1;
          } while (lVar7 != lVar12);
          lVar14 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar7,1);
          if (lVar14 == 0) {
            func_0x0001087c9084(1,lVar7);
            goto LAB_100a0a658;
          }
        }
LAB_100a09e78:
        _memcpy(lVar14,lVar13,lVar7);
        unaff_x19[0x3a] = lVar7;
        unaff_x19[0x3b] = lVar14;
        unaff_x19[0x3c] = lVar7;
        *(undefined1 *)((long)unaff_x19 + 0x139) = 0;
        unaff_x19[0x4a] = unaff_x19[0x36];
        unaff_x19[0x49] = unaff_x19[0x35];
        unaff_x19[0x4c] = unaff_x19[0x38];
        unaff_x19[0x4b] = unaff_x19[0x37];
        unaff_x19[0x4d] = unaff_x19[0x39];
        unaff_x19[0x42] = unaff_x19[0x2e];
        unaff_x19[0x41] = unaff_x19[0x2d];
        unaff_x19[0x44] = unaff_x19[0x30];
        unaff_x19[0x43] = unaff_x19[0x2f];
        unaff_x19[0x46] = unaff_x19[0x32];
        unaff_x19[0x45] = unaff_x19[0x31];
        unaff_x19[0x48] = unaff_x19[0x34];
        unaff_x19[0x47] = unaff_x19[0x33];
        unaff_x19[0x3e] = unaff_x19[0x2a];
        unaff_x19[0x3d] = *plVar3;
        unaff_x19[0x40] = unaff_x19[0x2c];
        unaff_x19[0x3f] = unaff_x19[0x2b];
        *(undefined1 *)(unaff_x19 + 0xb4) = 0;
        FUN_1011d6b78(&stack0x00000090,unaff_x19 + 0x3d);
        puVar1 = in_stack_000000a0;
        plVar3 = (long *)in_stack_00000090;
        if (in_stack_00000090 == (ushort *)0x8000000000000001) {
          uVar11 = 5;
          goto LAB_100a0ab54;
        }
        if ((char)unaff_x19[0xb4] == '\x03') {
          FUN_100cbe7c8(unaff_x19 + 0x4e);
        }
        else if ((char)unaff_x19[0xb4] == '\0') {
          FUN_100e0d524(unaff_x19 + 0x3d);
        }
        if (plVar3 == (long *)0x8000000000000000) {
          *(undefined8 *)(unaff_x29 + -0xb0) = 0;
          *(undefined8 *)(unaff_x29 + -0xa8) = 1;
          *(undefined8 *)(unaff_x29 + -0xa0) = 0;
          FUN_100de20f8(0x1d);
          _free(0x1d);
        }
        else {
          *(long **)(unaff_x29 + -0xb0) = plVar3;
          *(undefined8 *)(unaff_x29 + -0xa8) = 0x1d;
          *(ushort **)(unaff_x29 + -0xa0) = puVar1;
        }
        puVar1 = (ushort *)(unaff_x19 + 0x28);
        in_stack_00000090 = puVar1;
        in_stack_000000a0 = (ushort *)(unaff_x19 + 0x3a);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000490,s_env__status__content_type__108acd703,&stack0x00000090);
        FUN_1009f8e14(&stack0x000005a0);
        in_stack_00000090 = *(ushort **)(unaff_x29 + -0xa8);
        lVar7 = *(long *)(unaff_x29 + -0xa0);
        in_stack_000000a0 = (ushort *)0x0;
        in_stack_000000b8 = (code *)lVar7;
        FUN_10064dc08(&stack0x00000490,&stack0x00000090);
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xb0;
        *(code **)(unaff_x29 + -0x68) = unaff_x26;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000090,s_env___environments__raw___108acd747,unaff_x29 + -0x70);
        in_stack_000000b0 = (long *)in_stack_00000090;
        FUN_1009f8e14(&stack0x000005a0);
        FUN_100c98558(&stack0x00000490);
        puVar9 = &
                 __ZN63__LT_http__status__StatusCode_u20_as_u20_core__fmt__Display_GT_3fmt17he0383041cfc0321eE
        ;
        if (*puVar1 - 200 < 100) {
          FUN_1006559bc(&stack0x00000490,*(undefined8 *)(unaff_x29 + -0xa8),
                        *(undefined8 *)(unaff_x29 + -0xa0));
          in_stack_00000090 = (ushort *)(unaff_x19 + 0x23);
          in_stack_000000a0 = (ushort *)(unaff_x29 + -0xb0);
          *(undefined8 *)(unaff_x29 + -0x70) = 0x8000000000000005;
          *(code **)(unaff_x29 + -0x68) = in_stack_00000098;
          *(ushort **)(unaff_x29 + -0x60) = puVar17;
          lVar13 = 0;
          if (unaff_x19[0x1a] != -0x8000000000000000) {
            lVar13 = unaff_x19[0x1b];
          }
          func_0x00010284ac90(&stack0x00000490,in_stack_00000098,puVar17,lVar13,unaff_x19[0x1c]);
          in_stack_00000090 = (ushort *)plVar19;
          in_stack_000000a0 = puVar17;
          in_stack_000000b8 = in_stack_000004b8;
          func_0x000100025ae8(&stack0x000005a0,&stack0x000000a0);
          pcVar5 = in_stack_000000b8;
          if (in_stack_000000b8 != (code *)0x8000000000000000) {
            if (in_stack_000004c8 == 0) {
              puVar9 = (undefined *)0x1;
            }
            else {
              puVar9 = (undefined *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_000004c8,1)
              ;
              if (puVar9 == (undefined *)0x0) {
                func_0x0001087c9084(1,in_stack_000004c8);
LAB_100a0a658:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100a0a65c);
                (*pcVar5)();
              }
            }
            _memcpy(puVar9,in_stack_000004c0,in_stack_000004c8);
          }
          if (in_stack_000000a0 != (ushort *)0x0) {
            _free(in_stack_000004a8);
          }
          if (((ulong)pcVar5 & 0x7fffffffffffffff) != 0) {
            _free(in_stack_000004c0);
          }
          if (puVar17 != (ushort *)0x0) {
            pcVar5 = in_stack_00000098 + 0x30;
            do {
              if (*(long *)(pcVar5 + -0x20) != 0) {
                _free(*(undefined8 *)(pcVar5 + -0x18));
              }
              if (*(long *)(pcVar5 + -8) != -0x8000000000000000 && *(long *)(pcVar5 + -8) != 0) {
                _free(*(undefined8 *)pcVar5);
              }
              pcVar5 = pcVar5 + 0x48;
              puVar17 = (ushort *)((long)puVar17 + -1);
            } while (puVar17 != (ushort *)0x0);
          }
          _free(in_stack_00000098);
          in_stack_00000020 = puVar9;
        }
        else {
          in_stack_00000090 = (ushort *)(unaff_x19 + 0x23);
          in_stack_000000a0 = puVar1;
          in_stack_000000b8 = unaff_x26;
          lVar7 = FUN_108858fa8(s_GET_failed____content_type____bo_108acd764,&stack0x00000090);
          in_stack_000000b0 = (long *)0x8000000000000000;
        }
        if (*(long *)(unaff_x29 + -0xb0) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0xa8));
        }
        if (unaff_x19[0x3a] != 0) {
          _free(unaff_x19[0x3b]);
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x139) = 0;
      lVar13 = *(long *)unaff_x19[0x26];
      *(long *)unaff_x19[0x26] = lVar13 + -1;
      LORelease();
      if (lVar13 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(unaff_x19 + 0x26);
      }
      goto LAB_100a0a24c;
    }
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000090,pcVar5);
    if (in_stack_00000090 != (ushort *)0x4) {
      lVar7 = unaff_x19[0x28];
      lVar13 = unaff_x19[0x29];
      pcVar5 = in_stack_00000098;
      plVar10 = (long *)in_stack_00000090;
      goto LAB_100a09d28;
    }
    uVar11 = 4;
LAB_100a0ab54:
    *unaff_x27 = uVar11;
  }
  else {
    if (in_stack_000000b0 == (long *)0x0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(in_stack_000000b0);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,in_stack_000000b0);
        goto LAB_100a0a658;
      }
    }
    _memcpy(lVar7,in_stack_000000a8,in_stack_000000b0);
    if (pcVar5 != (code *)0x8000000000000000) {
      if (in_stack_000000c8 == 0) {
        in_stack_00000020 = (undefined *)0x1;
        _memcpy(1,in_stack_000000c0,0);
      }
      else {
        in_stack_00000020 = (undefined *)_malloc(in_stack_000000c8);
        if (in_stack_00000020 == (undefined *)0x0) {
          func_0x0001087c9084(1,in_stack_000000c8);
          goto LAB_100a0a658;
        }
        _memcpy(in_stack_00000020,in_stack_000000c0,in_stack_000000c8);
      }
    }
    if (puVar17 != (ushort *)0x0) {
      _free(in_stack_000000a8);
    }
    if (((ulong)pcVar5 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000000c0);
    }
LAB_100a0a25c:
    lVar13 = unaff_x19[0x21];
    lVar14 = unaff_x19[0x22];
    if (lVar14 != 0) {
      puVar16 = (undefined8 *)(lVar13 + 0x30);
      do {
        if (puVar16[-4] != 0) {
          _free(puVar16[-3]);
        }
        if (puVar16[-1] != -0x8000000000000000 && puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 9;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if (unaff_x19[0x20] != 0) {
      _free(lVar13);
    }
    lVar13 = unaff_x19[0x1e];
    lVar14 = unaff_x19[0x1f];
    if (lVar14 != 0) {
      puVar16 = (undefined8 *)(lVar13 + 8);
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if (unaff_x19[0x1d] != 0) {
      _free(lVar13);
    }
    if (unaff_x19[0x1a] == -0x8000000000000000 || unaff_x19[0x1a] == 0) {
      *unaff_x27 = 1;
    }
    else {
      _free(unaff_x19[0x1b]);
      *unaff_x27 = 1;
    }
    if (in_stack_000000b0 != (long *)0x8000000000000001) {
      FUN_100cb1d7c();
      in_stack_000000b8 = (code *)in_stack_00000020;
      in_stack_00000090 = (ushort *)0x3;
      in_stack_000000a0 = (ushort *)lVar7;
      func_0x000100fd3a84(&stack0x00000490);
      if (plVar19 != (long *)0xc) {
        FUN_100df7418(&stack0x00000490);
      }
      FUN_100def764(unaff_x19 + 4);
      if (unaff_x19[1] != 0) {
        _free(unaff_x19[2]);
      }
      lVar13 = *unaff_x19;
      LOAcquire();
      lVar7 = *(long *)(lVar13 + 0x1c8);
      *(long *)(lVar13 + 0x1c8) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        LOAcquire();
        lVar7 = *(long *)(lVar13 + 0x88);
        *(long *)(lVar13 + 0x88) = lVar7 + 1;
        lVar7 = func_0x000100fcb63c(lVar13 + 0x80,lVar7);
        *(ulong *)(lVar7 + 0x1510) = *(ulong *)(lVar7 + 0x1510) | 0x200000000;
        LORelease();
        puVar2 = (ulong *)(lVar13 + 0x110);
        LOAcquire();
        uVar6 = *puVar2;
        *puVar2 = uVar6 | 2;
        LORelease();
        if (uVar6 == 0) {
          lVar7 = *(long *)(lVar13 + 0x100);
          *(undefined8 *)(lVar13 + 0x100) = 0;
          *puVar2 = in_xzr;
          LORelease();
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar13 + 0x108));
          }
        }
      }
      lVar7 = *(long *)*unaff_x19;
      *(long *)*unaff_x19 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000102872bc8();
      }
      uVar8 = 0;
      uVar11 = 1;
      goto LAB_100a0ab60;
    }
  }
  uVar8 = 1;
  uVar11 = 4;
LAB_100a0ab60:
  *(undefined1 *)(unaff_x19 + 0x10) = uVar11;
  return uVar8;
}

